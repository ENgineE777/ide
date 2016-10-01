

cbuffer vs_params : register( b0 )
{
    matrix transform;
    float4 desc[4];
};

Texture2D diffuseMap : register( t0 );
SamplerState sampler1 : register( s0 );

Texture2D maskMap : register( t1 );
SamplerState sampler2 : register( s1 );

cbuffer ps_params : register( b0 )
{
	float4 color;    
};

struct VS_INPUT
{
    float3 position : POSITION;
    float2 texCoord : TEXCOORD0;
    float2 texCoord2 : TEXCOORD1;
};

struct PS_INPUT
{
    float4 Pos : SV_POSITION;
    float2 TexCoord : TEXCOORD0;
};

struct PS_INPUT2
{
    float4 Pos : SV_POSITION;
    float2 TexCoord  : TEXCOORD0;
    float2 TexCoord2 : TEXCOORD1;
};


PS_INPUT VS( VS_INPUT input )
{
	float4 posTemp = float4(desc[1].x + desc[1].z * input.position.x,
							desc[1].y + desc[1].w * input.position.y, 0, 1.0f);
	
	posTemp = mul (posTemp, transform);

	posTemp.x = -1.0f + posTemp.x/desc[2].x * 2.0f;
	posTemp.y = 1.0f - posTemp.y/desc[2].y * 2.0f;
	
	PS_INPUT output = (PS_INPUT)0;

	output.Pos = float4(posTemp.x, posTemp.y, desc[2].z, 1.0);
	output.TexCoord = float2(desc[0].x + desc[0].z * input.texCoord.x,
					         desc[0].y + desc[0].w * input.texCoord.y);

	return output;
}

float4 PS( PS_INPUT input) : SV_Target
{
	return diffuseMap.Sample( sampler1, input.TexCoord ) * color;	
}

PS_INPUT2 VS2( VS_INPUT input )
{
float4 posTemp = float4(desc[1].x + desc[1].z * input.position.x,
							desc[1].y + desc[1].w * input.position.y, 0, 1.0f);
	
	posTemp = mul (posTemp, transform);

	posTemp.x = -1.0f + posTemp.x/desc[2].x * 2.0f;
	posTemp.y = 1.0f - posTemp.y/desc[2].y * 2.0f;
	
	PS_INPUT2 output = (PS_INPUT2)0;

	output.Pos = float4(posTemp.x, posTemp.y, desc[2].z, 1.0);
	output.TexCoord = float2(desc[0].x + desc[0].z * input.texCoord.x,
					         desc[0].y + desc[0].w * input.texCoord.y);
	output.TexCoord2 = float2(desc[3].x + desc[3].z * input.texCoord2.x,
					         desc[3].y + desc[3].w * input.texCoord2.y);

	return output;

}

float4 PS2( PS_INPUT2 input) : SV_Target
{
	float alpha = maskMap.Sample( sampler2, input.TexCoord2 ).r;

	float4 clr = diffuseMap.Sample( sampler1, input.TexCoord ) * color;		
	clr.a = clr.a * alpha;
	return clr;
}