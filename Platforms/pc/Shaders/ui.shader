
cbuffer vs_params : register( b0 )
{
    float4 desc[3];    
};


struct VS_INPUT
{
    float3 position : POSITION;
    float2 texCoord    : TEXCOORD;
};

struct PS_INPUT
{
    float4 position : SV_POSITION;
    float2 texCoord : COLOR;
};

Texture2D diffuseMap : register( t0 );
SamplerState samLinear : register( s0 );

PS_INPUT VS( VS_INPUT input )
{
	float4 center = float4(desc[1].x + desc[1].z * 0.5,
					       desc[1].y + desc[1].w * 0.5, 0, 0);
						   
	float4 posTemp = float4(desc[1].x + desc[1].z * input.position.x - center.x,
						    desc[1].y + desc[1].w * input.position.y - center.y, 0, 0);

	posTemp.z = posTemp.x * desc[2].w - posTemp.y * desc[2].z + center.x;
	posTemp.w = posTemp.x * desc[2].z + posTemp.y * desc[2].w + center.y;
	
	posTemp.z = -1.0f + posTemp.z/desc[2].x * 2.0;
	posTemp.w = 1.0f - posTemp.w/desc[2].y * 2.0f;

	PS_INPUT output;

	output.position = float4( posTemp.z, posTemp.w, 0.5f, 1.0f);

	output.texCoord = float2(desc[0].x + desc[0].z * input.texCoord.x,
					         desc[0].y + desc[0].w * input.texCoord.y);    

	return output;
}

float4 PS( PS_INPUT input) : SV_Target
{
	return diffuseMap.Sample( samLinear, input.texCoord );	
}