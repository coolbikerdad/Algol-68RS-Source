@2Introduction.
This is a \.{Web68} version of the Xlib.h header file.

$Log: xlib.w,v $
Revision 1.2  2004/11/30 21:52:32  sian
Test program for the libpq.w prelude

Revision 1.1  2003/05/07 21:16:42  sian
New Web 68 include file for xlib

Revision 1.1.1.1  2001/05/07 10:25:18  sian
Import of sources

The mode declarations in this file are included in its own module.

@<Include...@>=
@<X modes@>
@<Xlib modes@>

@ The basic definitions of \.{X.h} are included first.

@ix.w@>

@ Xlib.h - Header definition and support file for the C subroutine
 interface library (Xlib) to the X Window System Protocol (V11).
 Structures and symbols starting with "_" are private to the library.

@m xlib specification release = 6 

@3Xlib modes.
Instead of declaring macros, the simple modes are inserted straight into the
modes module because C typedef's do not cause code to be produced.

@<Xlib...@>=
MODE
   WCHAR = BITS,
   SCREEN = CPTR,
	DISPLAY = CPTR,
	GC = CPTR,
   XPOINTER = CPTR,
   STATUS = INT;

@ These values are simply defined as macros.

@m true = 1
@m false = 0

@m queued already = 0 
@m queued after reading = 1 
@m queued after flush = 2 

@m all planes =  (BIN -1)

@ Extensions need a way to hang private data on some structures.

@d macro mode xextdata =
MODE XEXTDATA =
	STRUCT(INT number,
	       REF XEXTDATA next,
			 CPTR#PROC(REF XEXTDATA)INT# free_private,
			 XPOINTER private_data)

@ This file contains structures used by the extension mechanism.

@d macro mode xextcodes =
MODE XEXTCODES =
	STRUCT(INT extension,    # extension number #
              major_opcode, # major op-code assigned by server #
              first_event,  # first event number for the extension #
              first_error)  # first error number for the extension #

@ Data structure for retrieving info about pixmap formats.

@d macro mode xpixmapformatvalues =
MODE XPIXMAPFORMATVALUES =
	STRUCT(INT depth, bits_per_pixel, scanline_pad)

@ Data structure for setting graphics contexts.

@d macro mode xgcvalues =
MODE XGCVALUES =
      STRUCT(INT function,       # logical operation #
             BITS plane_mask,    # plane mask #
                  foreground,    # foreground pixel #
                  background,    # background pixel #
             INT line_width,     # line width #
                 line_style,     # LineSolid, LineOnOffDash, LineDoubleDash #
                 cap_style,      # CapNotLast, CapButt, CapRound, CapProjecting #
                 join_style,     # JoinMiter, JoinRound, JoinBevel #
                 fill_style,     # FillSolid, FillTiled,#
                                 # FillStippled, FillOpaeueStippled #
                 fill_rule,      # EvenOddRule, WindingRule #
                 arc_mode,       # ArcChord, ArcPieSlice #
             PIXMAP tile,        # tile pixmap for tiling operations #
                 stipple,        # stipple 1 plane pixmap for stipping #
             INT ts_x_origin,    # offset for tile or stipple operations #
                 ts_y_origin,
             FONT font,          # default text font for text operations #
             INT subwindow_mode, # ClipByChildren, IncludeInferiors #
             BOOL graphics_exposures, # boolean, should exposures be generated #
             INT clip_x_origin,  # origin for clipping #
                 clip_y_origin,
             PIXMAP clip_mask,   # bitmap clipping; other calls for rects #
             INT dash_offset,    # patterned/dashed line information #
             CHAR dashes)

@ Visual structure; contains information about colourmapping.

@d macro mode visual =
macro mode xextdata;
MODE VISUAL =
	STRUCT(REF XEXTDATA ext_data,
          VISUALID visual id,
          INT class,
          BITS red_mask, green_mask, blue_mask,
          INT bits_per_rgb, map_entries)

@ Depth structure; contains information for each possible depth.

@d macro mode depth =
macro mode visual;
MODE DEPTH =
	STRUCT(INT depth,        # this depth (Z) of the depth #
              nvisuals,       # number of Visual types at this depth #
          REF VISUAL visuals) # list of visuals possible at this depth #

@2Information about the screen.
The contents of this structure are implementation dependent.
Format structure: describes !ZFORMAT! data the screen will understand.

@d macro mode screenformat =
macro mode xextdata;
MODE SCREENFORMAT =
	STRUCT(REF XEXTDATA ext_data,  # hook for extension to hang data #
          INT depth,              # depth of this image format #
              bits_per_pixel,     # bits/pixel at this depth #
              scanline_pad)       # scanline must padded to this multiple #

@ Data structures for setting window attributes.

@d macro mode xsetwindowattributes =
MODE XSETWINDOWATTRIBUTES =
	STRUCT(PIXMAP background_pixmap,  # background or None or ParentRelative #
          BITS background_pixel,     # background pixel #
          PIXMAP border_pixmap,      # border of the window #
          BITS border_pixel,         # border pixel value #
          INT bit_gravity,           # one of bit gravity values #
              win_gravity,           # one of the window gravity values #
              backing_store,         # NotUseful, WhenMapped, Always #
          BITS backing_planes,       # planes to be preseved if possible #
               backing_pixel,        # value to use in restoring planes #
          BOOL save_under,           # should bits under be saved? (popups) #
          BITS event_mask,           # set of events that should be saved #
               do_not_propagate_mask,# set of events that should not propagate #
          BOOL override_redirect,    # boolean value for override-redirect #
          COLORMAP colormap,         # colour map to be associated with window #
          CURSOR cursor)             # cursor to be displayed (or None) #

@d macro mode xwindowattributes =
macro mode visual;
MODE XWINDOWATTRIBUTES = STRUCT(
      INT x, y,                  # location of window #
          width, height,         # width and height of window #
          border_width,          # border width of window #
          depth,                 # depth of window #
       REF VISUAL visual,        # the associated visual structure #
       WINDOW root,              # root of screen containing window #
       INT class,                # InputOutput, InputOnly #
          bit_gravity,           # one of bit gravity values #
          win_gravity,           # one of the window gravity values #
          backing_store,         # NotUseful, WhenMapped, Always #
       BITS backing_planes,      # planes to be preserved if possible #
           backing_pixel,        # value to be used when restoring planes #
       BOOL save_under,          # boolean, should bits under be saved? #
       COLORMAP colormap,        # colour map to be associated with window #
       BOOL map_installed,       # boolean, is colour map currently installed #
       INT map_state,            # IsUnmapped, IsUnviewable, IsViewable #
       BITS all_event_masks,     # set of events all people have interest in #
           your_event_mask,      # my event mask #
           do_not_propagate_mask,# set of events that should not propagate #
       BOOL override_redirect,   # boolean value for override-redirect #
       REF SCREEN screen         # back pointer to correct screen #
)

@ Data structure for host setting/getting routines.

@d macro mode xhostaddress =
MODE XHOSTADDRESS =
	STRUCT(INT family,    # for example FamilyInternet #
              length,    # length of address, in bytes #
          CSTR address)  # pointer to where to find the bytes #

@ Data structure for ``image'' data, used by image manipulation
routines.

@d macro mode ximage =
MODE XIMAGE =
	STRUCT(INT width, height,         # size of image #
              xoffset,               # number of pixels offset in X direction #
              format,                # XYBitmap, XYPixmap, ZPixmap #
          CSTR data,                # pointer to image data #
          INT byte_order,           # data byte order, LSBFirst, MSBFirst #
              bitmap_unit,          # quant. of scanline 8, 16, 32 #
              bitmap_bit_order,     # LSBFirst, MSBFirst #
              bitmap_pad,           # 8, 16, 32 either XY or ZPixmap #
              depth,                # depth of image #
              bytes_per_line,       # accelarator to next line #
              bits_per_pixel,       # bits per pixel (ZPixmap) #
           BITS red_mask,            # bits in z arrangment #
              green_mask,
             blue_mask,
           XPOINTER obdata,          # hook for the object routines to hang on #
       	  STRUCT(                   # image manipulation routines #
              CPTR CO PROC(DISPLAY,REF VISUAL,
                 		     INT,     # depth #
               		     INT,     # format #
               		     INT,     # offset #
               		     CPTR,    # data #
               		     INT,     # width #
               		     INT,     # height #
               		     INT,     # bitmap_pad #
               		     INT)      # bytes_per_line # REF XIMAGE CO create_image,
              CPTR#PROC(REF XIMAGE)INT# destroy_image,
              CPTR#PROC(REF XIMAGE,INT,INT)BITS# get_pixel,
              CPTR#PROC(REF XIMAGE,INT,INT,BITS)INT# put_pixel,
              CPTR#PROC(REF XIMAGE,INT,INT,INT,INT)REF XIMAGE# sub_image ,
              CPTR#PROC(REF XIMAGE,BITS)INT# add_pixel)
			 	  funcs)

@ Data structure for !xreconfigurewindow!.

@d macro mode xwindowchanges =
MODE XWINDOWCHANGES =
	STRUCT(INT x, y,
             width, height,
             border_width,
          WINDOW sibling,
          INT stack_mode)

@ Data structure used by colour operations.

@d macro mode xcolor =
MODE XCOLOR =
	STRUCT(BITS pixel,
          SHORT BITS red, green, blue,
          CHAR flags,  # do_red, do_green, do_blue #
               pad)

@ Data structures for graphics operations.  On most machines, these
are congruent with the wire protocol structures, so reformatting the
data can be avoided on these architectures.

@d macro mode xsegment =
MODE XSEGMENT =
	STRUCT(SHORT INT x1, y1, x2, y2)

@d macro mode xpoint =
MODE XPOINT =
	STRUCT(SHORT INT x, y)

@d macro mode xrectangle =
MODE XRECTANGLE =
	STRUCT(SHORT INT x, y,
          SHORT INT width, height)

@d macro mode xarc =
MODE XARC =
	STRUCT(SHORT INT x, y,
          SHORT INT width, height,
          SHORT INT angle1, angle2)

@ Data structure for !xchange keyboard control!.

@d macro mode xkeyboardcontrol =
MODE XKEYBOARDCONTROL =
	STRUCT(INT key_click_percent,
              bell_percent,
              bell_pitch,
              bell_duration,
              led,
              led_mode,
              key,
              auto_repeat_mode) # On, Off, Default #

@ Data structure for !xget keyboard control!.

@d macro mode xkeyboardstate =
MODE XKEYBOARDSTATE =
	STRUCT(INT key_click_percent,
              bell_percent,
              bell_pitch, bell_duration,
          BITS led_mask,
          INT global_auto_repeat,
          STRUCT 32 CHAR auto_repeats)

@ Data structure for !xget motion events!.

@d macro mode xtimecoord =
MODE XTIMECOORD =
	STRUCT(TIME time,
          SHORT INT x, y)

@ Data structure for !xset modifier mapping! and
!xget modifier mapping!.

@d macro mode xmodifierkeymap =
MODE XMODIFIERKEYMAP =
	STRUCT(INT max_keypermod,       # The server's max no. of keys per modifier #
          REF KEYCODE modifiermap) # An 8 by max_keypermod array of modifiers #


@3Xevents.
Unions in C and Algol 68 differ markedly: a C union merely remapps memory
whereas an Algol 68 union requires an extra field which designates the mode.
Although every event has an integer field, !type!, which contains the type of
event, it is not possible to simply use that value to determine the event.
Instead, an event is defined as a simple multiple of bits and procedures are
provided for extracting the actual event.

@m xevent sz = 24

@d macro mode xevent =
MODE
	XEVENT = STRUCT xevent sz BITS,
	XANYEVENT =
		STRUCT(INT type,
				 INT any serial,
             BOOL send event,
             DISPLAY display,
             WINDOW window,
				 STRUCT 19 BITS pad),

	XKEYPRESSEDEVENT =
		STRUCT(INT type,
				 INT keypressed serial,
             BOOL send event,
             DISPLAY display,
             WINDOW window, root, subwindow,
             TIME time,
             INT x, y, x root, y root,
             BITS state, keycode,
             BOOL same screen,
				 STRUCT 8 BITS pad),

	XKEYRELEASEDEVENT =
		STRUCT(INT type,
				 INT keyreleased serial,
             BOOL send event,
             DISPLAY display,
             WINDOW window, root, subwindow,
             TIME time,
             INT x, y, x root, y root,
             BITS state, keycode,
             BOOL same screen,
				 STRUCT 9 BITS pad),

	XBUTTONPRESSEDEVENT =
		STRUCT(INT type,
				 INT buttonpressed serial,
             BOOL send event,
             DISPLAY display,
             WINDOW window, root, subwindow,
             TIME time,
             INT x, y, x root, y root,
             BITS state, button,
             BOOL same screen,
				 STRUCT 9 BITS pad),
								 
	XBUTTONRELEASEDEVENT =
		STRUCT(INT type,
				 INT buttonreleased serial,
             BOOL send event,
             DISPLAY display,
             WINDOW window, root, subwindow,
             TIME time,
             INT x, y, x root, y root,
             BITS state, button,
             BOOL same screen,
				 STRUCT 9 BITS pad),

	XMOTIONEVENT =
		STRUCT(INT type,
				 INT motion serial,
				 BOOL send event,
             DISPLAY display,
             WINDOW window, root, subwindow,
             TIME time,
             INT x, y, x root, y root,
             BITS state,
             INT is hint,
             BOOL same screen,
				 STRUCT 9 BITS pad),

	XENTERWINDOWEVENT =
		STRUCT(INT type,
				 INT enterwindow serial,
             BOOL send event,
             DISPLAY display,
             WINDOW window, root, subwindow,
             TIME time,
             INT x, y, x root, y root, mode, detail,
             BOOL same screen, focus,
             BITS state,
				 STRUCT 7 BITS pad),

	XLEAVEWINDOWEVENT =
		STRUCT(INT type,
				 INT leavewindow serial,
             BOOL send event,
				 DISPLAY display,
             WINDOW window, root, subwindow,
             TIME time,
             INT x, y, x root, y root, mode, detail,
             BOOL same screen, focus,
             BITS state,
				 STRUCT 7 BITS pad),

	XFOCUSINEVENT =
		STRUCT(INT type,
				 INT focusin serial,
             BOOL send event,
             DISPLAY display,
             WINDOW window,
             INT mode, detail,
				 STRUCT 17 BITS pad),

	XFOCUSOUTEVENT =
		STRUCT(INT type,
				 INT focusout serial,
             BOOL send event,
             DISPLAY display,
             WINDOW window,
             INT mode, detail,
				 STRUCT 17 BITS pad),

	XKEYMAPEVENT =
		STRUCT(INT type,
				 INT keymap serial,
             BOOL send event,
             DISPLAY display,
             WINDOW window,
             [32]CHAR key vector,
				 STRUCT 11 BITS pad),

	XEXPOSEEVENT =
		STRUCT(INT type,
				 INT expose serial,
             BOOL send event,
             DISPLAY display,
             WINDOW window,
             INT x, y, width, height, count,
				 STRUCT 14 BITS pad),

	XGRAPHICSEXPOSEEVENT =
		STRUCT(INT type,
				 INT graphicsexpose serial,
             BOOL send event,
             DISPLAY display,
             DRAWABLE drawable,
             INT x, y, width, height, count,
                 major code, minor code,
				 STRUCT 12 BITS pad),

	XNOEXPOSEEVENT =
		STRUCT(INT type,
				 INT noexpose serial,
             BOOL send event,
             DISPLAY display,
             DRAWABLE drawable,
             INT major code, minor code,
				 STRUCT 17 BITS pad),

	XVISIBILITYEVENT =
		STRUCT(INT type,
				 INT visibility serial,
             BOOL send event,
             DISPLAY display,
             WINDOW window,
             INT state,
				 STRUCT 18 BITS pad),

	XCREATEWINDOWEVENT =
		STRUCT(INT type,
				 INT createwindow serial,
             BOOL send event,
             DISPLAY display,
             WINDOW parent, window,
             INT x, y, width, height, border width,
             BOOL override redirect,
				 STRUCT 12 BITS pad),

	XDESTROYWINDOWEVENT =
		STRUCT(INT type,
				 INT destroywindow serial,
             BOOL send event,
             DISPLAY display,
             WINDOW event, window,
				 STRUCT 18 BITS pad),

	XUNMAPEVENT =
		STRUCT(INT type,
				 INT unmap serial,
             BOOL send event,
             DISPLAY display,
             WINDOW event, window,
             BOOL from configure,
				 STRUCT 17 BITS pad),

	XMAPEVENT =
		STRUCT(INT type,
				 INT map serial,
             BOOL send event,
             DISPLAY display,
             WINDOW event, window,
             BOOL override redirect,
				 STRUCT 17 BITS pad),

	XMAPREQUESTEVENT =
		STRUCT(INT type,
				 INT maprequest serial,
             BOOL send event,
             DISPLAY display,
             WINDOW parent, window,
				 STRUCT 18 BITS pad),

	XREPARENTEVENT =
		STRUCT(INT type,
				 INT reparent serial,
             BOOL send event,
             DISPLAY display,
             WINDOW event, window, parent,
             INT x, y,
             BOOL override redirect,
				 STRUCT 14 BITS pad),

	XCONFIGUREEVENT =
		STRUCT(INT type,
				 INT configure serial,
             BOOL send event,
             DISPLAY display,
             WINDOW event, window,
             INT x, y, width, height, border width,
             WINDOW above,
             BOOL override redirect,
				 STRUCT 11 BITS pad),

	XGRAVITYEVENT =
		STRUCT(INT type,
				 INT gravity serial,
             BOOL send event,
             DISPLAY display,
             WINDOW event, window,
             INT x, y,
				 STRUCT 16 BITS pad),

	XRESIZEREQUESTEVENT =
		STRUCT(INT type,
				 INT resizerequest serial,
             BOOL send event,
             DISPLAY display,
             WINDOW window,
             INT width, height,
				 STRUCT 17 BITS pad),

	XCONFIGUREREQUESTEVENT =
		STRUCT(INT type,
				 INT configurerequest serial,
             BOOL send event,
             DISPLAY display,
             WINDOW parent, window,
             INT x, y, width, height, border width,
             WINDOW above,
             INT detail,
             BITS value mask,
				 STRUCT 10 BITS pad),

	XCIRCULATEEVENT =
		STRUCT(INT type,
				 INT circulate serial,
             BOOL send event,
             DISPLAY display,
             WINDOW event, window,
             INT place,
				 STRUCT 17 BITS pad),

	XCIRCULATEREQUESTEVENT =
		STRUCT(INT type,
				 INT circulaterequest serial,
             BOOL send event,
             DISPLAY display,
             WINDOW parent, window,
             INT place,
				 STRUCT 17 BITS pad),

	XPROPERTYEVENT =
		STRUCT(INT type,
				 INT property serial,
             BOOL send event,
             DISPLAY display,
             WINDOW window,
             ATOM atom,
             TIME time,
             INT state,
				 STRUCT 16 BITS pad),

	XSELECTIONCLEAREVENT =
		STRUCT(INT type,
				 INT selectionclear serial,
             BOOL send event,
             DISPLAY display,
             WINDOW window,
             ATOM selection,
             TIME time,
				 STRUCT 17 BITS pad),

	XSELECTIONREQUESTEVENT =
		STRUCT(INT type,
				 INT selectionrequest serial,
             BOOL send event,
             DISPLAY display,
             WINDOW owner, requestor,
             ATOM selection, target, property,
             TIME time,
				 STRUCT 14 BITS pad),

	XSELECTIONEVENT =
		STRUCT(INT type,
				 INT selection serial,
             BOOL send event,
             DISPLAY display,
             WINDOW requestor,
             ATOM selection, target, property,
             TIME time,
				 STRUCT 15 BITS pad),

	XCOLORMAPEVENT =
		STRUCT(INT type,
				 INT colormap serial,
             BOOL send event,
             DISPLAY display,
             WINDOW window,
             COLORMAP colormap,
             BOOL new,
             INT state,
				 STRUCT 16 BITS pad),

	XCLIENTMESSAGEEVENT =
		STRUCT(INT type,
				 INT clientmessage serial,
             BOOL send event,
             DISPLAY display,
             WINDOW window,
             ATOM message type,
             INT format,
             [20]CHAR data,
				 STRUCT 12 BITS pad),

	XMAPPINGEVENT =
		STRUCT(INT type,
				 INT mapping serial,
             BOOL send event,
             DISPLAY display,
             WINDOW window,
             INT request, first keycode, count,
				 STRUCT 16 BITS pad),

	XERROREVENT =
		STRUCT(INT type,
             DISPLAY display,
             XID resourceid,
             INT serial,
             INT error code, request code, minor code,
				 STRUCT 17 BITS pad),

	XEV =
   UNION(XERROREVENT,
         XANYEVENT,
         XKEYPRESSEDEVENT,
         XKEYRELEASEDEVENT,
         XBUTTONPRESSEDEVENT,
         XBUTTONRELEASEDEVENT,
         XMOTIONEVENT,
         XENTERWINDOWEVENT,
         XLEAVEWINDOWEVENT,
         XFOCUSINEVENT,
         XFOCUSOUTEVENT,
         XKEYMAPEVENT,
         XEXPOSEEVENT,
         XGRAPHICSEXPOSEEVENT,
         XNOEXPOSEEVENT,
         XVISIBILITYEVENT,
         XCREATEWINDOWEVENT,
         XDESTROYWINDOWEVENT,
         XUNMAPEVENT,
         XMAPEVENT,
         XMAPREQUESTEVENT,
         XREPARENTEVENT,
         XCONFIGUREEVENT,
         XCONFIGUREREQUESTEVENT,
         XGRAVITYEVENT,
         XRESIZEREQUESTEVENT,
         XCIRCULATEEVENT,
         XCIRCULATEREQUESTEVENT,
         XPROPERTYEVENT,
         XSELECTIONCLEAREVENT,
         XSELECTIONREQUESTEVENT,
         XSELECTIONEVENT,
         XCOLORMAPEVENT,
         XCLIENTMESSAGEEVENT,
         XMAPPINGEVENT)

@d macro mode xsqevent =
macro mode xevent;
MODE XSQEVENT = STRUCT(XEVENT event,
                       INT qserial num,    #so multi-threaded code can find new ones#
                       REF XSQEVENT next)

@d macro mode xqevent = macro mode xsqevent

@ This operator will extract the actual event from a !REF XEVENT! and yield a
value of the appropriate mode.

@d macro op xv =
macro mode xevent;
OP XV = (XEVENT xevent)XEV:
CASE
	OP(XEVENT)XERROREVENT XTOERROR = BIOP 99;
	OP(XEVENT)XANYEVENT XTOANY = BIOP 99;
	OP(XEVENT)XKEYPRESSEDEVENT XTOKEYPRESSED = BIOP 99;
	OP(XEVENT)XKEYRELEASEDEVENT XTOKEYRELEASED = BIOP 99;
	OP(XEVENT)XBUTTONPRESSEDEVENT XTOBUTTONPRESSED = BIOP 99;
	OP(XEVENT)XBUTTONRELEASEDEVENT XTOBUTTONRELEASED = BIOP 99;
	OP(XEVENT)XMOTIONEVENT XTOMOTION = BIOP 99;
	OP(XEVENT)XENTERWINDOWEVENT XTOENTERWINDOW = BIOP 99;
	OP(XEVENT)XLEAVEWINDOWEVENT XTOLEAVEWINDOW = BIOP 99;
	OP(XEVENT)XFOCUSINEVENT XTOFOCUSIN = BIOP 99;
	OP(XEVENT)XFOCUSOUTEVENT XTOFOCUSOUT = BIOP 99;
	OP(XEVENT)XKEYMAPEVENT XTOKEYMAP = BIOP 99;
	OP(XEVENT)XEXPOSEEVENT XTOEXPOSE = BIOP 99;
	OP(XEVENT)XGRAPHICSEXPOSEEVENT XTOGRAPHICSEXPOSE = BIOP 99;
	OP(XEVENT)XNOEXPOSEEVENT XTONOEXPOSE = BIOP 99;
	OP(XEVENT)XVISIBILITYEVENT XTOVISIBILITY = BIOP 99;
	OP(XEVENT)XCREATEWINDOWEVENT XTOCREATEWINDOW = BIOP 99;
	OP(XEVENT)XDESTROYWINDOWEVENT XTODESTROYWINDOW = BIOP 99;
	OP(XEVENT)XUNMAPEVENT XTOUNMAP = BIOP 99;
	OP(XEVENT)XMAPEVENT XTOMAP = BIOP 99;
	OP(XEVENT)XMAPREQUESTEVENT XTOMAPREQUEST = BIOP 99;
	OP(XEVENT)XREPARENTEVENT XTOREPARENT = BIOP 99;
	OP(XEVENT)XCONFIGUREEVENT XTOCONFIGURE = BIOP 99;
	OP(XEVENT)XCONFIGUREREQUESTEVENT XTOCONFIGUREREQUEST = BIOP 99;
	OP(XEVENT)XGRAVITYEVENT XTOGRAVITY = BIOP 99;
	OP(XEVENT)XRESIZEREQUESTEVENT XTORESIZEREQUEST = BIOP 99;
	OP(XEVENT)XCIRCULATEEVENT XTOCIRCULATE = BIOP 99;
	OP(XEVENT)XCIRCULATEREQUESTEVENT XTOCIRCULATEREQUEST = BIOP 99;
	OP(XEVENT)XPROPERTYEVENT XTOPROPERTY = BIOP 99;
	OP(XEVENT)XSELECTIONCLEAREVENT XTOSELECTIONCLEAR = BIOP 99;
	OP(XEVENT)XSELECTIONREQUESTEVENT XTOSELECTIONREQUEST = BIOP 99;
	OP(XEVENT)XSELECTIONEVENT XTOSELECTION = BIOP 99;
	OP(XEVENT)XCOLORMAPEVENT XTOCOLORMAP = BIOP 99;
	OP(XEVENT)XCLIENTMESSAGEEVENT XTOCLIENTMESSAGE = BIOP 99;
	OP(XEVENT)XMAPPINGEVENT XTOMAPPING = BIOP 99;
	ABS xevent[1] + 1
IN
	XTOERROR xevent,
	XTOERROR xevent,
	XTOKEYPRESSED xevent,
   XTOKEYRELEASED xevent,
   XTOBUTTONPRESSED xevent,
   XTOBUTTONRELEASED xevent,
   XTOMOTION xevent,
   XTOENTERWINDOW xevent,
	XTOLEAVEWINDOW xevent,
   XTOFOCUSIN xevent,
   XTOFOCUSOUT xevent,
   XTOKEYMAP xevent,
   XTOEXPOSE xevent,
   XTOGRAPHICSEXPOSE xevent,
   XTONOEXPOSE xevent,
   XTOVISIBILITY xevent,
   XTOCREATEWINDOW xevent,
   XTODESTROYWINDOW xevent,
   XTOUNMAP xevent,
   XTOMAP xevent,
   XTOMAPREQUEST xevent,
   XTOREPARENT xevent,
   XTOCONFIGURE xevent,
   XTOCONFIGUREREQUEST xevent,
   XTOGRAVITY xevent,
   XTORESIZEREQUEST xevent,
   XTOCIRCULATE xevent,
   XTOCIRCULATEREQUEST xevent,
   XTOPROPERTY xevent,
   XTOSELECTIONCLEAR xevent,
   XTOSELECTIONREQUEST xevent,
   XTOSELECTION xevent,
   XTOCOLORMAP xevent,
   XTOCLIENTMESSAGE xevent,
   XTOMAPPING xevent
OUT XTOERROR xevent
ESAC

@ Per character font metric information.

@d macro mode xcharstruct =
MODE XCHARSTRUCT =
	STRUCT(SHORT INT   lbearing,  # origin to left edge of raster #
          SHORT INT   rbearing,  # origin to right edge of raster #
          SHORT INT   width,     # advance to next char's origin #
          SHORT INT   ascent,    # baseline to top edge of raster #
          SHORT INT   descent,   # baseline to bottom edge of raster #
          SHORT BITS  attributes)# per char flags (not predefined) #

@ For arbitrary information with fonts, additional properties are
returned.

@d macro mode xfontprop =
MODE XFONTPROP =
	STRUCT (ATOM name,
          BITS card32)

@d macro mode xfontstruct =
macro mode xextdata;
macro mode xfontprop;
macro mode xcharstruct;
MODE XFONTSTRUCT =
	STRUCT(REF XEXTDATA  ext_data,          # hook for extension to hang data #
          FONT          fid,               # Font id for this font #
          BITS          direction,         # hint about direction the font is painted #
                        min_char_or_byte2, # first character #
                        max_char_or_byte2, # last character #
                        min_byte1,         # first row that exists #
                        max_byte1,         # last row that exists #
          BOOL          all_chars_exist,   # flag if all characters have non-zero size#
          CHAR          default_char,      # char to print for undefined character #
                        pad1,pad2,pad3,
          INT           n_properties,      # how many properties there are #
          REF XFONTPROP properties,        # pointer to array of additional properties#
          XCHARSTRUCT   min_bounds,        # minimum bounds over all existing char#
                        max_bounds,        # maximum bounds over all existing char#
                        per_char,          # first_char to last_char information #
          INT           ascent,            # log. extent above baseline for spacing #
          INT           descent)           # log. descent below baseline for spacing #

@ PolyText routines take these as arguments.

@d macro mode xtextitem =
MODE XTEXTITEM =
	STRUCT(CPTR chars,      # pointer to string #
          INT nchars,      # number of characters #
              delta,       # delta between strings #
          FONT font)       # font to print it in, None don't change #

@d macro mode xchar2b =
MODE XCHAR2B =
	STRUCT(BYTE byte1, byte2)  # normal 16 bit characters are two bytes #

@d macro mode xtextitem16 =
macro mode xchar2b;
MODE XTEXTITEM16 =
	STRUCT(REF XCHAR2B chars,# two byte characters #
          INT nchars,       # number of characters #
              delta,        # delta between strings #
          FONT font)        # font to print it in, None don't change #

@d macro mode xedataobject =
macro mode visual;
macro mode screenformat;
macro mode xfontstruct;
MODE XEDATAOBJECT =
	UNION(DISPLAY,            #display#
         GC,                 #gc#
         REF VISUAL,         #visual#
         SCREEN,             #screen#
         REF SCREENFORMAT,   #pixmap_format#
         REF XFONTSTRUCT)    #font#

@d macro mode xfontsetextents =
macro mode xrectangle;
MODE XFONTSETEXTENTS =
	STRUCT(XRECTANGLE max_ink_extent,
          XRECTANGLE max_logical_extent)

@d macro mode xfontset =
MODE XFONTSET = CSTR

@d macro mode xmbtextitem =
macro mode xfontset;
MODE XMBTEXTITEM =
	STRUCT(CSTR chars,
          INT nchars,
              delta,
          XFONTSET font_set)

@d macro mode xomproc =
MODE XOMPROC = PROC VOID

@d macro mode xwctextitem =
macro mode xfontset;
MODE XWCTEXTITEM =
	STRUCT(WCHAR chars,
          INT nchars,
              delta,
          XFONTSET font_set)

@ Macros for string denotations.

@m xn required charset = "requiredCharSet"
@m xn query orientation = "queryOrientation"
@m xn base fontname = "baseFontName"
@m xn om automatic = "omAutomatic"
@m xn missing charset = "missingCharSet"
@m xn default string = "defaultString"
@m xn orientation = "orientation"
@m xn directional dependent drawing = "directionalDependentDrawing"
@m xn contextual drawing = "contextualDrawing"
@m xn font info = "fontInfo"

@d macro mode xomcharsetlist =
MODE XOMCHARSETLIST =
	STRUCT(INT charset_count,
          REF[]CHAR charset_list)

@ !xorientation! macros and modes.

@m xom orientation ltr ttb = 0
@m xom orientation rtl ttb = 1
@m xom orientation ttb ltr = 2
@m xom orientation ttb rtl = 3
@m xom orientation context = 4

@d macro mode xorientation =
MODE XORIENTATION = CPTR

@d macro mode xomorientation =
macro mode xorientation;
MODE XOMORIENTATION =
	STRUCT(INT num orientation,
          REF XORIENTATION orientation) # Input Text description #

@d macro mode xomfontinfo =
macro mode xfontstruct;
MODE XOMFONTINFO =
	STRUCT(INT num font,
          REF[]XFONTSTRUCT font struct list,
          REF REF[]CHAR font name list)

@d macro mode xim =
MODE XIM=CSTR

@d macro mode xic =
MODE XIC=CSTR

@d macro mode ximproc =
macro mode xim;
MODE XIMPROC = REF PROC(XIM,XPOINTER,XPOINTER)VOID

@d macro mode xicproc =
macro mode xic;
MODE XICPROC = REF PROC(XIC,XPOINTER,XPOINTER)BOOL

@d macro mode xidproc =
MODE XIDPROC = REF PROC(DISPLAY,XPOINTER,XPOINTER)VOID

@d macro mode ximstyle =
MODE XIMSTYLE = BITS

@d macro mode ximstyles =
macro mode ximstyle;
MODE XIMSTYLES =
	STRUCT(SHORT BITS count styles,
          REF[]XIMSTYLE supported styles)

@ Macros for !SHORT BITS! values.

@m xim preedit area =  SHORT 16r0001
@m xim preedit callbacks =  SHORT 16r0002
@m xim preedit position =  SHORT 16r0004
@m xim preedit nothing =  SHORT 16r0008
@m xim preedit none =  SHORT 16r0010
@m xim status area =  SHORT 16r0100
@m xim status callbacks =  SHORT 16r0200
@m xim status nothing =  SHORT 16r0400
@m xim status none =  SHORT 16r0800

@ Macros for ![]CHAR! values.

@m xn va nested list = "XNVaNestedList"
@m xn query input style = "queryInputStyle"
@m xn client window = "clientWindow"
@m xn input style = "inputStyle"
@m xn focus window = "focusWindow"
@m xn resource name = "resourceName"
@m xn resource class = "resourceClass"
@m xn geometry callback = "geometryCallback"
@m xn destroy callback = "destroyCallback"
@m xn filter events = "filterEvents"
@m xn preedit start callback = "preeditStartCallback"
@m xn preedit done callback = "preeditDoneCallback"
@m xn preedit draw callback = "preeditDrawCallback"
@m xn preedit caret callback = "preeditCaretCallback"
@m xn preedit state notify callback = "preeditStateNotifyCallback"
@m xn preedit attributes = "preeditAttributes"
@m xn status start callback = "statusStartCallback"
@m xn status done callback = "statusDoneCallback"
@m xn status draw callback = "statusDrawCallback"
@m xn status attributes = "statusAttributes"
@m xn area = "area"
@m xn area needed = "areaNeeded"
@m xn spot location = "spotLocation"
@m xn colormap = "colorMap"
@m xn std colormap = "stdColorMap"
@m xn foreground = "foreground"
@m xn background = "background"
@m xn background pixmap = "backgroundPixmap"
@m xn font set = "fontSet"
@m xn line space = "lineSpace"
@m xn cursor = "cursor"

@m xn query im values list = "queryIMValuesList"
@m xn query ic values list = "queryICValuesList"
@m xn visible position = "visiblePosition"
@m xn r6 preedit callback = "r6PreeditCallback"
@m xn string conversion callback = "stringConversionCallback"
@m xn string conversion = "stringConversion"
@m xn reset state = "resetState"
@m xn hot key = "hotKey"
@m xn hot key state = "hotKeyState"
@m xn preedit state = "preeditState"
@m xn separator of nested list = "separatorofNestedList"

@ Macros for lookup.

@m x buffer overflow = -1 
@m x lookup none =  1 
@m x lookup chars =  2 
@m x lookup keysym =  3 
@m x lookup both =  4 

@d macro mode xvanestedlist =
MODE XVANESTEDLIST = CPTR

@d macro mode ximcallback =
macro mode ximproc;
MODE XIMCALLBACK =
	STRUCT(XPOINTER client data,
          XIMPROC callback)

@d macro mode xiccallback =
macro mode xicproc;
MODE XICCALLBACK =
	STRUCT(XPOINTER client data,
          XICPROC callback)

@d macro mode ximfeedback =
MODE XIMFEEDBACK = BITS

@ Macros and mode for !XIM!.

@m xim reverse = (2r1)
@m xim underline = (2r1 SHL 1)
@m xim highlight = (2r1 SHL 2)
@m xim primary = (2r1 SHL 5)
@m xim secondary = (2r1 SHL 6)
@m xim tertiary = (2r1 SHL 7)
@m xim visible to forward = (2r1 SHL 8)
@m xim visible to backword = (2r1 SHL 9)
@m xim visible to center = (2r1 SHL 10)

@d macro mode ximtext =
macro mode ximfeedback;
MODE XIMTEXT =
	STRUCT(SHORT BITS length,
          REF XIMFEEDBACK feedback,
          BOOL encoding is wchar, 
          UNION (REF CHAR,  #multi byte#
                 REF WCHAR) # wide char#
    		    string)

@d macro mode ximpreeditstate =
MODE XIMPREEDITSTATE = BITS

@ @m xim preedit unknown =  16r0
@m xim preedit enable =  16r1
@m xim preedit disable = 16r2

@d macro mode ximpreeditstatenotifycallbackstruct =
MODE XIMPREEDITSTATENOTIFYCALLBACKSTRUCT =
	STRUCT(XIMPREEDITSTATE state)

@d macro mode ximresetstate =
MODE XIMRESETSTATE = BITS

@ @m xim initial state =  16r1
@m xim preserve state =  16r2

@d macro mode ximstringconversionfeedback =
MODE XIMSTRINGCONVERSIONFEEDBACK = BITS

@ @m xim string conversion left edge =  16r00000001
@m xim string conversion right edge =  16r00000002
@m xim string conversion top edge =  16r00000004
@m xim string conversion bottom edge =  16r00000008
@m xim string conversion concealed =  16r00000010
@m xim string conversion wrapped =  16r00000020

@d macro mode ximstringconversiontext =
macro mode ximstringconversionfeedback;
MODE XIMSTRINGCONVERSIONTEXT =
	STRUCT(SHORT BITS length,
          REF XIMSTRINGCONVERSIONFEEDBACK feedback,
          BOOL encoding is wchar, 
          UNION(REF CHAR,  #mbs#,
                REF WCHAR) #wcs#
		string)

@d macro mode ximstringconversionposition =
MODE XIMSTRINGCONVERSIONPOSITION = BITS

@d macro mode ximstringconversiontype =
MODE XIMSTRINGCONVERSIONTYPE = SHORT BITS

@ @m xim string conversion buffer =  SHORT 16r0001
@m xim string conversion line =  SHORT 16r0002
@m xim string conversion word =  SHORT 16r0003
@m xim string conversion char =  SHORT 16r0004

@d macro mode ximstringconversionoperation =
MODE XIMSTRINGCONVERSIONOPERATION = SHORT BITS

@ @m xim string conversion substitution =  SHORT 16r0001
@m xim string conversion retrieval =  SHORT 16r0002

@d macro mode ximcaretdirection =
MODE XIMCARETDIRECTION = INT

@ @m xim forward char = 0
@m xim backward char = 1
@m xim forward word = 2
@m xim backward word = 3
@m xim caret up = 4
@m xim caret down = 5
@m xim next line = 6
@m xim previous line = 7
@m xim line start = 8
@m xim line end = 9
@m xim absolute position = 10
@m xim dont change = 11

@m xim is invisible = 0 # Disable caret feedback # 
@m xim is primary = 1 # UI defined caret feedback #
@m xim is secondary = 2 # UI defined caret feedback #

@m xim text type = 0 
@m xim bitmap type = 1 

@d macro mode ximstringconversioncallbackstruct =
macro mode ximstringconversionposition;
macro mode ximcaretdirecrtion;
macro mode ximstringconversionoperation;
macro mode ximstringconversiontext;
MODE XIMSTRINGCONVERSIONCALLBACKSTRUCT =
	STRUCT(XIMSTRINGCONVERSIONPOSITION position,
          XIMCARETDIRECTION direction,
          XIMSTRINGCONVERSIONOPERATION operation,
          SHORT BITS factor,
          REF XIMSTRINGCONVERSIONTEXT text)

@d macro mode ximpreeditdrawcallbackstruct =
macro mode ximtext;
MODE XIMPREEDITDRAWCALLBACKSTRUCT =
	STRUCT(INT caret,      # Cursor offset within pre-edit string #
          INT chg first,   # Starting change position #
          INT chg length,   # Length of the change in character count #
          REF XIMTEXT text)

@d macro mode ximcaretstyle =
MODE XIMCARETSTYLE = INT

@d macro mode ximpreeditcaretcallbackstruct =
macro mode ximcaretdirection;
macro mode ximcaretstyle;
MODE XIMPREEDITCARETCALLBACKSTRUCT =
	STRUCT(INT position,                    # Caret offset within pre-edit string #
          REF XIMCARETDIRECTION direction, # Caret moves direction #
          XIMCARETSTYLE style)             # Feedback of the caret #

@d macro mode ximstatusdatatype =
MODE XIMSTATUSDATATYPE = INT

@d macro mode ximstatusdrawcallbackstruct =
macro mode ximstatusdatatype;
macro mode ximtext;
MODE XIMSTATUSDRAWCALLBACKSTRUCT =
	STRUCT(XIMSTATUSDATATYPE type,
          UNION(REF XIMTEXT, #text#
                PIXMAP)      #bitmap#
		data)

@d macro mode ximhotkeytrigger =
MODE XIMHOTKEYTRIGGER =
	STRUCT(KEYSYM keysym,
          INT modifier,
              modifier mask)

@d macro mode ximhotkeytriggers =
macro mode ximhotkeytrigger;
MODE XIMHOTKEYTRIGGERS = STRUCT(
      INT num hot key,
      REF XIMHOTKEYTRIGGER key)

@d macro mode ximhotkeystate =
MODE XIMHOTKEYSTATE = BITS

@ @m xim hot key state on =  16r0001
@m xim hot key state off =  16r0002

@d macro mode ximvalueslist =
MODE XIMVALUESLIST =
	STRUCT(SHORT INT count values,
          REF[]CHAR supported values)

@ \.{extern int  Xdebug}, starts with !_! so is private to Xlib.

@d macro x debug =
REF INT x debug = REF INT CODE "RESULT=_Xdebug;"

@d macro x load query font =
macro mode xfontstruct;
PROC x load query font = (DISPLAY dpy,[]CHAR name)REF XFONTSTRUCT:
BEGIN
	PROC(DISPLAY,VECTOR[]CHAR)REF XFONTSTRUCT
   	sys x load query font = ALIEN " XLOADQUERYFONT"
   	"#define XLOADQUERYFONT(dpy,name) \"
		"        XLoadQueryFont(dpy,A VC charptr(name))";
	sys x load query font(dpy,Z MAKERVC name)
END #x load query font#

@d macro x query font =
macro mode xfontstruct;
PROC(DISPLAY,XID)REF XFONTSTRUCT
   x query font = ALIEN "XQUERYFONT"
   "#define XQUERYFONT(dpy,font ID) XQueryFont(dpy,font ID)"

CO extern XTimeCoord *XGetMotionEvents(
    Display*      # display #,
    Window      # w #,
    Time      # start #,
    Time      # stop #,
    int*      # nevents return #
), CO

CO extern XModifierKeymap *XDeleteModifiermapEntry(
    XModifierKeymap*   # modmap #,
    unsigned int      # keycode entry #,
    int         # modifier #
), CO

CO extern XModifierKeymap   *XGetModifierMapping(
    Display*      # display #
), CO

CO extern XModifierKeymap   *XInsertModifiermapEntry(
    XModifierKeymap*   # modmap #,
    unsigned int      # keycode entry #,
    int         # modifier #    
), CO

CO extern XModifierKeymap *XNewModifiermap(
    int         # max keys per mod #
), CO

CO extern XImage *XCreateImage(
    Display*      # display #,
    Visual*      # visual #,
    unsigned int   # depth #,
    int         # format #,
    int         # offset #,
    char*      # data #,
    unsigned int   # width #,
    unsigned int   # height #,
    int         # bitmap pad #,
    int         # bytes per line #
), CO

CO extern Status XInitImage(
    XImage*      # image #
), CO

CO extern XImage *XGetImage(
    Display*      # display #,
    Drawable      # d #,
    int         # x #,
    int         # y #,
    unsigned int   # width #,
    unsigned int   # height #,
    unsigned long   # plane mask #,
    int         # format #
), CO

CO extern XImage *XGetSubImage(
    Display*      # display #,
    Drawable      # d #,
    int         # x #,
    int         # y #,
    unsigned int   # width #,
    unsigned int   # height #,
    unsigned long   # plane mask #,
    int         # format #,
    XImage*      # dest image #,
    int         # dest x #,
    int         # dest y #
); CO

@ X function declarations.

@d macro x open display =
PROC x open display = ([]CHAR disp name)DISPLAY:
BEGIN
	PROC(VECTOR[]CHAR)DISPLAY sys x open display = ALIEN "XOPENDISPLAY"
   	"#define XOPENDISPLAY(display name) \"
		"   (void *)XOpenDisplay(A VC charptr(display name))";
	sys x open display(Z MAKERVC disp name)
END #x open display#

CO extern void XrmInitialize(
    void
), CO

CO extern char *XFetchBytes(
    Display*      # display #,
    int*      # nbytes return #
), CO

CO extern char *XFetchBuffer(
    Display*      # display #,
    int*      # nbytes return #,
    int         # buffer #
), CO

CO extern char *XGetAtomName(
    Display*      # display #,
    Atom      # atom #
), CO

CO extern Status XGetAtomNames(
    Display*      # dpy #,
    Atom*      # atoms #,
    int         # count #,
    char**      # names return #
), CO

CO extern char *XGetDefault(
    Display*      # display #,
     Xconst char*   # program #,
     Xconst char*   # option #        
), CO

CO extern char *XDisplayName(
     Xconst char*   # string #
), CO

CO extern char *XKeysymToString(
    KeySym      # keysym #
), CO

@d macro x synchronize =
PROC(DISPLAY,BOOL)CSTR x synchronize = ALIEN "XSYNCHRONIZE"
	"#define XSYNCHRONIZE(dpy,onoff) (void *)XSynchronize(dpy,onoff)"

CO extern int (*XSetAfterFunction(
    Display*      # display #,
    int (*) (
        Display*   # display #
            )      # procedure #
))(
    Display*      # display #
), CO

CO extern Atom XInternAtom(
    Display*      # display #,
     Xconst char*   # atom name #,
    Bool      # only if exists #       
), CO

CO extern Status XInternAtoms(
    Display*      # dpy #,
    char**      # names #,
    int         # count #,
    Bool      # onlyIfExists #,
    Atom*      # atoms return #
), CO

CO extern Colormap XCopyColormapAndFree(
    Display*      # display #,
    Colormap      # colourmap #
), CO

CO extern Colormap XCreateColormap(
    Display*      # display #,
    Window      # w #,
    Visual*      # visual #,
    int         # alloc #          
), CO

CO extern Cursor XCreatePixmapCursor(
    Display*      # display #,
    Pixmap      # source #,
    Pixmap      # mask #,
    XColor*      # foreground colour #,
    XColor*      # background colour #,
    unsigned int   # x #,
    unsigned int   # y #            
), CO

CO extern Cursor XCreateGlyphCursor(
    Display*      # display #,
    Font      # source font #,
    Font      # mask font #,
    unsigned int   # source char #,
    unsigned int   # mask char #,
    XColor*      # foreground colour #,
    XColor*      # background colour #
), CO

CO extern Cursor XCreateFontCursor(
    Display*      # display #,
    unsigned int   # shape #
), CO

CO extern Font XLoadFont(
    Display*      # display #,
     Xconst char*   # name #
), CO

@d macro x create gc =
macro mode xgcvalues;
PROC(DISPLAY,DRAWABLE,BITS,REF XGCVALUES)GC x create gc =
   ALIEN "XCREATEGC"
   "#define XCREATEGC(dpy,d,valuemask,values) \"
   "        (void *)XCreateGC(dpy,d,valuemask,values)"

@d macro x gcontext from gc =
PROC(GC)GCONTEXT x gcontext from gc = ALIEN "XGCONTEXTFROMGC"
	"#define XGCONTEXTFROMGC(gc) XGContextFromGC(gc)"

@d macro x flush gc =
PROC(DISPLAY,GC)VOID x flush gc = ALIEN "XFLUSHGC"
	"#define XFLUSHGC(dpy,gc) XFlushGC(dpy,gc)"

CO extern Pixmap XCreatePixmap(
    Display*      # display #,
    Drawable      # d #,
    unsigned int   # width #,
    unsigned int   # height #,
    unsigned int   # depth #              
), CO

@d macro x create bitmap from data =
PROC x create bitmap from data =
	(DISPLAY dpy,DRAWABLE d,[]CHAR data,INT w,h)PIXMAP:
BEGIN
	PROC(DISPLAY,DRAWABLE,VECTOR[]CHAR,INT,INT)PIXMAP
		sys x create bitmap from data =
   	ALIEN "XCREATEBITMAPFROMDATA"
   	"#define XCREATEBITMAPFROMDATA(dpy,d,data,w,h) \"
   	"	XCreateBitmapFromData((void *)dpy,d,A VC charptr(data),w,h)";
	sys x create bitmap from data(dpy,d,Z MAKERVC data,w,h)
END #x create bitmap from data#

CO extern Pixmap XCreatePixmapFromBitmapData(
    Display*      # display #,
    Drawable      # d #,
    char*      # data #,
    unsigned int   # width #,
    unsigned int   # height #,
    unsigned long   # fg #,
    unsigned long   # bg #,
    unsigned int   # depth #
), CO

@d macro x create simple window =
PROC(DISPLAY,WINDOW,INT,INT,INT,INT,INT,BITS,BITS)WINDOW
   x create simple window = ALIEN "XCREATESIMPLEWINDOW"
   "#define XCREATESIMPLEWINDOW(dpy,parent,x,y,width,height,\"
   "                            border width,border,background) \"
   "   XCreateSimpleWindow(dpy,parent,x,y,width,height,\"
   "                            border width,border,background)"

CO extern Window XGetSelectionOwner(
    Display*      # display #,
    Atom      # selection #
), CO

CO extern Window XCreateWindow(
    Display*      # display #,
    Window      # parent #,
    int         # x #,
    int         # y #,
    unsigned int   # width #,
    unsigned int   # height #,
    unsigned int   # border width #,
    int         # depth #,
    unsigned int   # class #,
    Visual*      # visual #,
    unsigned long   # valuemask #,
    XSetWindowAttributes*   # attributes #
), CO 

CO extern Colormap *XListInstalledColormaps(
    Display*      # display #,
    Window      # w #,
    int*      # num return #
), CO

CO extern char **XListFonts(
    Display*      # display #,
     Xconst char*   # pattern #,
    int         # maxnames #,
    int*      # actual count return #
), CO

CO extern char **XListFontsWithInfo(
    Display*      # display #,
     Xconst char*   # pattern #,
    int         # maxnames #,
    int*      # count return #,
    XFontStruct**   # info return #
), CO

CO extern char **XGetFontPath(
    Display*      # display #,
    int*      # npaths return #
), CO

CO extern char **XListExtensions(
    Display*      # display #,
    int*      # nextensions return #
), CO

CO extern Atom *XListProperties(
    Display*      # display #,
    Window      # w #,
    int*      # num prop return #
), CO

CO extern XHostAddress *XListHosts(
    Display*      # display #,
    int*      # nhosts return #,
    Bool*      # state return #
), CO

@d macro x keycode to keysym =
PROC(DISPLAY,BITS,INT)BITS x keycode to key sym = ALIEN "XKEYCODETOKEYSYM"
	"#define XKEYCODETOKEYSYM(dpy,keycode,idx) \"
	"   XKeycodeToKeysym(dpy,keycode,idx)"

CO extern KeySym XLookupKeysym(
    XKeyEvent*      # key event #,
    int         # index #
), CO

CO extern KeySym *XGetKeyboardMapping(
    Display*      # display #,
    unsigned int   # first keycode #,
    int         # keycode count #,
    int*      # keysyms per keycode return #
), CO

CO extern KeySym XStringToKeysym(
     Xconst char*   # string #
), CO

CO extern long XMaxRequestSize(
    Display*      # display #
), CO

CO extern long XExtendedMaxRequestSize(
    Display*      # display #
), CO

CO extern char *XResourceManagerString(
    Display*      # display #
), CO

CO extern char *XScreenResourceString(
   Screen*      # screen #
), CO

CO extern unsigned long XDisplayMotionBufferSize(
    Display*      # display #
), CO

CO extern VisualID XVisualIDFromVisual(
    Visual*      # visual #
), CO

# multithread routines #

CO extern Status XInitThreads(
    void
), CO

CO extern void XLockDisplay(
    Display*      # display #
), CO

CO extern void XUnlockDisplay(
    Display*      # display #
), CO

# routines for dealing with extensions #

CO extern XExtCodes *XInitExtension(
    Display*      # display #,
     Xconst char*   # name #
), CO

CO extern XExtCodes *XAddExtension(
    Display*      # display #
), CO

CO extern XExtData *XFindOnExtensionList(
    XExtData**      # structure #,
    int         # number #
), CO

CO extern XExtData **XEHeadOfExtensionList(
    XEDataObject   # object #
), CO

@ These are routines for which there are also macros.

@d macro x root window =
PROC(DISPLAY,INT)WINDOW x root window = ALIEN "XROOTWINDOW"
	"#define XROOTWINDOW(dpy,scn) XRootWindow(dpy,scn)"

@d macro x default root window =
PROC(DISPLAY)WINDOW x default root window = ALIEN "XDEFAULTROOTWINDOW"
	"#define XDEFAULTROOTWINDOW(dpy) XDefaultRootWindow(dpy)"

CO extern Window XRootWindowOfScreen(
    Screen*      # screen #
), CO

CO extern Visual *XDefaultVisual(
    Display*      # display #,
    int         # screen number #
), CO

CO extern Visual *XDefaultVisualOfScreen(
    Screen*      # screen #
), CO

CO extern GC XDefaultGC(
    Display*      # display #,
    int         # screen number #
), CO

@d macro x black pixel =
PROC(DISPLAY,INT)BITS x black pixel = ALIEN "XBLACKPIXEL"
   "#define XBLACKPIXEL(dpy,scr) XBlackPixel(dpy,A_INT_int(scr))"

@d macro x white pixel =
PROC(DISPLAY,INT)BITS x white pixel = ALIEN "XWHITEPIXEL"
   "#define XWHITEPIXEL(dpy,scr) XWhitePixel(dpy,A_INT_int(scr))"

CO extern unsigned long XAllPlanes(
    void
), CO

CO extern unsigned long XBlackPixelOfScreen(
    Screen*      # screen #
), CO

CO extern unsigned long XWhitePixelOfScreen(
    Screen*      # screen #
), CO

CO extern unsigned long XNextRequest(
    Display*      # display #
), CO

CO extern unsigned long XLastKnownRequestProcessed(
    Display*      # display #
), CO

@d macro x server vendor =
PROC x server vendor = (DISPLAY dpy)[]CHAR:
(
   PROC(DISPLAY)CSTR sys xsv = ALIEN "XSERVERVENDOR"
   "#define XSERVERVENDOR(dpy) (void *)XServerVendor(dpy)";
   VECTOR[]CHAR(CSTRTORVC sys xsv(dpy))
)

@d macro x display string =
PROC x display string = (DISPLAY dpy)[]CHAR:
BEGIN
	PROC(DISPLAY)CSTR sys xdstr = ALIEN "XDISPLAYSTRING"
	"#define XDISPLAYSTRING(dpy) (void *)XDisplayString(dpy)";
   VECTOR[]CHAR(CSTRTORVC sys xdstr(dpy))
END #x display string#

CO extern Colormap XDefaultColormap(
    Display*      # display #,
    int         # screen number #
), CO

CO extern Colormap XDefaultColormapOfScreen(
    Screen*      # screen #
), CO

CO extern Display *XDisplayOfScreen(
    Screen*      # screen #
), CO

CO extern Screen *XScreenOfDisplay(
    Display*      # display #,
    int         # screen number #
), CO

CO extern Screen *XDefaultScreenOfDisplay(
    Display*      # display #
), CO

CO extern long XEventMaskOfScreen(
    Screen*      # screen #
), CO

CO extern int XScreenNumberOfScreen(
    Screen*      # screen #
), CO

@ The \.{Xlib} library has a default error handler for handling protocol
errors. The user can provide her own handler using the mode !XERRORHANDLER!.

@d macro mode xerrorhandler =
macro mode xevent;
MODE XERRORHANDLER = PROC(DISPLAY,REF XERROREVENT)INT

@ Here is the procedure which registers the user's error handler.

@d macro x set error handler =
macro mode xerrorhandler;
PROC x set error handler = (XERRORHANDLER xeh)CPTR:
BEGIN
	PROC(CPTR)CPTR sys x set errorhandler = ALIEN "XSETERRORHANDLER"
   "#define XSETERRORHANDLER(p) XSetErrorHandler((void *)p)";
   OP(XERRORHANDLER)PDESC TOPDESC = BIOP 99;
   sys x set errorhandler(cp OF TOPDESC p)
END #x set error handler#

CO
typedef int (*XIOErrorHandler) (    # WARNING, this type not in Xlib spec #
    Display*      # display #
), CO

@ @d macro x set io error handler =
PROC x set io error handler = (PROC(DISPLAY)VOID p)CPTR:
BEGIN
   PROC(CPTR)CPTR sys x set io error handler = ALIEN "XSETIOERRORHANDLER"
	"#define XSETIOERRORHANDLER(p) XSetIOErrorHandler((void *)p)";
  OP(PROC(DISPLAY)VOID)PDESC TOPDESC = BIOP 99;
  sys x set io error handler(cp OF TOPDESC p)
END #x set io error handler#

CO extern XPixmapFormatValues *XListPixmapFormats(
    Display*      # display #,
    int*      # count return #
), CO

CO extern int *XListDepths(
    Display*      # display #,
    int         # screen number #,
    int*      # count return #
), CO

# ICCCM routines for things that don't require special include files, #
# other declarations are given in Xutil.h                             #
CO extern Status XReconfigureWMWindow(
    Display*      # display #,
    Window      # w #,
    int         # screen number #,
    unsigned int   # mask #,
    XWindowChanges*   # changes #
), CO

CO extern Status XGetWMProtocols(
    Display*      # display #,
    Window      # w #,
    Atom**      # protocols return #,
    int*      # count return #
), CO

CO extern Status XSetWMProtocols(
    Display*      # display #,
    Window      # w #,
    Atom*      # protocols #,
    int         # count #
), CO

CO extern Status XIconifyWindow(
    Display*      # display #,
    Window      # w #,
    int         # screen number #
), CO

CO extern Status XWithdrawWindow(
    Display*      # display #,
    Window      # w #,
    int         # screen number #
), CO

CO extern Status XGetCommand(
    Display*      # display #,
    Window      # w #,
    char***      # argv return #,
    int*      # argc return #
), CO

CO extern Status XGetWMColormapWindows(
    Display*      # display #,
    Window      # w #,
    Window**      # windows return #,
    int*      # count return #
), CO

CO extern Status XSetWMColormapWindows(
    Display*      # display #,
    Window      # w #,
    Window*      # colourmap windows #,
    int         # count #
), CO

CO extern void XFreeStringList(
    char**      # list #
), CO

CO extern int XSetTransientForHint(
    Display*      # display #,
    Window      # w #,
    Window      # prop window #
), CO

# The following are given in alphabetical order #

CO extern int XActivateScreenSaver(
    Display*      # display #
), CO

CO extern int XAddHost(
    Display*      # display #,
    XHostAddress*   # host #
), CO

CO extern int XAddHosts(
    Display*      # display #,
    XHostAddress*   # hosts #,
    int         # num hosts #    
), CO

CO extern int XAddToExtensionList(
    struct  XExtData**   # structure #,
    XExtData*      # ext data #
), CO

CO extern int XAddToSaveSet(
    Display*      # display #,
    Window      # w #
), CO

CO extern Status XAllocColor(
    Display*      # display #,
    Colormap      # colourmap #,
    XColor*      # screen in out #
), CO

CO extern Status XAllocColorCells(
    Display*      # display #,
    Colormap      # colourmap #,
    Bool           # contig #,
    unsigned long*   # plane masks return #,
    unsigned int   # nplanes #,
    unsigned long*   # pixels return #,
    unsigned int    # npixels #
), CO

CO extern Status XAllocColorPlanes(
    Display*      # display #,
    Colormap      # colourmap #,
    Bool      # contig #,
    unsigned long*   # pixels return #,
    int         # ncolours #,
    int         # nreds #,
    int         # ngreens #,
    int         # nblues #,
    unsigned long*   # rmask return #,
    unsigned long*   # gmask return #,
    unsigned long*   # bmask return #
), CO

CO extern Status XAllocNamedColor(
    Display*      # display #,
    Colormap      # colourmap #,
     Xconst char*   # colour name #,
    XColor*      # screen def return #,
    XColor*      # exact def return #
), CO

CO extern int XAllowEvents(
    Display*      # display #,
    int         # event mode #,
    Time      # time #
), CO

CO extern int XAutoRepeatOff(
    Display*      # display #
), CO

CO extern int XAutoRepeatOn(
    Display*      # display #
), CO

CO extern int XBell(
    Display*      # display #,
    int         # percent #
), CO

CO extern int XBitmapBitOrder(
    Display*      # display #
), CO

CO extern int XBitmapPad(
    Display*      # display #
), CO

CO extern int XBitmapUnit(
    Display*      # display #
), CO

CO extern int XCellsOfScreen(
    Screen*      # screen #
), CO

CO extern int XChangeActivePointerGrab(
    Display*      # display #,
    unsigned int   # event mask #,
    Cursor      # cursor #,
    Time      # time #
), CO

CO extern int XChangeGC(
    Display*      # display #,
    GC         # gc #,
    unsigned long   # valuemask #,
    XGCValues*      # values #
), CO

CO extern int XChangeKeyboardControl(
    Display*      # display #,
    unsigned long   # value mask #,
    XKeyboardControl*   # values #
), CO

CO extern int XChangeKeyboardMapping(
    Display*      # display #,
    int         # first keycode #,
    int         # keysyms per keycode #,
    KeySym*      # keysyms #,
    int         # num codes #
), CO

CO extern int XChangePointerControl(
    Display*      # display #,
    Bool      # do accel #,
    Bool      # do threshold #,
    int         # accel numerator #,
    int         # accel denominator #,
    int         # threshold #
), CO

CO extern int XChangeProperty(
    Display*      # display #,
    Window      # w #,
    Atom      # property #,
    Atom      # type #,
    int         # format #,
    int         # mode #,
     Xconst unsigned char*   # data #,
    int         # nelements #
), CO

CO extern int XChangeSaveSet(
    Display*      # display #,
    Window      # w #,
    int         # change mode #
), CO

CO extern int XChangeWindowAttributes(
    Display*      # display #,
    Window      # w #,
    unsigned long   # valuemask #,
    XSetWindowAttributes* # attributes #
), CO

CO extern Bool XCheckIfEvent(
    Display*      # display #,
    XEvent*      # event return #,
    Bool (*) (
          Display*         # display #,
               XEvent*         # event #,
               XPointer         # arg #
             )      # predicate #,
    XPointer      # arg #
), CO

CO extern Bool XCheckMaskEvent(
    Display*      # display #,
    long      # event mask #,
    XEvent*      # event return #
), CO

CO extern Bool XCheckTypedEvent(
    Display*      # display #,
    int         # event type #,
    XEvent*      # event return #
), CO

CO extern Bool XCheckTypedWindowEvent(
    Display*      # display #,
    Window      # w #,
    int         # event type #,
    XEvent*      # event return #
), CO

CO extern Bool XCheckWindowEvent(
    Display*      # display #,
    Window      # w #,
    long      # event mask #,
    XEvent*      # event return #
), CO

CO extern int XCirculateSubwindows(
    Display*      # display #,
    Window      # w #,
    int         # direction #
), CO

CO extern int XCirculateSubwindowsDown(
    Display*      # display #,
    Window      # w #
), CO

CO extern int XCirculateSubwindowsUp(
    Display*      # display #,
    Window      # w #
), CO

CO extern int XClearArea(
    Display*      # display #,
    Window      # w #,
    int         # x #,
    int         # y #,
    unsigned int   # width #,
    unsigned int   # height #,
    Bool      # exposures #
), CO

CO extern int XClearWindow(
    Display*      # display #,
    Window      # w #
), CO

@d macro x close display =
PROC(DISPLAY)INT x close display = ALIEN "XCLOSEDISPLAY"
	"#define XCLOSEDISPLAY(dpy) XCloseDisplay(dpy)"

CO extern int XConfigureWindow(
    Display*      # display #,
    Window      # w #,
    unsigned int   # value mask #,
    XWindowChanges*   # values #       
), CO

CO extern int XConnectionNumber(
    Display*      # display #
), CO

CO extern int XConvertSelection(
    Display*      # display #,
    Atom      # selection #,
    Atom       # target #,
    Atom      # property #,
    Window      # requestor #,
    Time      # time #
), CO

CO extern int XCopyArea(
    Display*      # display #,
    Drawable      # src #,
    Drawable      # dest #,
    GC         # gc #,
    int         # src x #,
    int         # src y #,
    unsigned int   # width #,
    unsigned int   # height #,
    int         # dest x #,
    int         # dest y #
), CO

CO extern int XCopyGC(
    Display*      # display #,
    GC         # src #,
    unsigned long   # valuemask #,
    GC         # dest #
), CO

CO extern int XCopyPlane(
    Display*      # display #,
    Drawable      # src #,
    Drawable      # dest #,
    GC         # gc #,
    int         # src x #,
    int         # src y #,
    unsigned int   # width #,
    unsigned int   # height #,
    int         # dest x #,
    int         # dest y #,
    unsigned long   # plane #
), CO

CO extern int XDefaultDepth(
    Display*      # display #,
    int         # screen number #
), CO

CO extern int XDefaultDepthOfScreen(
    Screen*      # screen #
), CO

@d macro x default screen =
PROC(DISPLAY)INT x default screen = ALIEN "XDEFAULTSCREEN"
   "#define XDEFAULTSCREEN(dpy) XDefaultScreen(dpy)"

CO extern int XDefineCursor(
    Display*      # display #,
    Window      # w #,
    Cursor      # cursor #
), CO

CO extern int XDeleteProperty(
    Display*      # display #,
    Window      # w #,
    Atom      # property #
), CO

@d macro x destroy window =
PROC(DISPLAY,WINDOW)INT x destroy window = ALIEN "XDESTROYWINDOW"
	"#define XDESTROYWINDOW(dpy,w) XDestroyWindow(dpy,w)"

CO extern int XDestroySubwindows(
    Display*      # display #,
    Window      # w #
), CO

CO extern int XDoesBackingStore(
    Screen*      # screen #    
), CO

CO extern Bool XDoesSaveUnders(
    Screen*      # screen #
), CO

CO extern int XDisableAccessControl(
    Display*      # display #
), CO


CO extern int XDisplayCells(
    Display*      # display #,
    int         # screen number #
), CO

CO extern int XDisplayHeight(
    Display*      # display #,
    int         # screen number #
), CO

CO extern int XDisplayHeightMM(
    Display*      # display #,
    int         # screen number #
), CO

CO extern int XDisplayKeycodes(
    Display*      # display #,
    int*      # min keycodes return #,
    int*      # max keycodes return #
), CO

CO extern int XDisplayPlanes(
    Display*      # display #,
    int         # screen number #
), CO

CO extern int XDisplayWidth(
    Display*      # display #,
    int         # screen number #
), CO

CO extern int XDisplayWidthMM(
    Display*      # display #,
    int         # screen number #
), CO

CO extern int XDrawArc(
    Display*      # display #,
    Drawable      # d #,
    GC         # gc #,
    int         # x #,
    int         # y #,
    unsigned int   # width #,
    unsigned int   # height #,
    int         # angle1 #,
    int         # angle2 #
), CO

CO extern int XDrawArcs(
    Display*      # display #,
    Drawable      # d #,
    GC         # gc #,
    XArc*      # arcs #,
    int         # narcs #
), CO

@d macro x draw image string =
PROC x draw image string = (DISPLAY dpy,
                            DRAWABLE d,
									 GC gc,
									 INT x, y,
                            []CHAR s)INT:
BEGIN
	PROC(DISPLAY,DRAWABLE,GC,INT,INT,VECTOR[]CHAR)INT
		sys x draw image string	= ALIEN "XDRAWIMAGESTRING"
		"#define XDRAWIMAGESTRING(dpy,d,gc,x,y,str) \"
		"        XDrawImageString(dpy,d,gc,x,y,A VC charptr(str),str.upb)";
   sys x draw image string(dpy,d,gc,x,y,Z MAKERVC s)
END #x draw image string#

CO extern int XDrawLine(
    Display*      # display #,
    Drawable      # d #,
    GC         # gc #,
    int         # x1 #,
    int         # x2 #,
    int         # y1 #,
    int         # y2 #
), CO

@d macro x draw lines =
macro mode xpoint;
PROC x draw lines = (DISPLAY dpy,DRAWABLE d,GC gc,[]XPOINT pts,INT mode)INT:
BEGIN
	PROC(DISPLAY,DRAWABLE,GC,VECTOR[]XPOINT,INT)INT
		sys x draw lines = ALIEN "XDRAWLINES"
		"#define XDRAWLINES(dpy,d,gc,points,mode) \"
		"   XDrawLines((void *)dpy,d,(void *)gc,points.data,points.upb,mode)";
	VECTOR[UPB pts[@@1]]XPOINT lp;
	FOR i FROM LWB pts TO UPB pts
	DO
		lp[i-LWB pts+1]:=pts[i]
	OD;
	sys x draw lines(dpy,d,gc,lp,mode)
END #x draw lines#

CO extern int XDrawPoint(
    Display*      # display #,
    Drawable      # d #,
    GC         # gc #,
    int         # x #,
    int         # y #
), CO

CO extern int XDrawPoints(
    Display*      # display #,
    Drawable      # d #,
    GC         # gc #,
    XPoint*      # points #,
    int         # npoints #,
    int         # mode #
), CO

CO extern int XDrawRectangle(
    Display*      # display #,
    Drawable      # d #,
    GC         # gc #,
    int         # x #,
    int         # y #,
    unsigned int   # width #,
    unsigned int   # height #
), CO

CO extern int XDrawRectangles(
    Display*      # display #,
    Drawable      # d #,
    GC         # gc #,
    XRectangle*      # rectangles #,
    int         # nrectangles #
), CO

CO extern int XDrawSegments(
    Display*      # display #,
    Drawable      # d #,
    GC         # gc #,
    XSegment*      # segments #,
    int         # nsegments #
), CO

CO extern int XDrawString(
    Display*      # display #,
    Drawable      # d #,
    GC         # gc #,
    int         # x #,
    int         # y #,
     Xconst char*   # string #,
    int         # length #
), CO

CO extern int XDrawString16(
    Display*      # display #,
    Drawable      # d #,
    GC         # gc #,
    int         # x #,
    int         # y #,
     Xconst XChar2b*   # string #,
    int         # length #
), CO

CO extern int XDrawText(
    Display*      # display #,
    Drawable      # d #,
    GC         # gc #,
    int         # x #,
    int         # y #,
    XTextItem*      # items #,
    int         # nitems #
), CO

CO extern int XDrawText16(
    Display*      # display #,
    Drawable      # d #,
    GC         # gc #,
    int         # x #,
    int         # y #,
    XTextItem16*   # items #,
    int         # nitems #
), CO

CO extern int XEnableAccessControl(
    Display*      # display #
), CO

@d macro x events queued =
PROC(DISPLAY,INT)INT x events queued = ALIEN "XEVENTSQUEUED"
	"#define XEVENTSQUEUED(dpy,mode) A int INT(XEventsQueued(dpy,mode))"

CO extern Status XFetchName(
    Display*      # display #,
    Window      # w #,
    char**      # window name return #
), CO

CO extern int XFillArc(
    Display*      # display #,
    Drawable      # d #,
    GC         # gc #,
    int         # x #,
    int         # y #,
    unsigned int   # width #,
    unsigned int   # height #,
    int         # angle1 #,
    int         # angle2 #
), CO

CO extern int XFillArcs(
    Display*      # display #,
    Drawable      # d #,
    GC         # gc #,
    XArc*      # arcs #,
    int         # narcs #
), CO

@d macro x fill polygon =
macro mode xpoint;
PROC x fill polygon = (DISPLAY dpy,DRAWABLE d,GC gc,
							  []XPOINT points,INT shape,INT mode)INT:
BEGIN
	PROC(DISPLAY,DRAWABLE,GC,VECTOR[]XPOINT,INT,INT)INT
		sys x fill polygon = ALIEN "XFILLPOLYGON"
	"#define XFILLPOLYGON(dpy,d,gc,points,shape,mode) \"
	" XFillPolygon((void *)dpy,d,(void *)gc,\"
	"              (void *)points.data,points.upb,shape,mode)";
	VECTOR[UPB points-LWB points+1]XPOINT lp;
	FOR i FROM LWB points TO UPB points
	DO
		lp[i]:=points[@@1][i]
	OD;
	sys x fill polygon(dpy,d,gc,lp,shape,mode)
END #x fill polygon#

@d macro x fill rectangle =
PROC(DISPLAY,DRAWABLE,GC,INT,INT,INT,INT)INT
	x fill rectangle = ALIEN "XFILLRECTANGLE"
	"#define XFILLRECTANGLE(dpy,d,gc,x,y,w,h) \"
	"	 XFillRectangle((void *)dpy,d,gc,x,y,w,h)"

CO extern int XFillRectangles(
    Display*      # display #,
    Drawable      # d #,
    GC         # gc #,
    XRectangle*      # rectangles #,
    int         # nrectangles #
), CO

@d macro x flush =
PROC(DISPLAY)INT x flush = ALIEN "XFLUSH"
	"#define XFLUSH(dpy) A int INT(XFlush(dpy))"

CO extern int XForceScreenSaver(
    Display*      # display #,
    int         # mode #
), CO

CO extern int XFree(
    void*      # data #
), CO

CO extern int XFreeColormap(
    Display*      # display #,
    Colormap      # colourmap #
), CO

CO extern int XFreeColors(
    Display*      # display #,
    Colormap      # colourmap #,
    unsigned long*   # pixels #,
    int         # npixels #,
    unsigned long   # planes #
), CO

CO extern int XFreeCursor(
    Display*      # display #,
    Cursor      # cursor #
), CO

CO extern int XFreeExtensionList(
    char**      # list #    
), CO

CO extern int XFreeFont(
    Display*      # display #,
    XFontStruct*   # font struct #
), CO

CO extern int XFreeFontInfo(
    char**      # names #,
    XFontStruct*   # free info #,
    int         # actual count #
), CO

CO extern int XFreeFontNames(
    char**      # list #
), CO

CO extern int XFreeFontPath(
    char**      # list #
), CO

@d macro x free gc =
PROC(DISPLAY,GC)INT x free gc = ALIEN "XFREEGC"
	"#define XFREEGC(dpy,gc) XFreeGC(dpy,gc)"

CO extern int XFreeModifiermap(
    XModifierKeymap*   # modmap #
), CO

@d macro x free pixmap =
PROC(DISPLAY,PIXMAP)INT x free pixmap = ALIEN "XFREEPIXMAP"
   "#define XFREEPIXMAP(dpy,pix) XFreePixmap((void *)dpy,pix)"

CO extern int XFreePixmap(
    Display*      # display #,
    Pixmap      # pixmap #
), CO

CO extern int XGeometry(
    Display*      # display #,
    int         # screen #,
     Xconst char*   # position #,
     Xconst char*   # default position #,
    unsigned int   # bwidth #,
    unsigned int   # fwidth #,
    unsigned int   # fheight #,
    int         # xadder #,
    int         # yadder #,
    int*      # x return #,
    int*      # y return #,
    int*      # width return #,
    int*      # height return #
), CO

CO extern int XGetErrorDatabaseText(
    Display*      # display #,
     Xconst char*   # name #,
     Xconst char*   # message #,
     Xconst char*   # default string #,
    char*      # buffer return #,
    int         # length #
), CO

@d macro x get error text =
PROC x get error text = (DISPLAY dpy,INT code,REF[]CHAR buffer)INT:
BEGIN
	VECTOR[UPB buffer-LWB buffer+1]CHAR loc buff;
	PROC(DISPLAY,INT,RVC)INT sys x get error text = ALIEN "XGETERRORTEXT"
   	"#define XGETERRORTEXT(dpy,code,buffer) \"
   	"   XGetErrorText(dpy,code,A VC charptr(buffer),buffer.upb)";
	INT res=sys x get error text(dpy,code,loc buff);
	buffer:=loc buff[@ LWB buffer];
	res
END

CO extern Bool XGetFontProperty(
    XFontStruct*   # font struct #,
    Atom      # atom #,
    unsigned long*   # value return #
), CO

@d macro x get gc values =
PROC(DISPLAY,GC,BITS mask,REF XGCVALUES)STATUS x get tc values =
	ALIEN "XGETGCVALUES"
	"#define XGETGCVALUES(dpy,gc,mask,vr) \"
	"  XGetGCValues((void *)dpy,(void *)gc,mask,(void *)vr)"

CO extern Status XGetGeometry(
    Display*      # display #,
    Drawable      # d #,
    Window*      # root return #,
    int*      # x return #,
    int*      # y return #,
    unsigned int*   # width return #,
    unsigned int*   # height return #,
    unsigned int*   # border width return #,
    unsigned int*   # depth return #
), CO

CO extern Status XGetIconName(
    Display*      # display #,
    Window      # w #,
    char**      # icon name return #
), CO

CO extern int XGetInputFocus(
    Display*      # display #,
    Window*      # focus return #,
    int*      # revert to return #
), CO

CO extern int XGetKeyboardControl(
    Display*      # display #,
    XKeyboardState*   # values return #
), CO

CO extern int XGetPointerControl(
    Display*      # display #,
    int*      # accel numerator return #,
    int*      # accel denominator return #,
    int*      # threshold return #
), CO

CO extern int XGetPointerMapping(
    Display*      # display #,
    unsigned char*   # map return #,
    int         # nmap #
), CO

CO extern int XGetScreenSaver(
    Display*      # display #,
    int*      # timeout return #,
    int*      # interval return #,
    int*      # prefer blanking return #,
    int*      # allow exposures return #
), CO

CO extern Status XGetTransientForHint(
    Display*      # display #,
    Window      # w #,
    Window*      # prop window return #
), CO

CO extern int XGetWindowProperty(
    Display*      # display #,
    Window      # w #,
    Atom      # property #,
    long      # long offset #,
    long      # long length #,
    Bool      # delete #,
    Atom      # req type #,
    Atom*      # actual type return #,
    int*      # actual format return #,
    unsigned long*   # nitems return #,
    unsigned long*   # bytes after return #,
    unsigned char**   # prop return #
), CO

CO extern Status XGetWindowAttributes(
    Display*      # display #,
    Window      # w #,
    XWindowAttributes*   # window attributes return #
), CO

CO extern int XGrabButton(
    Display*      # display #,
    unsigned int   # button #,
    unsigned int   # modifiers #,
    Window      # grab window #,
    Bool      # owner events #,
    unsigned int   # event mask #,
    int         # pointer mode #,
    int         # keyboard mode #,
    Window      # confine to #,
    Cursor      # cursor #
), CO

CO extern int XGrabKey(
    Display*      # display #,
    int         # keycode #,
    unsigned int   # modifiers #,
    Window      # grab window #,
    Bool      # owner events #,
    int         # pointer mode #,
    int         # keyboard mode #
), CO

CO extern int XGrabKeyboard(
    Display*      # display #,
    Window      # grab window #,
    Bool      # owner events #,
    int         # pointer mode #,
    int         # keyboard mode #,
    Time      # time #
), CO

CO extern int XGrabPointer(
    Display*      # display #,
    Window      # grab window #,
    Bool      # owner events #,
    unsigned int   # event mask #,
    int         # pointer mode #,
    int         # keyboard mode #,
    Window      # confine to #,
    Cursor      # cursor #,
    Time      # time #
), CO

CO extern int XGrabServer(
    Display*      # display #
), CO

CO extern int XHeightMMOfScreen(
    Screen*      # screen #
), CO

CO extern int XHeightOfScreen(
    Screen*      # screen #
), CO

CO extern int XIfEvent(
    Display*      # display #,
    XEvent*      # event return #,
    Bool (*) (
          Display*         # display #,
               XEvent*         # event #,
               XPointer         # arg #
             )      # predicate #,
    XPointer      # arg #
), CO

CO extern int XImageByteOrder(
    Display*      # display #
), CO

CO extern int XInstallColormap(
    Display*      # display #,
    Colormap      # colourmap #
), CO

CO extern KeyCode XKeysymToKeycode(
    Display*      # display #,
    KeySym      # keysym #
), CO

@d macro x kill client =
PROC(DISPLAY,XID)INT x kill client = ALIEN "XKILLCLIENT"
	"#define XKILLCLIENT(dpy,res) XKillClient(dpy,res)"

CO extern Status XLookupColor(
    Display*      # display #,
    Colormap      # colourmap #,
     Xconst char*   # colour name #,
    XColor*      # exact def return #,
    XColor*      # screen def return #
), CO

@d macro x map raised =
PROC(DISPLAY,WINDOW)INT x map raised = ALIEN "XMAPRAISED"
	"#define XMAPRAISED(dpy,w) XMapRaised(dpy,w)"

CO extern int XMapSubwindows(
    Display*      # display #,
    Window      # w #
), CO

CO extern int XMapWindow(
    Display*      # display #,
    Window      # w #
), CO

CO extern int XMaskEvent(
    Display*      # display #,
    long      # event mask #,
    XEvent*      # event return #
), CO

CO extern int XMaxCmapsOfScreen(
    Screen*      # screen #
), CO

CO extern int XMinCmapsOfScreen(
    Screen*      # screen #
), CO

CO extern int XMoveResizeWindow(
    Display*      # display #,
    Window      # w #,
    int         # x #,
    int         # y #,
    unsigned int   # width #,
    unsigned int   # height #
), CO

CO extern int XMoveWindow(
    Display*      # display #,
    Window      # w #,
    int         # x #,
    int         # y #
), CO


CO extern int XNoOp(
    Display*      # display #
), CO

CO extern Status XParseColor(
    Display*      # display #,
    Colormap      # colourmap #,
     Xconst char*   # spec #,
    XColor*      # exact def return #
), CO

CO extern int XParseGeometry(
     Xconst char*   # parsestring #,
    int*      # x return #,
    int*      # y return #,
    unsigned int*   # width return #,
    unsigned int*   # height return #
), CO

CO extern int XPeekEvent(
    Display*      # display #,
    XEvent*      # event return #
), CO

CO extern int XPeekIfEvent(
    Display*      # display #,
    XEvent*      # event return #,
    Bool (*) (
          Display*      # display #,
               XEvent*      # event #,
               XPointer      # arg #
             )      # predicate #,
    XPointer      # arg #
), CO

CO extern int XPending(
    Display*      # display #
), CO

CO extern int XPlanesOfScreen(
    Screen*      # screen #
), CO

@d macro x protocol revision =
PROC(DISPLAY)INT x protocol revision = ALIEN "XPROTOCOLREVISION"
   "#define XPROTOCOLREVISION(dpy) \"
	"   A int INT(XProtocolRevision(dpy))"

@d macro x protocol version =
PROC(DISPLAY)INT x protocol version = ALIEN "XPROTOCOLVERSION"
	"#define XPROTOCOLVERSION(dpy) \"
	"   A int INT(XProtocolVersion(dpy))"

CO extern int XPutBackEvent(
    Display*      # display #,
    XEvent*      # event #
), CO

CO extern int XPutImage(
    Display*      # display #,
    Drawable      # d #,
    GC         # gc #,
    XImage*      # image #,
    int         # src x #,
    int         # src y #,
    int         # dest x #,
    int         # dest y #,
    unsigned int   # width #,
    unsigned int   # height #     
), CO

CO extern int XQLength(
    Display*      # display #
), CO

CO extern Status XQueryBestCursor(
    Display*      # display #,
    Drawable      # d #,
    unsigned int        # width #,
    unsigned int   # height #,
    unsigned int*   # width return #,
    unsigned int*   # height return #
), CO

CO extern Status XQueryBestSize(
    Display*      # display #,
    int         # class #,
    Drawable      # which screen #,
    unsigned int   # width #,
    unsigned int   # height #,
    unsigned int*   # width return #,
    unsigned int*   # height return #
), CO

CO extern Status XQueryBestStipple(
    Display*      # display #,
    Drawable      # which screen #,
    unsigned int   # width #,
    unsigned int   # height #,
    unsigned int*   # width return #,
    unsigned int*   # height return #
), CO

CO extern Status XQueryBestTile(
    Display*      # display #,
    Drawable      # which screen #,
    unsigned int   # width #,
    unsigned int   # height #,
    unsigned int*   # width return #,
    unsigned int*   # height return #
), CO

CO extern int XQueryColor(
    Display*      # display #,
    Colormap      # colourmap #,
    XColor*      # def in out #
), CO

CO extern int XQueryColors(
    Display*      # display #,
    Colormap      # colourmap #,
    XColor*      # defs in out #,
    int         # ncolours #
), CO

CO extern Bool XQueryExtension(
    Display*      # display #,
     Xconst char*   # name #,
    int*      # major opcode return #,
    int*      # first event return #,
    int*      # first error return #
), CO

CO extern int XQueryKeymap(
    Display*      # display #,
    char [32]      # keys return #
), CO

CO extern Bool XQueryPointer(
    Display*      # display #,
    Window      # w #,
    Window*      # root return #,
    Window*      # child return #,
    int*      # root x return #,
    int*      # root y return #,
    int*      # win x return #,
    int*      # win y return #,
    unsigned int*       # mask return #
), CO

CO extern int XQueryTextExtents(
    Display*      # display #,
    XID         # font ID #,
     Xconst char*   # string #,
    int         # nchars #,
    int*      # direction return #,
    int*      # font ascent return #,
    int*      # font descent return #,
    XCharStruct*   # overall return #    
), CO

CO extern int XQueryTextExtents16(
    Display*      # display #,
    XID         # font ID #,
     Xconst XChar2b*   # string #,
    int         # nchars #,
    int*      # direction return #,
    int*      # font ascent return #,
    int*      # font descent return #,
    XCharStruct*   # overall return #
), CO

CO extern Status XQueryTree(
    Display*      # display #,
    Window      # w #,
    Window*      # root return #,
    Window*      # parent return #,
    Window**      # children return #,
    unsigned int*   # nchildren return #
), CO

@d macro x raise window =
PROC(DISPLAY,WINDOW)INT x raise window = ALIEN "XRAISEWINDOW"
   "#define XRAISEWINDOW(dpy,win) \"
   "   XRaiseWindow((void *)dpy,win)"

@d macro x lower window =
PROC(DISPLAY,WINDOW)INT x lower window = ALIEN "XLOWERWINDOW"
   "#define XLOWERWINDOW(dpy,win) \"
   "   XLowerWindow((void *)dpy,win)"

CO extern int XReadBitmapFile(
    Display*      # display #,
    Drawable       # d #,
     Xconst char*   # filename #,
    unsigned int*   # width return #,
    unsigned int*   # height return #,
    Pixmap*      # bitmap return #,
    int*      # x hot return #,
    int*      # y hot return #
), CO

CO extern int XReadBitmapFileData(
     Xconst char*   # filename #,
    unsigned int*   # width return #,
    unsigned int*   # height return #,
    unsigned char**   # data return #,
    int*      # x hot return #,
    int*      # y hot return #
), CO

CO extern int XRebindKeysym(
    Display*      # display #,
    KeySym      # keysym #,
    KeySym*      # list #,
    int         # mod count #,
     Xconst unsigned char*   # string #,
    int         # bytes string #
), CO

CO extern int XRecolourCursor(
    Display*      # display #,
    Cursor      # cursor #,
    XColor*      # foreground colour #,
    XColor*      # background colour #
), CO

@d macro x refresh keyboard mapping =
macro mode xevent;
PROC(REF XMAPPINGEVENT)INT x refresh keyboard mapping =
   ALIEN "XREFRESHKEYBOARDMAPPING"
	"#define XREFRESHKEYBOARDMAPPING(xme) XRefreshKeyboardMapping(xme)"

CO extern int XRemoveFromSaveSet(
    Display*      # display #,
    Window      # w #
), CO

CO extern int XRemoveHost(
    Display*      # display #,
    XHostAddress*   # host #
), CO

CO extern int XRemoveHosts(
    Display*      # display #,
    XHostAddress*   # hosts #,
    int         # num hosts #
), CO

CO extern int XReparentWindow(
    Display*      # display #,
    Window      # w #,
    Window      # parent #,
    int         # x #,
    int         # y #
), CO

CO extern int XResetScreenSaver(
    Display*      # display #
), CO

CO extern int XResizeWindow(
    Display*      # display #,
    Window      # w #,
    unsigned int   # width #,
    unsigned int   # height #
), CO

CO extern int XRestackWindows(
    Display*      # display #,
    Window*      # windows #,
    int         # nwindows #
), CO

CO extern int XRotateBuffers(
    Display*      # display #,
    int         # rotate #
), CO

CO extern int XRotateWindowProperties(
    Display*      # display #,
    Window      # w #,
    Atom*      # properties #,
    int         # num prop #,
    int         # npositions #
), CO

@d macro x screen count =
PROC(DISPLAY)INT x screen count = ALIEN "XSCREENCOUNT"
	"#define XSCREENCOUNT(dpy) XScreenCount(dpy)"

@d macro x select input =
PROC(DISPLAY,WINDOW,BITS)INT x select input = ALIEN "XSELECTINPUT"
	"#define XSELECTINPUT(dpy,w,event mask) \"
	"        XSelectInput(dpy,w,event mask)"

CO extern Status XSendEvent(
    Display*      # display #,
    Window      # w #,
    Bool      # propagate #,
    long      # event mask #,
    XEvent*      # event send #
), CO

CO extern int XSetAccessControl(
    Display*      # display #,
    int         # mode #
), CO

CO extern int XSetArcMode(
    Display*      # display #,
    GC         # gc #,
    int         # arc mode #
), CO

@d macro x set background =
PROC(DISPLAY,GC,BITS)INT x set background = ALIEN "XSETBACKGROUND"
   "#define XSETBACKGROUND(dpy,gc,background) \"
   "        XSetBackground(dpy,gc,background)"

CO extern int XSetClipMask(
    Display*      # display #,
    GC         # gc #,
    Pixmap      # pixmap #
), CO

CO extern int XSetClipOrigin(
    Display*      # display #,
    GC         # gc #,
    int         # clip x origin #,
    int         # clip y origin #
), CO

CO extern int XSetClipRectangles(
    Display*      # display #,
    GC         # gc #,
    int         # clip x origin #,
    int         # clip y origin #,
    XRectangle*      # rectangles #,
    int         # n #,
    int         # ordering #
), CO

@d macro x set close down mode =
PROC(DISPLAY,INT)INT x set close down mode = ALIEN "XSETCLOSEDOWNMODE"
   "#define XSETCLOSEDOWNMODE(dpy,mode) XSetCloseDownMode(dpy,mode)"

CO extern int XSetCommand(
    Display*      # display #,
    Window      # w #,
    char**      # argv #,
    int         # argc #
), CO

CO extern int XSetDashes(
    Display*      # display #,
    GC         # gc #,
    int         # dash offset #,
     Xconst char*   # dash list #,
    int         # n #
), CO

CO extern int XSetFillRule(
    Display*      # display #,
    GC         # gc #,
    int         # fill rule #
), CO

CO extern int XSetFillStyle(
    Display*      # display #,
    GC         # gc #,
    int         # fill style #
), CO

CO extern int XSetFont(
    Display*      # display #,
    GC         # gc #,
    Font      # font #
), CO

CO extern int XSetFontPath(
    Display*      # display #,
    char**      # directories #,
    int         # ndirs #        
), CO

@d macro x set foreground =
PROC(DISPLAY,GC,BITS)INT x set foreground = ALIEN "XSETFOREGROUND"
 "#define XSETFOREGROUND(dpy,gc,foreground) \"
 "        XSetForeground(dpy,gc,foreground)"

CO extern int XSetFunction(
    Display*      # display #,
    GC         # gc #,
    int         # function #
), CO

CO extern int XSetGraphicsExposures(
    Display*      # display #,
    GC         # gc #,
    Bool      # graphics exposures #
), CO

CO extern int XSetIconName(
    Display*      # display #,
    Window      # w #,
     Xconst char*   # icon name #
), CO

CO extern int XSetInputFocus(
    Display*      # display #,
    Window      # focus #,
    int         # revert to #,
    Time      # time #
), CO

CO extern int XSetLineAttributes(
    Display*      # display #,
    GC         # gc #,
    unsigned int   # line width #,
    int         # line style #,
    int         # cap style #,
    int         # join style #
), CO

CO extern int XSetModifierMapping(
    Display*      # display #,
    XModifierKeymap*   # modmap #
), CO

CO extern int XSetPlaneMask(
    Display*      # display #,
    GC         # gc #,
    unsigned long   # plane mask #
), CO

CO extern int XSetPointerMapping(
    Display*      # display #,
     Xconst unsigned char*   # map #,
    int         # nmap #
), CO

CO extern int XSetScreenSaver(
    Display*      # display #,
    int         # timeout #,
    int         # interval #,
    int         # prefer blanking #,
    int         # allow exposures #
), CO

CO extern int XSetSelectionOwner(
    Display*      # display #,
    Atom           # selection #,
    Window      # owner #,
    Time      # time #
), CO

CO extern int XSetState(
    Display*      # display #,
    GC         # gc #,
    unsigned long    # foreground #,
    unsigned long   # background #,
    int         # function #,
    unsigned long   # plane mask #
), CO

CO extern int XSetStipple(
    Display*      # display #,
    GC         # gc #,
    Pixmap      # stipple #
), CO

CO extern int XSetSubwindowMode(
    Display*      # display #,
    GC         # gc #,
    int         # subwindow mode #
), CO

CO extern int XSetTSOrigin(
    Display*      # display #,
    GC         # gc #,
    int         # ts x origin #,
    int         # ts y origin #
), CO

CO extern int XSetTile(
    Display*      # display #,
    GC         # gc #,
    Pixmap      # tile #
), CO

CO extern int XSetWindowBackground(
    Display*      # display #,
    Window      # w #,
    unsigned long   # background pixel #
), CO

CO extern int XSetWindowBackgroundPixmap(
    Display*      # display #,
    Window      # w #,
    Pixmap      # background pixmap #
), CO

CO extern int XSetWindowBorder(
    Display*      # display #,
    Window      # w #,
    unsigned long   # border pixel #
), CO

CO extern int XSetWindowBorderPixmap(
    Display*      # display #,
    Window      # w #,
    Pixmap      # border pixmap #
), CO

CO extern int XSetWindowBorderWidth(
    Display*      # display #,
    Window      # w #,
    unsigned int   # width #
), CO

CO extern int XSetWindowColormap(
    Display*      # display #,
    Window      # w #,
    Colormap      # colourmap #
), CO

CO extern int XStoreBuffer(
    Display*      # display #,
     Xconst char*   # bytes #,
    int         # nbytes #,
    int         # buffer #
), CO

CO extern int XStoreBytes(
    Display*      # display #,
     Xconst char*   # bytes #,
    int         # nbytes #
), CO

CO extern int XStoreColor(
    Display*      # display #,
    Colormap      # colourmap #,
    XColor*      # colour #
), CO

CO extern int XStoreColors(
    Display*      # display #,
    Colormap      # colourmap #,
    XColor*      # colour #,
    int         # ncolours #
), CO

CO extern int XStoreName(
    Display*      # display #,
    Window      # w #,
     Xconst char*   # window name #
), CO

CO extern int XStoreNamedColor(
    Display*      # display #,
    Colormap      # colourmap #,
     Xconst char*   # colour #,
    unsigned long   # pixel #,
    int         # flags #
), CO

@d macro x sync =
PROC(DISPLAY,BOOL)INT x sync = ALIEN "XSYNC"
	"#define XSYNC(dpy,discard) A int INT(XSync(dpy,discard))"

CO extern int XTextExtents(
    XFontStruct*   # font struct #,
     Xconst char*   # string #,
    int         # nchars #,
    int*      # direction return #,
    int*      # font ascent return #,
    int*      # font descent return #,
    XCharStruct*   # overall return #
), CO

CO extern int XTextExtents16(
    XFontStruct*   # font struct #,
     Xconst XChar2b*   # string #,
    int         # nchars #,
    int*      # direction return #,
    int*      # font ascent return #,
    int*      # font descent return #,
    XCharStruct*   # overall return #
), CO

CO extern int XTextWidth(
    XFontStruct*   # font struct #,
     Xconst char*   # string #,
    int         # count #
), CO

CO extern int XTextWidth16(
    XFontStruct*   # font struct #,
     Xconst XChar2b*   # string #,
    int         # count #
), CO

CO extern Bool XTranslateCoordinates(
    Display*      # display #,
    Window      # src w #,
    Window      # dest w #,
    int         # src x #,
    int         # src y #,
    int*      # dest x return #,
    int*      # dest y return #,
    Window*      # child return #
), CO

CO extern int XUndefineCursor(
    Display*      # display #,
    Window      # w #
), CO

CO extern int XUngrabButton(
    Display*      # display #,
    unsigned int   # button #,
    unsigned int   # modifiers #,
    Window      # grab window #
), CO

CO extern int XUngrabKey(
    Display*      # display #,
    int         # keycode #,
    unsigned int   # modifiers #,
    Window      # grab window #
), CO

CO extern int XUngrabKeyboard(
    Display*      # display #,
    Time      # time #
), CO

CO extern int XUngrabPointer(
    Display*      # display #,
    Time      # time #
), CO

CO extern int XUngrabServer(
    Display*      # display #
), CO

CO extern int XUninstallColormap(
    Display*      # display #,
    Colormap      # colourmap #
), CO

CO extern int XUnloadFont(
    Display*      # display #,
    Font      # font #
), CO

CO extern int XUnmapSubwindows(
    Display*      # display #,
    Window      # w #
), CO

CO extern int XUnmapWindow(
    Display*      # display #,
    Window      # w #
), CO

@d macro x vendor release =
PROC(DISPLAY)INT x vendor release = ALIEN "XVENDORRELEASE"
	"#define XVENDORRELEASE(dpy) A int INT(XVendorRelease(dpy))"

CO extern int XWarpPointer(
    Display*      # display #,
    Window      # src w #,
    Window      # dest w #,
    int         # src x #,
    int         # src y #,
    unsigned int   # src width #,
    unsigned int   # src height #,
    int         # dest x #,
    int         # dest y #        
), CO

CO extern int XWidthMMOfScreen(
    Screen*      # screen #
), CO

CO extern int XWidthOfScreen(
    Screen*      # screen #
), CO

CO extern int XWindowEvent(
    Display*      # display #,
    Window      # w #,
    long      # event mask #,
    XEvent*      # event return #
), CO

CO extern int XWriteBitmapFile(
    Display*      # display #,
     Xconst char*   # filename #,
    Pixmap      # bitmap #,
    unsigned int   # width #,
    unsigned int   # height #,
    int         # x hot #,
    int         # y hot #           
), CO

CO extern Bool XSupportsLocale(
    void
), CO

CO extern char *XSetLocaleModifiers(
     Xconst char*   # modifier list #
), CO

CO extern XOM XOpenOM(
    Display*         # display #,
    struct  XrmHashBucketRec*   # rdb #,
     Xconst char*      # res name #,
     Xconst char*      # res class #
), CO

CO extern Status XCloseOM(
    XOM         # om #
), CO

CO extern char *XSetOMValues(
    XOM         # om #,
    ...
), CO

CO extern char *XGetOMValues(
    XOM         # om #,
    ...
), CO

CO extern Display *XDisplayOfOM(
    XOM         # om #
), CO

CO extern char *XLocaleOfOM(
    XOM         # om #
), CO

CO extern XOC XCreateOC(
    XOM         # om #,
    ...
), CO

CO extern void XDestroyOC(
    XOC         # oc #
), CO

CO extern XOM XOMOfOC(
    XOC         # oc #
), CO

CO extern char *XSetOCValues(
    XOC         # oc #,
    ...
), CO

CO extern char *XGetOCValues(
    XOC         # oc #,
    ...
), CO

CO extern XFontSet XCreateFontSet(
    Display*      # display #,
     Xconst char*   # base font name list #,
    char***      # missing charset list #,
    int*      # missing charset count #,
    char**      # def string #
), CO

CO extern void XFreeFontSet(
    Display*      # display #,
    XFontSet      # font set #
), CO

CO extern int XFontsOfFontSet(
    XFontSet      # font set #,
    XFontStruct***   # font struct list #,
    char***      # font name list #
), CO

CO extern char *XBaseFontNameListOfFontSet(
    XFontSet      # font set #
), CO

CO extern char *XLocaleOfFontSet(
    XFontSet      # font set #
), CO

CO extern Bool XContextDependentDrawing(
    XFontSet      # font set #
), CO

CO extern Bool XDirectionalDependentDrawing(
    XFontSet      # font set #
), CO

CO extern Bool XContextualDrawing(
    XFontSet      # font set #
), CO

CO extern XFontSetExtents *XExtentsOfFontSet(
    XFontSet      # font set #
), CO

CO extern int XmbTextEscapement(
    XFontSet      # font set #,
     Xconst char*   # text #,
    int         # bytes text #
), CO

CO extern int XwcTextEscapement(
    XFontSet      # font set #,
     Xconst wchar_t*   # text #,
    int         # num wchars #
), CO

CO extern int XmbTextExtents(
    XFontSet      # font set #,
     Xconst char*   # text #,
    int         # bytes text #,
    XRectangle*      # overall ink return #,
    XRectangle*      # overall logical return #
), CO

CO extern int XwcTextExtents(
    XFontSet      # font set #,
     Xconst wchar_t*   # text #,
    int         # num wchars #,
    XRectangle*      # overall ink return #,
    XRectangle*      # overall logical return #
), CO

CO extern Status XmbTextPerCharExtents(
    XFontSet      # font set #,
     Xconst char*   # text #,
    int         # bytes text #,
    XRectangle*      # ink extents buffer #,
    XRectangle*      # logical extents buffer #,
    int         # buffer size #,
    int*      # num chars #,
    XRectangle*      # overall ink return #,
    XRectangle*      # overall logical return #
), CO

CO extern Status XwcTextPerCharExtents(
    XFontSet      # font set #,
     Xconst wchar_t*   # text #,
    int         # num wchars #,
    XRectangle*      # ink extents buffer #,
    XRectangle*      # logical extents buffer #,
    int         # buffer size #,
    int*      # num chars #,
    XRectangle*      # overall ink return #,
    XRectangle*      # overall logical return #
), CO

CO extern void XmbDrawText(
    Display*      # display #,
    Drawable      # d #,
    GC         # gc #,
    int         # x #,
    int         # y #,
    XmbTextItem*   # text items #,
    int         # nitems #
), CO

CO extern void XwcDrawText(
    Display*      # display #,
    Drawable      # d #,
    GC         # gc #,
    int         # x #,
    int         # y #,
    XwcTextItem*   # text items #,
    int         # nitems #
), CO

CO extern void XmbDrawString(
    Display*      # display #,
    Drawable      # d #,
    XFontSet      # font set #,
    GC         # gc #,
    int         # x #,
    int         # y #,
    Xconst char*   # text #,
    int         # bytes text #
), CO

CO extern void XwcDrawString(
    Display*      # display #,
    Drawable      # d #,
    XFontSet      # font set #,
    GC         # gc #,
    int         # x #,
    int         # y #,
    Xconst wchar_t*   # text #,
    int         # num wchars #
), CO

CO extern void XmbDrawImageString(
    Display*      # display #,
    Drawable      # d #,
    XFontSet      # font set #,
    GC         # gc #,
    int         # x #,
    int         # y #,
    Xconst char*   # text #,
    int         # bytes text #
), CO

CO extern void XwcDrawImageString(
    Display*      # display #,
    Drawable      # d #,
    XFontSet      # font set #,
    GC         # gc #,
    int         # x #,
    int         # y #,
    Xconst wchar_t*   # text #,
    int         # num wchars #
), CO

CO extern XIM XOpenIM(
    Display*         # dpy #,
    struct  XrmHashBucketRec*   # rdb #,
    char*         # res name #,
    char*         # res class #
), CO

CO extern Status XCloseIM(
    XIM # im #
), CO

CO extern char *XGetIMValues(
    XIM # im #, ...
), CO

CO extern char *XSetIMValues(
    XIM # im #, ...
), CO

CO extern Display *XDisplayOfIM(
    XIM # im #
), CO

CO extern char *XLocaleOfIM(
    XIM # im#
), CO

CO extern XIC XCreateIC(
    XIM # im #, ...
), CO

CO extern void XDestroyIC(
    XIC # ic #
), CO

CO extern void XSetICFocus(
    XIC # ic #
), CO

CO extern void XUnsetICFocus(
    XIC # ic #
), CO

CO extern wchar_t *XwcResetIC(
    XIC # ic #
), CO

CO extern char *XmbResetIC(
    XIC # ic #
), CO

CO extern char *XSetICValues(
    XIC # ic #, ...
), CO

CO extern char *XGetICValues(
    XIC # ic #, ...
), CO

CO extern XIM XIMOfIC(
    XIC # ic #
), CO

CO extern Bool XFilterEvent(
    XEvent*   # event #,
    Window   # window #
), CO

CO extern int XmbLookupString(
    XIC         # ic #,
    XKeyPressedEvent*   # event #,
    char*      # buffer return #,
    int         # bytes buffer #,
    KeySym*      # keysym return #,
    Status*      # status return #
), CO

CO extern int XwcLookupString(
    XIC         # ic #,
    XKeyPressedEvent*   # event #,
    wchar_t*      # buffer return #,
    int         # wchars buffer #,
    KeySym*      # keysym return #,
    Status*      # status return #
), CO

CO extern XVaNestedList XVaCreateNestedList(
    int unused, ...
), CO

# internal connections for IMs #

CO extern Bool XRegisterIMInstantiateCallback(
    Display*         # dpy #,
    struct  XrmHashBucketRec*   # rdb #,
    char*         # res name #,
    char*         # res class #,
    XIDProc         # callback #,
    XPointer         # client data #
), CO

CO extern Bool XUnregisterIMInstantiateCallback(
    Display*         # dpy #,
    struct  XrmHashBucketRec*   # rdb #,
    char*         # res name #,
    char*         # res class #,
    XIDProc         # callback #,
    XPointer         # client data #
), CO

CO
typedef void (*XConnectionWatchProc)(
    Display*         # dpy #,
    XPointer         # client data #,
    int            # fd #,
    Bool         # opening #,    # open or close flag #
    XPointer*         # watch data # # open sets, close uses #
), CO
    

CO extern Status XInternalConnectionNumbers(
    Display*,   # dpy #
    int**,      # fd return #
    int*         # count return #
), CO

CO extern void XProcessInternalConnection(
    Display*,         # dpy #
    int               # fd #
), CO

CO extern Status XAddConnectionWatch(
    Display*,               # dpy #
    XConnectionWatchProc,   # callback #
    XPointer               # client data #
), CO

CO extern void XRemoveConnectionWatch(
    Display*,               # dpy #
    XConnectionWatchProc,   # callback #
    XPointer               # client data #
); CO
