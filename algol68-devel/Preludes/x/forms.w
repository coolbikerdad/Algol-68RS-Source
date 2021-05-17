@2Introduction.
The Xforms library was developed over several years by T.C.Zhao and
Mark Overmaars to provide simplified access to the power of X without
losing the ability to use the original X routines in the sample
implementation.

This file contains the header file \.{forms.h} translated into Algol 68 and
expressed in the literate programming language \.{Web68}. It is intended to be
included in a \.{Web 68} file. Note that it presumes that there is a module in
the including Web 68 file which starts with "Include".

None of the declaration macros include the following semicolon. Therefore, in
the including file, be sure to follow each macro call with a semicolon.

$Log: forms.w,v $
Revision 1.9  2005/02/18 18:29:11  sian
More tidying up

Revision 1.8  2005/01/22 16:19:39  sian
More tidying up routines: CSTR => []CHAR

Revision 1.7  2004/12/28 14:25:26  sian
Added macro definitions for synonyms

Revision 1.6  2004/12/03 16:40:34  sian
1. Added operator macro calls.
2. Included the definitions in X.h.
3. Tidied the layout of comments.

Revision 1.5  2004/11/30 22:32:25  sian
Inserted x.w instead of including it.

@m cvs forms = "$Id: forms.w,v 1.9 2005/02/18 18:29:11 sian Exp $"

@ Some of the routines and many of the modes defined in this header
file are required by the \.{Xforms} library.

@ixlib.w@>

@ The modules used to place the various declarations are defined here.

@<Include...@>=
@<Forms modes declared locally@>

@ All the plain values are provided as macro definitions without
parameters. Their identifiers do not start with the word \.{macro}.
A few macros, taken from \.{forms.h} are provided in Algol 68 syntax
rather than C syntax.

@m fl version = 1
@m fl revision = 0
@m fl fixlevel = 0
@m fl include version = (fl version * 1000 + fl revision)

@ We shall need this useful mode.

@<Forms modes...@>=
MODE
   CBPTR = REF VECTOR[]BITS;  #for accessing C memory#

@ All these mode definitions are compiler independent.

@<Forms modes...@>=
MODE
   FLCOLOR = INT,
   FLCOORD = INT,
   FLWINDOW = WINDOW;

@ Values for the mode !XRMOPTIONKIND!.

@m xrmoptionnoarg = 0      # Value is specified in OptionDescRec.value        #
@m xrmoptionisarg = 1      # Value is the option string itself                #
@m xrmoptionstickyarg = 2  # Value is characters immediately following option #
@m xrmoptionseparg = 3     # Value is next argument in argv                   #
@m xrmoptionresarg = 4     # Resource and value in next argument in argv      #
@m xrmoptionskiparg = 5    # Ignore this option and the next argument in argv #
@m xrmoptionskipline = 6   # Ignore this option and the rest of argv          #
@m xrmoptionskipnargs = 7

@d macro mode xrmoptionkind =
MODE XRMOPTIONKIND = INT

@d macro mode xrmoptiondescrec =
macro mode xrmoptionkind;
MODE XRMOPTIONDESCREC =
   STRUCT(CSTR option,            # Option abbreviation in argv        #
               specifier,         # Resource specifier                 #
          XRMOPTIONKIND argkind,  # Which style of option it is        #
          XPOINTER value)         # Value to provide if XrmoptionNoArg #

@d macro mode xvisualinfo =
macro mode visual;
MODE XVISUALINFO =
   STRUCT(REF VISUAL visual,
          VISUALID visualid,
          INT screen, depth, class,
          BITS red_mask, green_mask, blue_mask,
          INT colormap_size, bits_per_rgb)

@ Here we include the cursors as defined in \.{cursorfont.h}.

@icursorfont.w@>

@2!ALIEN! routines.
XForms Basic modes and plain values, not X related.  Declaration of
the basic struct which holds an object. The i-structs are compiler
dependent.@^compiler dependencies@>

@<Forms modes...@>=
MODE
   FLFORM,

   FLOBJECT = STRUCT(
      REF FLFORM form,     # the form this object belongs to     #
      CBPTR u vdata,       # anything the user likes             #
      CSTR u cdata,        # anything the user likes             #
      INT u ldata,         # anything the user likes             #

          objclass,        # class of object, button, slider etc #
          type,            # type within the class               #
          boxtype,         # what kind of box type               #
      FLCOORD x, y, w, h,  # obj. location and size              #
              bw,          # border width                        #
      FLCOLOR color1, color2,# colors of object                  #
      CSTR label,          # object label                        #
      FLCOLOR lcolor,      # label color                         #
      BITS align,          # label alignment                     #
      INT  lsize,          # label size                          #
           lstyle,         # label style                         #
      REF INT shortcut,
      CPTR handle,         #PROC(REF FLOBJECT,FLCOORD,FLCOORD,INT,CPTR)INT#
           object callback,#PROC(REF FLOBJECT,INT)VOID           #
      INT argument,
      CBPTR spec,          # instantiation                       #
      CPTR  prehandle,     #PROC(REF FLOBJECT,INT,FLCOORD,FLCOORD,INT,CPTR)INT#
            posthandle,    # ditto #
            # re-configure preference #
      BITS resize,         # what to do if WM resizes the FORM     #
           nwgravity,      # how to re-position top-left corner    #
           segravity,      # how to re-position lower-right corner #

      REF FLOBJECT prev,   # prev. obj in form                     #
                   next,   # next. obj in form                     #
                   parent,
                   child,
                   nc,
      INT is child,

      CPTR flpixmap,       # pixmap double buffering stateinfo   #
      INT use pixmap,      # true to use pixmap double buffering #

                           # some interaction flags              #
      INT double buffer,   # only used by mesa/gl canvas         #
          pushed,
          focus,
          belowmouse,
          active,          # if accept event          #
          input,
          wantkey,
          radio,
          automatic,
          redraw,
          visible,
          clip,
          click timeout,
      CPTR c vdata,        # for class use            #
      CSTR c cdata,        # for class use            #
      INT c ldata,         # for class use            #
      BITS spec size,      # for internal use         #
           aux color1, aux color2,# aux colors        #
           dbl background, # double buffer background #
      INT how return,
      CSTR tooltip,
      INT tipid,
          group id,
      STRUCT 5 INT reserved), #FLOBJECT#

   FLFORM = STRUCT(
      CBPTR fdui,          # for fdesign              #
          uvdata,          # for application          #
      CSTR u cdata,        # for application          #
      INT  u ldata,        # for application          #

      CSTR label,          # window title             #
      WINDOW window,       # X resource ID for window #
      FLCOORD x, y, w, h,  # current geometry info    #
              hotx, hoty,  # hot-spot of the form     #

      REF FLOBJECT first, last, focusobj,

      CPTR#PROC(REF FLOBJECT,CPTR)VOID# form callback,
         #PROC(REF FLFORM,CPTR)VOID# activate callback,
         #PROC(REF FLFORM,CPTR)VOID# deactivate callback,
      CPTR form cb data, activate data, deactivate data,

      CPTR#PROC(REF FLFORM,CPTR)INT#
         key callback,
         push callback,
         crossing callback,
         motion callback,
         all callback,

      BITS compress mask,
           evmask,

      # WMDELETEWINDOW message handler #
      CPTR#PROC(REF FLFORM,CPTR)INT# close callback,
           close data,
           flpixmap,      # back buffer             #

      BITS icon pixmap,
           icon mask,

      # interaction and other flags #
      INT vmode,            # current X visual class  #
          deactivated,      # true if sensitive       #
          use pixmap,       # true if dbl buffering   #
          frozen,           # true if sync change     #
          visible,          # true if mapped          #
          wm border,        # window manager info     #
      BITS prop,            # other attributes        #
           has auto,
           top,
           sort of modal,   # internal use.           #
      REF FLFORM parent,
                 child,
      REF FLOBJECT parent obj,
      INT attached,          # not independent anymore #
      CPTR pre attach,       #void (*pre attach)(struct forms  *),#
           attach data,
      INT no tooltip,
      STRUCT 10 INT reserved # future use              #
); #FLFORM#

@ The following modes are brought in by the relevant macros.

@d macro mode flpixmap =
macro mode visual;
MODE FLPIXMAP =
	STRUCT(PIXMAP pixmap,
          WINDOW win,
          REF VISUAL visual,
          FLCOORD x, y,
                  w, h,
         INT depth,
         BITS dbl background, pixel)

@macro mode fliop =
MODE FLIOPT =
	STRUCT(SHORT REAL rgamma, ggamma, bgamma,
          INT debug, sync,
              depth, vclass, double buffer,
              ul prop width, ul thickness,   # underline stuff        #
              button font size,
              slider font size,
              input font size,
              browser font size,
              menu font size,
              choice font size,
              label font size,               # all other labels fonts #
              pup font size, pup font style, # font for pop-up menus  #
              private colormap,
              shared colormap,
              standard colormap,
              scrollbar type,
              backing store,
              coord unit,
              border width,
              safe,
          CSTR rgbfile,                      # where RGB file is      #
          STRUCT 24 CHAR vname)

@ All !FDXXX! structures emitted by fdesign contain at least the
  following.

@d macro mode fdany =
MODE FDANY =
	STRUCT(REF FLFORM form,
          REF VECTOR[]BITS vdata,
          REF[]CHAR cdata,
          BITS ldata)

@ FL graphics state information. Some are redundant.

@m fl max col = 1024

@d macro mode flstate =
macro mode xvisualinfo;
macro mode xfontstruct;
MODE FLSTATE =
	STRUCT(REF XVISUALINFO xvinfo,
          REF XFONTSTRUCT cur fnt,         # current font in default GC       #
          COLORMAP colormap,               # colormap valid for xvinfo        #
          WINDOW trailblazer,              # a valid window for xvinfo        #
          INT vclass, depth,               # visual class and color depth     #
              rgb bits,                    # primary color resolution         #
              dithered,                    # true if dithered color           #
              pcm,                         # true if colormap is not shared   #
          STRUCT 16 GC gc,                 # working GC                       #
                   textgc,                 # GC used exclusively for text     #
          GC dimmedgc,                     # A GC having a checkboard stipple #
          STRUCT fl max col BITS lut,      # secondary lookup table           #
          BITS rshift, rmask, FLCOLOR rbits,
          BITS gshift, gmask, FLCOLOR gbits,
          BITS bshift, bmask, FLCOLOR bbits)

@d macro mode flvnpair =
MODE FLVNPAIR = STRUCT(INT val, CSTR name)

@d macro mode flpoint =
macro mode xpoint;
MODE FLPOINT = XPOINT

@d macro mode flrect =
macro mode xrectangle;
MODE FLRECT = XRECTANGLE

@
@d macro mode flwmstuff =
MODE FLWMSTUFF =
	STRUCT(INT rpx, rpy,      # reparenting offset for full border #
              trpx, trpy,    # reparenting offset for transient   #
              bw,            # additional border                  #
              rep method,    # 1 for shifting, 2 for normal       #
          BITS pos request)  # USPOSITION or PPOSITION            #

@d macro mode flimagetext =
MODE FLIMAGETEXT =
	STRUCT(CSTR str,           # the string itself             #
          INT len,            # string length                 #
              x, y,           # starting location of text (wrt image) #
          FLCOLOR color,    # color of the text            #
              bcolor,        # background color of the text #
          INT  nobk,          # no background                 #
              size,           # font size                     #
          INT style,          # font style                    #
          INT angle,          # in 1/10th of a degrees        #
          BITS align,         # alignment wrt to (x,y)        #
          STRUCT 6 INT reserved)

@d macro mode flimagemarker =
MODE FLIMAGEMARKER =
	STRUCT(CSTR name,           # marker name                  #
          INT w, h,            # size                         #
              x, y,            # location                     #
          FLCOLOR color,     # color of the marker          #
               bcolor,        # aux. color of the marker     #
          INT angle,           # in 1/10th of a degree        #
              fill,
              thickness,       # line thickness               #
          INT style,           # line style                   #
          DISPLAY display,     # the following is filled by the library #
          GC gc,
          FLWINDOW win,
          CSTR psdraw,
          STRUCT 6 INT reserved)

@d macro mode flrgb2pixel =
MODE FLRGB2PIXEL =
	STRUCT(BITS rshift, rmask, 
		    FLCOLOR rbits,gshift, gmask, gbits, bshift, bmask, bbits,
      	 INT bits per rgb,
              colormap size,
      	 STRUCT 2 INT reserved)

@d macro mode flimagesetup =
MODE FLIMAGESETUP =
	STRUCT(CPTR app data,
             visual cue,       #int (*visual cue)(FLIMAGE *, const char *msg)#
             error message,    #void (*error message)(FLIMAGE *, const char *msg)#
             display,          #int (*display)(FLIMAGE *, unsigned long)     #
          CSTR rgbfile,
          INT  do not clear,
              max frames,
              delay,
              no auto extension,
              report frequency,
              double buffer,    # internal use #
          WINDOW  trailblazer,
          INT   header info,
          STRUCT 8 INT reserved)

@d macro mode flimage =
macro mode flimagetext;
macro mode flimagemarker;
macro mode flimagesetup;
macro mode flrgb2pixel;
MODE FLIMAGE =
	STRUCT(INT type,                   # image type and storage        #
              w, h,                   # image size                    #
          CPTR app data,              # for application at setup time #
               u vdata,               # for application               #
          BITS u ldata,               # for application               #
          CCHARPTRPTR red,green,blue,alpha,
	       STRUCT 4 CCHARPTRPTR rgba,  # alias                         #
          REF REF CARD16 ci, grey,
          REF REF BITS packed,
          REF REF CARD16
              red16,                   # not currently supported #
              green16,                 # not currently supported #
              blue16,                  # not currently supported #
              alpha16,                 # not currently supported #
          REF REF CARD8 ci8,           # not currently supported #
          REF INT
              red lut,                 # red lookup tables                #
              green lut,               # green lookup tables              #
              blue lut,                # blue lookup tables               #
              alpha lut,               # alpha lookup tables              #
          STRUCT 4 REF INT lut,        # alias                            #
          INT map len,                 # lut length                       #
              colors,                 # actual colors used in displaying #
              grey maxval,             # indicate the range of gray16     #
              ci maxval,               # max value of ci. unused. use map len #
              rgb maxval,              # max value for rgb16 image        #
              level, wwidth,
          REF CARD16 wlut,             # lut for window levelling         #
          INT wlut len,
              app background,          # transparent color: in RGB        #
          CSTR comments,
          INT comments len,
              available type,
          REF FLIMAGE next,
          INT sx, sy,                 # display subimage origin          #
              sw, sh,                 # display subimage width           #
              wx, wy,                 # display location relative to win #
              modified,
          CPTR display,               #int (*display)(struct flimage  *, FLWINDOW),#
          INT double buffer,
              sxd, syd, swd, shd, wxd, wyd,
          CSTR fmt name,              # format name (ppm,jpg etc)     #
          STRUCT 8 INT bi reserved,
          REF FLIMAGETEXT text,       # annotation stuff              #
          INT ntext, max text,
              dont display text,
          CPTR display text,          #void (*display text)(struct flimage *)#
               free text,             #void (*free text)(struct flimage *)   #
          REF FLIMAGEMARKER marker,
          INT nmarkers, max markers,
              dont display marker,
          CPTR display markers,       #void (*display markers)(struct flimage *)#
               free markers,          #void (*free markers)(struct flimage *)   #
          STRUCT 8 INT an reserved,
                              # physicalValue = poffset + pixelValue * pscale #
      	 REAL pmin, pmax,            # physical data range      #
               poffset,
            	pscale,                # pixel grid distance     #
          REAL xdist offset,
               xdist scale,
               ydist offset,
               ydist scale,
          STRUCT 8 INT px reserved,
          CSTR infile, outfile,
          INT  foffset, original type,
                   # hooks for application to have a chance to set #
						 # some options. If pre write returns -1, the #
						 # output will be cancelled #
          CPTR pre write,             #int (*pre write)(struct flimage  *)#
               post write,            #int (*post write)(struct flimage  *)#
          STRUCT 16 INT f reserved,
                                      # image processing stuff#
          INT  subx, suby,            # subimage origin       #
               subw, subh,            # subimage size         #
               sub shape,             # shape of the subimage #
          BITS fill color,            # fill color            #
          INT force convert,
          STRUCT 3 REF INT llut,      # linear lut            #
          INT llut len,
          STRUCT 4 REF BITS hist,
          STRUCT 16 INT ip reserved,
          INT total, completed,       # application handlers #
          CPTR visual cue,            #int (*visual cue) (struct flimage *,  const char *)#
               error message,         #void (*error message) (struct flimage *, const char *)#
          INT error code,             # not currently used   #
              display type,           # just before handing it to X          #
          REF STRUCT 16000000 CARD16 pixels,
          CPTR image spec,            # additional image info                #
               xdisplay,              # the X connection                     #
          INT  tran rgb,              # RGB color that should be transparent #
               tran index,            # index that should be transparent     #
               matr, matc,
               more,                  # multi-frame images #
               current frame,
               total frames,
          CPTR next frame,            #int (*next frame)(struct flimage  *)  #
               prev frame,            #int (*prev frame)(struct flimage  *)  #
               random frame,          #int (*random frame)(struct flimage  *, int)#
               rewind frame,          #int (*rewind frame)(struct flimage  *)#
               cleanup,               #void (*cleanup)(struct flimage  *)    #
          INT stop looping,
          STRUCT 16 INT mi reserved,
          CPTR fpin,                  # the following are for internal use   #
               fpout,
               image io,
               io spec,               # io operation helper                  #
          INT  spec size,
               depth,                 # the depth we actually use            #
               vclass,
          CPTR visual,
          BITS xcolormap,
          FLRGB2PIXEL rgb2p,
          CPTR ximage,
          FLWINDOW win,
          GC gc,
          INT sdepth,                 # depth the server says                #
          GC textgc,
             markergc,
          CPTR extra io info,
          BITS pixmap,
          INT  pixmap w, pixmap h, pixmap depth,
               ispixmap,
          FLIMAGESETUP setup,
          CSTR info,
          CPTR src,                   # source other than file      #
               dest,                  # destination other than file #
          STRUCT 14 INT internal reserved) #end of FLIMAGE         #

@ The following modes provide shorthands for callback routines.

@d macro mode fl handler =
macro mode xevent;
MODE FLHANDLER = PROC(REF FLOBJECT,INT,FLCOORD,FLCOORD,INT,REF XEVENT)INT

@d macro mode fl iocb =
MODE FLIOCB = PROC(INT,CPTR)VOID

@d macro mode fl drawproc =
MODE FLDRAWPROC = PROC(FLCOORD,FLCOORD,FLCOORD,FLCOORD,INT,FLCOLOR)VOID

@d macro mode fl fscb =
MODE FLFSCB = PROC(VECTOR[]CHAR,CPTR)INT

@d macro mode fl fcb =
MODE FLFCB = PROC(REF FLFORM,CPTR)VOID

@d macro mode fl fcbi =
MODE FLFCBI = PROC(REF FLFORM,CPTR)INT

@d macro mode fl ocb =
MODE FLOCB = PROC(REF FLOBJECT,INT)VOID

@d macro mode fl ocbi =
MODE FLOCBI = PROC(REF FLOBJECT,CPTR)INT

@d macro mode fl cb =
MODE FLCB = PROC(CPTR)VOID

@ Configuration information.

@d macro mode flimagejpegoptions =
MODE FLIMAGEJPEGOPTIONS =
   STRUCT(INT quality, smoothing,
          STRUCT 6 INT reserved)

@d macro mode flimagepsoptions =
MODE FLIMAGEPSOPTIONS =
	STRUCT(INT ps color,orientation,auto fit,drawbox,eps,
          SHORT REAL xdpi, ydpi, paper w, paper h, gamma,
          CCHARPTR   tmpdir,
          INT        printer dpi,
          SHORT REAL hm, vm, xscale, yscale,
          INT        scale text, first page only, clip,
          STRUCT 10 INT reserved)

@d macro mode flpscontrol = flimagepsoptions

@ These operators convert a !PROC! to its descriptor.

@d macro op fl draw proc to pdesc =
macro mode fl drawproc;
OP(FLDRAWPROC)PDESC FLDRAWPROCTOPDESC = BIOP 99

@d macro op fl fcb to pdesc =
macro mode fl fcb;
OP(FLFCB)PDESC FLFCBTOPDESC = BIOP 99

@d macro op fl fcbi to pdesc =
macro mode fl fcbi;
OP(FLFCBI)PDESC FLFCBITOPDESC = BIOP 99

@d macro op fl fscb to pdesc =
macro mode fl fscb;
OP(FLFSCB)PDESC FLFSCBTOPDESC = BIOP 99

@d macro op fl handler to pdesc =
macro mode fl handler;
OP(FLHANDLER)PDESC FLHANDLERTOPDESC = BIOP 99

@d macro op fl iocb to pdesc =
macro mode fl iocb;
OP(FLIOCB)PDESC FLIOCBTOPDESC = BIOP 99

@d macro op fl ocb to pdesc =
macro mode fl ocb;
OP(FLOCB)PDESC FLOCBTOPDESC = BIOP 99

@d macro op fl ocbi to pdesc =
macro mode fl ocbi;
OP(FLOCBI)PDESC FLOCBITOPDESC = BIOP 99

@d macro op fl cb to pdesc =
macro mode fl cb;
OP(FLCB)PDESC FLCBTOPDESC = BIOP 99

@d macro op proc int void to pdesc =
OP(PROC(INT)VOID)PDESC PIVTOPDESC = BIOP 99

@ Operators for !CBPTR!.

@d macro op cptr to cbptr =
OP(CPTR)CBPTR CPTRTOCBPTR = BIOP 99
@d macro op cbptr to cptr =
OP(CBPTR)CPTR CBPTRTOCPTR = BIOP 99

@ These two definitions have yet to be tested.

@d macro op cbptr to int =
OP(CBPTR)INT CBPTRTOINT = ALIEN "CBPTRTOINT"
	"#define CBPTRTOINT(p) (int)(void *)(p)"
@d macro op int to cbptr =
OP(INT)CBPTR INTTOCBPTR = ALIEN "INTTOCBPTR"
	"#define INTTOCBPTR(i) (void *)(i)"

@ Operators for !CPTR!.

@d macro op cstr to cptr =
OP(CSTR)CPTR  CSTRTOCPTR  = BIOP 99

@ This definition has yet to be tested.

@d macro op cptr to int =
OP(CPTR)INT   CPTRTOINT   = ALIEN "CPTRTOINT"
	"#define CPTRTOINT(p) (int)(void *)(p)"

@ This operator converts ![]CHAR! to !VECTOR[]CHAR!.

@d macro op vz =
OP VZ = ([]CHAR s)VECTOR[]CHAR:
(
	VECTOR[UPB s[@@2]]CHAR v;
	FOR i FROM LWB s TO UPB s
	DO
		v[i-LWB s+1]:=s[i]
	OD;
	v[UPB v]:=nul ch;
	v
) #VZ#

@m flimage repfreq = ABS 16r1f   # report every 32 lines #

@2Basic definitions and limits.
Window system independent prototypes. Modify with care

@ Some general constants.

@m fl on = 1
@m fl ok = 1
@m fl true = 1
@m fl valid = 1
@m fl preempt = 1
@m fl auto = 2
@m fl when needed = fl auto

@m fl false = 0
@m fl off = 0
@m fl cancel = 0
@m fl invalid = 0

@ \.{WMDeleteWindow} callback return.

@m fl ignore = -1
@m fl close = -2

@ Miscellaneous return types.

@m fl argument = -3
@m fl alloc = -4
@m fl bad object = -5

@ Maximum directory length.

@m fl path max = 1024

@ Make this !1! if !FLCOORD! is of mode !SHORT REAL!.

@m fl coordisfloat = 0

@ Coordinates can be in pixels, millimeters or points (1/72inch).

@m fl coord pixel = 0      # default, Pixel           #
@m fl coord mm = 1         # milli-meter              #
@m fl coord point = 2      # point                    #
@m fl coord centimm = 3    # one hundredth of a mm    #
@m fl coord centipoint = 4 # one hundredth of a point #

@ All object classes.

@m fl invalid class = 0
@m fl button = 1
@m fl lightbutton = 2
@m fl roundbutton = 3
@m fl round3dbutton = 4
@m fl checkbutton = 5
@m fl bitmapbutton = 6
@m fl pixmapbutton = 7
@m fl bitmap = 8
@m fl pixmap = 9
@m fl box = 10
@m fl text = 11
@m fl menu = 12
@m fl chart = 13
@m fl choice = 14
@m fl counter = 15
@m fl slider = 16
@m fl valslider = 17
@m fl input = 18
@m fl browser = 19
@m fl dial = 20
@m fl timer = 21
@m fl clock = 22
@m fl positioner = 23
@m fl free = 24
@m fl xyplot = 25
@m fl frame = 26
@m fl labelframe = 27
@m fl canvas = 28
@m fl glcanvas = 29
@m fl tabfolder = 30
@m fl scrollbar = 31
@m fl scrollbutton = 32
@m fl menubar = 33
@m fl textbox = 34 # for internal use only #
@m fl labelbutton = 35
@m fl combobox = 36
@m fl imagecanvas = 37
@m fl thumbwheel = 38
@m fl colorwheel = 39
@m fl formbrowser = 40

@m fl class end = 41 # sentinal #

@m fl begin group = 10000
@m fl end group = 20000

@m fl user class begin = 1001  # min. user class value  #
@m fl user class end = 9999    # max. user class value  #

@ How to display a form onto a screen.

@m fl place free = 16r0        # size remain resizable  #
@m fl place mouse = 16r1       # mouse centred on form  #
@m fl place center = 16r2      # center of the screen   #
@m fl place position = 16r4    # specific size          #
@m fl place size = 16r8        # specific size          #
@m fl place geometry = 16r10   # specific position      #
@m fl place aspect = 16r20     # keep aspect ratio      #
@m fl place fullscreen = 16r40 # scale to fit screen    #
@m fl place hotspot = 16r80    # so mouse fall on (x,y) #
@m fl place iconic = 16r100    # modifier               #
@m fl free size = (2r1 SHL 14)
@m fl fix size = (2r1 SHL 15)

@m fl place free center = (fl place center OR fl free size)
@m fl place centerfree = (fl place center OR fl free size)

@ Window manager decoration request and forms attributes.

@m fl fullborder = 1           # normal                    #
@m fl transient = 2            # set TRANSIENTFOR property #
@m fl noborder = 3             # use override redirect to supress decor.#
@m fl modal = ABS(2r1 SHL 8)   # not implemented yet       #

@ All box types.

@m fl no box = 0
@m fl up box = 1
@m fl down box = 2
@m fl border box = 3
@m fl shadow box = 4
@m fl frame box = 5
@m fl rounded box = 6
@m fl embossed box = 7
@m fl flat box = 8
@m fl rflat box = 9
@m fl rshadow box = 10
@m fl oval box = 11
@m fl rounded3d upbox = 12
@m fl rounded3d downbox = 13
@m fl oval3d upbox = 14
@m fl oval3d downbox = 15
@m fl oval3d framebox = 16
@m fl oval3d embossedbox = 17
 # sentinel #
@m fl max box styles = 23

@m fl is upbox = (t=fl up box OR t=fl oval3d upbox OR t=fl rounded3d upbox)
@m fl is downbox = (t=fl down box OR t=fl oval3d downbox OR t=fl rounded3d downbox)

@m fl to downbox =
   IF   t = fl up box
   THEN fl down box
   ELIF t = fl rounded3d upbox
   THEN fl rounded3d downbox
   ELIF t = fl oval3d upbox
   THEN fl oval3d downbox
   ELSE t
   FI

@ How to place text relative to a box.

@m fl align center = 16r0
@m fl align top = 16r1
@m fl align bottom = 16r2
@m fl align left = 16r4
@m fl align right = 16r8
@m fl align top left = (fl align top OR fl align left)
@m fl align top right = (fl align top OR fl align right)
@m fl align bottom left = (fl align bottom OR fl align left)
@m fl align bottom right = (fl align bottom OR fl align right)
@m fl align inside = (2r1 SHL 13)
@m fl align vert = (2r1 SHL 14) # not functional yet #

@m fl align left top = fl align top left
@m fl align right top = fl align top right
@m fl align left bottom = fl align bottom left
@m fl align right bottom = fl align bottom right

@ Mouse buttons. They do not have to be consecutive.

@m fl mbutton1 = 1
@m fl mbutton2 = 2
@m fl mbutton3 = 3
@m fl mbutton4 = 4
@m fl mbutton5 = 5

@m fl left mouse = fl mbutton1
@m fl middle mouse = fl mbutton2
@m fl right mouse = fl mbutton3

@ Control when to return input, slider and dial objects.

@m fl return end changed = 0
@m fl return changed = 1
@m fl return end = 2
@m fl return always = 3
@m fl return dblclick = 4

@2Colours.
Some special color indices for !fl private colormap!. It does not
matter what the value of each enum is, but it must start from !0! and
be consecutive.

@m fl black = 0
@m fl red = 1
@m fl green = 2
@m fl yellow = 3
@m fl blue = 4
@m fl magenta = 5
@m fl cyan = 6
@m fl white = 7

@m fl tomato = 8
@m fl indianred = 9
@m fl slateblue = 10

@m fl col1 = 11
@m fl right bcol = 12
@m fl bottom bcol = 13
@m fl top bcol = 14
@m fl left bcol = 15
@m fl mcol = 16

@m fl inactive = 17
@m fl palegreen = 18
@m fl darkgold = 19

@m fl orchid = 20
@m fl darkcyan = 21
@m fl darktomato = 22
@m fl wheat = 23
@m fl darkorange = 24
@m fl deeppink = 25
@m fl chartreuse = 26
@m fl darkviolet = 27
@m fl springgreen = 28
@m fl dodgerblue = 29

@ These two colors can be used to shade \.{col1}.

@m fl lighter col1 = 30 # a little lighter than COL1 #
@m fl darker col1 = 31  # a little darker than COL1  #

@m fl free col1 = 256
@m fl free col2 = 257
@m fl free col3 = 258
@m fl free col4 = 259
@m fl free col5 = 260
@m fl free col6 = 261
@m fl free col7 = 262
@m fl free col8 = 263
@m fl free col9 = 264
@m fl free col10 = 265
@m fl free col11 = 266
@m fl free col12 = 267
@m fl free col13 = 268
@m fl free col14 = 269
@m fl free col15 = 270
@m fl free col16 = 271

@m fl built in cols = (fl darker col1+1)
@m fl inactive col = fl inactive

@ Aliases for some colors.

@m fl gray16 = fl right bcol
@m fl gray35 = fl bottom bcol
@m fl gray80 = fl top bcol
@m fl gray90 = fl left bcol
@m fl gray63 = fl col1
@m fl gray75 = fl mcol

@m fl lcol = fl black

@2Events.
Events that a form reacts to.

@m fl noevent = 0
@m fl draw = 1
@m fl push = 2
@m fl release = 3
@m fl enter = 4
@m fl leave = 5
@m fl mouse = 6
@m fl drag = fl mouse
@m fl focus = 7
@m fl unfocus = 8
@m fl keyboard = 9
@m fl keypress = fl keyboard
@m fl motion = 10
@m fl step = 11
@m fl shortcut = 12
@m fl freemem = 13
@m fl other = 14       # property, selection etc #
@m fl drawlabel = 15
@m fl dblclick = 16    # double click            #
@m fl trplclick = 17   # triple click            #
@m fl attrib = 18      # attribute change        #
@m fl keyrelease = 19
@m fl ps = 20          # dump a form into EPS    #

@m fl move = fl motion # for compatibility       #

@ Resize policies.

@m fl resize none = 8r0
@m fl resize x = 8r1
@m fl resize y = 8r2
@m fl resize all = (fl resize x OR fl resize y)

@ Keyboard focus control.

@m fl key normal = 1      # normal keys(0-255) - tab +left/right #
@m fl key tab = 2         # normal keys + 4 direction cursor     #
@m fl key special = 4     # only needs special keys(>255)        #
@m fl key all = 7         # all keys                             #

@m fl alt mask = (2r1 SHL 25) # alt + Key --> FLALTVAL + key     #
@m fl control mask = (2r1 SHL 26)
@m fl shift mask = (2r1 SHL 27)
@m fl alt val = fl alt mask

@ form visibility state: !visible OF form!.

@m fl being hidden = -1
@m fl hidden = 0
@m fl invisible = fl hidden
@m fl visible = 1

@m fl bound width = 3      # Default border width of boxes #

@m fl click timeout = 400  # double click interval         #

@ Async IO stuff.

@m fl read = 8r1
@m fl write = 8r2
@m fl except = 8r4

@ Program default masks.

@m fl pd depth = (2r1 SHL 1)
@m fl pd class = (2r1 SHL 2)
@m fl pd double = (2r1 SHL 3)
@m fl pd sync = (2r1 SHL 4)
@m fl pd privatemap = (2r1 SHL 5)
@m fl pd scrollbartype = (2r1 SHL 6)
@m fl pd pupfontsize = (2r1 SHL 7)
@m fl pd buttonfontsize = (2r1 SHL 8)
@m fl pd inputfontsize = (2r1 SHL 9)
@m fl pd sliderfontsize = (2r1 SHL 10)
@m fl pd visual = (2r1 SHL 11)
@m fl pd ulthickness = (2r1 SHL 12)
@m fl pd ulpropwidth = (2r1 SHL 13)
@m fl pd bs = (2r1 SHL 14)
@m fl pd coordunit = (2r1 SHL 15)
@m fl pd debug = (2r1 SHL 16)
@m fl pd sharedmap = (2r1 SHL 17)
@m fl pd standardmap = (2r1 SHL 18)
@m fl pd borderwidth = (2r1 SHL 19)
@m fl pd safe = (2r1 SHL 20)
@m fl pd menufontsize = (2r1 SHL 21)
@m fl pd browserfontsize = (2r1 SHL 22)
@m fl pd choicefontsize = (2r1 SHL 23)
@m fl pd labelfontsize = (2r1 SHL 24)

@m fl pd button label = fl pd button font size

@d macro fl event =
macro mode fl object;
PROC fl event = REF FLOBJECT:
   REF FLOBJECT
   CODE "extern unsigned *FL_EVENT; RESULT=FL_EVENT;"

@ Slider types.

@m fl slider none = 16r0
@m fl slider box = 16r1
@m fl slider knob = 16r2
@m fl slider up = 16r4
@m fl slider down = 16r8
@m fl slider all = 16rf

@ Basic routines.
Read the rgb.txt file.

@d macro fl init rgb database =
macro op vz;
PROC fl init rgbdatabase = ([]CHAR fn)INT:
BEGIN
 PROC(VECTOR[]CHAR)INT fl fl init rgbdatabase = ALIEN "FL_INIT_RGBDATABASE"
 "#define FL_INIT_RGBDATABASE(fn) \"
 " fl_init_RGBdatabase(A_VC_charptr(fn))";
 fl fl init rgbdatabase(VZ fn)
END #fl init rgbdatabase#

@d macro fl lookup rgb color =
macro op vz;
PROC fl lookup rgbcolor = ([]CHAR color,REF INT r,g,b)INT:
BEGIN
 PROC(VECTOR[]CHAR,REF INT,REF INT,REF INT)INT fl fl lookup rgbcolor =
 ALIEN "FL_LOOKUP_RGBCOLOR"
 "#define FL_LOOKUP_RGBCOLOR(color,r,g,b) \"
 " fl_lookup_RGBcolor(A_VC_charptr(color),(int *)r,(int *)g,(int *)b)";
 fl fl lookup rgbcolor(VZ color,r,g,b)
END #fl lookup rgbcolor#

@d macro fl add io callback =
macro op fl iocb to pdesc;
PROC fl add io callback = (INT fd,BITS cond,FLIOCB p,CPTR v)VOID:
BEGIN
   PROC(INT,BITS,CPTR,CPTR)VOID fl fl add io callback =
   ALIEN "FL_ADD_IO_CALLBACK"
   "#define FL_ADD_IO_CALLBACK(fd,cond,func,data) \"
   " fl_add_io_callback(fd,cond,(void *)func,data)";
   fl fl add io callback(fd,cond,cp OF FLIOCBTOPDESC p,v)
END

@d macro fl remove io callback =
macro op fl iocb to pdesc;
PROC fl remove io callback = (INT n,BITS b,FLIOCB p)VOID:
BEGIN
 PROC(INT,BITS,CPTR)VOID fl fl remove io callback =
 ALIEN "FL_REMOVE_IO_CALLBACK"
 "#define FL_REMOVE_IO_CALLBACK(n,b,f) \"
 " fl_remove_io_callback(n, b, (void *)f)";
 fl fl remove io callback(n,b,cp OF FLIOCBTOPDESC p)
END

@ Signals.

@d macro fl add signal callback =
macro op fl iocb to pdesc;
PROC fl add signal callback = (INT i,FLIOCB p,CPTR v)VOID:
BEGIN
 PROC(INT,CPTR,CPTR)VOID fl fl add signal callback =
 ALIEN "FL_ADD_SIGNAL_CALLBACK"
 "#define FL_ADD_SIGNAL_CALLBACK(i,f,v) \"
 " fl_add_signal_callback(i, (void *)f, (void *)v)";
 fl fl add signal callback(i,cp OF FLIOCBTOPDESC p,v)
END

@d macro fl remove signal callback =
PROC(INT)VOID fl remove signal callback = ALIEN "FL_REMOVE_SIGNAL_CALLBACK"
 "#define FL_REMOVE_SIGNAL_CALLBACK(i) void fl_remove_signal_callback(i)"

@d macro fl signal caught =
PROC(INT)VOID fl signal caught = ALIEN "FL_SIGNAL_CAUGHT"
 "#define FL_SIGNAL_CAUGHT(i) void fl_signal_caught(i)"

@d macro fl app signal direct =
PROC(INT)VOID fl app signal direct = ALIEN "FL_APP_SIGNAL_DIRECT"
 "#define FL_APP_SIGNAL_DIRECT(i) fl_app_signal_direct(i)"

@d macro fl add timeout =
macro op fl iocb to pdesc;
PROC fl add timeout = (INT l,FLIOCB p,CPTR v)INT:
BEGIN
 PROC(INT,CPTR,CPTR)INT fl fl add timeout =
 ALIEN "FL_ADD_TIMEOUT"
 "#define FL_ADD_TIMEOUT(l,f,v) \"
 " fl_add_timeout(l, (void *)f, (void *)v)";
 fl fl add timeout(l,cp OF FLIOCBTOPDESC p,v)
END

@d macro fl remove timeout =
PROC(INT)VOID fl remove timeout = ALIEN "FL_REMOVE_TIMEOUT"
 "#define FL_REMOVE_TIMEOUT(i) fl_remove_timeout(i)"

@ Some utility stuff.

@d macro fl get vn value =
macro mode flvnpair;
macro op vz;
PROC fl get vn value = (REF FLVNPAIR p,[]CHAR n)INT:
BEGIN
 PROC(REF FLVNPAIR,VECTOR[]CHAR)INT fl fl get vn value =
 ALIEN "FL_GET_VN_VALUE"
 "#define FL_GET_VN_VALUE(p,n) \"
 " fl_get_vn_value((void *)p, A_VC_charptr(n))";
 fl fl get vn value(p,VZ n)
END #fl get vn value#

@d macro  fl get vn name =
macro mode flvnpair;
PROC fl get vn name = (REF FLVNPAIR p,INT v)[]CHAR:
BEGIN
 PROC(REF FLVNPAIR,INT)CPTR fl fl get vn name =
 ALIEN "FL_GET_VN_NAME"
 "#define FL_GET_VN_NAME(p,v) \"
 " (void *)fl_get_vn_name((void *)p, v)";
 CPTRTORVC fl fl get vn name(p,v)
END #fl get vn name#

@d macro fl msleep =
PROC(BITS)BITS fl msleep = ALIEN "FL_MSLEEP"
 "#define FL_MSLEEP(b) fl_msleep(b)"

@2Basic public routines.

@d macro fl library version =
PROC(REF INT,REF INT)INT fl library version =
 ALIEN "FL_LIBRARY_VERSION"
 "#define FL_LIBRARY_VERSION(version,revision) \"
 " fl_library_version((int *)version, (int *)revision)"

@ Generic routines that deal with objects of mode !FLFORM!. We use
start and finish instead of begin and end because there are plain
values having the same identifier (was upper-case in C).

@d macro fl start form =
PROC(INT,FLCOORD,FLCOORD)REF FLFORM fl start form =
 ALIEN "FL_BGN_FORM"
 "#define FL_BGN_FORM(type,w,h) (void *)fl_bgn_form(type,w,h)"

@d macro fl finish form =
PROC fl finish form = VOID: CODE "fl_end_form();"

@d macro fl do forms =
PROC fl do forms = REF FLOBJECT:
 REF FLOBJECT CODE "RESULT=(void*)fl_do_forms();"

@d macro fl check forms =
PROC fl check forms = REF FLOBJECT:
 REF FLOBJECT CODE "RESULT=(void *)fl_check_forms();"

@d macro fl do only forms =
PROC fl do only forms = REF FLOBJECT:
 REF FLOBJECT CODE "RESULT=(void *)fl_do_only_forms();"

@d macro fl check only forms =
PROC fl check only forms = REF FLOBJECT:
 REF FLOBJECT CODE "RESULT=(void *)fl_check_only_forms();"

@d macro fl freeze form =
PROC(REF FLFORM)VOID fl freeze form = ALIEN "FL_FREEZE_FORM"
 "#define FL_FREEZE_FORM(form) fl_freeze_form((void *)form)"

@d macro fl set focus object =
PROC(REF FLFORM,REF FLOBJECT)VOID fl set focus object =
 ALIEN "FL_SET_FOCUS_OBJECT"
 "#define FL_SET_FOCUS_OBJECT(form,ob) \"
 " fl_set_focus_object((void *)form, (void *)ob)"

@d macro fl get focus object =
PROC(REF FLFORM)REF FLOBJECT fl get focus object =
 ALIEN "FL_GET_FOCUS_OBJECT"
 "#define FL_GET_FOCUS_OBJECT(form) \"
 " (void *)fl_get_focus_object((void *)form)"

@d macro fl reset focus object =
PROC(REF FLOBJECT)VOID fl reset focus object =
 ALIEN "FL_RESET_FOCUS_OBJECT"
 "#define FL_RESET_FOCUS_OBJECT(ob) \"
 " fl_reset_focus_object((void *)ob)"

@d macro fl set form atclose =
macro op fl fcbi to pdesc;
PROC fl set form atclose = (REF FLFORM fm,FLFCBI p,CPTR v)CPTR:
BEGIN
   PROC(REF FLFORM,CPTR,CPTR)CPTR
      fl fl set form atclose = ALIEN "FL_SET_FORM_ATCLOSE"
         "#define FL_SET_FORM_ATCLOSE(fm,at_close,v) \"
         " (unsigned *) fl_set_form_atclose((void *)fm,\"
         " (void *)at_close,\"
         " (void *)v)";
   fl fl set form atclose(fm,cp OF FLFCBITOPDESC p,v)
END #fl set form atclose#

@d macro fl set atclose =
macro op fl fcbi to pdesc;
PROC fl set atclose = (FLFCBI p,CPTR data)CPTR:
BEGIN
 PROC(CPTR,CPTR)CPTR fl fl set atclose =
 ALIEN "FL_SET_ATCLOSE"
 "#define FL_SET_ATCLOSE(at_close,data) \"
 " (void *) fl_set_atclose((void *)at_close, (void *)data)";
 fl fl set atclose(cp OF FLFCBITOPDESC p,data)
END

@d macro fl set form atactivate =
macro op fl fcb to pdesc;
PROC fl set form atactivate = (REF FLFORM form,FLFCB p,CPTR data)CPTR:
BEGIN
   PROC(REF FLFORM,CPTR,CPTR)CPTR
      fl fl set form atactivate = ALIEN "FL_SET_FORM_ATACTIVATE"
      "#define FL_SET_FORM_ATACTIVATE(form,callback,data) \"
      " (void *) fl_set_form_atactivate((void *)form,\"
      " (void *)callback,\"
      " (void *)data)";
   fl fl set form atactivate(form,cp OF FLFCBTOPDESC p,data)
END #fl set form atactivate#

@d macro fl set form at deactivate =
macro op fl fct to pdesc;
PROC fl set form atdeactivate = (REF FLFORM form,FLFCB p,CPTR data)CPTR:
BEGIN
   PROC(REF FLFORM,CPTR,CPTR)CPTR
      fl fl set form atdeactivate = ALIEN "FL_SET_FORM_ATDEACTIVATE"
      "#define FL_SET_FORM_ATDEACTIVATE(form,callback,data) \"
      " (void *) fl_set_form_atdeactivate((void *)form,\"
      " (void *)callback,\"
      " (void *)data)";
   fl fl set form atdeactivate(form, cp OF FLFCBTOPDESC p,data)
END #fl set form atdeactivate#

@d macro fl thaw form =
PROC(REF FLFORM)VOID fl thaw form = ALIEN "FL_UNFREEZE_FORM"
 "#define FL_UNFREEZE_FORM(form) fl_unfreeze_form((void *)form)"

@d macro fl deactivate form =
PROC(REF FLFORM)VOID fl deactivate form = ALIEN "FL_DEACTIVATE_FORM"
 "#define FL_DEACTIVATE_FORM(form) fl_deactivate_form((void *)form)"

@d macro fl activate form =
PROC(REF FLFORM)VOID fl activate form = ALIEN "FL_ACTIVATE_FORM"
 "#define FL_ACTIVATE_FORM(form) fl_activate_form((void *)form)"

@d macro fl deactivate all forms =
PROC fl deactivate all forms = VOID: CODE "fl_deactivate_all_forms();"

@d macro fl activate all forms =
PROC fl activate all forms = VOID: CODE "fl_activate_all_forms();"

@d macro fl freeze all forms =
PROC fl freeze all forms = VOID: CODE "fl_freeze_all_forms();"

@d macro fl thaw all forms =
PROC fl thaw all forms = VOID: CODE "fl_unfreeze_all_forms();"

@d macro fl scale form =
PROC(REF FLFORM,REAL,REAL)VOID fl scale form =
   ALIEN "FL_SCALE_FORM"
   "#define FL_SCALE_FORM(form,xsc,ysc) \"
   " fl_scale_form((void *)form, xsc, ysc)"

@d macro fl set form position =
PROC(REF FLFORM,FLCOORD,FLCOORD)VOID fl set form position =
 ALIEN "FL_SET_FORM_POSITION"
 "#define FL_SET_FORM_POSITION(form,x,y) \"
 " fl_set_form_position((void *)form, x, y)"

@d macro fl set form title =
macro op vz;
PROC fl set form title = (REF FLFORM form,[]CHAR title)VOID:
BEGIN
   PROC(REF FLFORM,VECTOR[]CHAR)VOID fl fl set form title =
      ALIEN "FL_SET_FORM_TITLE"
      "#define FL_SET_FORM_TITLE(form,title) \"
      " fl_set_form_title((void *)form,A_VC_charptr(title))";
   fl fl set form title(form,VZ title)
END #fl set form title#

@d macro fl set form property =
PROC(REF FLFORM,BITS)VOID fl set form property =
   ALIEN "FL_SET_FORM_PROPERTY"
   "#define FL_SET_FORM_PROPERTY(form,prop) \"
   " fl_set_form_property((void *)form, prop)"

@d macro fl set app mainform =
PROC(REF FLFORM)VOID fl set app mainform =
   ALIEN "FL_SET_APP_MAINFORM"
   "#define FL_SET_APP_MAINFORM(form) \"
   " fl_set_app_mainform((void *)form)"

@d macro fl get app mainform =
PROC fl get app mainform = REF FLFORM:
   REF FLFORM CODE "RESULT=(void *)fl_get_app_mainform();"

@d macro fl set app nomainform =
PROC(INT)VOID fl set app nomainform =
   ALIEN "FL_SET_APP_NOMAINFORM"
   "#define FL_SET_APP_NOMAINFORM(flag) \"
   " fl_set_app_nomainform(flag)"

@d macro fl set form callback =
macro op fl fcb to pdesc;
PROC fl set form callback = (REF FLFORM form,FLFCB p,CPTR data)VOID:
BEGIN
   PROC(REF FLFORM,CPTR,CPTR)VOID
      fl fl set form callback = ALIEN "FL_SET_FORM_CALLBACK"
      "#define FL_SET_FORM_CALLBACK(form,callback,data) \"
      " fl_set_form_callback\"
      " ((void *)form,(void *)callback,(void *)data)";
   fl fl set form callback(form,cp OF FLFCBTOPDESC p,data)
END #fl set form callback#

@d macro fl set form size =
PROC(REF FLFORM,FLCOORD,FLCOORD)VOID fl set form size =
   ALIEN "FL_SET_FORM_SIZE"
   "#define FL_SET_FORM_SIZE(form,w,h) \"
 " fl_set_form_size((void *)form, w, h)"

@d macro fl set form hotspot =
PROC(REF FLFORM,FLCOORD,FLCOORD)VOID fl set form hotspot =
   ALIEN "FL_SET_FORM_HOTSPOT"
      "#define FL_SET_FORM_HOTSPOT(form,x,y) \"
      " fl_set_form_hotspot((void *)form, x,y)"

@d macro fl set form hotobject =
PROC(REF FLFORM,REF FLOBJECT)VOID fl set form hotobject =
   ALIEN "FL_SET_FORM_HOTOBJECT"
      "#define FL_SET_FORM_HOTOBJECT(form,ob) \"
      " fl_set_form_hotobject((void *)form,(void *)ob)"

@d macro fl set form minsize =
PROC(REF FLFORM,FLCOORD,FLCOORD)VOID fl set form minsize =
   ALIEN "FL_SET_FORM_MINSIZE"
      "#define FL_SET_FORM_MINSIZE(form,minw,minh) \"
      " fl_set_form_minsize((void *)form, minw, minh)"

@d macro fl set form maxsize =
PROC(REF FLFORM,FLCOORD,FLCOORD)VOID fl set form maxsize =
   ALIEN "FL_SET_FORM_MAXSIZE"
      "#define FL_SET_FORM_MAXSIZE(form,maxw,maxh) \"
      " fl_set_form_maxsize((void *)form, maxw, maxh)"

@d macro fl set form event cmask =
PROC(REF FLFORM,BITS)VOID fl set form event cmask =
   ALIEN "FL_SET_FORM_EVENT_CMASK"
      "#define FL_SET_FORM_EVENT_CMASK(form,mask) \"
      " fl_set_form_event_cmask((void *)form, mask)"

@d macro fl get form event cmask =
PROC(REF FLFORM)BITS fl get form event cmask =
   ALIEN "FL_GET_FORM_EVENT_CMASK"
      "#define FL_GET_FORM_EVENT_CMASK(form) \"
      " fl_get_form_event_cmask((void *)form)"

@d macro fl set form geometry =
PROC(REF FLFORM,FLCOORD,FLCOORD,FLCOORD,FLCOORD)VOID
   fl set form geometry = ALIEN "FL_SET_FORM_GEOMETRY"
      "#define FL_SET_FORM_GEOMETRY(form,x,y,w,h) \"
      " fl_set_form_geometry((void *)form, x, y, w, h)"

@d macro fl show form =
macro op vz;
PROC fl show form = (REF FLFORM form,BITS place,INT border,[]CHAR name)INT:
BEGIN
   PROC(REF FLFORM,BITS,INT,VECTOR[]CHAR)INT fl fl show form =
   ALIEN "FL_SHOW_FORM"
      "#define FL_SHOW_FORM(form,place,border,name) \"
      " fl_show_form((void *)form,place,border,A_VC_charptr(name))";
   fl fl show form(form,place,border,VZ name)
END #fl show form#

@d macro fl hide form =
PROC(REF FLFORM)VOID fl hide form = ALIEN "FL_HIDE_FORM"
   "#define FL_HIDE_FORM(form) fl_hide_form((void *)form)"

@d macro fl free form =
PROC(REF FLFORM)VOID fl free form = ALIEN "FL_FREE_FORM"
   "#define FL_FREE_FORM(form) fl_free_form((void *)form)"

@d macro fl redraw form =
PROC(REF FLFORM)VOID fl redraw form = ALIEN "FL_REDRAW_FORM"
   "#define FL_REDRAW_FORM(form) fl_redraw_form((void *)form)"

@d macro fl set form dblbuffer =
PROC(REF FLFORM,INT)VOID fl set form dblbuffer =
   ALIEN "FL_SET_FORM_DBLBUFFER"
      "#define FL_SET_FORM_DBLBUFFER(form,yes) \"
      " fl_set_form_dblbuffer((void *)form, yes)"

@d macro fl prepare form window =
macro op vz;
PROC fl prepare form window =
   (REF FLFORM form,BITS place,INT border,[]CHAR name)INT:
BEGIN
   PROC(REF FLFORM,BITS,INT,VECTOR[]CHAR)INT fl fl prepare form window =
      ALIEN "FL_PREPARE_FORM_WINDOW"
      "#define FL_PREPARE_FORM_WINDOW(form,place,border,name) \"
      " fl_prepare_form_window((void *)form, place, border, \"
      " A_VC_charptr(name))";
   fl fl prepare form window(form,place,border,VZ name)
END #fl prepare form window#

@d macro fl show form window =
PROC(REF FLFORM)INT fl show form window =
   ALIEN "FL_SHOW_FORM_WINDOW"
      "#define FL_SHOW_FORM_WINDOW(form) \"
      " fl_show_form_window((void *)form)"

@d macro fl adjust form size =
PROC(REF FLFORM)REAL fl adjust form size =
   ALIEN "FL_ADJUST_FORM_SIZE"
      "#define FL_ADJUST_FORM_SIZE(form) \"
      " (double) fl_adjust_form_size((void *)form)"

@d macro fl form is visible =
PROC fl form is visible = (REF FLFORM fm)BOOL:
BEGIN
	PROC(REF FLFORM)INT fl fl form is visible =
	ALIEN "FL_FORM_IS_VISIBLE"
		"#define FL_FORM_IS_VISIBLE(form) \"
		" fl_form_is_visible((void *)form)";
	fl fl form is visible(fm)/=0
END

@d macro fl register raw callback =
macro op fl fcbi to pdesc;
PROC fl register raw callback =
   (REF FLFORM form,BITS mask,FLFCBI p)CPTR:
BEGIN
   PROC(REF FLFORM,BITS,CPTR)CPTR
   fl fl register raw callback =
   ALIEN "FL_REGISTER_RAW_CALLBACK"
      "#define FL_REGISTER_RAW_CALLBACK(form,mask,callback) \"
      " (void *) fl_register_raw_callback((void *)form, mask, callback)";
   fl fl register raw callback(form,mask,cp OF FLFCBITOPDESC p)
END #fl register raw callback#

@d macro fl start group =
PROC fl start group = REF FLOBJECT:
   REF FLOBJECT CODE "RESULT=(void *)fl_bgn_group();"

@d macro fl finish group =
PROC fl finish group = REF FLOBJECT:
   REF FLOBJECT CODE "RESULT=(void *)fl_end_group();"

@d macro fl addto group =
PROC(REF FLOBJECT)VOID fl addto group = ALIEN "FL_ADDTO_GROUP"
   "#define FL_ADDTO_GROUP(ob) void fl_addto_group((void *)ob)"

@d macro fl set object boxtype =
PROC(REF FLOBJECT,INT)VOID fl set object boxtype =
   ALIEN "FL_SET_OBJECT_BOXTYPE"
      "#define FL_SET_OBJECT_BOXTYPE(ob,boxtype) \"
      " fl_set_object_boxtype((void *)ob, boxtype)"

@d macro fl set object bw =
PROC(REF FLOBJECT,INT)VOID fl set object bw = ALIEN "FL_SET_OBJECT_BW"
   "#define FL_SET_OBJECT_BW(ob,bw) \"
   " fl_set_object_bw((void *)ob, bw)"

@d macro fl set object resize =
PROC(REF FLOBJECT,BITS)VOID fl set object resize =
   ALIEN "FL_SET_OBJECT_RESIZE"
      "#define FL_SET_OBJECT_RESIZE(ob,howresize) \"
      " fl_set_object_resize((void *)ob, howresize)"

@d macro fl set object gravity =
PROC(REF FLOBJECT,INT,INT)VOID fl set object gravity =
   ALIEN "FL_SET_OBJECT_GRAVITY"
      "#define FL_SET_OBJECT_GRAVITY(ob,nwgravity,segravity) \"
      " fl_set_object_gravity((void *)ob, nwgravity, segravity)"

@d macro fl set object lsize =
PROC(REF FLOBJECT,INT)VOID fl set object lsize =
   ALIEN "FL_SET_OBJECT_LSIZE"
      "#define FL_SET_OBJECT_LSIZE(ob,lsize) \"
      " fl_set_object_lsize((void *)ob, lsize)"

@d macro fl set object lstyle =
PROC(REF FLOBJECT,INT)VOID fl set object lstyle =
   ALIEN "FL_SET_OBJECT_LSTYLE"
      "#define FL_SET_OBJECT_LSTYLE(ob,lstyle) \"
      " fl_set_object_lstyle((void *)ob, lstyle)"

@d macro fl set object lcol =
PROC(REF FLOBJECT,INT)VOID fl set object lcol =
   ALIEN "FL_SET_OBJECT_LCOL"
      "#define FL_SET_OBJECT_LCOL(ob,lcolor) \"
      " fl_set_object_lcol((void *)ob, lcolor)"

@d macro fl set object return =
PROC(REF FLOBJECT,INT)VOID fl set object return =
   ALIEN "FL_SET_OBJECT_RETURN"
      "#define FL_SET_OBJECT_RETURN(ob,ret) \"
      " fl_set_object_return((void *)ob, ret)"

@d macro fl set object lalign =
PROC(REF FLOBJECT,BITS)VOID fl set object lalign =
   ALIEN "FL_SET_OBJECT_LALIGN"
      "#define FL_SET_OBJECT_LALIGN(ob,align) \"
      " fl_set_object_lalign((void *)ob, align)"

@d macro fl set object shortcut =
macro op vz;
PROC fl set object shortcut = (REF FLOBJECT ob,[]CHAR str,INT showit)VOID:
BEGIN
   PROC(REF FLOBJECT,VECTOR[]CHAR,INT)VOID
      fl fl set object shortcut = ALIEN "FL_SET_OBJECT_SHORTCUT"
      "#define FL_SET_OBJECT_SHORTCUT(ob,str,showit) \"
      " fl_set_object_shortcut((void *)ob, A_VC_charptr(str), showit)";
   fl fl set object shortcut(ob,VZ str,showit)
END #fl set object shortcut#

@d macro fl set object shortcutkey =
PROC(REF FLOBJECT,INT)VOID fl set object shortcutkey =
   ALIEN "FL_SET_OBJECT_SHORTCUTKEY"
      "#define FL_SET_OBJECT_SHORTCUTKEY(ob,key) \"
      " fl_set_object_shortcutkey((void *)ob, key)"

@d macro fl set object dblbuffer =
PROC(REF FLOBJECT,INT)VOID fl set object dblbuffer =
   ALIEN "FL_SET_OBJECT_DBLBUFFER"
      "#define FL_SET_OBJECT_DBLBUFFER(ob,yes) \"
      " fl_set_object_dblbuffer((void *)ob, yes)"

@d macro fl set object color =
PROC(REF FLOBJECT,FLCOLOR,FLCOLOR)VOID fl set object color =
   ALIEN "FL_SET_OBJECT_COLOR"
      "#define FL_SET_OBJECT_COLOR(ob,color1,color2) \"
      " fl_set_object_color((void *)ob, color1, color2)"

@d macro fl set object label =
macro op vz;
PROC fl set object label = (REF FLOBJECT ob,[]CHAR label)VOID:
BEGIN
   PROC(REF FLOBJECT,VECTOR[]CHAR)VOID fl fl set object label =
      ALIEN "FL_SET_OBJECT_LABEL"
      "#define FL_SET_OBJECT_LABEL(ob,label) \"
      " fl_set_object_label((void *)ob,A_VC_charptr(label))";
   fl fl set object label(ob,VZ label)
END #fl set object label#

@d macro fl set object helper =
macro op vz;
PROC fl set object helper = (REF FLOBJECT ob,[]CHAR str)VOID:
BEGIN
   PROC(REF FLOBJECT,VECTOR[]CHAR)VOID fl fl set object helper =
   ALIEN "FL_SET_OBJECT_HELPER"
      "#define FL_SET_OBJECT_HELPER(ob,helper) \"
      " fl_set_object_helper((void *)ob, A_VC_charptr(helper))";
   fl fl set object helper(ob,VZ str)
END #fl set object helper#

@d macro fl set object position =
PROC(REF FLOBJECT,FLCOORD,FLCOORD)VOID fl set object position =
   ALIEN "FL_SET_OBJECT_POSITION"
   "#define FL_SET_OBJECT_POSITION(ob,x,y) \"
   " fl_set_object_position((void *)ob, x, y)"

@d macro fl set object size =
PROC(REF FLOBJECT,FLCOORD,FLCOORD)VOID fl set object size =
   ALIEN "FL_SET_OBJECT_SIZE"
   "#define FL_SET_OBJECT_SIZE(ob, w, h) \"
   " fl_set_object_size((void *)ob, w, h)"

@d macro fl set object automatic =
PROC(REF FLOBJECT,INT)VOID fl set object automatic =
   ALIEN "FL_SET_OBJECT_AUTOMATIC"
   "#define FL_SET_OBJECT_AUTOMATIC(ob,flag) \"
   " fl_set_object_automatic((void *)ob,flag)"

@d macro fl draw object label =
PROC(REF FLOBJECT)VOID fl draw object label =
   ALIEN "FL_DRAW_OBJECT_LABEL"
   "#define FL_DRAW_OBJECT_LABEL(ob) \"
   " fl_draw_object_label((void *)ob)"

@d macro fl draw object label outside =
PROC(REF FLOBJECT)VOID fl draw object label outside =
   ALIEN "FL_DRAW_OBJECT_LABEL_OUTSIDE"
   "#define FL_DRAW_OBJECT_LABEL_OUTSIDE(ob) \"
   " fl_draw_object_label_outside((void *)ob)"

@d macro fl get object component =
PROC(REF FLOBJECT,INT,INT,INT)REF FLOBJECT fl get object component =
   ALIEN "FL_GET_OBJECT_COMPONENT"
   "#define FL_GET_OBJECT_COMPONENT(ob,objclass,type,number) \"
   " (void *)fl_get_object_component((void *)ob,objclass,type,number)"

@d macro fl for all objects =
macro op fl ocbi to pdesc;
PROC fl for all objects = (REF FLFORM form,FLOCBI p,CPTR data)VOID:
BEGIN
   PROC(REF FLFORM,CPTR,CPTR)VOID
   fl fl for all objects = ALIEN "FL_FOR_ALL_OBJECTS"
      "#define FL_FOR_ALL_OBJECTS(form,callback,data) \"
      " fl_for_all_objects((void *)form,\"
      " (void *)callback,\"
      " (void *)data)";
   fl fl for all objects(form,cp OF FLOCBITOPDESC p,data)
END #fl for all objects#

@d macro fl set object dblclick =
PROC fl set object dblclick = (REF FLOBJECT ob, INT timeout)VOID:
 click timeout OF ob:=timeout

@d macro fl set object geometry =
PROC(REF FLOBJECT,FLCOORD,FLCOORD,FLCOORD,FLCOORD)VOID
   fl set object geometry = ALIEN "FL_SET_OBJECT_GEOMETRY"
   "#define FL_SET_OBJECT_GEOMETRY(ob,x,y,w,h) \"
   " fl_set_object_geometry((void *)ob,x,y,w,h)"

@d macro fl move object =
PROC(REF FLOBJECT,FLCOORD,FLCOORD)VOID fl move object =
   ALIEN "FL_MOVE_OBJECT"
   "#define FL_MOVE_OBJECT(ob,x,y) \"
   " fl_move_object((void *)ob,x,y)"

@d macro fl fit object label =
PROC(REF FLOBJECT,FLCOORD,FLCOORD)VOID fl fit object label =
   ALIEN "FL_FIT_OBJECT_LABEL"
   "#define FL_FIT_OBJECT_LABEL(ob,hm,vm) \"
   " fl_fit_object_label((void *)ob,hm,vm)"

@d macro fl get object geometry =
PROC(REF FLOBJECT,
     REF FLCOORD,REF FLCOORD,REF FLCOORD,REF FLCOORD)VOID
   fl get object geometry = ALIEN "FL_GET_OBJECT_GEOMETRY"
   "#define FL_GET_OBJECT_GEOMETRY(ob,x,y,w,h) \"
   " fl_get_object_geometry((void *)ob,x,y,w,h)"

@d macro fl get object position =
PROC(REF FLOBJECT,REF FLCOORD,REF FLCOORD)VOID
   fl get object position = ALIEN "FL_GET_OBJECT_POSITION"
   "#define FL_GET_OBJECT_POSITION(ob,x,y) \"
   " fl_get_object_position((void *)ob,x,y)"

@d macro fl get object label =
PROC fl get object label = (REF FLOBJECT ob)[]CHAR:
BEGIN
   PROC(REF FLOBJECT)CPTR fl fl get object label =
      ALIEN "FL_GET_OBJECT_LABEL"
      "#define FL_GET_OBJECT_LABEL(ob) \"
      " (void *)fl_get_object_label((void *)ob)";
   CPTRTORVC fl fl get object label(ob)
END #fl get object label#

@ This one takes the label into account.

@d macro fl get object bbox =
PROC(REF FLOBJECT,
     REF FLCOORD,REF FLCOORD,REF FLCOORD,REF FLCOORD)VOID
   fl get object bbox = ALIEN "FL_GET_OBJECT_BBOX"
      "#define FL_GET_OBJECT_BBOX(ob,x,y,w,h) \"
      " fl_get_object_bbox((void *)ob,x,y,w,h)"

@d macro fl call object callback =
PROC(REF FLOBJECT)VOID fl call object callback =
   ALIEN "FL_CALL_OBJECT_CALLBACK"
   "#define FL_CALL_OBJECT_CALLBACK(ob) \"
   " fl_call_object_callback((void *)ob)"

@d macro fl set object prehandler =
macro op fl handler to pdsc;
PROC fl set object prehandler = (REF FLOBJECT ob,FLHANDLER p)CPTR:
BEGIN
   PROC(REF FLOBJECT,CPTR)CPTR fl fl set object prehandler =
      ALIEN "FL_SET_OBJECT_PREHANDLER"
      "#define FL_SET_OBJECT_PREHANDLER(ob,prehandler) \"
      " (void *) fl_set_object_prehandler((void *)ob,\"
      " (void *)prehandler)";
   fl fl set object prehandler(ob,cp OF FLHANDLERTOPDESC p)
END #fl set object prehandler#

@d macro fl set object posthandler =
macro op fl handler to pdesc;
PROC fl set object posthandler = (REF FLOBJECT ob,FLHANDLER p)CPTR:
BEGIN
   PROC(REF FLOBJECT,CPTR)CPTR fl fl set object posthandler =
      ALIEN "FL_SET_OBJECT_POSTHANDLER"
      "#define FL_SET_OBJECT_POSTHANDLER(ob,posthandler) \"
      " (void *) fl_set_object_posthandler((void *)ob,\"
      " (void *)posthandler)";
   fl fl set object posthandler(ob,cp OF FLHANDLERTOPDESC p)
END #fl set object posthandler#

@d macro fl set object callback =
macro op fl ocb topdesc;
PROC fl set object callback = (REF FLOBJECT ob,FLOCB p,INT arg)CPTR:
BEGIN
   PROC(REF FLOBJECT,CPTR,INT)CPTR
      fl fl set object callback = ALIEN "FL_SET_OBJECT_CALLBACK"
      "#define FL_SET_OBJECT_CALLBACK(ob,callback,arg) \"
      " (void *) fl_set_object_callback((void *)ob,\"
      " (void *)callback, (long)arg)";
   fl fl set object callback(ob,cp OF FLOCBTOPDESC p,arg)
END #fl set object callback#

@d macro fl redraw object =
PROC(REF FLOBJECT)VOID fl redraw object = ALIEN "FL_REDRAW_OBJECT"
   "#define FL_REDRAW_OBJECT(ob) \"
   " fl_redraw_object((void *)ob)"

@d macro fl scale object =
PROC(REF FLOBJECT,REAL,REAL)VOID fl scale object =
   ALIEN "FL_SCALE_OBJECT"
      "#define FL_SCALE_OBJECT(ob,xsc,ysc) \"
      " fl_scale_object((void *)ob, xsc, ysc)"

@d macro fl show object =
PROC(REF FLOBJECT)VOID fl show object = ALIEN "FL_SHOW_OBJECT"
   "#define FL_SHOW_OBJECT(ob) \"
   " fl_show_object((void *)ob)"

@d macro fl hide object =
PROC(REF FLOBJECT)VOID fl hide object = ALIEN "FL_HIDE_OBJECT"
   "#define FL_HIDE_OBJECT(ob) \"
   " fl_hide_object((void *)ob)"

@d macro fl free object =
PROC(REF FLOBJECT)VOID fl free object = ALIEN "FL_FREE_OBJECT"
   "#define FL_FREE_OBJECT(ob) \"
   " fl_free_object((void *)ob)"

@d macro fl delete object =
PROC(REF FLOBJECT)VOID fl delete object = ALIEN "FL_DELETE_OBJECT"
   "#define FL_DELETE_OBJECT(ob) \"
   " fl_delete_object((void *)ob)"

@d macro fl trigger object =
PROC(REF FLOBJECT)VOID fl trigger object = ALIEN "FL_TRIGGER_OBJECT"
   "#define FL_TRIGGER_OBJECT(ob) \"
   " fl_trigger_object((void *)ob)"

@d macro fl activate object =
PROC(REF FLOBJECT)VOID fl activate object =
   ALIEN "FL_ACTIVATE_OBJECT"
   "#define FL_ACTIVATE_OBJECT(ob) \"
   " fl_activate_object((void *)ob)"

@d macro fl deactivate object =
PROC(REF FLOBJECT)VOID fl deactivate object =
   ALIEN "FL_DEACTIVATE_OBJECT"
   "#define FL_DEACTIVATE_OBJECT(ob) \"
   " fl_deactivate_object((void *)ob)"

@ Routines that facilitate free objects.

@d macro fl get char height =
PROC(INT,INT,REF INT,REF INT)INT fl get char height =
   ALIEN "FL_GET_CHAR_HEIGHT"
   "#define FL_GET_CHAR_HEIGHT(style,size,ascend,descend) \"
   " fl_get_char_height(style,size,(int *)ascend,(int *)descend)"

@d macro fl get char width =
PROC(INT,INT)INT fl get char width = ALIEN "FL_GET_CHAR_WIDTH"
   "#define FL_GET_CHAR_WIDTH(style,size) \"
   " fl_get_char_width(style,size)"

@d macro fl get string height =
macro op vz;
PROC fl get string height =
   (INT style,size,[]CHAR str,REF INT ascend,descend)INT:
BEGIN
   PROC(INT,INT,VECTOR[]CHAR,REF INT,REF INT)INT fl fl get string height =
      ALIEN "FL_GET_STRING_HEIGHT"
   "#define FL_GET_STRING_HEIGHT(style,size,str,ascend,descend) \"
   " fl_get_string_height(style, size, A_VC_charptr(str),\"
   " str.upb, (int *)ascend, (int *)descend)";
   fl fl get string height(style,size,VZ str,ascend,descend)
END #fl get string height#

@d macro fl get string width =
macro op vz;
PROC fl get string width = (INT style,size,[]CHAR str)INT:
BEGIN
   PROC(INT,INT,VECTOR[]CHAR)INT fl fl get string width =
      ALIEN "FL_GET_STRING_WIDTH"
   "#define FL_GET_STRING_WIDTH(style,size,str) \"
   " fl_get_string_width(style, size, A_VC_charptr(str), str.upb)";
   fl fl get string width(style,size,VZ str)
END #fl get string width#

@d macro fl get string dimension =
macro op vz;
PROC fl get string dimension =
   (INT style,INT size,[]CHAR str,REF INT width,height)VOID:
BEGIN
   PROC(INT,INT,VECTOR[]CHAR,REF INT,REF INT)VOID
	   fl fl get string dimension = ALIEN "FL_GET_STRING_DIMENSION"
      "#define FL_GET_STRING_DIMENSION(style,size,str,width,height) \"
      " fl_get_string_dimension(\"
      " style, size, A_VC_charptr(str),\"
      " str.upb, (int *)width, (int *)height)";
   fl fl get string dimension(style,size,VZ str,width,height)
END #fl get string dimension#

@d macro fl get align xy =
PROC(INT,INT,INT,INT,INT,INT,INT,INT,INT,REF INT,REF INT)VOID
   fl get align xy = ALIEN "FL_GET_ALIGN_XY"
      "#define FL_GET_ALIGN_XY\"
      " (align,x,y,w,h,obj_xsize,obj_ysize,xmargin,ymargin,xpos,ypos)\"
      " fl_get_align_xy(align, x, y, w, h, obj_xsize, obj_ysize,\"
      " xmargin, ymargin, (int *)xpos, (int *)ypos)"

@d macro fl drw text =
macro op vz;
PROC fl drw text =
 (BITS align,FLCOORD x,y,w,h,FLCOLOR c,INT style,size,[]CHAR str)VOID:
BEGIN
   PROC(BITS,FLCOORD,FLCOORD,FLCOORD,FLCOORD,FLCOLOR,INT,INT,VECTOR[]CHAR)VOID
      fl fl drw text = ALIEN "FL_DRW_TEXT"
      "#define FL_DRW_TEXT(align,x,y,w,h,c,style,size,str) \"
      " fl_drw_text(align,x,y,w,h,c,style,size,A_VC_charptr(str))";
   fl fl drw text(align,x,y,w,h,c,style,size,VZ str)
END #fl drw text#

@d macro fl drw text beside =
macro op vz;
PROC fl drw text beside =
 (BITS align,FLCOORD x,y,w,h,BITS c,INT style,size,[]CHAR str)VOID:
BEGIN
   PROC(BITS,FLCOORD,FLCOORD,FLCOORD,FLCOORD,
	     BITS,INT,INT,VECTOR[]CHAR)VOID
      fl fl drw text beside = ALIEN "FL_DRW_TEXT_BESIDE"
      "#define FL_DRW_TEXT_BESIDE(align,x,y,w,h,c,style,size,str) \"
      " fl_drw_text_beside(align,x,y,w,h,style,size,A_VC_charptr(str))";
   fl fl drw text beside(align,x,y,w,h,c,style,size,VZ str)
END #fl drw text beside#

@d macro fl drw text cursor =
macro op vz;
PROC fl drw text cursor =
   (BITS align,FLCOORD x,y,w,h,
    BITS c,INT style,size,[]CHAR str,
    BITS ccolor,INT pos)VOID:
BEGIN
   PROC(BITS,FLCOORD,FLCOORD,FLCOORD,FLCOORD,BITS,
        INT,INT,VECTOR[]CHAR,BITS,INT)VOID fl fl drw text cursor =
      ALIEN "FL_DRW_TEXT_CURSOR"
      "#define FL_DRW_TEXT_CURSOR(align,x,y,w,h,c,style,size,str,ccolor,pos) \"
      " fl_drw_text_cursor(align,x,y,w,h,c,style,size,\"
		"                    A_VC_charptr(str),ccolor,pos)";
   fl fl drw text cursor(align,x,y,w,h,c,style,size,VZ str,ccolor,pos)
END # fl drw text cursor#

@d macro fl drw box =
PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,FLCOLOR,INT)VOID
   fl drw box = ALIEN "FL_DRW_BOX"
      "#define FL_DRW_BOX(style,x,y,w,h,color,bw) \"
      " fl_drw_box(style, x, y, w, h, color, bw)"

@d macro fl add symbol =
macro op fl draw proc to pdsc;
PROC fl add symbol = ([]CHAR name,FLDRAWPROC p,FLCOLOR sc)INT:
BEGIN
   PROC(VECTOR[]CHAR,CPTR,INT)INT fl fl add symbol =
   ALIEN "FL_ADD_SYMBOL"
      "#define FL_ADD_SYMBOL(name,drawit,sc) \"
      " fl_add_symbol(A_VC_charptr(name), drawit, sc)";
   fl fl add symbol(MAKERVC name,cp OF FLDRAWPROCTOPDESC p,sc)
END #fl add symbol#

@d macro fl draw symbol =
macro op vz;
PROC fl draw symbol = ([]CHAR symbol,FLCOORD x,y,w,h,FLCOLOR color)INT:
BEGIN
   PROC(VECTOR[]CHAR,FLCOORD,FLCOORD,FLCOORD,FLCOORD,FLCOLOR)INT
      fl fl draw symbol = ALIEN "FL_DRAW_SYMBOL"
      "#define FL_DRAW_SYMBOL(symbolname,x,y,w,h,color) \"
      " fl_draw_symbol(A_VC_charptr(symbolname), x, y, w, h, color)";
   fl fl draw symbol(VZ symbol,x,y,w,h,color)
END #fl draw symbol#

@d macro fl drw slider =
macro op vz;
PROC fl drw slider =
 (INT box,FLCOORD x,y,w,h,FLCOLOR color1,color2,
  INT type,REAL size,value,[]CHAR label,
  INT parts,inverted,FLCOORD bw)VOID:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,FLCOLOR,FLCOLOR,
        INT,REAL,REAL,VECTOR[]CHAR,
		  INT,INT,FLCOORD)VOID
      fl fl drw slider = ALIEN "FL_DRW_SLIDER"
      "#define FL_DRW_SLIDER(\"
      " boxtype,x,y,w,h,color1,color2,slider_type,slider_size,\"
      " slider_value,label,parts,inverted,bw) \"
      " fl_drw_slider(boxtype, x, y, w, h,\"
      " color1, color2, slider_type, slider_size, slider_value,\"
      " A_VC_charptr(label),parts,inverted,bw)";
   fl fl drw slider(box,x,y,w,h,color1,color2,type,size,value,
   VZ label,parts,inverted,bw)
END # fl drw slider#

@d macro fl mapcolor =
PROC(FLCOLOR,INT,INT,INT)BITS fl mapcolor = ALIEN "FL_MAPCOLOR"
   "#define FL_MAPCOLOR(ind,red,green,blue) \"
   " fl_mapcolor(ind, red, green, blue)"

@d macro fl mapcolorname =
macro op vz;
PROC fl map colorname = (FLCOLOR ind,[]CHAR name)INT:
BEGIN
   PROC(BITS,VECTOR[]CHAR)INT fl fl mapcolorname =
      ALIEN "FL_MAPCOLORNAME"
      "#define FL_MAPCOLORNAME(ind,name) \"
      " fl_mapcolorname(ind, A_VC_charptr(name))";
   fl fl mapcolorname(ind,VZ name)
END # fl mapcolorname#

@d macro fl free colors =
PROC fl free colors = ([]FLCOLOR colors)VOID:
BEGIN
   PROC(VECTOR[]BITS)VOID fl fl free colors = ALIEN "FL_FREE_COLORS"
      "#define FL_FREE_COLORS(colors) \"
      " fl_free_colors((int *)colors.data, colors.upb)";
   VECTOR[UPB colors-LWB colors+1]BITS lcolors;
   FOR i TO UPB lcolors DO lcolors[i]:=colors[@@1][i] OD;
   fl fl free colors(lcolors)
END #fl free colors#

@d macro fl free pixels =
PROC(REF BITS,INT)VOID fl free pixels = ALIEN "FL_FREE_PIXELS"
   "#define FL_FREE_PIXELS(pixels,n) \"
   " fl_free_pixels((unsigned long *)pixels, n)"

@d macro fl set color leak =
PROC(INT)VOID fl set color leak = ALIEN "FL_SET_COLOR_LEAK"
   "#define FL_SET_COLOR_LEAK(flag) fl_set_color_leak(flag)"

@d macro fl getmcolor =
PROC(FLCOLOR,REF INT,REF INT,REF INT)BITS fl getmcolor =
   ALIEN "FL_GETMCOLOR"
      "#define FL_GETMCOLOR(ind,red,green,blue) \"
      " fl_getmcolor(ind, (int *)red, (int *)green, (int *)blue)"

@d macro fl get pixel =
PROC(FLCOLOR)BITS fl get pixel = ALIEN "FL_GET_PIXEL"
   "#define FL_GET_PIXEL(index) fl_get_pixel(index)"

@d macro fl get icm color =
PROC(FLCOLOR,REF INT,REF INT,REF INT)VOID fl get icm color =
   ALIEN "FL_GET_ICM_COLOR"
      "#define FL_GET_ICM_COLOR(index,r,g,b) \"
      " fl_get_icm_color(index, (int *)r, (int *)g, (int *)b)"

@d macro fl set icm color =
PROC(FLCOLOR,INT,INT,INT)VOID fl set icm color = ALIEN "FL_SET_ICM_COLOR"
   "#define FL_SET_ICM_COLOR(index,r,g,b) \"
   " fl_set_icm_color(index, r, g, b)"

@d macro fl color =
PROC(FLCOLOR)VOID fl color = ALIEN "FLCOLOR"
   "#define FLCOLOR(color) fl_color(color)"

@d macro fl bk color =
PROC(FLCOLOR)VOID fl bk color = ALIEN "FL_BK_COLOR"
   "#define FL_BK_COLOR(color) fl_bk_color(color)"

@d macro fl text color =
PROC(FLCOLOR)VOID fl text color = ALIEN "FL_TEXTCOLOR"
   "#define FL_TEXTCOLOR(color) fl_textcolor(color)"

@d macro fl bk textcolor =
PROC(FLCOLOR)VOID fl bk textcolor = ALIEN "FL_BK_TEXTCOLOR"
   "#define FL_BK_TEXTCOLOR(color) fl_bk_textcolor(color)"

@d macro fl set gamma =
PROC(REAL,REAL,REAL)VOID fl set gamma = ALIEN "FL_SET_GAMMA"
 "#define FL_SET_GAMMA(r,g,b) fl_set_gamma(r,g,b)"

@ Utilities for new objects.

@d macro dummy fl form =
PROC REF FLFORM dummy flform = ALIEN "GET_CURRENT_FORM"
	"typedef struct"
	"{"
	"    int reserved[60];"
	"}FL_FORM;"
	"extern FL_FORM *fl_current_form;"
	"FL_FORM *get_current_form(void)"
	"{"
	"  return fl_current_form;"
	"}"

@d macro fl current form =
macro dummy fl form;
PROC fl current form = REF FLFORM:
BEGIN
	OP(CPTR)REF FLFORM TOFLFORM = BIOP 99;
	TOFLFORM CPTR CODE
   "(void *)get_current_form();"
END

@d macro fl add object =
PROC(REF FLFORM,REF FLOBJECT)VOID fl add object =
   ALIEN "FL_ADD_OBJECT"
      "#define FL_ADD_OBJECT(form,ob) \"
      " fl_add_object((void *)form, (void *)ob)"

@d macro fl addto form =
PROC(REF FLFORM)VOID fl addto form = ALIEN "FL_ADDTO_FORM"
   "#define FL_ADDTO_FORM(form) fl_addto_form((void *)form)"

@d macro fl make object =
macro op fl handler to pdesc;
PROC fl make object =
   (INT class,type,FLCOORD x,y,w,h,
    []CHAR label,FLHANDLER handler)REF FLOBJECT:
BEGIN
   PROC(INT,INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,
        VECTOR[]CHAR,CPTR)REF FLOBJECT
      fl fl make object = ALIEN "FL_MAKE_OBJECT"
      "#define FL_MAKE_OBJECT(class,type,x,y,w,h,label,handler) \"
      " (void *)fl_make_object(class, type, x, y, w, h,\"
      " A_VC_charptr(label), (void *)handler)";
   fl fl make object(class,type,x,y,w,h,
   MAKERVC label,cp OF FLHANDLERTOPDESC handler)
END #fl make object#

@d macro fl set coordunit =
PROC(INT)VOID fl set coordunit = ALIEN "FL_SET_COORDUNIT"
   "#define FL_SET_COORDUNIT(point) fl_set_coordunit(point)"

@d macro fl set border width =
PROC(INT)VOID fl set border width = ALIEN "FL_SET_BORDER_WIDTH"
   "#define FL_SET_BORDER_WIDTH(point) \"
   " fl_set_border_width(point)"

@d macro fl flip yorigin =
PROC fl flip yorigin = VOID: CODE "fl_flip_yorigin();"

@d macro fl get coordunit =
PROC fl get coordunit = INT: INT CODE "RESULT=fl_get_coordunit();"

@d macro fl get border width =
PROC fl get border width = INT: INT CODE "RESULT=fl_get_border_width();"

@ Miscellaneous routines.

@d macro fl ringbell percent =
PROC(INT)VOID fl ringbell percent = ALIEN "FL_RINGBELL"
   "#define FL_RINGBELL(percent) fl_ringbell(percent)"

@d macro fl get time =
PROC(REF INT,REF INT)VOID fl gettime = ALIEN "FL_GETTIME"
   "#define FL_GETTIME(sec,usec) \"
   "   fl_gettime((long *)sec, (long *)usec)"

@d macro fl now =
PROC fl now = []CHAR:
   CSTRTORVC CSTR CODE "RESULT=(void *)fl_now();"

@d macro fl who am i =
PROC fl whoami = []CHAR:
   CSTRTORVC CSTR CODE "RESULT=(char *)fl_whoami();"

@d macro fl mouse button =
PROC fl mouse button = INT:
   INT CODE "RESULT=fl_mouse_button();"

@m fl max menu choice items = 128

@2X Window dependent stuff.
The first mode is compiler dependent.@^compiler dependencies@>

@d macro mode flappeventcb =
macro mode xevent;
MODE FLAPPEVENTCB = PROC(REF XEVENT,CPTR)INT

@ This operator converts the callback to a procedure descriptor.

@d macro op fl app event cb to pdesc =
macro mode flappeventcb;
OP(FLAPPEVENTCB)PDESC FLAPPEVENTCBTOPDESC = BIOP 99

@ More modes.

@m fl max fontsizes = 10

@d macro mode flresource =
MODE FLRESOURCE =
	STRUCT(CSTR res name,    # resource name                        #
               res class,   # resource class                       #
          INT type,         # fl int, fl float, fl bool,fl string  #
          CPTR var,         # address for the variable             #
          CSTR defval,      # default setting in string form       #
          INT nbytes)      # used only for strings                #

@d macro mode flcmdopt =
macro mode xrmoptiondescrec;
MODE FLCMDOPT = XRMOPTIONDESCREC

@d macro mode flfont =
macro mode xfontstruct;
MODE FLFONT =
	STRUCT(STRUCT fl max fontsizes REF XFONTSTRUCT fs,# cached fontstruct  #
          STRUCT fl max fontsizes INT16 size,        # cached sizes       #
          INT16 nsize,                               # cached so far      #
          STRUCT 80 CHAR fname)                      # without size info  #

@ Draw mode.

@m fl xor = gx xor
@m fl copy = gx copy
@m fl and = gx and

@m fl mindepth = 1

@m fl illegal visual = -1
@m fl static grey    = static grey
@m fl grey scale     = grey scale
@m fl static color   = static color
@m fl pseudo color   = pseudo color
@m fl true color     = true color
@m fl direct color   = direct color
@m fl default visual = 10   # special request #

@m fl north         = northgravity
@m fl northeast     = northeastgravity
@m fl northwest     = northwestgravity
@m fl south         = southgravity
@m fl southeast     = southeastgravity
@m fl southwest     = southwestgravity
@m fl east          = eastgravity
@m fl west          = westgravity
@m fl nogravity     = forgetgravity
@m fl forgetgravity = forgetgravity

@m fl visual is grey(v) = (v = fl greyscale OR v = fl staticgrey)
@m fl visual is rgb(v) = (v = fl truecolor OR v = fl directcolor)

@ The following macros are written as procedures to ensure that their yields
are only produced after the Xforms library has been initialised.

@d macro fl root =
PROC fl root = WINDOW:
   WINDOW CODE
   "extern unsigned fl_root; RESULT=fl_root;"   # root window #

@d macro fl vroot =
PROC fl vroot = WINDOW:
   WINDOW CODE
   "extern unsigned fl_vroot; RESULT=fl_vroot;" # virtual root window #

@d macro fl scr h =
PROC fl scrh = INT:
   INT CODE
   "extern int fl_scrh; RESULT=fl_scrh;" # screen height #

@d macro fl scr w =
PROC fl scrw = INT:
   INT CODE
   "extern int fl_scrw; RESULT=fl_scrw;" # screen width #

@d macro fl vmode =
REF INT fl vmode = ALIEN "fl_vmode"
   "extern int fl_vmode;"

@d macro dummy fl state =
macro mode fl state;
macro fl vmode;
PROC REF FLSTATE dummy flstate = ALIEN "GET_FL_STATE"
   "typedef struct"
   "{"
   "    unsigned int *xvinfo;"
   "    unsigned int *cur_fnt;"
   "    unsigned int colormap;"
   "    unsigned int trailblazer;"
   "    int vclass, depth;"
   "    int rgb_bits;"
   "    int dithered;"
   "    int pcm;"
   "    unsigned int *gc[16];"
   "    unsigned int *textgc[16];"
   "    unsigned int *dimmedGC;"
   "    unsigned long lut[1024];"
   "    unsigned int rshift, rmask, rbits;"
   "    unsigned int gshift, gmask, gbits;"
   "    unsigned int bshift, bmask, bbits;"
   "}FL_State;"
	"FL_State fl_state[];"
	"FL_State *get_fl_state(void)"
	"{"
	"	FL_State *fs = &fl_state[fl_vmode];"
	"   return fs;"
	"}"

@d macro fl get fl state =
macro dummy fl state;
PROC fl get flstate = REF FLSTATE:
	REF FLSTATE CODE
	"RESULT=(void *)get_fl_state();"

@d macro fl screen =
REF INT fl screen = ALIEN "fl_screen"
   "extern void *fl_screen;"

@d macro fl default window =
macro fl get fl state;
PROC fl default window = WINDOW: trailblazer OF fl get flstate

@d macro fl ul magic char =
PROC fl ul magic char = []CHAR:
   CSTRTORVC CCHARPTRTOCSTR CCHARPTR
   CODE "extern char *fl_ul_magic_char; RESULT=fl_ul_magic_char;"

@d macro fl mode capable =
PROC(INT,INT)INT fl mode capable = ALIEN "FL_MODE_CAPABLE"
   "#define FL_MODE_CAPABLE(mode,warn) \"
   "   fl_mode_capable(mode,warn)"

@2Some basic drawing routines.
Rectangles.

@d macro fl rectangle =
PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,FLCOLOR)VOID
   fl rectangle = ALIEN "FL_RECTANGLE"
   "#define FL_RECTANGLE(fill,x,y,w,h,c) \"
   "   fl_rectangle(fill, x, y, w, h, c)"

@d macro fl rectbound =
PROC(FLCOORD,FLCOORD,FLCOORD,FLCOORD,FLCOLOR)VOID fl rectbound =
   ALIEN "FL_RECTBOUND"
   "#define FL_RECTBOUND(x,y,w,h,c) fl_rectbound(x, y, w, h, c)"

@d macro fl rectf =
macro fl rectangle;
PROC fl rectf = (FLCOORD x,y,w,h,FLCOLOR c)VOID:
	fl rectangle(1,x,y,w,h,c)

@d macro fl rect =
macro fl rectangle;
PROC fl rect = (FLCOORD x,y,w,h,FLCOLOR c)VOID:
	fl rectangle(0,x,y,w,h,c)

@ Rectangle with rounded-corners.

@d macro fl roundrectangle =
PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,FLCOLOR)VOID
   fl roundrectangle = ALIEN "FL_ROUNDRECTANGLE"
   "#define FL_ROUNDRECTANGLE(fill,x,y,w,h,c) \"
   "   fl_roundrectangle(fill, x, y, w, h, c)"

@d macro fl roundrectf =
macro fl roundrectangle;
PROC fl roundrectf = (FLCOORD x,y,w,h,FLCOLOR c)VOID:
	fl roundrectangle(1,x,y,w,h,c)

@d macro fl roundrect =
macro fl roundrectangle;
PROC fl roundrect = (FLCOORD x,y,w,h,FLCOLOR c)VOID:
	fl roundrectangle(0,x,y,w,h,c)

@ General polygon and polylines.

@d macro fl polygon =
macro mode flpoint;
PROC fl polygon = (INT fill,[]FLPOINT pt,FLCOLOR color)VOID:
BEGIN
   PROC(INT,VECTOR[]FLPOINT,FLCOLOR)VOID fl fl polygon =
      ALIEN "FL_POLYGON"
      "#define FL_POLYGON(fill,xpoint,color) \"
      "   fl_polygon(fill, (void *)(xpoint).data, (xpoint).upb, color)";
   VECTOR[UPB pt-LWB pt+1]FLPOINT lpt;
   FOR i TO UPB lpt DO lpt[i]:=pt[@@1][i] OD;
   fl fl polygon(fill,lpt,color)
END #fl polygon#

@d macro fl polyf =
macro fl polygon;
PROC fl polyf = ([]FLPOINT pt,FLCOLOR color)VOID: fl polygon(1,pt,color)

@d macro fl polyl =
macro fl polygon;
PROC fl polyl = ([]FLPOINT pt,FLCOLOR color)VOID: fl polygon(0,pt,color)

@d macro fl polybound =
macro fl polyf;
macro fl polyl;
PROC fl polybound = ([]FLPOINT pt,FLCOLOR color)VOID:
(
	fl polyf(p,c);
	fl polyl(p,fl black)
)

@d macro fl lines =
macro mode flpoint;
PROC fl lines = ([]FLPOINT pt,FLCOLOR color)VOID:
BEGIN
   PROC(VECTOR[]FLPOINT,FLCOLOR)VOID fl fl lines =
      ALIEN "FL_LINES"
      "#define FL_LINES(points,color) \"
      "   fl_lines((void *)((points).data), (points).upb, color)";
   VECTOR[UPB pt-LWB pt+1]FLPOINT lpt;
   FOR i TO UPB lpt DO lpt[i]:=pt[@@1][i] OD;
   fl fl lines(lpt,color)
END #fl lines#

@d macro fl line =
PROC(FLCOORD,FLCOORD,FLCOORD,FLCOORD,FLCOLOR)VOID
   fl line = ALIEN "FL_LINE"
   "#define FL_LINE(x1,y1,x2,y2,color) \"
   "   fl_line(x1, y1, x2, y2, color)"

@d macro fl point =
PROC(FLCOORD,FLCOORD,FLCOLOR)VOID fl point = ALIEN "FL_POINT"
   "#define FL_POINT(x,y,color) fl_point(x, y, color)"

@d macro fl points =
macro mode flpoint;
PROC fl points = ([]FLPOINT p,FLCOLOR color)VOID:
BEGIN
   PROC(VECTOR[]FLPOINT,FLCOLOR)VOID fl fl points = ALIEN "FL_POINTS"
      "#define FL_POINTS(p,color) \"
      "   fl_points((void *)((p).data), (p).upb, color)";
   VECTOR[UPB p-LWB p+1]FLPOINT lp;
   FOR i TO UPB lp DO lp[i]:=p[@@1][i] OD;
   fl fl points(lp,color)
END #fl points#

@d macro fl dashedlinestyle =
macro op vz;
PROC fl dashedlinestyle = ([]CHAR dash)VOID:
BEGIN
   PROC(VECTOR[]CHAR)VOID fl fl dashedlinestyle =
      ALIEN "FL_DASHEDLINESTYLE"
      "#define FL_DASHEDLINESTYLE(dash) \"
      "   fl_dashedlinestyle(A_VC_charptr(dash), (dash).upb)";
   fl fl dashedlinestyle(VZ dash)
END #fl dashedlinestyle#

@d macro fl update display =
PROC(INT)VOID fl update display = ALIEN "FL_UPDATE_DISPLAY"
   "#define FL_UPDATE_DISPLAY(val) fl_update_display(val)"

@d macro fl diagline =
macro fl line;
PROC fl diagline = (FLCOORD x,y,w,h,FLCOLOR c)VOID: fl line(x,y,x+w-1,y+h-1,c)

@ Line attributes.

@m fl solid = linesolid
@m fl userdash = lineonoffdash
@m fl userdoubledash = linedoubledash
@m fl dot = (line double dash + 1)
@m fl dotdash = (line double dash +2)
@m fl dash = (line double dash + 3)
@m fl longdash = (line double dash + 4)

@m fl set linewidth = fl linewidth
@m fl set linestyle = fl linestyle
@m fl set drawmode =  fl drawmode

@d macro fl line width =
PROC(INT)VOID fl linewidth = ALIEN "FL_LINEWIDTH"
   "#define FL_LINEWIDTH(lw) fl_linewidth(lw)"

@d macro fl line style =
PROC(INT)VOID fl linestyle = ALIEN "FL_LINESTYLE"
   "#define FL_LINESTYLE(style) fl_linestyle(style)"

@d macro fl draw mode =
PROC(INT)VOID fl drawmode = ALIEN "FL_DRAWMODE"
   "#define FL_DRAWMODE(mode) fl_drawmode(mode)"

@d macro fl get line width =
PROC fl get linewidth = INT: INT CODE "RESULT=fl_get_linewidth();"

@d macro fl get line style =
PROC fl get linestyle = INT: INT CODE "RESULT=fl_get_linestyle();"

@d macro fl get draw mode =
PROC fl get drawmode = INT: INT CODE "RESULT=fl_get_drawmode();"

@ Ellipses.

@d macro fl oval =
PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,FLCOLOR)VOID
   fl oval = ALIEN "FL_OVAL"
   "#define FL_OVAL(fill,x,y,w,h,c) fl_oval(fill, x, y, w, h, c)"

@d macro fl ovalbound =
PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,FLCOLOR)VOID
   fl ovalbound = ALIEN "FL_OVALBOUND"
   "#define FL_OVALBOUND(x,y,w,h,c) \"
   "   fl_ovalbound(x, y, w, h, c)"

@d macro fl oval arc =
PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,FLCOLOR)VOID
   fl ovalarc = ALIEN "FL_OVALARC"
   "#define FL_OVALARC(fill,x,y,w,h,st,fn,color) \"
   "   fl_ovalarc(fill, x, y, w, h, st, fn, color)"

@d macro fl ovalf =
macro fl oval;
PROC fl ovalf = (FLCOORD x,y,w,h,FLCOLOR c)VOID: fl oval(1,x,y,w,h,c)
 
@d macro fl ovall =
macro fl oval;
PROC fl ovall = (FLCOORD x,y,w,h,FLCOLOR c)VOID: fl oval(0,x,y,w,h,c)

@d macro fl circf =
macro fl oval;
PROC fl circf = (FLCOORD x,y,r,FLCOLOR color)VOID: fl oval(1,x-r,y-r,2*r,2*r,color)

@d macro fl circ =
macro fl oval;
PROC fl circ = (FLCOORD x,y,r,FLCOLOR color)VOID: fl oval(0,x-r,y-r,2*r,2*r,color)

@ Arcs.

@d macro fl pie slice =
PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,
     INT,INT,FLCOLOR)VOID fl pieslice = ALIEN "FL_PIESLICE"
   "#define FL_PIESLICE(fill,x,y,w,h,th1,thf,color) \"
   "   fl_pieslice(fill, x, y, w, h, th1, thf, color)"

@d macro fl arcf =
macro fl pie slice;
PROC fl arcf = (FLCOORD x,y,r,INT a1,a2,FLCOLOR c)VOID:
	fl pie slice(1,x-r,y-r,2*r,2*r, a1,a2,c)

@d macro fl arc =
macro fl pie slice;
PROC fl arc = (FLCOORD x,y,r,INT a1,a2,FLCOLOR c)VOID:
	fl pie slice(0,x-r,y-r,2*r,2*r, a1,a2,c)

@ Miscellaneous stuff.

@d macro fl add vertex =
PROC(FLCOORD,FLCOORD)VOID fl add vertex =
   ALIEN "FL_ADD_VERTEX"
   "#define FL_ADD_VERTEX(x,y) fl_add_vertex(x, y)"

@d macro fl add float vertex =
PROC(SHORT REAL,SHORT REAL)VOID fl add float vertex =
   ALIEN "FL_ADD_FLOAT_VERTEX"
   "#define FL_ADD_FLOAT_VERTEX(x,y) \"
   "   fl_add_float_vertex(x, y)"

@d macro fl reset vertex =
PROC fl reset vertex = VOID: CODE "fl_reset_vertex();"

@d macro fl end line =
PROC fl endline = VOID: CODE "fl_endline();"

@d macro fl end polygon =
PROC fl endpolygon = VOID: CODE "fl_endpolygon();"

@d macro fl end closed line =
PROC fl endclosedline = VOID: CODE "fl_endclosedline();"

@d macro fl v2s =
PROC fl v2s = (VECTOR[]FLCOORD v)VOID: fl add vertex(v[1], v[2])

@d macro fl v2i =
PROC fl v2i = (VECTOR[]FLCOORD v)VOID: fl add vertex(v[1], v[2])

@d macro fl v2f =
PROC fl v2f = (VECTOR[]FLCOORD v)VOID:
   fl add float vertex(SHORTEN v[1], SHORTEN v[2])

@d macro fl v2d =
PROC fl v2d = (VECTOR[]FLCOORD v)VOID:
   fl add float vertex(SHORTEN v[1], SHORTEN v[2])

@d macro fl bgnline =
macro fl reset vertex;
PROC fl bgn line = VOID: fl reset vertex

@d macro fl bgnclosedline =
macro fl reset vertex;
PROC fl bgn closed line = VOID: fl reset vertex

@d macro fl bgnpolygon =
macro fl reset vertex;
PROC fl bgn polygon = VOID: fl reset vertex

@ High-level drawing routines.

@d macro fl drw frame =
PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,FLCOLOR)VOID
   fl drw frame = ALIEN "FL_DRW_FRAME"
   "#define FL_DRW_FRAME(styloe,x,y,w,h,color,bw) \"
   "   fl_drw_frame(style, x, y, w, h, color, bw)"

@d macro fl drw checkbox =
PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,FLCOLOR)VOID
   fl drw checkbox = ALIEN "FL_DRW_CHECKBOX"
   "#define FL_DRW_CHECKBOX(style,x,y,w,h,color,bw) \"
   "   fl_drw_checkbox(style, x, y, w, h, color, bw)"

@ Interfaces.

@d macro fl get fontstruct =
PROC(INT,INT)REF XFONTSTRUCT fl get fontstruct =
   ALIEN "FL_GET_FONTSTRUCT"
   "#define FL_GET_FONTSTRUCT(style,size) \"
   "   (void *) fl_get_fontstruct(style, size)"

@d macro fl get mouse =
PROC(REF FLCOORD,REF FLCOORD,REF BITS)WINDOW fl get mouse =
   ALIEN "FL_GET_MOUSE"
   "#define FL_GET_MOUSE(x,y,keymask) \"
   "   fl_get_mouse((int *)x, (int *)y, (unsigned int *)keymask)"

@d macro fl set mouse =
PROC(FLCOORD,FLCOORD)VOID fl set mouse = ALIEN "FL_SET_MOUSE"
   "#define FL_SET_MOUSE(x,y) fl_set_mouse(x,y)"

@d macro fl get win mouse =
PROC(WINDOW,REF FLCOORD,REF FLCOORD,REF BITS)WINDOW
   fl get win mouse = ALIEN "FL_GET_WIN_MOUSE"
   "#define FL_GET_WIN_MOUSE(win,x,y,keymask) \"
   "   fl_get_win_mouse(win, (int *)x, (int *)y, (unsigned *)keymask)"

@d macro fl get form mouse =
PROC(REF FLFORM,REF FLCOORD,REF FLCOORD,REF BITS)WINDOW
   fl get form mouse = ALIEN "FL_GET_FORM_MOUSE"
   "#define FL_GET_FORM_MOUSE(form,x,y,keymask) \"
   "   fl_get_form_mouse((void *)form,(int *)x,(int *)y,(unsigned *)keymask)"

@d macro fl win to form =
PROC(WINDOW)REF FLFORM fl win to form =
   ALIEN "FL_WIN_TO_FORM"
   "#define FL_WIN_TO_FORM(win) (void *)formfl_win_to_form(win)"

@d macro fl set form icon =
PROC(REF FLFORM,PIXMAP,PIXMAP)VOID fl set form icon =
   ALIEN "FL_SET_FORM_ICON"
   "#define FL_SET_FORM_ICON(form,icon,mask) \"
   "   fl_set_form_icon((void *)form,icon,mask)"

@d macro fl raise form =
macro x raise window;
macro fl display;
PROC fl raise form = (FLFORM f)VOID:
IF window OF f/=2r0 THEN xraisewindow(fl display,window OF f) FI

@d macro fl lower form =
macro x lower window;
macro fl display;
PROC fl lower form = (FLFORM f)VOID:
IF window OF f/=2r0 THEN xlowerwindow(fl display,window OF f) FI

@d macro fl set foreground =
macro x set foreground;
macro fl get pixel;
macro fl display;
PROC fl set foreground = (GC gc,FLCOLOR c)VOID:
   xsetforeground(fl display,gc,fl get pixel(c))

@d macro fl set background =
macro x set background;
macro fl get pixel;
macro fl display;
PROC fl set background = (GC gc,FLCOLOR c)VOID:
   xsetbackground(fl display,gc,fl get pixel(c))

@ General windowing support.

@d macro fl win create =
macro op vz;
PROC fl wincreate = ([]CHAR name)WINDOW:
BEGIN
   PROC(VECTOR[]CHAR)WINDOW fl fl wincreate = ALIEN "FL_WINCREATE"
      "#define FL_WINCREATE(name) fl_wincreate(A_VC_charptr(name))";
   fl fl wincreate(VZ name)
END #fl wincreate#

@d macro fl win show =
PROC(WINDOW)WINDOW fl win show = ALIEN "FL_WINSHOW"
   "#define FL_WINSHOW(win) fl_winshow(win)"

@d macro fl win open =
macro op vz;
PROC fl win open = ([]CHAR name)WINDOW:
BEGIN
   PROC(VECTOR[]CHAR)WINDOW fl fl winopen = ALIEN "FL_WINOPEN"
      "#define FL_WINOPEN(name) fl_winopen(A_VC_charptr(name))";
   fl fl winopen(VZ name)
END #fl winopen#

@d macro fl win hide =
PROC(WINDOW)VOID fl win hide = ALIEN "FL_WINHIDE"
   "#define FL_WINHIDE(win) fl_winhide(win)"

@d macro fl win close =
PROC(WINDOW)VOID fl win close = ALIEN "FL_WINCLOSE"
   "#define FL_WINCLOSE(win) fl_winclose(win)"

@d macro fl win set =
PROC(WINDOW)VOID fl win set = ALIEN "FL_WINSET"
   "#define FL_WINSET(win) fl_winset(win)"

@d macro fl win reparent =
PROC(WINDOW,WINDOW)INT fl win reparent = ALIEN "FL_WINREPARENT"
   "#define FL_WINREPARENT(win1, win2) fl_winreparent(win1,win2)"

@d macro fl win focus =
PROC(WINDOW)VOID fl win focus = ALIEN "FL_WINFOCUS"
   "#define FL_WINFOCUS(win) fl_winfocus(win)"

@d macro fl win get =
PROC fl win get = WINDOW: WINDOW CODE "RESULT=fl_winget();"

@d macro fl iconify =
PROC(WINDOW)INT fl iconify = ALIEN "FL_ICONIFY"
   "#define FL_ICONIFY(win) fl_iconify(win)"

@d macro fl win resize =
PROC(WINDOW,FLCOORD,FLCOORD)VOID fl win resize =
   ALIEN "FL_WINRESIZE"
   "#define FL_WINRESIZE(win,x,y) \"
   "   fl_winresize(win, x, y)"

@d macro fl win move =
PROC(WINDOW,FLCOORD,FLCOORD)VOID fl win move =
   ALIEN "FL_WINMOVE"
   "#define FL_WINMOVE(win,x,y) \"
   "   fl_winmove(win, x, y)"

@d macro fl win reshape =
PROC(WINDOW,FLCOORD,FLCOORD,FLCOORD,FLCOORD)VOID fl win reshape =
   ALIEN "FL_WINRESHAPE"
   "#define fl_winreshape(win,x,y,w,h) \"
   "   fl_winreshape(win, x, y, w, h)"

@d macro fl win icon =
PROC(WINDOW,PIXMAP,PIXMAP)VOID fl win icon = ALIEN "FL_WINICON"
   "#define FL_WINICON(win,winpix,iconpix) \"
   "   fl_winicon(win, winpix, iconpix)"

@d macro fl win background =
PROC(WINDOW,FLCOLOR)VOID fl winbackground = ALIEN "FL_WINBACKGROUND"
   "#define FL_WINBACKGROUND(win,color) fl_winbackground(win, color)"

@d macro fl win step unit =
PROC(WINDOW,FLCOORD,FLCOORD)VOID fl win step unit =
   ALIEN "FL_WINSTEPUNIT"
   "#define FL_WINSTEPUNIT(win,x,y) \"
   "   fl_winstepunit(win, x, y)"

@d macro fl win is valid =
PROC(WINDOW)BOOL fl winisvalid = ALIEN "FL_WINISVALID"
   "#define FL_WINISVALID(win) fl_winisvalid(win)"

@d macro fl win title =
macro op vz;
PROC fl win title = (WINDOW win,[]CHAR title)VOID:
BEGIN
   PROC(WINDOW,VECTOR[]CHAR)VOID fl fl wintitle = ALIEN "FL_WINTITLE"
      "#define FL_WINTITLE(win,title) \"
      "   fl_wintitle(win,A_VC_charptr(title))";
   fl fl wintitle(win,VZ title)
END #fl wintitle#

@d macro fl win icon title =
macro op vz;
PROC fl win icon title = (WINDOW win,[]CHAR title)VOID:
BEGIN
   PROC(WINDOW,VECTOR[]CHAR)VOID fl fl winicontitle =
      ALIEN "FL_WINICONTITLE"
      "#define FL_WINICONTITLE(win,title) \"
      "   fl_winicontitle(win,A_VC_charptr(title))";
   fl fl winicontitle(win,VZ title)
END #fl winicontitle#

@d macro fl win position =
PROC(FLCOORD,FLCOORD)VOID fl winposition = ALIEN "FL_WINPOSITION"
   "#define FL_WINPOSITION(x,y) fl_winposition(x, y)"

@d macro fl win min size =
PROC(WINDOW,FLCOORD,FLCOORD)VOID fl winminsize = ALIEN "FL_WINMINSIZE"
   "#define FL_WINMINSIZE(win,x,y) \"
   "   fl_winminsize(win, x, y)"

@d macro fl win max size =
PROC(WINDOW,FLCOORD,FLCOORD)VOID fl winmaxsize = ALIEN "FL_WINMAXSIZE"
   "#define FL_WINMAXSIZE(win,x,y) \"
   "   fl_winmaxsize(win, x, y)"

@d macro fl win aspect =
PROC(WINDOW,FLCOORD,FLCOORD)VOID fl win aspect = ALIEN "FL_WINASPECT"
   "#define FL_WINASPECT(win,x,y) \"
   "   fl_winaspect(win, x, y)"

@d macro fl reset winconstraints =
PROC(WINDOW)VOID fl reset winconstraints =
   ALIEN "FL_RESET_WINCONSTRAINTS"
   "#define FL_RESET_WINCONSTRAINTS(win) fl_reset_winconstraints(win)"

@d macro fl win size =
PROC(FLCOORD,FLCOORD)VOID fl win size = ALIEN "FL_WINSIZE"
   "#define FL_WINSIZE(x,y) fl_winsize(x, y)"

@d macro fl pref winsize =
macro fl win size;
PROC fl pref winsize = (FLCOORD x,y)VOID: fl win size(x,y)

@d macro fl initial win size =
PROC(FLCOORD,FLCOORD)VOID fl initial win size =
   ALIEN "FL_INITIAL_WINSIZE"
   "#define FL_INITIAL_WINSIZE(x,y) \"
   "   fl_initial_winsize(x, y)"

@d macro fl initial winstate =
PROC(INT)VOID fl initial winstate = ALIEN "FL_INITIAL_WINSTATE"
   "#define FL_INITIAL_WINSTATE(win) fl_initial_winstate(win)"

@d macro fl create colormap =
PROC(REF XVISUALINFO,INT)COLORMAP fl create colormap =
   ALIEN "FL_CREATE_COLORMAP"
   "#define FL_CREATE_COLORMAP(xvinfo,n) \"
   "   fl_create_colormap((void *)xvinfo, n)"

@d macro fl win geometry =
PROC(FLCOORD,FLCOORD,FLCOORD,FLCOORD)VOID fl win geometry =
   ALIEN "FL_WINGEOMETRY"
   "#define FL_WINGEOMETRY(x,y,w,h) fl_wingeometry(x,y,w,h)"

@d macro fl initial win geometry =
PROC(FLCOORD,FLCOORD,FLCOORD,FLCOORD)VOID fl initial win geometry =
   ALIEN "FL_INITIAL_WINGEOMETRY"
   "#define FL_INITIAL_WINGEOMETRY(x,y,w,h) \"
   "   fl_initial_wingeometry(x,y,w,h)"

@d macro fl no border proc =
PROC fl noborder proc = VOID: CODE "fl_noborder();"

@d macro fl transient proc =
PROC fl transient proc = VOID: CODE "fl_transient();"

@d macro fl get win size =
PROC(WINDOW,REF FLCOORD,REF FLCOORD)VOID fl get win size =
   ALIEN "FL_GET_WINSIZE"
   "#define FL_GET_WINSIZE(win,x,y) \"
   "   fl_get_winsize(win, x, y)"

@d macro fl get win origin =
PROC(WINDOW,REF FLCOORD,REF FLCOORD)VOID fl get win origin =
   ALIEN "FL_GET_WINORIGIN"
   "#define FL_GET_WINORIGIN(win,x,y) \"
   "   fl_get_winorigin(win, x, y)"

@d macro fl get win geometry =
PROC(WINDOW,REF FLCOORD,REF FLCOORD,REF FLCOORD,REF FLCOORD)VOID
   fl get win geometry = ALIEN "FL_GET_WINGEOMETRY"
   "#define FL_GET_WINGEOMETRY(win,x,y,w,h) \"
   "   fl_get_wingeometry(win,(int *)x,(int *)y,(int *)w,(int *)h)"

@ The window to which an object belongs. For drawing.

@d macro fl get real object window =
PROC(REF FLOBJECT)WINDOW fl get real object window =
   ALIEN "FL_GET_REAL_OBJECT_WINDOW"
   "#define FL_GET_REAL_OBJECT_WINDOW(ob) \"
   "   fl_get_real_object_window((void *)ob)"

@ All registerable events, including Client Message.

@m fl all event = (keypressmask OR keyreleasemask OR
                    buttonpressmask OR buttonreleasemask OR
                    enterwindowmask OR leavewindowmask OR
                    buttonmotionmask OR pointermotionmask)

@2Timer related.

@m fl timer event = 16r40000000

@d macro fl xnext event =
macro mode xevent;
PROC(REF XEVENT)INT fl xnext event = ALIEN "FL_XNEXTEVENT"
   "#define FL_XNEXTEVENT(xev) fl_XNextEvent((void *)xev)"

@d macro fl xpeek event =
macro mode xevent;
PROC(REF XEVENT)INT fl xpeek event = ALIEN "FL_XPEEKEVENT"
   "#define FL_XPEEKEVENT(xev) fl_XPeekEvent((void *)xev)"

@d macro fl x events queued =
PROC(INT)INT fl xevents queued = ALIEN "FL_XEVENTSQUEUED"
   "#define FL_XEVENTSQUEUED(mode) fl_XEventsQueued(mode)"

@d macro fl xput back event =
macro mode xevent;
PROC(REF XEVENT)VOID fl xputbackevent = ALIEN "FL_XPUTBACKEVENT"
   "#define FL_XPUTBACKEVENT(xev) fl_XPutBackEvent((void *)xev)"

@d macro fl last event =
macro mode xevent;
PROC fl last event = REF XEVENT:
   REF XEVENT CODE "RESULT=(void *)fl_last_event();"

@d macro fl set event callback =
macro mode flappeventcb;
macro op fl app event cb to pdesc;
PROC fl set event callback = (FLAPPEVENTCB cb,CPTR udata)CPTR:
BEGIN
   PROC(CPTR,CPTR)CPTR fl fl set event callback =
      ALIEN "FL_SET_EVENT_CALLBACK"
      "#define FL_SET_EVENT_CALLBACK(callback,data) \"
      " (void *)fl_set_event_callback((void *)callback, (void *)data)";
   fl fl set event callback(cp OF FLAPPEVENTCBTOPDESC cb,udata)
END #fl set event callback#

@d macro fl set idle callback =
macro mode flappeventcb;
macro op fl app event cb to pdesc;
PROC fl set idle callback = (FLAPPEVENTCB cb,CPTR udata)CPTR:
BEGIN
   PROC(CPTR,CPTR)CPTR fl fl set idle callback =
      ALIEN "FL_SET_IDLE_CALLBACK"
      "#define FL_SET_IDLE_CALLBACK(callback,data) \"
      "   (void *)fl_set_idle_callback((void *)callback, (void *)data)";
   fl fl set idle callback(cp OF FLAPPEVENTCBTOPDESC cb,udata)
END #fl set idle callback#

@d macro fl addto selected xevent =
PROC(WINDOW,BITS)BITS fl addto selected xevent =
   ALIEN "FL_ADDTO_SELECTED_XEVENT"
   "#define FL_ADDTO_SELECTED_XEVENT(win,mask) \"
   "   fl_addto_selected_xevent(win, mask)"

@d macro fl remove selected xevent =
PROC(WINDOW,BITS)BITS fl remove selected xevent =
   ALIEN "FL_REMOVE_SELECTED_XEVENT"
   "#define FL_REMOVE_SELECTED_XEVENT(win,mask) \"
   "   fl_remove_selected_xevent(win,mask)"

@d macro fl set idle delta =
PROC(INT)VOID fl set idle delta = ALIEN "FL_SET_IDLE_DELTA"
   "#define FL_SET_IDLE_DELTA(msec) fl_set_idle_delta(msec)"

@ Group some WM stuff into a structure for easy maintainance.

@m fl wm shift = 1
@m fl wm normal = 2

@d macro fl add event callback =
macro mode flappeventcb;
macro op fl app event cb to pdesc;
PROC fl add event callback =
   (WINDOW win,INT type,FLAPPEVENTCB cb,CPTR data)CPTR:
BEGIN
   PROC(WINDOW,INT,CPTR,CPTR)CPTR
      fl fl add event callback = ALIEN "FL_ADD_EVENT_CALLBACK"
      "#define FL_ADD_EVENT_CALLBACK(win,type,cb,data) \"
      "(void *)fl_add_event_callback(win,type,(void *)cb,data)";
   fl fl add event callback(win,type,cp OF FLAPPEVENTCBTOPDESC cb,data)
END #fl add event callback#

@d macro fl remove event callback =
PROC(WINDOW,INT)VOID fl remove event callback =
   ALIEN "FL_REMOVE_EVENT_CALLBACK"
   "#define FL_REMOVE_EVENT_CALLBACK(win,xev_type) \"
   "   fl_remove_event_callback(win, xev_type)"

@d macro fl activate event callbacks =
PROC(WINDOW)VOID fl activate event callbacks =
   ALIEN "FL_ACTIVATE_EVENT_CALLBACKS"
   "#define FL_ACTIVATE_EVENT_CALLBACKS(win) \"
   "   fl_activate_event_callbacks(win)"

@d macro fl print xevent name =
macro mode xevent;
macro op vz;
PROC fl print xevent name = ([]CHAR where,REF XEVENT xev)REF XEVENT:
BEGIN
   PROC(VECTOR[]CHAR,REF XEVENT)REF XEVENT fl fl print xevent name =
      ALIEN "FL_PRINT_XEVENT_NAME"
      "#define FL_PRINT_XEVENT_NAME(where,xev) \"
      "(void *)fl_print_xevent_name(A_VC_charptr(where),(void *)xev)";
   fl fl print xevent name(VZ where,xev)
END #fl print xevent name#

@m metakey down(mask) = (mask & mod1 mask)
@m shiftkey down(mask) = (mask & shift mask)
@m controlkey down(mask) = (mask & control mask)
@m button down(mask) = (mask & button1 mask OR
                               mask & button2 mask OR
                               mask & button3 mask)

@2Resources.

@m fl none =  0
@m fl short = 10
@m fl bool = 11
@m fl int = 12
@m fl long = 13
@m fl float = 14
@m fl string = 15

@d macro fl display =
PROC fl display = DISPLAY:
   DISPLAY CODE
   "extern void *fl_display_(void); RESULT=(void *)fl_display_();"

@d macro fl initialise =
macro mode flcmdopt;
macro op vz;
PROC fl initialise =
   (REF INT argc, CCHARPTRPTR argv,
    []CHAR class, REF FLCMDOPT opt, INT n)DISPLAY:
BEGIN
   PROC(REF INT,CCHARPTRPTR,VECTOR[]CHAR,REF FLCMDOPT,INT)DISPLAY
      fl initialize = ALIEN "FL_INITIALIZE"
      "#define FL_INITIALIZE(argc,argv,appclass,app_opt,n) \"
      "   (void *)fl_initialize((int *)argc,(char **)argv,\"
      "   (char *)(appclass).data,(void *)app_opt, n)";
   fl initialize(argc,argv,VZ class,opt,n)
END #fl initialize#

@d macro fl init =
PROC fl init = DISPLAY: DISPLAY CODE "RESULT=(void *)fl_init();"

@d macro fl finish =
PROC fl finish = VOID: CODE "fl_finish();"

@d macro fl get resource =
macro op vz;
PROC fl get resource =
   ([]CHAR name,class,
    INT type,
    []CHAR defval,
    CPTR val,INT nbytes)[]CHAR:
BEGIN
   PROC(VECTOR[]CHAR,VECTOR[]CHAR,INT,VECTOR[]CHAR,CPTR,INT)CPTR
      fl fl get resource = ALIEN "FL_GET_RESOURCE"
      "#define FL_GET_RESOURCE(name,class,type,defval,val,nbytes) \"
      "(void *)fl_get_resource(A_VC_charptr(name),\"
      "                        A_VC_charptr(class),\"
      "                        type,A_VC_charptr(defval),\"
      "                        (void *)val,nbytes)";
   CPTRTORVC fl fl get resource(
      VZ name,VZ class,type,VZ defval,val,nbytes
   )
END #fl get resource#

@d macro fl set resource =
macro op vz;
PROC fl set resource = ([]CHAR str,val)VOID:
BEGIN
   PROC(VECTOR[]CHAR,VECTOR[]CHAR)VOID fl fl set resource =
      ALIEN "FL_SET_RESOURCE"
      "#define FL_SET_RESOURCE(str,val) \"
      "   fl_set_resource(A_VC_charptr(str), A_VC_charptr(val))";
   fl fl set resource(VZ str,VZ val)
END #fl set resource#

@d macro fl get app resources =
macro mode flresource;
PROC(REF FLRESOURCE,INT)VOID fl get app resources =
   ALIEN "FL_GET_APP_RESOURCES"
   "#define FL_GET_APP_RESOURCES(res,nres) \"
   "   fl_get_app_resources((void *), nres)"

@d macro fl set graphics mode =
PROC(INT,INT)VOID fl set graphics mode =
   ALIEN "FL_SET_GRAPHICS_MODE"
   "#define FL_SET_GRAPHICS_MODE(mode,t) \"
   "   fl_set_graphics_mode(mode, t)"

@d macro fl set visualid =
PROC(INT)VOID fl set visualid = ALIEN "FL_SET_VISUALID"
   "#define FL_SET_VISUALID(id) fl_set_visualID(id)"

@d macro fl key sym pressed =
PROC(INT)INT fl key sym pressed = ALIEN "FL_KEYSYM_PRESSED"
   "#define FL_KEYSYM_PRESSED(keysym) fl_keysym_pressed(keysym)"

@d macro fl set defaults =
macro mode fliopt;
PROC(BITS,REF FLIOPT)VOID fl set defaults =
   ALIEN "FL_SET_DEFAULTS"
   "#define FL_SET_DEFAULTS(mask,flopt) \"
   "   fl_set_defaults(mask, (void *)flopt)"

@d macro fl set tab stop =
macro op vz;
PROC fl set tab stop = ([]CHAR s)VOID:
BEGIN
   PROC(VECTOR[]CHAR)VOID fl fl set tabstop = ALIEN "FL_SET_TABSTOP"
      "#define FL_SET_TABSTOP(s) fl_set_tabstop(A_VC_charptr(s))";
   fl fl set tabstop(VZ s)
END #fl set tabstop#

@d macro fl get defaults =
macro mode fliopt;
PROC(REF FLIOPT)VOID fl get defaults =
   ALIEN "FL_GET_DEFAULTS"
   "#define FL_GET_DEFAULTS(iopt) fl_get_defaults((void *)iopt)"

@d macro fl get visual depth =
PROC fl get visual depth = INT:
   INT CODE "RESULT=fl_get_visual_depth();"

@d macro fl vclass name =
PROC fl vclass name = (INT class)[]CHAR:
BEGIN
   PROC(INT)CPTR fl fl vclass name = ALIEN "FL_VCLASS_NAME"
      "#define FL_VCLASS_NAME(class) (void *)fl_vclass_name(class)";
   CPTRTORVC fl fl vclass name(class)
END #fl vclass name#

@d macro fl vclass val =
PROC fl vclass val = ([]CHAR class)INT:
BEGIN
   PROC(VECTOR[]CHAR)INT fl fl vclass val = ALIEN "fl_vclass_val"
      "#define FL_VCLASS_VAL(class) \"
      "   fl_vclass_val(A_VC_charptr(class))";
   fl fl vclass val(MAKERVC class)
END #fl vclass val#

@d macro fl set ul property =
PROC(INT,INT)VOID fl set ul property =
   ALIEN "FL_SET_UL_PROPERTY"
   "#define FL_SET_UL_PROPERTY(i1,i2) \"
   "   fl_set_ul_property(i1, i2)"

@d macro fl set clipping =
PROC(FLCOORD,FLCOORD,FLCOORD,FLCOORD)VOID
   fl set clipping = ALIEN "FL_SET_CLIPPING"
   "#define FL_SET_CLIPPING(x,y,w,h) \"
   "   fl_set_clipping(x,y,w,h)"

@d macro fl set gc clipping =
PROC(GC,FLCOORD,FLCOORD,FLCOORD,FLCOORD)VOID
   fl set gc clipping = ALIEN "FL_SET_GC_CLIPPING"
   "#define FL_SET_GC_CLIPPING(gc,x,y,w,h) \"
   "   fl_set_gc_clipping(gc,x,y,w,h)"

@d macro fl unset gc clipping =
PROC(GC)VOID fl unset gc clipping =
   ALIEN "FL_UNSET_GC_CLIPPING"
   "#define FL_UNSET_GC_CLIPPING(gc) \"
   "   fl_unset_gc_clipping(gc)"

@d macro fl set clippings =
PROC(REF FLRECT,INT)VOID fl set clippings =
   ALIEN "FL_SET_CLIPPINGS"
   "#define FL_SET_CLIPPINGS(rec, n) \"
   "   fl_set_clippings((void *)rec, n)"

@d macro fl unset clipping =
PROC fl unset clipping = VOID: CODE "fl_unset_clipping();"

@d macro fl set text clipping =
PROC(FLCOORD,FLCOORD,FLCOORD,FLCOORD)VOID fl set text clipping =
   ALIEN "FL_SET_TEXT_CLIPPING"
   "#define FL_SET_TEXT_CLIPPING(x,y,w,h) \"
   "   fl_set_text_clipping(x,y,w,h)"

@d macro fl unset text clipping =
PROC fl unset text clipping = VOID: CODE "fl_unset_text_clipping();"

@ How we pack and unpack colors.

@m fl pcbits = 8     # primary color bits #

@d macro mode flpcmode =
MODE FLPCMODE = BYTE  #primary color mode#

@ @m fl pcmax = (SHORTEN SHORTEN(ABS(2r1 SHL fl pcbits)-1))

@d macro op fl pc clamp =
OP FLPCCLAMP = (INT8 a)INT8:
   (a > fl pcmax|fl pcmax|:a<SHORT SHORT 0|SHORT SHORT 0|a)

@ If !fl pcbits! is not 8, we need to apply the RGBmask.

@m fl rmask = 16r000000ff
@m fl rshift = 0
@m fl gmask = 16r0000ff00
@m fl gshift = 8
@m fl bmask = 16r00ff0000
@m fl bshift = 16
@m fl amask = 16rff000000
@m fl ashift = 24

@d macro op fl get r =
OP FLGETR = (BITS packed)BITS: (packed&fl rmask)

@d macro op fl get g =
OP FLGETG = (BITS packed)BITS: (packed&fl gmask) SHR fl gshift

@d macro op fl get b =
OP FLGETB = (BITS packed)BITS: (packed&fl bmask) SHR fl bshift

@d macro op fl get a =
OP FLGETA = (BITS packed)BITS: (packed&fl amask) SHR fl ashift

@m fl unpack3 = fl unpack
@m fl pack = fl pack3
@m fl pack4(r,g,b,a) = (fl pack3(r,g,b) OR a SHL fl ashift)

@d macro fl pack3 =
PROC fl pack3 = (BITS r,g,b)BITS:
   r SHL fl rshift OR g SHL fl gshift OR b SHL fl bshift

@d macro fl unpack =
macro op fl get r;
macro op fl get g;
macro op fl get b;
PROC fl unpack = (BITS p,REF BITS r,g,b)VOID:
   (r:=FLGETR p; g:=FLGETG p; b:=FLGETB p)

@d macro fl unpack4 =
macro op fl get a;
PROC fl unpack4 = (BITS p,REF BITS r,g,b,a)VOID:
   (fl unpack3(p,r,g,b); a:=FLGETA p)

@2Bitmaps.

@m fl normal bitmap = 0
@m fl bitmap boxtype = fl no box
@m fl bitmap col1 = fl col1 # background of bitmap #
@m fl bitmap col2 = fl col1 # not used currently   #
@m fl bitmap lcol = fl lcol # foreground of bitmap #
@m fl bitmap align = fl align bottom

@d macro fl create bitmap =
macro op vz;
PROC fl create bitmap = (INT type,FLCOORD x,y,w,h,[]CHAR name)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,
      VECTOR[]CHAR)REF FLOBJECT fl fl create bitmap =
      ALIEN "FL_CREATE_BITMAP"
      "#define FL_CREATE_BITMAP(type,x,y,w,h,name) \"
      " (void *)fl_create_bitmap(type, x, y, w, h, A_VC_charptr(name))";
   fl fl create bitmap(type,x,y,w,h,VZ name)
END #fl create bitmap#

@d macro fl add bitmap =
macro op vz;
PROC fl add bitmap = (INT type,FLCOORD x,y,w,h,[]CHAR name)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,
      VECTOR[]CHAR)REF FLOBJECT fl fl add bitmap =
      ALIEN "FL_ADD_BITMAP"
      "#define FL_ADD_BITMAP(type,x,y,w,h,name) \"
      " (void *)fl_add_bitmap(type, x, y, w, h, A_VC_charptr(name))";
   fl fl add bitmap(type,x,y,w,h,VZ name)
END #fl add bitmap#

@d macro fl set bitmap data =
PROC(REF FLOBJECT,INT,INT,VECTOR[]CARD8)VOID
   fl set bitmap data = ALIEN "FL_SET_BITMAP_DATA"
   "#define FL_SET_BITMAP_DATA(ob,w,h,bits) \"
   "   fl_set_bitmap_data((void *)ob,w,h,(unsigned char *)bits.data)"

@d macro fl set bitmap file =
macro op vz;
PROC fl set bitmap file = (REF FLOBJECT ob,[]CHAR fn)VOID:
BEGIN
   PROC(REF FLOBJECT,VECTOR[]CHAR)VOID fl fl set bitmap file =
      ALIEN "FL_SET_BITMAP_FILE"
      "#define FL_SET_BITMAP_FILE(ob,fn) \"
      "   fl_set_bitmap_file((void *)ob,A_VC_charptr(fn))";
   fl fl set bitmap file(ob,VZ fn)
END #fl set bitmap file#

@d macro fl read bitmapfile =
macro op vz;
PROC fl read bitmapfile =
   (WINDOW win,
    []CHAR fn,
    REF INT w,h,hotx,hoty)PIXMAP:
BEGIN
   PROC(WINDOW,VECTOR[]CHAR,REF INT,REF INT,REF INT,REF INT)PIXMAP
      fl fl read bitmapfile = ALIEN "FL_READ_BITMAPFILE"
      "#define FL_READ_BITMAPFILE(win,fn,w,h,hotx,hoty) \"
      "   fl_read_bitmapfile(win,A_VC_charptr(fn),\"
      "             (unsigned *)w,(unsigned *)h,(int *)hotx,(int *)hoty)";
   fl fl read bitmapfile(win,VZ fn,w,h,hotx,hoty)
END #fl read bitmapfile#

@d macro fl create from bitmapdata =
macro fl display;
PROC fl create from bitmapdata =
   (WINDOW win, CSTR data, INT w, h)BITS:
   x create bitmap from data(fl display, win, data, w, h)

@m fl normal pixmap = 0

@2Fonts related.

@m fl maxfonts = 48 # max number of fonts #

@m fl invalid style = -1
@m fl normal style = 0
@m fl bold style = 1
@m fl italic style = 2
@m fl bolditalic style = 3

@m fl fixed style = 4
@m fl fixedbold style = 5
@m fl fixeditalic style = 6
@m fl fixedbolditalic style = 7

@m fl times style = 8
@m fl timesbold style = 9
@m fl timesitalic style = 10
@m fl timesbolditalic style = 11

@m fl misc style = 12
@m fl miscbold style = 13
@m fl miscitalic style = 14
@m fl symbol style = 15

@ Modfier masks. Need to fit a short.
@m fl shadow style = ABS 8r1000
@m fl engraved style = ABS 8r2000
@m fl embossed style = ABS 8r4000

@m special style(a) =
   ((a >= fl shadow style) &
    (a <= (fl embossed style+fl maxfonts)))

@ Standard sizes in XForms.

@m fl tiny size = 8
@m fl small size = 10
@m fl normal size = 12
@m fl medium size = 14
@m fl large size = 18
@m fl huge size = 24

@m fl default size = fl small size
@m fl small font = fl small size
@m fl normal font = fl normal size
@m fl normal font1 = fl small font
@m fl normal font2 = fl normal font
@m fl default font = fl small font

@d macro fl create pixmap =
macro op vz;
PROC fl create pixmap =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)
      REF FLOBJECT fl fl create pixmap = ALIEN "FL_CREATE_PIXMAP"
      "#define FL_CREATE_PIXMAP(type,x,y,w,h,label) \"
      " (void *)fl_create_pixmap(type, x, y, w, h,A_VC_charptr(label))";
   fl fl create pixmap(type,x,y,w,h,VZ label)
END #fl create pixmap#

@d macro fl add pixmap =
macro op vz;
PROC fl add pixmap =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)
      REF FLOBJECT fl fl add pixmap = ALIEN "FL_ADD_PIXMAP"
      "#define FL_ADD_PIXMAP(type,x,y,w,h,label) \"
      "(void *)fl_add_pixmap(type, x, y, w, h,A_VC_charptr(label))";
   fl fl add pixmap(type,x,y,w,h,VZ label)
END #fl add pixmap#

@d macro fl set pixmap data =
PROC(REF FLOBJECT,CCHARPTRPTR)VOID fl set pixmap data =
   ALIEN "FL_SET_PIXMAP_DATA"
   "#define FL_SET_PIXMAP_DATA(ob,data) \"
   "   fl_set_pixmap_data((void *)ob, (char **)data)"

@d macro fl set pixmap file =
macro op vz;
PROC fl set pixmap file = (REF FLOBJECT ob,[]CHAR fn)VOID:
BEGIN
   PROC(REF FLOBJECT,VECTOR[]CHAR)VOID fl fl set pixmap file =
      ALIEN "FL_SET_PIXMAP_FILE"
      "#define FL_SET_PIXMAP_FILE(ob,name) \"
      "   fl_set_pixmap_file((void *)ob,A_VC_charptr(name))";
   fl fl set pixmap file(ob,VZ fn)
END #fl set pixmap file#

@d macro fl set pixmap align =
PROC(REF FLOBJECT,INT,INT,INT)VOID fl set pixmap align =
   ALIEN "FL_SET_PIXMAP_ALIGN"
   "#define FL_SET_PIXMAP_ALIGN(ob,align,dx,dy) \"
   "   fl_set_pixmap_align((void *)ob,align,dx,dy)"

@d macro fl set pixmap pixmap =
PROC(REF FLOBJECT,PIXMAP,PIXMAP)VOID fl set pixmap pixmap =
   ALIEN "FL_SET_PIXMAP_PIXMAP"
   "#define FL_SET_PIXMAP_PIXMAP(ob,id,mask) \"
   "   fl_set_pixmap_pixmap((void *)ob,id,mask)"

@d macro fl set pixmap color closeness =
PROC(INT,INT,INT)VOID fl set pixmap colorcloseness =
   ALIEN "FL_SET_PIXMAP_COLORCLOSENESS"
   "#define FL_SET_PIXMAP_COLORCLOSENESS(r,g,b) \"
   "   fl_set_pixmap_colorcloseness(r,g,b)"

@d macro fl free pixmap pixmap =
PROC(REF FLOBJECT)VOID fl free pixmap pixmap =
   ALIEN "FL_FREE_PIXMAP_PIXMAP"
   "#define FL_FREE_PIXMAP_PIXMAP(ob) \"
   "   fl_free_pixmap_pixmap((void *)ob)"

@d macro fl get pixmap pixmap =
PROC(REF FLOBJECT,REF PIXMAP,REF PIXMAP)PIXMAP
   fl get pixmap pixmap = ALIEN "FL_GET_PIXMAP_PIXMAP"
   "#define FL_GET_PIXMAP_PIXMAP(ob,id,mask) \"
   "   fl_get_pixmap_pixmap((void *)ob,(unsigned *)id,(unsigned *)mask)"

@d macro fl read pixmapfile =
macro op vz;
PROC fl read pixmapfile =
   (WINDOW win,
    []CHAR fn,
    REF INT w,h,
    REF PIXMAP shm,REF INT hotx,hoty,FLCOLOR tran)PIXMAP:
BEGIN
   PROC(WINDOW,VECTOR[]CHAR,REF INT,REF INT,
        REF PIXMAP,REF INT,REF INT,FLCOLOR)PIXMAP fl fl read pixmapfile =
      ALIEN "FL_READ_PIXMAPFILE"
      "#define FL_READ_PIXMAPFILE(win,fn,w,h,shm,hotx,hoty,tran) \"
      "   fl_read_pixmapfile(win,A_VC_charptr(fn),\"
      "      (unsigned int *)w, (unsigned int *)h,\"
      "      (unsigned int *)shm, (int *)hotx, (int *)hoty, tran)";
   fl fl read pixmapfile(win,VZ fn,w,h,shm,hotx,hoty,tran)
END #fl read pixmapfile#

@d macro fl create from pixmapdata =
PROC(WINDOW,CCHARPTRPTR,REF INT,REF INT,REF PIXMAP,
     REF INT,REF INT,FLCOLOR)PIXMAP fl create from pixmapdata =
   ALIEN "FL_CREATE_FROM_PIXMAPDATA"
   "#define FL_CREATE_FROM_PIXMAPDATA\"
   "(win,data,w,h,shm,hotx,hoty,tran)\"
   "   fl_create_from_pixmapdata(win,(char **)data,\"
   "      (unsigned int *)w, (unsigned int *)h,\"
   "      (unsigned int *)shm, (int *)hotx, (int *)hoty,\"
   "      tran)"

@d macro fl free pixmap =
macro x free pixmap;
macro fl display;
PROC fl free pixmap = (PIXMAP id)VOID:
   (id /= BIN flnone| x free pixmap(fl display, id))

@2Boxes.

@d macro fl create box =
macro op vz;
PROC fl create box = (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,
        FLCOORD,FLCOORD,FLCOORD,FLCOORD,
        VECTOR[]CHAR)REF FLOBJECT fl fl create box =
      ALIEN "FL_CREATE_BOX"
      "#define FL_CREATE_BOX(type,x,y,w,h,label) \"
      "(void *)fl_create_box(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create box(type,x,y,w,h,VZ label)
END #fl create box#

@d macro fl add box =
macro op vz;
PROC fl add box = (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,
        FLCOORD,FLCOORD,FLCOORD,FLCOORD,
        VECTOR[]CHAR)REF FLOBJECT fl fl add box =
      ALIEN "FL_ADD_BOX"
      "#define FL_ADD_BOX(type,x,y,w,h,label) \"
      "(void *)fl_add_box(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add box(type,x,y,w,h,VZ label)
END #fl add box#

@d macro fl enumerate fonts =
PROC fl enumerate fonts = (PROC(CSTR)VOID p,INT shortform)INT:
BEGIN
   PROC(CPTR#PROC(CSTR)VOID#,INT)INT fl fl enumerate fonts =
      ALIEN "FL_ENUMERATE_FONTS"
      "#define FL_ENUMERATE_FONTS(cb,shortform) \"
      "   fl_enumerate_fonts((void *)cb, shortform)";
   OP(PROC(CSTR)VOID)PDESC TOPDESC = BIOP 99;
   fl fl enumerate fonts(cp OF TOPDESC p,shortform)
END #fl enumerate fonts#

@d macro fl set font name =
macro op vz;
PROC fl set font name = (INT index,[]CHAR name)VOID:
BEGIN
   PROC(INT,VECTOR[]CHAR)INT fl fl set font name =
      ALIEN "FL_SET_FONT_NAME"
      "#define FL_SET_FONT_NAME(index,name) \"
      "   fl_set_font_name(index, A_VC_charptr(name))";
   fl fl set font name(index,VZ name)
END #fl set font name#

@d macro fl set font =
PROC(INT,INT)VOID fl set font = ALIEN "FL_SET_FONT"
   "#define FL_SET_FONT(a,b) fl_set_font(a, b)"

@2Browsers.

@m fl normal browser = 0
@m fl select browser = 1
@m fl hold browser   = 2
@m fl multi browser  = 3

@<Forms modes...@>=
MODE FLBRSCRCB = PROC(REF FLOBJECT,INT,CPTR)VOID;

@ @m fl browser boxtype = fl down box
@m fl browser col1 = fl col1
@m fl browser col2 = fl yellow
@m fl browser lcol = fl lcol
@m fl browser align = fl align bottom

@m fl browser slcol = fl col1
@m fl browser linelength = 2048
@m fl browser fontsize = fl small font

@d macro fl create browser =
macro op vz;
PROC fl create browser =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,
        VECTOR[]CHAR)REF FLOBJECT fl fl create browser =
      ALIEN "FL_CREATE_BROWSER"
      "#define FL_CREATE_BROWSER(type,x,y,w,h,label) \"
      "(void *)fl_create_browser(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create browser(type,x,y,w,h,VZ label)
END #fl create browser#

@d macro fl add browser =
macro op vz;
PROC fl add browser =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,
        VECTOR[]CHAR)REF FLOBJECT fl fl add browser =
      ALIEN "FL_ADD_BROWSER"
      "#define FL_ADD_BROWSER(type,x,y,w,h,label) \"
      "(void *)fl_add_browser(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add browser(type,x,y,w,h,VZ label)
END #fl add browser#

@d macro fl clear browser =
PROC(REF FLOBJECT)VOID fl clear browser =
   ALIEN "FL_CLEAR_BROWSER"
   "#define FL_CLEAR_BROWSER(ob) \"
   "   fl_clear_browser((void *)ob)"

@d macro fl add browser line =
macro op vz;
PROC fl add browser line = (REF FLOBJECT ob,[]CHAR text)VOID:
BEGIN
   PROC(REF FLOBJECT,VECTOR[]CHAR)VOID fl fl add browser line =
      ALIEN "FL_ADD_BROWSER_LINE"
      "#define FL_ADD_BROWSER_LINE(ob,text) \"
      "   fl_add_browser_line((void *)ob,A_VC_charptr(text))";
   fl fl add browser line(ob,VZ text)
END #fl add browser line#

@d macro fl addto browser =
macro op vz;
PROC fl addto browser = (REF FLOBJECT ob,[]CHAR text)VOID:
BEGIN
   PROC(REF FLOBJECT,VECTOR[]CHAR)VOID fl fl addto browser =
      ALIEN "FL_ADDTO_BROWSER"
      "#define FL_ADDTO_BROWSER(ob,text) \"
      "   fl_addto_browser((void *)ob,A_VC_charptr(text))";
   fl fl addto browser(ob,VZ text)
END #fl addto browser#

@d macro fl addto browser chars =
macro op vz;
PROC fl addto browser chars = (REF FLOBJECT ob,[]CHAR text)VOID:
BEGIN
   PROC(REF FLOBJECT,VECTOR[]CHAR)VOID fl fl addto browser chars =
      ALIEN "FL_ADDTO_BROWSER_CHARS"
      "#define FL_ADDTO_BROWSER_CHARS(ob,text) \"
      "   fl_addto_browser_chars((void *)ob,A_VC_charptr(text))";
   fl fl addto browser chars(ob,VZ text)
END #fl addto browser chars#

@d macro fl insert browser line =
macro op vz;
PROC fl insert browser line = (REF FLOBJECT ob,INT line,[]CHAR text)VOID:
BEGIN
   PROC(REF FLOBJECT,INT,VECTOR[]CHAR)VOID fl fl insert browser line =
      ALIEN "FL_INSERT_BROWSER_LINE"
      "#define FL_INSERT_BROWSER_LINE(ob,line,text) \"
      "   fl_insert_browser_line((void *)ob,line,A_VC_charptr(text))";
   fl fl insert browser line(ob,line,VZ text)
END #fl insert browser line#

@d macro fl delete browser line =
PROC(REF FLOBJECT,INT)VOID fl delete browser line =
   ALIEN "FL_DELETE_BROWSER_LINE"
   "#define FL_DELETE_BROWSER_LINE(ob,line) \"
   "   fl_delete_browser_line((void *)ob,line)"

@d macro fl replace browser line =
macro op vz;
PROC fl replace browser line = (REF FLOBJECT ob,INT line,[]CHAR text)VOID:
BEGIN
   PROC(REF FLOBJECT,INT,VECTOR[]CHAR)VOID fl fl replace browser line =
      ALIEN "FL_REPLACE_BROWSER_LINE"
      "#define FL_REPLACE_BROWSER_LINE(ob,line,text) \"
      "   fl_replace_browser_line((void *)ob,line,A_VC_charptr(text))";
   fl fl replace browser line(ob,line,VZ text)
END #fl replace browser line#

@d macro fl get browser line =
PROC fl get browser line = (REF FLOBJECT ob,INT line)[]CHAR:
BEGIN
   PROC(REF FLOBJECT,INT)CPTR fl fl get browser line =
   ALIEN "FL_GET_BROWSER_LINE"
   "#define FL_GET_BROWSER_LINE(ob,line) \"
   "(void *)fl_get_browser_line((void *)ob,line)";
   VECTOR[]CHAR(CPTRTORVC fl fl get browser line(ob,line))
END #fl get browser line#

@d macro fl load browser =
macro op vz;
PROC fl load browser = (REF FLOBJECT ob,[]CHAR fn)INT:
BEGIN
   PROC(REF FLOBJECT,VECTOR[]CHAR)INT fl fl load browser =
      ALIEN "FL_LOAD_BROWSER"
      "#define FL_LOAD_BROWSER(ob,filename) \"
      "   fl_load_browser((void *)ob,A_VC_charptr(filename))";
   fl fl load browser(ob,VZ fn)
END #fl load browser#

@d macro fl select browser line =
PROC(REF FLOBJECT,INT)VOID fl select browser line =
   ALIEN "FL_SELECT_BROWSER_LINE"
   "#define FL_SELECT_BROWSER_LINE(ob,line) \"
   "   fl_select_browser_line((void *)ob, line)"

@d macro fl deselect browser line =
PROC(REF FLOBJECT,INT)VOID fl deselect browser line =
   ALIEN "FL_DESELECT_BROWSER_LINE"
   "#define FL_DESELECT_BROWSER_LINE(ob,line) \"
   "   fl_deselect_browser_line((void *)ob, line)"

@d macro fl deselect browser =
PROC(REF FLOBJECT)VOID fl deselect browser =
   ALIEN "FL_DESELECT_BROWSER"
   "#define  FL_DESELECT_BROWSER(ob) \"
   "   fl_deselect_browser((void *)ob)"

@d macro fl isselected browser line =
PROC(REF FLOBJECT,INT)INT fl isselected browser line =
   ALIEN "FL_ISSELECTED_BROWSER_LINE"
   "#define FL_ISSELECTED_BROWSER_LINE(ob,line) \"
   "   fl_isselected_browser_line((void *)ob, line)"

@d macro fl get browser topline =
PROC(REF FLOBJECT)INT fl get browser topline =
   ALIEN "FL_GET_BROWSER_TOPLINE"
   "#define FL_GET_BROWSER_TOPLINE(ob) \"
   "   fl_get_browser_topline((void *)ob)"

@d macro fl get browser =
PROC(REF FLOBJECT)INT fl get browser =
   ALIEN "FL_GET_BROWSER"
   "#define FL_GET_BROWSER(ob) \"
   "   fl_get_browser((void *)ob)"

@d macro fl get browser maxline =
PROC(REF FLOBJECT)INT fl get browser maxline =
   ALIEN "FL_GET_BROWSER_MAXLINE"
   "#define FL_GET_BROWSER_MAXLINE(ob) \"
   "   fl_get_browser_maxline((void *)ob)"

@d macro fl get browser screenlines =
PROC(REF FLOBJECT)INT fl get browser screenlines =
   ALIEN "FL_GET_BROWSER_SCREENLINES"
   "#define FL_GET_BROWSER_SCREENLINES(ob) \"
   "   fl_get_browser_screenlines((void *)ob)"

@d macro fl set browser topline =
PROC(REF FLOBJECT,INT)VOID fl set browser topline =
   ALIEN "FL_SET_BROWSER_TOPLINE"
   "#define FL_SET_BROWSER_TOPLINE(ob,line) \"
   "   fl_set_browser_topline((void *)ob,line)"

@d macro fl set browser fontsize =
PROC(REF FLOBJECT,INT)VOID fl set browser fontsize =
   ALIEN "FL_SET_BROWSER_FONTSIZE"
   "#define FL_SET_BROWSER_FONTSIZE(ob,size) \"
   "   fl_set_browser_fontsize((void *)ob,size)"

@d macro fl set browser fontstyle =
PROC(REF FLOBJECT,INT)VOID fl set browser fontstyle =
   ALIEN "FL_SET_BROWSER_FONTSTYLE"
   "#define FL_SET_BROWSER_FONTSTYLE(ob,style) \"
   "   fl_set_browser_fontstyle((void *)ob,style)"

@d macro fl set browser specialkey =
PROC(REF FLOBJECT,INT)VOID fl set browser specialkey =
   ALIEN "FL_SET_BROWSER_SPECIALKEY"
   "#define FL_SET_BROWSER_SPECIALKEY(ob,key) \"
   "   fl_set_browser_specialkey((void *)ob,key)"

@d macro fl set browser vscrollbar =
PROC(REF FLOBJECT,INT)VOID fl set browser vscrollbar =
   ALIEN "FL_SET_BROWSER_VSCROLLBAR"
   "#define FL_SET_BROWSER_VSCROLLBAR(ob,how) \"
   "   fl_set_browser_vscrollbar((void *)ob,how)"

@d macro fl set browser hscrollbar =
PROC(REF FLOBJECT,INT)VOID fl set browser hscrollbar =
   ALIEN "FL_SET_BROWSER_HSCROLLBAR"
   "#define FL_SET_BROWSER_HSCROLLBAR(ob,how) \"
   "   fl_set_browser_hscrollbar((void *)ob,how)"

@d macro fl set browser line selectable =
PROC(REF FLOBJECT,INT)VOID fl set browser line selectable =
   ALIEN "FL_SET_BROWSER_LINE_SELECTABLE"
   "#define FL_SET_BROWSER_LINE_SELECTABLE(ob,mode) \"
   "   fl_set_browser_line_selectable((void *)ob,mode)"

@d macro fl get browser dimension =
PROC(REF FLOBJECT,
     REF FLCOORD,REF FLCOORD,REF FLCOORD,REF FLCOORD)VOID
   fl get browser dimension = ALIEN "FL_GET_BROWSER_DIMENSION"
   "#define FL_GET_BROWSER_DIMENSION(ob,x,y,w,h) \"
   "   fl_get_browser_dimension((void *)ob,\"
   "      (int *)x,(int *)y,(int *)w,(int *)h)"

@d macro fl set browser dblclick callback =
PROC(REF FLOBJECT,FLOCB,CPTR)VOID
   fl set browser dblclick callback =
   ALIEN "FL_SET_BROWSER_DBLCLICK_CALLBACK"
   "#define FL_SET_BROWSER_DBLCLICK_CALLBACK(ob,cb,data) \"
   "   fl_set_browser_dblclick_callback(\"
   "      (void *)ob,(void *)cb,data)"

@d macro fl set browser xoffset =
PROC(REF FLOBJECT,FLCOORD)VOID fl set browser xoffset =
   ALIEN "FL_SET_BROWSER_XOFFSET"
   "#define FL_SET_BROWSER_XOFFSET(ob,x) \"
   "   fl_set_browser_xoffset((void *)ob,x)"

@d macro fl get browser xoffset =
PROC(REF FLOBJECT)FLCOORD fl get browser xoffset =
   ALIEN "FL_GET_BROWSER_XOFFSET"
   "#define FL_GET_BROWSER_XOFFSET(ob) \"
   "   fl_set_browser_xoffset((void *)ob)"

@d macro fl set browser scrollbarsize =
PROC(REF FLOBJECT,INT,INT)VOID fl set browser scrollbarsize =
   ALIEN "fl_set_browser_scrollbarsize"
   "#define FL_SET_BROWSER_SCROLLBARSIZE(ob,hh,vw) \"
   "   fl_set_browser_scrollbarsize((void *)ob,hh,vw)"

@d macro fl show browser line =
PROC(REF FLOBJECT,INT)VOID fl show browser line =
   ALIEN "FL_SHOW_BROWSER_LINE"
   "#define FL_SHOW_BROWSER_LINE(ob,line) \"
   "   fl_show_browser_line((void *), line)"

@d macro fl set default browser maxlinelength =
PROC(INT)INT fl set default browser maxlinelength =
   ALIEN "FL_SET_DEFAULT_BROWSER_MAXLINELENGTH"
   "#define FL_SET_DEFAULT_BROWSER_MAXLINELENGTH(max) \"
   "   fl_set_default_browser_maxlinelength(max)"

@d macro fl set browser hscroll callback =
PROC(REF FLOBJECT,FLBRSCRCB,CPTR)VOID
   fl set browser hscroll callback =
   ALIEN "FL_SET_BROWSER_HSCROLL_CALLBACK"
   "#define FL_SET_BROWSER_HSCROLL_CALLBACK(ob,cb,data) \"
   "   fl_set_browser_hscroll_callback(\"
   "      (void *)ob,(void *)cb,(void *)data)"

@d macro fl set browser vscroll callback =
PROC(REF FLOBJECT,FLBRSCRCB,CPTR)VOID
   fl set browser vscroll callback =
   ALIEN "FL_SET_BROWSER_VSCROLL_CALLBACK"
   "#define FL_SET_BROWSER_VSCROLL_CALLBACK(ob,cb,data) \"
   "      (void *)ob,(void *)cb,(void *)data)"

@d macro fl get browser hscroll callback =
PROC(REF FLOBJECT)CPTR#FLBRSCRCB#
   fl get browser hscroll callback =
   ALIEN "FL_GET_BROWSER_HSCROLL_CALLBACK"
   "#define FL_GET_BROWSER_HSCROLL_CALLBACK(ob) \"
   "   (void *)fl_get_browser_hscroll_callback((void *)ob)"

@d macro fl get browser vscroll callback =
PROC(REF FLOBJECT)CPTR#FLBRSCRCB#
   fl get browser vscroll callback =
   ALIEN "FL_GET_BROWSER_VSCROLL_CALLBACK"
   "#define FL_GET_BROWSER_VSCROLL_CALLBACK(ob) \"
   "   (void *)fl_get_browser_vscroll_callback((void *)ob)"

@2Buttons.
This mode is compiler dependent.@^compiler dependencies@>

@d macro mode flbuttonspec =
MODE FLBUTTONSPEC = STRUCT(
    PIXMAP pixmap, mask,  # for a bitmap/pixmap button only       #
    BITS bits w, bits h,  # for a bitmap/pixmap button only       #
    INT val,              # whether pushed                        #
        mousebut,         # mouse button that caused the push     #
        timdel,           # time since last touch (TOUCH buttons) #
        event,            # what event triggered redraw           #
        cspecl,           # for non-generic class specfic data    #
    CPTR cspecv,          # for non-generic class specfic data    #
    CSTR filename,        # filename for the bitmap/pixmap file   #
    PIXMAP focus pixmap, focus mask,# for a bitmap/pixmap button only #
    CSTR focus filename,  # for a bitmap/pixmap button only       #
    STRUCT 2 INT reserved)

@d macro mode fldrawbutton =
MODE FLDRAWBUTTON = PROC(REF FLOBJECT)VOID

@d macro op fldrawbutton to pdesc =
macro mode fl drawbutton;
OP(FLDRAWBUTTON)PDESC TOPDESC = BIOP 99

@d macro mode flcleanupbutton =
macro mode flbuttonspec;
MODE FLCLEANUPBUTTON = PROC(REF FLBUTTONSPEC)VOID

@d macro op flcleanupbutton to pdesc =
macro mode flcleanupbutton;
OP(FLCLEANUPBUTTON)PDESC TOPDESC = BIOP 99

@ @m fl normal button =  0
@m fl push button =  1
@m fl radio button =  2
@m fl hidden button =  3
@m fl touch button =  4
@m fl inout button =  5
@m fl return button =  6
@m fl hidden ret button =  7
@m fl menu button =  8

@m fl toggle button = fl push button

@ Normal button defaults.

@m fl button boxtype = fl up box
@m fl button col1 = fl col1
@m fl button col2 = fl col1
@m fl button lcol = fl lcol
@m fl button align = fl align center
@m fl button mcol1 = fl mcol
@m fl button mcol2 = fl mcol
@m fl button bw = fl bound width

@ Light button defaults.

@m fl lightbutton boxtype = fl up box
@m fl lightbutton col1 = fl col1
@m fl lightbutton col2 = fl yellow
@m fl lightbutton lcol = fl lcol
@m fl lightbutton align = fl align center
@m fl lightbutton topcol = fl col1
@m fl lightbutton mcol = fl mcol
@m fl lightbutton minsize = FLCOORD(12)

@ Round button defaults.

@m fl roundbutton boxtype = fl no box
@m fl roundbutton col1 = fl mcol
@m fl roundbutton col2 = fl yellow
@m fl roundbutton lcol = fl lcol
@m fl roundbutton align = fl align center
@m fl roundbutton topcol = fl col1
@m fl roundbutton mcol = fl mcol

@ Round 3-dimensional button defaults.

@m fl round3dbutton boxtype = fl no box
@m fl round3dbutton col1 = fl col1
@m fl round3dbutton col2 = fl black
@m fl round3dbutton lcol = fl lcol
@m fl round3dbutton align = fl align center
@m fl round3dbutton topcol = fl col1
@m fl round3dbutton mcol = fl mcol

@ Check button defaults.

@m fl checkbutton boxtype = fl no box
@m fl checkbutton col1 = fl col1
@m fl checkbutton col2 = fl yellow
@m fl checkbutton lcol = fl lcol
@m fl checkbutton align = fl align center

@m fl checkbutton topcol = fl col1
@m fl checkbutton mcol = fl mcol

@ Bitmap button defaults.

@m fl bitmapbutton boxtype = fl up box
@m fl bitmapbutton col1 = fl col1 # bitmap background  #
@m fl bitmapbutton col2 = fl blue # "focus" color      #
@m fl bitmapbutton lcol = fl lcol # bitmap foreground  #
@m fl bitmapbutton align = fl align bottom

@ Pixmap button defaults.

@m fl pixmapbutton boxtype = fl up box
@m fl pixmapbutton col1 = fl col1   # box color    #
@m fl pixmapbutton col2 = fl yellow # bound rect #
@m fl pixmapbutton lcol = fl lcol
@m fl pixmapbutton align = fl align bottom

@ Routines.

@d macro fl create button =
macro op vz;
PROC fl create button = (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl create button = ALIEN "FL_CREATE_BUTTON"
      "#define FL_CREATE_BUTTON(type,x,y,w,h,label) \"
      "   (void *)fl_create_button(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create button(type,x,y,w,h,VZ label)
END #fl create button#

@d macro fl create roundbutton =
macro op vz;
PROC fl create roundbutton =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl create roundbutton = ALIEN "FL_CREATE_ROUNDBUTTON"
      "#define FL_CREATE_ROUNDBUTTON(type,x,y,w,h,label) \"
      "   (void *)fl_create_roundbutton(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create roundbutton(type,x,y,w,h,VZ label)
END #fl create roundbutton#

@d macro fl create round3dbutton =
macro op vz;
PROC fl create round3dbutton =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl create round3dbutton = ALIEN "FL_CREATE_ROUND3DBUTTON"
      "#define FL_CREATE_ROUND3DBUTTON(type,x,y,w,h,label) \"
      "   (void *)fl_create_round3dbutton(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create round3dbutton(type,x,y,w,h,VZ label)
END #fl create round3dbutton#

@d macro fl create lightbutton =
macro op vz;
PROC fl create lightbutton =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl create lightbutton = ALIEN "FL_CREATE_LIGHTBUTTON"
      "#define FL_CREATE_LIGHTBUTTON(type,x,y,w,h,label) \"
      "   (void *)fl_create_lightbutton(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create lightbutton(type,x,y,w,h,VZ label)
END #fl create lightbutton#

@d macro fl create checkbutton =
macro op vz;
PROC fl create checkbutton =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl create checkbutton = ALIEN "FL_CREATE_CHECKBUTTON"
      "#define FL_CREATE_CHECKBUTTON(type,x,y,w,h,label) \"
      "   (void *)fl_create_checkbutton(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create checkbutton(type,x,y,w,h,VZ label)
END #fl create checkbutton#

@d macro fl create bitmapbutton =
macro op vz;
PROC fl create bitmapbutton =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl create bitmapbutton = ALIEN "FL_CREATE_BITMAPBUTTON"
      "#define FL_CREATE_BITMAPBUTTON(type,x,y,w,h,label) \"
      "   (void *)fl_create_bitmapbutton(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create bitmapbutton(type,x,y,w,h,VZ label)
END #fl create bitmapbutton#

@d macro fl create pixmapbutton =
macro op vz;
PROC fl create pixmapbutton =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl create pixmapbutton = ALIEN "FL_CREATE_PIXMAPBUTTON"
      "#define FL_CREATE_PIXMAPBUTTON(type,x,y,w,h,label) \"
      "   (void *)fl_create_pixmapbutton(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create pixmapbutton(type,x,y,w,h,VZ label)
END #fl create pixmapbutton#

@d macro fl create scrollbutton =
macro op vz;
PROC fl create scrollbutton =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl create scrollbutton = ALIEN "FL_CREATE_SCROLLBUTTON"
      "#define FL_CREATE_SCROLLBUTTON(type,x,y,w,h,label) \"
      "   (void *)fl_create_scrollbutton(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create scrollbutton(type,x,y,w,h,VZ label)
END #fl create scrollbutton#

@d macro fl create labelbutton =
macro op vz;
PROC fl create labelbutton =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl create labelbutton = ALIEN "FL_CREATE_LABELBUTTON"
      "#define FL_CREATE_LABELBUTTON(type,x,y,w,h,label) \"
      "   (void *)fl_create_labelbutton(type,x,y,w,h,A_VC_charptr(label))";
   fl create labelbutton(type,x,y,w,h,VZ label)
END #fl create labelbutton#

@d macro fl add roundbutton =
macro op vz;
PROC fl add roundbutton =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl add roundbutton = ALIEN "FL_ADD_ROUNDBUTTON"
   "#define FL_ADD_ROUNDBUTTON(type,x,y,w,h,label) \"
   "   (void *)fl_add_roundbutton(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add roundbutton(type,x,y,w,h,VZ label)
END #fl add roundbutton#

@d macro fl add round3dbutton =
macro op vz;
PROC fl add round3dbutton =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl add round3dbutton = ALIEN "FL_ADD_ROUND3DBUTTON"
      "#define FL_ADD_ROUND3DBUTTON(type,x,y,w,h,label) \"
      "   (void *)fl_add_round3dbutton(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add round3dbutton(type,x,y,w,h,VZ label)
END #fl add round3dbutton#

@d macro fl add lightbutton =
macro op vz;
PROC fl add lightbutton =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl add lightbutton = ALIEN "FL_ADD_LIGHTBUTTON"
      "#define FL_ADD_LIGHTBUTTON(type,x,y,w,h,label) \"
      "   (void *)fl_add_lightbutton(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add lightbutton(type,x,y,w,h,VZ label)
END #fl add lightbutton#

@d macro fl add checkbutton =
macro op vz;
PROC fl add checkbutton =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl add checkbutton = ALIEN "FL_ADD_CHECKBUTTON"
      "#define FL_ADD_CHECKBUTTON(type,x,y,w,h,label) \"
      "   (void *)fl_add_checkbutton(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add checkbutton(type,x,y,w,h,VZ label)
END #fl add checkbutton#

@d macro fl add button =
macro op vz;
PROC fl add button =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl add button = ALIEN "FL_ADD_BUTTON"
      "#define FL_ADD_BUTTON(type,x,y,w,h,label) \"
      "   (void *)fl_add_button(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add button(type,x,y,w,h,VZ label)
END #fl add button#

@d macro fl add bitmapbutton =
macro op vz;
PROC fl add bitmapbutton =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl add bitmapbutton = ALIEN "FL_ADD_BITMAPBUTTON"
      "#define FL_ADD_BITMAPBUTTON(type,x,y,w,h,label) \"
      "   (void *)fl_add_bitmapbutton(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add bitmapbutton(type,x,y,w,h,VZ label)
END #fl add bitmapbutton#

@d macro fl add pixmapbutton =
macro op vz;
PROC fl add pixmapbutton =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl add pixmapbutton = ALIEN "FL_ADD_PIXMAPBUTTON"
      "#define FL_ADD_PIXMAPBUTTON(type,x,y,w,h,label) \"
      "   (void *)fl_add_pixmapbutton(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add pixmapbutton(type,x,y,w,h,VZ label)
END #fl add pixmapbutton#

@d macro fl add scrollbutton =
macro op vz;
PROC fl add scrollbutton =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl add scrollbutton = ALIEN "FL_ADD_SCROLLBUTTON"
      "#define FL_ADD_SCROLLBUTTON(type,x,y,w,h,label) \"
      "   (void *)fl_add_scrollbutton(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add scrollbutton(type,x,y,w,h,VZ label)
END #fl add scrollbutton#

@d macro fl add labelbutton =
macro op vz;
PROC fl add labelbutton =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl add labelbutton = ALIEN "FL_ADD_LABELBUTTON"
      "#define FL_ADD_LABELBUTTON(type,x,y,w,h,label) \"
      "   (void *)fl_add_labelbutton(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add labelbutton(type,x,y,w,h,VZ label)
END

@d macro fl set bitmapbutton file =
macro op vz;
PROC fl set bitmapbutton file = (REF FLOBJECT ob,[]CHAR fn)VOID:
BEGIN
   PROC(REF FLOBJECT,VECTOR[]CHAR)VOID fl fl set bitmapbutton file =
      ALIEN "FL_SET_BITMAPBUTTON_FILE"
      "#define FL_SET_BITMAPBUTTON_FILE(ob,fn) \"
      "   fl_set_bitmapbutton_file((void *)ob,A_VC_charptr(fn))";
   fl fl set bitmapbutton file(ob,VZ fn)
END #fl set bitmapbutton file#

@d macro fl set bitmapbutton datafile = macro fl set bitmapbutton file
@m fl set bitmapbutton datafile = fl set bitmapbutton file

@d macro fl set bitmapbutton data =
PROC(REF FLOBJECT,INT,INT,CSTR)VOID fl set bitmapbutton data =
   ALIEN "FL_SET_BITMAPBUTTON_DATA"
   "#define FL_SET_BITMAPBUTTON_DATA(ob, w,h, bits) \"
   "   fl_set_bitmapbutton_data((void *)ob,w,h,(unsigned char *)bits)"

@d macro fl set pixmapbutton focus outline =
PROC(REF FLOBJECT,INT)VOID fl set pixmapbutton focus outline =
   ALIEN "FL_SET_PIXMAPBUTTON_FOCUS_OUTLINE"
   "#define FL_SET_PIXMAPBUTTON_FOCUS_OUTLINE(ob,flag) \"
   "   fl_set_pixmapbutton_focus_outline((void *)ob,flag)"

@d macro fl set pixmapbutton focus data =
PROC(REF FLOBJECT,CCHARPTRPTR)VOID fl set pixmapbutton focus data =
   ALIEN "FL_SET_PIXMAPBUTTON_FOCUS_DATA"
   "#define FL_SET_PIXMAPBUTTON_FOCUS_DATA(ob,data) \"
   "   fl_set_pixmapbutton_focus_data((void *)ob, (char **)data)"

@d macro fl set pixmapbutton focus file =
macro op vz;
PROC fl set pixmapbutton focus file = (REF FLOBJECT ob,[]CHAR fn)VOID:
BEGIN
   PROC(REF FLOBJECT,VECTOR[]CHAR)VOID
      fl fl set pixmapbutton focus file = ALIEN "FL_SET_PIXMAPBUTTON_FOCUS_FILE"
      "#define FL_SET_PIXMAPBUTTON_FOCUS_FILE(ob,fn) \"
      "   fl_set_pixmapbutton_focus_file((void *)ob,A_VC_charptr(fn))";
   fl fl set pixmapbutton focus file(ob,VZ fn)
END #fl set pixmapbutton focus file#

@d macro fl set pixmapbutton focus pixmap =
PROC(REF FLOBJECT,PIXMAP,PIXMAP)VOID fl set pixmapbutton focus pixmap =
   ALIEN "FL_SET_PIXMAPBUTTON_FOCUS_PIXMAP"
   "#define FL_SET_PIXMAPBUTTON_FOCUS_PIXMAP(ob,pix,mask) \"
   "   fl_set_pixmapbutton_focus_pixmap((void *)ob,pix,mask)"

@d macro fl set pixmapbutton data = macro fl set pixmap data
@m fl set pixmapbutton data = fl set pixmap data
@d macro fl set pixmapbutton file = macro fl set pixmap file
@m fl set pixmapbutton file = fl set pixmap file
@d macro fl set pixmapbutton pixmap = macro fl set pixmap pixmap
@m fl set pixmapbutton pixmap = fl set pixmap pixmap
@d macro fl get pixmapbutton pixmap = macro fl get pixmap pixmap
@m fl get pixmapbutton pixmap = fl get pixmap pixmap
@d macro fl set pixmapbutton align = macro fl set pixmap align
@m fl set pixmapbutton align = fl set pixmap align
@d macro fl free prixmapbutton pixmap = macro fl free pixmap pixmap
@m fl free prixmapbutton pixmap = fl free pixmap pixmap
@d macro fl set pixmapbutton show focus = macro fl set pixmapbutton focus outline
@m fl set pixmapbutton show focus = fl set pixmapbutton focus outline
@d macro fl set pixmapbutton datafile = macro fl set pixmapbutton file
@m fl set pixmapbutton datafile = fl set pixmapbutton file

@d macro fl get button =
PROC(REF FLOBJECT)INT fl get button = ALIEN "FL_GET_BUTTON"
   "#define FL_GET_BUTTON(ob) fl_get_button((void *)ob)"

@d macro fl set button =
PROC(REF FLOBJECT,INT)VOID fl set button = ALIEN "FL_SET_BUTTON"
   "#define FL_SET_BUTTON(ob,pushed) \"
   "   fl_set_button((void *)ob,pushed)"

@d macro fl get button numb =
PROC(REF FLOBJECT)INT fl get button numb = ALIEN "FL_GET_BUTTON_NUMB"
   "#define FL_GET_BUTTON_NUMB(ob) fl_get_button_numb((void *)ob)"

@d macro fl set button shortcut =
macro fl set object shortcut;
macro op vz;
PROC fl set button shortcut =
   (REF FLOBJECT ob,[]CHAR str,INT showit)VOID:
   fl set object shortcut(ob,VZ str,showit)

@d macro fl create generic button =
macro op vz;
PROC fl create generic button =
   (INT btn, type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,INT,
        FLCOORD,FLCOORD,FLCOORD,FLCOORD,
        VECTOR[]CHAR)REF FLOBJECT fl fl create generic button =
      ALIEN "FL_CREATE_GENERIC_BUTTON"
      "#define FL_CREATE_GENERIC_BUTTON(btn,type,x,y,w,h,label) \"
      "(void *)fl_create_generic_button(btn,type,x,y,w,h,A_VC_charptr(label))";
   fl fl create generic button(btn,type,x,y,w,h,VZ label)
END #fl create generic button#

@d macro fl add button class =
macro mode fldrawbutton;
macro mode flcleanupbutton;
macro op fldrawbutton to pdesc;
macro op flcleanupbutton to pdesc;
PROC fl add button class =@/
	(INT class,FLDRAWBUTTON draw,FLCLEANUPBUTTON cleanup)VOID:
BEGIN
	PROC(INT,CPTR,CPTR)VOID fl fl add button class =
   ALIEN "FL_ADD_BUTTON_CLASS"
   "#define FL_ADD_BUTTON_CLASS(objclass,draw,cleanup) \"
   "   fl_add_button_class(objclass,(void *)draw,(void *)cleanup)";
	fl fl add button class(class,cp OF TOPDESC draw,cp OF TOPDESC cleanup)
END

@2Canvases.

@m fl normal canvas = 0
@m fl scrolled canvas = 1

@d macro mode flhandlecanvas =
macro mode xevent;
MODE FLHANDLECANVAS =
   PROC(REF FLOBJECT,WINDOW,INT,INT,REF XEVENT,CPTR)INT

@d macro op flhandlecanvas to pdesc =
macro mode flhandlecanvas;
OP(FLHANDLECANVAS)PDESC FLHANDLECANVASTOPDESC = BIOP 99

@d macro mode flmodifycanvasprop =
MODE FLMODIFYCANVASPROP = PROC(REF FLOBJECT)INT

@ @m fl canvas boxtype = fl down box# really the decoration frame #
@m fl canvas align = fl align top
@m fl is canvas(ob) =
	(objclass OF ob = fl canvas OR objclass OF ob = fl glcanvas)
@m fl obj win(obj) = (fl is canvas(obj)|fl get canvas id(obj)|window OF form OF obj)
@m fl object win = fl obj win

@d macro fl create generic canvas =
macro op vz;
PROC fl create generic canvas =
   (INT cvs,type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl create generic canvas = ALIEN "FL_CREATE_GENERIC_CANVAS"
      "#define FL_CREATE_GENERIC_CANVAS(cvs,type,x,y,w,h,label) \"
      "(void *)fl_create_generic_canvas(cvs,type,x,y,w,h,A_VC_charptr(label))";
   fl fl create generic canvas(cvs,type,x,y,w,h,VZ label)
END #fl create generic canvas#

@d macro fl add canvas =
macro op vz;
PROC fl add canvas =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl add canvas = ALIEN "FL_ADD_CANVAS"
      "#define FL_ADD_CANVAS(type,x,y,w,h,label) \"
      "(void *)fl_add_canvas(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add canvas(type,x,y,w,h,VZ label)
END #fl add canvas#

@d macro fl create canvas =
macro op vz;
PROC fl create canvas =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl create canvas =ALIEN "FL_CREATE_CANVAS"
      "#define FL_CREATE_CANVAS(type,x,y,w,h,label) \"
      "(void *)fl_create_canvas(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create canvas(type,x,y,w,h,VZ label)
END #fl create canvas#

@d macro fl set canvas colormap =
PROC(REF FLOBJECT,COLORMAP)VOID fl set canvas colormap =
   ALIEN "FL_SET_CANVAS_COLORMAP"
   "#define FL_SET_CANVAS_COLORMAP(ob,map) \"
   "   fl_set_canvas_colormap((void *)ob,map)"

@d macro fl set canvas visual =
macro mode visual;
PROC(REF FLOBJECT,REF VISUAL)VOID fl set canvas visual =
   ALIEN "FL_SET_CANVAS_VISUAL"
   "#define FL_SET_CANVAS_VISUAL(ob,vis) \"
   "   fl_set_canvas_visual((void *)ob,(void *)vis)"

@d macro fl set canvas depth =
PROC(FLOBJECT,INT)VOID fl set canvas depth =
   ALIEN "FL_SET_CANVAS_DEPTH"
   "#define FL_SET_CANVAS_DEPTH(ob,depth) \"
   "   fl_set_canvas_depth((void *)ob,depth)"

@d macro fl set canvas attributes =
macro mode xsetwindowattributes;
PROC(REF FLOBJECT,BITS,REF XSETWINDOWATTRIBUTES)VOID
   fl set canvas attributes =
   ALIEN "FL_SET_CANVAS_ATTRIBUTES"
   "#define FL_SET_CANVAS_ATTRIBUTES(ob,mask,xswa) \"
   "   fl_set_canvas_attributes((void *)ob,mask,(void *)xswa)"

@d macro fl add canvas handler =
macro op flhandlecanvas to pdesc;
PROC fl add canvas handler =@/
	(REF FLOBJECT ob,INT ev,FLHANDLECANVAS h,CPTR data)CPTR:
BEGIN
    PROC(REF FLOBJECT,INT,CPTR,CPTR)CPTR fl fl add canvas handler =
	 ALIEN "FL_ADD_CANVAS_HANDLER"
   "#define FL_ADD_CANVAS_HANDLER(ob,event,handler,data) \"
   "  (void *)fl_add_canvas_handler((void *)ob,event,(void *)handler,(void *)data)";
	fl fl add canvas handler(ob,ev,cp OF FLHANDLECANVASTOPDESC h,data)
END

@d macro fl get canvas id =
PROC(REF FLOBJECT)WINDOW fl get canvas id =
   ALIEN "FL_GET_CANVAS_ID"
   "#define FL_GET_CANVAS_ID(ob) \"
   "   fl_get_canvas_id((void *)ob)"

@d macro fl get canvas colormap =
PROC(REF FLOBJECT)COLORMAP fl get canvas colormap =
   ALIEN "FL_GET_CANVAS_COLORMAP"
   "#define FL_GET_CANVAS_COLORMAP(ob) \"
   "   fl_get_canvas_colormap((void *)ob)"

@d macro fl get canvas depth =
PROC(REF FLOBJECT)INT fl get canvas depth =
   ALIEN "FL_GET_CANVAS_DEPTH"
   "#define FL_GET_CANVAS_DEPT(ob) \"
   "   fl_get_canvas_depth((void *)ob)"

@d macro fl remove canvas handler =
macro op flhandlecanvas to pdesc;
PROC fl remove canvas handler = (REF FLOBJECT ob,INT ev,FLHANDLECANVAS h)VOID:
BEGIN
	PROC(REF FLOBJECT,INT,CPTR)VOID fl fl remove canvas handler =
   	ALIEN "FL_REMOVE_CANVAS_HANDLER"
   	"#define FL_REMOVE_CANVAS_HANDLER(ob,ev,handler) \"
   	"   fl_remove_canvas_handler((void *)ob,ev,(void *)handler)";
	fl fl remove canvas handler(ob,ev,cp OF FLHANDLECANVASTOPDESC h)
END

@d macro fl hide canvas =
PROC(REF FLOBJECT)VOID fl hide canvas = ALIEN "FL_HIDE_CANVAS"
   "#define FL_HIDE_CANVAS(ob) fl_hide_canvas((void *)ob)"
   # internal use only #

@d macro fl canvas yield to shortcut =
PROC(REF FLOBJECT,INT)VOID fl canvas yield to shortcut =
   ALIEN "FL_CANVAS_YIELD_TO_SHORTCUT"
   "#define FL_CANVAS_YIELD_TO_SHORTCUT(ob,flag) \"
   "   fl_canvas_yield_to_shortcut((void *),flag)"

@d macro fl share canvas colormap =
PROC(REF FLOBJECT,COLORMAP)VOID fl share canvas colormap =
   ALIEN "FL_SHARE_CANVAS_COLORMAP"
   "#define FL_SHARE_CANVAS_COLORMAP(ob,map) \"
   "   fl_share_canvas_colormap((void *)ob,map)"

@d macro fl clear canvas =
PROC(REF FLOBJECT)VOID fl clear canvas =
   ALIEN "FL_CLEAR_CANVAS"
   "#define FL_CLEAR_CANVAS(ob) \"
   "   fl_clear_canvas((void *) ob)"

@d macro fl modify canvas prop =
macro mode flmodifycanvasprop;
PROC(REF FLOBJECT,
     FLMODIFYCANVASPROP,
     FLMODIFYCANVASPROP,
     FLMODIFYCANVASPROP)VOID fl modify canvas prop =
   ALIEN "FL_MODIFY_CANVAS_PROP"
   "#define FL_MODIFY_CANVAS_PROP(ob,init,activate,cleanup) \"
   "   fl_modify_canvas_prop((void *)ob,(void *)init,\"
   "      (void *)activate,(void *)cleanup)"

@2Charts.

@m fl bar chart = 0
@m fl horbar chart = 1
@m fl line chart = 2
@m fl fill chart = 3
@m fl spike chart = 4
@m fl pie chart = 5
@m fl specialpie chart = 6

@m fl filled chart = fl fill chart

@ Defaults.

@m fl chart boxtype = fl border box
@m fl chart col1 = fl col1
@m fl chart lcol = fl lcol
@m fl chart align = fl align bottom

@ Others.

@m fl chart max = 2048

@ Routines.

@d macro fl create chart =
macro op vz;
PROC fl create chart =
 (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
 PROC(INT,
 FLCOORD,FLCOORD,FLCOORD,FLCOORD,
 VECTOR[]CHAR)REF FLOBJECT fl fl create chart =
 ALIEN "FL_CREATE_CHART"
 "#define FL_CREATE_CHART(type,x,y,w,h,label) \"
 "(void *)fl_create_chart(type,x,y,w,h,A_VC_charptr(label))";
 fl fl create chart(type,x,y,w,h,VZ label)
END #fl create chart#

@d macro fl add chart =
macro op vz;
PROC fl add chart =
 (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
 PROC(INT,
 FLCOORD,FLCOORD,FLCOORD,FLCOORD,
 VECTOR[]CHAR)REF FLOBJECT fl fl add chart =
 ALIEN "FL_ADD_CHART"
 "#define FL_ADD_CHART(type,x,y,w,h,label) \"
 "(void *)fl_add_chart(type,x,y,w,h,A_VC_charptr(label))";
 fl fl add chart(type,x,y,w,h,VZ label)
END #fl add chart#

@d macro fl clear chart =
PROC(REF FLOBJECT)VOID fl clear chart = ALIEN "FL_CLEAR_CHART"
 "#define FL_CLEAR_CHART(ob) fl_clear_chart((void *)ob)"

@d macro fl add chart value =
macro op vz;
PROC fl add chart value =
 (REF FLOBJECT ob,REAL val,[]CHAR text,FLCOLOR color)VOID:
BEGIN
 PROC(REF FLOBJECT,REAL,VECTOR[]CHAR,FLCOLOR)VOID
 fl fl add chart value = ALIEN "FL_ADD_CHART_VALUE"
 "#define FL_ADD_CHART_VALUE(ob,val,text,color) \"
 " fl_add_chart_value((void *)ob, (double)val,\"
 " A_VC_charptr(text), color)";
 fl fl add chart value(ob,val,VZ text,color)
END #fl add chart value#

@d macro fl insert chart value =
macro op vz;
PROC fl insert chart value =
 (REF FLOBJECT ob,INT index,REAL val,[]CHAR text,FLCOLOR color)VOID:
BEGIN
 PROC(REF FLOBJECT,INT,REAL,VECTOR[]CHAR,FLCOLOR)VOID
 fl fl insert chart value = ALIEN "FL_INSERT_CHART_VALUE"
 "#define FL_INSERT_CHART_VALUE(ob,index,val,text,color) \"
 " fl_insert_chart_value((void *)ob, index,\"
 " (double)val, A_VC_charptr(text), color)";
 fl fl insert chart value(ob,index,val,VZ text,color)
END #fl insert chart value#

@d macro fl replace chart value =
macro op vz;
PROC fl replace chart value =
 (REF FLOBJECT ob,INT index,REAL val,[]CHAR text,FLCOLOR color)VOID:
BEGIN
 PROC(REF FLOBJECT,INT,REAL,VECTOR[]CHAR,FLCOLOR)VOID
 fl fl replace chart value = ALIEN "FL_REPLACE_CHART_VALUE"
 "#define FL_REPLACE_CHART_VALUE(ob,index,val,text,color) \"
 " fl_replace_chart_value((void *)ob,index,val,\"
 " A_VC_charptr(text),color)";
 fl fl replace chart value(ob,index,val,VZ text,color)
END #fl replace chart value#

@d macro fl set chart bounds =
PROC(REF FLOBJECT,REAL,REAL)VOID fl set chart bounds =
 ALIEN "FL_SET_CHART_BOUNDS"
 "#define FL_SET_CHART_BOUNDS(ob,min,max) \"
 " fl_set_chart_bounds((void *),min,max)"

@d macro fl get chart bounds =
PROC(REF FLOBJECT,REF REAL,REF REAL)VOID fl get chart bounds =
 ALIEN "FL_GET_CHART_BOUNDS"
 "#define FL_GET_CHART_BOUNDS(ob,min,max) \"
 " fl_get_chart_bounds((void *), (double *)min, (double *)max)"

@d macro fl set chart maxnumb =
PROC(REF FLOBJECT,INT)VOID fl set chart maxnumb =
 ALIEN "FL_SET_CHART_MAXNUMB"
 "#define FL_SET_CHART_MAXNUMB(ob,maxnumb) \"
 " fl_set_chart_maxnumb((void *),maxnumb)"

@d macro fl set chart autosize =
PROC(REF FLOBJECT,INT)VOID fl set chart autosize =
 ALIEN "FL_SET_CHART_AUTOSIZE"
 "#define FL_SET_CHART_AUTOSIZE(ob,autosize) \"
 " fl_set_chart_autosize((void *)ob,autosize)"

@d macro fl set chart lstyle =
PROC(REF FLOBJECT,INT)VOID fl set chart lstyle =
 ALIEN "FL_SET_CHART_LSTYLE"
 "#define FL_SET_CHART_LSTYLE(ob,fontstyle) \"
 " fl_set_chart_lstyle((void *)ob,fontstyle)"

@d macro fl set chart lsize =
PROC(REF FLOBJECT,INT)VOID fl set chart lsize =
 ALIEN "FL_SET_CHART_LSIZE"
 "#define FL_SET_CHART_LSIZE(ob,fontsize) \"
 " fl_set_chart_lsize((void *)ob,fontsize)"

@m fl set chart lcol = fl set chart lcol

@d macro fl set chart lcolor =
PROC(REF FLOBJECT,FLCOLOR)VOID fl set chart lcolor =
 ALIEN "FL_SET_CHART_LCOLOR"
 "#define FL_SET_CHART_LCOLOR(ob,color) \"
 " fl_set_chart_lcolor((void *)ob, color)"

@2XY plot.

@m fl normal xyplot = 0      # solid line                        #
@m fl square xyplot = 1      # with added square                 #
@m fl circle xyplot = 2      # with added circle                 #
@m fl fill xyplot = 3        # fill completely                   #
@m fl points xyplot = 4      # only data points                  #
@m fl dashed xyplot = 5      # dashed line                       #
@m fl impulse xyplot = 6
@m fl active xyplot = 7      # accepts interactive manipulations #
@m fl empty xyplot = 8
@m fl dotted xyplot = 9
@m fl dotdashed xyplot = 10
@m fl longdashed xyplot = 11
@m fl linepoints xyplot = 12 # line & points                     #

@m fl linear = 0
@m fl log = 1

@m fl grid none = 0
@m fl grid major = 1
@m fl grid minor = 2

@ Defaults.

@m fl xyplot boxtype = fl flat box
@m fl xyplot col1 = fl col1
@m fl xyplot lcol = fl lcol
@m fl xyplot align = fl align bottom
@m fl max xyplotoverlay = 32

@ Routines.

@d macro fl create xyplot =
macro op vz;
PROC fl create xyplot =
 (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
 PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
 fl fl create xyplot = ALIEN "FL_CREATE_XYPLOT"
 "#define FL_CREATE_XYPLOT(type,x,y,w,h,label) \"
 " (void *)fl_create_xyplot(type,x,y,w,h,A_VC_charptr(label))";
 fl fl create xyplot(type,x,y,w,h,VZ label)
END #fl create xyplot#

@d macro fl add xyplot =
macro op vz;
PROC fl add xyplot =
 (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
 PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
 fl fl add xyplot = ALIEN "FL_ADD_XYPLOT"
 "#define FL_ADD_XYPLOT(type,x,y,w,h,label) \"
 " (void *)fl_add_xyplot(type,x,y,w,h,A_VC_charptr(label))";
 fl fl add xyplot(type,x,y,w,h,VZ label)
END #fl add xyplot#

@d macro fl set xyplot data =
macro op vz;
PROC fl set xyplot data =
   (REF FLOBJECT ob,[,]SHORT REAL xy,[]CHAR title,xlab,ylab)VOID:
BEGIN
   PROC(REF FLOBJECT,VECTOR[]SHORT REAL,VECTOR[]SHORT REAL,INT,
   VECTOR[]CHAR,VECTOR[]CHAR,VECTOR[]CHAR)VOID
   fl fl set xyplot data = ALIEN "FL_SET_XYPLOT_DATA"
   "#define FL_SET_XYPLOT_DATA(ob,x,y,n,title,xlabel,ylabel) \"
   " fl_set_xyplot_data((void *)ob,(float *)x.data,(float *)y.data,n,\"
   " A_VC_charptr(title),A_VC_charptr(xlabel),A_VC_charptr(ylabel))";
   INT upb=1 UPB xy-1 LWB xy+1;
   VECTOR[upb]SHORT REAL lx,ly;
   
   FOR i TO upb
   DO
      lx[i]:=xy[@@1,@@1][i,1]
   OD;
   FOR i TO upb
   DO
      ly[i]:=xy[@@1,@@1][i,2]
   OD;
   fl fl set xyplot data(ob,lx,ly,upb,VZ title,VZ xlab,VZ ylab)
END #fl set xyplot data#

@d macro fl set xyplot file =
macro op vz;
PROC fl set xyplot file =
   (REF FLOBJECT ob,[]CHAR f,title,xl,yl)INT:
BEGIN
   PROC(REF FLOBJECT,VECTOR[]CHAR,VECTOR[]CHAR,VECTOR[]CHAR,VECTOR[]CHAR)INT
      fl fl set xyplot file = ALIEN "FL_SET_XYPLOT_FILE"
   "#define FL_SET_XYPLOT_FILE(ob,f,title,xl,yl) \"
   " fl_set_xyplot_file((void *)ob,A_VC_charptr(f),A_VC_charptr(title),\"
   " A_VC_charptr(xl),A_VC_charptr(yl))";
   fl fl set xyplot file(ob,VZ f,VZ title,VZ xl,VZ yl)
END #fl set xyplot file#

@d macro fl insert xyplot data =
PROC(REF FLOBJECT,INT,INT,REAL,REAL)VOID fl insert xyplot data =
 ALIEN "FL_INSERT_XYPLOT_DATA"
 "#define FL_INSERT_XYPLOT_DATA(ob,id,n,x,y) \"
 " fl_insert_xyplot_data((void *)obj ob,id,n,(double)x,(double)y)"

@d macro fl add xyplot text =
macro op vz;
PROC fl add xyplot text =
 (REF FLOBJECT ob,REAL x,y,[]CHAR text,BITS al,FLCOLOR color)VOID:
BEGIN
 PROC(REF FLOBJECT,REAL,REAL,VECTOR[]CHAR,BITS,FLCOLOR)VOID
 fl fl add xyplot text = ALIEN "FL_ADD_XYPLOT_TEXT"
 "#define FL_ADD_XYPLOT_TEXT(ob,x,y,text,al,color) \"
 " fl_add_xyplot_text((void *)ob,(double)x,(double)y,\"
 " A_VC_charptr(text),al,color)";
 fl fl add xyplot text(ob,x,y,VZ text,al,color)
END #fl add xyplot text#

@d macro fl delete xyplot text =
macro op vz;
PROC fl delete xyplot text = (REF FLOBJECT ob,[]CHAR text)VOID:
BEGIN
 PROC(REF FLOBJECT,VECTOR[]CHAR)VOID fl fl delete xyplot text =
 ALIEN "FL_DELETE_XYPLOT_TEXT"
 "#define FL_DELETE_XYPLOT_TEXT(ob,text) \"
 " fl_delete_xyplot_text((void *)ob,A_VC_charptr(text))";
 fl fl delete xyplot text(ob,VZ text)
END #fl delete xyplot text#

@d macro fl set xyplot maxoverlays =
PROC(REF FLOBJECT,INT)INT fl set xyplot maxoverlays =
 ALIEN "FL_SET_XYPLOT_MAXOVERLAYS"
 "#define FL_SET_XYPLOT_MAXOVERLAYS(ob,maxover) \"
 " fl_set_xyplot_maxoverlays((void *)ob,maxover)"

@d macro fl add xyplot overlay =
PROC fl add xyplot overlay =
   (REF FLOBJECT ob,
    INT id,
    []FLPOINT xy,
    FLCOLOR color)VOID:
BEGIN
   PROC(REF FLOBJECT,INT,
        VECTOR[]SHORT REAL,
	VECTOR[]SHORT REAL,INT,FLCOLOR)VOID
   fl fl add xyplot overlay = ALIEN "FL_ADD_XYPLOT_OVERLAY"
   "#define FL_ADD_XYPLOT_OVERLAY(ob,id,x,y,n,color) \"
   " fl_add_xyplot_overlay(\"
   " (void *)ob,id,(float *)x.data,(float *)y.data,n,color)";
   INT upb=UPB xy-LWB xy+1;
   VECTOR[upb]SHORT REAL lx,ly;
   FOR i TO upb
   DO
      lx[i]:=x OF xy[@@1][i];
      ly[i]:=y OF xy[@@1][i]
   OD;
   fl fl add xyplot overlay(ob,id,lx,ly,upb,color)
END #fl add xyplot overlay#

@d macro fl add xyplot overlay file =
macro op vz;
PROC fl add xyplot overlay file =
 (REF FLOBJECT ob,INT id,[]CHAR f,FLCOLOR c)INT:
BEGIN
 PROC(REF FLOBJECT,INT,VECTOR[]CHAR,FLCOLOR)INT
 fl fl add xyplot overlay file = ALIEN "FL_ADD_XYPLOT_OVERLAY_FILE"
 "#define FL_ADD_XYPLOT_OVERLAY_FILE(ob,id,f,c) \"
 " fl_add_xyplot_overlay_file((void *)ob,id,A_VC_charptr(f),c)";
 fl fl add xyplot overlay file(ob,id,VZ f,c)
END #fl add xyplot overlay file#

@d macro fl set xyplot return =
PROC(REF FLOBJECT,INT)VOID fl set xyplot return =
 ALIEN "FL_SET_XYPLOT_RETURN"
 "#define FL_SET_XYPLOT_RETURN(ob,when) \"
 " fl_set_xyplot_return((void *)ob,when)"

@d macro fl set xyplot xtics =
PROC(REF FLOBJECT,INT,INT)VOID fl set xyplot xtics =
 ALIEN "FL_SET_XYPLOT_XTICS"
 "#define FL_SET_XYPLOT_XTICS(ob,major,minor) \"
 " fl_set_xyplot_xtics((void *)ob,major,minor)"

@d macro fl set xyplot ytics =
PROC(REF FLOBJECT,INT,INT)VOID fl set xyplot ytics =
 ALIEN "FL_SET_XYPLOT_YTICS"
 "#define FL_SET_XYPLOT_YTICS(ob,major,minor) \"
 " fl_set_xyplot_ytics((void *)ob,major,minor)"

@d macro fl set xyplot xbounds =
PROC(REF FLOBJECT,REAL,REAL)VOID fl set xyplot xbounds =
 ALIEN "FL_SET_XYPLOT_XBOUNDS"
 "#define FL_SET_XYPLOT_XBOUNDS(ob,xmin,xmax) \"
 " fl_set_xyplot_xbounds((void *)ob,(double)xmin,(double)xmax)"

@d macro fl set xyplot ybounds =
PROC(REF FLOBJECT,REAL,REAL)VOID fl set xyplot ybounds =
 ALIEN "FL_SET_XYPLOT_YBOUNDS"
 "#define FL_SET_XYPLOT_YBOUNDS(ob,ymin,ymax) \"
 " fl_set_xyplot_ybounds((void *)ob,(double)ymin,(double)ymax)"

@d macro fl get xyplot xbounds =
PROC(REF FLOBJECT,REF SHORT REAL,REF SHORT REAL)VOID
 fl get xyplot xbounds = ALIEN "FL_GET_XYPLOT_XBOUNDS"
 "#define FL_GET_XYPLOT_XBOUNDS(ob,xmin,xmax) \"
 " fl_get_xyplot_xbounds((void *)ob,(float *)xmin,(float *)xmax)"

@d macro fl get xyplot ybounds =
PROC(REF FLOBJECT,REF SHORT REAL,REF SHORT REAL)VOID
 fl get xyplot ybounds = ALIEN "FL_GET_XYPLOT_YBOUNDS"
 "#define FL_GET_XYPLOT_YBOUNDS(ob,ymin,ymax) \"
 " fl_get_xyplot_ybounds((void *)ob,(float *)ymin,(float *)ymax)"

@d macro fl get xyplot =
PROC(REF FLOBJECT,REF SHORT REAL,REF SHORT REAL,REF INT)VOID
 fl get xyplot = ALIEN "FL_GET_XYPLOT"
 "#define FL_GET_XYPLOT(ob,x,y,i) \"
 " fl_get_xyplot((void *)ob, (float *)x, (float *)y, (int *)i)"

@d macro fl get xyplot data =
PROC fl get xyplot data =
   (REF FLOBJECT ob,REF[,]SHORT REAL xy)VOID:
BEGIN
   PROC(REF FLOBJECT,REF SHORT REAL,REF SHORT REAL,REF INT)VOID
   fl fl get xyplot data = ALIEN "FL_GET_XYPLOT_DATA"
   "#define FL_GET_XYPLOT_DATA(ob,x,y,n) \"
   " fl_get_xyplot_data((void *)ob,(float *)x,(float *)y,(int *)n)";
   INT upb=1 UPB xy;
   VECTOR[upb]SHORT REAL lx,ly;
   REF[,]SHORT REAL lxy=xy[@@1,@@1];
   fl fl get xyplot data(ob,lx,ly,upb);
   FOR i TO 1 UPB lxy
   DO
      lxy[i,]:=(lx[i],ly[i])
   OD
END

@d macro fl get xyplot data pointer =
PROC(REF FLOBJECT,INT,
     REF REF SHORT REAL,REF REF SHORT REAL,
     REF INT)VOID
 fl get xyplot data pointer = ALIEN "FL_GET_XYPLOT_DATA_POINTER"
 "#define FL_GET_XYPLOT_DATA_POINTER(ob,id,x,y,n) \"
 " fl_get_xyplot_data_pointer((void *)ob,id,(float **)x,\"
 " (float **)y,(int *)n)"

@d macro fl get xyplot overlay data =
PROC fl get xyplot overlay data=
   (REF FLOBJECT ob,INT id,REF[]FLPOINT data,REF INT n)VOID:
BEGIN
   PROC(REF FLOBJECT,INT,
        REF VECTOR[]SHORT REAL,REF VECTOR[]SHORT REAL,
        REF INT)VOID
   fl fl get xyplot overlay data = ALIEN "FL_GET_XYPLOT_OVERLAY_DATA"
   "#define FL_GET_XYPLOT_OVERLAY_DATA(ob,id,x,y,n) \"
   " fl_get_xyplot_overlay_data((void *)ob,id,(float *)x,\"
   " (float *)y,(int *)n)";
   VECTOR[UPB data-LWB data+1]SHORT REAL lx,ly;
   fl fl get xyplot overlay dataf(ob,id,lx.data,ly.data,n);
   FOR i TO n MIN UPB lx
   DO
      x OF data[@@1][i]:=lx[i];
      y OF data[@@1][i]:=ly[i]
   OD
END #fl get xyplot overlay data#

@d macro fl set xyplot overlay type =
PROC(REF FLOBJECT,INT,INT)VOID fl set xyplot overlay type =
 ALIEN "FL_SET_XYPLOT_OVERLAY_TYPE"
 "#define FL_SET_XYPLOT_OVERLAY_TYPE(ob,id,type) \"
 " fl_set_xyplot_overlay_type((void *)ob,id,type)"

@d macro fl delete xyplot overlay =
PROC(REF FLOBJECT,INT)VOID fl delete xyplot overlay =
 ALIEN "FL_DELETE_XYPLOT_OVERLAY"
 "#define FL_DELETE_XYPLOT_OVERLAY(ob,id) \"
 " fl_delete_xyplot_overlay((void *)ob,id)"

@d macro fl set xyplot interpolate =
PROC(REF FLOBJECT,INT,INT,REAL)VOID fl set xyplot interpolate =
 ALIEN "FL_SET_XYPLOT_INTERPOLATE"
 "#define FL_SET_XYPLOT_INTERPOLATE(ob,id,deg,grid) \"
 " fl_set_xyplot_interpolate((void *)ob,id,deg,(double)grid)"

@d macro fl set xyplot inspect =
PROC(REF FLOBJECT,INT)VOID fl set xyplot inspect =
 ALIEN "FL_SET_XYPLOT_INSPECT"
 "#define FL_SET_XYPLOT_INSPECT(ob,yes) \"
 " fl_set_xyplot_inspect((void *)ob,yes)"

@d macro fl set xyplot symbolsize =
PROC(REF FLOBJECT,INT)VOID fl set xyplot symbolsize =
 ALIEN "FL_SET_XYPLOT_SYMBOLSIZE"
 "#define FL_SET_XYPLOT_SYMBOLSIZE(ob,n) \"
 " fl_set_xyplot_symbolsize((void *)ob,n)"

@d macro fl replace xyplot point =
PROC(REF FLOBJECT,INT,REAL,REAL)VOID fl replace xyplot point =
 ALIEN "FL_REPLACE_XYPLOT_POINT"
 "#define FL_REPLACE_XYPLOT_POINT(ob,i,x,y) \"
 " fl_replace_xyplot_point((void *)ob,i,(double)x,(double)y)"

@d macro fl get xyplot xmapping =
PROC(REF FLOBJECT,REF SHORT REAL,REF SHORT REAL)VOID
 fl get xyplot xmapping = ALIEN "FL_GET_XYPLOT_XMAPPING"
 "#define FL_GET_XYPLOT_XMAPPING(ob,a,b) \"
 " fl_get_xyplot_xmapping((void *)ob,(float *)a,(float *)b)"

@d macro fl get xyplot ymapping =
PROC(REF FLOBJECT,REF SHORT REAL,REF SHORT REAL)VOID
 fl get xyplot ymapping = ALIEN "FL_GET_XYPLOT_YMAPPING"
 "#define FL_GET_XYPLOT_YMAPPING(ob,a,b) \"
 " fl_get_xyplot_ymapping((void *)ob,(float *)a,(float *)b)"

@d macro fl set xyplot keys =
PROC fl set xyplot keys =
   (REF FLOBJECT ob,[][]CHAR keys,SHORT REAL x,y,BITS align)VOID:
BEGIN
   PROC(REF FLOBJECT,
        CCHARPTRPTR,
        SHORT REAL,SHORT REAL,
        BITS)VOID
   fl fl set xyplot keys = ALIEN "FL_SET_XYPLOT_KEYS"
   "#define FL_SET_XYPLOT_KEYS(ob,keys,x,y,align) \"
   " fl_set_xyplot_key((void *)ob,(char **)keys,\"
   " (float)x,(float)y,align)";
   VECTOR[UPB keys-LWB keys+2]RVC lk;
   FOR i TO UPB lk-1
   DO
      lk[i]:=MAKERVC keys[@@1][i]
   OD;
   lk[UPB lk]:=MAKERVC "";
   fl fl set xyplot keys(ob,(char **)lk.data,x,y,align)
END #fl set xyplot keys#

@d macro fl set xyplot key =
macro op vz;
PROC fl set xyplot key = (REF FLOBJECT ob,INT id,[]CHAR key)VOID:
BEGIN
 PROC(REF FLOBJECT,INT,VECTOR[]CHAR)VOID fl fl set xyplot key =
 ALIEN "FL_SET_XYPLOT_KEY"
 "#define FL_SET_XYPLOT_KEY(ob,id,key) \"
 " fl_set_xyplot_key((void *)ob,id,A_VC_charptr(key))";
 fl fl set xyplot key(ob,id,VZ key)
END #fl set xyplot key#

@d macro fl set xyplot key position =
PROC(REF FLOBJECT,SHORT REAL,SHORT REAL,INT)VOID
 fl set xyplot key position = ALIEN "FL_SET_XYPLOT_KEY_POSITION"
 "#define FL_SET_XYPLOT_KEY_POSITION(ob,x,y,align) \"
 " fl_set_xyplot_key_position((void *)ob,(float)x,(float)y,align)"

@d macro fl set xyplot key font =
PROC(REF FLOBJECT,INT,INT)VOID fl set xyplot key font =
 ALIEN "FL_SET_XYPLOT_KEY_FONT"
 "#define FL_SET_XYPLOT_KEY_FONT(ob,style,size) \"
 " fl_set_xyplot_key_font((void *)ob,style,size)"

@d macro fl get xyplot numdata =
PROC(REF FLOBJECT,INT)INT fl get xyplot numdata =
 ALIEN "FL_GET_XYPLOT_NUMDATA"
 "#define FL_GET_XYPLOT_NUMDATA(ob,id) \"
 " fl_get_xyplot_numdata((void *)obj ob,id)"

@d macro fl xyplot s2w =
PROC(REF FLOBJECT,REAL,REAL,
     REF SHORT REAL,REF SHORT REAL)VOID
 fl xyplot s2w = ALIEN "FL_XYPLOT_S2W"
 "#define FL_XYPLOT_S2W(ob,sx,sy,wx,wy) \"
 " fl_xyplot_s2w((void *)ob,(double)sx,(double)sy,\"
 " (float *)wx,(float *)wy)"

@d macro fl xyplot w2s =
PROC(REF FLOBJECT,REAL,REAL,
     REF SHORT REAL,REF SHORT REAL)VOID
 fl xyplot w2s = ALIEN "FL_XYPLOT_W2S"
 "#define FL_XYPLOT_W2S(ob,wx,wy,sx,sy) \"
 " fl_xyplot_w2s((void *)ob,(double)wx,(double)wy,\"
 " (float *)sx,(float *)sy)"

@d macro fl set xyplot xscale =
PROC(REF FLOBJECT,INT,REAL)VOID fl set xyplot xscale =
 ALIEN "FL_SET_XYPLOT_XSCALE"
 "#define FL_SET_XYPLOT_XSCALE(ob,scale,base) \"
 " fl_set_xyplot_xscale((void *)ob,scale,(double)base)"

@d macro fl set xyplot yscale =
PROC(REF FLOBJECT,INT,REAL)VOID fl set xyplot yscale =
 ALIEN "FL_SET_XYPLOT_YSCALE"
 "#define FL_SET_XYPLOT_YSCALE(ob,scale,base) \"
 " fl_set_xyplot_yscale((void *)ob,scale,(double)base)"

@d macro fl clear xyplot =
PROC(REF FLOBJECT)VOID fl clear xyplot =
 ALIEN "FL_CLEAR_XYPLOT"
 "#define FL_CLEAR_XYPLOT(ob) fl_clear_xyplot((void *)ob)"

@d macro fl set xyplot linewidth =
PROC(REF FLOBJECT,INT,INT)VOID fl set xyplot linewidth =
 ALIEN "FL_SET_XYPLOT_LINEWIDTH"
 "#define FL_SET_XYPLOT_LINEWIDTH(ob,id,lw) \"
 " fl_set_xyplot_linewidth((void *)ob,id,lw)"

@d macro fl set xyplot xgrid =
PROC(REF FLOBJECT,INT)VOID fl set xyplot xgrid =
 ALIEN "FL_SET_XYPLOT_XGRID"
 "#define FL_SET_XYPLOT_XGRID(ob,xgrid) \"
 " fl_set_xyplot_xgrid((void *)ob,xgrid)"

@d macro fl set xyplot ygrid =
PROC(REF FLOBJECT,INT)VOID fl set xyplot ygrid =
 ALIEN "FL_SET_XYPLOT_YGRID"
 "#define FL_SET_XYPLOT_YGRID(ob,ygrid) \"
 " fl_set_xyplot_ygrid((void *)ob,ygrid)"

@d macro fl set xyplot grid linestyle =
PROC(REF FLOBJECT,INT)INT fl set xyplot grid linestyle =
 ALIEN "FL_SET_XYPLOT_GRID_LINESTYLE"
 "#define FL_SET_XYPLOT_GRID_LINESTYLE(ob,style) \"
 " fl_set_xyplot_grid_linestyle((void *)ob,style)"

@d macro fl set xyplot alphaxtics =
macro op vz;
PROC fl set xyplot alphaxtics =
 (REF FLOBJECT ob,[]CHAR m,s)VOID:
BEGIN
 PROC(REF FLOBJECT,VECTOR[]CHAR,VECTOR[]CHAR)VOID
 fl fl set xyplot alphaxtics = ALIEN "FL_SET_XYPLOT_ALPHAXTICS"
 "#define FL_SET_XYPLOT_ALPHAXTICS(ob,m,s) \"
 " fl_set_xyplot_alphaxtics((void *)ob,A_VC_charptr(m),A_VC_charptr(s))";
 fl fl set xyplot alphaxtics(ob,VZ m,VZ s)
END #fl set xyplot alphaxtics#

@d macro fl set xyplot alphaytics =
macro op vz;
PROC fl set xyplot alphaytics = (REF FLOBJECT ob,[]CHAR m,s)VOID:
BEGIN
 PROC(REF FLOBJECT,VECTOR[]CHAR,VECTOR[]CHAR)VOID
 fl fl set xyplot alphaytics = ALIEN "FL_SET_XYPLOT_ALPHAYTICS"
 "#define FL_SET_XYPLOT_ALPHAYTICS(ob,m,s) \"
 " fl_set_xyplot_alphaytics((void *)ob,A_VC_charptr(m),A_VC_charptr(s))";
 fl fl set xyplot alphaytics(ob,VZ m,VZ s)
END #fl set xyplot alphaytics#

@d macro fl set xyplot fixed xaxis =
macro op vz;
PROC fl set xyplot fixed xaxis = (REF FLOBJECT ob,[]CHAR lm,rm)VOID:
BEGIN
 PROC(REF FLOBJECT,VECTOR[]CHAR,VECTOR[]CHAR)VOID
 fl fl set xyplot fixed xaxis = ALIEN "FL_SET_XYPLOT_FIXED_XAXIS"
 "#define FL_SET_XYPLOT_FIXED_XAXIS(ob,lm,rm) \"
 " fl_set_xyplot_fixed_xaxis((void *)ob,A_VC_charptr(lm),A_VC_charptr(rm))";
 fl fl set xyplot fixed xaxis(ob,VZ lm,VZ rm)
END #fl set xyplot fixed xaxis#

@d macro fl set xyplot fixed yaxis =
macro op vz;
PROC fl set xyplot fixed yaxis = (REF FLOBJECT ob,[]CHAR bm,tm)VOID:
BEGIN
 PROC(REF FLOBJECT,VECTOR[]CHAR,VECTOR[]CHAR)VOID
 fl fl set xyplot fixed yaxis = ALIEN "FL_SET_XYPLOT_FIXED_YAXIS"
 "#define FL_SET_XYPLOT_FIXED_YAXIS(ob,bm,tm) \"
 " fl_set_xyplot_fixed_yaxis((void *)ob,A_VC_charptr(bm),A_VC_charptr(tm))";
 fl fl set xyplot fixed yaxis(ob,VZ bm,VZ tm)
END #fl set xyplot fixed yaxis#

@d macro fl interpolate =
PROC fl interpolate=
	([]SHORT REAL wx,wy,REF[]SHORT REAL x,y,REAL grid,INT ndeg)INT:
BEGIN
	PROC(VECTOR[]SHORT REAL,VECTOR[]SHORT REAL,
        INT,
	     REF VECTOR[]SHORT REAL,REF VECTOR[]SHORT REAL,
	     REAL,INT)INT fl fl interpolate = ALIEN "FL_INTERPOLATE"
      "#define FL_INTERPOLATE(wx,wy,nin,x,y,grid,ndeg) \"
      "   fl_interpolate((const float *)wx.data,\"
		"                  (const float *)wy.data,"
		"                  nin,\"
		"                  (float *)x.data,\"
		"                  (float *)y.data,(double)grid,ndeg)";
   VECTOR[UPB wx@@1]SHORT REAL lwx;
   VECTOR[UPB wy@@1]SHORT REAL lwy;
   VECTOR[UPB x@@1]SHORT REAL lx;
   VECTOR[UPB y@@1]SHORT REAL ly;
   #Populate the vectors#
   FOR i TO UPB lwx MIN UPB lwy
   DO
      lwx[i]:=wx[@@1][i];
      lwy[i]:=wy[@@1][i]
   OD;
   INT res=fl fl interpolate(lws,lwy,UPB lwx MIN UPB lwy,lx,ly,grid,ndeg);
   #Extract the data into the multiples x,y#
   FOR i TO UPB lx
   DO
      x[@@1][i]:=lx[i];
      y[@@1][i]:=ly[i]
   OD;
   #Yield the result#
   res
END #fl interpolate#

@d macro fl spline interpolate =
PROC fl spline interpolate =
   ([]SHORT REAL wx,wy,REF[]SHORT REAL x,y,REAL grid)INT:
BEGIN
   PROC(VECTOR[]SHORT REAL,VECTOR[] SHORT REAL,INT,
        REF VECTOR[]SHORT REAL,REF VECTOR[]SHORT REAL,REAL)INT
      fl fl spline interpolate = ALIEN "FL_SPLINE_INTERPOLATE"
      "#define FL_SPLINE_INTERPOLATE(wx,wy,nin,x,y,grid) \"
      "   fl_spline_interpolate(\"
		"       (const float *)wx.data,\"
		"       (const float *)wy.data,nin,\"
      "       (float *)x.data,(float *)y.data,(double)grid)";
   VECTOR[UPB wx@@1]SHORT REAL lwx,lwy;
   VECTOR[UPB x@@1]SHORT REAL lx,ly;
   #Populate the vectors#
   FOR i TO UPB lwx MIN UPB lwy
   DO
      lwx[i]:=wx[@@1][i];
      lwy[i]:=wy[@@1][i]
   OD;
   INT res=fl fl spline interpolate(lws,lwy,UPB lwx,lx,ly,grid,ndeg);
   #Extract the data into the multiples x,y#
   FOR i TO UPB lx
   DO
      x[@@1][i]:=lx[i];
      y[@@1][i]:=ly[i]
   OD;
   #Yield the result#
   res
END #fl spline interpolate#

@d macro mode flxyplotsymbol =
macro mode flpoint;
MODE FLXYPLOTSYMBOL = PROC(REF FLOBJECT,INT,REF FLPOINT,INT,INT,INT)VOID;

@ @d macro fl set xyplot symbol =
macro mode flxyplotsymbol;
PROC(REF FLOBJECT,INT,FLXYPLOTSYMBOL)CPTR
 fl set xyplot symbol = ALIEN "FL_SET_XYPLOT_SYMBOL"
 "#define FL_SET_XYPLOT_SYMBOL(ob,id,symbol) \"
 " (void *)fl_set_xyplot_symbol((void *)ob,id,(void *)symbol)"

@d macro fl set xyplot mark active =
PROC(REF FLOBJECT,INT)INT fl set xyplot mark active =
 ALIEN "FL_SET_XYPLOT_MARK_ACTIVE"
 "#define FL_SET_XYPLOT_MARK_ACTIVE(ob,y) \"
 " fl_set_xyplot_mark_active((void *)ob,y)"

@2Choice.

@m fl normal choice = 0
@m fl normal choice2 = 1
@m fl droplist choice = 2
@m fl browser choice = 3
@m fl simple choice = fl normal choice

@ Defaults.

@m fl choice boxtype = fl rounded box
@m fl choice col1 = fl col1
@m fl choice col2 = fl lcol
@m fl choice lcol = fl lcol
@m fl choice align = fl align left

@ Others.

@m fl choice mcol = fl mcol
@m fl choice maxitems = fl max menu choice items

@ The mode !PUPENTRY! is only used internally. The user specifies the mode
!FLPUPENTRY! defined below.

@d macro mode pupentry =
MODE PUPENTRY =
   STRUCT(CCHARPTR tx,
          CPTR cb,
          CCHARPTR sh,
          BITS md,
	       BITS pad1,pad2)

@d macro mode fl pupicb =
MODE FLPUPICB = PROC(INT)INT

@d macro mode fl pupiccb =
MODE FLPUPICCB = PROC(INT,CPTR)VOID

@d macro mode fl pupentry =
macro mode fl pupicb;
MODE FLPUPENTRY =
	STRUCT(STRING text,           # label of a popup/menu item #
			 REF FLPUPICB callback, # the callback function      #
			 STRING shortcut,       # hotkeys                    #
			 BITS mode)             # fl pup grey etc            #

@d macro mode fl pupentercb =
macro mode fl pupiccb;
MODE FLPUPENTERCB = FLPUPICCB

@d macro mode fl pupleavecb =
macro mode fl pupiccb;
MODE FLPUPLEAVECB = FLPUPICCB

@d macro op fl pupicb to pdesc =
macro mode fl pupicb;
OP(FLPUPICB)PDESC FLPUPICBTOPDESC = BIOP 99

@d macro op fl pupiccb to pdesc =
macro mode fl pupiccb;
OP(FLPUPICCB)PDESC FLPUPICCBTOPDESC = BIOP 99

@d macro flpup to pup =
macro mode flpupentry;
macro mode pupentry;
macro op fl pupicb to pdesc;
macro op vz;
PROC flpup to pup = ([]FLPUPENTRY fpe)VECTOR[]PUPENTRY:
BEGIN
	HEAP VECTOR[UPB fpe[@@1]]PUPENTRY pe;
	INT chars max:=0;
	FOR i TO UPB fpe[@@1]
	DO
		FLPUPENTRY fpei=fpe[@@1][i];
		IF text OF fpei/=""
		THEN chars max+:=UPB(text OF fpei)[@@2]
		FI;
		IF shortcut OF fpei/=""
		THEN chars max+:=UPB(shortcut OF fpei)[@@2]
		FI
	OD;
	HEAP VECTOR[chars max]CHAR vch;
	INT vchx:=0;
	
	#Stuff the characters into !vch! and the reference into !pe!#
	FOR i TO UPB fpe[@@1]
	DO
		FLPUPENTRY fpei=fpe[@@1][i];
		REF PUPENTRY pei=pe[i];
		IF text OF fpei=""
		THEN tx OF pei:=NIL
		ELSE
			INT delta=UPB(text OF fpei)[@@1]+1;
			vch[vchx+1:vchx+delta]:=VZ text OF fpei;
			tx OF pei:=vch[vchx+1];
			vchx+:=delta
		FI;
		IF shortcut OF fpei=""
		THEN sh OF pei:=NIL
		ELSE
			INT delta=UPB(shortcut OF fpei)[@@1]+1;
			vch[vchx+1:vchx+delta]:=VZ shortcut OF fpei;
			sh OF pei:=vch[vchx+1];
			vchx+:=delta
		FI;
		cb OF pei:=
			IF callback OF fpei IS NIL
			THEN NIL
			ELSE cp OF FLPUPICBTOPDESC callback OF fpei
			FI;
		md OF pei:=mode OF fpei;
		pad1 OF pei:=pad2 OF pei:=2r0
	OD;
	pe
END #flpup to pup#

@m fl maxpupi = 128 # max item each pup       #
@m fl pup padh = 4  # space between each item #

@d macro mode flarg =
macro mode flpupicb;
MODE FLARG = UNION(VOID,INT,[]CHAR,FLPUPICB)

@ Routines.

@d macro fl create choice =
macro op vz;
PROC fl create choice =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,
        FLCOORD,FLCOORD,FLCOORD,FLCOORD,
        VECTOR[]CHAR)REF FLOBJECT fl fl create choice =
      ALIEN "FL_CREATE_CHOICE"
      "#define FL_CREATE_CHOICE(type,x,y,w,h,label) \"
      "(void *)fl_create_choice(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create choice(type,x,y,w,h,VZ label)
END #fl create choice#

@d macro fl add choice =
macro op vz;
PROC fl add choice =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,
        FLCOORD,FLCOORD,FLCOORD,FLCOORD,
        VECTOR[]CHAR)REF FLOBJECT fl fl add choice =
      ALIEN "FL_ADD_CHOICE"
      "#define FL_ADD_CHOICE(type,x,y,w,h,label) \"
      "(void*)fl_add_choice(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add choice(type,x,y,w,h,VZ label)
END #fl add choice#

@d macro fl clear choice =
PROC(REF FLOBJECT)VOID fl clear choice = ALIEN "FL_CLEAR_CHOICE"
   "#define FL_CLEAR_CHOICE(ob) fl_clear_choice((void *)ob)"

@d macro fl addto choice =
macro op vz;
PROC fl addto choice = (REF FLOBJECT ob,[]CHAR text)INT:
BEGIN
   PROC(REF FLOBJECT,VECTOR[]CHAR)INT fl fl addto choice =
      ALIEN "FL_ADDTO_CHOICE"
      "#define FL_ADDTO_CHOICE(ob,text) \"
      "   fl_addto_choice((void *)ob,A_VC_charptr(text))";
   fl fl addto choice(ob,VZ text)
END #fl addto choice#

@d macro fl replace choice =
macro op vz;
PROC fl replace choice = (REF FLOBJECT ob,INT n,[]CHAR text)VOID:
BEGIN
   PROC(REF FLOBJECT,INT,VECTOR[]CHAR)VOID fl fl replace choice =
      ALIEN "FL_REPLACE_CHOICE"
      "#define FL_REPLACE_CHOICE(ob,n,text) \"
      "   fl_replace_choice((void *)ob,n,A_VC_charptr(text))";
   fl fl replace choice(ob,n,VZ text)
END #fl replace choice#

@d macro fl delete choice =
PROC(REF FLOBJECT,INT)VOID fl delete choice =
   ALIEN "FL_DELETE_CHOICE"
   "#define FL_DELETE_CHOICE(ob,line) \"
   "   fl_delete_choice((void *)ob,line)"

@d macro fl set choice =
PROC(REF FLOBJECT,INT)VOID fl set choice =
   ALIEN "FL_SET_CHOICE"
   "#define FL_SET_CHOICE(ob, line) \"
   "   fl_set_choice((void *)ob,line)"

@d macro fl set choice text =
macro op vz;
PROC fl set choice text = (REF FLOBJECT ob,[]CHAR txt)VOID:
BEGIN
   PROC(REF FLOBJECT,VECTOR[]CHAR)VOID fl fl set choice text =
      ALIEN "FL_SET_CHOICE_TEXT"
      "#define FL_SET_CHOICE_TEXT(ob,txt) \"
      "   fl_set_choice_text((void *)ob,A_VC_charptr(txt))";
   fl fl set choice text(ob,VZ txt)
END #fl set choice text#

@d macro fl get choice =
PROC(REF FLOBJECT)INT fl get choice =
   ALIEN "FL_GET_CHOICE"
   "#define FL_GET_CHOICE(ob) fl_get_choice((void *)ob)"

@d macro fl get choice item text =
PROC fl get choice item text = (REF FLOBJECT ob,INT n)[]CHAR:
BEGIN
   PROC(REF FLOBJECT,INT)CPTR fl fl get choice item text =
      ALIEN "FL_GET_CHOICE_ITEM_TEXT"
      "#define FL_GET_CHOICE_ITEM_TEXT(ob,n) \"
      "(void *)fl_get_choice_item_text((void *)ob,n)";
   CPTRTORVC fl fl get choice item text(ob,n)
END #fl get choice item text#

@d macro fl get choice maxitems =
PROC(REF FLOBJECT)INT fl get choice maxitems =
   ALIEN "FL_GET_CHOICE_MAXITEMS"
   "#define FL_GET_CHOICE_MAXITEMS(ob) \"
   "   fl_get_choice_maxitems((void *)ob)"

@d macro fl get choice text =
PROC fl get choice text = (REF FLOBJECT ob)[]CHAR:
BEGIN
   PROC(REF FLOBJECT)CPTR fl fl get choice text =
      ALIEN "FL_GET_CHOICE_TEXT"
      "#define FL_GET_CHOICE_TEXT(ob) \"
      "   (void *)fl_get_choice_text((void *)ob)";
   CPTRTORVC fl fl get choice text(ob)
END #fl get choice text#

@d macro fl set choice fontsize =
PROC(REF FLOBJECT,INT)VOID fl set choice fontsize =
   ALIEN "FL_SET_CHOICE_FONTSIZE"
   "#define FL_SET_CHOICE_FONTSIZE(ob,size) \"
   "   fl_set_choice_fontsize((void *)ob,size)"

@d macro fl set choice fontstyle =
PROC(REF FLOBJECT,INT)VOID fl set choice fontstyle =
   ALIEN "FL_SET_CHOICE_FONTSTYLE"
   "#define FL_SET_CHOICE_FONTSTYLE(ob,style) \"
   "   fl_set_choice_fontstyle((void *)ob,style)"

@d macro fl set choice align =
PROC(REF FLOBJECT,INT)VOID fl set choice align =
   ALIEN "FL_SET_CHOICE_ALIGN"
   "#define FL_SET_CHOICE_ALIGN(ob,align) \"
   "   fl_set_choice_align((void *)ob,align)"

@d macro fl set choice item mode =
PROC(REF FLOBJECT,INT,BITS)VOID fl set choice item mode =
   ALIEN "FL_SET_CHOICE_ITEM_MODE"
   "#define FL_SET_CHOICE_ITEM_MODE(ob,numb,mode) \"
   "   fl_set_choice_item_mode((void *)ob,numb,mode)"

@d macro fl set choice item shortcut =
macro op vz;
PROC fl set choice item shortcut = (REF FLOBJECT ob,INT n,[]CHAR txt)VOID:
BEGIN
   PROC(REF FLOBJECT,INT,VECTOR[]CHAR)VOID
      fl fl set choice item shortcut =
      ALIEN "FL_SET_CHOICE_ITEM_SHORTCUT"
      "#define FL_SET_CHOICE_ITEM_SHORTCUT(ob,numb,txt) \"
      "   fl_set_choice_item_shortcut((void *)ob,numb,\"
      "      A_VC_charptr(txt))";
   fl fl set choice item shortcut(ob,n,VZ txt)
END #fl set choice item shortcut#

@d macro fl set choice entries =
macro flpup to pup;
PROC fl set choice entries = (REF FLOBJECT ob,[]FLPUPENTRY e)INT:
BEGIN
	PROC(REF FLOBJECT,VECTOR[]PUPENTRY)INT fl fl set choice entries =
   	ALIEN "FL_SET_CHOICE_ENTRIES"
   	"#define FL_SET_CHOICE_ENTRIES(ob,entries) \"
   	"   fl_set_choice_entries((void *)ob, (void *)entries.data)";
	fl fl set choice entries(ob,flpup to pup(e))
END #fl set choice entries#

@d macro fl set choice notitle =
PROC(REF FLOBJECT,INT)INT fl set choice notitle =
   ALIEN "FL_SET_CHOICE_NOTITLE"
   "#define FL_SET_CHOICE_NOTITLE(ob,numb) \"
   "   fl_set_choice_notitle((void *)ob,numb)"

@ The special modes for sliders.

@d macro mode flvaluatorspec =
MODE FLVALUATORSPEC =
   STRUCT(REAL min,                 # minimal value of slider        #
               max,                 # maximal value of slider        #
               val,                 # current value of slider        #
               step,                # step size                      #
          INT how_return,           # whether always returning value #
              draw_type,
              prec,                 # precision when printing value  #
          REAL start_val,
               ldelta,              # "left mouse" step              #
               rdelta,              # "right mouse " step            #
               sstep,               # small step for counter         #
               lstep,               # large step for counter         #
           FLCOORD x, y, w, h,      # draw (dbl buffer): adjustment report box #
           SHORT REAL slsize,       # size of the slider             #
                    norm_val,       # normalized value between 0 & 1 #
                 oldnorm_val,       # normalized value between 0 & 1 #
           INT oldmx, oldmy,
           CPTR#VAL_FILTER# filter,
           FLCOORD offx, offy,
                   mx, my, mw, mh,  # mouse: after adjustment for report box  #
           INT mouse, lmouse,       # part the mouse is on            #
           STRUCT 5 FLCOORD ww,xx,  # for counter                   #
           INT changed,
           BITS mouseobj,
           INT cross_over)          # allow cross over               #

@d macro mode flsliderspec =
macro mode flvaluatorspec;
MODE FLSLIDERSPEC = FLVALUATORSPEC

@ Counters.

@m fl normal counter = 0
@m fl simple counter = 1

@ Defaults.

@m fl counter boxtype = fl up box
@m fl counter col1 = fl col1
@m fl counter col2 = fl blue # ct label     #
@m fl counter lcol = fl lcol # ct reporting #
@m fl counter align = fl align bottom

@ Others.

@m fl counter bw = (fl bound width-1)

@ Routines.

@d macro fl create counter =
macro op vz;
PROC fl create counter = (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,
        VECTOR[]CHAR)REF FLOBJECT fl fl create counter =
      ALIEN "FL_CREATE_COUNTER"
      "#define FL_CREATE_COUNTER(type,x,y,w,h,label) \"
      "(void *)fl_create_counter(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create counter(type,x,y,w,h,VZ label)
END #fl create counter#

@d macro fl add counter =
macro op vz;
PROC fl add counter = (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,
        VECTOR[]CHAR)REF FLOBJECT fl fl add counter =
      ALIEN "FL_ADD_COUNTER"
      "#define FL_ADD_COUNTER(type,x,y,w,h,label) \"
      "(void *)fl_add_counter(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add counter(type,x,y,w,h,VZ label)
END #fl add counter#

@d macro fl set counter value =
PROC(REF FLOBJECT,REAL)VOID fl set counter value =
   ALIEN "FL_SET_COUNTER_VALUE"
   "#define FL_SET_COUNTER_VALUE(ob,val) \"
   "   fl_set_counter_value((void *)ob,val)"

@d macro fl set counter bounds =
PROC(REF FLOBJECT,REAL,REAL)VOID fl set counter bounds =
   ALIEN "FL_SET_COUNTER_BOUNDS"
   "#define FL_SET_COUNTER_BOUNDS(ob,min,max) \"
   "   fl_set_counter_bounds((void *)ob,(double)min,(double)max)"

@d macro fl set counter step =
PROC(REF FLOBJECT,REAL,REAL)VOID fl set counter step =
   ALIEN "FL_SET_COUNTER_STEP"
   "#define FL_SET_COUNTER_STEP(ob,small,large) \"
   "   fl_set_counter_step((void *)ob, (double)small, (double)large)"

@d macro fl set counter precision =
PROC(REF FLOBJECT,INT)VOID fl set counter precision =
   ALIEN "FL_SET_COUNTER_PRECISION"
   "#define FL_SET_COUNTER_PRECISION(ob,prec) \"
   "   fl_set_counter_precision((void *)ob,prec)"

@d macro fl set counter return =
PROC(REF FLOBJECT,INT)VOID fl set counter return =
   ALIEN "FL_SET_COUNTER_RETURN"
   "#define FL_SET_COUNTER_RETURN(ob,how) \"
   "   fl_set_counter_return((void *)ob,how)"

@d macro fl get counter value =
PROC(REF FLOBJECT)REAL fl get counter value =
   ALIEN "FL_GET_COUNTER_VALUE"
   "#define FL_GET_COUNTER_VALUE(ob) \"
   "(double)fl_get_counter_value((void *)ob)"

@d macro fl get counter bounds =
PROC(REF FLOBJECT,REF REAL,REF REAL)VOID
   fl get counter bounds = ALIEN "FL_GET_COUNTER_BOUNDS"
   "#define FL_GET_COUNTER_BOUNDS(ob,min,max) \"
   "   fl_get_counter_bounds((void *)ob,(double *)min,(double *)max)"

@d macro fl get counter step =
PROC(REF FLOBJECT,REF SHORT REAL,REF SHORT REAL)VOID
   fl get counter step = ALIEN "FL_GET_COUNTER_STEP"
   "#define FL_GET_COUNTER_STEP(ob,small,large) \"
   "   fl_get_counter_step((void *)ob, (float *)small,(float *)large)"

@d macro fl set counter filter =
PROC fl set counter filter = (REF FLOBJECT obj,
                              PROC(REF FLOBJECT,REAL,INT)[]CHAR p)VOID:
BEGIN
   OP(PROC(REF FLOBJECT,REAL,INT)CSTR)PDESC TOPDESC = BIOP 99;
	PROC(REF FLOBJECT,CPTR)VOID
		fl fl set counter filter = ALIEN "FL_SET_COUNTER_FILTER"
		"#define FL_SET_COUNTER_FILTER(ob,filter) \"
		"   fl_set_counter_filter((void *)ob,\"
		"          const char *(*)((void *)ob, double, int))";
	fl fl set counter filter(obj,cp OF TOPDESC p)
END

@2Dials.

@m fl normal dial = 0
@m fl line dial = 1
@m fl fill dial = 2

@m fl dial cw = 0
@m fl dial ccw = 1

@ Defaults.

@m fl dial boxtype = fl flat box
@m fl dial col1 = fl col1
@m fl dial col2 = fl right bcol
@m fl dial lcol = fl lcol
@m fl dial align = fl align bottom

@ Others.

@m fl dial topcol = fl col1

@ Routines.

@m fl set dial crossover = fl set dial cross

@d macro fl create dial =
macro op vz;
PROC fl create dial = (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,
        VECTOR[]CHAR)REF FLOBJECT fl fl create dial =
      ALIEN "FL_CREATE_DIAL"
      "#define FL_CREATE_DIAL(type,x,y,w,h,label) \"
      "(void *)fl_create_dial(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create dial(type,x,y,w,h,VZ label)
END #fl create dial#

@d macro fl add dial =
macro op vz;
PROC fl add dial = (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,
        VECTOR[]CHAR)REF FLOBJECT fl fl add dial =
      ALIEN "FL_ADD_DIAL"
      "#define FL_ADD_DIAL(type,x,y,w,h,label) \"
      "(void *)fl_add_dial(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add dial(type,x,y,w,h,VZ label)
END #fl add dial#

@d macro fl set dial value =
PROC(REF FLOBJECT,REAL)VOID fl set dial value =
   ALIEN "FL_SET_DIAL_VALUE"
   "#define FL_SET_DIAL_VALUE(ob,val) \"
   "   fl_set_dial_value((void *)ob,(double)val)"

@d macro fl get dial value =
PROC(REF FLOBJECT)REAL fl get dial value =
   ALIEN "FL_GET_DIAL_VALUE"
   "#define FL_GET_DIAL_VALUE(ob) \"
   "(double)fl_get_dial_value((void *)ob)"

@d macro fl set dial bounds =
PROC(REF FLOBJECT,REAL,REAL)VOID fl set dial bounds =
   ALIEN "FL_SET_DIAL_BOUNDS"
   "#define FL_SET_DIAL_BOUNDS(ob,min,max) \"
   "   fl_set_dial_bounds((void *)ob,(double)min,(double)max)"

@d macro fl get dial bounds =
PROC(REF FLOBJECT,REF REAL,REF REAL)VOID fl get dial bounds =
   ALIEN "FL_GET_DIAL_BOUNDS"
   "#define FL_GET_DIAL_BOUNDS(ob,min,max) \"
   "   fl_get_dial_bounds((void *)ob,(double *)min,(double *)max)"

@d macro fl set dial step =
PROC(REF FLOBJECT,REAL)VOID fl set dial step =
   ALIEN "FL_SET_DIAL_STEP"
   "#define FL_SET_DIAL_STEP(ob,step) \"
   "   fl_set_dial_step((void *)ob,(double)step)"

@d macro fl set dial return =
PROC(REF FLOBJECT,INT)VOID fl set dial return =
   ALIEN "FL_SET_DIAL_RETURN"
   "#define FL_SET_DIAL_RETURN(ob,how) \"
   "   fl_set_dial_return((void *)ob,how)"

@d macro fl set dial angles =
PROC(REF FLOBJECT,REAL,REAL)VOID fl set dial angles =
   ALIEN "FL_SET_DIAL_ANGLES"
   "#define FL_SET_DIAL_ANGLES(ob,thetai,thetaf) \"
   "   fl_set_dial_angles((void *)ob,(double)thetai,(double)thetaf)"

@d macro fl set dial cross =
PROC(REF FLOBJECT,INT)VOID fl set dial cross =
   ALIEN "FL_SET_DIAL_CROSS"
   "#define FL_SET_DIAL_CROSS(ob,flag) \"
   "   fl_set_dial_cross((void *)ob,flag)"

@d macro fl set dial direction =
PROC(REF FLOBJECT,INT)VOID fl set dial direction =
   ALIEN "FL_SET_DIAL_DIRECTION"
   "#define FL_SET_DIAL_DIRECTION(ob,dir) \"
   "   fl_set_dial_direction((void *)ob,dir)"

@2Positioners.

@m fl normal positioner =   0
@m fl overlay positioner = 1

@ Defaults.

@m fl positioner boxtype = fl down box
@m fl positioner col1 = fl col1
@m fl positioner col2 = fl red
@m fl positioner lcol = fl lcol
@m fl positioner align = fl align bottom

@ Routines.

@d macro fl create positioner =
macro op vz;
PROC fl create positioner =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl create positioner = ALIEN "FL_CREATE_POSITIONER"
      "#define FL_CREATE_POSITIONER(type,x,y,w,h,label) \"
      "   (void *)fl_create_positioner(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create positioner(type,x,y,w,h,VZ label)
END #fl create positioner#

@d macro fl add positioner =
macro op vz;
PROC fl add positioner =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl add positioner = ALIEN "FL_ADD_POSITIONER"
      "#define FL_ADD_POSITIONER(type,x,y,w,h,label) \"
      "   (void *)fl_add_positioner(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add positioner(type,x,y,w,h,VZ label)
END #fl add positioner#

@d macro fl set positioner xvalue =
PROC(REF FLOBJECT,REAL)VOID
   fl set positioner xvalue = ALIEN "FL_SET_POSITIONER_XVALUE"
   "#define FL_SET_POSITIONER_XVALUE(ob,val) \"
   "   fl_set_positioner_xvalue((void *)ob,(double)val)"

@d macro fl get positioner xvalue =
PROC(REF FLOBJECT)REAL fl get positioner xvalue = ALIEN "FL_GET_POSITIONER_XVALUE"
   "#define FL_GET_POSITIONER_XVALUE(ob) \"
   "   (double)fl_get_positioner_xvalue((void *)ob)"

@d macro fl set positioner xbounds =
PROC(REF FLOBJECT,REAL,REAL)VOID fl set positioner xbounds =
   ALIEN "FL_SET_POSITIONER_XBOUNDS"
   "#define FL_SET_POSITIONER_XBOUNDS(ob,min,max) \"
   "   fl_set_positioner_xbounds((void *)ob,(double)min,(double)max)"

@d macro fl get positioner xbounds =
PROC(REF FLOBJECT,REF REAL,REF REAL)VOID fl get positioner xbounds =
   ALIEN "FL_GET_POSITIONER_XBOUNDS"
   "#define FL_GET_POSITIONER_XBOUNDS(ob,min,max) \"
   "   fl_get_positioner_xbounds((void *)ob,(double *)min,(double *)max)"

@d macro fl set positioner yvalue =
PROC(REF FLOBJECT,REAL)VOID fl set positioner yvalue =
   ALIEN "FL_SET_POSITIONER_YVALUE"
   "#define FL_SET_POSITIONER_YVALUE(ob,val) \"
   "   fl_set_positioner_yvalue((void *)ob,(double)val)"

@d macro fl get positioner yvalue =
PROC(REF FLOBJECT)REAL fl get positioner yvalue =
   ALIEN "FL_GET_POSITIONER_YVALUE"
   "#define FL_GET_POSITIONER_YVALUE(ob) \"
   "   (double)fl_get_positioner_yvalue((void *)ob)"

@d macro fl set positioner ybounds =
PROC(REF FLOBJECT,REAL,REAL)VOID fl set positioner ybounds =
   ALIEN "FL_SET_POSITIONER_YBOUNDS"
   "#define FL_SET_POSITIONER_YBOUNDS(ob,min,max) \"
   "   fl_set_positioner_ybounds((void *)ob,(double)min,(double)max)"

@d macro fl get positioner ybounds =
PROC(REF FLOBJECT,REF REAL,REF REAL)VOID fl get positioner ybounds =
   ALIEN "FL_GET_POSITIONER_YBOUNDS"
   "#define FL_GET_POSITIONER_YBOUNDS(ob,min,max) \"
   "   fl_get_positioner_ybounds((void *)ob,(double *)min,(double *)max)"

@d macro fl set positioner xstep =
PROC(REF FLOBJECT,REAL)VOID fl set positioner xstep =
   ALIEN "FL_SET_POSITIONER_XSTEP"
   "#define FL_SET_POSITIONER_XSTEP(ob,step) \"
   "   fl_set_positioner_xstep((void *)ob,(double)step)"

@d macro fl set positioner ystep =
PROC(REF FLOBJECT,REAL)VOID fl set positioner ystep =
   ALIEN "FL_SET_POSITIONER_YSTEP"
   "#define FL_SET_POSITIONER_YSTEP(ob,step) \"
   "   fl_set_positioner_ystep((void *)ob,(double)step)"

@d macro fl set positioner return =
PROC(REF FLOBJECT,INT)VOID fl set positioner return =
   ALIEN "FL_SET_POSITIONER_RETURN"
   "#define FL_SET_POSITIONER_RETURN(ob,how) \"
   "   fl_set_positioner_return((void *)ob,how)"

@2Scrollbars.

@m fl hor scrollbar = 0
@m fl vert scrollbar = 1
@m fl hor thin scrollbar = 2
@m fl vert thin scrollbar = 3
@m fl hor nice scrollbar = 4
@m fl vert nice scrollbar = 5
@m fl hor plain scrollbar = 7
@m fl vert plain scrollbar = 8

@m fl hor basic scrollbar = fl hor plain scrollbar
@m fl vert basic scrollbar = fl vert plain scrollbar

@m fl thin scrollbar = 0
@m fl plain scrollbar = 1
@m fl normal scrollbar = 2
@m fl nice scrollbar = 3

@m fl triangle upbox1 = 0
@m fl triangle upbox2 = 1
@m fl triangle upbox3 = 2
@m fl triangle upbox4 = 3
@m fl triangle upbox6 = 4
@m fl triangle upbox7 = 5
@m fl triangle upbox8 = 6
@m fl triangle upbox9 = 7
@m fl triangle downbox1 = 8
@m fl triangle downbox2 = 9
@m fl triangle downbox3 = 10
@m fl triangle downbox4 = 11
@m fl triangle downbox6 = 12
@m fl triangle downbox7 = 13
@m fl triangle downbox8 = 14
@m fl triangle downbox9 = 15

@d macro fl create scrollbar =
macro op vz;
PROC fl create scrollbar =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl create scrollbar = ALIEN "FL_CREATE_SCROLLBAR"
      "#define FL_CREATE_SCROLLBAR(type,x,y,w,h,label) \"
      "   (void *)fl_create_scrollbar(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create scrollbar(type,x,y,w,h,VZ label)
END #fl create scrollbar#

@d macro fl add scrollbar =
macro op vz;
PROC fl add scrollbar =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl add scrollbar = ALIEN "FL_ADD_SCROLLBAR"
      "#define FL_ADD_SCROLLBAR(type,x,y,w,h,label) \"
      "   (void *)fl_add_scrollbar(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add scrollbar(type,x,y,w,h,VZ label)
END #fl add scrollbar#

@d macro fl get scrollbar value =
PROC(REF FLOBJECT)REAL fl get scrollbar value =
   ALIEN "FL_GET_SCROLLBAR_VALUE"
   "#define FL_GET_SCROLLBAR_VALUE(ob) \"
   "   (double)fl_get_scrollbar_value((void *)ob)"

@d macro fl set scrollbar value =
PROC(REF FLOBJECT,REAL)VOID fl set scrollbar value =
   ALIEN "FL_SET_SCROLLBAR_VALUE"
   "#define FL_SET_SCROLLBAR_VALUE(ob,val) \"
   "   fl_set_scrollbar_value((void *)ob,(double)val)"

@d macro fl set scrollbar size =
PROC(REF FLOBJECT,REAL)VOID fl set scrollbar size =
   ALIEN "FL_SET_SCROLLBAR_SIZE"
   "#define FL_SET_SCROLLBAR_SIZE(ob,size) \"
   "   fl_set_scrollbar_size((void *)ob,(double)size)"

@d macro fl set scrollbar increment =
PROC(REF FLOBJECT,REAL,REAL)VOID fl set scrollbar increment =
   ALIEN "FL_SET_SCROLLBAR_INCREMENT"
   "#define FL_SET_SCROLLBAR_INCREMENT(ob,l,r) \"
   "   fl_set_scrollbar_increment((void *)ob,(double)l,(double)r)"

@d macro fl get scrollbar increment =
PROC(REF FLOBJECT,REF SHORT REAL,REF SHORT REAL)VOID
   fl get scrollbar increment = ALIEN "FL_GET_SCROLLBAR_INCREMENT"
   "#define FL_GET_SCROLLBAR_INCREMENT(ob,a,b) \"
   "   fl_get_scrollbar_increment((void *)ob,(float *)a,(float *)b)"

@d macro fl set scrollbar bounds =
PROC(REF FLOBJECT,REAL,REAL)VOID fl set scrollbar bounds =
   ALIEN "FL_SET_SCROLLBAR_BOUNDS"
   "#define FL_SET_SCROLLBAR_BOUNDS(ob,b1,b2) \"
   "   fl_set_scrollbar_bounds((void *)ob,(double)b1,(double)b2)"

@d macro fl get scrollbar bounds =
PROC(REF FLOBJECT,REF SHORT REAL,REF SHORT REAL)VOID
   fl get scrollbar bounds = ALIEN "FL_GET_SCROLLBAR_BOUNDS"
   "#define FL_GET_SCROLLBAR_BOUNDS(ob,b1,b2) \"
   "   fl_get_scrollbar_bounds((void *)ob,(float *)b1,(float *)b2)"

@d macro fl set scrollbar return =
PROC(REF FLOBJECT,INT)VOID fl set scrollbar return =
   ALIEN "FL_SET_SCROLLBAR_RETURN"
   "#define FL_SET_SCROLLBAR_RETURN(ob,how) \"
   "   fl_set_scrollbar_return((void *)ob,how)"

@d macro fl set scrollbar step =
PROC(REF FLOBJECT,REAL)VOID fl set scrollbar step =
   ALIEN "FL_SET_SCROLLBAR_STEP"
   "#define FL_SET_SCROLLBAR_STEP(ob,step) \"
   "   fl_set_scrollbar_step((void *)ob,(double)step)"

@d macro fl set scrollbar type =
PROC(INT)VOID fl set scrollbar type = ALIEN "FL_SET_SCROLLBAR_TYPE"
   "#define FL_SET_SCROLLBAR_TYPE(point) \"
   "   fl_set_scrollbar_type(point)"

@d macro fl set thinscrollbar =
PROC fl set thinscrollbar = (INT t)VOID:
  fl set scrollbar type((t/=0|fl thin scrollbar|fl normal scrollbar))

@2Sliders.

@m fl vert slider = 0
@m fl hor slider = 1
@m fl vert fill slider = 2
@m fl hor fill slider = 3
@m fl vert nice slider = 4
@m fl hor nice slider = 5
@m fl hor browser slider = 6
@m fl vert browser slider = 7
@m fl hor browser slider2 = 8    # for internal use only #
@m fl vert browser slider2 = 9   # for internal use only #
@m fl hor thin slider = 10       # internal use          #
@m fl vert thin slider = 11      # internal use          #
@m fl hor basic slider = 12      # internal use          #
@m fl vert basic slider = 13     # internal use          #

@ Defaults.

@m fl slider bw1 = fl bound width
@m fl slider bw2 = (fl bound width-1)
@m fl slider boxtype = fl down box
@m fl slider col1 = fl col1
@m fl slider col2 = fl col1
@m fl slider lcol = fl lcol
@m fl slider align = fl align bottom

@ Others.

@m fl slider fine = 0.05
@m fl slider width = 0.10

@ Routines.

@d macro fl create slider =
macro op vz;
PROC fl create slider =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl create slider = ALIEN "FL_CREATE_SLIDER"
      "#define FL_CREATE_SLIDER(type,x,y,w,h,label) \"
      "   (void *)fl_create_slider(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create slider(type,x,y,w,h,VZ label)
END #fl create slider#

@d macro fl add slider =
macro op vz;
PROC fl add slider =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl add slider = ALIEN "FL_ADD_SLIDER"
      "#define FL_ADD_SLIDER(type,x,y,w,h,label) \"
      "   (void *)fl_add_slider(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add slider(type,x,y,w,h,VZ label)
END #fl add slider#

@d macro fl create valslider =
macro op vz;
PROC fl create valslider =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl create valslider = ALIEN "FL_CREATE_VALSLIDER"
      "#define FL_CREATE_VALSLIDER(type,x,y,w,h,label) \"
      "   (void *)fl_create_valslider(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create valslider(type,x,y,w,h,VZ label)
END #fl create valslider#

@d macro fl add valslider =
macro op vz;
PROC fl add valslider =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl add valslider = ALIEN "FL_ADD_VALSLIDER"
      "#define FL_ADD_VALSLIDER(type,x,y,w,h,label) \"
      "   (void *)fl_add_valslider(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add valslider(type,x,y,w,h,VZ label)
END #fl add valslider#

@d macro fl set slider value =
PROC(REF FLOBJECT,REAL)VOID fl set slider value =
   ALIEN "FL_SET_SLIDER_VALUE"
   "#define FL_SET_SLIDER_VALUE(ob,val) \"
   "   fl_set_slider_value((void *)ob,(double)val)"

@d macro fl get slider value =
PROC(REF FLOBJECT)REAL fl get slider value =
   ALIEN "FL_GET_SLIDER_VALUE"
   "#define FL_GET_SLIDER_VALUE(ob) \"
   "   fl_get_slider_value((void *)ob)"

@d macro fl set slider bounds =
PROC(REF FLOBJECT,REAL,REAL)VOID fl set slider bounds =
   ALIEN "FL_SET_SLIDER_BOUNDS"
   "#define FL_SET_SLIDER_BOUNDS(ob,min,max) \"
   "   fl_set_slider_bounds((void *)ob,(double)min,(double)max)"

@d macro fl get slider bounds =
PROC(REF FLOBJECT,REF REAL,REF REAL)VOID fl get slider bounds =
   ALIEN "FL_GET_SLIDER_BOUNDS"
   "#define FL_GET_SLIDER_BOUNDS(ob,x,y) \"
   "   fl_get_slider_bounds((void *)ob,(double *)x,(double *)y)"

@d macro fl set slider return =
PROC(REF FLOBJECT,INT)VOID fl set slider return =
   ALIEN "FL_SET_SLIDER_RETURN"
   "#define FL_SET_SLIDER_RETURN(ob,how) \"
   "   fl_set_slider_return((void *)ob,how)"

@d macro fl set slider step =
PROC(REF FLOBJECT,REAL)VOID fl set slider step =
   ALIEN "FL_SET_SLIDER_STEP"
   "#define FL_SET_SLIDER_STEP(ob,step) \"
   "   fl_set_slider_step((void *)ob,(double)step)"

@d macro fl set slider increment =
PROC(REF FLOBJECT,REAL,REAL)VOID fl set slider increment =
   ALIEN "FL_SET_SLIDER_INCREMENT"
   "#define FL_SET_SLIDER_INCREMENT(ob,l,r) \"
   "   fl_set_slider_increment((void *)ob,(double)l,(double)r)"

@d macro fl get slider increment =
PROC(REF FLOBJECT,REF SHORT REAL,REF SHORT REAL)VOID
   fl get slider increment = ALIEN "FL_GET_SLIDER_INCREMENT"
   "#define FL_GET_SLIDER_INCREMENT(ob,l,r) \"
   "   fl_get_slider_increment((void *)ob,(float *)l,(float *)r)"

@d macro fl set slider size =
PROC(REF FLOBJECT,REAL)VOID fl set slider size =
   ALIEN "FL_SET_SLIDER_SIZE"
   "#define FL_SET_SLIDER_SIZE(ob,size) \"
   "   fl_set_slider_size((void *)ob,(double)size)"

@d macro fl set slider precision =
PROC(REF FLOBJECT,INT)VOID fl set slider precision =
   ALIEN "FL_SET_SLIDER_PRECISION"
   "#define FL_SET_SLIDER_PRECISION(ob,prec) \"
   "   fl_set_slider_precision((void *)ob,prec)"

@d macro fl set slider filter =
PROC fl set slider filter =
	(REF FLOBJECT ob,PROC(REF FLOBJECT,REAL)[]CHAR f)VOID:
BEGIN
   MODE SLIDERFILTER=PROC(REF FLOBJECT,REAL)CPTR;
   OP SLIDERFILTERTOPDESC = (SLIDERFILTER p)PDESC: BIOP 99;
   PROC(REF FLOBJECT,PROC(REF FLOBJECT,REAL)CPTR)VOID
   	fl fl set slider filter = ALIEN "FL_SET_SLIDER_FILTER"
   	"#define FL_SET_SLIDER_FILTER(ob,filter) \"
   	"   fl_set_slider_filter((void *)ob,(void *)filter)";
   fl fl set slider filter(ob,cp OF SLIDERFILTERTOPDESC f)
END

@2Thumbwheels.

@m fl vert thumbwheel = 0
@m fl hor thumbwheel = 1

@d macro fl get thumbwheel value =
PROC(REF FLOBJECT)REAL fl get thumbwheel value =
   ALIEN "FL_GET_THUMBWHEEL_VALUE"
   "#define fl_get_thumbwheel_value(ob) \"
   "   (double)fl_get_thumbwheel_value((void *)ob)"

@d macro fl set thumbwheel value =
PROC(REF FLOBJECT,REAL)REAL fl set thumbwheel value =
   ALIEN "FL_SET_THUMBWHEEL_VALUE"
   "#define FL_SET_THUMBWHEEL_VALUE(ob,val) \"
   "   (double)fl_set_thumbwheel_value((void *)ob,(double)val)"

@d macro fl get thumbwheel step =
PROC(REF FLOBJECT)REAL fl get thumbwheel step =
   ALIEN "FL_GET_THUMBWHEEL_STEP"
   "#define FL_GET_THUMBWHEEL_STEP(ob) \"
   "   (double)fl_get_thumbwheel_step((void *)ob)"

@d macro fl set thumbwheel step =
PROC(REF FLOBJECT,REAL)REAL fl set thumbwheel step =
   ALIEN "FL_SET_THUMBWHEEL_STEP"
   "#define FL_SET_THUMBWHEEL_STEP(ob,step) \"
   "   (double)fl_set_thumbwheel_step((void *)ob,(double)step)"

@d macro fl set thumbwheel return =
PROC(REF FLOBJECT,INT)INT fl set thumbwheel return =
   ALIEN "FL_SET_THUMBWHEEL_RETURN"
   "#define FL_SET_THUMBWHEEL_RETURN(ob,when) \"
   "   fl_set_thumbwheel_return((void *)ob,when)"

@d macro fl set thumbwheel crossover =
PROC(REF FLOBJECT,INT)INT fl set thumbwheel crossover =
   ALIEN "FL_SET_THUMBWHEEL_CROSSOVER"
   "#define FL_SET_THUMBWHEEL_CROSSOVER(ob,flag) \"
   "   fl_set_thumbwheel_crossover((void *)ob,flag)"

@d macro fl set thumbwheel bounds =
PROC(REF FLOBJECT,REAL,REAL)VOID fl set thumbwheel bounds =
   ALIEN "FL_SET_THUMBWHEEL_BOUNDS"
   "#define FL_SET_THUMBWHEEL_BOUNDS(ob,min,max) \"
   "   fl_set_thumbwheel_bounds((void *)ob,(double)min,(double)max)"

@d macro fl get thumbwheel bounds =
PROC(REF FLOBJECT,REF REAL,REF REAL)VOID fl get thumbwheel bounds =
   ALIEN "FL_GET_THUMBWHEEL_BOUNDS"
   "#define FL_GET_THUMBWHEEL_BOUNDS(ob,min,max) \"
   "   fl_get_thumbwheel_bounds((void *)ob, (double *)min, (double *)max)"

@d macro fl create thumbwheel =
macro op vz;
PROC fl create thumbwheel =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
       fl fl create thumbwheel = ALIEN " FL_CREATE_THUMBWHEEL"
       "#define  FL_CREATE_THUMBWHEEL(type,x,y,w,h,label) \"
       "   (void *) fl_create_thumbwheel(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create thumbwheel(type,x,y,w,h,VZ label)
END #fl create thumbwheel#

@d macro fl add thumbwheel =
macro op vz;
PROC fl add thumbwheel =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl add thumbwheel = ALIEN "FL_ADD_THUMBWHEEL"
      "#define FL_ADD_THUMBWHEEL(type,x,y,w,h,label) \"
      "   (void *)fl_add_thumbwheel(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add thumbwheel(type,x,y,w,h,VZ label)
END #fl add thumbwheel#

@ Defaults.

@m fl thumbwheel col1 = fl col1
@m fl thumbwheel col2 = fl col1
@m fl thumbwheel lcol = fl black
@m fl thumbwheel boxtype = fl border box
@m fl thumbwheel align = fl align bottom

@2Timers.

@m fl normal timer = 0
@m fl value timer = 1
@m fl hidden timer = 2

@ Defaults.

@m fl timer boxtype = fl down box
@m fl timer col1 = fl col1
@m fl timer col2 = fl red
@m fl timer lcol = fl lcol
@m fl timer align = fl align center

@ Others.

@m fl timer blinkrate = 0.2

@d macro mode fltimerfilter =
MODE FLTIMERFILTER = PROC(REF FLOBJECT,REAL)CSTR;

@ Routines.

@d macro fl create timer =
macro op vz;
PROC fl create timer =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl create timer = ALIEN "FL_CREATE_TIMER"
      "#define FL_CREATE_TIMER(type,x,y,w,h,label) \"
      "   (void *)fl_create_timer(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create timer(type,x,y,w,h,VZ label)
END #fl create timer#

@d macro fl add timer =
macro op vz;
PROC fl add timer =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl add timer = ALIEN "FL_ADD_TIMER"
      "#define FL_ADD_TIMER(type,x,y,w,h,label) \"
      "   (void *)fl_add_timer(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add timer(type,x,y,w,h,VZ label)
END #fl add timer#

@d macro fl set timer =
PROC(REF FLOBJECT,REAL)VOID fl set timer = ALIEN "FL_SET_TIMER"
   "#define FL_SET_TIMER(ob,val) \"
   "   fl_set_timer((void *)ob,(double)val)"

@d macro fl get timer =
PROC(REF FLOBJECT)REAL fl get timer = ALIEN "FL_GET_TIMER"
   "#define FL_GET_TIMER(ob) \"
   "   (double)fl_get_timer((void *)ob)"

@d macro fl set timer countup =
PROC(REF FLOBJECT,INT)VOID fl set timer countup =
   ALIEN "FL_SET_TIMER_COUNTUP"
   "#define FL_SET_TIMER_COUNTUP(ob,yes) \"
   "   fl_set_timer_countup((void *)ob, yes)"

@d macro fl set timer filter =
macro mode fltimerfilter;
PROC(REF FLOBJECT,FLTIMERFILTER)FLTIMERFILTER fl set timer filter =
   ALIEN "FL_SET_TIMER_FILTER"
   "#define FL_SET_TIMER_FILTER(ob,filter) \"
   "   (void *)fl_set_timer_filter((void *)ob, (void *)filter)"

@d macro fl suspend timer =
PROC(REF FLOBJECT)VOID
   fl suspend timer = ALIEN "FL_SUSPEND_TIMER"
   "#define FL_SUSPEND_TIMER(ob) fl_suspend_timer((void *)ob)"

@d macro fl resume timer =
PROC(REF FLOBJECT)VOID
   fl resume timer = ALIEN "FL_RESUME_TIMER"
   "#define FL_RESUME_TIMER(ob) fl_resume_timer((void *)ob)"

@2Reading directories.
Convenience functions to read a directory.

@m ft file  = 0
@m ft dir  = 1
@m ft link  = 2
@m ft sock  = 3
@m ft fifo  = 4
@m ft blk  = 5
@m ft chr = 6
@m ft other  = 7

@d macro mode fldirlist =
MODE FLDIRLIST =
	STRUCT(CSTR name,               # entry name             #
          INT type,                # file type              #
             dl mtime,             # file modification time #
          BITS dl size,            # file size in bytes     #
          STRUCT 3 INT filler)     # reserved               #

@d macro mode multdirlist =
macro mode fldirlist;
MODE MULTDIRLIST = REF STRUCT 10000 REF FLDIRLIST

@d macro mode fldirlistfilter =
MODE FLDIRLISTFILTER = PROC(VECTOR[]CHAR,INT)INT

@ Read a directory with pattern filtering. All directories read
might be cached.  The user must not change the yield in any way. The yield is
an array of addresses to structures of mode !FLDIRLIST!.

@d macro fl get dirlist =
macro op vz;
macro mode multdirlist;
PROC fl get dirlist = ([]CHAR dirname,pattern,REF INT nf,BOOL rescan)
   MULTDIRLIST:
BEGIN
   PROC(VECTOR[]CHAR,VECTOR[]CHAR,REF INT,INT)
      MULTDIRLIST
      fl fl get dirlist = ALIEN "FL_GET_DIRLIST"
      "#define FL_GET_DIRLIST(dirname,pattern,nf,rescan) \"
      "(void *)fl_get_dirlist(A_VC_charptr(dirname),\"
      "      A_VC_charptr(pattern),\"
      "      (int *)nf,rescan)";
      fl fl get dirlist(VZ dirname,VZ pattern,nf,rescan)
END #fl get dirlist#

@m fl alphasort = 1      # sort in alphabetic order           #
@m fl ralphasort = 2     # sort in reverse alphabetic order   #
@m fl mtimesort = 3      # sort according to modifcation time #
@m fl rmtimesort = 4     # sort in reverse modificaiton time  #
@m fl sizesort = 5       # sort in increasing size order      #
@m fl rsizesort = 6      # sort in decreasing size order      #
@m fl casealphasort = 7  # sort case insensitive              #
@m fl rcasealphasort = 8 # sort case insensitive              #

@d macro fl set dirlist filter =
macro mode fldirlistfilter;
PROC(FLDIRLISTFILTER)FLDIRLISTFILTER fl set dirlist filter =
   ALIEN "FL_SET_DIRLIST_FILTER"
   "#define FL_SET_DIRLIST_FILTER(filter) \"
   "(void *)fl_set_dirlist_filter((void *)filter)"

@d macro fl set dirlist sort =
PROC(INT)VOID fl set dirlist sort =
   ALIEN "FL_SET_DIRLIST_SORT"
   "#define FL_SET_DIRLIST_SORT(method) \"
   "   fl_set_dirlist_sort(method)"

@d macro fl set dirlist filterdir =
PROC(INT)INT fl set dirlist filterdir =
   ALIEN "FL_SET_DIRLIST_FILTERDIR"
   "#define FL_SET_DIRLIST_FILTERDIR(method) \"
   "   fl_set_dirlist_filterdir(method)"

@d macro fl free dirlist =
macro mode multdirlist;
PROC(MULTDIRLIST)VOID fl free dirlist =
   ALIEN "FL_FREE_DIRLIST"
   "#define FL_FREE_DIRLIST(dirlist) \"
   "   fl_free_dirlist((void *)dirlist)"

@ Free all directory caches.

@d macro fl free all dirlist =
PROC fl free all dirlist = VOID: CODE "fl_free_all_dirlist();"

@d macro fl is valid dir =
macro op vz;
PROC fl is valid dir = ([]CHAR dir)BOOL:
BEGIN
   PROC(VECTOR[]CHAR)INT fl fl is valid dir =
      ALIEN "FL_IS_VALID_DIR"
      "#define FL_IS_VALID_DIR(dir) \"
      "   fl_is_valid_dir(A_VC_charptr(dir))";
   fl fl is valid dir(VZ dir)/=0
END #fl is valid dir#

@d macro fl fmtime =
macro op vz;
PROC fl fmtime = ([]CHAR ctime)BITS:
BEGIN
   PROC(VECTOR[]CHAR)BITS fl fl fmtime = ALIEN "FL_FMTIME"
      "#define FL_FMTIME(ctime) fl_fmtime(A_VC_charptr(ctime))";
   fl fl fmtime(VZ ctime)
END #fl fmtime#

@d macro fl fix dirname =
macro op vz;
PROC fl fix dirname = ([]CHAR dir)[]CHAR:
BEGIN
   PROC(VECTOR[]CHAR)CPTR fl fl fix dirname =
      ALIEN "FL_FIX_DIRNAME"
      "#define FL_FIX_DIRNAME(dir) \"
      "(void *)fl_fix_dirname(A_VC_charptr(dir))";
   CPTRTORVC fl fl fix dirname(VZ dir)
END #fl fix dirname#

@ File selector.

@m fl max fselector = 6

@d macro mode fdfselector =
MODE FDFSELECTOR =
   STRUCT(REF FLFORM fselect,
          CPTR vdata,
          CSTR cdata,
          INT  ldata,
          REF FLOBJECT browser, input, prompt, resbutt,
          REF FLOBJECT patbutt, dirbutt, cancel, ready,
          REF FLOBJECT dirlabel, patlabel,
          STRUCT 3 REF FLOBJECT appbutt);

@d macro fl use fselector =
PROC fl use fselector = (INT n)INT:
BEGIN
	PROC(INT)INT fl fl use fselector = ALIEN "FL_USE_FSELECTOR"
		"#define FL_USE_FSELECTOR(n) fl_use_fselector(n)";
	fl fl use fselector(n-1)
END #fl use fselector#

@d macro fl show fselector =
macro op vz;
PROC fl show fselector = ([]CHAR msg,dir,pat,fname)[]CHAR:
BEGIN
   PROC(VECTOR[]CHAR,VECTOR[]CHAR,VECTOR[]CHAR,VECTOR[]CHAR)CPTR
      fl fl show fselector = ALIEN "FL_SHOW_FSELECTOR"
      "#define FL_SHOW_FSELECTOR(msg,dir,pat,fname) \"
      "   (void *)fl_show_fselector(A_VC_charptr(msg),\"
      "      A_VC_charptr(dir),A_VC_charptr(pat),A_VC_charptr(fname))";
   CPTRTORVC
      fl fl show fselector(VZ msg,
                           VZ dir,
                           VZ pat,
                           VZ fname)
END #fl show fselector#

@d macro fl show file selector = macro fl show fselector
@m fl show file selector = fl show fselector

@d macro fl hide fselector =
PROC fl hide fselector = VOID: CODE "fl_hide_fselector();"

@d macro fl set fselector fontsize =
PROC(INT)VOID fl set fselector fontsize =
   ALIEN "FL_SET_FSELECTOR_FONTSIZE"
   "#define FL_SET_FSELECTOR_FONTSIZE(size) \"
   "   fl_set_fselector_fontsize(size)"

@d macro fl set fselector fontstyle =
PROC(BITS)VOID fl set fselector fontstyle =
   ALIEN "FL_SET_FSELECTOR_FONTSTYLE"
   "#define FL_SET_FSELECTOR_FONTSTYLE(style) \"
   "   fl_set_fselector_fontstyle(style)"

@d macro fl set fselector placement =
PROC(INT)VOID fl set fselector placement =
   ALIEN "FL_SET_FSELECTOR_PLACEMENT"
   "#define FL_SET_FSELECTOR_PLACEMENT(place) \"
   "   fl_set_fselector_placement(place)"

@d macro fl set fselector border =
PROC(INT)VOID fl set fselector border =
   ALIEN "FL_SET_FSELECTOR_BORDER"
   "#define FL_SET_FSELECTOR_BORDER(b) \"
   "   fl_set_fselector_border(b)"

@d macro fl set fselector transient =
PROC fl set fselector transient = (BOOL b)VOID:
   fl set fselector border((b|fl transient|fl fullborder))

@d macro fl set fselector callback =
PROC(FLFSCB,CPTR)VOID fl set fselector callback =
   ALIEN "FL_SET_FSELECTOR_CALLBACK"
   "#define FL_SET_FSELECTOR_CALLBACK(fscb,data) \"
   "   fl_set_fselector_callback((int (*)(const char *, void *))fscb,(void *)data)"

@d macro fl get filename =
PROC fl get filename = []CHAR:
   CPTRTORVC CPTR CODE "RESULT=(void *)fl_get_filename();"

@d macro fl get directory =
PROC fl get directory = []CHAR:
   CPTRTORVC CPTR CODE "RESULT=(void *)fl_get_directory();"

@d macro fl get pattern =
PROC fl get pattern = []CHAR:
   CPTRTORVC CPTR CODE "RESULT=(void *)fl_get_pattern();"

@d macro fl set directory =
macro op vz;
PROC fl set directory = ([]CHAR p)INT:
BEGIN
   PROC(VECTOR[]CHAR)INT fl fl set directory = ALIEN "FL_SET_DIRECTORY"
      "#define FL_SET_DIRECTORY(p) fl_set_directory(A_VC_charptr(p))";
   fl fl set directory(VZ p)
END #fl set directory#

@d macro fl set pattern =
macro op vz;
PROC fl set pattern = ([]CHAR s)VOID:
BEGIN
   PROC(VECTOR[]CHAR)VOID fl fl set pattern = ALIEN "FL_SET_PATTERN"
      "#define FL_SET_PATTERN(s) fl_set_pattern(A_VC_charptr(s))";
   fl fl set pattern(VZ s)
END #fl set pattern#

@d macro fl refresh fselector =
PROC fl refresh fselector = VOID: CODE "fl_refresh_fselector();"

@d macro fl add fselector appbutton =
macro op vz;
macro op fl cb to pdesc;
PROC fl add fselector appbutton = ([]CHAR label,FLCB cb,CPTR data)VOID:
BEGIN
   PROC(VECTOR[]CHAR,CPTR,CPTR)VOID fl fl add fselector appbutton =
      ALIEN "FL_ADD_FSELECTOR_APPBUTTON"
      "#define FL_ADD_FSELECTOR_APPBUTTON(label,cb,data) \"
      "   fl_add_fselector_appbutton(A_VC_charptr(label),(void *)cb,(void *)data)";
   fl fl add fselector appbutton(VZ label,cp OF FLCBTOPDESC cb,data)
END #fl add fselector appbutton#

@d macro fl remove fselector appbutton =
macro op vz;
PROC fl remove fselector appbutton = ([]CHAR label)VOID:
BEGIN
   PROC(VECTOR[]CHAR)VOID fl fl remove fselector appbutton =
      ALIEN "FL_REMOVE_FSELECTOR_APPBUTTON"
      "#define FL_REMOVE_FSELECTOR_APPBUTTON(label) \"
      "   fl_remove_fselector_appbutton(A_VC_charptr(label))";
   fl fl remove fselector appbutton(VZ label)
END #fl remove fselector appbutton#

@d macro fl disable fselector cache =
PROC(INT)VOID fl disable fselector cache =
   ALIEN "FL_DISABLE_FSELECTOR_CACHE"
   "#define FL_DISABLE_FSELECTOR_CACHE(yes) \"
   "   fl_disable_fselector_cache(yes)"

@d macro fl invalidate fselector cache =
PROC fl invalidate fselector cache = VOID:
   CODE "fl_invalidate_fselector_cache();"

@d macro fl get fselector form =
PROC fl get fselector form = REF FLFORM:
   REF FLFORM CODE "RESULT=(void *)fl_get_fselector_form();"

@d macro fl get fselector fdstruct =
macro mode fdfselector;
PROC fl get fselector fdstruct = REF FDFSELECTOR:
   REF FDFSELECTOR CODE "RESULT=(void *)fl_get_fselector_fdstruct();"

@d macro fl set fselector filetype marker =
PROC(INT,INT,INT,INT,INT)VOID fl set fselector filetype marker =
   ALIEN "FL_SET_FSELECTOR_FILETYPE_MARKER"
   "#define FL_SET_FSELECTOR_FILETYPE_MARKER(dir,fifo,sock,cdev,bdev) \"
   "   fl_set_fselector_filetype_marker(dir,fifo,sock,cdev,bdev)"

@d macro fl set fselector title =
macro fl set form title;
macro fl get fselector form;
PROC fl set fselector title = ([]CHAR s)VOID:
	fl set form title(fl get fselector form,s)

@2Form browser.

@m fl normal formbrowser = 0

@m fl smooth scroll = 0
@m fl jump scroll = 1

@m fl formbrowser boxtype = fl down box
@m fl formbrowser col1 = fl col1
@m fl formbrowser align = fl align top

@d macro fl addto formbrowser =
PROC(REF FLOBJECT,REF FLFORM)INT fl addto formbrowser =
   ALIEN "FL_ADDTO_FORMBROWSER"
   "#define FL_ADDTO_FORMBROWSER(ob,form) \"
   "   fl_addto_formbrowser((void *)ob,(void *)form)"

@d macro fl delete formbrowser bynumber =
PROC(REF FLOBJECT,INT)REF FLFORM fl delete formbrowser bynumber =
   ALIEN "FL_DELETE_FORMBROWSER_BYNUMBER"
   "#define FL_DELETE_FORMBROWSER_BYNUMBER(ob,num) \"
   "   (void *)fl_delete_formbrowser_bynumber((void *)ob,num)"

@d macro fl delete formbrowser =
PROC(REF FLOBJECT,REF FLFORM)INT fl delete formbrowser =
   ALIEN "FL_DELETE_FORMBROWSER"
   "#define FL_DELETE_FORMBROWSER(ob,form) \"
   "   fl_delete_formbrowser((void *)ob,(void *)form)"

@d macro fl replace formbrowser =
PROC(REF FLOBJECT,REF FLFORM)REF FLFORM fl replace formbrowser =
   ALIEN "FL_REPLACE_FORMBROWSER"
   "#define FL_REPLACE_FORMBROWSER(ob,num,form) \"
   "(void *)fl_replace_formbrowser((void *)ob, int,(void *)form)"

@d macro fl insert formbrowser =
PROC(REF FLOBJECT,INT,REF FLFORM)INT fl insert formbrowser =
   ALIEN "FL_INSERT_FORMBROWSER"
   "#define FL_INSERT_FORMBROWSER(ob,num,form) \"
   "   fl_insert_formbrowser((void *)ob,num,(void *)form)"

@d macro fl get formbrowser area =
PROC(REF FLOBJECT,REF INT,REF INT,REF INT,REF INT)INT
   fl get formbrowser area = ALIEN "FL_GET_FORMBROWSER_AREA"
   "#define FL_GET_FORMBROWSER_AREA(ob,x,y,w,h) \"
   "   fl_get_formbrowser_area((void *)ob,(int *)x,(int *)y,\"
   "      (int *)w,(int *)h)"

@d macro fl set formbrowser scroll =
PROC(REF FLOBJECT,INT)VOID fl set formbrowser scroll =
   ALIEN "FL_SET_FORMBROWSER_SCROLL"
   "#define FL_SET_FORMBROWSER_SCROLL(ob,how) \"
   "   fl_set_formbrowser_scroll((void *)ob,how)"

@d macro fl set formbrowser hscrollbar =
PROC(REF FLOBJECT,INT)VOID fl set formbrowser hscrollbar =
   ALIEN "FL_SET_FORMBROWSER_HSCROLLBAR"
   "#define FL_SET_FORMBROWSER_HSCROLLBAR(ob,how) \"
   "   fl_set_formbrowser_hscrollbar((void *)ob,how)"

@d macro fl set formbrowser vscrollbar =
PROC(REF FLOBJECT,INT)VOID fl set formbrowser vscrollbar =
   ALIEN "FL_SET_FORMBROWSER_VSCROLLBAR"
   "#define FL_SET_FORMBROWSER_VSCROLLBAR(ob,how) \"
   "   fl_set_formbrowser_vscrollbar((void *)ob,how)"

@d macro fl get formbrowser topform =
PROC(REF FLOBJECT)REF FLFORM fl get formbrowser topform =
   ALIEN "FL_GET_FORMBROWSER_TOPFORM"
   "#define FL_GET_FORMBROWSER_TOPFORM(ob) \"
   "   (void *)fl_get_formbrowser_topform((void *)ob)"

@d macro fl set formbrowser topform =
PROC(REF FLOBJECT,REF FLFORM)INT fl set formbrowser topform =
   ALIEN "FL_SET_FORMBROWSER_TOPFORM"
   "#define FL_SET_FORMBROWSER_TOPFORM(ob,form) \"
   "   fl_set_formbrowser_topform((void *)ob,(void *)form)"

@d macro fl set formbrowser topform bynumber =
PROC(REF FLOBJECT,INT)REF FLFORM fl set formbrowser topform bynumber =
   ALIEN "FL_SET_FORMBROWSER_TOPFORM_BYNUMBER"
   "#define FL_SET_FORMBROWSER_TOPFORM_BYNUMBER(ob,n) \"
   "   (void *)fl_set_formbrowser_topform_bynumber((void *)ob,n)"

@d macro fl set formbrowser xoffset =
PROC(REF FLOBJECT,INT)INT fl set formbrowser xoffset =
   ALIEN "FL_SET_FORMBROWSER_XOFFSET"
   "#define FL_SET_FORMBROWSER_XOFFSET(ob,offset) \"
   "   fl_set_formbrowser_xoffset((void *)ob,offset)"

@d macro fl set formbrowser yoffset =
PROC(REF FLOBJECT,INT)INT fl set formbrowser yoffset =
   ALIEN "FL_SET_FORMBROWSER_YOFFSET"
   "#define FL_SET_FORMBROWSER_YOFFSET(ob,offset) \"
   "   fl_set_formbrowser_yoffset((void *)ob,offset)"

@d macro fl get formbrowser xoffset =
PROC(REF FLOBJECT)INT fl get formbrowser xoffset =
   ALIEN "FL_GET_FORMBROWSER_XOFFSET"
   "#define FL_GET_FORMBROWSER_XOFFSET(ob) \"
   "   fl_get_formbrowser_xoffset((void *)ob)"

@d macro fl get formbrowser yoffset =
PROC(REF FLOBJECT)INT fl get formbrowser yoffset =
   ALIEN "FL_GET_FORMBROWSER_YOFFSET"
   "#define FL_GET_FORMBROWSER_YOFFSET(ob) \"
   "   fl_get_formbrowser_yoffset((void *)ob)"

@d macro fl find formbrowser form number =
PROC(REF FLOBJECT,REF FLFORM)INT fl find formbrowser form number =
   ALIEN "FL_FIND_FORMBROWSER_FORM_NUMBER"
   "#define FL_FIND_FORMBROWSER_FORM_NUMBER(ob,form) \"
   "   fl_find_formbrowser_form_number((void *)ob,(void *)form)"

@d macro fl add formbrowser =
macro op vz;
PROC fl add formbrowser =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,
        FLCOORD,FLCOORD,FLCOORD,FLCOORD,
        VECTOR[]CHAR)REF FLOBJECT
      fl fl add formbrowser = ALIEN "FL_ADD_FORMBROWSER"
      "#define FL_ADD_FORMBROWSER(type,x,y,w,h,label) \"
      "   (void *)fl_add_formbrowser(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add formbrowser(type,x,y,w,h,VZ label)
END #fl add formbrowser#

@d macro fl create formbrowser =
macro op vz;
PROC fl create formbrowser =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,
        FLCOORD,FLCOORD,FLCOORD,FLCOORD,
        VECTOR[]CHAR)REF FLOBJECT
      fl fl create formbrowser = ALIEN "FL_CREATE_FORMBROWSER"
      "#define FL_CREATE_FORMBROWSER(type,x,y,w,h,label) \"
      "   (void *)fl_create_formbrowser(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create formbrowser(type,x,y,w,h,VZ label)
END #fl create formbrowser#

@d macro fl get formbrowser numforms =
PROC(REF FLOBJECT)INT fl get formbrowser numforms =
   ALIEN "FL_GET_FORMBROWSER_NUMFORMS"
   "#define FL_GET_FORMBROWSER_NUMFORMS(ob) \"
   "   fl_get_formbrowser_numforms((void *)ob)"

@d macro fl get formbrowser form =
PROC(REF FLOBJECT,INT)REF FLFORM fl get formbrowser form =
   ALIEN "FL_GET_FORMBROWSER_FORM"
   "#define FL_GET_FORMBROWSER_FORM(ob,n) \"
   "   (void *)fl_get_formbrowser_form((void *)ob,n)"

@2Image related routines.

@d macro mode flimageidentify =
MODE FLIMAGEIDENTIFY = PROC(CPTR)INT;
#typedef int (*FLIMAGEIdentify) (FILE *);#

@d macro mode flimagedescription =
macro mode flimage;
MODE FLIMAGEDESCRIPTION = PROC(REF FLIMAGE)INT;
#typedef int (*FLIMAGEDescription) (FLIMAGE *);#

@d macro mode flimagereadpixels =
macro mode flimage;
MODE FLIMAGEREADPIXELS = PROC(REF FLIMAGE)INT;
#typedef int (*FLIMAGERead Pixels) (FLIMAGE *);#

@d macro mode flimagewriteimage =
macro mode flimage;
MODE FLIMAGEWRITEIMAGE = PROC(REF FLIMAGE)INT;
#typedef int (*FLIMAGEWrite Image) (FLIMAGE *);#

@d macro op fl image identify to pdesc =
macro mode flimageidentify;
OP(FLIMAGEIDENTIFY)PDESC TOPDESC = BIOP 99

@d macro op fl image to pdesc =
macro mode flimage;
OP(PROC(REF FLIMAGE)INT)PDESC TOPDESC = BIOP 99

@d macro fl rgb 2 grey =
PROC fl rgb2grey = (INT r,g,b)BITS:
  BIN(78*r+150*g+28*b) SHR 8

@ Image formats.

@m fl image none = 0
@m fl image mono = 1     # b&w. 1bit. 0=white 1=black #
@m fl image grey = 2     # 8 bit grey image           #
@m fl image ci = 4       # colormmaped image          #
@m fl image rgb = 8      # RGBA image. 8bit each      #
@m fl image packed = 16  # RGBA packed into an int    #
@m fl image grey16 = 32  # 12bit grey scale image     #
@m fl image rgb16   = 64 # 36bits color image         #
@m fl image flex = 1023  # all formats                #


@m fl lutbits = 12 # maximum colormap bits. 4096 entries #

@m flimage autocol = 16r7fffffff
@m flimage badcol = flimage autocol

@d macro fl image is rgb =
macro mode flimage;
PROC fl image is rgb    = (FLIMAGE im)BOOL:
	type OF im = fl image rgb

@d macro fl image is packed =
macro mode flimage;
PROC fl image is packed = (FLIMAGE im)BOOL:
	type OF im = fl image packed

@d macro fl image setup =
macro mode flimagesetup;
PROC(REF FLIMAGESETUP)VOID flimage setup =
   ALIEN "FLIMAGE_SETUP"
   "#define FLIMAGE_SETUP(setup) \"
   "   flimage_setup((void *)setup)"

@ Possible errors from the library. Not currently used.

@m flimage err none = 0
@m flimage err alloc = -50     # allocation error     #
@m flimage err invalid = -49   # invalid image        #
@m flimage err argument = -48  # bad argument/request #
@m flimage err file = -47      # io error             #
@m flimage err internal = -46  # bugs                 #
@m flimage err unknown = -45

@ Basic IO routines.

@d macro flimage load =
macro mode flimage;
macro op vz;
PROC flimage load = ([]CHAR fn)REF FLIMAGE:
BEGIN
   PROC(VECTOR[]CHAR)REF FLIMAGE fl flimage load =
      ALIEN "FLIMAGE_LOAD"
      "#define FLIMAGE_LOAD(filename) \"
      "(void *)flimage_load(A_VC_charptr(filename))"; # open & read #
   fl flimage load(VZ fn)
END #flimage load#

@d macro flimage open =
macro mode flimage;
macro op vz;
PROC flimage open = ([]CHAR fn)REF FLIMAGE:
BEGIN
   PROC(VECTOR[]CHAR)REF FLIMAGE fl flimage open =
      ALIEN "FLIMAGE_OPEN"
      "#define FLIMAGE_OPEN(name) \"
      "(void *)flimage_open(A_VC_charptr(name))";
   fl flimage open(VZ fn)
END #flimage open#

@d macro flimage read =
macro mode flimage;
PROC(REF FLIMAGE)REF FLIMAGE flimage read =
   ALIEN "FLIMAGE_READ"
   "#define FLIMAGE_READ(im) \"
   "(void *)flimage_read((void *)im)"

@d macro flimage dump =
macro mode flimage;
macro op vz;
PROC flimage dump = (REF FLIMAGE im,[]CHAR fn,fmt)INT:
BEGIN
   PROC(REF FLIMAGE,VECTOR[]CHAR,VECTOR[]CHAR)INT
      fl flimage dump = ALIEN "FLIMAGE_DUMP"
      "#define FLIMAGE_DUMP(im,fn,fmt) \"
      "   flimage_dump((void *)im,\"
      "      A_VC_charptr(fn),A_VC_charptr(fmt))";
   fl flimage dump(im,VZ fn,VZ fmt)
END #flimage dump#

@d macro flimage close =
macro mode flimage;
PROC(REF FLIMAGE)INT flimage close =
   ALIEN "FLIMAGE_CLOSE"
   "#define FLIMAGE_CLOSE(im) \"
   "   flimage_close((void *)im)"

@d macro flimage getmem =
macro mode flimage;
PROC(REF FLIMAGE)INT flimage getmem =
   ALIEN "FLIMAGE_GETMEM"
   "#define FLIMAGE_GETMEM(im) \"
   "   flimage_getmem((void *)im)"

@d macro flimage is supported =
macro op vz;
PROC flimage is supported = ([]CHAR fn)BOOL:
BEGIN
   PROC(VECTOR[]CHAR)BOOL fl flimage is supported =
      ALIEN "FLIMAGE_IS_SUPPORTED"
      "#define FLIMAGE_IS_SUPPORTED(filename) \"
      "   flimage_is_supported(A_VC_charptr(filename))";
   fl flimage is supported(VZ fn)
END #flimage is supported#

@d macro flimage description via filter =
macro mode flimage;
PROC flimage description via filter =
   (REF FLIMAGE im,[][]CHAR cmd,[]CHAR msg,INT verbose)INT:
BEGIN
   PROC(REF FLIMAGE,VECTOR[]CCHARPTR,VECTOR[]CHAR,INT)INT
      fl flimage description via filter =
      ALIEN "FLIMAGE_DESCRIPTION_VIA_FILTER"
      "#define FLIMAGE_DESCRIPTION_VIA_FILTER(im,cmds,what,verbose) \"
      "   flimage_description_via_filter(\"
      "      (void *)im,(cmds).data, A_VC_charptr(what),verbose)";
   VECTOR[UPB cmd-LWB cmd+2]CCHARPTR lcmd;
   FOR i TO UPB lcmd-1
   DO
      lcmd[i]:=VCTOCHARPTR MAKERVC cmd[@@1][i]
   OD;
   lcmd[UPB lcmd]:=CCHARPTR(NIL);
   fl flimage description via filter(im,lcmd,MAKERVC msg,verbose)
END #flimage description via filter#

@d macro flimage write via filter =
macro mode flimage;
PROC flimage write via filter =
   (REF FLIMAGE im,[][]CHAR cmd,[][]CHAR type,INT verbose)INT:
BEGIN
   PROC(REF FLIMAGE,VECTOR[]CCHARPTR,VECTOR[]CCHARPTR,INT)INT
      fl flimage write via filter =
      ALIEN "FLIMAGE_WRITE_VIA_FILTER"
      "#define FLIMAGE_WRITE_VIA_FILTER(im,cmds,what,verbose) \"
      "   flimage_write_via_filter(\"
      "      (void *)im,(char **)(cmds).data,(char **)(what).data,verbose)";
   VECTOR[UPB cmd-LWB cmd+2]CCHARPTR lcmd;
   FOR i TO UPB lcmd-1
   DO
      lcmd[i]:=VCTOCHARPTR MAKERVC cmd[@@1][i]
   OD;
   lcmd[UPB lcmd]:=CCHARPTR(NIL);

   VECTOR[UPB type-LWB type+2]CCHARPTR ltype;
   FOR i TO UPB ltype-1
   DO
      ltype[i]:=VCTOCHARPTR MAKERVC type[@@1][i]
   OD;
   ltype[UPB ltype]:=CCHARPTR(NIL);

   fl flimage write via filter(im,lcmd,ltype,verbose)
END #flimage write via filter#

@d macro flimage alloc =
macro mode flimage;
PROC flimage alloc = REF FLIMAGE:
   REF FLIMAGE CODE "RESULT=(void *)flimage_alloc();"

@d macro flimage free =
macro mode flimage;
PROC(REF FLIMAGE)INT flimage free =
   ALIEN "FLIMAGE_FREE"
   "#define FLIMAGE_FREE(im) \"
   "   flimage_free((void *)im)"

@d macro flimage display =
macro mode flimage;
PROC(REF FLIMAGE,BITS)INT flimage display =
   ALIEN "FLIMAGE_DISPLAY"
   "#define FLIMAGE_DISPLAY(im,win) \"
   "   flimage_display((void *)im,win)"

@d macro flimage sdisplay =
macro mode flimage;
PROC(REF FLIMAGE,BITS)INT flimage sdisplay =
   ALIEN "FLIMAGE_SDISPLAY"
   "#define FLIMAGE_SDISPLAY(im,win) \"
   "   flimage_sdisplay((void *)im,win)"

@d macro flimage convert =
macro mode flimage;
PROC(REF FLIMAGE,INT,INT)INT flimage convert =
   ALIEN "FLIMAGE_CONVERT"
   "#define FLIMAGE_CONVERT(im,newtype,ncolors) \"
   "   flimage_convert((void *)im,newtype,ncolors)"

@d macro flimage type name =
PROC flimage type name = (INT type)[]CHAR:
BEGIN
   PROC(INT)CPTR fl flimage type name =
      ALIEN "FLIMAGE_TYPE_NAME"
      "#define FLIMAGE_TYPE_NAME(type) \"
      "(void *)flimage_type_name(type)";
   CPTRTORVC fl flimage type name(type)
END #flimage type name#

@d macro flimage add text =
macro mode flimage;
macro op vz;
PROC flimage add text =
    (REF FLIMAGE im,[]CHAR str,
     INT len,fstyle,fsize,
     FLCOLOR tcolor,bcolor,
     INT tran,REAL tx,ty,
     INT rotation)INT:
BEGIN
   PROC(REF FLIMAGE,VECTOR[]CHAR,
        INT,INT,INT,FLCOLOR,FLCOLOR,INT,REAL,REAL,INT)INT
      fl flimage add text = ALIEN "FLIMAGE_ADD_TEXT"
      "#define FLIMAGE_ADD_TEXT(\"
      "   im,str,len,fstyle,fsize,tcolor,bcolor,tran,tx,ty,rotation)\"
      "flimage_add_text((void *)im,\"
      "   A_VC_charptr(str),len,fstyle,\"
      "   fsize,tcolor,bcolor,tran,tx,ty,rotation)";
   fl flimage add text(im,VZ str,len,fstyle,fsize,
                       tcolor,bcolor,tran,tx,ty,rotation)
END #flimage add text#

@d macro flimage add text struct =
macro mode flimage;
macro mode flimagetext;
PROC(REF FLIMAGE,REF FLIMAGETEXT)INT
   flimage add text struct =
   ALIEN "FLIMAGE_ADD_TEXT_STRUCT"
   "#define FLIMAGE_ADD_TEXT_STRUCT(im,text) \"
   "   flimage_add_text_struct(\"
   "      (void *)im, (void *)text)"

@d macro flimage delete all text =
macro mode flimage;
PROC(REF FLIMAGE)VOID
   flimage delete all text =
   ALIEN "FLIMAGE_DELETE_ALL_TEXT"
   "#define FLIMAGE_DELETE_ALL_TEXT(im) \"
   "   flimage_delete_all_text((void *)im)"

@d macro flimage add marker =
macro mode flimage;
macro op vz;
PROC flimage add marker =
   (REF FLIMAGE im,[]CHAR name,
    REAL x,y,w,h,
    INT linestyle,fill,rotation,
    FLCOLOR color,acolor)INT:
BEGIN
   PROC(REF FLIMAGE,VECTOR[]CHAR,
        REAL,REAL,REAL,REAL,
        INT,INT,INT,FLCOLOR,FLCOLOR)INT fl flimage add marker =
      ALIEN "FLIMAGE_ADD_MARKER"
      "#define FLIMAGE_ADD_MARKER(\"
      "      im,name,x,y,w,h,linestyle,fill,rotation,color,acolor) \"
      "   flimage_add_marker((void *)im,A_VC_charptr(name),\"
      "      x,y,w,h,linestyle,fill,rotation,color,acolor)";
   fl flimage add marker(im,VZ name,x,y,w,h,linestyle,
                         fill,rotation,color,acolor)
END #flimage add marker#

@d macro flimage add marker struct =
macro mode flimage;
macro mode flimagemarker;
PROC(REF FLIMAGE,REF FLIMAGEMARKER)INT
   flimage add marker struct =
   ALIEN "FLIMAGE_ADD_MARKER_STRUCT"
   "#define FLIMAGE_ADD_MARKER_STRUCT(im,marker) \"
   "flimage_add_marker_struct((void *)im,(void *)marker)"

@d macro mode fl draw marker =
MODE FLDRAWMARKER=PROC(REF FLIMAGEMARKER)VOID

@d macro op fldrawmarker to pdesc =
OP(FLDRAWMARKER)PDESC FLDRAWMARKERTOPDESC = BIOP 99

@d macro flimage define marker =
macro mode fl draw marker;
macro op fldrawmarker to pdesc;
macro op vz;
PROC flimage define marker =
   ([]CHAR name,FLDRAWMARKER drawmarker,[]CHAR psdraw)INT:
BEGIN
   PROC(VECTOR[]CHAR,CPTR,VECTOR[]CHAR)INT fl flimage define marker =
      ALIEN "FLIMAGE_DEFINE_MARKER"
      "#define FLIMAGE_DEFINE_MARKER(name,drawmarker,psdraw) \"
      "   flimage_define_marker(A_VC_charptr(name), \"
      "      (void *)drawmarker,A_VC_charptr(psdraw))";
   fl flimage define marker
	   (VZ name,
	    cp OF FLDRAWMARKERTOPDESC drawmarker,
		 VZ psdraw)
END #flimage define marker#

@d macro flimage delete all markers =
macro mode flimage;
PROC(REF FLIMAGE)VOID flimage delete all markers =
   ALIEN "FLIMAGE_DELETE_ALL_MARKERS"
   "#define FLIMAGE_DELETE_ALL_MARKERS(im) \"
   "   flimage_delete_all_markers((void *)im)"

@d macro flimage render annotation =
macro mode flimage;
PROC(REF FLIMAGE,FLWINDOW)INT flimage render annotation =
   ALIEN "FLIMAGE_RENDER_ANNOTATION"
   "#define FLIMAGE_RENDER_ANNOTATION(im,win) \"
   "   flimage_render_annotation((void *)im,win)"

@ Built-in format supports.

@d macro flimage enable pnm =
PROC flimage enable pnm  = VOID:
   CODE "(void) flimage_enable_pnm();"  # portable pnm (ppm, pgm, pbm)#

@d macro flimage enable xpm =
PROC flimage enable xpm  = VOID:
   CODE "(void) flimage_enable_xpm();"  # x pixmap                    #

@d macro flimage enable png =
PROC flimage enable png  = VOID:
   CODE "(void) flimage_enable_png();"  # portable network graphics   #

@d macro flimage enable jpeg  =
PROC flimage enable jpeg  = VOID:
   CODE "(void) flimage_enable_jpeg();" # JPEG/JFIG                   #

@d macro flimage enable bmp  =
PROC flimage enable bmp  = VOID:
   CODE "(void) flimage_enable_bmp();"  # MS Windows/OS2 BMP file     #

@d macro flimage enable xbm  =
PROC flimage enable xbm  = VOID:
   CODE "(void) flimage_enable_xbm();"  # X11 Bitmap file             #

@d macro flimage enable gif  =
PROC flimage enable gif  = VOID:
   CODE "(void) flimage_enable_gif();"  # CompuServ GIF               #

@d macro flimage enable sgi  =
PROC flimage enable sgi  = VOID:
   CODE "(void) flimage_enable_sgi();"  # SGI RGB file                #

@d macro flimage enable fits  =
PROC flimage enable fits  = VOID:
   CODE "(void) flimage_enable_fits();" # NASA/OST FITS file          #

@d macro flimage enable xwd  =
PROC flimage enable xwd  = VOID:
   CODE "(void) flimage_enable_xwd();"  # X Window Dump (xwd)         #

@d macro flimage enable tiff  =
PROC flimage enable tiff  = VOID:
   CODE "(void) flimage_enable_tiff();" # TIFF format                 #

@d macro flimage enable ps  =
PROC flimage enable ps  = VOID:
   CODE "(void) flimage_enable_ps();"   # PostScript format           #

@d macro flimage set fits bits =
PROC(INT)INT flimage set fits bits = ALIEN "FLIMAGE_SET_FITS_BITS"
   "#define FLIMAGE_SET_FITS_BITS(i) flimage_set_fits_bits(i)"

@ Output options.

@d macro flimage jpeg options =
macro mode flimagejpegoptions;
PROC(REF FLIMAGEJPEGOPTIONS)VOID flimage jpeg options =
   ALIEN "FLIMAGE_JPEG_OPTIONS"
   "#define FLIMAGE_JPEG_OPTIONS(fjo) \"
   "   flimage_jpeg_options((void *)fjo)"

@d macro flimage pnm options =
PROC(INT)VOID flimage pnm options = ALIEN "FLIMAGE_PNM_OPTIONS"
   "#define FLIMAGE_PNM_OPTIONS(is_raw_flag) \"
   "   flimage_pnm_options(is_raw_flag)"

@d macro flimage gif options =
PROC(INT)VOID flimage gif options = ALIEN "FLIMAGE_GIF_OPTIONS"
   "#define FLIMAGE_GIF_OPTIONS(interlace) \"
   "   flimage_gif_options(interlace)"

@d macro flimage ps options =
macro mode flimagepsoptions;
PROC flimage ps options = REF FLIMAGEPSOPTIONS:
   REF FLIMAGEPSOPTIONS CODE "RESULT=(void *)flimage_ps_options();"

@d macro mode flimageformatinfo =
MODE FLIMAGEFORMATINFO =
	STRUCT(CSTR formal name,
               short name,
               extension,
          INT type,
              read write,
              annotation,
          STRUCT 5 INT reserved)

@d macro flimage get number of formats =
PROC flimage get number of formats = INT:
   INT CODE "RESULT=flimage_get_number_of_formats();"

@d macro flimage get format info =
macro mode flimageformatinfo;
PROC(INT)REF FLIMAGEFORMATINFO flimage get format info =
   ALIEN "FLIMAGE_GET_FORMAT_INFO"
   "#define FLIMAGE_GET_FORMAT_INFO(n) \"
   "(void *)flimage_get_format_info(n)"

@d macro fl get matrix =
PROC(INT,INT,INT)CBPTR fl get matrix = ALIEN "FL_GET_MATRIX"
   "#define FL_GET_MATRIX(row,cols,elem_size) \"
   "(void *)fl_get_matrix(rows,cols,elem_size)"

@d macro fl make matrix =
PROC(INT,INT,INT,CBPTR)CBPTR fl make matrix =
   ALIEN "FL_MAKE_MATRIX"
   "#define FL_MAKE_MATRIX(rows,cols,elem_size,inmem) \"
   "(void *)fl_make_matrix(rows,cols,elem_size,(void *)inmem)"

@d macro fl free matrix =
PROC(CBPTR)VOID fl free matrix = ALIEN "FL_FREE_MATRIX"
   "#define FL_FREE_MATRIX(matrix) fl_free_matrix((void *)matrix)"

@d macro fl basename =
macro op vz;
PROC fl basename = ([]CHAR name)[]CHAR:
BEGIN
   PROC(VECTOR[]CHAR)CPTR fl fl basename =
      ALIEN "FL_BASENAME"
      "#define FL_BASENAME(name) (void *)fl_basename(A_VC_charptr(name))";
   CPTRTORVC fl fl basename(VZ name)
END #fl basename#

@d macro flimage add format =
macro mode flimageidentify;
macro mode flimagedescription;
macro mode flimagereadpixels;
macro mode flimagewriteimage;
macro op vz;
PROC flimage add format =
   ([]CHAR formal,short,extension,
    INT type,FLIMAGEIDENTIFY id,FLIMAGEDESCRIPTION desc,
    FLIMAGEREADPIXELS read,FLIMAGEWRITEIMAGE write)INT:
BEGIN
   PROC(VECTOR[]CHAR,VECTOR[]CHAR,VECTOR[]CHAR,INT,
        CPTR,CPTR,CPTR,CPTR)INT
      fl flimage add format = ALIEN "FLIMAGE_ADD_FORMAT"
      "#define FLIMAGE_ADD_FORMAT(formal_name,short_name,extension,\"
      "            type,identify,description,read_pixels,write_image) \"
      "   flimage_add_format(A_VC_charptr(formal_name),\"
      "      A_VC_charptr(short_name),A_VC_charptr(extension),\"
      "      type,(void *)identify,(void *)description,(void *)read_pixels,\"
      "      (void *)write_image)";
   fl flimage add format(
      VZ formal,VZ short,VZ extension,
      type,cp OF TOPDESC id,cp OF TOPDESC desc,
      cp OF TOPDESC read,cp OF TOPDESC write)
END #fl flimage add format#

@d macro flimage set annotation support =
PROC(INT,INT)VOID flimage set annotation support =
   ALIEN "FLIMAGE_SET_ANNOTATION_SUPPORT"
   "#define FLIMAGE_SET_ANNOTATION_SUPPORT(n,flag) \"
   "   flimage_set_annotation_support(n,flag)"

@d macro flimage getcolormap =
macro mode flimage;
PROC(REF FLIMAGE)INT flimage getcolormap =
   ALIEN "FLIMAGE_GETCOLORMAP"
   "#define FLIMAGE_GETCOLORMAP(im) \"
   "   flimage_getcolormap((void *)im)"

#PROC fl select octree quantizer  = VOID:
   CODE "fl_select_octree_quantizer();"#
@d macro fl select mediancut quantizer  =
PROC fl select mediancut quantizer  = VOID:
   CODE "fl_select_mediancut_quantizer();"

@ Simple image processing routines.

@d macro mode flkernel =
MODE FLKERNEL = REF[,]INT

@d macro flkernel to vec =
PROC flkernel to vec=(REF[,]INT k)REF VECTOR[]INT:
BEGIN
	[,]INT lk=k[@@1,@@1];
	HEAP VECTOR[1 UPB lk*2 UPB lk]INT lv;
	FOR i TO 1 UPB lk
	DO
		INT lb=(i-1)*2 UPB lk;
		VECTOR[]INT lvi=lv[lb+1:lb+2 UPB lk];
		[]INT lki=lk[i,];
		FOR j TO 2 UPB lk
		DO
			lvi[j]:=lki[j]
		OD
	OD;
	lv
END

@d macro vec to flkernel =
PROC vec to flkernel=(REF VECTOR[]INT rv,INT kr,kc)REF[,]INT:
BEGIN
	HEAP[kr,kc]INT lm;
	FOR i TO kr
	DO
		INT lb=(i-1)*kc;
		lm[i]:=rv[lb+1:lb+kc]
	OD;
	lm
END

@d macro op cptr to vec =
macro mode flkernel;
OP(CPTR)RVC CPTRTORVC = BIOP 99

@d macro flimage sharpen =
macro op cptr to fl kernel;
FLKERNEL flimage sharpen =
   CPTRTORVC CPTR CODE "RESULT=(void *)(-1);"

@d macro flimage smooth =
macro op cptr to fl kernel;
FLKERNEL flimage smooth =
   CPTRTORVC CPTR CODE "RESULT=(void *)(-2);"

@ Scaling.

@m flimage nosubpixel  = 0    # scale with no subpixel sampling #
@m flimage subpixel  = 1      # scale with  subpixel sampling   #
@m flimage center = 2         # center warped image. default    #
@m flimage right = 8          # flush right the warped image    #
@m flimage aspect = 32        # fit the size                    #
@m flimage nocenter = fl align top left

@d macro flimage convolve =
macro mode flimage;
macro mode flkernel;
macro flkernel to vec;
PROC flimage convolve = (REF FLIMAGE im,FLKERNEL k)INT:
BEGIN
	PROC(REF FLIMAGE,CBPTR,INT,INT)INT fl flimage convolve =
   	ALIEN "FLIMAGE_CONVOLVE"
  		"#define FLIMAGE_CONVOLVE(im,kernel,krows,kcol) \"
  		"   flimage_convolve((void *)im,(void *)kernel,krows,kcol)";
	fl flimage convolve(im,(flkernel to vec(k)).data,1 UPB k,2 UPB k)
END

@d macro flimage tint =
macro mode flimage;
PROC(REF FLIMAGE,BITS,REAL)INT flimage tint =
   ALIEN "FLIMAGE_TINT"
   "#define FLIMAGE_TINT(im,packed,opacity) \"
   "   flimage_tint((void *)im,packed,opacity)"

@d macro flimage rotate =
macro mode flimage;
PROC(REF FLIMAGE,INT,INT)INT flimage rotate =
   ALIEN "FLIMAGE_ROTATE"
   "#define FLIMAGE_ROTATE(im,angle,subpixel) \"
   "   flimage_rotate((void *)im,angle,subpixel)"

@d macro flimage flip =
macro mode flimage;
PROC(REF FLIMAGE,INT)INT flimage flip =
   ALIEN "FLIMAGE_FLIP"
   "#define FLIMAGE_FLIP(im,axis) \"
   "   flimage_flip((void *)im,axis)"

@d macro flimage scale =
macro mode flimage;
PROC(REF FLIMAGE,INT,INT,INT)INT flimage scale =
   ALIEN "FLIMAGE_SCALE"
   "#define FLIMAGE_SCALE(im,nw,nh,option) \"
   "   flimage_scale((void *),nw,nh,option)"

@d macro flimage warp =
macro mode flimage;
PROC flimage warp =(REF FLIMAGE im,REF[,]SHORT REAL matrix,
                    INT neww,newh,BITSsubpixel)INT:
BEGIN
   PROC(REF FLIMAGE,REF STRUCT 4 SHORT REAL,INT,INT,BITS)INT
      fl flimage warp = ALIEN "FLIMAGE_WARP"
   "#define FLIMAGE_WARP(im,mx,nw,nh,sp) \"
   "   flimage_warp((void *)im, (float *)mx.data,nw,nh,sp)";
	STRUCT 4 SHORT REAL lm;
	lm[:2]:=matrix[1,];
	lm[3:]:=matrix[2,];
	fl flimage warp(im,lm,neww,newh,subpixel);
END

@d macro flimage autocrop =
macro mode flimage;
PROC(REF FLIMAGE,FLCOLOR)INT flimage autocrop =
   ALIEN "FLIMAGE_AUTOCROP"
   "#define FLIMAGE_AUTOCROP(im,bk) \"
   "   flimage_autocrop((void *),bk)"

@d macro flimage get autocrop =
macro mode flimage;
PROC(REF FLIMAGE,FLCOLOR,REF INT,REF INT,REF INT,REF INT)INT
   flimage get autocrop = ALIEN "FLIMAGE_GET_AUTOCROP"
   "#define FLIMAGE_GET_AUTOCROP(im,bk,xl,yt,xr,yb) \"
   "   flimage_get_autocrop((void *)im,bk,(int *)xl,(int*,)yt,(int*,)xr,(int*)yb)"

@d macro flimage crop =
macro mode flimage;
PROC(REF FLIMAGE,INT,INT,INT,INT)INT flimage crop =
   ALIEN "FLIMAGE_CROP"
   "#define FLIMAGE_CROP(im,xl,yt,xr,yb) \"
   "   flimage_crop((void *),xl,yt,xr,yb)"

@d macro flimage replace pixel =
macro mode flimage;
PROC(REF FLIMAGE,INT,INT)INT flimage replace pixel =
   ALIEN "FLIMAGE_REPLACE_PIXEL"
   "#define FLIMAGE_REPLACE_PIXEL(im,target,repl) \"
   "   flimage_replace_pixel((void *),target,repl)"

@d macro flimage transform pixels =
macro mode flimage;
PROC(REF FLIMAGE,REF INT,REF INT,REF INT)INT flimage transform pixels =
   ALIEN "FLIMAGE_TRANSFORM_PIXELS"
   "#define FLIMAGE_TRANSFORM_PIXELS(im,r,g,b) \"
   "   flimage_transform_pixels((void *)im,(int *)r,(int *)g,(int *)b)"

@d macro flimage windowlevel =
macro mode flimage;
PROC(REF FLIMAGE,INT,INT)INT flimage windowlevel =
   ALIEN "FLIMAGE_WINDOWLEVEL"
   "#define FLIMAGE_WINDOWLEVEL(im,level,wwidth) \"
   "   flimage_windowlevel((void *)im,level,wwidth)"

@d macro flimage enhance =
macro mode flimage;
PROC(REF FLIMAGE,INT)INT flimage enhance = ALIEN "FLIMAGE_ENHANCE"
   "#define FLIMAGE_ENHANCE(im,delta) \"
   "   flimage_enhance((void *)im,delta)"

@d macro flimage from pixmap =
macro mode flimage;
PROC(REF FLIMAGE,PIXMAP)INT flimage from pixmap =
   ALIEN "FLIMAGE_FROM_PIXMAP"
   "#define FLIMAGE_FROM_PIXMAP(im,pixmap) \"
   "   flimage_from_pixmap((void *)im,pixmap)"

@d macro flimage to pixmap =
macro mode flimage;
PROC(REF FLIMAGE,FLWINDOW)PIXMAP flimage to pixmap =
   ALIEN "FLIMAGE_TO_PIXMAP"
   "#define FLIMAGE_TO_PIXMAP(im,win) \"
   "   flimage_to_pixmap((void *)im,win)"

@d macro flimage dup =
macro mode flimage;
PROC(REF FLIMAGE)REF FLIMAGE flimage dup = ALIEN "FLIMAGE_DUP"
   "#define FLIMAGE_DUP(im) (void *)flimage_dup((void *)im)"

@2Input.

@m fl normal input = 0
@m fl float input = 1
@m fl int input = 2
@m fl date input = 3
@m fl multiline input = 4
@m fl hidden input = 5
@m fl secret input = 6

@ For date input.

@m fl input mmdd = 0
@m fl input ddmm = 1

@ Defaults.

@m fl input boxtype = fl down box
@m fl input col1 = fl col1
@m fl input col2 = fl mcol
@m fl input lcol = fl lcol
@m fl input align = fl align left

@ Others.

@m fl input tcol = fl lcol
@m fl input ccol = fl blue

@m fl ringbell = (2r1 SHL 4)

@ Routines.

@d macro fl create input =
macro op vz;
PROC fl create input = (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl create input = ALIEN "FL_CREATE_INPUT"
      "#define FL_CREATE_INPUT(type,x,y,w,h,label) \"
      "   (void *)fl_create_input(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create input(type,x,y,w,h,VZ label)
END #fl create input#

@d macro fl add input =
macro op vz;
PROC fl add input = (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl add input = ALIEN "FL_ADD_INPUT"
      "#define FL_ADD_INPUT(type,x,y,w,h,label) \"
      "   (void *)fl_add_input(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add input(type,x,y,w,h,VZ label)
END #fl add input#

@d macro fl set input =
macro op vz;
PROC fl set input = (REF FLOBJECT ob,[]CHAR str)VOID:
BEGIN
   PROC(REF FLOBJECT,VECTOR[]CHAR)VOID fl fl set input =
      ALIEN "FL_SET_INPUT"
      "#define FL_SET_INPUT(ob,str) fl_set_input((void *)ob,A_VC_charptr(str))";
   fl fl set input(ob,VZ str)
END #fl set input#

@d macro fl set input return =
PROC(REF FLOBJECT,INT)VOID fl set input return =
   ALIEN "FL_SET_INPUT_RETURN"
   "#define FL_SET_INPUT_RETURN(ob,how) \"
   "   fl_set_input_return((void *)ob,how)"

@d macro fl set input color =
PROC(REF FLOBJECT,FLCOLOR,FLCOLOR)VOID fl set input color =
   ALIEN "FL_SET_INPUT_COLOR"
   "#define FL_SET_INPUT_COLOR(ob,textcolor,curscolor) \"
   "   fl_set_input_color((void *)ob,textcolor,curscolor)"

@d macro fl set input scroll =
PROC(REF FLOBJECT,INT)VOID fl set input scroll =
   ALIEN "FL_SET_INPUT_SCROLL"
   "#define FL_SET_INPUT_SCROLL(ob,yes) \"
   "   fl_set_input_scroll((void *)ob,yes)"

@d macro fl set input cursorpos =
PROC(REF FLOBJECT,INT,INT)VOID fl set input cursorpos =
   ALIEN "FL_SET_INPUT_CURSORPOS"
   "#define FL_SET_INPUT_CURSORPOS(ob,xpos,ypos) \"
   "   fl_set_input_cursorpos((void *)ob,xpos,ypos)"

@d macro fl set input selected =
PROC(REF FLOBJECT,INT)VOID fl set input selected =
   ALIEN "FL_SET_INPUT_SELECTED"
   "#define FL_SET_INPUT_SELECTED(ob,yes) \"
   "   fl_set_input_selected((void *)ob,yes)"

@d macro fl set input selected range =
PROC(REF FLOBJECT,INT,INT)VOID fl set input selected range =
   ALIEN "FL_SET_INPUT_SELECTED_RANGE"
   "#define FL_SET_INPUT_SELECTED_RANGE(ob,begin,end) \"
   "   fl_set_input_selected_range((void *)ob,begin-1,end-1)"

@d macro fl get input selected range =
PROC fl get input selected range =
   (REF FLOBJECT ob,REF INT beg,end)[]CHAR:
BEGIN
	PROC(REF FLOBJECT,REF INT,REF INT)CPTR fl fl get input selected range =
   	ALIEN "FL_GET_INPUT_SELECTED_RANGE"
   	"#define FL_GET_INPUT_SELECTED_RANGE(ob,begin,end) \"
   	"   (void *)fl_get_input_selected_range\"
   	"      ((void *)ob,(int *)begin,(int *)end)";
   CPTRTORVC fl fl get input selected range(ob,beg,end)
END

@d macro fl set input maxchars =
PROC(REF FLOBJECT,INT)VOID fl set input maxchars =
   ALIEN "FL_SET_INPUT_MAXCHARS"
   "#define FL_SET_INPUT_MAXCHARS(ob,maxchars) \"
   "   fl_set_input_maxchars((void *)ob,maxchars)"

@d macro fl set input hscrollbar =
PROC(REF FLOBJECT,INT)VOID fl set input hscrollbar =
   ALIEN "FL_SET_INPUT_HSCROLLBAR"
   "#define FL_SET_INPUT_HSCROLLBAR(ob,pref) \"
   "   fl_set_input_hscrollbar((void *)ob,pref)"

@d macro fl set input vscrollbar =
PROC(REF FLOBJECT,INT)VOID fl set input vscrollbar =
   ALIEN "FL_SET_INPUT_VSCROLLBAR"
   "#define FL_SET_INPUT_VSCROLLBAR(ob,pref) \"
   "   fl_set_input_vscrollbar((void *)ob,pref)"

@d macro fl set input topline =
PROC(REF FLOBJECT,INT)VOID fl set input topline =
   ALIEN "FL_SET_INPUT_TOPLINE"
   "#define FL_SET_INPUT_TOPLINE(ob,top) \"
   "   fl_set_input_topline((void *)ob,top)"

@d macro fl set input scrollbarsize =
PROC(REF FLOBJECT,INT,INT)VOID fl set input scrollbarsize =
   ALIEN "FL_SET_INPUT_SCROLLBARSIZE"
   "#define FL_SET_INPUT_SCROLLBARSIZE(ob,hh,vw) \"
   "   fl_set_input_scrollbarsize((void *)ob,hh,vw)"

@d macro fl set input xoffset =
PROC(REF FLOBJECT,INT)VOID fl set input xoffset =
   ALIEN "FL_SET_INPUT_XOFFSET"
   "#define FL_SET_INPUT_XOFFSET(ob,xoff) \"
   "   fl_set_input_xoffset((void *)ob,xoff)"

@d macro fl get input xoffset =
PROC(REF FLOBJECT)INT fl get input xoffset =
   ALIEN "FL_GET_INPUT_XOFFSET"
   "#define FL_GET_INPUT_XOFFSET(ob) fl_get_input_xoffset((void *)ob)"

@d macro fl set input fieldchar =
PROC(REF FLOBJECT,INT)VOID fl set input fieldchar =
   ALIEN "FL_SET_INPUT_FIELDCHAR"
   "#define FL_SET_INPUT_FIELDCHAR(ob,fchar) \"
   "   fl_set_input_fieldchar((void *)ob,fchar)"

@d macro fl get input topline =
PROC(REF FLOBJECT)INT fl get input topline =
   ALIEN "FL_GET_INPUT_TOPLINE"
   "#define FL_GET_INPUT_TOPLINE(ob) \"
   "   fl_get_input_topline((void *)ob)"

@d macro fl get input screenlines =
PROC(REF FLOBJECT)INT fl get input screenlines =
   ALIEN "FL_GET_INPUT_SCREENLINES"
   "#define FL_GET_INPUT_SCREENLINES(ob) \"
   "   fl_get_input_screenlines((void *)ob)"

@d macro fl get input cursorpos =
PROC(REF FLOBJECT,REF INT,REF INT)INT fl get input cursorpos =
   ALIEN "FL_GET_INPUT_CURSORPOS"
   "#define FL_GET_INPUT_CURSORPOS(ob,x,y) \"
   "   fl_get_input_cursorpos((void *)ob,(int *)x,(int *)y)"

@d macro fl set input cursor visible =
PROC(REF FLOBJECT,INT)VOID fl set input cursor visible =
   ALIEN "FL_SET_INPUT_CURSOR_VISIBLE"
   "#define FL_SET_INPUT_CURSOR_VISIBLE(ob,visible) \"
   "   fl_set_input_cursor_visible((void *)ob,visible)"

@d macro fl get input numberoflines =
PROC(REF FLOBJECT)INT fl get input numberoflines =
   ALIEN "FL_GET_INPUT_NUMBEROFLINES"
   "#define FL_GET_INPUT_NUMBEROFLINES(ob) \"
   "   fl_get_input_numberoflines((void *)ob)"

@d macro fl get input =
PROC fl get input = (REF FLOBJECT obj)[]CHAR:
BEGIN
   PROC(REF FLOBJECT)CPTR fl fl get input = ALIEN "FL_GET_INPUT"
      "#define FL_GET_INPUT(ob) \"
      "   (void *)fl_get_input((void *)ob)";
   CPTRTORVC fl fl get input(obj)
END #fl get input#

@d macro fl set input shortcut =
macro op vz;
PROC fl set input shortcut =
   (REF FLOBJECT ob,[]CHAR sc,INT showit)VOID:
      fl set object shortcut(ob,VZ sc,showit)

@2Edit keys.

@d macro mode fleditkeymap =
MODE FLEDITKEYMAP =
   STRUCT(# basic editing #
          INT del prev char,      # delete previous char    #
          INT del next char,      # delete next char        #
          INT del prev word,      # delete previous word    #
          INT del next word,      # delete next word        #

          # movement #
          INT moveto prev line,   # one line  up             #
          INT moveto next line,   # one line down            #
          INT moveto prev char,   # one char left            #
          INT moveto next char,   # one char right           #
          INT moveto prev word,   # one word left            #
          INT moveto next word,   # one word right           #
          INT moveto prev page,   # one page up              #
          INT moveto next page,   # one page down            #
          INT moveto bol,         # move to begining of line #
          INT moveto eol,         # move to end of line      #
          INT moveto bof,         # move to start of file    #
          INT moveto eof,         # move to end of file      #

          # misc. stuff #
          INT transpose,          # switch two char positions#
          INT paste,              # paste the edit buffer    #
          INT backspace,          # another  del prev char   #
          INT del to bol,         # cut to begining of line  #
          INT del to eol,         # cut to end of line       #
          INT clear field,        # delete everything        #
          INT del to eos,         # not implemented          #
          STRUCT 4 INT reserved); # filler                   #

@d macro fl set input editkeymap =
macro mode fleditkeymap;
PROC(REF FLEDITKEYMAP)VOID fl set input editkeymap =
   ALIEN "FL_SET_INPUT_EDITKEYMAP"
   "#define FL_SET_INPUT_EDITKEYMAP(keymap) \"
   "   fl_set_input_editkeymap((void *)keymap)"

@2Text.

@m fl normal text = 0

@m fl text boxtype = fl flat box
@m fl text col1 = fl col1
@m fl text col2 = fl mcol
@m fl text lcol = fl lcol
@m fl text align = fl align left

@d macro fl create text =
macro op vz;
PROC fl create text = (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl create text = ALIEN "FL_CREATE_TEXT"
      "#define FL_CREATE_TEXT(type,x,y,w,h,label) \"
      "   (void *)fl_create_text(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create text(type,x,y,w,h,VZ label)
END #fl create text#

@d macro fl add text =
macro op vz;
PROC fl add text = (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl add text = ALIEN "FL_ADD_TEXT"
      "#define FL_ADD_TEXT(type,x,y,w,h,label) \"
      "   (void *)fl_add_text(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add text(type,x,y,w,h,VZ label)
END #fl add text#

@2Menus.

@m fl touch menu = 0
@m fl push menu = 1
@m fl pulldown menu = 2

@ Defaults.

@m fl menu boxtype = fl border box
@m fl menu col1 = fl col1
@m fl menu col2 = fl mcol
@m fl menu lcol = fl lcol
@m fl menu align = fl align center

@ Others.

@m fl menu maxitems = 128
@m fl menu maxstr = 64

@ Routines.

@d macro fl create menu =
macro op vz;
PROC fl create menu = (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl create menu = ALIEN "FL_CREATE_MENU"
      "#define FL_CREATE_MENU(type,x,y,w,h,label) \"
      "   (void *)fl_create_menu(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create menu(type,x,y,w,h,VZ label)
END #fl create menu#

@d macro fl add menu =
macro op vz;
PROC fl add menu = (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl add menu = ALIEN "FL_ADD_MENU"
      "#define FL_ADD_MENU(type,x,y,w,h,label) \"
      "   (void *)fl_add_menu(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add menu(type,x,y,w,h,VZ label)
END #fl add menu#

@d macro fl clear menu =
PROC(REF FLOBJECT)VOID fl clear menu = ALIEN "FL_CLEAR_MENU"
   "#define FL_CLEAR_MENU(ob) \"
   "   fl_clear_menu((void *)ob)"

@d macro fl set menu =
macro op vz;
PROC fl set menu = (REF FLOBJECT ob,[]CHAR menustr)VOID:
BEGIN
   PROC(REF FLOBJECT,VECTOR[]CHAR)VOID fl fl set menu =
      ALIEN "FL_SET_MENU"
      "#define FL_SET_MENU(ob,menustr) \"
      "   fl_set_menu((void *)ob,A_VC_charptr(menustr))";
   fl fl set menu(ob,VZ menustr)
END #fl set menu#

@d macro fl addto menu =
macro op vz;
PROC fl addto menu = (REF FLOBJECT ob,[]CHAR menustr)INT:
BEGIN
   PROC(REF FLOBJECT,VECTOR[]CHAR)INT fl fl addto menu =
      ALIEN "FL_ADDTO_MENU"
      "#define FL_ADDTO_MENU(ob,menustr) \"
      "   fl_addto_menu((void *)ob,A_VC_charptr(menustr))";
   fl fl addto menu(ob,VZ menustr)
END #fl addto menu#

@d macro fl replace menu item =
macro op vz;
PROC fl replace menu item = (REF FLOBJECT ob,INT num,[]CHAR str)VOID:
BEGIN
   PROC(REF FLOBJECT,INT,VECTOR[]CHAR)VOID fl fl replace menu item =
      ALIEN "FL_REPLACE_MENU_ITEM"
      "#define FL_REPLACE_MENU_ITEM(ob,num,str) \"
      "   fl_replace_menu_item((void *)ob,num,A_VC_charptr(str))";
   fl fl replace menu item(ob,num,VZ str)
END #fl replace menu item#

@d macro fl delete menu item =
PROC(REF FLOBJECT,INT)VOID fl delete menu item = ALIEN "FL_DELETE_MENU_ITEM"
   "#define FL_DELETE_MENU_ITEM(ob,num) \"
   "   fl_delete_menu_item((void *)ob,num)"

@d macro fl set menu item shortcut =
macro op vz;
PROC fl set menu item shortcut = (REF FLOBJECT ob,INT n,[]CHAR str)VOID:
BEGIN
   PROC(REF FLOBJECT,INT,VECTOR[]CHAR)VOID fl fl set menu item shortcut =
      ALIEN "FL_SET_MENU_ITEM_SHORTCUT"
      "#define FL_SET_MENU_ITEM_SHORTCUT(ob,num,str) \"
      "   fl_set_menu_item_shortcut((void *)ob,num,A_VC_charptr(str))";
   fl fl set menu item shortcut(ob,n,VZ str)
END #fl set menu item shortcut#

@d macro fl set menu item mode =
PROC(REF FLOBJECT,INT,BITS)VOID fl set menu item mode =
   ALIEN "FL_SET_MENU_ITEM_MODE"
   "#define FL_SET_MENU_ITEM_MODE(ob,num,mode) \"
   "   fl_set_menu_item_mode((void *)ob,num,mode)"

@d macro fl show menu symbol =
PROC(REF FLOBJECT,INT)VOID fl show menu symbol = ALIEN "FL_SHOW_MENU_SYMBOL"
   "#define FL_SHOW_MENU_SYMBOL(ob,show) \"
   "   fl_show_menu_symbol((void *)ob,show)"

@d macro fl set menu popup =
PROC(REF FLOBJECT,INT)VOID fl set menu popup = ALIEN "FL_SET_MENU_POPUP"
   "#define FL_SET_MENU_POPUP(ob,pup) \"
   "   fl_set_menu_popup((void *)ob,pup)"

@d macro fl get menu popup =
PROC(REF FLOBJECT)INT fl get menu popup = ALIEN "FL_GET_MENU_POPUP"
   "#define FL_GET_MENU_POPUP(ob) fl_get_menu_popup((void *)ob)"

@d macro fl get menu =
PROC(REF FLOBJECT)INT fl get menu = ALIEN "FL_GET_MENU"
   "#define FL_GET_MENU(ob) fl_get_menu((void *)ob)"

@d macro fl get menu item text =
PROC fl get menu item text = (REF FLOBJECT ob,INT n)[]CHAR:
BEGIN
	PROC(REF FLOBJECT,INT)CPTR fl fl get menu item text =
		ALIEN "FL_GET_MENU_ITEM_TEXT"
   	"#define FL_GET_MENU_ITEM_TEXT(ob,n) \"
   	"   (void *)fl_get_menu_item_text((void *)ob,n)";
	CPTRTORVC fl fl get menu item text(ob,n)
END #fl get menu item text#

@d macro fl get menu maxitems =
PROC(REF FLOBJECT)INT fl get menu maxitems = ALIEN "FL_GET_MENU_MAXITEMS"
   "#define FL_GET_MENU_MAXITEMS(ob) fl_get_menu_maxitems((void *)ob)"

@d macro fl get menu item mode =
PROC(REF FLOBJECT,INT)BITS fl get menu item mode = ALIEN "FL_GET_MENU_ITEM_MODE"
   "#define FL_GET_MENU_ITEM_MODE(ob,n) \"
   "   fl_get_menu_item_mode((void *)ob,n)"

@d macro fl get menu text =
PROC fl get menu text = (REF FLOBJECT obj)[]CHAR:
BEGIN
	PROC(REF FLOBJECT)CSTR fl fl get menu text = ALIEN "FL_GET_MENU_TEXT"
		"#define FL_GET_MENU_TEXT(ob) \"
		"   (void *)fl_get_menu_text((void *)ob)";
	CSTRTORVC fl fl get menu text(obj)
END

@d macro fl set menu entries =
macro flpup to pup;
PROC fl set menu entries = (REF FLOBJECT ob,[]FLPUPENTRY e)INT:
BEGIN
	PROC(REF FLOBJECT,VECTOR[]PUPENTRY)INT
		fl fl set menu entries = ALIEN "FL_SET_MENU_ENTRIES"
	   "#define FL_SET_MENU_ENTRIES(ob,ent) \"
	   "   fl_set_menu_entries((void *)ob,(void *)ent.data)";
	fl fl set menu entries(ob,flpup to pup(e))
END #fl set menu entries#

@2MenuBar.

@m fl normal menubar = 0

@m fl menubar boxtype = fl up box
@m fl menubar col1 = fl col1
@m fl menubar col2 = fl mcol
@m fl menubar lcol = fl lcol

@ Routines.

@ These routines have yet to be created.

@d macro fl create menubar =
macro op vz;
PROC fl create menubar = (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl create menubar = ALIEN "FL_CREATE_MENUBAR"
      "#define FL_CREATE_MENUBAR(type,x,y,w,h,label) \"
      "   (void *)fl_create_menubar(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create menubar(type,x,y,w,h,VZ label)
END #fl create menubar#

@d macro fl add menubar =
macro op vz;
PROC fl add menubar = (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR)REF FLOBJECT
      fl fl add menubar = ALIEN "FL_ADD_MENUBAR"
      "#define FL_ADD_MENUBAR(type,x,y,w,h,label) \"
      "   (void *)fl_add_menubar(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add menubar(type,x,y,w,h,VZ label)
END #fl add menubar#

@d macro fl clear menubar =
PROC(REF FLOBJECT)VOID fl clear menubar = ALIEN "FL_CLEAR_MENUBAR"
   "#define FL_CLEAR_MENUBAR(ob) fl_clear_menubar((void *)ob);"

@d macro fl set menubar =
macro op vz;
PROC fl set menubar = (REF FLOBJECT ob,[]CHAR str)VOID:
BEGIN
   PROC(REF FLOBJECT,VECTOR[]CHAR)VOID fl fl set menubar =
      ALIEN "FL_SET_MENUBAR"
      "#define FL_SET_MENUBAR(ob,str) \"
      "   fl_set_menubar((void *)ob,A_VC_charptr(str))";
   fl fl set menubar(ob,VZ str)
END #fl set menubar#

@d macro fl set menubar entries =
macro flpup to pup;
macro op vz;
PROC fl set menubar entries =
   (REF FLOBJECT ob,[]CHAR str,[]FLPUPENTRY entry)VOID:
BEGIN
   PROC(REF FLOBJECT,VECTOR[]CHAR,VECTOR[]PUPENTRY)VOID
      fl fl set menubar entries = ALIEN "FL_SET_MENUBAR_ENTRIES"
      "#define FL_SET_MENUBAR_ENTRIES(ob,str,entry) \"
      "   fl_set_menubar_entries((void *)ob,A_VC_charptr(str),(void *)entry.data)";
   fl fl set menubar entries(ob,VZ str,flpup to pup(entry))
END #fl set menubar entries#

@ Prototypes for clipboard stuff.

@d macro mode flcpmode =
MODE FLCPMODE = ATOM

@d macro mode flloseselectioncb =
MODE FLLOSESELECTIONCB = PROC(REF FLOBJECT,INT)INT

@d macro mode flselectioncb =
MODE FLSELECTIONCB = PROC(REF FLOBJECT,INT,CPTR)INT

@ @d macro op fl lose selection cb to pdesc =
macro mode flloseselectioncb;
OP(FLLOSESELECTIONCB)PDESC TOPDESC = BIOP 99

@d macro op fl selection cb to pdesc =
macro mode flselectioncb;
OP(FLSELECTIONCB)PDESC TOPDESC = BIOP 99

@d macro fl stuff clipboard =
macro op fl lose selection cb to pdesc;
PROC fl stuff clipboard =
   (REF FLOBJECT ob,INT type,CPTR data,INT size,FLLOSESELECTIONCB cb)INT:
BEGIN
   PROC(REF FLOBJECT,INT,CPTR,INT,CPTR)INT
      fl fl stuff clipboard = ALIEN "FL_STUFF_CLIPBOARD"
      "#define FL_STUFF_CLIPBOARD(ob,type,data,size,cb) \"
      "   fl_stuff_clipboard((void *)ob, type,\"
      "      (const void *)data, size,(void *)cb)";
   fl fl stuff clipboard(ob,type,data,size,cp OF TOPDESC cb)
END #fl stuff clipboard#

@d macro fl request clipboard =
macro op fl selection cb to pdesc;
PROC fl request clipboard = (REF FLOBJECT ob,INT type,FLSELECTIONCB cb)INT:
BEGIN
   PROC(REF FLOBJECT,INT,CPTR)INT
      fl fl request clipboard =
      ALIEN "FL_REQUEST_CLIPBOARD"
      "#define FL_REQUEST_CLIPBOARD(ob,type,cb) \"
      "   fl_request_clipboard((void *)ob,type,(void *)cb)";
   fl fl request clipboard(ob,type,cp OF TOPDESC cb)
END #fl request clipboard#

@2Clocks.

@m fl analog clock = 0
@m fl digital clock = 1

@m fl clock boxtype = fl up box
@m fl clock col1 = fl inactive col
@m fl clock col2 = fl bottom bcol
@m fl clock lcol = fl black
@m fl clock align = fl align bottom

@m fl clock topcol = fl col1

@d macro fl create clock =
macro op vz;
PROC fl create clock = (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,
        FLCOORD,FLCOORD,FLCOORD,FLCOORD,
        VECTOR[]CHAR)REF FLOBJECT fl fl create clock =
      ALIEN "FL_CREATE_CLOCK"
      "#define FL_CREATE_CLOCK(type,x,y,w,h,label) \"
      "(void *)fl_create_clock(type,x,y,w,h,\"
      "   A_VC_charptr(label))";
   fl fl create clock(type,x,y,w,h,VZ label)
END #fl create clock#

@d macro fl add clock =
macro op vz;
PROC fl add clock = (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(INT,
        FLCOORD,FLCOORD,FLCOORD,FLCOORD,
        VECTOR[]CHAR)REF FLOBJECT fl fl add clock =
      ALIEN "FL_ADD_CLOCK"
      "#define FL_ADD_CLOCK(type,x,y,w,h,label) \"
      "(void *)fl_add_clock(type,x,y,w,h,\"
      "   A_VC_charptr(label))";
   fl fl add clock(type,x,y,w,h,VZ label)
END #fl create clock#

@d macro fl get clock =
PROC(REF FLOBJECT,REF INT,REF INT,REF INT)VOID
   fl get clock = ALIEN "FL_GET_CLOCK"
   "#define FL_GET_CLOCK(ob,h,m,s) \"
   "   fl_get_clock((void *)ob,(int *)h,(int *)m,(int *)s)"

@d macro fl set clock adjustment =
PROC(REF FLOBJECT,INT)INT fl set clock adjustment =
   ALIEN "FL_SET_CLOCK_ADJUSTMENT"
   "#define FL_SET_CLOCK_ADJUSTMENT(ob,adj) \"
   "   fl_set_clock_adjustment((void *)ob,adj)"

@d macro fl set clock ampm =
PROC(REF FLOBJECT,INT)VOID fl set clock ampm =
   ALIEN "FL_SET_CLOCK_AMPM"
   "#define FL_SET_CLOCK_AMPM(ob,yes_no) \"
   "   fl_set_clock_ampm((void *)ob,yes_no)"

@2Cursors.

@m fl default cursor = -1
@m fl invisible cursor = -2
@m fl busy cursor = xc watch
@m fl crosshair cursor = xc tcross
@m fl kill cursor = xc pirate
@m fl nwarrow cursor = xc top left arrow
@m fl nearrow cursor = xc arrow

@m xc invisible = fl invisible cursor

@d macro fl set cursor =
PROC(WINDOW,INT)VOID fl set cursor =
   ALIEN "FL_SET_CURSOR"
   "#define FL_SET_CURSOR(win,curs) fl_set_cursor(win,curs)"

@d macro fl set cursor color =
PROC(INT,FLCOLOR,FLCOLOR)VOID fl set cursor color =
   ALIEN "FL_SET_CURSOR_COLOR"
   "#define FL_SET_CURSOR_COLOR(cur,fg,bg) \"
   "   fl_set_cursor_color(cur,fg,bg)"

@d macro fl create bitmap cursor =
PROC(CSTR,CSTR,INT,INT,INT,INT)INT
 fl create bitmap cursor =   ALIEN "FL_CREATE_BITMAP_CURSOR"
   "#define FL_CREATE_BITMAP_CURSOR(source,mask,w,h,hotx,hoty) \"
   "   fl_create_bitmap_cursor(\"
   "      (char *)source,(char *)mask,w,h,hotx,hoty)"

@d macro fl create animated cursor =
PROC(STRUCT 256 INT,INT)INT fl create animated cursor =
   ALIEN "FL_CREATE_ANIMATED_CURSOR"
   "#define FL_CREATE_ANIMATED_CURSOR(cur_names,interval) \"
   "   fl_create_animated_cursor((int *)cur_names,interval)"

@d macro fl get cursor byname =
PROC(INT)CURSOR fl get cursor byname =
   ALIEN "FL_GET_CURSOR_BYNAME"
   "#define FL_GET_CURSOR_BYNAME(cursor) \"
   "   fl_get_cursor_byname(cursor)"

@d macro fl reset cursor =
macro fl set cursor;
PROC fl reset cursor = (WINDOW win)VOID:
	fl set cursor(win, fl default cursor)

@2Free objects.

@m fl normal free = 0
@m fl inactive free = 1
@m fl input free = 2
@m fl continuous free = 3
@m fl all free = 4

@m fl sleeping free = fl inactive free

@d macro fl create free =
macro op fl handler to pdesc;
macro op vz;
PROC fl create free =
 (INT type,FLCOORD x,y,w,h,[]CHAR label,FLHANDLER ptr)REF FLOBJECT:
BEGIN
 PROC(INT,
 FLCOORD,FLCOORD,FLCOORD,FLCOORD,
 VECTOR[]CHAR,CPTR)REF FLOBJECT
 fl fl create free =   ALIEN "FL_CREATE_FREE"
   "#define FL_CREATE_FREE(type,x,y,w,h,label,ptr) \"
   "   (void *)fl_create_free(type,x,y,w,h,A_VC_charptr(label),(void *)ptr)";
 fl fl create free(type,x,y,w,h,VZ label,cp OF FLHANDLERTOPDESC ptr)
END #fl create free#

@d macro fl add free =
macro op fl handler to pdesc;
macro op vz;
PROC fl add free =
 (INT type,FLCOORD x,y,w,h,[]CHAR label,FLHANDLER ptr)REF FLOBJECT:
BEGIN
   PROC(INT,FLCOORD,FLCOORD,FLCOORD,FLCOORD,VECTOR[]CHAR,CPTR)REF FLOBJECT
      fl fl add free =   ALIEN "FL_ADD_FREE"
      "#define FL_ADD_FREE(type,x,y,w,h,label,ptr) \"
      " (void *)fl_add_free(type,x,y,w,h,A_VC_charptr(label),(void *)ptr)";
   fl fl add free(type,x,y,w,h,VZ label,cp OF FLHANDLERTOPDESC ptr)
END #fl add free#

@2Resources and miscellaneous goodies.

@m fls alertdismiss label = "flAlert.dismiss.label"
@m fls alert title = "flAlert.title"

@m fls question yes label = "flQuestion.yes.label"
@m fls question no label = "flQuestion.no.label"
@m fls question title = "flQuestion.title"

@m fls ok label = "flInput.ok.label"
@m fls input clear label = "flInput.clear.label"
@m fls input cancel label = "flInput.cancel.label"
@m fls input title = "flInput.title"

@m fls choicetitle = "flChoice.title"

@d macro fl set goodies font =
PROC(INT,INT)VOID fl set goodies font =   ALIEN "FL_SET_GOODIES_FONT"
   "#define FL_SET_GOODIES_FONT(style,size) \"
   "   fl_set_goodies_font(style,size)"

@ Messages and questions.

@d macro fl show message =
macro op vz;
PROC fl show message = ([]CHAR s1,s2,s3)VOID:
BEGIN
 PROC(VECTOR[]CHAR,VECTOR[]CHAR,VECTOR[]CHAR)VOID
 fl fl show message =   ALIEN "FL_SHOW_MESSAGE"
   "#define FL_SHOW_MESSAGE(s1,s2,s3) \"
   "   fl_show_message(A_VC_charptr(s1),A_VC_charptr(s2),A_VC_charptr(s3))";
 fl fl show message(VZ s1,VZ s2,VZ s3)
END #fl show message#

@d macro fl show messages =
macro op vz;
PROC fl show messages = ([]CHAR str)VOID:
BEGIN
 PROC(VECTOR[]CHAR)VOID fl fl show messages =   ALIEN "FL_SHOW_MESSAGES"
   "#define FL_SHOW_MESSAGES(str) fl_show_messages(A_VC_charptr(str))";
 fl fl show messages(VZ str)
END #fl show messages#

@d macro fl hide message =
PROC fl hide message = VOID: CODE "fl_hide_message();"

@d macro fl show question =
macro op vz;
PROC fl show question = ([]CHAR str,INT ans)INT:
BEGIN
 PROC(VECTOR[]CHAR,INT)INT fl fl show question =   ALIEN "FL_SHOW_QUESTION"
   "#define FL_SHOW_QUESTION(str,ans) \"
   "   fl_show_question(A_VC_charptr(str),ans)";
 fl fl show question(VZ str,ans)
END #fl show question#

@d macro fl hide question =
PROC fl hide question = VOID: CODE "fl_hide_question();"

@d macro fl show alert =
macro op vz;
PROC fl show alert = ([]CHAR title,str1,str2,INT c)VOID:
BEGIN
 PROC(VECTOR[]CHAR,VECTOR[]CHAR,VECTOR[]CHAR,INT)VOID
 fl fl show alert =   ALIEN "FL_SHOW_ALERT"
   "#define FL_SHOW_ALERT(title,str1,str2,c) \"
   "   fl_show_alert(A_VC_charptr(title),A_VC_charptr(str1),\"
   "      A_VC_charptr(str2),c)";
 fl fl show alert(VZ title,VZ str1,VZ str2,c)
END #fl show alert#

@d macro fl hide alert =
PROC fl hide alert = VOID: CODE "fl_hide_alert();"

@d macro fl show input =
macro op vz;
PROC fl show input = ([]CHAR str1,default)[]CHAR:
BEGIN
 PROC(VECTOR[]CHAR,VECTOR[]CHAR)CPTR fl fl show input =
   ALIEN "FL_SHOW_INPUT"
   "#define FL_SHOW_INPUT(str1,defstr) \"
   "   (void *)fl_show_input(A_VC_charptr(str1),A_VC_charptr(defstr))";
 CPTRTORVC fl fl show input(VZ str1,VZ default)
END #fl show input#

@d macro fl hide input =
PROC fl hide input = VOID: CODE "fl_hide_input();"

@d macro fl show simple input =
macro op vz;
PROC fl show simple input = ([]CHAR str1,default)[]CHAR:
BEGIN
 PROC(VECTOR[]CHAR,VECTOR[]CHAR)CPTR fl fl show simple input =
   ALIEN "FL_SHOW_SIMPLE_INPUT"
   "#define FL_SHOW_SIMPLE_INPUT(str1,defstr) \"
   "   (void *)fl_show_simple_input(\"
   "      A_VC_charptr(str1),A_VC_charptr(defstr))";
 CPTRTORVC fl fl show simple input(VZ str1,VZ default)
END #fl show simple input#

@d macro fl show colormap =
PROC(INT)INT fl show colormap =   ALIEN "FL_SHOW_COLORMAP"
   "#define FL_SHOW_COLORMAP(oldcolor) fl_show_colormap(oldcolor)"

@d macro fl goodie atclose =
PROC(REF FLFORM,REF FLOBJECT)INT fl goodie atclose =
   ALIEN "FL_GOODIE_ATCLOSE"
   "#define FL_GOODIE_ATCLOSE(form,ob) \"
   "   fl_goodie_atclose((void *)form,(void *)ob)"

@2Choices.

@d macro fl show choices =
macro op vz;
PROC fl show choices = ([]CHAR msg,INT n,[]CHAR c1,c2,c3,INT def)INT:
BEGIN
 PROC(VECTOR[]CHAR,INT,VECTOR[]CHAR,VECTOR[]CHAR,VECTOR[]CHAR,INT)INT
 fl fl show choices =   ALIEN "FL_SHOW_CHOICES"
   "#define FL_SHOW_CHOICES(msg,numb,c1,c2,c3,def) \"
   "   fl_show_choices(A_VC_charptr(msg),numb,\"
   "      A_VC_charptr(c1),A_VC_charptr(c2),A_VC_charptr(c3),def)";
 fl fl show choices(VZ msg,n,VZ c1,VZ c2,VZ c3,def)
END #fl show choices#

@d macro fl show choice =
macro op vz;
PROC fl show choice = ([]CHAR m1,m2,m3,INT n,[]CHAR c1,c2,c3,INT def)INT:
BEGIN
	PROC(VECTOR[]CHAR,VECTOR[]CHAR,VECTOR[]CHAR,INT,
 	VECTOR[]CHAR,VECTOR[]CHAR,VECTOR[]CHAR,INT)INT fl fl show choice =
   	ALIEN "FL_SHOW_CHOICE"
   "#define FL_SHOW_CHOICE(m1,m2,m3,numb,c1,c2,c3,def) \"
   "   fl_show_choice(A_VC_charptr(m1),A_VC_charptr(m2),A_VC_charptr(m3),\"
   "      numb,A_VC_charptr(c1),A_VC_charptr(c2),A_VC_charptr(c3),def)";
 	fl fl show choice(VZ m1,VZ m2,VZ m3,n,VZ c1,VZ c2,VZ c3,def)
END #fl show choice#

@d macro fl hide choice =
PROC fl hide choice = VOID: CODE "fl_hide_choice();"

@m fl set choices shortcut = fl set choice shortcut

@d macro fl set choice shortcut =
macro op vz;
PROC fl set choice shortcut = ([]CHAR a,b,c)VOID:
BEGIN
 PROC(VECTOR[]CHAR,VECTOR[]CHAR,VECTOR[]CHAR)VOID
 fl fl set choice shortcut =   ALIEN "FL_SET_CHOICE_SHORTCUT"
   "#define FL_SET_CHOICE_SHORTCUT(a,b,c) \"
   "   fl_set_choice_shortcut(A_VC_charptr(a),A_VC_charptr(b),A_VC_charptr(c))";
 fl fl set choice shortcut(VZ a,VZ b,VZ c)
END #fl set choice shortcut#

@2One liner.

@d macro fl show oneliner =
macro op vz;
PROC fl show oneliner = ([]CHAR s,FLCOORD x,y)VOID:
BEGIN
 PROC(VECTOR[]CHAR,FLCOORD,FLCOORD)VOID fl fl show oneliner =
   ALIEN "FL_SHOW_ONELINER"
   "#define FL_SHOW_ONELINER(s,x,y) \"
   "   fl_show_oneliner(A_VC_charptr(s),x,y)";
 fl fl show oneliner(VZ s,x,y)
END #fl show oneliner#

@d macro fl hide oneliner =
PROC fl hide oneliner = VOID: CODE "fl_hide_oneliner();"

@d macro fl set oneliner font =
PROC(INT,INT)VOID fl set oneliner font =
   ALIEN "FL_SET_ONELINER_FONT"
   "#define FL_SET_ONELINER_FONT(style,size) \"
   "   fl_set_oneliner_font(style,size)"

@d macro fl set oneliner color =
PROC(FLCOLOR,FLCOLOR)VOID fl set oneliner color =
   ALIEN "FL_SET_ONELINER_COLOR"
   "#define FL_SET_ONELINER_COLOR(tc,bc) \"
   "   fl_set_oneliner_color(tc,bc)"

@d macro fl set tooltip font =
PROC(INT,INT)VOID fl set tooltip font =
   ALIEN "FL_SET_TOOLTIP_FONT"
   "#define FL_SET_TOOLTIP_FONT(style,size) \"
   "   fl_set_tooltip_font(style,size)"

@d macro fl set tooltip color =
PROC(FLCOLOR,FLCOLOR)VOID fl set tooltip color =
   ALIEN "FL_SET_TOOLTIP_COLOR"
   "#define FL_SET_TOOLTIP_COLOR(tc,bc) \"
   "   fl_set_tooltip_color(tc,bc)"

@d macro fl set tooltip boxtype =
PROC(INT)VOID fl set tooltip boxtype =   ALIEN "FL_SET_TOOLTIP_BOXTYPE"
   "#define FL_SET_TOOLTIP_BOXTYPE(bt) \"
   "   fl_set_tooltip_boxtype(bt)"

@d macro fl set tooltip lalign =
PROC(INT)VOID fl set tooltip lalign =   ALIEN "FL_SET_TOOLTIP_LALIGN"
   "#define FL_SET_TOOLTIP_LALIGN(align) \"
   "   fl_set_tooltip_lalign(align)"

@2Command log.

@d macro mode fdcmdlog =
MODE FDCMDLOG =
   STRUCT(
      REF FLFORM form,
      CPTR vdata,
      CSTR cdata,
      INT  ldata,
      REF FLOBJECT browser,
             close browser,
             clear browser)

@d macro fl exe command =
macro op vz;
PROC fl exe command = ([]CHAR cmd,BOOL block)INT:
BEGIN
 PROC(VECTOR[]CHAR,BOOL)INT fl fl exe command =
   ALIEN "FL_EXE_COMMAND"
   "#define FL_EXE_COMMAND(cmd,block) \"
   "   fl_exe_command(A_VC_charptr(cmd),block)";
 fl fl exe command(VZ cmd,block)
END #fl exe command#

@d macro fl end command =
PROC(INT)INT fl end command =   ALIEN "FL_END_COMMAND"
   "#define FL_END_COMMAND(pid) fl_end_command(pid)"

@d macro fl check command =
PROC(INT)INT fl check command =   ALIEN "FL_CHECK_COMMAND"
   "#define FL_CHECK_COMMAND(pid) fl_check_command(pid)"

@d macro fl popen =
macro op vz;
PROC fl popen = ([]CHAR cmd,type)CPTR:
BEGIN
 PROC(VECTOR[]CHAR,VECTOR[]CHAR)CPTR fl fl popen =   ALIEN "FL_POPEN"
   "#define FL_POPEN(cmd,type) \"
   "(void *)fl_popen(A_VC_charptr(cmd),A_VC_charptr(type))";
 fl flpopen(VZ cmd,VZ type)
END #fl popen#

@d macro fl pclose =
PROC(CPTR)INT fl pclose =   ALIEN "FL_PCLOSE"
   "#define FL_PCLOSE(stream) fl_pclose((void *)stream)"

@d macro fl end all command =
PROC fl end all command = INT:
 INT CODE "RESULT=fl_end_all_command();"

@d macro fl show command log =
PROC(INT)VOID fl show command log =   ALIEN "FL_SHOW_COMMAND_LOG"
   "#define FL_SHOW_COMMAND_LOG(border) \"
   "   fl_show_command_log(border)"

@d macro fl hide command log =
PROC fl hide command log = VOID: CODE "fl_hide_command_log();"

@d macro fl clear command log =
PROC fl clear command log = VOID: CODE "fl_clear_command_log();"

@d macro fl addto command log =
macro op vz;
PROC fl addto command log = ([]CHAR s)VOID:
BEGIN
 PROC(VECTOR[]CHAR)VOID fl fl addto command log =
   ALIEN "FL_ADDTO_COMMAND_LOG"
   "#define FL_ADDTO_COMMAND_LOG(s) \"
   "   fl_addto_command_log(A_VC_charptr(s))";
 fl fl addto command log(VZ s)
END #fl addto command log#

@d macro fl set command log position =
PROC(INT,INT)VOID fl set command log position =
   ALIEN "FL_SET_COMMAND_LOG_POSITION"
   "#define FL_SET_COMMAND_LOG_POSITION(x,y) \"
   "   fl_set_command_log_position(x,y)"

@d macro fl get command log fdstruct =
macro mode fdcmdlog;
PROC fl get command log fdstruct = REF FDCMDLOG:
 REF FDCMDLOG CODE "RESULT=(void *)fl_get_command_log_fdstruct();"

@m fl open command = fl exe command
@m fl close command = fl end command

@d macro fl goodies atclose =
PROC(REF FLFORM,CPTR)INT fl goodies atclose =   ALIEN "FL_GOODIES_ATCLOSE"
   "#define FL_GOODIES_ATCLOSE(form,data) \"
   "   fl_goodies_atclose((void *)form,(void *)data)"

@2Postscript stuff.

@m flps auto = 0                  # switch to landscale if does not fit #
@m flps landscape = 1             # landscape always                    #
@m flps portrait = 2              # portrait always                     #
@m flps bestfit = 3               # even margins/best fit               #

@m flps bw = -1
@m flps grayscale = 0
@m flps col = 1

@d macro fl ps init =
macro mode flimagepsoptions;
PROC flps init = REF FLIMAGEPSOPTIONS:
 REF FLIMAGEPSOPTIONS CODE "RESULT=(void *)flps_init();"

@d macro fl object ps dump =
macro op vz;
PROC fl object ps dump = (REF FLOBJECT ob,[]CHAR fname)INT:
BEGIN
 PROC(REF FLOBJECT,VECTOR[]CHAR)INT fl fl object ps dump =
   ALIEN "FL_OBJECT_PS_DUMP"
   "#define FL_OBJECT_PS_DUMP(ob,fname) \"
   "   fl_object_ps_dump((void *)ob,A_VC_charptr(fname))";
 fl fl object ps dump(ob,VZ fname)
END #fl object ps dump#

@2Frames.

@m fl no frame = 0
@m fl up frame = 1
@m fl down frame = 2
@m fl border frame = 3
@m fl shadow frame = 4
@m fl engraved frame = 5
@m fl rounded frame = 6
@m fl embossed frame = 7
@m fl oval frame = 8

@m fl frame col1 = fl black # border col     #
@m fl frame col2 = fl col1  # label background #
@m fl frame lcol = fl black # label color      #

@d macro fl create frame =
macro op vz;
PROC fl create frame = (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
 PROC(INT,
 FLCOORD,FLCOORD,FLCOORD,FLCOORD,
 VECTOR[]CHAR)REF FLOBJECT
 fl fl create frame =   ALIEN "FL_CREATE_FRAME"
   "#define FL_CREATE_FRAME(type,x,y,w,h,label) \"
   "   (void *)fl_create_frame(type,x,y,w,h,A_VC_charptr(label))";
 fl fl create frame(type,x,y,w,h,VZ label)
END #fl create frame#

@d macro fl add frame =
macro op vz;
PROC fl add frame = (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
PROC(INT,
 FLCOORD,FLCOORD,FLCOORD,FLCOORD,
 VECTOR[]CHAR)REF FLOBJECT
 fl fl add frame =   ALIEN "FL_ADD_FRAME"
   "#define FL_ADD_FRAME(type,x,y,w,h,label) \"
   "   (void *)fl_add_frame(type,x,y,w,h,A_VC_charptr(label))";
 fl fl add frame(type,x,y,w,h,VZ label)
END #fl add frame#

@ Labeled frame.

@d macro fl create labelframe =
macro op vz;
PROC fl create labelframe =
 (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
 PROC(INT,
 FLCOORD,FLCOORD,FLCOORD,FLCOORD,
 VECTOR[]CHAR)REF FLOBJECT
 fl fl create labelframe =   ALIEN "FL_CREATE_LABELFRAME"
   "#define FL_CREATE_LABELFRAME(type,x,y,w,h,label) \"
   "   (void *)fl_create_labelframe(type,x,y,w,h,A_VC_charptr(label))";
 fl fl create labelframe(type,x,y,w,h,VZ label)
END #fl create labelframe#

@d macro fl add labelframe =
macro op vz;
PROC fl add labelframe =
 (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
 PROC(INT,
 FLCOORD,FLCOORD,FLCOORD,FLCOORD,
 VECTOR[]CHAR)REF FLOBJECT
 fl fl add labelframe =   ALIEN "FL_ADD_LABELFRAME"
   "#define FL_ADD_LABELFRAME(type,x,y,w,h,label) \"
   "   (void *)fl_add_labelframe(type,x,y,w,h,A_VC_charptr(label))";
 fl fl add labelframe(type,x,y,w,h,VZ label)
END #fl add labelframe#

@2Popups.
A mode for pop-up menus. The principal problem here is the
use of !varargs! for !fl add to pup!.

Pop-up menu item attributes. NB. If there are more than 8, you will
need to change the choice and menu class where the mode is kept by a
single byte.

@m fl pup none  = 16r0
@m fl pup grey  = 16r1
@m fl pup box   = 16r2
@m fl pup check = 16r4
@m fl pup radio = 16r8

@m fl pup toggle = fl pup box
@m fl pup inactive = fl pup grey
@m pup text max = 256

@ Prototypes for popups.

@d macro fl setpup entries =
macro flpup to pup;
PROC fl setpup entries = (INT n,[]FLPUPENTRY e)INT:
BEGIN
	PROC(INT,VECTOR[]PUPENTRY)INT fl fl setpup entries =
		ALIEN "FL_SETPUP_ENTRIES"
   	"#define FL_SETPUP_ENTRIES(n,entries) \"
   	"   fl_setpup_entries(n,(void *)entries.data)";
	fl fl setpup entries(n,flpup to pup(e))
END #fl setpup entries#

@d macro fl newpup =
PROC(WINDOW)INT fl newpup = ALIEN "FL_NEWPUP"
   "#define FL_NEWPUP(win) fl_newpup(win)"

@d macro fl add to pup =
macro op vz;
PROC fl add to pup = (INT id,[]CHAR str,FLARG arg)INT:
BEGIN
   PROC(INT,VECTOR[]CHAR)INT fl fl addtopup =
	   ALIEN "FL_ADDTOPUP"
      "#define FL_ADDTOPUP(id,str,arg) \"
      "   fl_addtopup(id,A_VC_charptr(str))";
   PROC(INT,VECTOR[]CHAR,VECTOR[]CHAR)INT fl fl addtopup rowch =
	   ALIEN "FL_ADDTOPUPR"
      "#define FL_ADDTOPUPR(id,str,arg) \"
      "   fl_addtopup(id,A_VC_charptr(str),A_VC_charptr(arg))";
   PROC(INT,VECTOR[]CHAR,INT)INT fl fl addtopup int =
	   ALIEN "FL_ADDTOPUPI"
      "#define FL_ADDTOPUPI(id,str,arg) \"
      "   fl_addtopup(id,A_VC_charptr(str),arg)";
   PROC(INT,VECTOR[]CHAR,CPTR)INT fl fl addtopup rout =
	   ALIEN "FL_ADDTOPUPP"
      "#define FL_ADDTOPUPP(id,str,arg) \"
      "   fl_addtopup(id,A_VC_charptr(str),arg)";
   CASE arg
   IN
      (VOID):  fl fl addtopup(id,str), #no arg#
      (INT n): fl fl addtopup int(id,str,n),
      ([]CHAR r):	fl fl add to pup rowch(id,VZ str,VZ r),
      (FLPUPICB p):
		   fl fl add to pup rout(id,VZ str,cp OF FLPUPICBTOPDESC p)
   ESAC
END #fl add to pup#

@d macro fl setpup mode =
PROC(INT,INT,BITS)INT fl setpup mode = ALIEN "FL_SETPUP_MODE"
   "#define FL_SETPUP_MODE(nm,ni,mode) \"
   "   fl_setpup_mode(nm,ni,mode)"

@d macro fl free pup =
PROC(INT)VOID fl freepup = ALIEN "FL_FREEPUP"
   "#define FL_FREEPUP(n) fl_freepup(n)"

@d macro fl do pup =
PROC(INT)INT fl dopup = ALIEN "FL_DOPUP"
   "#define FL_DOPUP(n) fl_dopup(n)"

@d macro fl setpup default cursor =
PROC(INT)CURSOR fl setpup default cursor =
   ALIEN "FL_SETPUP_DEFAULT_CURSOR"
   "#define FL_SETPUP_DEFAULT_CURSOR(cursor) \"
   "   fl_setpup_default_cursor(cursor)"

@d macro fl setpup default color =
PROC(FLCOLOR,FLCOLOR)VOID fl setpup default color =
   ALIEN "FL_SETPUP_COLOR"
   "#define FL_SETPUP_COLOR(fg,bg) \"
   "   fl_setpup_color(fg,bg)"

@d macro fl setpup default checkcolor =
PROC(FLCOLOR)VOID fl setpup default checkcolor =
   ALIEN "FL_SETPUP_DEFAULT_CHECKCOLOR"
   "#define FL_SETPUP_DEFAULT_CHECKCOLOR(color) \"
   "   fl_setpup_default_checkcolor(color)"

@d macro fl setpup default fontsize =
PROC(INT)INT fl setpup default fontsize =
   ALIEN "FL_SETPUP_DEFAULT_FONTSIZE"
   "#define FL_SETPUP_DEFAULT_FONTSIZE(size) \"
   "   fl_setpup_default_fontsize(size)"

@d macro fl setpup default fontstyle =
PROC(INT)INT fl setpup default fontstyle =
   ALIEN "FL_SETPUP_DEFAULT_FONTSTYLE"
   "#define FL_SETPUP_DEFAULT_FONTSTYLE(style) \"
   "   fl_setpup_default_fontstyle(style)"

@d macro fl setpup default bw =
PROC(INT)INT fl setpup default bw =
   ALIEN "FL_SETPUP_DEFAULT_BW"
   "#define FL_SETPUP_DEFAULT_BW(bw) \"
   "   fl_setpup_default_bw(bw)"

@d macro fl setpup shortcut =
PROC fl setpup shortcut = (INT nw,ni,[]CHAR sc)VOID:
BEGIN
   PROC(INT,INT,VECTOR[]CHAR)VOID fl fl setpup shortcut =
      ALIEN "FL_SETPUP_SHORTCUT"
      "#define FL_SETPUP_SHORTCUT(nw,ni,sc) \"
      "   fl_setpup_shortcut(nw,ni,A_VC_charptr(sc))";
   fl fl setpup shortcut(nw,ni,VZ sc)
END #fl setpup shortcut#

@d macro fl setpup position =
PROC(INT,INT)VOID fl setpup position = ALIEN "FL_SETPUP_POSITION"
   "#define FL_SETPUP_POSITION(x,y) fl_setpup_position(x,y)"

@d macro fl setpup selection =
PROC(INT,INT)VOID fl setpup selection = ALIEN "FL_SETPUP_SELECTION"
   "#define FL_SETPUP_SELECTION(nm,ni) \"
   "   fl_setpup_selection(nm,ni)"

@d macro fl setpup shadow =
PROC(INT,INT)VOID fl setpup shadow = ALIEN "FL_SETPUP_SHADOW"
   "#define FL_SETPUP_SHADOW(n,y) fl_setpup_shadow(n,y)"

@d macro fl setpup softedge =
PROC(INT,INT)VOID fl setpup softedge = ALIEN "FL_SETPUP_SOFTEDGE"
   "#define FL_SETPUP_SOFTEDGE(n,y) fl_setpup_softedge(n,y)"

@d macro fl setpup bw =
PROC(INT,INT)VOID fl setpup bw = ALIEN "FL_SETPUP_BW"
   "#define FL_SETPUP_BW(n,bw) fl_setpup_bw(n,bw)"

@d macro fl setpup title =
macro op vz;
PROC fl set pup title = (INT nm,[]CHAR title)VOID:
BEGIN
   PROC(INT,VECTOR[]CHAR)VOID fl fl setpup title = ALIEN "FL_SETPUP_TITLE"
      "#define FL_SETPUP_TITLE(nm,title) \"
      "   fl_setpup_title(nm,A_VC_charptr(title))";
   fl fl set pup title(nm,VZ title)
END #fl set pup title#

@d macro fl setpup enter cb =
macro op fl pup iccb to pdesc;
PROC fl setpup enter cb = (INT nm,FLPUPICCB p,CPTR data)CPTR:
BEGIN
   PROC(INT,CPTR,CPTR)CPTR fl fl setpup enter cb =
      ALIEN "FL_SETPUP_ENTERCB"
      "#define FL_SETPUP_ENTERCB(nm,cb,data) \"
      "   (void *)fl_setpup_entercb(nm,(void *)cb,(void *)data)";
   fl fl setpup enter cb(nm,cp OF FLPUPICCBTOPDESC p,data)
END #fl setpup enter cb#

@d macro fl setpup leavecb =
macro fl pup ic cb to pdesc;
PROC fl setpup leavecb = (INT nm,FLPUPICCB p,CPTR data)CPTR:
BEGIN
   PROC(INT,CPTR,CPTR)CPTR fl fl setpup leavecb =
      ALIEN "FL_SETPUP_LEAVECB"
      "#define FL_SETPUP_LEAVECB(nm,cb,data) \"
      "   (void *)fl_setpup_leavecb(nm,(void *)cb,(void *)data)";
   fl fl setpup leavecb(nm,cp OF FLPUPICCBTOPDESC p,data)
END #fl setpup leavecb#

@d macro fl setpup pad =
PROC(INT,INT,INT)VOID fl setpup pad = ALIEN "FL_SETPUP_PAD"
   "#define FL_SETPUP_PAD(n,padw,padh) fl_setpup_pad(n,padw,padh)"

@d macro fl setpup cursor =
PROC(INT,INT)CURSOR fl setpup cursor = ALIEN "FL_SETPUP_CURSOR"
   "#define FL_SETPUP_CURSOR(nm,cursor) fl_setpup_cursor(nm,cursor)"

@d macro fl setpup maxpup =
PROC(INT)INT fl setpup maxpup = ALIEN "FL_SETPUP_MAXPUP"
   "#define FL_SETPUP_MAXPUP(n) fl_setpup_maxpup(n)"

@d macro fl get pup mode =
PROC(INT,INT)BITS fl get pup mode = ALIEN "FL_GETPUP_MODE"
   "#define FL_GETPUP_MODE(nm,ni) fl_getpup_mode(nm,ni)"

@d macro fl get pup text =
PROC fl get pup text = (INT nm,ni)[]CHAR:
BEGIN
   PROC(INT,INT)CPTR fl fl get pup text = ALIEN "FL_GETPUP_TEXT"
      "#define FL_GETPUP_TEXT(nm,ni) (void *)fl_getpup_text(nm,ni)";
   CPTRTORVC fl fl get pup text(nm,ni)
END #fl get put text#

@d macro fl showpup =
PROC(INT)VOID fl showpup = ALIEN "FL_SHOWPUP"
   "#define FL_SHOWPUP(n) fl_showpup(n)"

@d macro fl hidepup =
PROC(INT)VOID fl hidepup = ALIEN "FL_HIDEPUP"
   "#define FL_HIDEPUP(n) fl_hidepup(n)"

@d macro fl getpup items =
PROC(INT)INT fl getpup items = ALIEN "FL_GETPUP_ITEMS"
   "#define FL_GETPUP_ITEMS(n) fl_getpup_items(n)"

@d macro fl current pup =
PROC fl current pup = INT: INT CODE "RESULT=fl_current_pup();"

@d macro fl setpup itemcb =
PROC(INT,INT,FLPUPICB)CPTR fl setpup itemcb =
   ALIEN "FL_SETPUP_ITEMCB"
   "#define FL_SETPUP_ITEMCB(nm,ni,cb) \"
	"     fl_setpup_itemcb(nm,ni,(void *)cb)"

@d macro fl setpup menucb =
PROC(INT,FLPUPICB)CPTR fl setpup menucb =
   ALIEN "FL_SETPUP_MENUCB"
   "#define FL_SETPUP_MENUCB(nm,cb) \"
	"     fl_setpup_menucb(nm,(void *)cb)"

@d macro fl setpup submenu =
PROC(INT,INT,INT)VOID fl setpup submenu = ALIEN "FL_SETPUP_SUBMENU"
   "#define FL_SETPUP_SUBMENU(m,i,subm) fl_setpup_submenu(m,i,subm)"

@2Tab folders.

@m fl top tabfolder = 0      # tab on top #
@m fl bottom tabfolder = 1
@m fl left tabfolder = 2
@m fl right tabfolder = 3
@m fl normal tabfolder = fl top tabfolder

@m fl no = 0
@m fl fit = 1
@m fl enlarge only = 2

@d macro fl create tab folder =
macro op vz;
PROC fl create tab folder =
   (INT type,FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(@{INT,
        FLCOORD,FLCOORD,FLCOORD,FLCOORD,
        VECTOR[]CHAR)REF FLOBJECT@}
      fl fl create tabfolder = ALIEN "FL_CREATE_TABFOLDER"
      "#define FL_CREATE_TABFOLDER(type,x,y,w,h,label) \"
      "   (void *)fl_create_tabfolder(type,x,y,w,h,A_VC_charptr(label))";
   fl fl create tab folder(type,x,y,w,h,VZ label)
END #fl create tab folder#

@d macro fl add tab folder =
macro op vz;
PROC fl add tab folder = (INT type, FLCOORD x,y,w,h,[]CHAR label)REF FLOBJECT:
BEGIN
   PROC(@{INT,
        FLCOORD,FLCOORD,FLCOORD,FLCOORD,
        VECTOR[]CHAR)REF FLOBJECT@}
      fl fl add tabfolder = ALIEN "FL_ADD_TABFOLDER"
      "#define FL_ADD_TABFOLDER(type,x,y,w,h,label) \"
      "   (void *)fl_add_tabfolder(type,x,y,w,h,A_VC_charptr(label))";
   fl fl add tab folder(type,x,y,w,h,VZ label)
END #fl add tab folder#

@d macro fl addto tabfolder =
macro op vz;
PROC fl addto tabfolder =
   (REF FLOBJECT ob,[]CHAR title,REF FLFORM form)REF FLOBJECT:
BEGIN
   PROC(REF FLOBJECT,VECTOR[]CHAR,REF FLFORM)REF FLOBJECT
      fl fl addto tabfolder = ALIEN "FL_ADDTO_TABFOLDER"
      "#define FL_ADDTO_TABFOLDER(ob,title,form) \"
      "   (void *)fl_addto_tabfolder((void *)ob,A_VC_charptr(title),(void *)form)";
   fl fl addto tabfolder(ob,VZ title,form)
END #fl addto tabfolder#

@d macro fl get tabfolder folder bynumber =
PROC(REF FLOBJECT,INT)REF FLFORM fl get tabfolder folder bynumber =
   ALIEN "FL_GET_TABFOLDER_FOLDER_BYNUMBER"
   "#define FL_GET_TABFOLDER_FOLDER_BYNUMBER(ob,num) \"
   "   (void *)fl_get_tabfolder_folder_bynumber((void *)ob,num)"

@d macro fl get tabfolder folder byname =
macro op vz;
PROC fl get tabfolder folder byname =
   (REF FLOBJECT ob,[]CHAR name)REF FLFORM:
BEGIN
   PROC(REF FLOBJECT,VECTOR[]CHAR)REF FLFORM
      fl fl get tabfolder folder byname =
      ALIEN "FL_GET_TABFOLDER_FOLDER_BYNAME"
      "#define FL_GET_TABFOLDER_FOLDER_BYNAME(ob,name) \"
      "   (void *)fl_get_tabfolder_folder_byname((void *)ob,A_VC_charptr(name))";
   fl fl get tabfolder folder byname(ob,VZ name)
END #fl get tabfolder folder byname#

@d macro fl delete folder =
PROC(REF FLOBJECT,REF FLFORM)VOID fl delete folder =
   ALIEN "FL_DELETE_FOLDER"
   "#define FL_DELETE_FOLDER(ob,form) \"
   "   fl_delete_folder((void *)ob,(void *)form)"

@d macro fl delete folder bynumber =
PROC(REF FLOBJECT,INT)VOID fl delete folder bynumber =
   ALIEN "FL_DELETE_FOLDER_BYNUMBER"
   "#define FL_DELETE_FOLDER_BYNUMBER(ob,num) \"
   "   fl_delete_folder_bynumber((void *)ob,num)"

@d macro fl delete folder byname =
macro op vz;
PROC fl delete folder byname = (REF FLOBJECT ob,[]CHAR name)VOID:
BEGIN
   PROC(REF FLOBJECT,VECTOR[]CHAR)VOID fl fl delete folder byname =
      ALIEN "FL_DELETE_FOLDER_BYNAME"
      "#define FL_DELETE_FOLDER_BYNAME(ob,name) \"
      "   fl_delete_folder_byname((void *)ob,A_VC_charptr(name))";
   fl fl delete folder byname(ob,VZ name)
END #fl delete folder byname#

@d macro fl set folder =
PROC(REF FLOBJECT,REF FLFORM)VOID fl set folder =
   ALIEN "FL_SET_FOLDER"
   "#define FL_SET_FOLDER(ob,form) \"
   "   fl_set_folder((void *)ob,(void *)form)"

@d macro fl set folder byname =
macro op vz;
PROC fl set folder byname = (REF FLOBJECT ob,[]CHAR name)VOID:
BEGIN
   PROC(REF FLOBJECT,VECTOR[]CHAR)VOID fl fl set folder byname =
      ALIEN "FL_SET_FOLDER_BYNAME"
      "#define FL_SET_FOLDER_BYNAME(ob,name) \"
      "   fl_set_folder_byname((void *)ob,A_VC_charptr(name))";
   fl fl set folder byname(ob,VZ name)
END #fl set folder byname#

@d macro fl set folder bynumber =
PROC(REF FLOBJECT,INT)VOID fl set folder bynumber =
   ALIEN "FL_SET_FOLDER_BYNUMBER"
   "#define FL_SET_FOLDER_BYNUMBER(ob,num) \"
   "   fl_set_folder_bynumber((void *)ob,num)"

@d macro fl get folder =
PROC(REF FLOBJECT)REF FLFORM fl get folder =
   ALIEN "FL_GET_FOLDER"
   "#define FL_GET_FOLDER(ob) (void *)fl_get_folder((void *)ob)"

@d macro fl get folder number =
PROC(REF FLOBJECT)INT fl get folder number =
   ALIEN "FL_GET_FOLDER_NUMBER"
   "#define FL_GET_FOLDER_NUMBER(ob) \"
   "   fl_get_folder_number((void *)ob)"

@d macro fl get folder name =
PROC(REF FLOBJECT)CSTR fl get folder name =
   ALIEN "FL_GET_FOLDER_NAME"
   "#define FL_GET_FOLDER_NAME(ob) \"
   "   (char *)fl_get_folder_name((void *)ob)"

@d macro fl get tabfolder numfolders =
PROC(REF FLOBJECT)INT fl get tabfolder numfolders =
   ALIEN "FL_GET_TABFOLDER_NUMFOLDERS"
   "#define FL_GET_TABFOLDER_NUMFOLDERS(ob) \"
   "   fl_get_tabfolder_numfolders((void *)ob)"

@d macro fl get active folder =
PROC(REF FLOBJECT)REF FLFORM fl get active folder =
   ALIEN "FL_GET_ACTIVE_FOLDER"
   "#define FL_GET_ACTIVE_FOLDER(ob) \"
   "   (void *)fl_get_active_folder((void *)ob)"

@d macro fl get active folder number =
PROC(REF FLOBJECT)INT fl get active folder number =
   ALIEN "FL_GET_ACTIVE_FOLDER_NUMBER"
   "#define FL_GET_ACTIVE_FOLDER_NUMBER(ob) \"
   "   fl_get_active_folder_number((void *)ob)"

@d macro fl get active folder name =
PROC fl get active folder name = (REF FLOBJECT ob)[]CHAR:
BEGIN
   PROC(REF FLOBJECT)CPTR fl fl get active folder name =
      ALIEN "FL_GET_ACTIVE_FOLDER_NAME"
      "#define FL_GET_ACTIVE_FOLDER_NAME(ob) \"
      "   (void *)fl_get_active_folder_name((void *)ob)";
   CPTRTORVC fl fl get active folder name(ob)
END #fl get active folder name#

@d macro fl get folder area =
PROC(REF FLOBJECT,REF FLCOORD,REF FLCOORD,FLCOORD,FLCOORD)VOID
   fl get folder area = ALIEN "FL_GET_FOLDER_AREA"
   "#define FL_GET_FOLDER_AREA(ob,x,y,w,h) \"
   "   fl_get_folder_area((void *)ob,(int *)x,(int *)y,(int *)w,(int *)h)"

@d macro fl replace folder bynumber =
PROC(REF FLOBJECT,INT,REF FLFORM)VOID fl replace folder bynumber =
   ALIEN "FL_REPLACE_FOLDER_BYNUMBER"
   "#define FL_REPLACE_FOLDER_BYNUMBER(ob,num,form) \"
   "   fl_replace_folder_bynumber((void *)ob, num,(void *)form)"

@d macro fl set tabfolder autofit =
PROC(REF FLOBJECT,INT)INT fl set tabfolder autofit =
   ALIEN "FL_SET_TABFOLDER_AUTOFIT"
   "#define FL_SET_TABFOLDER_AUTOFIT(ob,y) \"
   "   fl_set_tabfolder_autofit((void *)ob,y)"

@d macro fl set default tabfolder corner =
PROC(INT)INT fl set default tabfolder corner =
   ALIEN "FL_SET_DEFAULT_TABFOLDER_CORNER"
   "#define FL_SET_DEFAULT_TABFOLDER_CORNER(n) \"
   "   fl_set_default_tabfolder_corner(n)"   # affects all #

@d macro fl get tabfolder offset =
PROC(REF FLOBJECT)INT fl get tabfolder offset =
   ALIEN "FL_GET_TABFOLDER_OFFSET"
   "#define FL_GET_TABFOLDER_OFFSET(ob) \"
   "   fl_get_tabfolder_offset((void *)ob)"

@d macro fl set tabfolder offset =
PROC(REF FLOBJECT,INT)INT fl set tabfolder offset =
   ALIEN "FL_SET_TABFOLDER_OFFSET"
   "#define FL_SET_TABFOLDER_OFFSET(ob,offset) \"
   "   fl_set_tabfolder_offset((void *)ob,offset)"

@ End of forms.w.
