/* What follows are commands for the directories */
/* to find the included headers */

#ifndef __TEMPLATEBURGERBASE_H__
#define __TEMPLATEBURGERBASE_H__
#endif

/* DIR: "ansi:" */
/* DIR: "audio:" */
/* DIR: "commandline:" */
/* DIR: "compression:" */
/* DIR: "file:" */
/* DIR: "flashplayer:" */
/* DIR: "graphics:" */
/* DIR: "graphics:effects:" */
/* DIR: "graphics:shaders:" */
/* DIR: "input:" */
/* DIR: "ios:" */
/* DIR: "lowlevel:" */
/* DIR: "math:" */
/* DIR: "memory:" */
/* DIR: "shield:" */
/* DIR: "text:" */
/* DIR: "windows:" */
/* DIR: "xbox360:" */
/* DIR: "macosx:" */
/* DIR: "mac:" */
/* DIR: "msdos:" */
/* DIR: "ps3:" */
/* DIR: "ps4:" */
/* DIR: "vita:" */
/* OUTPUT: "..:bin:burger.h" */

/* BEGIN */
/***************************************

	Burgerlib base header
	
	Copyright (c) 1995-2016 by Rebecca Ann Heineman <becky@burgerbecky.com>

	It is released under an MIT Open Source license. Please see LICENSE
	for license details. Yes, you can use it in a
	commercial title without paying anything, just give me a credit.
	Please? It's not like I'm asking you for money!
	
	Documentation can be found at http://www.burgerbecky.com/burgerlib/docs
	
	Comments, suggestions, bug fixes, email me at becky@burgerbecky.com

***************************************/

#ifndef __BURGER__
#define __BURGER__
#include "brtypes.h"

#ifndef _INC_STDIO
#include <stdio.h>
#endif

#if defined(BURGER_STRUCT_ALIGN)
#pragma options align=native
#elif defined(BURGER_STRUCT_PACKPUSH)
#pragma pack(push,8)
#elif defined(BURGER_STRUCT_PACK)
#pragma pack(8)
#endif

#if defined(__MWERKS__)
#pragma ANSI_strict off
#pragma enumsalwaysint on
#endif

#include "brwatcom.h"
#include "brvisualstudio.h"
#include "brxcode.h"
#include "brmetrowerks.h"
#include "brsnsystems.h"
#include "brassert.h"
#include "brdebug.h"
#include "brwindowstypes.h"
#include "brxbox360types.h"
#include "brmacosxtypes.h"
#include "brmactypes.h"
#include "briostypes.h"
#include "brmsdostypes.h"
#include "brps3types.h"
#include "brps4types.h"
#include "brshieldtypes.h"
#include "brvitatypes.h"
#include "brendian.h"
#include "brfpinfo.h"
#include "brstaticrtti.h"
#include "brbase.h"
#include "brstdouthelpers.h"
#include "brguid.h"
#include "brisolatin1.h"
#include "brmacromanus.h"
#include "brwin1252.h"
#include "bratomic.h"
#include "brcriticalsection.h"
#include "brmemorymanager.h"
#include "brmemoryansi.h"
#include "brmemoryhandle.h"
#include "brglobalmemorymanager.h"
#include "brstringfunctions.h"
#include "brutf8.h"
#include "brutf16.h"
#include "brutf32.h"
#include "brprintf.h"
#include "brqueue.h"
#include "brsmartpointer.h"
#include "brpair.h"
#include "brsimplearray.h"
#include "brarray.h"
#include "bradler16.h"
#include "bradler32.h"
#include "brcrc32.h"
#include "brsdbmhash.h"
#include "brdjb2hash.h"
#include "brmd2.h"
#include "brmd4.h"
#include "brmd5.h"
#include "brpackfloat.h"
#include "brsha1.h"
#include "brunpackbytes.h"
#include "brglobals.h"
#include "brstring.h"
#include "brstring16.h"
#include "brhashmap.h"
#include "brfixedpoint.h"
#include "brfloatingpoint.h"
#include "brvector2d.h"
#include "brvector3d.h"
#include "brvector4d.h"
#include "brfixedvector2d.h"
#include "brfixedvector3d.h"
#include "brfixedvector4d.h"
#include "brmatrix3d.h"
#include "brmatrix4d.h"
#include "brfixedmatrix3d.h"
#include "brfixedmatrix4d.h"
#include "brdoublylinkedlist.h"
#include "brlinkedlistpointer.h"
#include "brlinkedlistobject.h"
#include "brnumberstring.h"
#include "brnumberstringhex.h"
#include "brsimplestring.h"
#include "brinputmemorystream.h"
#include "broutputmemorystream.h"
#include "brtimedate.h"
#include "brtick.h"
#include "brfilename.h"
#include "brfileansihelpers.h"
#include "brfilemanager.h"
#include "brfile.h"
#include "brdirectorysearch.h"
#include "brdosextender.h"
#include "brautorepeat.h"
#include "brrandommanager.h"
#include "brrunqueue.h"
#include "brdetectmultilaunch.h"
#include "broscursor.h"
#include "brpoint2d.h"
#include "brrect.h"
#include "brcodelibrary.h"
#include "brperforce.h"
#include "brconsolemanager.h"
#include "brcompress.h"
#include "brcompresslbmrle.h"
#include "brcompresslzss.h"
#include "brcompressdeflate.h"
#include "brdecompress.h"
#include "brdecompresslbmrle.h"
#include "brdecompresslzss.h"
#include "brdecompressdeflate.h"
#include "brrezfile.h"
#include "brgameapp.h"
#include "brrenderer.h"
#include "brrenderersoftware8.h"
#include "brrenderersoftware16.h"
#include "brimage.h"
#include "brtexture.h"
#include "brvertexbuffer.h"
#include "brvertexbufferopengl.h"
#include "brvertexbufferdirectx9.h"
#include "brdisplay.h"
#include "brdisplayopengl.h"
#include "brdisplayopenglsoftware8.h"
#include "brdisplaydirectx9.h"
#include "brdisplaydirectx9software8.h"
#include "brdisplaydirectx11.h"
#include "brdisplaydib.h"
#include "brdisplaydibsoftware8.h"
#include "brpalette.h"
#include "brdxt1.h"
#include "brdxt3.h"
#include "brdxt5.h"
#include "brtexturedirectx9.h"
#include "brtextureopengl.h"
#include "brshaders.h"
#include "breffect.h"
#include "breffectstaticpositiontexture.h"
#include "breffect2d.h"
#include "breffectpositiontexturecolor.h"
#include "brshader2dcolorvertex.h"
#include "brshader2dccolor.h"
#include "brfileapf.h"
#include "brfilebmp.h"
#include "brfiledds.h"
#include "brfilegif.h"
#include "brfileini.h"
#include "brfilelbm.h"
#include "brfilepcx.h"
#include "brfilepng.h"
#include "brfiletga.h"
#include "brfilexml.h"
#include "brshape8bit.h"
#include "brfont.h"
#include "brfont4bit.h"
#include "brcommandparameter.h"
#include "brcommandparameterbooltrue.h"
#include "brcommandparameterwordptr.h"
#include "brcommandparameterstring.h"
#include "brmouse.h"
#include "brkeyboard.h"
#include "brjoypad.h"
#include "brsound.h"
#include "brsounddecompress.h"
#include "brmace.h"
#include "brulaw.h"
#include "bralaw.h"
#include "brmicrosoftadpcm.h"
#include "brsoundbufferrez.h"
#include "brsequencer.h"
#include "brimports3m.h"
#include "brimportit.h"
#include "brimportxm.h"
#include "brgridindex.h"
#include "brearcliptriangulate.h"
#include "brflashstream.h"
#include "brflashrgba.h"
#include "brflashmatrix23.h"
#include "brflashutils.h"
#include "brflashrect.h"
#include "brflashcolortransform.h"
#include "brflashdisasmactionscript.h"
#include "brflashaction.h"
#include "brflashmanager.h"
#include "brflashactionvalue.h"
#include "brflashavm2.h"

#if defined(__MWERKS__)
#pragma ANSI_strict reset
#pragma enumsalwaysint reset
#endif

#if defined(BURGER_STRUCT_ALIGN)
#pragma options align=reset
#elif defined(BURGER_STRUCT_PACKPUSH)
#pragma pack(pop)
#elif defined(BURGER_STRUCT_PACK)
#pragma pack()
#endif

#if !defined(BURGER_NO_USING_NAMESPACE)
using namespace Burger;
#endif

#endif
/* END */
