#if defined(_MSC_VER) && !defined(NDEBUG) && defined(_CRTDBG_MAP_ALLOC) && !defined(MSVCDBG_H)
#define MSVCDBG_H
/*!
 * @file msvcdbg.h
 * @brief Memory debugger for msvc
 * @author koturn
 */
#include <crtdbg.h>


static void
__msvc_init_memory_check__(void);


#pragma section(".CRT$XCU", read)
__declspec(allocate(".CRT$XCU"))
void (* __msvc_init_memory_check___)(void) = __msvc_init_memory_check__;


/*!
 * @brief Enable heap management
 */
static void
__msvc_init_memory_check__(void)
{
  _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF | _CRTDBG_DELAY_FREE_MEM_DF);
  _CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
  _CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);
}


#endif
