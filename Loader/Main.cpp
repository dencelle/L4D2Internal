#include "stdafx.h"


int main()
{
	auto g_Process = std::make_unique<Process::CProcess>( "left4dead2.exe" );
	g_Process->Inject()
		? printf( "Successfully injected.\n" )
		: printf( "Injection failed.\n" );

	return _getwch();
}

