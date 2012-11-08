/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/dns/nsIDNSService.idl
 */

#ifndef __gen_nsIDNSService_h__
#define __gen_nsIDNSService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsICancelable; /* forward declaration */

class nsIEventTarget; /* forward declaration */

class nsIDNSRecord; /* forward declaration */

class nsIDNSListener; /* forward declaration */


/* starting interface:    nsIDNSService */
#define NS_IDNSSERVICE_IID_STR "f6e05cc3-8a13-463d-877f-d59b20b59724"

#define NS_IDNSSERVICE_IID \
  {0xf6e05cc3, 0x8a13, 0x463d, \
    { 0x87, 0x7f, 0xd5, 0x9b, 0x20, 0xb5, 0x97, 0x24 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDNSService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDNSSERVICE_IID)

  /* nsICancelable asyncResolve (in AUTF8String aHostName, in unsigned long aFlags, in nsIDNSListener aListener, in nsIEventTarget aListenerTarget); */
  NS_SCRIPTABLE NS_IMETHOD AsyncResolve(const nsACString & aHostName, PRUint32 aFlags, nsIDNSListener *aListener, nsIEventTarget *aListenerTarget, nsICancelable * *_retval NS_OUTPARAM) = 0;

  /* void cancelAsyncResolve (in AUTF8String aHostName, in unsigned long aFlags, in nsIDNSListener aListener, in nsresult aReason); */
  NS_SCRIPTABLE NS_IMETHOD CancelAsyncResolve(const nsACString & aHostName, PRUint32 aFlags, nsIDNSListener *aListener, nsresult aReason) = 0;

  /* nsIDNSRecord resolve (in AUTF8String aHostName, in unsigned long aFlags); */
  NS_SCRIPTABLE NS_IMETHOD Resolve(const nsACString & aHostName, PRUint32 aFlags, nsIDNSRecord * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute AUTF8String myHostName; */
  NS_SCRIPTABLE NS_IMETHOD GetMyHostName(nsACString & aMyHostName) = 0;

  enum {
    RESOLVE_BYPASS_CACHE = 1U,
    RESOLVE_CANONICAL_NAME = 2U,
    RESOLVE_PRIORITY_MEDIUM = 4U,
    RESOLVE_PRIORITY_LOW = 8U,
    RESOLVE_SPECULATE = 16U,
    RESOLVE_DISABLE_IPV6 = 32U
  };

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDNSService, NS_IDNSSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDNSSERVICE \
  NS_SCRIPTABLE NS_IMETHOD AsyncResolve(const nsACString & aHostName, PRUint32 aFlags, nsIDNSListener *aListener, nsIEventTarget *aListenerTarget, nsICancelable * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CancelAsyncResolve(const nsACString & aHostName, PRUint32 aFlags, nsIDNSListener *aListener, nsresult aReason); \
  NS_SCRIPTABLE NS_IMETHOD Resolve(const nsACString & aHostName, PRUint32 aFlags, nsIDNSRecord * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetMyHostName(nsACString & aMyHostName); \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDNSSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD AsyncResolve(const nsACString & aHostName, PRUint32 aFlags, nsIDNSListener *aListener, nsIEventTarget *aListenerTarget, nsICancelable * *_retval NS_OUTPARAM) { return _to AsyncResolve(aHostName, aFlags, aListener, aListenerTarget, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CancelAsyncResolve(const nsACString & aHostName, PRUint32 aFlags, nsIDNSListener *aListener, nsresult aReason) { return _to CancelAsyncResolve(aHostName, aFlags, aListener, aReason); } \
  NS_SCRIPTABLE NS_IMETHOD Resolve(const nsACString & aHostName, PRUint32 aFlags, nsIDNSRecord * *_retval NS_OUTPARAM) { return _to Resolve(aHostName, aFlags, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMyHostName(nsACString & aMyHostName) { return _to GetMyHostName(aMyHostName); } \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDNSSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD AsyncResolve(const nsACString & aHostName, PRUint32 aFlags, nsIDNSListener *aListener, nsIEventTarget *aListenerTarget, nsICancelable * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AsyncResolve(aHostName, aFlags, aListener, aListenerTarget, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CancelAsyncResolve(const nsACString & aHostName, PRUint32 aFlags, nsIDNSListener *aListener, nsresult aReason) { return !_to ? NS_ERROR_NULL_POINTER : _to->CancelAsyncResolve(aHostName, aFlags, aListener, aReason); } \
  NS_SCRIPTABLE NS_IMETHOD Resolve(const nsACString & aHostName, PRUint32 aFlags, nsIDNSRecord * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Resolve(aHostName, aFlags, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMyHostName(nsACString & aMyHostName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMyHostName(aMyHostName); } \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDNSService : public nsIDNSService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDNSSERVICE

  nsDNSService();

private:
  ~nsDNSService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDNSService, nsIDNSService)

nsDNSService::nsDNSService()
{
  /* member initializers and constructor code */
}

nsDNSService::~nsDNSService()
{
  /* destructor code */
}

/* nsICancelable asyncResolve (in AUTF8String aHostName, in unsigned long aFlags, in nsIDNSListener aListener, in nsIEventTarget aListenerTarget); */
NS_IMETHODIMP nsDNSService::AsyncResolve(const nsACString & aHostName, PRUint32 aFlags, nsIDNSListener *aListener, nsIEventTarget *aListenerTarget, nsICancelable * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cancelAsyncResolve (in AUTF8String aHostName, in unsigned long aFlags, in nsIDNSListener aListener, in nsresult aReason); */
NS_IMETHODIMP nsDNSService::CancelAsyncResolve(const nsACString & aHostName, PRUint32 aFlags, nsIDNSListener *aListener, nsresult aReason)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDNSRecord resolve (in AUTF8String aHostName, in unsigned long aFlags); */
NS_IMETHODIMP nsDNSService::Resolve(const nsACString & aHostName, PRUint32 aFlags, nsIDNSRecord * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String myHostName; */
NS_IMETHODIMP nsDNSService::GetMyHostName(nsACString & aMyHostName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDNSService_h__ */
