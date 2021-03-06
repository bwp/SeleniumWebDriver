/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/security/manager/boot/public/nsISecurityWarningDialogs.idl
 */

#ifndef __gen_nsISecurityWarningDialogs_h__
#define __gen_nsISecurityWarningDialogs_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIInterfaceRequestor; /* forward declaration */


/* starting interface:    nsISecurityWarningDialogs */
#define NS_ISECURITYWARNINGDIALOGS_IID_STR "1c399d06-1dd2-11b2-bc58-c87cbcacdb78"

#define NS_ISECURITYWARNINGDIALOGS_IID \
  {0x1c399d06, 0x1dd2, 0x11b2, \
    { 0xbc, 0x58, 0xc8, 0x7c, 0xbc, 0xac, 0xdb, 0x78 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsISecurityWarningDialogs : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISECURITYWARNINGDIALOGS_IID)

  /* boolean confirmEnteringSecure (in nsIInterfaceRequestor ctx); */
  NS_SCRIPTABLE NS_IMETHOD ConfirmEnteringSecure(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM) = 0;

  /* boolean confirmEnteringWeak (in nsIInterfaceRequestor ctx); */
  NS_SCRIPTABLE NS_IMETHOD ConfirmEnteringWeak(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM) = 0;

  /* boolean confirmLeavingSecure (in nsIInterfaceRequestor ctx); */
  NS_SCRIPTABLE NS_IMETHOD ConfirmLeavingSecure(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM) = 0;

  /* boolean confirmMixedMode (in nsIInterfaceRequestor ctx); */
  NS_SCRIPTABLE NS_IMETHOD ConfirmMixedMode(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM) = 0;

  /* boolean confirmPostToInsecure (in nsIInterfaceRequestor ctx); */
  NS_SCRIPTABLE NS_IMETHOD ConfirmPostToInsecure(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM) = 0;

  /* boolean confirmPostToInsecureFromSecure (in nsIInterfaceRequestor ctx); */
  NS_SCRIPTABLE NS_IMETHOD ConfirmPostToInsecureFromSecure(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISecurityWarningDialogs, NS_ISECURITYWARNINGDIALOGS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISECURITYWARNINGDIALOGS \
  NS_SCRIPTABLE NS_IMETHOD ConfirmEnteringSecure(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ConfirmEnteringWeak(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ConfirmLeavingSecure(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ConfirmMixedMode(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ConfirmPostToInsecure(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ConfirmPostToInsecureFromSecure(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISECURITYWARNINGDIALOGS(_to) \
  NS_SCRIPTABLE NS_IMETHOD ConfirmEnteringSecure(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM) { return _to ConfirmEnteringSecure(ctx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ConfirmEnteringWeak(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM) { return _to ConfirmEnteringWeak(ctx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ConfirmLeavingSecure(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM) { return _to ConfirmLeavingSecure(ctx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ConfirmMixedMode(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM) { return _to ConfirmMixedMode(ctx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ConfirmPostToInsecure(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM) { return _to ConfirmPostToInsecure(ctx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ConfirmPostToInsecureFromSecure(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM) { return _to ConfirmPostToInsecureFromSecure(ctx, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISECURITYWARNINGDIALOGS(_to) \
  NS_SCRIPTABLE NS_IMETHOD ConfirmEnteringSecure(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ConfirmEnteringSecure(ctx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ConfirmEnteringWeak(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ConfirmEnteringWeak(ctx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ConfirmLeavingSecure(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ConfirmLeavingSecure(ctx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ConfirmMixedMode(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ConfirmMixedMode(ctx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ConfirmPostToInsecure(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ConfirmPostToInsecure(ctx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ConfirmPostToInsecureFromSecure(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ConfirmPostToInsecureFromSecure(ctx, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSecurityWarningDialogs : public nsISecurityWarningDialogs
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISECURITYWARNINGDIALOGS

  nsSecurityWarningDialogs();

private:
  ~nsSecurityWarningDialogs();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsSecurityWarningDialogs, nsISecurityWarningDialogs)

nsSecurityWarningDialogs::nsSecurityWarningDialogs()
{
  /* member initializers and constructor code */
}

nsSecurityWarningDialogs::~nsSecurityWarningDialogs()
{
  /* destructor code */
}

/* boolean confirmEnteringSecure (in nsIInterfaceRequestor ctx); */
NS_IMETHODIMP nsSecurityWarningDialogs::ConfirmEnteringSecure(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean confirmEnteringWeak (in nsIInterfaceRequestor ctx); */
NS_IMETHODIMP nsSecurityWarningDialogs::ConfirmEnteringWeak(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean confirmLeavingSecure (in nsIInterfaceRequestor ctx); */
NS_IMETHODIMP nsSecurityWarningDialogs::ConfirmLeavingSecure(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean confirmMixedMode (in nsIInterfaceRequestor ctx); */
NS_IMETHODIMP nsSecurityWarningDialogs::ConfirmMixedMode(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean confirmPostToInsecure (in nsIInterfaceRequestor ctx); */
NS_IMETHODIMP nsSecurityWarningDialogs::ConfirmPostToInsecure(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean confirmPostToInsecureFromSecure (in nsIInterfaceRequestor ctx); */
NS_IMETHODIMP nsSecurityWarningDialogs::ConfirmPostToInsecureFromSecure(nsIInterfaceRequestor *ctx, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_SECURITYWARNINGDIALOGS_CONTRACTID "@mozilla.org/nsSecurityWarningDialogs;1"

#endif /* __gen_nsISecurityWarningDialogs_h__ */
