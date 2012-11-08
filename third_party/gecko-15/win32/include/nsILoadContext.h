/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/docshell/base/nsILoadContext.idl
 */

#ifndef __gen_nsILoadContext_h__
#define __gen_nsILoadContext_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMWindow; /* forward declaration */


/* starting interface:    nsILoadContext */
#define NS_ILOADCONTEXT_IID_STR "386806c3-c4cb-4b3d-b05d-c08ea10f5585"

#define NS_ILOADCONTEXT_IID \
  {0x386806c3, 0xc4cb, 0x4b3d, \
    { 0xb0, 0x5d, 0xc0, 0x8e, 0xa1, 0x0f, 0x55, 0x85 }}

class NS_SCRIPTABLE nsILoadContext : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ILOADCONTEXT_IID)

  /* readonly attribute nsIDOMWindow associatedWindow; */
  NS_SCRIPTABLE NS_IMETHOD GetAssociatedWindow(nsIDOMWindow * *aAssociatedWindow) = 0;

  /* readonly attribute nsIDOMWindow topWindow; */
  NS_SCRIPTABLE NS_IMETHOD GetTopWindow(nsIDOMWindow * *aTopWindow) = 0;

  /* boolean isAppOfType (in unsigned long appType); */
  NS_SCRIPTABLE NS_IMETHOD IsAppOfType(PRUint32 appType, bool *_retval NS_OUTPARAM) = 0;

  /* readonly attribute boolean isContent; */
  NS_SCRIPTABLE NS_IMETHOD GetIsContent(bool *aIsContent) = 0;

  /* attribute boolean usePrivateBrowsing; */
  NS_SCRIPTABLE NS_IMETHOD GetUsePrivateBrowsing(bool *aUsePrivateBrowsing) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetUsePrivateBrowsing(bool aUsePrivateBrowsing) = 0;

   /**
   * De-XPCOMed getter to make call-sites cleaner.
   */
  bool UsePrivateBrowsing() {
    bool usingPB;
    GetUsePrivateBrowsing(&usingPB);
    return usingPB;
  }
};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsILoadContext, NS_ILOADCONTEXT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSILOADCONTEXT \
  NS_SCRIPTABLE NS_IMETHOD GetAssociatedWindow(nsIDOMWindow * *aAssociatedWindow); \
  NS_SCRIPTABLE NS_IMETHOD GetTopWindow(nsIDOMWindow * *aTopWindow); \
  NS_SCRIPTABLE NS_IMETHOD IsAppOfType(PRUint32 appType, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetIsContent(bool *aIsContent); \
  NS_SCRIPTABLE NS_IMETHOD GetUsePrivateBrowsing(bool *aUsePrivateBrowsing); \
  NS_SCRIPTABLE NS_IMETHOD SetUsePrivateBrowsing(bool aUsePrivateBrowsing); \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSILOADCONTEXT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAssociatedWindow(nsIDOMWindow * *aAssociatedWindow) { return _to GetAssociatedWindow(aAssociatedWindow); } \
  NS_SCRIPTABLE NS_IMETHOD GetTopWindow(nsIDOMWindow * *aTopWindow) { return _to GetTopWindow(aTopWindow); } \
  NS_SCRIPTABLE NS_IMETHOD IsAppOfType(PRUint32 appType, bool *_retval NS_OUTPARAM) { return _to IsAppOfType(appType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsContent(bool *aIsContent) { return _to GetIsContent(aIsContent); } \
  NS_SCRIPTABLE NS_IMETHOD GetUsePrivateBrowsing(bool *aUsePrivateBrowsing) { return _to GetUsePrivateBrowsing(aUsePrivateBrowsing); } \
  NS_SCRIPTABLE NS_IMETHOD SetUsePrivateBrowsing(bool aUsePrivateBrowsing) { return _to SetUsePrivateBrowsing(aUsePrivateBrowsing); } \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSILOADCONTEXT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAssociatedWindow(nsIDOMWindow * *aAssociatedWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAssociatedWindow(aAssociatedWindow); } \
  NS_SCRIPTABLE NS_IMETHOD GetTopWindow(nsIDOMWindow * *aTopWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTopWindow(aTopWindow); } \
  NS_SCRIPTABLE NS_IMETHOD IsAppOfType(PRUint32 appType, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsAppOfType(appType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsContent(bool *aIsContent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsContent(aIsContent); } \
  NS_SCRIPTABLE NS_IMETHOD GetUsePrivateBrowsing(bool *aUsePrivateBrowsing) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUsePrivateBrowsing(aUsePrivateBrowsing); } \
  NS_SCRIPTABLE NS_IMETHOD SetUsePrivateBrowsing(bool aUsePrivateBrowsing) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUsePrivateBrowsing(aUsePrivateBrowsing); } \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsLoadContext : public nsILoadContext
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSILOADCONTEXT

  nsLoadContext();

private:
  ~nsLoadContext();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsLoadContext, nsILoadContext)

nsLoadContext::nsLoadContext()
{
  /* member initializers and constructor code */
}

nsLoadContext::~nsLoadContext()
{
  /* destructor code */
}

/* readonly attribute nsIDOMWindow associatedWindow; */
NS_IMETHODIMP nsLoadContext::GetAssociatedWindow(nsIDOMWindow * *aAssociatedWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMWindow topWindow; */
NS_IMETHODIMP nsLoadContext::GetTopWindow(nsIDOMWindow * *aTopWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isAppOfType (in unsigned long appType); */
NS_IMETHODIMP nsLoadContext::IsAppOfType(PRUint32 appType, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isContent; */
NS_IMETHODIMP nsLoadContext::GetIsContent(bool *aIsContent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean usePrivateBrowsing; */
NS_IMETHODIMP nsLoadContext::GetUsePrivateBrowsing(bool *aUsePrivateBrowsing)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsLoadContext::SetUsePrivateBrowsing(bool aUsePrivateBrowsing)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsILoadContext_h__ */
