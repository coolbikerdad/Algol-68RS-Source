@2$XConsortium: Xutil.h,v 11.78 94/04/17 20:21:56 rws Exp $
  $XFree86: xc/lib/X11/Xutil.h,v 3.0 1996/12/09 11:49:36 dawes Exp $

  $Log: xutil.a68,v $
Revision 1.2  2002/06/10 09:14:00  sian
Amalgamating preludes into one directory

Revision 1.1.1.1  2001/05/07 10:25:18  sian
Import of sources

**********************************************************

Copyright (c) 1987  X Consortium

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
X CONSORTIUM BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of the X Consortium shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from the X Consortium.


Copyright 1987 by Digital Equipment Corporation, Maynard, Massachusetts.

                        All Rights Reserved

Permission to use, copy, modify, and distribute this software and its 
documentation for any purpose and without fee is hereby granted, 
provided that the above copyright notice appear in all copies and that
both that copyright notice and this permission notice appear in 
supporting documentation, and that the name of Digital not be
used in advertising or publicity pertaining to distribution of the
software without specific, written prior permission.  

DIGITAL DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING
ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT SHALL
DIGITAL BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR
ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
SOFTWARE.

*****************************************************************

@ Bitmask returned by XParseGeometry().  Each bit tells if the corresponding
 value (x, y, width, height) was found in the parsed string.

@m no value      =  16r0000
@m x value       =  16r0001
@m y value       =  16r0002
@m width value   =  16r0004
@m height value  =  16r0008
@m all values    =  16r000f
@m x negative    =  16r0010
@m y negative    =  16r0020

@ New version containing !base width!, !base height!, and !win gravity! fields
used with !WMNORMALHINTS!.

@d macro mode xsizehints =
MODE XSIZEHINTS = STRUCT(
   BITS flags,          # marks which fields in this structure are defined #
   INT x, y,            # obsolete for new window mgrs, but clients #
   INT width, height,   # should set so old wm's don't mess up #
   INT min width, min height,
   INT max width, max height,
       width inc, height inc,
   STRUCT(
      INT x,            # numerator #
      INT y             # denominator #
   ) min aspect, max aspect,
   INT base width, base height,   # added by ICCCM version 1 #
   INT win gravity)     # added by ICCCM version 1 #

@ The next block of definitions are for window manager properties that
clients and applications use for communication.


@ flags argument in size hints.

@m us position    =  2r1 SHL 0 # user specified x, y #
@m us size        =  2r1 SHL 1 # user specified width, height #

@m p position     =  2r1 SHL 2 # program specified position #
@m p size         =  2r1 SHL 3 # program specified size #
@m p min size     =  2r1 SHL 4 # program specified minimum size #
@m p max size     =  2r1 SHL 5 # program specified maximum size #
@m p resize inc   =  2r1 SHL 6 # program specified resize increments #
@m p aspect       =  2r1 SHL 7 # program specified min and max aspect ratios #
@m p basesize     =  2r1 SHL 8 # program specified base for incrementing #
@m p win gravity  =  2r1 SHL 9 # program specified window gravity #

@ obsolete.
@m p all hints    = pposition OR psize OR pminsize OR pmaxsize
                              OR presizeinc OR paspect

@d macro mode xwmhints =
MODE XWMHINTS = STRUCT(
   BITS flags,          # marks which fields in this structure are defined #
   BOOL input,          # does this application rely on the window manager to
                          get keyboard input? #
   INT initial state,   # see below #
   PIXMAP icon pixmap,  # pixmap to be used as icon #
   WINDOW icon window,  # window to be used as icon #
   INT icon x, icon y,  # initial position of icon #
   PIXMAP icon mask,    # icon mask bitmap #
   XID window group)    # id of related window group #
                        # this structure may be extended in the future #

@ definition for flags of XWMHints.

@m input hint          =  2r1 SHL 0
@m state hint          =  2r1 SHL 1
@m icon pixmap hint    =  2r1 SHL 2
@m icon window hint    =  2r1 SHL 3
@m icon position hint  =  2r1 SHL 4
@m icon mask hint      =  2r1 SHL 5
@m window group hint   =  2r1 SHL 6
@m all hints = input hint OR state hint OR icon pixmap hint
                          OR icon window hint OR icon position hint
                          OR icon mask hint OR window group hint
@m x urgency hint      =  2r1 SHL 8

@ definitions for initial window state.

@m withdrawn state = 0  # for windows that are not mapped #
@m normal state    = 1  # most applications want to start this way #
@m iconic state    = 3  # application wants to start as an icon #

@ Obsolete states no longer defined by ICCCM.

@m dont care state = 0  # don't know or care #
@m zoom state      = 2  # application wants to start zoomed #
@m inactive state  = 4  # the application is seldom used; #
                         # some wm's may put it on an inactive menu #

@ New structure for manipulating TEXT properties; used with WM NAME,
 WM ICON NAME, WM CLIENT MACHINE, and WM COMMAND.

@d macro mode xtextproperty =
MODE XTEXTPROPERTY = STRUCT(
      REF CARD8 value,  # same as Property routines #
       ATOM encoding,   # prop type #
       INT format,      # prop data format: 8, 16, or 32 #
       CARD32 nitems)   # number of data items in value #

@m x no memory            = -1 
@m x locale not supported = -2 
@m x converter not found  = -3 

@d macro mode xiccencodingstyle =
MODE XICCENCODINGSTYLE = INT

@m x string style        = 0  # STRING #
@m x compound text style = 1  # COMPOUND TEXT #
@m x text style          = 2  # text in owner's encoding (current locale)#
@m x std icc text style  = 3  # STRING, else COMPOUND TEXT #

@d macro mode xiconsize =
MODE XICONSIZE = STRUCT(
      INT min width, min height,
      INT max width, max height,
      INT width inc, height inc)

@d macro mode xclasshint =
MODE XCLASSHINT = STRUCT(
		CSTR res name,
      CSTR res class)

@ These macros are used to give some sugar to the image routines so that
naive people are more comfortable with them.

@d macro x destroy image =
PROC x destroy image = (REF XIMAGE ximage)INT:
   (destroy image OF funcs OF ximage)(ximage)
#define XDestroyImage(ximage) \
   ((*((ximage)->f.destroy image))((ximage)))#

@d macro x get pixel =
PROC x get pixel = (REF XIMAGE ximage,INT x,y)BITS:
   (get pixel OF funcs OF ximage)(ximage,x,y)
#define XGetPixel(ximage, x, y) \
   ((*((ximage)->f.get pixel))((ximage), (x), (y)))#

@d macro x put pixel =
PROC x put pixel = (REF XIMAGE ximage,INT x,y,BITS pixel)INT:
   (put pixel OF funcs OF ximage)(ximage,x,y,pixel)
#define XPutPixel(ximage, x, y, pixel) \
   ((*((ximage)->f.put pixel))((ximage), (x), (y), (pixel)))#

@d macro x sub image =
PROC x sub image = (REF XIMAGE ximage,INT x,y,width,height)REF XIMAGE:
   (sub image OF funcs OF ximage)(ximage,x,y,width,height)
#define XSubImage(ximage, x, y, width, height)  \
   ((*((ximage)->f.sub image))((ximage), (x), (y), (width), (height)))#

@d macro x add pixel =
PROC x add pixel = (REF XIMAGE ximage, BITS value)INT:
   (add pixel OF funcs OF ximage)(ximage,value)
#define XAddPixel(ximage, value) \
   ((*((ximage)->f.add pixel))((ximage), (value)))#

@ Compose sequence status structure, used in calling XLookupString.

@d macro mode xcomposestatus =
MODE XCOMPOSESTATUS = STRUCT(
      XPOINTER compose ptr,   # state table pointer #
      INT chars matched)      # match state #

@ Keysym macros, used on Keysyms to test for classes of symbols.

@d macro is key pad key =
PROC is key pad key = (INT keysym)BOOL:
   keysym >= xk kp space & keysym <= xk kp equal

@d macro is private keypad key =
PROC is private keypad key = (INT keysym)BOOL:
   keysym >= ABS 16r1100 0000 & keysym <= ABS 16r1100 ffff

@d macro is cursor key =
PROC is cursor key = (INT keysym)BOOL:
   keysym >= xk home & keysym < xk select

@d macro is pf key =
PROC is pf key = (INT keysym)BOOL:
   keysym >= xk kp f1 & keysym <= xk kp f4

@d is function key =
PROC is function key = (INT keysym)BOOL:
   keysym >= xk f1 & keysym <= xk f35

@d macro is misc function key =
PROC is misc function key = (INT keysym)BOOL:
   keysym >= xk select & keysym <= xk break

@d macro is modifier key =
PROC is modifier key = (INT keysym)BOOL:
   keysym >= xk shift l & keysym <= xk hyper r OR
   keysym = xk mode switch OR
   keysym = xk num lock

@ Opaque reference to !REGION! mode.

@d macro mode region =
MODE REGION = CPTR

@ Return values from !xrect in region!.
 
@m rectangle out  = 0
@m rectangle in   = 1
@m rectangle part = 2
 
@ Information used by the visual utility routines to find desired visual
type from the many visuals a display may support.

@d macro mode xvisualinfo =
MODE XVISUALINFO = STRUCT(
   REF VISUAL visual,
   VISUALID visualid,
   INT screen, depth, class,
   BITS red mask, green mask, blue mask,
   INT colormap size, bits per rgb)

@m visual no mask             =  16r0
@m visual id mask             =  16r1
@m visual screen mask         =  16r2
@m visual depth mask          =  16r4
@m visual class mask          =  16r8
@m visual red mask mask       =  16r10
@m visual green mask mask     =  16r20
@m visual blue mask mask      =  16r40
@m visual colormap size mask  =  16r80
@m visual bits per rgb mask   =  16r100
@m visual all mask            =  16r1ff

@ This defines a window manager property that clients may use to
share standard colour maps of mode !RGBCOLORMAP!.

@d macro mode xstandardcolourmap =
MODE XSTANDARDCOLORMAP = STRUCT(
   COLORMAP colormap,
   BITS red max,
   BITS red mult,
   BITS green max,
   BITS green mult,
   BITS blue max,
   BITS blue mult,
   BITS base pixel,
   VISUALID visual id,      # added by ICCCM version 1 #
   XID #kill#term id)       # added by ICCCM version 1 #

@d macro release by freeing colormap =
XID release by freeing colormap = 2r1  # for term id field above #


@ Return codes for !x read bitmap file! and !x write bitmap file!.

@m bitmap success      = 0 
@m bitmap open failed  = 1 
@m bitmap file invalid = 2 
@m bitmap no memory    = 3 

@ Context management.
Associative lookup table return codes.

@m xc success = 0      # No error. #
@m xc no mem  = 1      # Out of memory #
@m xc no ent  = 2      # No entry in table #

@d macro mode xcontext =
MODE XCONTEXT = INT

@d macro xunique context = XCONTEXT(xrm unique quark)
@d macro xstring to context(string) = XCONTEXT(xrm string to quark(string))

@ The following declarations are alphabetically ordered.

@d macro x alloc class hint =
PROC REF XCLASSHINT = REF XCLASSHINT CODE "XAllocClassHint();"

@d macro x alloc icon size =
PROC REF XICONSIZE x alloc icon size =
	REF XICONSIZE CODE "XAllocIconSize();"

@d macro x size hints =
PROC REF XSIZEHINTS x size hints =
	REF XSIZEHINTS CODE "XAllocSizeHints();"

@d macro x alloc standard color map =
PROC x alloc standard color map =
	REF XSTANDARDCOLORMAP CODE "XAllocStandardColormap ();"

@d macro x alloc wm hints =
PROC REF XWMHINTS x alloc wm hints =
   REF XWMHINTS CODE "XAllocWMHints();"

@d macro x clip box =
PROC(REGION,REF XRECTANGLE)INT x clip box = ALIEN "XCLIPBOX"
   "#define XCLIPBOX(r,rect) XClipBox(r,(XRectangle *)rect)"

@d macro x create region =
PROC REGION x create region =
	REGION CODE "XCreateRegion();"

@d macro x default string =
PROC CSTR x default string = CSTR CODE "XDefaultString();"

@d macro x delete context =
PROC(DISPLAY,XID,XCONTEXT)INT x delete context = ALIEN "XDELETECONTEXT"
   "#define XDELETECONTEXT(display,rid,context) \"
   "   XDeleteContext((Display*)display,(XID)rid,(XContext)context)"

@d macro x destroy region =
PROC(REF XREGON)INT x destroy region = ALIEN "XDESTROYREGION"
   "#define XDESTROYREGION(r) XDestroyRegion((void *)r)"

@d macro x empty region =
PROC(REGION)INT x empty region = ALIEN "XEMPTYREGION"
   "#define XEMPTYREGION(r) XEmptyRegion((void *)r)"

@d macro x equal region =
PROC(REGION,REGION)INT x equal region = ALIEN "XEQUALREGION"
   "#define XEQUALREGION(r1,r2) \"
	"        XEqualRegion(void *)r1,(void *)r2)"

@d macro x find context =
PROC(DISPLAY,XID,XCONTEXT,XPOINTER)INT x find context =
   ALIEN "XFINDCONTEXT" =
   "#define XFINDCONTEXT(dpy,rid,context,data) \"
	"    XFindContext((void *)dpy,rid,(XContext)context,(void *)data)"

@d macro x get class hint =
PROC(DISPLAY,WINDOW,REF XCLASSHINT)STATUS x get class hint =
   ALIEN "XGETCLASSHINT"
   "#define XGETCLASSHINT(dpy,w,class hints) \"
   "   XGetClassHint((void *)dpy,w,(XClassHint *)class hints)"

CO
extern Status XGetIconSizes(
    Display*    # display #,
    Window      # w #,
    XIconSize** # size list return #,
    int*        # count return #
);

extern Status XGetNormalHints(
    Display*    # display #,
    Window      # w #,
    XSizeHints* # hints return #
);

extern Status XGetRGBColormaps(
    Display*    # display #,
    Window      # w #,
    XStandardColormap** # stdcmap return #,
    int*        # count return #,
    Atom        # property #
);

extern Status XGetSizeHints(
    Display*    # display #,
    Window      # w #,
    XSizeHints* # hints return #,
    Atom        # property #
);

extern Status XGetStandardColormap(
    Display*    # display #,
    Window      # w #,
    XStandardColormap*   # colourmap return #,
    Atom        # property #
);

extern Status XGetTextProperty(
    Display*    # display #,
    Window      # window #,
    XTextProperty*   # text prop return #,
    Atom        # property #
);

extern XVisualInfo *XGetVisualInfo(
    Display*    # display #,
    long        # vinfo mask #,
    XVisualInfo*# vinfo template #,
    int*        # nitems return #
);

extern Status XGetWMClientMachine(
    Display*    # display #,
    Window      # w #,
    XTextProperty*   # text prop return #
);

extern XWMHints *XGetWMHints(
    Display*    # display #,
    Window      # w #            
);

extern Status XGetWMIconName(
    Display*    # display #,
    Window      # w #,
    XTextProperty*   # text prop return #
);

extern Status XGetWMName(
    Display*    # display #,
    Window      # w #,
    XTextProperty*   # text prop return #
);

extern Status XGetWMNormalHints(
    Display*      # display #,
    Window      # w #,
    XSizeHints*      # hints return #,
    long*      # supplied return # 
);

extern Status XGetWMSizeHints(
    Display*      # display #,
    Window      # w #,
    XSizeHints*      # hints return #,
    long*      # supplied return #,
    Atom      # property #
);

extern Status XGetZoomHints(
    Display*      # display #,
    Window      # w #,
    XSizeHints*      # zhints return #
);

extern int XIntersectRegion(
    Region      # sra #,
    Region      # srb #,
    Region      # dr return #
);
CO

@d macro x convert case =
PROC(KEYSYM,REF KEYSYM,REF KEYSYM)VOID
   x convert case = ALIEN "XCONVERTCASE"
   "#define XCONVERTCASE(sym,lower,upper) \"
   "        XLookupString(sym,(KeySym *)lower,(KeySym *)upper)"

@d macro x lookup string =
PROC(REF XKEYEVENT,VECTOR[]CHAR,REF KEYSYM,REF XCOMPOSESTATUS)INT
	x lookup string = ALIEN "XLOOKUPSTRING"
	"#define XLOOKUPSTRING(xke,text,keysym,status) \"
	"        XLookupString(xke,A_VC_charptr(text),text.upb,keysym,status)"

CO
extern Status XMatchVisualInfo(
    Display*      # display #,
    int         # screen #,
    int         # depth #,
    int         # class #,
    XVisualInfo*   # vinfo return #
);

extern int XOffsetRegion(
    Region      # r #,
    int         # dx #,
    int         # dy #
);

extern Bool XPointInRegion(
    Region      # r #,
    int         # x #,
    int         # y #
);

extern Region XPolygonRegion(
    XPoint*      # points #,
    int         # n #,
    int         # fill rule #
);

extern int XRectInRegion(
    Region      # r #,
    int         # x #,
    int         # y #,
    unsigned int   # width #,
    unsigned int   # height #
);

extern int XSaveContext(
    Display*      # display #,
    XID         # rid #,
    XContext      # context #,
     Xconst char*   # data #
);

extern int XSetClassHint(
    Display*      # display #,
    Window      # w #,
    XClassHint*      # class hints #
);

extern int XSetIconSizes(
    Display*      # display #,
    Window      # w #,
    XIconSize*      # size list #,
    int         # count #    
);

extern int XSetNormalHints(
    Display*      # display #,
    Window      # w #,
    XSizeHints*      # hints #
);

extern void XSetRGBColormaps(
    Display*      # display #,
    Window      # w #,
    XStandardColormap*   # stdcmaps #,
    int         # count #,
    Atom      # property #
);

extern int XSetSizeHints(
    Display*      # display #,
    Window      # w #,
    XSizeHints*      # hints #,
    Atom      # property #
);
CO

@d macro x set standard properties =
PROC x set standard properties =
	(DISPLAY d,WINDOW w,
	 []CHAR window idn, icon idn,
	 PIXMAP pixmap,
	 REF XSIZEHINTS hints)INT:
(
	PROC(DISPLAY,WINDOW,
	     VECTOR[]CHAR,VECTOR[]CHAR,
		  PIXMAP,REF XSIZEHINTS)INT
		sys x set standard properties = ALIEN "XSETSTANDARDPROPERTIES"
		"#define XSETSTANDARDPROPERTIES(dpy,w,window idn,\"
		"                               icon idn,pixmap,hints) \"
		"        XSetStandardProperties(dpy,w, \"
		"                               A VC charptr(window idn),\"
		"                               A VC charptr(icon idn),\"
		"                               pixmap, A argv, A argc, hints)";
   sys x set standard properties(d,w,Z MAKERVC window idn,
	                                  Z MAKERVC icon idn,pixmap,hints)
)

CO
extern void XSetTextProperty(
    Display*      # display #,
    Window      # w #,
    XTextProperty*   # text prop #,
    Atom      # property #
);

extern void XSetWMClientMachine(
    Display*      # display #,
    Window      # w #,
    XTextProperty*   # text prop #
);
CO

@d macro x set wm hints =
PROC(DISPLAY,WINDOW,REF XWMHINTS)INT x set wm hints =
   ALIEN "XSETWMHINTS"
   "#define XSETWMHINTS(dpy,w,wm hints) XSetWMHints(dpy,w,wm hints)"

CO
extern void XSetWMIconName(
    Display*      # display #,
    Window      # w #,
    XTextProperty*   # text prop #
);

extern void XSetWMName(
    Display*      # display #,
    Window      # w #,
    XTextProperty*   # text prop #
);

extern void XSetWMNormalHints(
    Display*      # display #,
    Window      # w #,
    XSizeHints*      # hints #
);

extern void XSetWMProperties(
    Display*      # display #,
    Window      # w #,
    XTextProperty*   # window name #,
    XTextProperty*   # icon name #,
    char**      # argv #,
    int         # argc #,
    XSizeHints*      # normal hints #,
    XWMHints*      # wm hints #,
    XClassHint*      # class hints #
);

extern void XmbSetWMProperties(
    Display*      # display #,
    Window      # w #,
     Xconst char*   # window name #,
     Xconst char*   # icon name #,
    char**      # argv #,
    int         # argc #,
    XSizeHints*      # normal hints #,
    XWMHints*      # wm hints #,
    XClassHint*      # class hints #
);

extern void XSetWMSizeHints(
    Display*      # display #,
    Window      # w #,
    XSizeHints*      # hints #,
    Atom      # property #
);

extern int XSetRegion(
    Display*      # display #,
    GC         # gc #,
    Region      # r #
);

extern void XSetStandardColormap(
    Display*      # display #,
    Window      # w #,
    XStandardColormap*   # colourmap #,
    Atom      # property #
);

extern int XSetZoomHints(
    Display*      # display #,
    Window      # w #,
    XSizeHints*      # zhints #
);

extern int XShrinkRegion(
    Region      # r #,
    int         # dx #,
    int         # dy #
);

extern Status XStringListToTextProperty(
    char**      # list #,
    int         # count #,
    XTextProperty*   # text prop return #
);

extern int XSubtractRegion(
    Region      # sra #,
    Region      # srb #,
    Region      # dr return #
);

extern int XmbTextListToTextProperty(
    Display*      # display #,
    char**      # list #,
    int         # count #,
    XICCEncodingStyle   # style #,
    XTextProperty*   # text prop return #
);

extern int XwcTextListToTextProperty(
    Display*      # display #,
    wchar t**      # list #,
    int         # count #,
    XICCEncodingStyle   # style #,
    XTextProperty*   # text prop return #
);

extern void XwcFreeStringList(
    wchar t**      # list #
);

extern Status XTextPropertyToStringList(
    XTextProperty*   # text prop #,
    char***      # list return #,
    int*      # count return #
);

extern int XmbTextPropertyToTextList(
    Display*      # display #,
    XTextProperty*   # text prop #,
    char***      # list return #,
    int*      # count return #
);

extern int XwcTextPropertyToTextList(
    Display*      # display #,
    XTextProperty*   # text prop #,
    wchar t***      # list return #,
    int*      # count return #
);

extern int XUnionRectWithRegion(
    XRectangle*      # rectangle #,
    Region      # src region #,
    Region      # dest region return #
);

extern int XUnionRegion(
    Region      # sra #,
    Region      # srb #,
    Region      # dr return #
);

extern int XWMGeometry(
    Display*      # display #,
    int         # screen number #,
     Xconst char*   # user geometry #,
     Xconst char*   # default geometry #,
    unsigned int   # border width #,
    XSizeHints*      # hints #,
    int*      # x return #,
    int*      # y return #,
    int*      # width return #,
    int*      # height return #,
    int*      # gravity return #
);

extern int XXorRegion(
    Region      # sra #,
    Region      # srb #,
    Region      # dr return #
);
CO
