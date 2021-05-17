@2Global structure.
This file was generated by \.{fdtow68} on Sun Nov 20 11:27:03 2005
from file fds.fd. It should be included into .{fds.w68}.

Each of the following sections contains declarations for all the forms.

@ Modes.
Each form has its own mode so that all the objects on the
form can be accessed easily.

@ This is the mode declaration for form !fds!.

@<Modes...@>=
MODE FDFDS = STRUCT(
   REF FLFORM fds,
   BOOL flag,
	STRING cur dir, yield,
	REF REGEX cur rx,
	REF ALPHA subdirs tree, files tree,
   REF FLOBJECT cancel,
   REF FLOBJECT dir inp,
   REF FLOBJECT dir list,
   REF FLOBJECT files,
   REF FLOBJECT filter inp,
   REF FLOBJECT filters,
   REF FLOBJECT rescan dir,
   REF FLOBJECT select,
   REF FLOBJECT subdirs,
   REF FLOBJECT updirs);

@ This procedure creates form !fds!.

@<Main...@>=
PROC create form fds = REF FDFDS:
BEGIN
   REF FLOBJECT obj;
   REF FDFDS fdui:=HEAP FDFDS;
   OP(REF FDFDS)CBPTR TOCBPTR = BIOP 99;
   INT old bw=fl get border width;

   fl set border width(-2);
   fds OF fdui:=fl start form(fl no box,400,360);
   obj:=fl add box(fl up box,0,0,400,360,"");
      fl set object color(obj,fl col1,fl col1);
   updirs OF fdui:=obj:=fl add browser(fl select browser,10,55,105,70,"");
      fl set object lsize(obj,fl normal size);
      fl set object callback(obj,updirs cb,0);
      fl set browser hscrollbar(obj,fl off);
   subdirs OF fdui:=obj:=fl add browser(fl select browser,10,130,105,170,"");
      fl set object callback(obj,subdirs cb,0);
      fl set browser hscrollbar(obj,fl off);
   files OF fdui:=obj:=fl add browser(fl select browser,120,130,270,170,"");
      fl set object callback(obj,files cb,0);
   rescan dir OF fdui:=obj:=fl add button(fl normal button,120,55,170,30,"Rescan_Directories");
      fl set object boxtype(obj,fl frame box);
      fl set object color(obj,fl wheat,fl col1);
      fl set object lsize(obj,fl normal size);
      fl set object callback(obj,rescan dir cb,0);
   dir list OF fdui:=obj:=fl add menu(fl pulldown menu,295,55,95,30,"Directories");
      fl set object boxtype(obj,fl embossed box);
      fl set object color(obj,fl wheat,fl mcol);
      fl set object lstyle(obj,fl normal style);
      fl set object lsize(obj,fl normal size);
      fl set object callback(obj,dir list cb,0);
   filters OF fdui:=obj:=fl add menu(fl pulldown menu,120,92,60,32,"Filters:");
      fl set object boxtype(obj,fl embossed box);
      fl set object color(obj,fl wheat,fl mcol);
      fl set object lstyle(obj,fl normal style);
      fl set object lsize(obj,fl normal size);
      fl set object callback(obj,filters cb,0);
   filter inp OF fdui:=obj:=fl add input(fl normal input,184,92,206,32,"");
      fl set object color(obj,fl wheat,fl mcol);
      fl set object lsize(obj,fl normal size);
      fl set object callback(obj,filter inp cb,0);
   dir inp OF fdui:=obj:=fl add input(fl normal input,10,10,380,35,"");
      fl set object lstyle(obj,fl bold style);
      fl set object callback(obj,dir inp cb,0);
   select OF fdui:=obj:=fl add button(fl normal button,81,315,85,30,"Select");
      fl set object lstyle(obj,fl bold style);
      fl set object lsize(obj,fl normal size);
   cancel OF fdui:=obj:=fl add button(fl normal button,240,315,75,30,"Cancel");
      fl set object lstyle(obj,fl bold style);
      fl set object lsize(obj,fl normal size);
   fl finish form;
   fl adjust form size(fds OF fdui);
   fdui OF fds OF fdui:=TOCBPTR fdui;
   fl set border width(old bw);
   fdui
END; #create form fds#

@2Macro calls.
Here are all the Xforms macro calls in alphabetical order.

@<Include...@>=
macro fl add box;
macro fl add browser;
macro fl add button;
macro fl add input;
macro fl add menu;
macro fl adjust form size;
macro fl finish form;
macro fl get border width;
macro fl set border width;
macro fl set browser hscrollbar;
macro fl set object boxtype;
macro fl set object callback;
macro fl set object color;
macro fl set object lsize;
macro fl set object lstyle;
macro fl start form;

@2Callback procedures.
All the callback procedures are declared as names.

@<Names...@>=
PROC(REF FLOBJECT,INT)VOID
   dir inp cb,
   dir list cb,
   files cb,
   filter inp cb,
   filters cb,
   rescan dir cb,
   subdirs cb,
   updirs cb;
