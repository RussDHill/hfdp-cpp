

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Fri Apr 30 20:56:54 2010
 */
/* Compiler settings for ..\GumballRemote.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, app_config, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>

#include "GumballRemote_h.h"

#define TYPE_FORMAT_STRING_SIZE   23                                
#define PROC_FORMAT_STRING_SIZE   91                                
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _GumballRemote_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } GumballRemote_MIDL_TYPE_FORMAT_STRING;

typedef struct _GumballRemote_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } GumballRemote_MIDL_PROC_FORMAT_STRING;

typedef struct _GumballRemote_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } GumballRemote_MIDL_EXPR_FORMAT_STRING;


static RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const GumballRemote_MIDL_TYPE_FORMAT_STRING GumballRemote__MIDL_TypeFormatString;
extern const GumballRemote_MIDL_PROC_FORMAT_STRING GumballRemote__MIDL_ProcFormatString;
extern const GumballRemote_MIDL_EXPR_FORMAT_STRING GumballRemote__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: GumballRemote, ver. 1.0,
   GUID={0xd483d70c,0xf79d,0x4b15,{0x86,0x56,0xf7,0xaa,0xd0,0xe6,0x88,0x56}} */

handle_t gumballRemoteBinding;


static const RPC_CLIENT_INTERFACE GumballRemote___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0xd483d70c,0xf79d,0x4b15,{0x86,0x56,0xf7,0xaa,0xd0,0xe6,0x88,0x56}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE GumballRemote_v1_0_c_ifspec = (RPC_IF_HANDLE)& GumballRemote___RpcClientInterface;

extern const MIDL_STUB_DESC GumballRemote_StubDesc;

static RPC_BINDING_HANDLE GumballRemote__MIDL_AutoBindHandle;


void getLocation( 
    /* [size_is][out] */ unsigned char *location)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&GumballRemote_StubDesc,
                  (PFORMAT_STRING) &GumballRemote__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&location);
    
}


void getCount( 
    /* [out] */ short *count)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&GumballRemote_StubDesc,
                  (PFORMAT_STRING) &GumballRemote__MIDL_ProcFormatString.Format[30],
                  ( unsigned char * )&count);
    
}


void getStateString( 
    /* [size_is][out] */ unsigned char *stateString)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&GumballRemote_StubDesc,
                  (PFORMAT_STRING) &GumballRemote__MIDL_ProcFormatString.Format[60],
                  ( unsigned char * )&stateString);
    
}


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need a Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const GumballRemote_MIDL_PROC_FORMAT_STRING GumballRemote__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure getLocation */

			0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x1,		/* 1 */
/* 16 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 18 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter location */

/* 24 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 26 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 28 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Procedure getCount */

/* 30 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 32 */	NdrFcLong( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x1 ),	/* 1 */
/* 38 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 40 */	NdrFcShort( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x1a ),	/* 26 */
/* 44 */	0x40,		/* Oi2 Flags:  has ext, */
			0x1,		/* 1 */
/* 46 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x0 ),	/* 0 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter count */

/* 54 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 56 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 58 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Procedure getStateString */

/* 60 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 62 */	NdrFcLong( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x2 ),	/* 2 */
/* 68 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	0x41,		/* Oi2 Flags:  srv must size, has ext, */
			0x1,		/* 1 */
/* 76 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 78 */	NdrFcShort( 0x1 ),	/* 1 */
/* 80 */	NdrFcShort( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter stateString */

/* 84 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 86 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 88 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

			0x0
        }
    };

static const GumballRemote_MIDL_TYPE_FORMAT_STRING GumballRemote__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x0,	/* FC_RP */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/*  8 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10 */	0x40,		/* Corr desc:  constant, val=256 */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x100 ),	/* 256 */
/* 14 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 16 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 18 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 20 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const unsigned short GumballRemote_FormatStringOffsetTable[] =
    {
    0,
    30,
    60
    };


static const MIDL_STUB_DESC GumballRemote_StubDesc = 
    {
    (void *)& GumballRemote___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &gumballRemoteBinding,
    0,
    0,
    0,
    0,
    GumballRemote__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x70001f4, /* MIDL Version 7.0.500 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

