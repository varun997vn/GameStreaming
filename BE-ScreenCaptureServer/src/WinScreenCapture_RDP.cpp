/*************************************************************************************************/
/* Project: Screen capture server                                                                */
/* Author: @aviloria (GitHub)                                                                    */
/*-----------------------------------------------------------------------------------------------*/
/* Copyleft license                                                                              */
/*    YOU ARE ALLOWED TO FREELY DISTRIBUTE COPIES AND MODIFIED VERSIONS OF THIS WORK WITH        */
/*    THE STIPULATION THAT THE SAME RIGHTS BE PRESERVED IN DERIVATIVE WORKS CREATED LATER.       */
/*************************************************************************************************/
//-------------------------------------------------------------------------------------------------
#include "WinScreenCapture_RDP.h"
//-------------------------------------------------------------------------------------------------
#define MIRROR_DRIVER_NAME      _T("RDP Encoder Mirror Driver")
//-------------------------------------------------------------------------------------------------
#if defined(_DEBUG)
#  define LOG_DEBUG(...)  ::fprintf(stdout, __VA_ARGS__)
#else
#  define LOG_DEBUG(...)
#endif
#define LOG_INFO(...)  ::fprintf(stdout, __VA_ARGS__)
#define LOG_ERROR(...)  ::fprintf(stderr, __VA_ARGS__)
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------

WinScreenCapture_RDP::WinScreenCapture_RDP(const TCHAR * /*strDisplayDevice*/)
	: WinScreenCapture_GDI(MIRROR_DRIVER_NAME)
{
}
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
