/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/base/public/nsIStrictTransportSecurityService.idl
 */

#ifndef __gen_nsIStrictTransportSecurityService_h__
#define __gen_nsIStrictTransportSecurityService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIObserver; /* forward declaration */

class nsIHttpChannel; /* forward declaration */


/* starting interface:    nsIStrictTransportSecurityService */
#define NS_ISTRICTTRANSPORTSECURITYSERVICE_IID_STR "16955eee-6c48-4152-9309-c42a465138a1"

#define NS_ISTRICTTRANSPORTSECURITYSERVICE_IID \
  {0x16955eee, 0x6c48, 0x4152, \
    { 0x93, 0x09, 0xc4, 0x2a, 0x46, 0x51, 0x38, 0xa1 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIStrictTransportSecurityService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISTRICTTRANSPORTSECURITYSERVICE_IID)

  /* void processStsHeader (in nsIURI aSourceURI, in string aHeader); */
  NS_SCRIPTABLE NS_IMETHOD ProcessStsHeader(nsIURI *aSourceURI, const char * aHeader) = 0;

  /* void removeStsState (in nsIURI aURI); */
  NS_SCRIPTABLE NS_IMETHOD RemoveStsState(nsIURI *aURI) = 0;

  /* boolean shouldIgnoreStsHeader (in nsISupports aSecurityInfo); */
  NS_SCRIPTABLE NS_IMETHOD ShouldIgnoreStsHeader(nsISupports *aSecurityInfo, bool *_retval NS_OUTPARAM) = 0;

  /* boolean isStsHost (in string aHost); */
  NS_SCRIPTABLE NS_IMETHOD IsStsHost(const char * aHost, bool *_retval NS_OUTPARAM) = 0;

  /* boolean isStsURI (in nsIURI aURI); */
  NS_SCRIPTABLE NS_IMETHOD IsStsURI(nsIURI *aURI, bool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIStrictTransportSecurityService, NS_ISTRICTTRANSPORTSECURITYSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISTRICTTRANSPORTSECURITYSERVICE \
  NS_SCRIPTABLE NS_IMETHOD ProcessStsHeader(nsIURI *aSourceURI, const char * aHeader); \
  NS_SCRIPTABLE NS_IMETHOD RemoveStsState(nsIURI *aURI); \
  NS_SCRIPTABLE NS_IMETHOD ShouldIgnoreStsHeader(nsISupports *aSecurityInfo, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsStsHost(const char * aHost, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsStsURI(nsIURI *aURI, bool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISTRICTTRANSPORTSECURITYSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD ProcessStsHeader(nsIURI *aSourceURI, const char * aHeader) { return _to ProcessStsHeader(aSourceURI, aHeader); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveStsState(nsIURI *aURI) { return _to RemoveStsState(aURI); } \
  NS_SCRIPTABLE NS_IMETHOD ShouldIgnoreStsHeader(nsISupports *aSecurityInfo, bool *_retval NS_OUTPARAM) { return _to ShouldIgnoreStsHeader(aSecurityInfo, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsStsHost(const char * aHost, bool *_retval NS_OUTPARAM) { return _to IsStsHost(aHost, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsStsURI(nsIURI *aURI, bool *_retval NS_OUTPARAM) { return _to IsStsURI(aURI, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISTRICTTRANSPORTSECURITYSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD ProcessStsHeader(nsIURI *aSourceURI, const char * aHeader) { return !_to ? NS_ERROR_NULL_POINTER : _to->ProcessStsHeader(aSourceURI, aHeader); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveStsState(nsIURI *aURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveStsState(aURI); } \
  NS_SCRIPTABLE NS_IMETHOD ShouldIgnoreStsHeader(nsISupports *aSecurityInfo, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ShouldIgnoreStsHeader(aSecurityInfo, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsStsHost(const char * aHost, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsStsHost(aHost, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsStsURI(nsIURI *aURI, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsStsURI(aURI, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsStrictTransportSecurityService : public nsIStrictTransportSecurityService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISTRICTTRANSPORTSECURITYSERVICE

  nsStrictTransportSecurityService();

private:
  ~nsStrictTransportSecurityService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsStrictTransportSecurityService, nsIStrictTransportSecurityService)

nsStrictTransportSecurityService::nsStrictTransportSecurityService()
{
  /* member initializers and constructor code */
}

nsStrictTransportSecurityService::~nsStrictTransportSecurityService()
{
  /* destructor code */
}

/* void processStsHeader (in nsIURI aSourceURI, in string aHeader); */
NS_IMETHODIMP nsStrictTransportSecurityService::ProcessStsHeader(nsIURI *aSourceURI, const char * aHeader)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeStsState (in nsIURI aURI); */
NS_IMETHODIMP nsStrictTransportSecurityService::RemoveStsState(nsIURI *aURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean shouldIgnoreStsHeader (in nsISupports aSecurityInfo); */
NS_IMETHODIMP nsStrictTransportSecurityService::ShouldIgnoreStsHeader(nsISupports *aSecurityInfo, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isStsHost (in string aHost); */
NS_IMETHODIMP nsStrictTransportSecurityService::IsStsHost(const char * aHost, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isStsURI (in nsIURI aURI); */
NS_IMETHODIMP nsStrictTransportSecurityService::IsStsURI(nsIURI *aURI, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_STSSERVICE_CONTRACTID "@mozilla.org/stsservice;1"
#define NS_STSSERVICE_CLASSNAME "stsservice"
#define STS_PERMISSION "sts/use"
#define STS_SUBDOMAIN_PERMISSION "sts/subd"

#endif /* __gen_nsIStrictTransportSecurityService_h__ */
