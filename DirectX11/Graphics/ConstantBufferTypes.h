#pragma once
#include<DirectXMath.h>

struct alignas(16) CB_VS_vertexshader
{
public:
	CB_VS_vertexshader() : mat{ DirectX::XMMatrixIdentity() }{}

	DirectX::XMMATRIX mat;
};