@2Xresource.h reformatted as a Web 68 include file.

@ X Resource Manager Intrinsics.
Memory Management

@m macro xpermalloc =
PROC(INT)CSTR x permalloc = ALIEN "XPERMALLOC"
	"#define XPERMALLOC(size) Xpermalloc(size)"

@ Quark Management

@m macro mode xrmquark = MODE XRMQUARK = INT
@m macro mode xrmquarklist = MODE XRMQUARKLIST = REF STRUCT 16000 XRMQUARK
@m macro nullquark = XRMQUARK nullquark = 0
@m macro mode xrmstring = MODE XRMSTRING = CSTR
@m null string = NIL

@ Find quark for string, create new quark if none already exists.

@d macro xrm string to quark =
macro mode xrmquark;
PROC xrm string to quark = ([]CHAR str)XRMQUARK:
(
	PROC(VECTOR[]CHAR)XRMQUARK sys xrm string to quark =
		ALIEN "XRMSTRINGTOQUARK"
		"#define XRMSTRINGTOQUARK(str) XrmStringToQuark(A_VC_charptr(str))";
	sys xrm string to quark(Z MAKERVC str)
)

@d macro xrm perm string to quark =
macro mode xrmquark;
PROC xrm perm string to quark = ([]CHAR str)XRMQUARK:
(
	PROC(VECTOR[]CHAR)XRMQUARK sys xrm perm string to quark =
		ALIEN "XRMPERMSTRINGTOQUARK"
		"#define XRMPERMSTRINGTOQUARK(str) XrmPermStringToQuark(A_VC_charptr(str))";
	sys xrm perm string to quark(Z MAKERVC str)
)

@ Find string for quark.

@d macro xrm quark to string =
macro mode xrmquark;
PROC xrm quark to string = (XRMQUARK quark)[]CHAR:
(
	PROC(XRMQUARK)CPTR sys xrm quark to string =
		ALIEN "XRMQUARKTOSTRING"
		"#define XRMQUARKTOSTRING(quark) (void *)XrmQuarkToString(quark)";
	CPTRTORVC sys xrm quark to string(quark)
)

@d macro xrm unique quark =
macro mode xrmquark;
PROC XRMQUARK = XRMQUARK CODE "RESULT=XrmUniqueQuark();"

@m xrm strings equal(a1, a2) = (a1 = a2)

@ Conversion of Strings to Lists

@d macro mode xrmbinding = MODE XRMBINDING = INT
@d macro mode xrmbindinglist =
macro mode xrmbinding;
MODE XRMBINDINGLIST = REF STRUCT 16000 XRMBINDING

@m xrm bind tightly = 0
@m xrm bind loosely = 1

@d macro xrm string to quark list =
macro mode xrmquarklist;
PROC xrm string to quark list = ([]CHAR str,XRMQUARKLIST qret)VOID:
(
	PROC(VECTOR[]CHAR,XRMQUARKLIST)VOID sys xrm string to quark list =
		ALIEN "XRMSTRINGTOQUARKLIST"
		"#define XRMSTRINGTOQUARKLIST(str,qret) \"
		"   XrmStringToQuarkList(A_VC_charptr,(void *)qret)";
	sys xrm string to quark list(Z MAKERVC str,qret)
)

@d macro xrm string to binding quark list =
macro mode xrmbindinglist;
macro mode xrmquarklist;
PROC xrm string to binding quark list =@/
	([]CHAR str,
	 XRMBINDINGLIST bret,
	 XRMQUARKLIST qret)VOID:
(
	PROC(VECTOR[]CHAR,XRMBINDINGLIST,XRMQUARKLIST)VOID
		sys xrm string to binding quark list =
		ALIEN "XRMSTRINGTOBINDINGQUARKLIST"
		"#define XRMSTRINGTOBINDINGQUARKLIST(str,bret,qret) \"
		" XrmStringToBindingQuarkList(A_VC_chatrptr(str),(void *)bret,(void *)qret)";
	sys xrm string to binding quark list(Z MAKERVC str,bret,qret)
)

@ Name and Class lists.

@d macro mode xrm name =
macro mode xrmquark;
MODE XRMNAME = XRMQUARK

@d macro mode xrm name list =
macro mode xrmquarklist;
MODE XRMNAMELIST = XRMQUARKLIST

@m xrm name to string(name) = xrm quark to string(name)
@m xrm string to name(string) = xrm string to quark(string)
@m xrm string to name list(str, name) = xrm string to quark list(str, name)

@d macro mode xrm class =
macro mode xrmquark;
MODE XRMCLASS = XRMQUARK

@d macro mode xrm class list =
macro mode xrmquarklist;
MODE XRMCLASSLIST = XRMQUARKLIST

@m xrm class to string(c_class) = xrm quark to string(c_class)
@m xrm string to class(c_class) = xrm string to quark(c_class)
@m xrm string to classlist(str,c_class) = xrm string to quark list(str, c_class)

@ Resource Representation Types and Values.

@d macro mode xrm representation =
macro mode xrmquark;
MODE XRMREPRESENTATION = XRMQUARK

@m xrm string to representation(string) = xrm string to quark(string)
@m	xrm representation to string(type) = xrm quark to string(type)

@d macro mode xrmvalue =
MODE XRMVALUE = STRUCT(INT sz,CPTR addr)

@ Resource Manager Functions

@d macro mode xrmhashbucket = MODE XRMHASHBUCKET = CPTR
@d macro mode xrmdatabase = MODE XRMDATABASE = CPTR
@d macro mode xrmhashtable =
macro mode xrmhashbucket;
MODE XRMHASHTABLE = REF XRMHASHBUCKET

@d macro mode xrmsearchlist =
macro mode xrmhashtable;
MODE XRMSEARCHLIST = REF XRMHASHTABLE

@d macro xrm destroy database =
macro mode xrmdatabase;
PROC(XRMDATABASE)VOID xrm destroy database = ALIEN "XRMDESTROYDATABASE"
	"#define XRMDESTROYDATABASE(db) XrmDestroyDatabase(db)"

@d macro xrm qput resource =
macro mode xrmdatabase;
macro mode xrmbindinglist;
macro mode xrmquarklist;
macro mode xrmrepresentation;
macro mode xrmvalue;
PROC(REF XRMDATABASE,XRMBINDINGLIST,XRMQUARKLIST,XRMREPRESENTATION,REF XRMVALUE)VOID
	xrm qput resource = ALIEN "XRMQPUTRESOURCE"
	"#define XRMQPUTRESOURCE(db,bret,qret,type,val) \"
	"   (XrmQPutResource(db,(void *)bret,(void *)qret,type,val)"

@d macro xrm put resource =
macro mode xrmdatabase;
macro mode xrmvalue;
PROC xrm put resource = (REF XRMDATABASE db,[]CHAR spec,type,XRMVALUE value)VOID:
(
	PROC(REF XRMDATABASE,VECTOR[]CHAR,VECTOR[]CHAR,XRMVALUE)VOID
		sys xrm put resource = ALIEN "XRMPUTRESOURCE"
		"#define XRMPUTRESOURCE(db,sp,ty,val) \"
		" XrmPutResource(db,A_VC_charptr(sp),A_VC_charptr(ty),(void *)val)";
	sys xrm put resource(db,Z MAKERVC spec,Z MAKERVC type,value)
)


extern void XrmQPutStringResource(
#if NeedFunctionPrototypes
    XrmDatabase*	CO database CO,
    XrmBindingList      CO bindings CO,
    XrmQuarkList	CO quarks CO,
    _Xconst char*	CO value CO
#endif
);

extern void XrmPutStringResource(
#if NeedFunctionPrototypes
    XrmDatabase*	CO database CO,
    _Xconst char*	CO specifier CO,
    _Xconst char*	CO value CO
#endif
);

extern void XrmPutLineResource(
#if NeedFunctionPrototypes
    XrmDatabase*	CO database CO,
    _Xconst char*	CO line CO
#endif
);

extern Bool XrmQGetResource(
#if NeedFunctionPrototypes
    XrmDatabase		CO database CO,
    XrmNameList		CO quark_name CO,
    XrmClassList	CO quark_class CO,
    XrmRepresentation*	CO quark_type_return CO,
    XrmValue*		CO value_return CO
#endif
);

extern Bool XrmGetResource(
#if NeedFunctionPrototypes
    XrmDatabase		CO database CO,
    _Xconst char*	CO str_name CO,
    _Xconst char*	CO str_class CO,
    char**		CO str_type_return CO,
    XrmValue*		CO value_return CO
#endif
);

extern Bool XrmQGetSearchList(
#if NeedFunctionPrototypes
    XrmDatabase		CO database CO,
    XrmNameList		CO names CO,
    XrmClassList	CO classes CO,
    XrmSearchList	CO list_return CO,
    int			CO list_length CO
#endif
);

extern Bool XrmQGetSearchResource(
#if NeedFunctionPrototypes
    XrmSearchList	CO list CO,
    XrmName		CO name CO,
    XrmClass		CO class CO,
    XrmRepresentation*	CO type_return CO,
    XrmValue*		CO value_return CO
#endif
);

CO***************************************************************
 *
 * Resource Database Management
 *
 ***************************************************************CO

extern void XrmSetDatabase(
#if NeedFunctionPrototypes
    Display*		CO display CO,
    XrmDatabase		CO database CO
#endif
);

extern XrmDatabase XrmGetDatabase(
#if NeedFunctionPrototypes
    Display*		CO display CO
#endif
);

extern XrmDatabase XrmGetFileDatabase(
#if NeedFunctionPrototypes
    _Xconst char*	CO filename CO
#endif
);

extern Status XrmCombineFileDatabase(
#if NeedFunctionPrototypes
    _Xconst char* 	CO filename CO,
    XrmDatabase*	CO target CO,
    Bool		CO override CO
#endif
);

extern XrmDatabase XrmGetStringDatabase(
#if NeedFunctionPrototypes
    _Xconst char*	CO data CO  CO  null terminated string CO
#endif
);

extern void XrmPutFileDatabase(
#if NeedFunctionPrototypes
    XrmDatabase		CO database CO,
    _Xconst char*	CO filename CO
#endif
);

extern void XrmMergeDatabases(
#if NeedFunctionPrototypes
    XrmDatabase		CO source_db CO,
    XrmDatabase*	CO target_db CO
#endif
);

extern void XrmCombineDatabase(
#if NeedFunctionPrototypes
    XrmDatabase		CO source_db CO,
    XrmDatabase*	CO target_db CO,
    Bool		CO override CO
#endif
);

@m XrmEnumAllLevels 0
@m XrmEnumOneLevel  1

extern Bool XrmEnumerateDatabase(
#if NeedFunctionPrototypes
    XrmDatabase		CO db CO,
    XrmNameList		CO name_prefix CO,
    XrmClassList	CO class_prefix CO,
    int			CO mode CO,
    Bool (*)(
#if NeedNestedPrototypes
	     XrmDatabase*	CO db CO,
	     XrmBindingList	CO bindings CO,
	     XrmQuarkList	CO quarks CO,
	     XrmRepresentation*	CO type CO,
	     XrmValue*		CO value CO,
	     XPointer		CO closure CO
#endif
	     )		CO proc CO,
    XPointer		CO closure CO
#endif
);

extern const char *XrmLocaleOfDatabase(
#if NeedFunctionPrototypes
    XrmDatabase 	CO database CO
#endif
);


CO***************************************************************
 *
 * Command line option mapping to resource entries
 *
 ***************************************************************CO

typedef enum {
    XrmoptionNoArg,	CO Value is specified in OptionDescRec.value	    CO
    XrmoptionIsArg,     CO Value is the option string itself		    CO
    XrmoptionStickyArg, CO Value is characters immediately following option CO
    XrmoptionSepArg,    CO Value is next argument in argv		    CO
    XrmoptionResArg,	CO Resource and value in next argument in argv      CO
    XrmoptionSkipArg,   CO Ignore this option and the next argument in argv CO
    XrmoptionSkipLine,  CO Ignore this option and the rest of argv	    CO
    XrmoptionSkipNArgs	CO Ignore this option and the next 
			   OptionDescRes.value arguments in argv CO
} XrmOptionKind;

typedef struct {
    char	    *option;	    CO Option abbreviation in argv	    CO
    char	    *specifier;     CO Resource specifier		    CO
    XrmOptionKind   argKind;	    CO Which style of option it is	    CO
    XPointer	    value;	    CO Value to provide if XrmoptionNoArg   CO
} XrmOptionDescRec, *XrmOptionDescList;


extern void XrmParseCommand(
#if NeedFunctionPrototypes
    XrmDatabase*	CO database CO,
    XrmOptionDescList	CO table CO,
    int			CO table_count CO,
    _Xconst char*	CO name CO,
    int*		CO argc_in_out CO,
    char**		CO argv_in_out CO		     
#endif
);

_XFUNCPROTOEND

#endif CO _XRESOURCE_H_ CO
CO DON'T ADD STUFF AFTER THIS #endif CO
