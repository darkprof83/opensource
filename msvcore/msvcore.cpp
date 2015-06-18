/*	Copyright (C) 2004-2100 Mishael Senin, aka MikelSV.  All rights reserved.

	�������� ������������� ������. :]
	�� �� ������ �������� ��� � ������ ���������� � ������������ � �� ����������� ��������� ����.
	�� ��������� � �� ����� ����� �� ��� �� ������ ����������.
	����������� �������������� � ������������.
	��� ������������ ��� ���� � ����� �� ��������, ���� ���� �� ����������� ����������� ���� ����.

	License popularizing author. [LPA]
	You should not change the name and other information about the developer and not assign authorship itself.
	Do not sell and do not take money for the code from this library.
	Permission is granted to modify and refine.
	Author bears no responsibility for any consequences of using this code.
	Responsibility for shooting through your leg lies entirely on you.
* /

//>> Velcome to MSV Lib. <<
//>> New name MSV Core <<

//>> So. What you want?
//>> I included Strings for You.
//>> What can i included for you?

// !!!!!>>>>>>>>>>> Add this to general cpp: #define USEMSV_GENERALCPP
//					Add to project: "..\..\opensource\msvcore\VString.cpp" "..\..\opensource\msvcore\MString.cpp"


// ----------------------------------------------------------------- Simple Variant ---------------------------
/*
#define USEMSV_GENERALCPP
#define PROJECTNAME "projectname"
#define PROJECTVER PROJECTNAME ## _versions

#include "../../opensource/msvcore/msvcore.cpp"

Versions PROJECTVER[]={
	// new version to up
	"0.0.0.1", "10.10.2013 21:24"
};

int main(int args, char* arg[]){
	ILink link; mainp(args, arg, link);
	print(PROJECTNAME, " v.", PROJECTVER[0].ver," (", PROJECTVER[0].date, ").\r\n");
	return 0;
}
*/
// ----------------------------------------------------------------- End of Simple Variant -----------------------

// Extensions
// #define USEMSV_ANDOID - for android apps
// #define USEMSV_LOGPRINT - save output data to memory buffer
// #define USEMSV_FILEPRINT - save output data to file

// #define USEMSV_ITOS	- use Itos templates

// #define USEMSV_XDATACONT - use XDataContainer ( Parsers: XML, Json )
// #define USEMSV_AMF - use amf encoder/decoder

// #define USEMSV_FLASH - use for Crossbridge compile

// #define USEMSV_ILIST - use IList template dunamic array. Vector, one resized memory block.
// #define USEMSV_MLIST - use MList template dunamic array
// #define USEMSV_OLIST - use OList template dunamic array
// #define USEMSV_ULIST - use UList template dynamic array. // In process

// #define USEMSV_STORMSERVER - use storm server
// #define USEMSV_HTTP - use http functions
// #define USEMSV_WEBSOCKETS - use WebSockets client and listen_websockets for storm

// #define USEMSV_OPENSSL - use openssl // add to include path: ..\..\openssl-1.0.2\include
// #define USEMSV_MYSQL - use MySQL // add to include path to mysql.h and mysql.lib
// #define USEMSV_MODLINE - use ModLine
// #define USEMSV_NMEA - use nmea functions

// #define USEMSV_CONSOLE - use console functions
// #define USEMSV_MSL_FL - use MSL Fast Line
// #define USEMSV_PCRE - use PCRE functions // add to include path to pcre.h and pcre.lib

// #define USEMSV_MEMORYCONTROL - interception malloc() & free()
// #define USEMSV_INTERCEPT_MALLOC - interception malloc() & free() // don't work

#ifndef PROJECTNAME
	#error Please set #define PROJECTNAME "you_project_name"
#endif

// Include Defines
#include "msvdefine.h"

// Include Virtual Strings
#include "VString.h"

// Include Real Strings
#include "MString.h"

// Include Defines Mobile (???)
#include "msvdefine_m.h"

// Include 4D Strings
// #include...


#ifdef USEMSV_GENERALCPP

// MMatrix
#include "list/MMatrix.h"
#include "list/MMatrixCore.h"

#ifdef USEMSV_FLASH
	#include "flash/flash.cpp"
#endif

#include "msvdefine.cpp"

#include "crossplatform/treads.cpp"
//#include "crossplatform-filefunc.cpp"
#include "crossplatform/mscr.cpp"
#include "crossplatform/send.cpp"
//#include "msvio.h"
//#include "msvnet.h"
#include "crossplatform/msvnet.cpp"

// intercept malloc & free
#ifdef USEMSV_INTERCEPT_MALLOC
	#include "special/intercept-malloc.h"
#endif

#ifdef USEMSV_ITOS
	#include "crossplatform/itos.cpp"
#endif

#ifdef USEMSV_XDATACONT
	#include "proto/xdatacont.cpp"
#endif

#ifdef USEMSV_MLIST
	#include "list/MList.h"
#endif

#ifdef USEMSV_ILIST
	#include "list/IList.h"
#endif

#ifdef USEMSV_OLIST
	#include "list/OList.h"
#endif

#ifdef USEMSV_ULIST
	#include "list/UList.h"
#endif

#ifdef USEMSV_AMF
	#include "proto/amf.cpp"
#endif

#ifdef USEMSV_PCRE
	#include "special/pcre-include.h"
#endif

#ifdef USEMSV_CONSOLE
	#include "crossplatform/console.cpp"
#endif

#ifdef USEMSV_OPENSSL
	#include "crossplatform/openssl.cpp"
#endif

#ifdef USEMSV_MODLINE
	#include "cntx/modline.cpp"
#endif

#ifdef USEMSV_WEBSOCKETS
	#include "proto/websockets.cpp"
#endif

#ifdef USEMSV_MYSQL
	#include "proto/mysql-con.cpp"
#endif

#ifdef USEMSV_MSL_FL
	#include "msl-fl/msl-fl.h"
#endif

#ifdef USEMSV_HTTP
	#include "crossplatform/iheader.cpp"
	#include "crossplatform/http.cpp"
#endif

#ifdef USEMSV_STORMSERVER
	#include "server/storm/storm-include.h"
#endif

#ifdef USEMSV_ANDOID
	#include "android/device.cpp"
#endif

#ifdef USEMSV_NMEA
	#include "sat/nmea.cpp"
#endif


#endif



// NEED

