///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//                     LibXL C headers version 3.9.0                         //
//                                                                           //
//       Copyright (c) 2008 - 2020 Dmytro Skrypnyk and XLware s.r.o.         //
//                                                                           //
//   THIS FILE AND THE SOFTWARE CONTAINED HEREIN IS PROVIDED 'AS IS' AND     //
//                COMES WITH NO WARRANTIES OF ANY KIND.                      //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

#ifndef LIBXL_RICHSTRINGW_H
#define LIBXL_RICHSTRINGW_H

#include "setup.h"
#include "handle.h"


#ifdef __cplusplus
extern "C"
{
#endif

    XLAPI     FontHandle XLAPIENTRY xlRichStringAddFontW(RichStringHandle handle, FontHandle initFont);
    XLAPI           void XLAPIENTRY xlRichStringAddTextW(RichStringHandle handle, const wchar_t* text, FontHandle font);
    XLAPI const wchar_t* XLAPIENTRY xlRichStringGetTextW(RichStringHandle handle, int index, FontHandle* font);
    XLAPI            int XLAPIENTRY xlRichStringTextSizeW(RichStringHandle handle);

#ifdef __cplusplus
}
#endif

#endif

