/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/docshell/base/nsIRefreshURI.idl
 */

#ifndef __gen_nsIRefreshURI_h__
#define __gen_nsIRefreshURI_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIURI_h__
#include "nsIURI.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIChannel; /* forward declaration */


/* starting interface:    nsIRefreshURI */
#define NS_IREFRESHURI_IID_STR "cb0ad623-6b46-4c09-a473-c1d6ca63d3c7"

#define NS_IREFRESHURI_IID \
  {0xcb0ad623, 0x6b46, 0x4c09, \
    { 0xa4, 0x73, 0xc1, 0xd6, 0xca, 0x63, 0xd3, 0xc7 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIRefreshURI : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IREFRESHURI_IID)

  /* void refreshURI (in nsIURI aURI, in long aMillis, in boolean aRepeat, in boolean aMetaRefresh); */
  NS_SCRIPTABLE NS_IMETHOD RefreshURI(nsIURI *aURI, PRInt32 aMillis, bool aRepeat, bool aMetaRefresh) = 0;

  /* void forceRefreshURI (in nsIURI aURI, in long aMillis, in boolean aMetaRefresh); */
  NS_SCRIPTABLE NS_IMETHOD ForceRefreshURI(nsIURI *aURI, PRInt32 aMillis, bool aMetaRefresh) = 0;

  /* void setupRefreshURI (in nsIChannel aChannel); */
  NS_SCRIPTABLE NS_IMETHOD SetupRefreshURI(nsIChannel *aChannel) = 0;

  /* void setupRefreshURIFromHeader (in nsIURI aBaseURI, in ACString aHeader); */
  NS_SCRIPTABLE NS_IMETHOD SetupRefreshURIFromHeader(nsIURI *aBaseURI, const nsACString & aHeader) = 0;

  /* void cancelRefreshURITimers (); */
  NS_SCRIPTABLE NS_IMETHOD CancelRefreshURITimers(void) = 0;

  /* readonly attribute boolean refreshPending; */
  NS_SCRIPTABLE NS_IMETHOD GetRefreshPending(bool *aRefreshPending) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIRefreshURI, NS_IREFRESHURI_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIREFRESHURI \
  NS_SCRIPTABLE NS_IMETHOD RefreshURI(nsIURI *aURI, PRInt32 aMillis, bool aRepeat, bool aMetaRefresh); \
  NS_SCRIPTABLE NS_IMETHOD ForceRefreshURI(nsIURI *aURI, PRInt32 aMillis, bool aMetaRefresh); \
  NS_SCRIPTABLE NS_IMETHOD SetupRefreshURI(nsIChannel *aChannel); \
  NS_SCRIPTABLE NS_IMETHOD SetupRefreshURIFromHeader(nsIURI *aBaseURI, const nsACString & aHeader); \
  NS_SCRIPTABLE NS_IMETHOD CancelRefreshURITimers(void); \
  NS_SCRIPTABLE NS_IMETHOD GetRefreshPending(bool *aRefreshPending); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIREFRESHURI(_to) \
  NS_SCRIPTABLE NS_IMETHOD RefreshURI(nsIURI *aURI, PRInt32 aMillis, bool aRepeat, bool aMetaRefresh) { return _to RefreshURI(aURI, aMillis, aRepeat, aMetaRefresh); } \
  NS_SCRIPTABLE NS_IMETHOD ForceRefreshURI(nsIURI *aURI, PRInt32 aMillis, bool aMetaRefresh) { return _to ForceRefreshURI(aURI, aMillis, aMetaRefresh); } \
  NS_SCRIPTABLE NS_IMETHOD SetupRefreshURI(nsIChannel *aChannel) { return _to SetupRefreshURI(aChannel); } \
  NS_SCRIPTABLE NS_IMETHOD SetupRefreshURIFromHeader(nsIURI *aBaseURI, const nsACString & aHeader) { return _to SetupRefreshURIFromHeader(aBaseURI, aHeader); } \
  NS_SCRIPTABLE NS_IMETHOD CancelRefreshURITimers(void) { return _to CancelRefreshURITimers(); } \
  NS_SCRIPTABLE NS_IMETHOD GetRefreshPending(bool *aRefreshPending) { return _to GetRefreshPending(aRefreshPending); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIREFRESHURI(_to) \
  NS_SCRIPTABLE NS_IMETHOD RefreshURI(nsIURI *aURI, PRInt32 aMillis, bool aRepeat, bool aMetaRefresh) { return !_to ? NS_ERROR_NULL_POINTER : _to->RefreshURI(aURI, aMillis, aRepeat, aMetaRefresh); } \
  NS_SCRIPTABLE NS_IMETHOD ForceRefreshURI(nsIURI *aURI, PRInt32 aMillis, bool aMetaRefresh) { return !_to ? NS_ERROR_NULL_POINTER : _to->ForceRefreshURI(aURI, aMillis, aMetaRefresh); } \
  NS_SCRIPTABLE NS_IMETHOD SetupRefreshURI(nsIChannel *aChannel) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetupRefreshURI(aChannel); } \
  NS_SCRIPTABLE NS_IMETHOD SetupRefreshURIFromHeader(nsIURI *aBaseURI, const nsACString & aHeader) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetupRefreshURIFromHeader(aBaseURI, aHeader); } \
  NS_SCRIPTABLE NS_IMETHOD CancelRefreshURITimers(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->CancelRefreshURITimers(); } \
  NS_SCRIPTABLE NS_IMETHOD GetRefreshPending(bool *aRefreshPending) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRefreshPending(aRefreshPending); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsRefreshURI : public nsIRefreshURI
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIREFRESHURI

  nsRefreshURI();

private:
  ~nsRefreshURI();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsRefreshURI, nsIRefreshURI)

nsRefreshURI::nsRefreshURI()
{
  /* member initializers and constructor code */
}

nsRefreshURI::~nsRefreshURI()
{
  /* destructor code */
}

/* void refreshURI (in nsIURI aURI, in long aMillis, in boolean aRepeat, in boolean aMetaRefresh); */
NS_IMETHODIMP nsRefreshURI::RefreshURI(nsIURI *aURI, PRInt32 aMillis, bool aRepeat, bool aMetaRefresh)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void forceRefreshURI (in nsIURI aURI, in long aMillis, in boolean aMetaRefresh); */
NS_IMETHODIMP nsRefreshURI::ForceRefreshURI(nsIURI *aURI, PRInt32 aMillis, bool aMetaRefresh)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setupRefreshURI (in nsIChannel aChannel); */
NS_IMETHODIMP nsRefreshURI::SetupRefreshURI(nsIChannel *aChannel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setupRefreshURIFromHeader (in nsIURI aBaseURI, in ACString aHeader); */
NS_IMETHODIMP nsRefreshURI::SetupRefreshURIFromHeader(nsIURI *aBaseURI, const nsACString & aHeader)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cancelRefreshURITimers (); */
NS_IMETHODIMP nsRefreshURI::CancelRefreshURITimers()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean refreshPending; */
NS_IMETHODIMP nsRefreshURI::GetRefreshPending(bool *aRefreshPending)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_REFRESHURI_HEADER_FOUND \
     NS_ERROR_GENERATE_SUCCESS(NS_ERROR_MODULE_URILOADER, \
                               2)

#endif /* __gen_nsIRefreshURI_h__ */
