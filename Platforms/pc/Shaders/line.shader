
cbuffer vs_params : register( b0 )
{
    matrix modelViewProj;    
};


struct VS_INPUT
{
    float3 position : POSITION;
    float4 color    : COLOR0;
};

struct PS_INPUT
{
    float4 position : SV_POSITION;
    float4 color    : COLOR;
};

PS_INPUT VS( VS_INPUT input )
{	
	PS_INPUT output = (PS_INPUT)0;
	
	output.position = mul( float4(input.position, 1.0f), modelViewProj );
	output.color = input.color;

	return output;
}

PS_INPUT VS2D( VS_INPUT input )
{	
	PS_INPUT output = (PS_INPUT)0;

	output.position = float4(input.position, 1.0);
	output.color = input.color;

	return output;
}


float4 PS( PS_INPUT input) : SV_Target
{
	return input.color;	
}