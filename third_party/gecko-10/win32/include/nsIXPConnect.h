/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/js/xpconnect/idl/nsIXPConnect.idl
 */

#ifndef __gen_nsIXPConnect_h__
#define __gen_nsIXPConnect_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIClassInfo_h__
#include "nsIClassInfo.h"
#endif

#ifndef __gen_xpccomponents_h__
#include "xpccomponents.h"
#endif

#ifndef __gen_xpcjsid_h__
#include "xpcjsid.h"
#endif

#ifndef __gen_xpcexception_h__
#include "xpcexception.h"
#endif

#ifndef __gen_nsIInterfaceInfo_h__
#include "nsIInterfaceInfo.h"
#endif

#ifndef __gen_nsIInterfaceInfoManager_h__
#include "nsIInterfaceInfoManager.h"
#endif

#ifndef __gen_nsIExceptionService_h__
#include "nsIExceptionService.h"
#endif

#ifndef __gen_nsIVariant_h__
#include "nsIVariant.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#include "jspubtd.h"
#include "xptinfo.h"
#include "nsAXPCNativeCallContext.h"
class nsWrapperCache;
/***************************************************************************/
#define GENERATE_XPC_FAILURE(x) \
            (NS_ERROR_GENERATE_FAILURE(NS_ERROR_MODULE_XPCONNECT,x))
#define NS_ERROR_XPC_NOT_ENOUGH_ARGS                   GENERATE_XPC_FAILURE( 1)
#define NS_ERROR_XPC_NEED_OUT_OBJECT                   GENERATE_XPC_FAILURE( 2)
#define NS_ERROR_XPC_CANT_SET_OUT_VAL                  GENERATE_XPC_FAILURE( 3)
#define NS_ERROR_XPC_NATIVE_RETURNED_FAILURE           GENERATE_XPC_FAILURE( 4)
#define NS_ERROR_XPC_CANT_GET_INTERFACE_INFO           GENERATE_XPC_FAILURE( 5)
#define NS_ERROR_XPC_CANT_GET_PARAM_IFACE_INFO         GENERATE_XPC_FAILURE( 6)
#define NS_ERROR_XPC_CANT_GET_METHOD_INFO              GENERATE_XPC_FAILURE( 7)
#define NS_ERROR_XPC_UNEXPECTED                        GENERATE_XPC_FAILURE( 8)
#define NS_ERROR_XPC_BAD_CONVERT_JS                    GENERATE_XPC_FAILURE( 9)
#define NS_ERROR_XPC_BAD_CONVERT_NATIVE                GENERATE_XPC_FAILURE(10)
#define NS_ERROR_XPC_BAD_CONVERT_JS_NULL_REF           GENERATE_XPC_FAILURE(11)
#define NS_ERROR_XPC_BAD_OP_ON_WN_PROTO                GENERATE_XPC_FAILURE(12)
#define NS_ERROR_XPC_CANT_CONVERT_WN_TO_FUN            GENERATE_XPC_FAILURE(13)
#define NS_ERROR_XPC_CANT_DEFINE_PROP_ON_WN            GENERATE_XPC_FAILURE(14)
#define NS_ERROR_XPC_CANT_WATCH_WN_STATIC              GENERATE_XPC_FAILURE(15)
#define NS_ERROR_XPC_CANT_EXPORT_WN_STATIC             GENERATE_XPC_FAILURE(16)
#define NS_ERROR_XPC_SCRIPTABLE_CALL_FAILED            GENERATE_XPC_FAILURE(17)
#define NS_ERROR_XPC_SCRIPTABLE_CTOR_FAILED            GENERATE_XPC_FAILURE(18)
#define NS_ERROR_XPC_CANT_CALL_WO_SCRIPTABLE           GENERATE_XPC_FAILURE(19)
#define NS_ERROR_XPC_CANT_CTOR_WO_SCRIPTABLE           GENERATE_XPC_FAILURE(20)
#define NS_ERROR_XPC_CI_RETURNED_FAILURE               GENERATE_XPC_FAILURE(21)
#define NS_ERROR_XPC_GS_RETURNED_FAILURE               GENERATE_XPC_FAILURE(22)
#define NS_ERROR_XPC_BAD_CID                           GENERATE_XPC_FAILURE(23)
#define NS_ERROR_XPC_BAD_IID                           GENERATE_XPC_FAILURE(24)
#define NS_ERROR_XPC_CANT_CREATE_WN                    GENERATE_XPC_FAILURE(25)
#define NS_ERROR_XPC_JS_THREW_EXCEPTION                GENERATE_XPC_FAILURE(26)
#define NS_ERROR_XPC_JS_THREW_NATIVE_OBJECT            GENERATE_XPC_FAILURE(27)
#define NS_ERROR_XPC_JS_THREW_JS_OBJECT                GENERATE_XPC_FAILURE(28)
#define NS_ERROR_XPC_JS_THREW_NULL                     GENERATE_XPC_FAILURE(29)
#define NS_ERROR_XPC_JS_THREW_STRING                   GENERATE_XPC_FAILURE(30)
#define NS_ERROR_XPC_JS_THREW_NUMBER                   GENERATE_XPC_FAILURE(31)
#define NS_ERROR_XPC_JAVASCRIPT_ERROR                  GENERATE_XPC_FAILURE(32)
#define NS_ERROR_XPC_JAVASCRIPT_ERROR_WITH_DETAILS     GENERATE_XPC_FAILURE(33)
#define NS_ERROR_XPC_CANT_CONVERT_PRIMITIVE_TO_ARRAY   GENERATE_XPC_FAILURE(34)
#define NS_ERROR_XPC_CANT_CONVERT_OBJECT_TO_ARRAY      GENERATE_XPC_FAILURE(35)
#define NS_ERROR_XPC_NOT_ENOUGH_ELEMENTS_IN_ARRAY      GENERATE_XPC_FAILURE(36)
#define NS_ERROR_XPC_CANT_GET_ARRAY_INFO               GENERATE_XPC_FAILURE(37)
#define NS_ERROR_XPC_NOT_ENOUGH_CHARS_IN_STRING        GENERATE_XPC_FAILURE(38)
#define NS_ERROR_XPC_SECURITY_MANAGER_VETO             GENERATE_XPC_FAILURE(39)
#define NS_ERROR_XPC_INTERFACE_NOT_SCRIPTABLE          GENERATE_XPC_FAILURE(40)
#define NS_ERROR_XPC_INTERFACE_NOT_FROM_NSISUPPORTS    GENERATE_XPC_FAILURE(41)
#define NS_ERROR_XPC_CANT_GET_JSOBJECT_OF_DOM_OBJECT   GENERATE_XPC_FAILURE(42)
#define NS_ERROR_XPC_CANT_SET_READ_ONLY_CONSTANT       GENERATE_XPC_FAILURE(43)
#define NS_ERROR_XPC_CANT_SET_READ_ONLY_ATTRIBUTE      GENERATE_XPC_FAILURE(44)
#define NS_ERROR_XPC_CANT_SET_READ_ONLY_METHOD         GENERATE_XPC_FAILURE(45)
#define NS_ERROR_XPC_CANT_ADD_PROP_TO_WRAPPED_NATIVE   GENERATE_XPC_FAILURE(46)
#define NS_ERROR_XPC_CALL_TO_SCRIPTABLE_FAILED         GENERATE_XPC_FAILURE(47)
#define NS_ERROR_XPC_JSOBJECT_HAS_NO_FUNCTION_NAMED    GENERATE_XPC_FAILURE(48)
#define NS_ERROR_XPC_BAD_ID_STRING                     GENERATE_XPC_FAILURE(49)
#define NS_ERROR_XPC_BAD_INITIALIZER_NAME              GENERATE_XPC_FAILURE(50)
#define NS_ERROR_XPC_HAS_BEEN_SHUTDOWN                 GENERATE_XPC_FAILURE(51)
#define NS_ERROR_XPC_CANT_MODIFY_PROP_ON_WN            GENERATE_XPC_FAILURE(52)
#define NS_ERROR_XPC_BAD_CONVERT_JS_ZERO_ISNOT_NULL    GENERATE_XPC_FAILURE(53)
// any new errors here should have an associated entry added in xpc.msg
/***************************************************************************/
class nsIXPCScriptable; /* forward declaration */

class nsIXPConnect; /* forward declaration */

class nsIXPConnectWrappedNative; /* forward declaration */

class nsIInterfaceInfo; /* forward declaration */

class nsIXPCSecurityManager; /* forward declaration */

class nsIPrincipal; /* forward declaration */

class nsCycleCollectionTraversalCallback;
class nsScriptObjectTracer;

/* starting interface:    nsIXPConnectJSObjectHolder */
#define NS_IXPCONNECTJSOBJECTHOLDER_IID_STR "8916a320-d118-11d3-8f3a-0010a4e73d9a"

#define NS_IXPCONNECTJSOBJECTHOLDER_IID \
  {0x8916a320, 0xd118, 0x11d3, \
    { 0x8f, 0x3a, 0x00, 0x10, 0xa4, 0xe7, 0x3d, 0x9a }}

class NS_NO_VTABLE nsIXPConnectJSObjectHolder : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXPCONNECTJSOBJECTHOLDER_IID)

  /* readonly attribute JSObjectPtr JSObject; */
  NS_IMETHOD GetJSObject(JSObject **aJSObject) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXPConnectJSObjectHolder, NS_IXPCONNECTJSOBJECTHOLDER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXPCONNECTJSOBJECTHOLDER \
  NS_IMETHOD GetJSObject(JSObject **aJSObject); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXPCONNECTJSOBJECTHOLDER(_to) \
  NS_IMETHOD GetJSObject(JSObject **aJSObject) { return _to GetJSObject(aJSObject); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXPCONNECTJSOBJECTHOLDER(_to) \
  NS_IMETHOD GetJSObject(JSObject **aJSObject) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJSObject(aJSObject); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXPConnectJSObjectHolder : public nsIXPConnectJSObjectHolder
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXPCONNECTJSOBJECTHOLDER

  nsXPConnectJSObjectHolder();

private:
  ~nsXPConnectJSObjectHolder();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsXPConnectJSObjectHolder, nsIXPConnectJSObjectHolder)

nsXPConnectJSObjectHolder::nsXPConnectJSObjectHolder()
{
  /* member initializers and constructor code */
}

nsXPConnectJSObjectHolder::~nsXPConnectJSObjectHolder()
{
  /* destructor code */
}

/* readonly attribute JSObjectPtr JSObject; */
NS_IMETHODIMP nsXPConnectJSObjectHolder::GetJSObject(JSObject **aJSObject)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIXPConnectWrappedNative */
#define NS_IXPCONNECTWRAPPEDNATIVE_IID_STR "f819a95a-6ab5-4a02-bda6-32861e859581"

#define NS_IXPCONNECTWRAPPEDNATIVE_IID \
  {0xf819a95a, 0x6ab5, 0x4a02, \
    { 0xbd, 0xa6, 0x32, 0x86, 0x1e, 0x85, 0x95, 0x81 }}

class nsIXPConnectWrappedNative : public nsIXPConnectJSObjectHolder {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXPCONNECTWRAPPEDNATIVE_IID)

  /* readonly attribute nsISupports Native; */
  NS_IMETHOD GetNative(nsISupports * *aNative) = 0;

  /* readonly attribute JSObjectPtr JSObjectPrototype; */
  NS_IMETHOD GetJSObjectPrototype(JSObject **aJSObjectPrototype) = 0;

  /* readonly attribute nsIXPConnect XPConnect; */
  NS_IMETHOD GetXPConnect(nsIXPConnect * *aXPConnect) = 0;

  /* nsIInterfaceInfo FindInterfaceWithMember (in jsid nameID); */
  NS_IMETHOD FindInterfaceWithMember(jsid nameID, nsIInterfaceInfo * *_retval NS_OUTPARAM) = 0;

  /* nsIInterfaceInfo FindInterfaceWithName (in jsid nameID); */
  NS_IMETHOD FindInterfaceWithName(jsid nameID, nsIInterfaceInfo * *_retval NS_OUTPARAM) = 0;

  /* void debugDump (in short depth); */
  NS_IMETHOD DebugDump(PRInt16 depth) = 0;

  /* void refreshPrototype (); */
  NS_IMETHOD RefreshPrototype(void) = 0;

  /* voidPtrPtr GetSecurityInfoAddress (); */
  NS_IMETHOD GetSecurityInfoAddress(void* **_retval NS_OUTPARAM) = 0;

      /**
     * Faster access to the native object from C++.  Will never return null.
     */
    nsISupports* Native() const { return mIdentity; }
protected:
    nsISupports *mIdentity;
public:
};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXPConnectWrappedNative, NS_IXPCONNECTWRAPPEDNATIVE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXPCONNECTWRAPPEDNATIVE \
  NS_IMETHOD GetNative(nsISupports * *aNative); \
  NS_IMETHOD GetJSObjectPrototype(JSObject **aJSObjectPrototype); \
  NS_IMETHOD GetXPConnect(nsIXPConnect * *aXPConnect); \
  NS_IMETHOD FindInterfaceWithMember(jsid nameID, nsIInterfaceInfo * *_retval NS_OUTPARAM); \
  NS_IMETHOD FindInterfaceWithName(jsid nameID, nsIInterfaceInfo * *_retval NS_OUTPARAM); \
  NS_IMETHOD DebugDump(PRInt16 depth); \
  NS_IMETHOD RefreshPrototype(void); \
  NS_IMETHOD GetSecurityInfoAddress(void* **_retval NS_OUTPARAM); \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXPCONNECTWRAPPEDNATIVE(_to) \
  NS_IMETHOD GetNative(nsISupports * *aNative) { return _to GetNative(aNative); } \
  NS_IMETHOD GetJSObjectPrototype(JSObject **aJSObjectPrototype) { return _to GetJSObjectPrototype(aJSObjectPrototype); } \
  NS_IMETHOD GetXPConnect(nsIXPConnect * *aXPConnect) { return _to GetXPConnect(aXPConnect); } \
  NS_IMETHOD FindInterfaceWithMember(jsid nameID, nsIInterfaceInfo * *_retval NS_OUTPARAM) { return _to FindInterfaceWithMember(nameID, _retval); } \
  NS_IMETHOD FindInterfaceWithName(jsid nameID, nsIInterfaceInfo * *_retval NS_OUTPARAM) { return _to FindInterfaceWithName(nameID, _retval); } \
  NS_IMETHOD DebugDump(PRInt16 depth) { return _to DebugDump(depth); } \
  NS_IMETHOD RefreshPrototype(void) { return _to RefreshPrototype(); } \
  NS_IMETHOD GetSecurityInfoAddress(void* **_retval NS_OUTPARAM) { return _to GetSecurityInfoAddress(_retval); } \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXPCONNECTWRAPPEDNATIVE(_to) \
  NS_IMETHOD GetNative(nsISupports * *aNative) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNative(aNative); } \
  NS_IMETHOD GetJSObjectPrototype(JSObject **aJSObjectPrototype) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJSObjectPrototype(aJSObjectPrototype); } \
  NS_IMETHOD GetXPConnect(nsIXPConnect * *aXPConnect) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetXPConnect(aXPConnect); } \
  NS_IMETHOD FindInterfaceWithMember(jsid nameID, nsIInterfaceInfo * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->FindInterfaceWithMember(nameID, _retval); } \
  NS_IMETHOD FindInterfaceWithName(jsid nameID, nsIInterfaceInfo * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->FindInterfaceWithName(nameID, _retval); } \
  NS_IMETHOD DebugDump(PRInt16 depth) { return !_to ? NS_ERROR_NULL_POINTER : _to->DebugDump(depth); } \
  NS_IMETHOD RefreshPrototype(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->RefreshPrototype(); } \
  NS_IMETHOD GetSecurityInfoAddress(void* **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSecurityInfoAddress(_retval); } \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXPConnectWrappedNative : public nsIXPConnectWrappedNative
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXPCONNECTWRAPPEDNATIVE

  nsXPConnectWrappedNative();

private:
  ~nsXPConnectWrappedNative();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsXPConnectWrappedNative, nsIXPConnectWrappedNative)

nsXPConnectWrappedNative::nsXPConnectWrappedNative()
{
  /* member initializers and constructor code */
}

nsXPConnectWrappedNative::~nsXPConnectWrappedNative()
{
  /* destructor code */
}

/* readonly attribute nsISupports Native; */
NS_IMETHODIMP nsXPConnectWrappedNative::GetNative(nsISupports * *aNative)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute JSObjectPtr JSObjectPrototype; */
NS_IMETHODIMP nsXPConnectWrappedNative::GetJSObjectPrototype(JSObject **aJSObjectPrototype)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIXPConnect XPConnect; */
NS_IMETHODIMP nsXPConnectWrappedNative::GetXPConnect(nsIXPConnect * *aXPConnect)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIInterfaceInfo FindInterfaceWithMember (in jsid nameID); */
NS_IMETHODIMP nsXPConnectWrappedNative::FindInterfaceWithMember(jsid nameID, nsIInterfaceInfo * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIInterfaceInfo FindInterfaceWithName (in jsid nameID); */
NS_IMETHODIMP nsXPConnectWrappedNative::FindInterfaceWithName(jsid nameID, nsIInterfaceInfo * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void debugDump (in short depth); */
NS_IMETHODIMP nsXPConnectWrappedNative::DebugDump(PRInt16 depth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void refreshPrototype (); */
NS_IMETHODIMP nsXPConnectWrappedNative::RefreshPrototype()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* voidPtrPtr GetSecurityInfoAddress (); */
NS_IMETHODIMP nsXPConnectWrappedNative::GetSecurityInfoAddress(void* **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#include "nsCOMPtr.h"
inline
const nsQueryInterface
do_QueryWrappedNative(nsIXPConnectWrappedNative *aWrappedNative)
{
    return nsQueryInterface(aWrappedNative->Native());
}
inline
const nsQueryInterfaceWithError
do_QueryWrappedNative(nsIXPConnectWrappedNative *aWrappedNative,
                      nsresult *aError)
{
    return nsQueryInterfaceWithError(aWrappedNative->Native(), aError);
}

/* starting interface:    nsIXPConnectWrappedJS */
#define NS_IXPCONNECTWRAPPEDJS_IID_STR "bed52030-bca6-11d2-ba79-00805f8a5dd7"

#define NS_IXPCONNECTWRAPPEDJS_IID \
  {0xbed52030, 0xbca6, 0x11d2, \
    { 0xba, 0x79, 0x00, 0x80, 0x5f, 0x8a, 0x5d, 0xd7 }}

class NS_NO_VTABLE nsIXPConnectWrappedJS : public nsIXPConnectJSObjectHolder {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXPCONNECTWRAPPEDJS_IID)

  /* readonly attribute nsIInterfaceInfo InterfaceInfo; */
  NS_IMETHOD GetInterfaceInfo(nsIInterfaceInfo * *aInterfaceInfo) = 0;

  /* readonly attribute nsIIDPtr InterfaceIID; */
  NS_IMETHOD GetInterfaceIID(nsIID **aInterfaceIID) = 0;

  /* void debugDump (in short depth); */
  NS_IMETHOD DebugDump(PRInt16 depth) = 0;

  /* void aggregatedQueryInterface (in nsIIDRef uuid, [iid_is (uuid), retval] out nsQIResult result); */
  NS_IMETHOD AggregatedQueryInterface(const nsIID & uuid, void **result NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXPConnectWrappedJS, NS_IXPCONNECTWRAPPEDJS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXPCONNECTWRAPPEDJS \
  NS_IMETHOD GetInterfaceInfo(nsIInterfaceInfo * *aInterfaceInfo); \
  NS_IMETHOD GetInterfaceIID(nsIID **aInterfaceIID); \
  NS_IMETHOD DebugDump(PRInt16 depth); \
  NS_IMETHOD AggregatedQueryInterface(const nsIID & uuid, void **result NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXPCONNECTWRAPPEDJS(_to) \
  NS_IMETHOD GetInterfaceInfo(nsIInterfaceInfo * *aInterfaceInfo) { return _to GetInterfaceInfo(aInterfaceInfo); } \
  NS_IMETHOD GetInterfaceIID(nsIID **aInterfaceIID) { return _to GetInterfaceIID(aInterfaceIID); } \
  NS_IMETHOD DebugDump(PRInt16 depth) { return _to DebugDump(depth); } \
  NS_IMETHOD AggregatedQueryInterface(const nsIID & uuid, void **result NS_OUTPARAM) { return _to AggregatedQueryInterface(uuid, result); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXPCONNECTWRAPPEDJS(_to) \
  NS_IMETHOD GetInterfaceInfo(nsIInterfaceInfo * *aInterfaceInfo) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInterfaceInfo(aInterfaceInfo); } \
  NS_IMETHOD GetInterfaceIID(nsIID **aInterfaceIID) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInterfaceIID(aInterfaceIID); } \
  NS_IMETHOD DebugDump(PRInt16 depth) { return !_to ? NS_ERROR_NULL_POINTER : _to->DebugDump(depth); } \
  NS_IMETHOD AggregatedQueryInterface(const nsIID & uuid, void **result NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AggregatedQueryInterface(uuid, result); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXPConnectWrappedJS : public nsIXPConnectWrappedJS
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXPCONNECTWRAPPEDJS

  nsXPConnectWrappedJS();

private:
  ~nsXPConnectWrappedJS();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsXPConnectWrappedJS, nsIXPConnectWrappedJS)

nsXPConnectWrappedJS::nsXPConnectWrappedJS()
{
  /* member initializers and constructor code */
}

nsXPConnectWrappedJS::~nsXPConnectWrappedJS()
{
  /* destructor code */
}

/* readonly attribute nsIInterfaceInfo InterfaceInfo; */
NS_IMETHODIMP nsXPConnectWrappedJS::GetInterfaceInfo(nsIInterfaceInfo * *aInterfaceInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIIDPtr InterfaceIID; */
NS_IMETHODIMP nsXPConnectWrappedJS::GetInterfaceIID(nsIID **aInterfaceIID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void debugDump (in short depth); */
NS_IMETHODIMP nsXPConnectWrappedJS::DebugDump(PRInt16 depth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void aggregatedQueryInterface (in nsIIDRef uuid, [iid_is (uuid), retval] out nsQIResult result); */
NS_IMETHODIMP nsXPConnectWrappedJS::AggregatedQueryInterface(const nsIID & uuid, void **result NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIXPCWrappedJSObjectGetter */
#define NS_IXPCWRAPPEDJSOBJECTGETTER_IID_STR "254bb2e0-6439-11d4-8fe0-0010a4e73d9a"

#define NS_IXPCWRAPPEDJSOBJECTGETTER_IID \
  {0x254bb2e0, 0x6439, 0x11d4, \
    { 0x8f, 0xe0, 0x00, 0x10, 0xa4, 0xe7, 0x3d, 0x9a }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIXPCWrappedJSObjectGetter : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXPCWRAPPEDJSOBJECTGETTER_IID)

  /* readonly attribute nsISupports neverCalled; */
  NS_SCRIPTABLE NS_IMETHOD GetNeverCalled(nsISupports * *aNeverCalled) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXPCWrappedJSObjectGetter, NS_IXPCWRAPPEDJSOBJECTGETTER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXPCWRAPPEDJSOBJECTGETTER \
  NS_SCRIPTABLE NS_IMETHOD GetNeverCalled(nsISupports * *aNeverCalled); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXPCWRAPPEDJSOBJECTGETTER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetNeverCalled(nsISupports * *aNeverCalled) { return _to GetNeverCalled(aNeverCalled); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXPCWRAPPEDJSOBJECTGETTER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetNeverCalled(nsISupports * *aNeverCalled) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNeverCalled(aNeverCalled); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXPCWrappedJSObjectGetter : public nsIXPCWrappedJSObjectGetter
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXPCWRAPPEDJSOBJECTGETTER

  nsXPCWrappedJSObjectGetter();

private:
  ~nsXPCWrappedJSObjectGetter();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsXPCWrappedJSObjectGetter, nsIXPCWrappedJSObjectGetter)

nsXPCWrappedJSObjectGetter::nsXPCWrappedJSObjectGetter()
{
  /* member initializers and constructor code */
}

nsXPCWrappedJSObjectGetter::~nsXPCWrappedJSObjectGetter()
{
  /* destructor code */
}

/* readonly attribute nsISupports neverCalled; */
NS_IMETHODIMP nsXPCWrappedJSObjectGetter::GetNeverCalled(nsISupports * *aNeverCalled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIXPCFunctionThisTranslator */
#define NS_IXPCFUNCTIONTHISTRANSLATOR_IID_STR "039ef260-2a0d-11d5-90a7-0010a4e73d9a"

#define NS_IXPCFUNCTIONTHISTRANSLATOR_IID \
  {0x039ef260, 0x2a0d, 0x11d5, \
    { 0x90, 0xa7, 0x00, 0x10, 0xa4, 0xe7, 0x3d, 0x9a }}

class NS_NO_VTABLE nsIXPCFunctionThisTranslator : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXPCFUNCTIONTHISTRANSLATOR_IID)

  /* nsISupports TranslateThis (in nsISupports aInitialThis, in nsIInterfaceInfo aInterfaceInfo, in PRUint16 aMethodIndex, out boolean aHideFirstParamFromJS, out nsIIDPtr aIIDOfResult); */
  NS_IMETHOD TranslateThis(nsISupports *aInitialThis, nsIInterfaceInfo *aInterfaceInfo, PRUint16 aMethodIndex, bool *aHideFirstParamFromJS NS_OUTPARAM, nsIID **aIIDOfResult NS_OUTPARAM, nsISupports * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXPCFunctionThisTranslator, NS_IXPCFUNCTIONTHISTRANSLATOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXPCFUNCTIONTHISTRANSLATOR \
  NS_IMETHOD TranslateThis(nsISupports *aInitialThis, nsIInterfaceInfo *aInterfaceInfo, PRUint16 aMethodIndex, bool *aHideFirstParamFromJS NS_OUTPARAM, nsIID **aIIDOfResult NS_OUTPARAM, nsISupports * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXPCFUNCTIONTHISTRANSLATOR(_to) \
  NS_IMETHOD TranslateThis(nsISupports *aInitialThis, nsIInterfaceInfo *aInterfaceInfo, PRUint16 aMethodIndex, bool *aHideFirstParamFromJS NS_OUTPARAM, nsIID **aIIDOfResult NS_OUTPARAM, nsISupports * *_retval NS_OUTPARAM) { return _to TranslateThis(aInitialThis, aInterfaceInfo, aMethodIndex, aHideFirstParamFromJS, aIIDOfResult, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXPCFUNCTIONTHISTRANSLATOR(_to) \
  NS_IMETHOD TranslateThis(nsISupports *aInitialThis, nsIInterfaceInfo *aInterfaceInfo, PRUint16 aMethodIndex, bool *aHideFirstParamFromJS NS_OUTPARAM, nsIID **aIIDOfResult NS_OUTPARAM, nsISupports * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->TranslateThis(aInitialThis, aInterfaceInfo, aMethodIndex, aHideFirstParamFromJS, aIIDOfResult, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXPCFunctionThisTranslator : public nsIXPCFunctionThisTranslator
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXPCFUNCTIONTHISTRANSLATOR

  nsXPCFunctionThisTranslator();

private:
  ~nsXPCFunctionThisTranslator();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsXPCFunctionThisTranslator, nsIXPCFunctionThisTranslator)

nsXPCFunctionThisTranslator::nsXPCFunctionThisTranslator()
{
  /* member initializers and constructor code */
}

nsXPCFunctionThisTranslator::~nsXPCFunctionThisTranslator()
{
  /* destructor code */
}

/* nsISupports TranslateThis (in nsISupports aInitialThis, in nsIInterfaceInfo aInterfaceInfo, in PRUint16 aMethodIndex, out boolean aHideFirstParamFromJS, out nsIIDPtr aIIDOfResult); */
NS_IMETHODIMP nsXPCFunctionThisTranslator::TranslateThis(nsISupports *aInitialThis, nsIInterfaceInfo *aInterfaceInfo, PRUint16 aMethodIndex, bool *aHideFirstParamFromJS NS_OUTPARAM, nsIID **aIIDOfResult NS_OUTPARAM, nsISupports * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

// For use with the service manager
// {CB6593E0-F9B2-11d2-BDD6-000064657374}
#define NS_XPCONNECT_CID \
{ 0xcb6593e0, 0xf9b2, 0x11d2, \
    { 0xbd, 0xd6, 0x0, 0x0, 0x64, 0x65, 0x73, 0x74 } }

/* starting interface:    nsIXPConnect */
#define NS_IXPCONNECT_IID_STR "a995b541-d514-43f1-ac0e-f49746c0b063"

#define NS_IXPCONNECT_IID \
  {0xa995b541, 0xd514, 0x43f1, \
    { 0xac, 0x0e, 0xf4, 0x97, 0x46, 0xc0, 0xb0, 0x63 }}

class nsIXPConnect : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXPCONNECT_IID)

    NS_DEFINE_STATIC_CID_ACCESSOR(NS_XPCONNECT_CID)
  /* void initClasses (in JSContextPtr aJSContext, in JSObjectPtr aGlobalJSObj); */
  NS_IMETHOD InitClasses(JSContext *aJSContext, JSObject *aGlobalJSObj) = 0;

  /* nsIXPConnectJSObjectHolder initClassesWithNewWrappedGlobal (in JSContextPtr aJSContext, in nsISupports aCOMObj, in nsIIDRef aIID, in nsIPrincipal aPrincipal, in nsISupports aExtraPtr, in PRUint32 aFlags); */
  NS_IMETHOD InitClassesWithNewWrappedGlobal(JSContext *aJSContext, nsISupports *aCOMObj, const nsIID & aIID, nsIPrincipal *aPrincipal, nsISupports *aExtraPtr, PRUint32 aFlags, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM) = 0;

  enum { INIT_JS_STANDARD_CLASSES = 1U };

  enum { FLAG_SYSTEM_GLOBAL_OBJECT = 2U };

  enum { OMIT_COMPONENTS_OBJECT = 4U };

  /* nsIXPConnectJSObjectHolder wrapNative (in JSContextPtr aJSContext, in JSObjectPtr aScope, in nsISupports aCOMObj, in nsIIDRef aIID); */
  NS_IMETHOD WrapNative(JSContext *aJSContext, JSObject *aScope, nsISupports *aCOMObj, const nsIID & aIID, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM) = 0;

  /* void wrapNativeToJSVal (in JSContextPtr aJSContext, in JSObjectPtr aScope, in nsISupports aCOMObj, in nsWrapperCachePtr aCache, in nsIIDPtr aIID, in boolean aAllowWrapper, out jsval aVal, out nsIXPConnectJSObjectHolder aHolder); */
  NS_IMETHOD WrapNativeToJSVal(JSContext *aJSContext, JSObject *aScope, nsISupports *aCOMObj, nsWrapperCache *aCache, const nsIID *aIID, bool aAllowWrapper, JS::Value *aVal NS_OUTPARAM, nsIXPConnectJSObjectHolder * *aHolder NS_OUTPARAM) = 0;

  /* void wrapJS (in JSContextPtr aJSContext, in JSObjectPtr aJSObj, in nsIIDRef aIID, [iid_is (aIID), retval] out nsQIResult result); */
  NS_IMETHOD WrapJS(JSContext *aJSContext, JSObject *aJSObj, const nsIID & aIID, void **result NS_OUTPARAM) = 0;

  /* nsIVariant jSValToVariant (in JSContextPtr cx, in JSValPtr aJSVal); */
  NS_IMETHOD JSValToVariant(JSContext *cx, jsval *aJSVal, nsIVariant * *_retval NS_OUTPARAM) = 0;

  /* nsIXPConnectWrappedNative getWrappedNativeOfJSObject (in JSContextPtr aJSContext, in JSObjectPtr aJSObj); */
  NS_IMETHOD GetWrappedNativeOfJSObject(JSContext *aJSContext, JSObject *aJSObj, nsIXPConnectWrappedNative * *_retval NS_OUTPARAM) = 0;

  /* [noscript,notxpcom] nsISupports getNativeOfWrapper (in JSContextPtr aJSContext, in JSObjectPtr aJSObj); */
  NS_IMETHOD_(nsISupports *) GetNativeOfWrapper(JSContext *aJSContext, JSObject *aJSObj) = 0;

  /* JSObjectPtr getJSObjectOfWrapper (in JSContextPtr aJSContext, in JSObjectPtr aJSObj); */
  NS_IMETHOD GetJSObjectOfWrapper(JSContext *aJSContext, JSObject *aJSObj, JSObject **_retval NS_OUTPARAM) = 0;

  /* void setSecurityManagerForJSContext (in JSContextPtr aJSContext, in nsIXPCSecurityManager aManager, in PRUint16 flags); */
  NS_IMETHOD SetSecurityManagerForJSContext(JSContext *aJSContext, nsIXPCSecurityManager *aManager, PRUint16 flags) = 0;

  /* void getSecurityManagerForJSContext (in JSContextPtr aJSContext, out nsIXPCSecurityManager aManager, out PRUint16 flags); */
  NS_IMETHOD GetSecurityManagerForJSContext(JSContext *aJSContext, nsIXPCSecurityManager * *aManager NS_OUTPARAM, PRUint16 *flags NS_OUTPARAM) = 0;

  /* void setDefaultSecurityManager (in nsIXPCSecurityManager aManager, in PRUint16 flags); */
  NS_IMETHOD SetDefaultSecurityManager(nsIXPCSecurityManager *aManager, PRUint16 flags) = 0;

  /* void getDefaultSecurityManager (out nsIXPCSecurityManager aManager, out PRUint16 flags); */
  NS_IMETHOD GetDefaultSecurityManager(nsIXPCSecurityManager * *aManager NS_OUTPARAM, PRUint16 *flags NS_OUTPARAM) = 0;

  /* nsIStackFrame createStackFrameLocation (in PRUint32 aLanguage, in string aFilename, in string aFunctionName, in PRInt32 aLineNumber, in nsIStackFrame aCaller); */
  NS_IMETHOD CreateStackFrameLocation(PRUint32 aLanguage, const char * aFilename, const char * aFunctionName, PRInt32 aLineNumber, nsIStackFrame *aCaller, nsIStackFrame * *_retval NS_OUTPARAM) = 0;

  /* [deprecated] void syncJSContexts (); */
  NS_IMETHOD SyncJSContexts(void) = 0;

  /* readonly attribute nsIStackFrame CurrentJSStack; */
  NS_IMETHOD GetCurrentJSStack(nsIStackFrame * *aCurrentJSStack) = 0;

  /* readonly attribute nsAXPCNativeCallContextPtr CurrentNativeCallContext; */
  NS_IMETHOD GetCurrentNativeCallContext(nsAXPCNativeCallContext **aCurrentNativeCallContext) = 0;

  /* attribute nsIException PendingException; */
  NS_IMETHOD GetPendingException(nsIException * *aPendingException) = 0;
  NS_IMETHOD SetPendingException(nsIException *aPendingException) = 0;

  /* void debugDump (in short depth); */
  NS_IMETHOD DebugDump(PRInt16 depth) = 0;

  /* void debugDumpObject (in nsISupports aCOMObj, in short depth); */
  NS_IMETHOD DebugDumpObject(nsISupports *aCOMObj, PRInt16 depth) = 0;

  /* void debugDumpJSStack (in boolean showArgs, in boolean showLocals, in boolean showThisProps); */
  NS_IMETHOD DebugDumpJSStack(bool showArgs, bool showLocals, bool showThisProps) = 0;

  /* void debugDumpEvalInJSStackFrame (in PRUint32 aFrameNumber, in string aSourceText); */
  NS_IMETHOD DebugDumpEvalInJSStackFrame(PRUint32 aFrameNumber, const char * aSourceText) = 0;

  /* void wrapJSAggregatedToNative (in nsISupports aOuter, in JSContextPtr aJSContext, in JSObjectPtr aJSObj, in nsIIDRef aIID, [iid_is (aIID), retval] out nsQIResult result); */
  NS_IMETHOD WrapJSAggregatedToNative(nsISupports *aOuter, JSContext *aJSContext, JSObject *aJSObj, const nsIID & aIID, void **result NS_OUTPARAM) = 0;

  /* nsIXPConnectWrappedNative getWrappedNativeOfNativeObject (in JSContextPtr aJSContext, in JSObjectPtr aScope, in nsISupports aCOMObj, in nsIIDRef aIID); */
  NS_IMETHOD GetWrappedNativeOfNativeObject(JSContext *aJSContext, JSObject *aScope, nsISupports *aCOMObj, const nsIID & aIID, nsIXPConnectWrappedNative * *_retval NS_OUTPARAM) = 0;

  /* nsIXPCFunctionThisTranslator getFunctionThisTranslator (in nsIIDRef aIID); */
  NS_IMETHOD GetFunctionThisTranslator(const nsIID & aIID, nsIXPCFunctionThisTranslator * *_retval NS_OUTPARAM) = 0;

  /* nsIXPCFunctionThisTranslator setFunctionThisTranslator (in nsIIDRef aIID, in nsIXPCFunctionThisTranslator aTranslator); */
  NS_IMETHOD SetFunctionThisTranslator(const nsIID & aIID, nsIXPCFunctionThisTranslator *aTranslator, nsIXPCFunctionThisTranslator * *_retval NS_OUTPARAM) = 0;

  /* nsIXPConnectJSObjectHolder reparentWrappedNativeIfFound (in JSContextPtr aJSContext, in JSObjectPtr aScope, in JSObjectPtr aNewParent, in nsISupports aCOMObj); */
  NS_IMETHOD ReparentWrappedNativeIfFound(JSContext *aJSContext, JSObject *aScope, JSObject *aNewParent, nsISupports *aCOMObj, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM) = 0;

  /* void moveWrappers (in JSContextPtr aJSContext, in JSObjectPtr aOldScope, in JSObjectPtr aNewScope); */
  NS_IMETHOD MoveWrappers(JSContext *aJSContext, JSObject *aOldScope, JSObject *aNewScope) = 0;

  /* void clearAllWrappedNativeSecurityPolicies (); */
  NS_IMETHOD ClearAllWrappedNativeSecurityPolicies(void) = 0;

  /* nsIXPConnectJSObjectHolder getWrappedNativePrototype (in JSContextPtr aJSContext, in JSObjectPtr aScope, in nsIClassInfo aClassInfo); */
  NS_IMETHOD GetWrappedNativePrototype(JSContext *aJSContext, JSObject *aScope, nsIClassInfo *aClassInfo, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM) = 0;

  /* void releaseJSContext (in JSContextPtr aJSContext, in boolean noGC); */
  NS_IMETHOD ReleaseJSContext(JSContext *aJSContext, bool noGC) = 0;

  /* jsval variantToJS (in JSContextPtr ctx, in JSObjectPtr scope, in nsIVariant value); */
  NS_IMETHOD VariantToJS(JSContext *ctx, JSObject *scope, nsIVariant *value, JS::Value *_retval NS_OUTPARAM) = 0;

  /* nsIVariant JSToVariant (in JSContextPtr ctx, in jsval value); */
  NS_IMETHOD JSToVariant(JSContext *ctx, const JS::Value & value, nsIVariant * *_retval NS_OUTPARAM) = 0;

  /* void restoreWrappedNativePrototype (in JSContextPtr aJSContext, in JSObjectPtr aScope, in nsIClassInfo aClassInfo, in nsIXPConnectJSObjectHolder aPrototype); */
  NS_IMETHOD RestoreWrappedNativePrototype(JSContext *aJSContext, JSObject *aScope, nsIClassInfo *aClassInfo, nsIXPConnectJSObjectHolder *aPrototype) = 0;

  /* [noscript] nsIXPConnectJSObjectHolder createSandbox (in JSContextPtr cx, in nsIPrincipal principal); */
  NS_IMETHOD CreateSandbox(JSContext *cx, nsIPrincipal *principal, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM) = 0;

  /* [noscript] jsval evalInSandboxObject (in AString source, in JSContextPtr cx, in nsIXPConnectJSObjectHolder sandbox, in boolean returnStringOnly); */
  NS_IMETHOD EvalInSandboxObject(const nsAString & source, JSContext *cx, nsIXPConnectJSObjectHolder *sandbox, bool returnStringOnly, JS::Value *_retval NS_OUTPARAM) = 0;

  /* [noscript] void addJSHolder (in voidPtr aHolder, in nsScriptObjectTracerPtr aTracer); */
  NS_IMETHOD AddJSHolder(void *aHolder, nsScriptObjectTracer *aTracer) = 0;

  /* [noscript] void removeJSHolder (in voidPtr aHolder); */
  NS_IMETHOD RemoveJSHolder(void *aHolder) = 0;

  /* [noscript,notxpcom] void noteJSContext (in JSContextPtr aJSContext, in nsCCTraversalCallbackRef aCb); */
  NS_IMETHOD_(void) NoteJSContext(JSContext *aJSContext, nsCycleCollectionTraversalCallback & aCb) = 0;

  /* void setReportAllJSExceptions (in boolean reportAllJSExceptions); */
  NS_IMETHOD SetReportAllJSExceptions(bool reportAllJSExceptions) = 0;

  /* void GarbageCollect (); */
  NS_IMETHOD GarbageCollect(void) = 0;

  /* [noscript,notxpcom] boolean defineDOMQuickStubs (in JSContextPtr cx, in JSObjectPtr proto, in PRUint32 flags, in PRUint32 interfaceCount, [array, size_is (interfaceCount)] in nsIIDPtr interfaceArray); */
  NS_IMETHOD_(bool) DefineDOMQuickStubs(JSContext *cx, JSObject *proto, PRUint32 flags, PRUint32 interfaceCount, const nsIID **interfaceArray) = 0;

      /**
     * Get the object principal for this wrapper.  Note that this may well end
     * up being null; in that case one should seek principals elsewhere.  Null
     * here does NOT indicate system principal or no principals at all, just
     * that this wrapper doesn't have an intrinsic one.
     */
    virtual nsIPrincipal* GetPrincipal(JSObject* obj,
                                       bool allowShortCircuit) const = 0;
    virtual char* DebugPrintJSStack(bool showArgs,
                                    bool showLocals,
                                    bool showThisProps) = 0;
  /* nsIXPConnectJSObjectHolder holdObject (in JSContextPtr aJSContext, in JSObjectPtr aObject); */
  NS_IMETHOD HoldObject(JSContext *aJSContext, JSObject *aObject, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM) = 0;

  /* [noscript,notxpcom] void getCaller (out JSContextPtr aJSContext, out JSObjectPtr aObject); */
  NS_IMETHOD_(void) GetCaller(JSContext **aJSContext NS_OUTPARAM, JSObject **aObject NS_OUTPARAM) = 0;

  /* [noscript] void setDebugModeWhenPossible (in boolean mode); */
  NS_IMETHOD SetDebugModeWhenPossible(bool mode) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXPConnect, NS_IXPCONNECT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXPCONNECT \
  NS_IMETHOD InitClasses(JSContext *aJSContext, JSObject *aGlobalJSObj); \
  NS_IMETHOD InitClassesWithNewWrappedGlobal(JSContext *aJSContext, nsISupports *aCOMObj, const nsIID & aIID, nsIPrincipal *aPrincipal, nsISupports *aExtraPtr, PRUint32 aFlags, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM); \
  NS_IMETHOD WrapNative(JSContext *aJSContext, JSObject *aScope, nsISupports *aCOMObj, const nsIID & aIID, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM); \
  NS_IMETHOD WrapNativeToJSVal(JSContext *aJSContext, JSObject *aScope, nsISupports *aCOMObj, nsWrapperCache *aCache, const nsIID *aIID, bool aAllowWrapper, JS::Value *aVal NS_OUTPARAM, nsIXPConnectJSObjectHolder * *aHolder NS_OUTPARAM); \
  NS_IMETHOD WrapJS(JSContext *aJSContext, JSObject *aJSObj, const nsIID & aIID, void **result NS_OUTPARAM); \
  NS_IMETHOD JSValToVariant(JSContext *cx, jsval *aJSVal, nsIVariant * *_retval NS_OUTPARAM); \
  NS_IMETHOD GetWrappedNativeOfJSObject(JSContext *aJSContext, JSObject *aJSObj, nsIXPConnectWrappedNative * *_retval NS_OUTPARAM); \
  NS_IMETHOD_(nsISupports *) GetNativeOfWrapper(JSContext *aJSContext, JSObject *aJSObj); \
  NS_IMETHOD GetJSObjectOfWrapper(JSContext *aJSContext, JSObject *aJSObj, JSObject **_retval NS_OUTPARAM); \
  NS_IMETHOD SetSecurityManagerForJSContext(JSContext *aJSContext, nsIXPCSecurityManager *aManager, PRUint16 flags); \
  NS_IMETHOD GetSecurityManagerForJSContext(JSContext *aJSContext, nsIXPCSecurityManager * *aManager NS_OUTPARAM, PRUint16 *flags NS_OUTPARAM); \
  NS_IMETHOD SetDefaultSecurityManager(nsIXPCSecurityManager *aManager, PRUint16 flags); \
  NS_IMETHOD GetDefaultSecurityManager(nsIXPCSecurityManager * *aManager NS_OUTPARAM, PRUint16 *flags NS_OUTPARAM); \
  NS_IMETHOD CreateStackFrameLocation(PRUint32 aLanguage, const char * aFilename, const char * aFunctionName, PRInt32 aLineNumber, nsIStackFrame *aCaller, nsIStackFrame * *_retval NS_OUTPARAM); \
  NS_IMETHOD SyncJSContexts(void); \
  NS_IMETHOD GetCurrentJSStack(nsIStackFrame * *aCurrentJSStack); \
  NS_IMETHOD GetCurrentNativeCallContext(nsAXPCNativeCallContext **aCurrentNativeCallContext); \
  NS_IMETHOD GetPendingException(nsIException * *aPendingException); \
  NS_IMETHOD SetPendingException(nsIException *aPendingException); \
  NS_IMETHOD DebugDump(PRInt16 depth); \
  NS_IMETHOD DebugDumpObject(nsISupports *aCOMObj, PRInt16 depth); \
  NS_IMETHOD DebugDumpJSStack(bool showArgs, bool showLocals, bool showThisProps); \
  NS_IMETHOD DebugDumpEvalInJSStackFrame(PRUint32 aFrameNumber, const char * aSourceText); \
  NS_IMETHOD WrapJSAggregatedToNative(nsISupports *aOuter, JSContext *aJSContext, JSObject *aJSObj, const nsIID & aIID, void **result NS_OUTPARAM); \
  NS_IMETHOD GetWrappedNativeOfNativeObject(JSContext *aJSContext, JSObject *aScope, nsISupports *aCOMObj, const nsIID & aIID, nsIXPConnectWrappedNative * *_retval NS_OUTPARAM); \
  NS_IMETHOD GetFunctionThisTranslator(const nsIID & aIID, nsIXPCFunctionThisTranslator * *_retval NS_OUTPARAM); \
  NS_IMETHOD SetFunctionThisTranslator(const nsIID & aIID, nsIXPCFunctionThisTranslator *aTranslator, nsIXPCFunctionThisTranslator * *_retval NS_OUTPARAM); \
  NS_IMETHOD ReparentWrappedNativeIfFound(JSContext *aJSContext, JSObject *aScope, JSObject *aNewParent, nsISupports *aCOMObj, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM); \
  NS_IMETHOD MoveWrappers(JSContext *aJSContext, JSObject *aOldScope, JSObject *aNewScope); \
  NS_IMETHOD ClearAllWrappedNativeSecurityPolicies(void); \
  NS_IMETHOD GetWrappedNativePrototype(JSContext *aJSContext, JSObject *aScope, nsIClassInfo *aClassInfo, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM); \
  NS_IMETHOD ReleaseJSContext(JSContext *aJSContext, bool noGC); \
  NS_IMETHOD VariantToJS(JSContext *ctx, JSObject *scope, nsIVariant *value, JS::Value *_retval NS_OUTPARAM); \
  NS_IMETHOD JSToVariant(JSContext *ctx, const JS::Value & value, nsIVariant * *_retval NS_OUTPARAM); \
  NS_IMETHOD RestoreWrappedNativePrototype(JSContext *aJSContext, JSObject *aScope, nsIClassInfo *aClassInfo, nsIXPConnectJSObjectHolder *aPrototype); \
  NS_IMETHOD CreateSandbox(JSContext *cx, nsIPrincipal *principal, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM); \
  NS_IMETHOD EvalInSandboxObject(const nsAString & source, JSContext *cx, nsIXPConnectJSObjectHolder *sandbox, bool returnStringOnly, JS::Value *_retval NS_OUTPARAM); \
  NS_IMETHOD AddJSHolder(void *aHolder, nsScriptObjectTracer *aTracer); \
  NS_IMETHOD RemoveJSHolder(void *aHolder); \
  NS_IMETHOD_(void) NoteJSContext(JSContext *aJSContext, nsCycleCollectionTraversalCallback & aCb); \
  NS_IMETHOD SetReportAllJSExceptions(bool reportAllJSExceptions); \
  NS_IMETHOD GarbageCollect(void); \
  NS_IMETHOD_(bool) DefineDOMQuickStubs(JSContext *cx, JSObject *proto, PRUint32 flags, PRUint32 interfaceCount, const nsIID **interfaceArray); \
  NS_IMETHOD HoldObject(JSContext *aJSContext, JSObject *aObject, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM); \
  NS_IMETHOD_(void) GetCaller(JSContext **aJSContext NS_OUTPARAM, JSObject **aObject NS_OUTPARAM); \
  NS_IMETHOD SetDebugModeWhenPossible(bool mode); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXPCONNECT(_to) \
  NS_IMETHOD InitClasses(JSContext *aJSContext, JSObject *aGlobalJSObj) { return _to InitClasses(aJSContext, aGlobalJSObj); } \
  NS_IMETHOD InitClassesWithNewWrappedGlobal(JSContext *aJSContext, nsISupports *aCOMObj, const nsIID & aIID, nsIPrincipal *aPrincipal, nsISupports *aExtraPtr, PRUint32 aFlags, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM) { return _to InitClassesWithNewWrappedGlobal(aJSContext, aCOMObj, aIID, aPrincipal, aExtraPtr, aFlags, _retval); } \
  NS_IMETHOD WrapNative(JSContext *aJSContext, JSObject *aScope, nsISupports *aCOMObj, const nsIID & aIID, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM) { return _to WrapNative(aJSContext, aScope, aCOMObj, aIID, _retval); } \
  NS_IMETHOD WrapNativeToJSVal(JSContext *aJSContext, JSObject *aScope, nsISupports *aCOMObj, nsWrapperCache *aCache, const nsIID *aIID, bool aAllowWrapper, JS::Value *aVal NS_OUTPARAM, nsIXPConnectJSObjectHolder * *aHolder NS_OUTPARAM) { return _to WrapNativeToJSVal(aJSContext, aScope, aCOMObj, aCache, aIID, aAllowWrapper, aVal, aHolder); } \
  NS_IMETHOD WrapJS(JSContext *aJSContext, JSObject *aJSObj, const nsIID & aIID, void **result NS_OUTPARAM) { return _to WrapJS(aJSContext, aJSObj, aIID, result); } \
  NS_IMETHOD JSValToVariant(JSContext *cx, jsval *aJSVal, nsIVariant * *_retval NS_OUTPARAM) { return _to JSValToVariant(cx, aJSVal, _retval); } \
  NS_IMETHOD GetWrappedNativeOfJSObject(JSContext *aJSContext, JSObject *aJSObj, nsIXPConnectWrappedNative * *_retval NS_OUTPARAM) { return _to GetWrappedNativeOfJSObject(aJSContext, aJSObj, _retval); } \
  NS_IMETHOD_(nsISupports *) GetNativeOfWrapper(JSContext *aJSContext, JSObject *aJSObj) { return _to GetNativeOfWrapper(aJSContext, aJSObj); } \
  NS_IMETHOD GetJSObjectOfWrapper(JSContext *aJSContext, JSObject *aJSObj, JSObject **_retval NS_OUTPARAM) { return _to GetJSObjectOfWrapper(aJSContext, aJSObj, _retval); } \
  NS_IMETHOD SetSecurityManagerForJSContext(JSContext *aJSContext, nsIXPCSecurityManager *aManager, PRUint16 flags) { return _to SetSecurityManagerForJSContext(aJSContext, aManager, flags); } \
  NS_IMETHOD GetSecurityManagerForJSContext(JSContext *aJSContext, nsIXPCSecurityManager * *aManager NS_OUTPARAM, PRUint16 *flags NS_OUTPARAM) { return _to GetSecurityManagerForJSContext(aJSContext, aManager, flags); } \
  NS_IMETHOD SetDefaultSecurityManager(nsIXPCSecurityManager *aManager, PRUint16 flags) { return _to SetDefaultSecurityManager(aManager, flags); } \
  NS_IMETHOD GetDefaultSecurityManager(nsIXPCSecurityManager * *aManager NS_OUTPARAM, PRUint16 *flags NS_OUTPARAM) { return _to GetDefaultSecurityManager(aManager, flags); } \
  NS_IMETHOD CreateStackFrameLocation(PRUint32 aLanguage, const char * aFilename, const char * aFunctionName, PRInt32 aLineNumber, nsIStackFrame *aCaller, nsIStackFrame * *_retval NS_OUTPARAM) { return _to CreateStackFrameLocation(aLanguage, aFilename, aFunctionName, aLineNumber, aCaller, _retval); } \
  NS_IMETHOD SyncJSContexts(void) { return _to SyncJSContexts(); } \
  NS_IMETHOD GetCurrentJSStack(nsIStackFrame * *aCurrentJSStack) { return _to GetCurrentJSStack(aCurrentJSStack); } \
  NS_IMETHOD GetCurrentNativeCallContext(nsAXPCNativeCallContext **aCurrentNativeCallContext) { return _to GetCurrentNativeCallContext(aCurrentNativeCallContext); } \
  NS_IMETHOD GetPendingException(nsIException * *aPendingException) { return _to GetPendingException(aPendingException); } \
  NS_IMETHOD SetPendingException(nsIException *aPendingException) { return _to SetPendingException(aPendingException); } \
  NS_IMETHOD DebugDump(PRInt16 depth) { return _to DebugDump(depth); } \
  NS_IMETHOD DebugDumpObject(nsISupports *aCOMObj, PRInt16 depth) { return _to DebugDumpObject(aCOMObj, depth); } \
  NS_IMETHOD DebugDumpJSStack(bool showArgs, bool showLocals, bool showThisProps) { return _to DebugDumpJSStack(showArgs, showLocals, showThisProps); } \
  NS_IMETHOD DebugDumpEvalInJSStackFrame(PRUint32 aFrameNumber, const char * aSourceText) { return _to DebugDumpEvalInJSStackFrame(aFrameNumber, aSourceText); } \
  NS_IMETHOD WrapJSAggregatedToNative(nsISupports *aOuter, JSContext *aJSContext, JSObject *aJSObj, const nsIID & aIID, void **result NS_OUTPARAM) { return _to WrapJSAggregatedToNative(aOuter, aJSContext, aJSObj, aIID, result); } \
  NS_IMETHOD GetWrappedNativeOfNativeObject(JSContext *aJSContext, JSObject *aScope, nsISupports *aCOMObj, const nsIID & aIID, nsIXPConnectWrappedNative * *_retval NS_OUTPARAM) { return _to GetWrappedNativeOfNativeObject(aJSContext, aScope, aCOMObj, aIID, _retval); } \
  NS_IMETHOD GetFunctionThisTranslator(const nsIID & aIID, nsIXPCFunctionThisTranslator * *_retval NS_OUTPARAM) { return _to GetFunctionThisTranslator(aIID, _retval); } \
  NS_IMETHOD SetFunctionThisTranslator(const nsIID & aIID, nsIXPCFunctionThisTranslator *aTranslator, nsIXPCFunctionThisTranslator * *_retval NS_OUTPARAM) { return _to SetFunctionThisTranslator(aIID, aTranslator, _retval); } \
  NS_IMETHOD ReparentWrappedNativeIfFound(JSContext *aJSContext, JSObject *aScope, JSObject *aNewParent, nsISupports *aCOMObj, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM) { return _to ReparentWrappedNativeIfFound(aJSContext, aScope, aNewParent, aCOMObj, _retval); } \
  NS_IMETHOD MoveWrappers(JSContext *aJSContext, JSObject *aOldScope, JSObject *aNewScope) { return _to MoveWrappers(aJSContext, aOldScope, aNewScope); } \
  NS_IMETHOD ClearAllWrappedNativeSecurityPolicies(void) { return _to ClearAllWrappedNativeSecurityPolicies(); } \
  NS_IMETHOD GetWrappedNativePrototype(JSContext *aJSContext, JSObject *aScope, nsIClassInfo *aClassInfo, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM) { return _to GetWrappedNativePrototype(aJSContext, aScope, aClassInfo, _retval); } \
  NS_IMETHOD ReleaseJSContext(JSContext *aJSContext, bool noGC) { return _to ReleaseJSContext(aJSContext, noGC); } \
  NS_IMETHOD VariantToJS(JSContext *ctx, JSObject *scope, nsIVariant *value, JS::Value *_retval NS_OUTPARAM) { return _to VariantToJS(ctx, scope, value, _retval); } \
  NS_IMETHOD JSToVariant(JSContext *ctx, const JS::Value & value, nsIVariant * *_retval NS_OUTPARAM) { return _to JSToVariant(ctx, value, _retval); } \
  NS_IMETHOD RestoreWrappedNativePrototype(JSContext *aJSContext, JSObject *aScope, nsIClassInfo *aClassInfo, nsIXPConnectJSObjectHolder *aPrototype) { return _to RestoreWrappedNativePrototype(aJSContext, aScope, aClassInfo, aPrototype); } \
  NS_IMETHOD CreateSandbox(JSContext *cx, nsIPrincipal *principal, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM) { return _to CreateSandbox(cx, principal, _retval); } \
  NS_IMETHOD EvalInSandboxObject(const nsAString & source, JSContext *cx, nsIXPConnectJSObjectHolder *sandbox, bool returnStringOnly, JS::Value *_retval NS_OUTPARAM) { return _to EvalInSandboxObject(source, cx, sandbox, returnStringOnly, _retval); } \
  NS_IMETHOD AddJSHolder(void *aHolder, nsScriptObjectTracer *aTracer) { return _to AddJSHolder(aHolder, aTracer); } \
  NS_IMETHOD RemoveJSHolder(void *aHolder) { return _to RemoveJSHolder(aHolder); } \
  NS_IMETHOD_(void) NoteJSContext(JSContext *aJSContext, nsCycleCollectionTraversalCallback & aCb) { return _to NoteJSContext(aJSContext, aCb); } \
  NS_IMETHOD SetReportAllJSExceptions(bool reportAllJSExceptions) { return _to SetReportAllJSExceptions(reportAllJSExceptions); } \
  NS_IMETHOD GarbageCollect(void) { return _to GarbageCollect(); } \
  NS_IMETHOD_(bool) DefineDOMQuickStubs(JSContext *cx, JSObject *proto, PRUint32 flags, PRUint32 interfaceCount, const nsIID **interfaceArray) { return _to DefineDOMQuickStubs(cx, proto, flags, interfaceCount, interfaceArray); } \
  NS_IMETHOD HoldObject(JSContext *aJSContext, JSObject *aObject, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM) { return _to HoldObject(aJSContext, aObject, _retval); } \
  NS_IMETHOD_(void) GetCaller(JSContext **aJSContext NS_OUTPARAM, JSObject **aObject NS_OUTPARAM) { return _to GetCaller(aJSContext, aObject); } \
  NS_IMETHOD SetDebugModeWhenPossible(bool mode) { return _to SetDebugModeWhenPossible(mode); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXPCONNECT(_to) \
  NS_IMETHOD InitClasses(JSContext *aJSContext, JSObject *aGlobalJSObj) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitClasses(aJSContext, aGlobalJSObj); } \
  NS_IMETHOD InitClassesWithNewWrappedGlobal(JSContext *aJSContext, nsISupports *aCOMObj, const nsIID & aIID, nsIPrincipal *aPrincipal, nsISupports *aExtraPtr, PRUint32 aFlags, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitClassesWithNewWrappedGlobal(aJSContext, aCOMObj, aIID, aPrincipal, aExtraPtr, aFlags, _retval); } \
  NS_IMETHOD WrapNative(JSContext *aJSContext, JSObject *aScope, nsISupports *aCOMObj, const nsIID & aIID, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->WrapNative(aJSContext, aScope, aCOMObj, aIID, _retval); } \
  NS_IMETHOD WrapNativeToJSVal(JSContext *aJSContext, JSObject *aScope, nsISupports *aCOMObj, nsWrapperCache *aCache, const nsIID *aIID, bool aAllowWrapper, JS::Value *aVal NS_OUTPARAM, nsIXPConnectJSObjectHolder * *aHolder NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->WrapNativeToJSVal(aJSContext, aScope, aCOMObj, aCache, aIID, aAllowWrapper, aVal, aHolder); } \
  NS_IMETHOD WrapJS(JSContext *aJSContext, JSObject *aJSObj, const nsIID & aIID, void **result NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->WrapJS(aJSContext, aJSObj, aIID, result); } \
  NS_IMETHOD JSValToVariant(JSContext *cx, jsval *aJSVal, nsIVariant * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->JSValToVariant(cx, aJSVal, _retval); } \
  NS_IMETHOD GetWrappedNativeOfJSObject(JSContext *aJSContext, JSObject *aJSObj, nsIXPConnectWrappedNative * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWrappedNativeOfJSObject(aJSContext, aJSObj, _retval); } \
  NS_IMETHOD_(nsISupports *) GetNativeOfWrapper(JSContext *aJSContext, JSObject *aJSObj) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNativeOfWrapper(aJSContext, aJSObj); } \
  NS_IMETHOD GetJSObjectOfWrapper(JSContext *aJSContext, JSObject *aJSObj, JSObject **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJSObjectOfWrapper(aJSContext, aJSObj, _retval); } \
  NS_IMETHOD SetSecurityManagerForJSContext(JSContext *aJSContext, nsIXPCSecurityManager *aManager, PRUint16 flags) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSecurityManagerForJSContext(aJSContext, aManager, flags); } \
  NS_IMETHOD GetSecurityManagerForJSContext(JSContext *aJSContext, nsIXPCSecurityManager * *aManager NS_OUTPARAM, PRUint16 *flags NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSecurityManagerForJSContext(aJSContext, aManager, flags); } \
  NS_IMETHOD SetDefaultSecurityManager(nsIXPCSecurityManager *aManager, PRUint16 flags) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDefaultSecurityManager(aManager, flags); } \
  NS_IMETHOD GetDefaultSecurityManager(nsIXPCSecurityManager * *aManager NS_OUTPARAM, PRUint16 *flags NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultSecurityManager(aManager, flags); } \
  NS_IMETHOD CreateStackFrameLocation(PRUint32 aLanguage, const char * aFilename, const char * aFunctionName, PRInt32 aLineNumber, nsIStackFrame *aCaller, nsIStackFrame * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateStackFrameLocation(aLanguage, aFilename, aFunctionName, aLineNumber, aCaller, _retval); } \
  NS_IMETHOD SyncJSContexts(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SyncJSContexts(); } \
  NS_IMETHOD GetCurrentJSStack(nsIStackFrame * *aCurrentJSStack) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentJSStack(aCurrentJSStack); } \
  NS_IMETHOD GetCurrentNativeCallContext(nsAXPCNativeCallContext **aCurrentNativeCallContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentNativeCallContext(aCurrentNativeCallContext); } \
  NS_IMETHOD GetPendingException(nsIException * *aPendingException) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPendingException(aPendingException); } \
  NS_IMETHOD SetPendingException(nsIException *aPendingException) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPendingException(aPendingException); } \
  NS_IMETHOD DebugDump(PRInt16 depth) { return !_to ? NS_ERROR_NULL_POINTER : _to->DebugDump(depth); } \
  NS_IMETHOD DebugDumpObject(nsISupports *aCOMObj, PRInt16 depth) { return !_to ? NS_ERROR_NULL_POINTER : _to->DebugDumpObject(aCOMObj, depth); } \
  NS_IMETHOD DebugDumpJSStack(bool showArgs, bool showLocals, bool showThisProps) { return !_to ? NS_ERROR_NULL_POINTER : _to->DebugDumpJSStack(showArgs, showLocals, showThisProps); } \
  NS_IMETHOD DebugDumpEvalInJSStackFrame(PRUint32 aFrameNumber, const char * aSourceText) { return !_to ? NS_ERROR_NULL_POINTER : _to->DebugDumpEvalInJSStackFrame(aFrameNumber, aSourceText); } \
  NS_IMETHOD WrapJSAggregatedToNative(nsISupports *aOuter, JSContext *aJSContext, JSObject *aJSObj, const nsIID & aIID, void **result NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->WrapJSAggregatedToNative(aOuter, aJSContext, aJSObj, aIID, result); } \
  NS_IMETHOD GetWrappedNativeOfNativeObject(JSContext *aJSContext, JSObject *aScope, nsISupports *aCOMObj, const nsIID & aIID, nsIXPConnectWrappedNative * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWrappedNativeOfNativeObject(aJSContext, aScope, aCOMObj, aIID, _retval); } \
  NS_IMETHOD GetFunctionThisTranslator(const nsIID & aIID, nsIXPCFunctionThisTranslator * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFunctionThisTranslator(aIID, _retval); } \
  NS_IMETHOD SetFunctionThisTranslator(const nsIID & aIID, nsIXPCFunctionThisTranslator *aTranslator, nsIXPCFunctionThisTranslator * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFunctionThisTranslator(aIID, aTranslator, _retval); } \
  NS_IMETHOD ReparentWrappedNativeIfFound(JSContext *aJSContext, JSObject *aScope, JSObject *aNewParent, nsISupports *aCOMObj, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReparentWrappedNativeIfFound(aJSContext, aScope, aNewParent, aCOMObj, _retval); } \
  NS_IMETHOD MoveWrappers(JSContext *aJSContext, JSObject *aOldScope, JSObject *aNewScope) { return !_to ? NS_ERROR_NULL_POINTER : _to->MoveWrappers(aJSContext, aOldScope, aNewScope); } \
  NS_IMETHOD ClearAllWrappedNativeSecurityPolicies(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearAllWrappedNativeSecurityPolicies(); } \
  NS_IMETHOD GetWrappedNativePrototype(JSContext *aJSContext, JSObject *aScope, nsIClassInfo *aClassInfo, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWrappedNativePrototype(aJSContext, aScope, aClassInfo, _retval); } \
  NS_IMETHOD ReleaseJSContext(JSContext *aJSContext, bool noGC) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReleaseJSContext(aJSContext, noGC); } \
  NS_IMETHOD VariantToJS(JSContext *ctx, JSObject *scope, nsIVariant *value, JS::Value *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->VariantToJS(ctx, scope, value, _retval); } \
  NS_IMETHOD JSToVariant(JSContext *ctx, const JS::Value & value, nsIVariant * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->JSToVariant(ctx, value, _retval); } \
  NS_IMETHOD RestoreWrappedNativePrototype(JSContext *aJSContext, JSObject *aScope, nsIClassInfo *aClassInfo, nsIXPConnectJSObjectHolder *aPrototype) { return !_to ? NS_ERROR_NULL_POINTER : _to->RestoreWrappedNativePrototype(aJSContext, aScope, aClassInfo, aPrototype); } \
  NS_IMETHOD CreateSandbox(JSContext *cx, nsIPrincipal *principal, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateSandbox(cx, principal, _retval); } \
  NS_IMETHOD EvalInSandboxObject(const nsAString & source, JSContext *cx, nsIXPConnectJSObjectHolder *sandbox, bool returnStringOnly, JS::Value *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->EvalInSandboxObject(source, cx, sandbox, returnStringOnly, _retval); } \
  NS_IMETHOD AddJSHolder(void *aHolder, nsScriptObjectTracer *aTracer) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddJSHolder(aHolder, aTracer); } \
  NS_IMETHOD RemoveJSHolder(void *aHolder) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveJSHolder(aHolder); } \
  NS_IMETHOD_(void) NoteJSContext(JSContext *aJSContext, nsCycleCollectionTraversalCallback & aCb) { return !_to ? NS_ERROR_NULL_POINTER : _to->NoteJSContext(aJSContext, aCb); } \
  NS_IMETHOD SetReportAllJSExceptions(bool reportAllJSExceptions) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetReportAllJSExceptions(reportAllJSExceptions); } \
  NS_IMETHOD GarbageCollect(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->GarbageCollect(); } \
  NS_IMETHOD_(bool) DefineDOMQuickStubs(JSContext *cx, JSObject *proto, PRUint32 flags, PRUint32 interfaceCount, const nsIID **interfaceArray) { return !_to ? NS_ERROR_NULL_POINTER : _to->DefineDOMQuickStubs(cx, proto, flags, interfaceCount, interfaceArray); } \
  NS_IMETHOD HoldObject(JSContext *aJSContext, JSObject *aObject, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->HoldObject(aJSContext, aObject, _retval); } \
  NS_IMETHOD_(void) GetCaller(JSContext **aJSContext NS_OUTPARAM, JSObject **aObject NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCaller(aJSContext, aObject); } \
  NS_IMETHOD SetDebugModeWhenPossible(bool mode) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDebugModeWhenPossible(mode); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXPConnect : public nsIXPConnect
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXPCONNECT

  nsXPConnect();

private:
  ~nsXPConnect();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsXPConnect, nsIXPConnect)

nsXPConnect::nsXPConnect()
{
  /* member initializers and constructor code */
}

nsXPConnect::~nsXPConnect()
{
  /* destructor code */
}

/* void initClasses (in JSContextPtr aJSContext, in JSObjectPtr aGlobalJSObj); */
NS_IMETHODIMP nsXPConnect::InitClasses(JSContext *aJSContext, JSObject *aGlobalJSObj)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIXPConnectJSObjectHolder initClassesWithNewWrappedGlobal (in JSContextPtr aJSContext, in nsISupports aCOMObj, in nsIIDRef aIID, in nsIPrincipal aPrincipal, in nsISupports aExtraPtr, in PRUint32 aFlags); */
NS_IMETHODIMP nsXPConnect::InitClassesWithNewWrappedGlobal(JSContext *aJSContext, nsISupports *aCOMObj, const nsIID & aIID, nsIPrincipal *aPrincipal, nsISupports *aExtraPtr, PRUint32 aFlags, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIXPConnectJSObjectHolder wrapNative (in JSContextPtr aJSContext, in JSObjectPtr aScope, in nsISupports aCOMObj, in nsIIDRef aIID); */
NS_IMETHODIMP nsXPConnect::WrapNative(JSContext *aJSContext, JSObject *aScope, nsISupports *aCOMObj, const nsIID & aIID, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void wrapNativeToJSVal (in JSContextPtr aJSContext, in JSObjectPtr aScope, in nsISupports aCOMObj, in nsWrapperCachePtr aCache, in nsIIDPtr aIID, in boolean aAllowWrapper, out jsval aVal, out nsIXPConnectJSObjectHolder aHolder); */
NS_IMETHODIMP nsXPConnect::WrapNativeToJSVal(JSContext *aJSContext, JSObject *aScope, nsISupports *aCOMObj, nsWrapperCache *aCache, const nsIID *aIID, bool aAllowWrapper, JS::Value *aVal NS_OUTPARAM, nsIXPConnectJSObjectHolder * *aHolder NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void wrapJS (in JSContextPtr aJSContext, in JSObjectPtr aJSObj, in nsIIDRef aIID, [iid_is (aIID), retval] out nsQIResult result); */
NS_IMETHODIMP nsXPConnect::WrapJS(JSContext *aJSContext, JSObject *aJSObj, const nsIID & aIID, void **result NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIVariant jSValToVariant (in JSContextPtr cx, in JSValPtr aJSVal); */
NS_IMETHODIMP nsXPConnect::JSValToVariant(JSContext *cx, jsval *aJSVal, nsIVariant * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIXPConnectWrappedNative getWrappedNativeOfJSObject (in JSContextPtr aJSContext, in JSObjectPtr aJSObj); */
NS_IMETHODIMP nsXPConnect::GetWrappedNativeOfJSObject(JSContext *aJSContext, JSObject *aJSObj, nsIXPConnectWrappedNative * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] nsISupports getNativeOfWrapper (in JSContextPtr aJSContext, in JSObjectPtr aJSObj); */
NS_IMETHODIMP_(nsISupports *) nsXPConnect::GetNativeOfWrapper(JSContext *aJSContext, JSObject *aJSObj)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* JSObjectPtr getJSObjectOfWrapper (in JSContextPtr aJSContext, in JSObjectPtr aJSObj); */
NS_IMETHODIMP nsXPConnect::GetJSObjectOfWrapper(JSContext *aJSContext, JSObject *aJSObj, JSObject **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setSecurityManagerForJSContext (in JSContextPtr aJSContext, in nsIXPCSecurityManager aManager, in PRUint16 flags); */
NS_IMETHODIMP nsXPConnect::SetSecurityManagerForJSContext(JSContext *aJSContext, nsIXPCSecurityManager *aManager, PRUint16 flags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getSecurityManagerForJSContext (in JSContextPtr aJSContext, out nsIXPCSecurityManager aManager, out PRUint16 flags); */
NS_IMETHODIMP nsXPConnect::GetSecurityManagerForJSContext(JSContext *aJSContext, nsIXPCSecurityManager * *aManager NS_OUTPARAM, PRUint16 *flags NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setDefaultSecurityManager (in nsIXPCSecurityManager aManager, in PRUint16 flags); */
NS_IMETHODIMP nsXPConnect::SetDefaultSecurityManager(nsIXPCSecurityManager *aManager, PRUint16 flags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getDefaultSecurityManager (out nsIXPCSecurityManager aManager, out PRUint16 flags); */
NS_IMETHODIMP nsXPConnect::GetDefaultSecurityManager(nsIXPCSecurityManager * *aManager NS_OUTPARAM, PRUint16 *flags NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIStackFrame createStackFrameLocation (in PRUint32 aLanguage, in string aFilename, in string aFunctionName, in PRInt32 aLineNumber, in nsIStackFrame aCaller); */
NS_IMETHODIMP nsXPConnect::CreateStackFrameLocation(PRUint32 aLanguage, const char * aFilename, const char * aFunctionName, PRInt32 aLineNumber, nsIStackFrame *aCaller, nsIStackFrame * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [deprecated] void syncJSContexts (); */
NS_IMETHODIMP nsXPConnect::SyncJSContexts()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIStackFrame CurrentJSStack; */
NS_IMETHODIMP nsXPConnect::GetCurrentJSStack(nsIStackFrame * *aCurrentJSStack)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsAXPCNativeCallContextPtr CurrentNativeCallContext; */
NS_IMETHODIMP nsXPConnect::GetCurrentNativeCallContext(nsAXPCNativeCallContext **aCurrentNativeCallContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIException PendingException; */
NS_IMETHODIMP nsXPConnect::GetPendingException(nsIException * *aPendingException)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXPConnect::SetPendingException(nsIException *aPendingException)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void debugDump (in short depth); */
NS_IMETHODIMP nsXPConnect::DebugDump(PRInt16 depth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void debugDumpObject (in nsISupports aCOMObj, in short depth); */
NS_IMETHODIMP nsXPConnect::DebugDumpObject(nsISupports *aCOMObj, PRInt16 depth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void debugDumpJSStack (in boolean showArgs, in boolean showLocals, in boolean showThisProps); */
NS_IMETHODIMP nsXPConnect::DebugDumpJSStack(bool showArgs, bool showLocals, bool showThisProps)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void debugDumpEvalInJSStackFrame (in PRUint32 aFrameNumber, in string aSourceText); */
NS_IMETHODIMP nsXPConnect::DebugDumpEvalInJSStackFrame(PRUint32 aFrameNumber, const char * aSourceText)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void wrapJSAggregatedToNative (in nsISupports aOuter, in JSContextPtr aJSContext, in JSObjectPtr aJSObj, in nsIIDRef aIID, [iid_is (aIID), retval] out nsQIResult result); */
NS_IMETHODIMP nsXPConnect::WrapJSAggregatedToNative(nsISupports *aOuter, JSContext *aJSContext, JSObject *aJSObj, const nsIID & aIID, void **result NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIXPConnectWrappedNative getWrappedNativeOfNativeObject (in JSContextPtr aJSContext, in JSObjectPtr aScope, in nsISupports aCOMObj, in nsIIDRef aIID); */
NS_IMETHODIMP nsXPConnect::GetWrappedNativeOfNativeObject(JSContext *aJSContext, JSObject *aScope, nsISupports *aCOMObj, const nsIID & aIID, nsIXPConnectWrappedNative * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIXPCFunctionThisTranslator getFunctionThisTranslator (in nsIIDRef aIID); */
NS_IMETHODIMP nsXPConnect::GetFunctionThisTranslator(const nsIID & aIID, nsIXPCFunctionThisTranslator * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIXPCFunctionThisTranslator setFunctionThisTranslator (in nsIIDRef aIID, in nsIXPCFunctionThisTranslator aTranslator); */
NS_IMETHODIMP nsXPConnect::SetFunctionThisTranslator(const nsIID & aIID, nsIXPCFunctionThisTranslator *aTranslator, nsIXPCFunctionThisTranslator * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIXPConnectJSObjectHolder reparentWrappedNativeIfFound (in JSContextPtr aJSContext, in JSObjectPtr aScope, in JSObjectPtr aNewParent, in nsISupports aCOMObj); */
NS_IMETHODIMP nsXPConnect::ReparentWrappedNativeIfFound(JSContext *aJSContext, JSObject *aScope, JSObject *aNewParent, nsISupports *aCOMObj, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void moveWrappers (in JSContextPtr aJSContext, in JSObjectPtr aOldScope, in JSObjectPtr aNewScope); */
NS_IMETHODIMP nsXPConnect::MoveWrappers(JSContext *aJSContext, JSObject *aOldScope, JSObject *aNewScope)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearAllWrappedNativeSecurityPolicies (); */
NS_IMETHODIMP nsXPConnect::ClearAllWrappedNativeSecurityPolicies()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIXPConnectJSObjectHolder getWrappedNativePrototype (in JSContextPtr aJSContext, in JSObjectPtr aScope, in nsIClassInfo aClassInfo); */
NS_IMETHODIMP nsXPConnect::GetWrappedNativePrototype(JSContext *aJSContext, JSObject *aScope, nsIClassInfo *aClassInfo, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void releaseJSContext (in JSContextPtr aJSContext, in boolean noGC); */
NS_IMETHODIMP nsXPConnect::ReleaseJSContext(JSContext *aJSContext, bool noGC)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* jsval variantToJS (in JSContextPtr ctx, in JSObjectPtr scope, in nsIVariant value); */
NS_IMETHODIMP nsXPConnect::VariantToJS(JSContext *ctx, JSObject *scope, nsIVariant *value, JS::Value *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIVariant JSToVariant (in JSContextPtr ctx, in jsval value); */
NS_IMETHODIMP nsXPConnect::JSToVariant(JSContext *ctx, const JS::Value & value, nsIVariant * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void restoreWrappedNativePrototype (in JSContextPtr aJSContext, in JSObjectPtr aScope, in nsIClassInfo aClassInfo, in nsIXPConnectJSObjectHolder aPrototype); */
NS_IMETHODIMP nsXPConnect::RestoreWrappedNativePrototype(JSContext *aJSContext, JSObject *aScope, nsIClassInfo *aClassInfo, nsIXPConnectJSObjectHolder *aPrototype)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIXPConnectJSObjectHolder createSandbox (in JSContextPtr cx, in nsIPrincipal principal); */
NS_IMETHODIMP nsXPConnect::CreateSandbox(JSContext *cx, nsIPrincipal *principal, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] jsval evalInSandboxObject (in AString source, in JSContextPtr cx, in nsIXPConnectJSObjectHolder sandbox, in boolean returnStringOnly); */
NS_IMETHODIMP nsXPConnect::EvalInSandboxObject(const nsAString & source, JSContext *cx, nsIXPConnectJSObjectHolder *sandbox, bool returnStringOnly, JS::Value *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void addJSHolder (in voidPtr aHolder, in nsScriptObjectTracerPtr aTracer); */
NS_IMETHODIMP nsXPConnect::AddJSHolder(void *aHolder, nsScriptObjectTracer *aTracer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void removeJSHolder (in voidPtr aHolder); */
NS_IMETHODIMP nsXPConnect::RemoveJSHolder(void *aHolder)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] void noteJSContext (in JSContextPtr aJSContext, in nsCCTraversalCallbackRef aCb); */
NS_IMETHODIMP_(void) nsXPConnect::NoteJSContext(JSContext *aJSContext, nsCycleCollectionTraversalCallback & aCb)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setReportAllJSExceptions (in boolean reportAllJSExceptions); */
NS_IMETHODIMP nsXPConnect::SetReportAllJSExceptions(bool reportAllJSExceptions)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GarbageCollect (); */
NS_IMETHODIMP nsXPConnect::GarbageCollect()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] boolean defineDOMQuickStubs (in JSContextPtr cx, in JSObjectPtr proto, in PRUint32 flags, in PRUint32 interfaceCount, [array, size_is (interfaceCount)] in nsIIDPtr interfaceArray); */
NS_IMETHODIMP_(bool) nsXPConnect::DefineDOMQuickStubs(JSContext *cx, JSObject *proto, PRUint32 flags, PRUint32 interfaceCount, const nsIID **interfaceArray)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIXPConnectJSObjectHolder holdObject (in JSContextPtr aJSContext, in JSObjectPtr aObject); */
NS_IMETHODIMP nsXPConnect::HoldObject(JSContext *aJSContext, JSObject *aObject, nsIXPConnectJSObjectHolder * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] void getCaller (out JSContextPtr aJSContext, out JSObjectPtr aObject); */
NS_IMETHODIMP_(void) nsXPConnect::GetCaller(JSContext **aJSContext NS_OUTPARAM, JSObject **aObject NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void setDebugModeWhenPossible (in boolean mode); */
NS_IMETHODIMP nsXPConnect::SetDebugModeWhenPossible(bool mode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIXPConnect_MOZILLA_10_BRANCH */
#define NS_IXPCONNECT_MOZILLA_10_BRANCH_IID_STR "44bf9047-914a-4f47-a1ec-e417927bacd1"

#define NS_IXPCONNECT_MOZILLA_10_BRANCH_IID \
  {0x44bf9047, 0x914a, 0x4f47, \
    { 0xa1, 0xec, 0xe4, 0x17, 0x92, 0x7b, 0xac, 0xd1 }}

class NS_NO_VTABLE nsIXPConnect_MOZILLA_10_BRANCH : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXPCONNECT_MOZILLA_10_BRANCH_IID)

  /* [noscript] void setDebugModeWhenPossible (in boolean mode, in boolean allowSyncDisable); */
  NS_IMETHOD SetDebugModeWhenPossible(bool mode, bool allowSyncDisable) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXPConnect_MOZILLA_10_BRANCH, NS_IXPCONNECT_MOZILLA_10_BRANCH_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXPCONNECT_MOZILLA_10_BRANCH \
  NS_IMETHOD SetDebugModeWhenPossible(bool mode, bool allowSyncDisable); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXPCONNECT_MOZILLA_10_BRANCH(_to) \
  NS_IMETHOD SetDebugModeWhenPossible(bool mode, bool allowSyncDisable) { return _to SetDebugModeWhenPossible(mode, allowSyncDisable); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXPCONNECT_MOZILLA_10_BRANCH(_to) \
  NS_IMETHOD SetDebugModeWhenPossible(bool mode, bool allowSyncDisable) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDebugModeWhenPossible(mode, allowSyncDisable); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXPConnect_MOZILLA_10_BRANCH : public nsIXPConnect_MOZILLA_10_BRANCH
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXPCONNECT_MOZILLA_10_BRANCH

  nsXPConnect_MOZILLA_10_BRANCH();

private:
  ~nsXPConnect_MOZILLA_10_BRANCH();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsXPConnect_MOZILLA_10_BRANCH, nsIXPConnect_MOZILLA_10_BRANCH)

nsXPConnect_MOZILLA_10_BRANCH::nsXPConnect_MOZILLA_10_BRANCH()
{
  /* member initializers and constructor code */
}

nsXPConnect_MOZILLA_10_BRANCH::~nsXPConnect_MOZILLA_10_BRANCH()
{
  /* destructor code */
}

/* [noscript] void setDebugModeWhenPossible (in boolean mode, in boolean allowSyncDisable); */
NS_IMETHODIMP nsXPConnect_MOZILLA_10_BRANCH::SetDebugModeWhenPossible(bool mode, bool allowSyncDisable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIXPConnect_h__ */
