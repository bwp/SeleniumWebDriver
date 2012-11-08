/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/html/nsIDOMHTMLCanvasElement.idl
 */

#ifndef __gen_nsIDOMHTMLCanvasElement_h__
#define __gen_nsIDOMHTMLCanvasElement_h__


#ifndef __gen_nsIDOMHTMLElement_h__
#include "nsIDOMHTMLElement.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
// for jsval
#include "jsapi.h"
class nsIDOMFile; /* forward declaration */

class nsIVariant; /* forward declaration */

class nsIInputStreamCallback; /* forward declaration */


/* starting interface:    nsIDOMHTMLCanvasElement */
#define NS_IDOMHTMLCANVASELEMENT_IID_STR "5929542b-c68e-48ab-84f9-d9642da39720"

#define NS_IDOMHTMLCANVASELEMENT_IID \
  {0x5929542b, 0xc68e, 0x48ab, \
    { 0x84, 0xf9, 0xd9, 0x64, 0x2d, 0xa3, 0x97, 0x20 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMHTMLCanvasElement : public nsIDOMHTMLElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMHTMLCANVASELEMENT_IID)

  /* attribute unsigned long width; */
  NS_SCRIPTABLE NS_IMETHOD GetWidth(PRUint32 *aWidth) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetWidth(PRUint32 aWidth) = 0;

  /* attribute unsigned long height; */
  NS_SCRIPTABLE NS_IMETHOD GetHeight(PRUint32 *aHeight) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetHeight(PRUint32 aHeight) = 0;

  /* attribute boolean mozOpaque; */
  NS_SCRIPTABLE NS_IMETHOD GetMozOpaque(bool *aMozOpaque) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMozOpaque(bool aMozOpaque) = 0;

  /* nsISupports getContext (in DOMString contextId, [optional] in jsval contextOptions); */
  NS_SCRIPTABLE NS_IMETHOD GetContext(const nsAString & contextId, const JS::Value & contextOptions, nsISupports * *_retval NS_OUTPARAM) = 0;

  /* [optional_argc] DOMString toDataURL ([optional] in DOMString type, [optional] in nsIVariant params); */
  NS_SCRIPTABLE NS_IMETHOD ToDataURL(const nsAString & type, nsIVariant *params, PRUint8 _argc, nsAString & _retval NS_OUTPARAM) = 0;

  /* [optional_argc] nsIDOMFile mozGetAsFile (in DOMString name, [optional] in DOMString type); */
  NS_SCRIPTABLE NS_IMETHOD MozGetAsFile(const nsAString & name, const nsAString & type, PRUint8 _argc, nsIDOMFile * *_retval NS_OUTPARAM) = 0;

  /* nsISupports MozGetIPCContext (in DOMString contextId); */
  NS_SCRIPTABLE NS_IMETHOD MozGetIPCContext(const nsAString & contextId, nsISupports * *_retval NS_OUTPARAM) = 0;

  /* void mozFetchAsStream (in nsIInputStreamCallback callback, [optional] in DOMString type); */
  NS_SCRIPTABLE NS_IMETHOD MozFetchAsStream(nsIInputStreamCallback *callback, const nsAString & type) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMHTMLCanvasElement, NS_IDOMHTMLCANVASELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLCANVASELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetWidth(PRUint32 *aWidth); \
  NS_SCRIPTABLE NS_IMETHOD SetWidth(PRUint32 aWidth); \
  NS_SCRIPTABLE NS_IMETHOD GetHeight(PRUint32 *aHeight); \
  NS_SCRIPTABLE NS_IMETHOD SetHeight(PRUint32 aHeight); \
  NS_SCRIPTABLE NS_IMETHOD GetMozOpaque(bool *aMozOpaque); \
  NS_SCRIPTABLE NS_IMETHOD SetMozOpaque(bool aMozOpaque); \
  NS_SCRIPTABLE NS_IMETHOD GetContext(const nsAString & contextId, const JS::Value & contextOptions, nsISupports * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ToDataURL(const nsAString & type, nsIVariant *params, PRUint8 _argc, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MozGetAsFile(const nsAString & name, const nsAString & type, PRUint8 _argc, nsIDOMFile * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MozGetIPCContext(const nsAString & contextId, nsISupports * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MozFetchAsStream(nsIInputStreamCallback *callback, const nsAString & type); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLCANVASELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetWidth(PRUint32 *aWidth) { return _to GetWidth(aWidth); } \
  NS_SCRIPTABLE NS_IMETHOD SetWidth(PRUint32 aWidth) { return _to SetWidth(aWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetHeight(PRUint32 *aHeight) { return _to GetHeight(aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD SetHeight(PRUint32 aHeight) { return _to SetHeight(aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozOpaque(bool *aMozOpaque) { return _to GetMozOpaque(aMozOpaque); } \
  NS_SCRIPTABLE NS_IMETHOD SetMozOpaque(bool aMozOpaque) { return _to SetMozOpaque(aMozOpaque); } \
  NS_SCRIPTABLE NS_IMETHOD GetContext(const nsAString & contextId, const JS::Value & contextOptions, nsISupports * *_retval NS_OUTPARAM) { return _to GetContext(contextId, contextOptions, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ToDataURL(const nsAString & type, nsIVariant *params, PRUint8 _argc, nsAString & _retval NS_OUTPARAM) { return _to ToDataURL(type, params, _argc, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozGetAsFile(const nsAString & name, const nsAString & type, PRUint8 _argc, nsIDOMFile * *_retval NS_OUTPARAM) { return _to MozGetAsFile(name, type, _argc, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozGetIPCContext(const nsAString & contextId, nsISupports * *_retval NS_OUTPARAM) { return _to MozGetIPCContext(contextId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozFetchAsStream(nsIInputStreamCallback *callback, const nsAString & type) { return _to MozFetchAsStream(callback, type); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLCANVASELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetWidth(PRUint32 *aWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWidth(aWidth); } \
  NS_SCRIPTABLE NS_IMETHOD SetWidth(PRUint32 aWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWidth(aWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetHeight(PRUint32 *aHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHeight(aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD SetHeight(PRUint32 aHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHeight(aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozOpaque(bool *aMozOpaque) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozOpaque(aMozOpaque); } \
  NS_SCRIPTABLE NS_IMETHOD SetMozOpaque(bool aMozOpaque) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMozOpaque(aMozOpaque); } \
  NS_SCRIPTABLE NS_IMETHOD GetContext(const nsAString & contextId, const JS::Value & contextOptions, nsISupports * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContext(contextId, contextOptions, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ToDataURL(const nsAString & type, nsIVariant *params, PRUint8 _argc, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToDataURL(type, params, _argc, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozGetAsFile(const nsAString & name, const nsAString & type, PRUint8 _argc, nsIDOMFile * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozGetAsFile(name, type, _argc, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozGetIPCContext(const nsAString & contextId, nsISupports * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozGetIPCContext(contextId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozFetchAsStream(nsIInputStreamCallback *callback, const nsAString & type) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozFetchAsStream(callback, type); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLCanvasElement : public nsIDOMHTMLCanvasElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLCANVASELEMENT

  nsDOMHTMLCanvasElement();

private:
  ~nsDOMHTMLCanvasElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMHTMLCanvasElement, nsIDOMHTMLCanvasElement)

nsDOMHTMLCanvasElement::nsDOMHTMLCanvasElement()
{
  /* member initializers and constructor code */
}

nsDOMHTMLCanvasElement::~nsDOMHTMLCanvasElement()
{
  /* destructor code */
}

/* attribute unsigned long width; */
NS_IMETHODIMP nsDOMHTMLCanvasElement::GetWidth(PRUint32 *aWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLCanvasElement::SetWidth(PRUint32 aWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long height; */
NS_IMETHODIMP nsDOMHTMLCanvasElement::GetHeight(PRUint32 *aHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLCanvasElement::SetHeight(PRUint32 aHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean mozOpaque; */
NS_IMETHODIMP nsDOMHTMLCanvasElement::GetMozOpaque(bool *aMozOpaque)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLCanvasElement::SetMozOpaque(bool aMozOpaque)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISupports getContext (in DOMString contextId, [optional] in jsval contextOptions); */
NS_IMETHODIMP nsDOMHTMLCanvasElement::GetContext(const nsAString & contextId, const JS::Value & contextOptions, nsISupports * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [optional_argc] DOMString toDataURL ([optional] in DOMString type, [optional] in nsIVariant params); */
NS_IMETHODIMP nsDOMHTMLCanvasElement::ToDataURL(const nsAString & type, nsIVariant *params, PRUint8 _argc, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [optional_argc] nsIDOMFile mozGetAsFile (in DOMString name, [optional] in DOMString type); */
NS_IMETHODIMP nsDOMHTMLCanvasElement::MozGetAsFile(const nsAString & name, const nsAString & type, PRUint8 _argc, nsIDOMFile * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISupports MozGetIPCContext (in DOMString contextId); */
NS_IMETHODIMP nsDOMHTMLCanvasElement::MozGetIPCContext(const nsAString & contextId, nsISupports * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void mozFetchAsStream (in nsIInputStreamCallback callback, [optional] in DOMString type); */
NS_IMETHODIMP nsDOMHTMLCanvasElement::MozFetchAsStream(nsIInputStreamCallback *callback, const nsAString & type)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMHTMLCanvasElement_h__ */
