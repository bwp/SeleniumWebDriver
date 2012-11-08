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

/* starting interface:    nsIMozBrowserFrame */
#define NS_IMOZBROWSERFRAME_IID_STR "076ad76c-2df6-4760-b914-21d554f0a2b6"

#define NS_IMOZBROWSERFRAME_IID \
  {0x076ad76c, 0x2df6, 0x4760, \
    { 0xb9, 0x14, 0x21, 0xd5, 0x54, 0xf0, 0xa2, 0xb6 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIMozBrowserFrame : public nsIDOMMozBrowserFrame {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IMOZBROWSERFRAME_IID)

  /* readonly attribute boolean reallyIsBrowser; */
  NS_SCRIPTABLE NS_IMETHOD GetReallyIsBrowser(bool *aReallyIsBrowser) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIMozBrowserFrame, NS_IMOZBROWSERFRAME_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMOZBROWSERFRAME \
  NS_SCRIPTABLE NS_IMETHOD GetReallyIsBrowser(bool *aReallyIsBrowser); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMOZBROWSERFRAME(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetReallyIsBrowser(bool *aReallyIsBrowser) { return _to GetReallyIsBrowser(aReallyIsBrowser); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMOZBROWSERFRAME(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetReallyIsBrowser(bool *aReallyIsBrowser) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReallyIsBrowser(aReallyIsBrowser); } 

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

/* End of implementation class template. */
#endif


#endif /* __gen_nsIMozBrowserFrame_h__ */
