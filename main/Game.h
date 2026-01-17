#pragma once

////////////////////////////////////////////////////////////////////////////////////////////////////
// @brief Game을 동작 시키는 대표 클래스
////////////////////////////////////////////////////////////////////////////////////////////////////
class Game
{
private:
	/// 윈도우 핸들
	HWND m_hwnd;

	/// 윈도우 창 넓이
	uint32 m_width;

	/// 윈도우 창 높이
	uint32 m_height;

private:
	/// Device
	ComPtr< ID3D11Device > m_device;

	/// Context
	ComPtr< ID3D11DeviceContext > m_deviceContext;

	/// SwapChain
	ComPtr< IDXGISwapChain > m_swapChain;

	/// RTV
	ComPtr< ID3D11RenderTargetView > m_renderTargetView;

	/// RTV - ClearColor
	float m_clearColor[ 4 ] = { 0.5f, 0.5f, 0.5f, 0.5f };

	/// Misc
	D3D11_VIEWPORT m_viewPort;


public:
	/// 생성자
	Game();

	/// 소멸자
	~Game();

	/// 클래스를 초기화한다.
	void Init( HWND hwnd );

	/// 업데이트 한다.
	void Update();

	/// 렌더링을 한다.
	void Render();

private:
	/// 렌더링을 시작한다.
	void _RenderBegin();

	/// 렌더링을 종료한다.
	void _RenderEnd();

private:
	/// Device와 SwapChain 객체를 생성한다.
	void _CreateDeviceAndSwapChain();

	/// RenderTargetView 객체를 생성한다.
	void _CreateRenderTargetView();

	/// ViewPort를 세팅한다.
	void _SetViewPort();
};

