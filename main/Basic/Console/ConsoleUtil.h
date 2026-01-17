#pragma once


////////////////////////////////////////////////////////////////////////////////////////////////////
// @brief ConsoleUtil
////////////////////////////////////////////////////////////////////////////////////////////////////
class ConsoleUtil
{
public:
	/// 생성자
	inline ConsoleUtil()
	{
	#ifdef _DEBUG
		AllocConsole();

		FILE* fp = nullptr;
		freopen_s( &fp, "CONOUT$", "w", stdout );
		freopen_s( &fp, "CONOUT$", "w", stderr );
		freopen_s( &fp, "CONIN$", "r", stdin );

		std::ios::sync_with_stdio( true );

		SetConsoleOutputCP( CP_UTF8 );
	#endif
	}

	/// 소멸자
	inline ~ConsoleUtil()
	{
	#ifdef _DEBUG
		FreeConsole();
	#endif
	}
};

