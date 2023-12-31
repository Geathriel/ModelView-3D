﻿#pragma once

namespace Model_Viewer_3d
{
	// Stały bufor używany do wysłania macierzy MVP do programu do cieniowania wierzchołków.
	struct ModelViewProjectionConstantBuffer
	{
		DirectX::XMFLOAT4X4 model;
		DirectX::XMFLOAT4X4 view;
		DirectX::XMFLOAT4X4 projection;
	};

	// Używany do wysłania danych dla wierzchołków do programu do cieniowania wierzchołków.
	struct VertexPositionColor
	{
		DirectX::XMFLOAT3 pos;
		DirectX::XMFLOAT3 color;
	};
}