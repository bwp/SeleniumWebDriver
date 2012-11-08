/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/html/nsIMozBrowserFrame.idl
 */

#ifndef __gen_nsIMozBrowserFrame_h__
#define __gen_nsIMozBrowserFrame_h__


#ifndef __gen_nsIDOMMozBrowserFrame_h__
#include "nsIDOMMozBrowserFrame.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsITabParent; /* forward declaration */


/* starting interface:    nsIMozBrowserFrame */
#define NS_IMOZBROWSERFRAME_IID_STR "6f043e42-02c9-4e8f-8f8d-1b83c6102827"

#define NS_IMOZBROWSERFRAME_IID \
  {0x6f043e42, 0x02c9, 0x4e8f, \
    { 0x8f, 0x8d, 0x1b, 0x83, 0xc6, 0x10, 0x28, 0x27 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIMozBrowserFrame : public nsIDOMMozBrowserFrame {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IMOZBROWSERFRAME_IID)

  /* readonly attribute boolean reallyIsBrowser; */
  NS_SCRIPTABLE NS_IMETHOD GetReallyIsBrowser(bool *aReallyIsBrowser) = 0;

  /* readonly attribute boolean reallyIsApp; */
  NS_SCRIPTABLE NS_IMETHOD GetReallyIsApp(bool *aReallyIsApp) = 0;

  /* readonly attribute AString appManifestURL; */
  NS_SCRIPTABLE NS_IMETHOD GetAppManifestURL(nsAString & aAppManifestURL) = 0;

  /* void disallowCreateFrameLoader (); */
  NS_SCRIPTABLE NS_IMETHOD DisallowCreateFrameLoader(void) = 0;

  /* void allowCreateFrameLoader (); */
  NS_SCRIPTABLE NS_IMETHOD AllowCreateFrameLoader(void) = 0;

  /* void createRemoteFrameLoader (in nsITabParent aTabParent); */
  NS_SCRIPTABLE NS_IMETHOD CreateRemoteFrameLoader(nsITabParent *aTabParent) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIMozBrowserFrame, NS_IMOZBROWSERFRAME_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMOZBROWSERFRAME \
  NS_SCRIPTABLE NS_IMETHOD GetReallyIsBrowser(bool *aReallyIsBrowser); \
  NS_SCRIPTABLE NS_IMETHOD GetReallyIsApp(bool *aReallyIsApp); \
  NS_SCRIPTABLE NS_IMETHOD GetAppManifestURL(nsAString & aAppManifestURL); \
  NS_SCRIPTABLE NS_IMETHOD DisallowCreateFrameLoader(void); \
  NS_SCRIPTABLE NS_IMETHOD AllowCreateFrameLoader(void); \
  NS_SCRIPTABLE NS_IMETHOD CreateRemoteFrameLoader(nsITabParent *aTabParent); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMOZBROWSERFRAME(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetReallyIsBrowser(bool *aReallyIsBrowser) { return _to GetReallyIsBrowser(aReallyIsBrowser); } \
  NS_SCRIPTABLE NS_IMETHOD GetReallyIsApp(bool *aReallyIsApp) { return _to GetReallyIsApp(aReallyIsApp); } \
  NS_SCRIPTABLE NS_IMETHOD GetAppManifestURL(nsAString & aAppManifestURL) { return _to GetAppManifestURL(aAppManifestURL); } \
  NS_SCRIPTABLE NS_IMETHOD DisallowCreateFrameLoader(void) { return _to DisallowCreateFrameLoader(); } \
  NS_SCRIPTABLE NS_IMETHOD AllowCreateFrameLoader(void) { return _to AllowCreateFrameLoader(); } \
  NS_SCRIPTABLE NS_IMETHOD CreateRemoteFrameLoader(nsITabParent *aTabParent) { return _to CreateRemoteFrameLoader(aTabParent); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMOZBROWSERFRAME(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetReallyIsBrowser(bool *aReallyIsBrowser) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReallyIsBrowser(aReallyIsBrowser); } \
  NS_SCRIPTABLE NS_IMETHOD GetReallyIsApp(bool *aReallyIsApp) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReallyIsApp(aReallyIsApp); } \
  NS_SCRIPTABLE NS_IMETHOD GetAppManifestURL(nsAString & aAppManifestURL) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAppManifestURL(aAppManifestURL); } \
  NS_SCRIPTABLE NS_IMETHOD DisallowCreateFrameLoader(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->DisallowCreateFrameLoader(); } \
  NS_SCRIPTABLE NS_IMETHOD AllowCreateFrameLoader(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->AllowCreateFrameLoader(); } \
  NS_SCRIPTABLE NS_IMETHOD CreateRemoteFrameLoader(nsITabParent *aTabParent) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateRemoteFrameLoader(aTabParent); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsMozBrowserFrame : public nsIMozBrowserFrame
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMOZBROWSERFRAME

  nsMozBrowserFrame();

private:
  ~nsMozBrowserFrame();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsMozBrowserFrame, nsIMozBrowserFrame)

nsMozBrowserFrame::nsMozBrowserFrame()
{
  /* member initializers and constructor code */
}

nsMozBrowserFrame::~nsMozBrowserFrame()
{
  /* destructor code */
}

/* readonly attribute boolean reallyIsBrowser; */
NS_IMETHODIMP nsMozBrowserFrame::GetReallyIsBrowser(bool *aReallyIsBrowser)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean reallyIsApp; */
NS_IMETHODIMP nsMozBrowserFrame::GetReallyIsApp(bool *aReallyIsApp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString appManifestURL; */
NS_IMETHODIMP nsMozBrowserFrame::GetAppManifestURL(nsAString & aAppManifestURL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void disallowCreateFrameLoader (); */
NS_IMETHODIMP nsMozBrowserFrame::DisallowCreateFrameLoader()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void allowCreateFrameLoader (); */
NS_IMETHODIMP nsMozBrowserFrame::AllowCreateFrameLoader()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void createRemoteFrameLoader (in nsITabParent aTabParent); */
NS_IMETHODIMP nsMozBrowserFrame::CreateRemoteFrameLoader(nsITabParent *aTabParent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIMozBrowserFrame_h__ */
