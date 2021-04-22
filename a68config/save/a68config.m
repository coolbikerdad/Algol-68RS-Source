8
mod_info
BAAALIB
a68config                       
                                
                                
0
                                
                                
0
-1
       
       
a68config                       
0
0
0
1
194
070064001a0100070303737472001a010303727663041a00070065041a01001a0508737472746f727663010000001a041a006304076d616b65727663010000001a041a060066000507006700050100660407613638696e697401000000660005070068000501001a0700690005010068040d73686f77613638636f6e6669670100000068000507006a000502001a001a0409613638636f6e66696701001a001a0005010e73686f775f613638636f6e6669670069010a636f6e666967696e666f001a
CAAALIB
1618772869
7
HAAALIBffftff
XAAALIBftffff
ABAALIBfftfff
NBAALIBfftfff
UEAALIBfftfff
JGAALIBfftfff
LGAALIBttfftt#define LGAALIB_configinfo ACONFIG
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

-----
