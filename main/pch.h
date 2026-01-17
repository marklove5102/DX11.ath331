#pragma once


#include "Values.h"
#include "Types.h"
#include "Struct.h"

#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <unordered_map>

#include <windows.h>
#include <assert.h>

#include <d3d11.h>
#include <d3dcompiler.h>
#include <wrl.h>
#include <DirectXMath.h>

#include <DirectXTex/DirectXTex.h>
#include <DirectXTex/DirectXTex.inl>


#include "Utils/Log/AtLog.h"


using namespace DirectX;
using namespace Microsoft::WRL;

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "d3dcompiler.lib")

#ifdef _DEBUG
#pragma comment(lib,"DirectXTex\\DirectXTex_debug.lib")
#pragma comment(lib,"Common\\Common.lib")
#else
#pragma comment(lib,"DirectXTex\\DirectXTex.lib")
#pragma comment(lib,"Common\\Common.lib")
#endif

#define CHECK( p ) assert( SUCCEEDED( p ) )