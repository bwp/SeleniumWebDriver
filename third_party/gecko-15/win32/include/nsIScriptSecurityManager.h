/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/caps/idl/nsIScriptSecurityManager.idl
 */

#ifndef __gen_nsIScriptSecurityManager_h__
#define __gen_nsIScriptSecurityManager_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIPrincipal_h__
#include "nsIPrincipal.h"
#endif

#ifndef __gen_nsIXPCSecurityManager_h__
#include "nsIXPCSecurityManager.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIChannel; /* forward declaration */


/* starting interface:    nsIScriptSecurityManager */
#define NS_ISCRIPTSECURITYMANAGER_IID_STR "3708aa92-e2d9-4fd1-9e46-edfa3eb5ebf5"

#define NS_ISCRIPTSECURITYMANAGER_IID \
  {0x3708aa92, 0xe2d9, 0x4fd1, \
    { 0x9e, 0x46, 0xed, 0xfa, 0x3e, 0xb5, 0xeb, 0xf5 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIScriptSecurityManager : public nsIXPCSecurityManager {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISCRIPTSECURITYMANAGER_IID)

  /* [noscript] void checkPropertyAccess (in JSContextPtr aJSContext, in JSObjectPtr aJSObject, in string aClassName, in jsid aProperty, in PRUint32 aAction); */
  NS_IMETHOD CheckPropertyAccess(JSContext *aJSContext, JSObject *aJSObject, const char * aClassName, jsid aProperty, PRUint32 aAction) = 0;

  /* [noscript] void checkLoadURIFromScript (in JSContextPtr cx, in nsIURI uri); */
  NS_IMETHOD CheckLoadURIFromScript(JSContext *cx, nsIURI *uri) = 0;

  enum {
    STANDARD = 0U,
    LOAD_IS_AUTOMATIC_DOCUMENT_REPLACEMENT = 1U,
    ALLOW_CHROME = 2U,
    DISALLOW_INHERIT_PRINCIPAL = 4U,
    DISALLOW_SCRIPT_OR_DATA = 4U,
    DISALLOW_SCRIPT = 8U
  };

  /* void checkLoadURIWithPrincipal (in nsIPrincipal aPrincipal, in nsIURI uri, in unsigned long flags); */
  NS_SCRIPTABLE NS_IMETHOD CheckLoadURIWithPrincipal(nsIPrincipal *aPrincipal, nsIURI *uri, PRUint32 flags) = 0;

  /* [deprecated] void checkLoadURI (in nsIURI from, in nsIURI uri, in unsigned long flags); */
  NS_SCRIPTABLE NS_IMETHOD CheckLoadURI(nsIURI *from, nsIURI *uri, PRUint32 flags) = 0;

  /* void checkLoadURIStrWithPrincipal (in nsIPrincipal aPrincipal, in AUTF8String uri, in unsigned long flags); */
  NS_SCRIPTABLE NS_IMETHOD CheckLoadURIStrWithPrincipal(nsIPrincipal *aPrincipal, const nsACString & uri, PRUint32 flags) = 0;

  /* [deprecated] void checkLoadURIStr (in AUTF8String from, in AUTF8String uri, in unsigned long flags); */
  NS_SCRIPTABLE NS_IMETHOD CheckLoadURIStr(const nsACString & from, const nsACString & uri, PRUint32 flags) = 0;

  /* [noscript] void checkFunctionAccess (in JSContextPtr cx, in voidPtr funObj, in voidPtr targetObj); */
  NS_IMETHOD CheckFunctionAccess(JSContext *cx, void *funObj, void *targetObj) = 0;

  /* [noscript] boolean canExecuteScripts (in JSContextPtr cx, in nsIPrincipal principal); */
  NS_IMETHOD CanExecuteScripts(JSContext *cx, nsIPrincipal *principal, bool *_retval NS_OUTPARAM) = 0;

  /* [noscript] nsIPrincipal getSubjectPrincipal (); */
  NS_IMETHOD GetSubjectPrincipal(nsIPrincipal * *_retval NS_OUTPARAM) = 0;

  /* nsIPrincipal getSystemPrincipal (); */
  NS_SCRIPTABLE NS_IMETHOD GetSystemPrincipal(nsIPrincipal * *_retval NS_OUTPARAM) = 0;

  /* [noscript] nsIPrincipal getCertificatePrincipal (in AUTF8String aCertFingerprint, in AUTF8String aSubjectName, in AUTF8String aPrettyName, in nsISupports aCert, in nsIURI aURI); */
  NS_IMETHOD GetCertificatePrincipal(const nsACString & aCertFingerprint, const nsACString & aSubjectName, const nsACString & aPrettyName, nsISupports *aCert, nsIURI *aURI, nsIPrincipal * *_retval NS_OUTPARAM) = 0;

  /* nsIPrincipal getCodebasePrincipal (in nsIURI aURI); */
  NS_SCRIPTABLE NS_IMETHOD GetCodebasePrincipal(nsIURI *aURI, nsIPrincipal * *_retval NS_OUTPARAM) = 0;

  /* [noscript] short requestCapability (in nsIPrincipal principal, in string capability); */
  NS_IMETHOD RequestCapability(nsIPrincipal *principal, const char * capability, PRInt16 *_retval NS_OUTPARAM) = 0;

  /* boolean isCapabilityEnabled (in string capability); */
  NS_SCRIPTABLE NS_IMETHOD IsCapabilityEnabled(const char * capability, bool *_retval NS_OUTPARAM) = 0;

  /* void enableCapability (in string capability); */
  NS_SCRIPTABLE NS_IMETHOD EnableCapability(const char * capability) = 0;

  /* [noscript] nsIPrincipal getObjectPrincipal (in JSContextPtr cx, in JSObjectPtr obj); */
  NS_IMETHOD GetObjectPrincipal(JSContext *cx, JSObject *obj, nsIPrincipal * *_retval NS_OUTPARAM) = 0;

  /* [noscript] boolean subjectPrincipalIsSystem (); */
  NS_IMETHOD SubjectPrincipalIsSystem(bool *_retval NS_OUTPARAM) = 0;

  /* [noscript] void checkSameOrigin (in JSContextPtr aJSContext, in nsIURI aTargetURI); */
  NS_IMETHOD CheckSameOrigin(JSContext *aJSContext, nsIURI *aTargetURI) = 0;

  /* void checkSameOriginURI (in nsIURI aSourceURI, in nsIURI aTargetURI, in boolean reportError); */
  NS_SCRIPTABLE NS_IMETHOD CheckSameOriginURI(nsIURI *aSourceURI, nsIURI *aTargetURI, bool reportError) = 0;

  /* [noscript] nsIPrincipal getPrincipalFromContext (in JSContextPtr cx); */
  NS_IMETHOD GetPrincipalFromContext(JSContext *cx, nsIPrincipal * *_retval NS_OUTPARAM) = 0;

  /* nsIPrincipal getChannelPrincipal (in nsIChannel aChannel); */
  NS_SCRIPTABLE NS_IMETHOD GetChannelPrincipal(nsIChannel *aChannel, nsIPrincipal * *_retval NS_OUTPARAM) = 0;

  /* boolean isSystemPrincipal (in nsIPrincipal aPrincipal); */
  NS_SCRIPTABLE NS_IMETHOD IsSystemPrincipal(nsIPrincipal *aPrincipal, bool *_retval NS_OUTPARAM) = 0;

  /* [noscript,notxpcom] nsIPrincipal getCxSubjectPrincipal (in JSContextPtr cx); */
  NS_IMETHOD_(nsIPrincipal *) GetCxSubjectPrincipal(JSContext *cx) = 0;

  /* [noscript,notxpcom] nsIPrincipal getCxSubjectPrincipalAndFrame (in JSContextPtr cx, out JSStackFramePtr fp); */
  NS_IMETHOD_(nsIPrincipal *) GetCxSubjectPrincipalAndFrame(JSContext *cx, JSStackFrame **fp NS_OUTPARAM) = 0;

  /* [noscript] void pushContextPrincipal (in JSContextPtr cx, in JSStackFramePtr fp, in nsIPrincipal principal); */
  NS_IMETHOD PushContextPrincipal(JSContext *cx, JSStackFrame *fp, nsIPrincipal *principal) = 0;

  /* [noscript] void popContextPrincipal (in JSContextPtr cx); */
  NS_IMETHOD PopContextPrincipal(JSContext *cx) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIScriptSecurityManager, NS_ISCRIPTSECURITYMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISCRIPTSECURITYMANAGER \
  NS_IMETHOD CheckPropertyAccess(JSContext *aJSContext, JSObject *aJSObject, const char * aClassName, jsid aProperty, PRUint32 aAction); \
  NS_IMETHOD CheckLoadURIFromScript(JSContext *cx, nsIURI *uri); \
  NS_SCRIPTABLE NS_IMETHOD CheckLoadURIWithPrincipal(nsIPrincipal *aPrincipal, nsIURI *uri, PRUint32 flags); \
  NS_SCRIPTABLE NS_IMETHOD CheckLoadURI(nsIURI *from, nsIURI *uri, PRUint32 flags); \
  NS_SCRIPTABLE NS_IMETHOD CheckLoadURIStrWithPrincipal(nsIPrincipal *aPrincipal, const nsACString & uri, PRUint32 flags); \
  NS_SCRIPTABLE NS_IMETHOD CheckLoadURIStr(const nsACString & from, const nsACString & uri, PRUint32 flags); \
  NS_IMETHOD CheckFunctionAccess(JSContext *cx, void *funObj, void *targetObj); \
  NS_IMETHOD CanExecuteScripts(JSContext *cx, nsIPrincipal *principal, bool *_retval NS_OUTPARAM); \
  NS_IMETHOD GetSubjectPrincipal(nsIPrincipal * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetSystemPrincipal(nsIPrincipal * *_retval NS_OUTPARAM); \
  NS_IMETHOD GetCertificatePrincipal(const nsACString & aCertFingerprint, const nsACString & aSubjectName, const nsACString & aPrettyName, nsISupports *aCert, nsIURI *aURI, nsIPrincipal * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCodebasePrincipal(nsIURI *aURI, nsIPrincipal * *_retval NS_OUTPARAM); \
  NS_IMETHOD RequestCapability(nsIPrincipal *principal, const char * capability, PRInt16 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsCapabilityEnabled(const char * capability, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD EnableCapability(const char * capability); \
  NS_IMETHOD GetObjectPrincipal(JSContext *cx, JSObject *obj, nsIPrincipal * *_retval NS_OUTPARAM); \
  NS_IMETHOD SubjectPrincipalIsSystem(bool *_retval NS_OUTPARAM); \
  NS_IMETHOD CheckSameOrigin(JSContext *aJSContext, nsIURI *aTargetURI); \
  NS_SCRIPTABLE NS_IMETHOD CheckSameOriginURI(nsIURI *aSourceURI, nsIURI *aTargetURI, bool reportError); \
  NS_IMETHOD GetPrincipalFromContext(JSContext *cx, nsIPrincipal * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetChannelPrincipal(nsIChannel *aChannel, nsIPrincipal * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsSystemPrincipal(nsIPrincipal *aPrincipal, bool *_retval NS_OUTPARAM); \
  NS_IMETHOD_(nsIPrincipal *) GetCxSubjectPrincipal(JSContext *cx); \
  NS_IMETHOD_(nsIPrincipal *) GetCxSubjectPrincipalAndFrame(JSContext *cx, JSStackFrame **fp NS_OUTPARAM); \
  NS_IMETHOD PushContextPrincipal(JSContext *cx, JSStackFrame *fp, nsIPrincipal *principal); \
  NS_IMETHOD PopContextPrincipal(JSContext *cx); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISCRIPTSECURITYMANAGER(_to) \
  NS_IMETHOD CheckPropertyAccess(JSContext *aJSContext, JSObject *aJSObject, const char * aClassName, jsid aProperty, PRUint32 aAction) { return _to CheckPropertyAccess(aJSContext, aJSObject, aClassName, aProperty, aAction); } \
  NS_IMETHOD CheckLoadURIFromScript(JSContext *cx, nsIURI *uri) { return _to CheckLoadURIFromScript(cx, uri); } \
  NS_SCRIPTABLE NS_IMETHOD CheckLoadURIWithPrincipal(nsIPrincipal *aPrincipal, nsIURI *uri, PRUint32 flags) { return _to CheckLoadURIWithPrincipal(aPrincipal, uri, flags); } \
  NS_SCRIPTABLE NS_IMETHOD CheckLoadURI(nsIURI *from, nsIURI *uri, PRUint32 flags) { return _to CheckLoadURI(from, uri, flags); } \
  NS_SCRIPTABLE NS_IMETHOD CheckLoadURIStrWithPrincipal(nsIPrincipal *aPrincipal, const nsACString & uri, PRUint32 flags) { return _to CheckLoadURIStrWithPrincipal(aPrincipal, uri, flags); } \
  NS_SCRIPTABLE NS_IMETHOD CheckLoadURIStr(const nsACString & from, const nsACString & uri, PRUint32 flags) { return _to CheckLoadURIStr(from, uri, flags); } \
  NS_IMETHOD CheckFunctionAccess(JSContext *cx, void *funObj, void *targetObj) { return _to CheckFunctionAccess(cx, funObj, targetObj); } \
  NS_IMETHOD CanExecuteScripts(JSContext *cx, nsIPrincipal *principal, bool *_retval NS_OUTPARAM) { return _to CanExecuteScripts(cx, principal, _retval); } \
  NS_IMETHOD GetSubjectPrincipal(nsIPrincipal * *_retval NS_OUTPARAM) { return _to GetSubjectPrincipal(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSystemPrincipal(nsIPrincipal * *_retval NS_OUTPARAM) { return _to GetSystemPrincipal(_retval); } \
  NS_IMETHOD GetCertificatePrincipal(const nsACString & aCertFingerprint, const nsACString & aSubjectName, const nsACString & aPrettyName, nsISupports *aCert, nsIURI *aURI, nsIPrincipal * *_retval NS_OUTPARAM) { return _to GetCertificatePrincipal(aCertFingerprint, aSubjectName, aPrettyName, aCert, aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCodebasePrincipal(nsIURI *aURI, nsIPrincipal * *_retval NS_OUTPARAM) { return _to GetCodebasePrincipal(aURI, _retval); } \
  NS_IMETHOD RequestCapability(nsIPrincipal *principal, const char * capability, PRInt16 *_retval NS_OUTPARAM) { return _to RequestCapability(principal, capability, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsCapabilityEnabled(const char * capability, bool *_retval NS_OUTPARAM) { return _to IsCapabilityEnabled(capability, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD EnableCapability(const char * capability) { return _to EnableCapability(capability); } \
  NS_IMETHOD GetObjectPrincipal(JSContext *cx, JSObject *obj, nsIPrincipal * *_retval NS_OUTPARAM) { return _to GetObjectPrincipal(cx, obj, _retval); } \
  NS_IMETHOD SubjectPrincipalIsSystem(bool *_retval NS_OUTPARAM) { return _to SubjectPrincipalIsSystem(_retval); } \
  NS_IMETHOD CheckSameOrigin(JSContext *aJSContext, nsIURI *aTargetURI) { return _to CheckSameOrigin(aJSContext, aTargetURI); } \
  NS_SCRIPTABLE NS_IMETHOD CheckSameOriginURI(nsIURI *aSourceURI, nsIURI *aTargetURI, bool reportError) { return _to CheckSameOriginURI(aSourceURI, aTargetURI, reportError); } \
  NS_IMETHOD GetPrincipalFromContext(JSContext *cx, nsIPrincipal * *_retval NS_OUTPARAM) { return _to GetPrincipalFromContext(cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetChannelPrincipal(nsIChannel *aChannel, nsIPrincipal * *_retval NS_OUTPARAM) { return _to GetChannelPrincipal(aChannel, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsSystemPrincipal(nsIPrincipal *aPrincipal, bool *_retval NS_OUTPARAM) { return _to IsSystemPrincipal(aPrincipal, _retval); } \
  NS_IMETHOD_(nsIPrincipal *) GetCxSubjectPrincipal(JSContext *cx) { return _to GetCxSubjectPrincipal(cx); } \
  NS_IMETHOD_(nsIPrincipal *) GetCxSubjectPrincipalAndFrame(JSContext *cx, JSStackFrame **fp NS_OUTPARAM) { return _to GetCxSubjectPrincipalAndFrame(cx, fp); } \
  NS_IMETHOD PushContextPrincipal(JSContext *cx, JSStackFrame *fp, nsIPrincipal *principal) { return _to PushContextPrincipal(cx, fp, principal); } \
  NS_IMETHOD PopContextPrincipal(JSContext *cx) { return _to PopContextPrincipal(cx); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISCRIPTSECURITYMANAGER(_to) \
  NS_IMETHOD CheckPropertyAccess(JSContext *aJSContext, JSObject *aJSObject, const char * aClassName, jsid aProperty, PRUint32 aAction) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckPropertyAccess(aJSContext, aJSObject, aClassName, aProperty, aAction); } \
  NS_IMETHOD CheckLoadURIFromScript(JSContext *cx, nsIURI *uri) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckLoadURIFromScript(cx, uri); } \
  NS_SCRIPTABLE NS_IMETHOD CheckLoadURIWithPrincipal(nsIPrincipal *aPrincipal, nsIURI *uri, PRUint32 flags) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckLoadURIWithPrincipal(aPrincipal, uri, flags); } \
  NS_SCRIPTABLE NS_IMETHOD CheckLoadURI(nsIURI *from, nsIURI *uri, PRUint32 flags) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckLoadURI(from, uri, flags); } \
  NS_SCRIPTABLE NS_IMETHOD CheckLoadURIStrWithPrincipal(nsIPrincipal *aPrincipal, const nsACString & uri, PRUint32 flags) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckLoadURIStrWithPrincipal(aPrincipal, uri, flags); } \
  NS_SCRIPTABLE NS_IMETHOD CheckLoadURIStr(const nsACString & from, const nsACString & uri, PRUint32 flags) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckLoadURIStr(from, uri, flags); } \
  NS_IMETHOD CheckFunctionAccess(JSContext *cx, void *funObj, void *targetObj) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckFunctionAccess(cx, funObj, targetObj); } \
  NS_IMETHOD CanExecuteScripts(JSContext *cx, nsIPrincipal *principal, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CanExecuteScripts(cx, principal, _retval); } \
  NS_IMETHOD GetSubjectPrincipal(nsIPrincipal * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSubjectPrincipal(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSystemPrincipal(nsIPrincipal * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSystemPrincipal(_retval); } \
  NS_IMETHOD GetCertificatePrincipal(const nsACString & aCertFingerprint, const nsACString & aSubjectName, const nsACString & aPrettyName, nsISupports *aCert, nsIURI *aURI, nsIPrincipal * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCertificatePrincipal(aCertFingerprint, aSubjectName, aPrettyName, aCert, aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCodebasePrincipal(nsIURI *aURI, nsIPrincipal * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCodebasePrincipal(aURI, _retval); } \
  NS_IMETHOD RequestCapability(nsIPrincipal *principal, const char * capability, PRInt16 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->RequestCapability(principal, capability, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsCapabilityEnabled(const char * capability, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsCapabilityEnabled(capability, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD EnableCapability(const char * capability) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnableCapability(capability); } \
  NS_IMETHOD GetObjectPrincipal(JSContext *cx, JSObject *obj, nsIPrincipal * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetObjectPrincipal(cx, obj, _retval); } \
  NS_IMETHOD SubjectPrincipalIsSystem(bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SubjectPrincipalIsSystem(_retval); } \
  NS_IMETHOD CheckSameOrigin(JSContext *aJSContext, nsIURI *aTargetURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckSameOrigin(aJSContext, aTargetURI); } \
  NS_SCRIPTABLE NS_IMETHOD CheckSameOriginURI(nsIURI *aSourceURI, nsIURI *aTargetURI, bool reportError) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckSameOriginURI(aSourceURI, aTargetURI, reportError); } \
  NS_IMETHOD GetPrincipalFromContext(JSContext *cx, nsIPrincipal * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrincipalFromContext(cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetChannelPrincipal(nsIChannel *aChannel, nsIPrincipal * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChannelPrincipal(aChannel, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsSystemPrincipal(nsIPrincipal *aPrincipal, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsSystemPrincipal(aPrincipal, _retval); } \
  NS_IMETHOD_(nsIPrincipal *) GetCxSubjectPrincipal(JSContext *cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCxSubjectPrincipal(cx); } \
  NS_IMETHOD_(nsIPrincipal *) GetCxSubjectPrincipalAndFrame(JSContext *cx, JSStackFrame **fp NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCxSubjectPrincipalAndFrame(cx, fp); } \
  NS_IMETHOD PushContextPrincipal(JSContext *cx, JSStackFrame *fp, nsIPrincipal *principal) { return !_to ? NS_ERROR_NULL_POINTER : _to->PushContextPrincipal(cx, fp, principal); } \
  NS_IMETHOD PopContextPrincipal(JSContext *cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->PopContextPrincipal(cx); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsScriptSecurityManager : public nsIScriptSecurityManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISCRIPTSECURITYMANAGER

  nsScriptSecurityManager();

private:
  ~nsScriptSecurityManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsScriptSecurityManager, nsIScriptSecurityManager)

nsScriptSecurityManager::nsScriptSecurityManager()
{
  /* member initializers and constructor code */
}

nsScriptSecurityManager::~nsScriptSecurityManager()
{
  /* destructor code */
}

/* [noscript] void checkPropertyAccess (in JSContextPtr aJSContext, in JSObjectPtr aJSObject, in string aClassName, in jsid aProperty, in PRUint32 aAction); */
NS_IMETHODIMP nsScriptSecurityManager::CheckPropertyAccess(JSContext *aJSContext, JSObject *aJSObject, const char * aClassName, jsid aProperty, PRUint32 aAction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void checkLoadURIFromScript (in JSContextPtr cx, in nsIURI uri); */
NS_IMETHODIMP nsScriptSecurityManager::CheckLoadURIFromScript(JSContext *cx, nsIURI *uri)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void checkLoadURIWithPrincipal (in nsIPrincipal aPrincipal, in nsIURI uri, in unsigned long flags); */
NS_IMETHODIMP nsScriptSecurityManager::CheckLoadURIWithPrincipal(nsIPrincipal *aPrincipal, nsIURI *uri, PRUint32 flags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [deprecated] void checkLoadURI (in nsIURI from, in nsIURI uri, in unsigned long flags); */
NS_IMETHODIMP nsScriptSecurityManager::CheckLoadURI(nsIURI *from, nsIURI *uri, PRUint32 flags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void checkLoadURIStrWithPrincipal (in nsIPrincipal aPrincipal, in AUTF8String uri, in unsigned long flags); */
NS_IMETHODIMP nsScriptSecurityManager::CheckLoadURIStrWithPrincipal(nsIPrincipal *aPrincipal, const nsACString & uri, PRUint32 flags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [deprecated] void checkLoadURIStr (in AUTF8String from, in AUTF8String uri, in unsigned long flags); */
NS_IMETHODIMP nsScriptSecurityManager::CheckLoadURIStr(const nsACString & from, const nsACString & uri, PRUint32 flags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void checkFunctionAccess (in JSContextPtr cx, in voidPtr funObj, in voidPtr targetObj); */
NS_IMETHODIMP nsScriptSecurityManager::CheckFunctionAccess(JSContext *cx, void *funObj, void *targetObj)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] boolean canExecuteScripts (in JSContextPtr cx, in nsIPrincipal principal); */
NS_IMETHODIMP nsScriptSecurityManager::CanExecuteScripts(JSContext *cx, nsIPrincipal *principal, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIPrincipal getSubjectPrincipal (); */
NS_IMETHODIMP nsScriptSecurityManager::GetSubjectPrincipal(nsIPrincipal * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIPrincipal getSystemPrincipal (); */
NS_IMETHODIMP nsScriptSecurityManager::GetSystemPrincipal(nsIPrincipal * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIPrincipal getCertificatePrincipal (in AUTF8String aCertFingerprint, in AUTF8String aSubjectName, in AUTF8String aPrettyName, in nsISupports aCert, in nsIURI aURI); */
NS_IMETHODIMP nsScriptSecurityManager::GetCertificatePrincipal(const nsACString & aCertFingerprint, const nsACString & aSubjectName, const nsACString & aPrettyName, nsISupports *aCert, nsIURI *aURI, nsIPrincipal * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIPrincipal getCodebasePrincipal (in nsIURI aURI); */
NS_IMETHODIMP nsScriptSecurityManager::GetCodebasePrincipal(nsIURI *aURI, nsIPrincipal * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] short requestCapability (in nsIPrincipal principal, in string capability); */
NS_IMETHODIMP nsScriptSecurityManager::RequestCapability(nsIPrincipal *principal, const char * capability, PRInt16 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isCapabilityEnabled (in string capability); */
NS_IMETHODIMP nsScriptSecurityManager::IsCapabilityEnabled(const char * capability, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void enableCapability (in string capability); */
NS_IMETHODIMP nsScriptSecurityManager::EnableCapability(const char * capability)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIPrincipal getObjectPrincipal (in JSContextPtr cx, in JSObjectPtr obj); */
NS_IMETHODIMP nsScriptSecurityManager::GetObjectPrincipal(JSContext *cx, JSObject *obj, nsIPrincipal * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] boolean subjectPrincipalIsSystem (); */
NS_IMETHODIMP nsScriptSecurityManager::SubjectPrincipalIsSystem(bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void checkSameOrigin (in JSContextPtr aJSContext, in nsIURI aTargetURI); */
NS_IMETHODIMP nsScriptSecurityManager::CheckSameOrigin(JSContext *aJSContext, nsIURI *aTargetURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void checkSameOriginURI (in nsIURI aSourceURI, in nsIURI aTargetURI, in boolean reportError); */
NS_IMETHODIMP nsScriptSecurityManager::CheckSameOriginURI(nsIURI *aSourceURI, nsIURI *aTargetURI, bool reportError)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIPrincipal getPrincipalFromContext (in JSContextPtr cx); */
NS_IMETHODIMP nsScriptSecurityManager::GetPrincipalFromContext(JSContext *cx, nsIPrincipal * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIPrincipal getChannelPrincipal (in nsIChannel aChannel); */
NS_IMETHODIMP nsScriptSecurityManager::GetChannelPrincipal(nsIChannel *aChannel, nsIPrincipal * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isSystemPrincipal (in nsIPrincipal aPrincipal); */
NS_IMETHODIMP nsScriptSecurityManager::IsSystemPrincipal(nsIPrincipal *aPrincipal, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] nsIPrincipal getCxSubjectPrincipal (in JSContextPtr cx); */
NS_IMETHODIMP_(nsIPrincipal *) nsScriptSecurityManager::GetCxSubjectPrincipal(JSContext *cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] nsIPrincipal getCxSubjectPrincipalAndFrame (in JSContextPtr cx, out JSStackFramePtr fp); */
NS_IMETHODIMP_(nsIPrincipal *) nsScriptSecurityManager::GetCxSubjectPrincipalAndFrame(JSContext *cx, JSStackFrame **fp NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void pushContextPrincipal (in JSContextPtr cx, in JSStackFramePtr fp, in nsIPrincipal principal); */
NS_IMETHODIMP nsScriptSecurityManager::PushContextPrincipal(JSContext *cx, JSStackFrame *fp, nsIPrincipal *principal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void popContextPrincipal (in JSContextPtr cx); */
NS_IMETHODIMP nsScriptSecurityManager::PopContextPrincipal(JSContext *cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_SCRIPTSECURITYMANAGER_CONTRACTID "@mozilla.org/scriptsecuritymanager;1"
#define NS_SCRIPTSECURITYMANAGER_CLASSNAME "scriptsecuritymanager"

#endif /* __gen_nsIScriptSecurityManager_h__ */
