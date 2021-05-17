@2 Algol 68 version of the X.h header file.
$Log: x.w,v $
Revision 1.5  2005/02/18 18:27:36  sian
Re-adding

Revision 1.3  2004/11/30 22:27:56  sian
Moved mode declarations to Include...

Revision 1.2  2004/11/30 21:52:32  sian
Test program for the libpq.w prelude

Revision 1.1  2003/05/07 21:13:12  sian
New format for this basic X include file

Revision 1.1.1.1  2001/05/07 10:25:18  sian
Import of sources

@m x protocol           = 11               # current protocol version #
@m x protocol revision  = 0                # current minor version #

@3Modes.
These modes are integral to the X Window System. They should all be
declared in any including Web68 file.

@<X m...@>=
MODE
   BYTE	 = SHORT SHORT BITS,
   INT8	 = SHORT SHORT INT,
   INT16 = SHORT INT,
   INT32 = INT,
   CARD8 = SHORT SHORT BITS, #interpreted as an 8-bit unsigned integer#
   CARD16= SHORT BITS,       #interpreted as a 16-bit unsigned integer#
   CARD32= BITS;             #interpreted as a 32-bit unsigned integer#

MODE
   XID	= CARD32,
   MASK	= CARD32,
   ATOM	= CARD32,
   VISUALID = CARD32,
   TIME	= CARD32;

MODE
   WINDOW   = XID,
   DRAWABLE = XID,
   FONT	    = XID,
   PIXMAP   = XID,
   CURSOR   = XID,
   COLORMAP = XID,
   GCONTEXT = XID,
   KEYSYM   = XID,

   KEYCODE  = CARD8;

@3Reserved resource and constant definitions.

@m none = 0 # universal null resource or null atom #
@m parent relative = 1 	CO background pixmap in CreateWindow
									and ChangeWindowAttributes CO
@m copy from parent = 0

@ Border pixmap in CreateWindow and ChangeWindowAttributes special
VisualID and special window class passed to CreateWindow.

@m pointer window = 0   # destination window in SendEvent #
@m input focus = 1      # destination window in SendEvent #
@m pointer root = 1     # focus window in SetInputFocus #
@m any property type = 0# special Atom, passed to GetProperty #
@m any key = 0		# special Key Code, passed to GrabKey #
@m any button = 0	# special Button Code, passed to GrabButton #
@m all temporary = 0    # special Resource ID passed to KillClient #
@m current time = 0     # special Time #
@m no symbol = 0	# special KeySym #

@ Event definitions.
Input Event Masks. Used as event-mask window attribute and as
arguments to Grab requests.  Not to be confused with event names.

@m noevent mask = 2r0
@m key press mask = (2r1 SHL 0)
@m key release mask = (2r1 SHL 1)
@m button press mask = (2r1 SHL 2)
@m button release mask = (2r1 SHL 3)
@m enter window mask = (2r1 SHL 4)
@m leave window mask = (2r1 SHL 5)
@m pointer motion mask = (2r1 SHL 6)
@m pointer motion hint mask = (2r1 SHL 7)
@m button1 motion mask = (2r1 SHL 8)
@m button2 motion mask = (2r1 SHL 9)
@m button3 motion mask = (2r1 SHL 10)
@m button4 motion mask = (2r1 SHL 11)
@m button5 motion mask = (2r1 SHL 12)
@m button motion mask = (2r1 SHL 13)
@m keymap state mask = (2r1 SHL 14)
@m exposure mask = (2r1 SHL 15)
@m visibility change mask = (2r1 SHL 16)
@m structure notify mask = (2r1 SHL 17)
@m resize redirect mask = (2r1 SHL 18)
@m substructure notify mask = (2r1 SHL 19)
@m substructure redirect mask = (2r1 SHL 20)
@m focus change mask = (2r1 SHL 21)
@m property change mask = (2r1 SHL 22)
@m colormap change mask = (2r1 SHL 23)
@m owner grab button mask = (2r1 SHL 24)

@ Event names.
Used in the \.{type} field in !XEVENT! structures.  Not to be
confused with event masks above.  They start from 2 because 0 and 1
are reserved in the protocol for errors and replies.

@m keypress = 2
@m keyrelease = 3
@m buttonpress = 4
@m buttonrelease = 5
@m motionnotify = 6
@m enternotify = 7
@m leavenotify = 8
@m focusin = 9
@m focusout = 10
@m keymapnotify = 11
@m expose = 12
@m graphicsexpose = 13
@m noexpose = 14
@m visibilitynotify = 15
@m createnotify = 16
@m destroynotify = 17
@m unmapnotify = 18
@m mapnotify = 19
@m maprequest = 20
@m reparentnotify = 21
@m configurenotify = 22
@m configurerequest = 23
@m gravitynotify = 24
@m resizerequest = 25
@m circulatenotify = 26
@m circulaterequest = 27
@m propertynotify = 28
@m selectionclear = 29
@m selectionrequest = 30
@m selectionnotify = 31
@m colormapnotify = 32
@m clientmessage = 33
@m mappingnotify = 34
@m lastevent = 35    # must be bigger than any event #

@ Key masks.
Used as modifiers to GrabButton and GrabKey, results of QueryPointer,
state in various key-, mouse-, and button-related events.

@m shift mask = (2r1 SHL 0)
@m lock mask = (2r1 SHL 1)
@m control mask = (2r1 SHL 2)
@m mod1 mask = (2r1 SHL 3)
@m mod2 mask = (2r1 SHL 4)
@m mod3 mask = (2r1 SHL 5)
@m mod4 mask = (2r1 SHL 6)
@m mod5 mask = (2r1 SHL 7)

@ Modifier names.
Used to build a \.{SetModifierMapping} request or to read a
\.{GetModifierMapping} request.  These correspond to the masks defined
above.
   
@m shift map index = 0
@m lock map index = 1
@m control map index = 2
@m mod1 map index = 3
@m mod2 map index = 4
@m mod3 map index = 5
@m mod4 map index = 6
@m mod5 map index = 7

@ Button masks.
Used in the same manner as the Key masks above.  Not to be confused
with button names below.

@m button1 mask = (2r1 SHL 8)
@m button2 mask = (2r1 SHL 9)
@m button3 mask = (2r1 SHL 10)
@m button4 mask = (2r1 SHL 11)
@m button5 mask = (2r1 SHL 12)

@m any modifier = (2r1 SHL 15)  # used in GrabButton and GrabKey #

@ Button names.
Used as arguments to \.{GrabButton} and as detail in \.{ButtonPress}
and \.{ButtonRelease} events.  Not to be confused with button masks
above.  Note that 0 is already defined above as !anybutton!.

@m button1 = 1
@m button2 = 2
@m button3 = 3
@m button4 = 4
@m button5 = 5

@ Notify modes.

@m notify normal = 0
@m notify grab = 1
@m notify ungrab = 2
@m notify while grabbed = 3

@m notify hint = 1 # for MotionNotify events #

@ Notify detail.

@m notify ancestor = 0
@m notify virtual = 1
@m notify inferior = 2
@m notify nonlinear = 3
@m notify nonlinear virtual = 4
@m notify pointer = 5
@m notify pointer root = 6
@m notify detail none = 7

@ Visibility notify.

@m visibility unobscured = 0
@m visibility partially obscured = 1
@m visibility fully obscured = 2

@ Circulation request.

@m place on top = 0
@m place on bottom = 1

@ Protocol families.

@m family internet = 0
@m family decnet = 1
@m family chaos = 2

@ Property notification.

@m property new value = 0
@m property delete = 1

@ Color Map notification.

@m colormap uninstalled = 0
@m colormap installed = 1

@ GrabPointer, GrabButton, GrabKeyboard, GrabKey Modes.

@m grab mode sync = 0
@m grab mode async = 1

@ GrabPointer, GrabKeyboard reply status.

@m grab success = 0
@m already grabbed = 1
@m grab invalid time = 2
@m grab not viewable = 3
@m grab frozen = 4

@ AllowEvents modes.

@m async pointer = 0
@m sync pointer = 1
@m replay pointer = 2
@m async keyboard = 3
@m sync keyboard = 4
@m replay keyboard = 5
@m async both = 6
@m sync both = 7

@ Used in SetInputFocus, GetInputFocus.

@m revert to none = none
@m revert to pointer root = pointer root
@m revert to parent = 2

@3Error codes.

@m success = 0          # everything's okay #
@m bad request = 1      # bad request code #
@m bad value = 2        # int parameter out of range #
@m bad window = 3       # parameter not a Window #
@m bad pixmap = 4       # parameter not a Pixmap #
@m bad atom = 5         # parameter not an Atom #
@m bad cursor = 6       # parameter not a Cursor #
@m bad font = 7         # parameter not a Font #
@m bad match = 8        # parameter mismatch #
@m bad drawable = 9     # parameter not a Pixmap or Window #
@m bad access = 10

@ The following error codes depend on the context:-
\begin{itemize}
\item key/button already grabbed
\item attempt to free an illegal cmap entry
\item attempt to store into a read-only colour map entry.
\item attempt to modify the access control list from other than the local host.
\end{itemize}

@m bad alloc = 11        # insufficient resources #
@m bad color = 12       # no such colourmap #
@m bad gc = 13           # parameter not a GC #
@m bad id choice = 14    # choice not in range or already used #
@m bad name = 15         # font or colour name doesn't exist #
@m bad length = 16       # Request length incorrect #
@m bad implementation = 17  # server is defective #

@m first extension error = 128
@m last extension error = 255

@3Window definitions.
Window classes used by !createwindow!. Note that !copyfromparent! is
already defined as 0 above.

@m input output = 1
@m input only = 2

@ Window attributes for !createwindow! and !changewindowattributes!.

@m cw back pixmap = (2r1 SHL 0)
@m cw back pixel = (2r1 SHL 1)
@m cw border pixmap = (2r1 SHL 2)
@m cw border pixel = (2r1 SHL 3)
@m cw bit gravity = (2r1 SHL 4)
@m cw win gravity = (2r1 SHL 5)
@m cw backing store = (2r1 SHL 6)
@m cw backing planes = (2r1 SHL 7)
@m cw backing pixel = (2r1 SHL 8)
@m cw override redirect = (2r1 SHL 9)
@m cw save under = (2r1 SHL 10)
@m cw event mask = (2r1 SHL 11)
@m cw dont propagate = (2r1 SHL 12)
@m cw colormap = (2r1 SHL 13)
@m cw cursor = (2r1 SHL 14)

@ !configurewindow! structure.

@m cw x = (2r1 SHL 0)
@m cw y = (2r1 SHL 1)
@m cw width = (2r1 SHL 2)
@m cw height = (2r1 SHL 3)
@m cw borderwidth = (2r1 SHL 4)
@m cw sibling = (2r1 SHL 5)
@m cw stackmode = (2r1 SHL 6)

@ Bit gravity.

@m forget gravity = 0
@m north west gravity = 1
@m north gravity = 2
@m north east gravity = 3
@m west gravity = 4
@m center gravity = 5
@m east gravity = 6
@m south west gravity = 7
@m south gravity = 8
@m south east gravity = 9
@m static gravity = 10

@ Window gravity $+$ bit gravity above.

@m unmap gravity = 0

@ Used in !create window! for the backing-store hint.

@m not useful = 0
@m when mapped = 1
@m always = 2

@ Used in the !get window attributes! reply.

@m is unmapped = 0
@m is unviewable = 1
@m is viewable = 2

@ Used in !change save set!.

@m set mode insert = 0
@m set mode delete = 1

@ Used in !change close down mode!.

@m destroy all = 0
@m retain permanent = 1
@m retain temporary = 2

@ Window stacking method in !configure window!.

@m stk above = 0
@m stk below = 1
@m stk top if = 2
@m stk bottom if = 3
@m stk opposite = 4

@ Circulation direction.

@m raise lowest = 0
@m lower highest = 1

@ Property modes.

@m prop mode replace = 0
@m prop mode prepend = 1
@m prop mode append = 2

@3Graphics definitions.
Graphics functions, as in !gc alu!.

@m gx clear = 0  # 0 #
@m gx and = 1  # src AND dst #
@m gx and reverse = 2  # src AND NOT dst #
@m gx copy = 3  # src #
@m gx and inverted = 4  # NOT src AND dst #
@m gx noop = 5  # dst #
@m gx xor = 6  # src XOR dst #
@m gx or = 7  # src OR dst #
@m gx nor = 8  # NOT src AND NOT dst #
@m gx equiv = 9  # NOT src XOR dst #
@m gx invert = 10 # NOT dst #
@m gx or reverse = 11 # src OR NOT dst #
@m gx copy inverted = 12 # NOT src #
@m gx or inverted = 13 # NOT src OR dst #
@m gx nand = 14 # NOT src OR NOT dst #
@m gx set = 15 # 1 #

@ !line style!.

@m line solid = 0
@m line on off dash = 1
@m line double dash = 2

@ !cap style!.

@m cap not last = 0
@m cap butt = 1
@m cap round = 2
@m cap projecting = 3

@ !join style!.

@m join miter = 0
@m join round = 1
@m join bevel = 2

@ !fill style!.

@m fill solid = 0
@m fill tiled = 1
@m fill stippled = 2
@m fill opaque stippled = 3

@ !fill rule!.

@m even odd rule = 0
@m winding rule = 1

@ Subwindow mode.

@m clip by children = 0
@m include inferiors = 1

@ !set clip rectangles! ordering.

@m unsorted = 0
@m y sorted = 1
@m yx sorted = 2
@m yx banded = 3

@ CoordinateMode for drawing routines.

@m coord mode origin = 0        # relative to the origin #
@m coord mode previous = 1      # relative to previous point #

@ Polygon shapes.

@m complex = 0       # paths may intersect #
@m nonconvex = 1     # no paths intersect, but not convex #
@m convex = 2        # wholly convex #

@ Arc modes for !polyfillarc!.

@m arc chord = 0     # join endpoints of arc #
@m arc pie slice = 1 # join endpoints to center of arc #

@3GC components.
Masks used in !create gc!, !copy gc!, !change gc!, OR'ed into
!state changes OF gc!.

@m gc function = (2r1 SHL 0)
@m gc plane mask = (2r1 SHL 1)
@m gc foreground = (2r1 SHL 2)
@m gc background = (2r1 SHL 3)
@m gc line width = (2r1 SHL 4)
@m gc line style = (2r1 SHL 5)
@m gc cap style = (2r1 SHL 6)
@m gc join style = (2r1 SHL 7)
@m gc fill style = (2r1 SHL 8)
@m gc fill rule = (2r1 SHL 9)
@m gc tile = (2r1 SHL 10)
@m gc stipple = (2r1 SHL 11)
@m gc tile stip xorigin = (2r1 SHL 12)
@m gc tile stip yorigin = (2r1 SHL 13)
@m gc font = (2r1 SHL 14)
@m gc subwindow mode = (2r1 SHL 15)
@m gc graphics exposures = (2r1 SHL 16)
@m gc clip xorigin = (2r1 SHL 17)
@m gc clip yorigin = (2r1 SHL 18)
@m gc clip mask = (2r1 SHL 19)
@m gc dash offset = (2r1 SHL 20)
@m gc dash list = (2r1 SHL 21)
@m gc arc mode = (2r1 SHL 22)

@m gc lastbit = 22

@3Fonts.
Used in !query font!---draw direction.

@m font left to right = 0
@m font right tol eft = 1

@m font change = 255

@3Imaging.
ImageFormat---!put image!, !get image!.

@m xy bitmap = 0        # depth 1, XYFormat #
@m xy pixmap = 1        # depth == drawable depth #
@m z pixmap = 2         # depth == drawable depth #

@3Colour map stuff.
For !create colourmap!.

@m alloc none = 0       # create map with no entries #
@m alloc all = 1        # allocate entire map writeable #

@ Flags used in !store named colour!, !store colours!.

@m do red = (2r1 SHL 0)
@m do green= (2r1 SHL 1)
@m do blue = (2r1 SHL 2)

@3Cursor stuff.
!query best size! class.

@m cursor shape = 0      # largest size that can be displayed #
@m tile shape = 1        # size tiled fastest #
@m stipple shape = 2     # size stippled fastest #

@3Keyboard/pointer stuff.

@m auto repeat mode off = 0
@m auto repeat mode on = 1
@m auto repeat mode default = 2

@m led mode off = 0
@m led mode on = 1

@ Masks for !change keyboard control!.

@m kb key click percent = (2r1 SHL 0)
@m kb bell percent = (2r1 SHL 1)
@m kb bell pitch = (2r1 SHL 2)
@m kb bell duration = (2r1 SHL 3)
@m kb led = (2r1 SHL 4)
@m kb led mode = (2r1 SHL 5)
@m kb key = (2r1 SHL 6)
@m kb auto repeat mode = (2r1 SHL 7)

@m mapping success = 0
@m mapping busy = 1
@m mapping failed = 2

@m mapping modifier = 0
@m mapping keyboard = 1
@m mapping pointer = 2

@3Screen saver stuff.

@m dont prefer blanking = 0
@m prefer blanking = 1
@m default blanking = 2

@m disable screen saver = 0
@m disable screen interval = 0

@m dont allow exposures = 0
@m allow exposures = 1
@m default exposures = 2

@ For !ForceScreenSaver!

@m screen saver reset = 0
@m screen saver active = 1

@3Hosts and connections.
For !ChangeHosts!

@m host insert = 0
@m host delete = 1

@ For !ChangeAccessControl!.

@m enable access = 1
@m disable access = 0

@ Display classes used in opening the connection.  Note that the
statically allocated ones are even numbered and the dynamically
changeable ones are odd numbered.

@m static gray = 0
@m gray scale = 1
@m static color = 2
@m pseudo color = 3
@m true color = 4
@m direct color = 5

@ Byte order used in !image byte order! and !bitmap bit order!.

@m lsb first = 0
@m msb first = 1
