/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/html/nsIDOMHTMLHRElement.idl
 */

#ifndef __gen_nsIDOMHTMLHRElement_h__
#define __gen_nsIDOMHTMLHRElement_h__


#ifndef __gen_nsIDOMHTMLElement_h__
#include "nsIDOMHTMLElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMHTMLHRElement */
#define NS_IDOMHTMLHRELEMENT_IID_STR "a6950d69-a376-4ad5-a911-8f91abb2b15d"

#define NS_IDOMHTMLHRELEMENT_IID \
  {0xa6950d69, 0xa376, 0x4ad5, \
    { 0xa9, 0x11, 0x8f, 0x91, 0xab, 0xb2, 0xb1, 0x5d }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMHTMLHRElement : public nsIDOMHTMLElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMHTMLHRELEMENT_IID)

  /* attribute DOMString align; */
  NS_SCRIPTABLE NS_IMETHOD GetAlign(nsAString & aAlign) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAlign(const nsAString & aAlign) = 0;

  /* attribute boolean noShade; */
  NS_SCRIPTABLE NS_IMETHOD GetNoShade(bool *aNoShade) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetNoShade(bool aNoShade) = 0;

  /* attribute DOMString size; */
  NS_SCRIPTABLE NS_IMETHOD GetSize(nsAString & aSize) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSize(const nsAString & aSize) = 0;

  /* attribute DOMString width; */
  NS_SCRIPTABLE NS_IMETHOD GetWidth(nsAString & aWidth) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetWidth(const nsAString & aWidth) = 0;

  /* attribute DOMString color; */
  NS_SCRIPTABLE NS_IMETHOD GetColor(nsAString & aColor) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetColor(const nsAString & aColor) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMHTMLHRElement, NS_IDOMHTMLHRELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLHRELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetAlign(nsAString & aAlign); \
  NS_SCRIPTABLE NS_IMETHOD SetAlign(const nsAString & aAlign); \
  NS_SCRIPTABLE NS_IMETHOD GetNoShade(bool *aNoShade); \
  NS_SCRIPTABLE NS_IMETHOD SetNoShade(bool aNoShade); \
  NS_SCRIPTABLE NS_IMETHOD GetSize(nsAString & aSize); \
  NS_SCRIPTABLE NS_IMETHOD SetSize(const nsAString & aSize); \
  NS_SCRIPTABLE NS_IMETHOD GetWidth(nsAString & aWidth); \
  NS_SCRIPTABLE NS_IMETHOD SetWidth(const nsAString & aWidth); \
  NS_SCRIPTABLE NS_IMETHOD GetColor(nsAString & aColor); \
  NS_SCRIPTABLE NS_IMETHOD SetColor(const nsAString & aColor); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLHRELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAlign(nsAString & aAlign) { return _to GetAlign(aAlign); } \
  NS_SCRIPTABLE NS_IMETHOD SetAlign(const nsAString & aAlign) { return _to SetAlign(aAlign); } \
  NS_SCRIPTABLE NS_IMETHOD GetNoShade(bool *aNoShade) { return _to GetNoShade(aNoShade); } \
  NS_SCRIPTABLE NS_IMETHOD SetNoShade(bool aNoShade) { return _to SetNoShade(aNoShade); } \
  NS_SCRIPTABLE NS_IMETHOD GetSize(nsAString & aSize) { return _to GetSize(aSize); } \
  NS_SCRIPTABLE NS_IMETHOD SetSize(const nsAString & aSize) { return _to SetSize(aSize); } \
  NS_SCRIPTABLE NS_IMETHOD GetWidth(nsAString & aWidth) { return _to GetWidth(aWidth); } \
  NS_SCRIPTABLE NS_IMETHOD SetWidth(const nsAString & aWidth) { return _to SetWidth(aWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetColor(nsAString & aColor) { return _to GetColor(aColor); } \
  NS_SCRIPTABLE NS_IMETHOD SetColor(const nsAString & aColor) { return _to SetColor(aColor); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLHRELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAlign(nsAString & aAlign) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAlign(aAlign); } \
  NS_SCRIPTABLE NS_IMETHOD SetAlign(const nsAString & aAlign) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAlign(aAlign); } \
  NS_SCRIPTABLE NS_IMETHOD GetNoShade(bool *aNoShade) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNoShade(aNoShade); } \
  NS_SCRIPTABLE NS_IMETHOD SetNoShade(bool aNoShade) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNoShade(aNoShade); } \
  NS_SCRIPTABLE NS_IMETHOD GetSize(nsAString & aSize) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSize(aSize); } \
  NS_SCRIPTABLE NS_IMETHOD SetSize(const nsAString & aSize) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSize(aSize); } \
  NS_SCRIPTABLE NS_IMETHOD GetWidth(nsAString & aWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWidth(aWidth); } \
  NS_SCRIPTABLE NS_IMETHOD SetWidth(const nsAString & aWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWidth(aWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetColor(nsAString & aColor) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetColor(aColor); } \
  NS_SCRIPTABLE NS_IMETHOD SetColor(const nsAString & aColor) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetColor(aColor); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLHRElement : public nsIDOMHTMLHRElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLHRELEMENT

  nsDOMHTMLHRElement();

private:
  ~nsDOMHTMLHRElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMHTMLHRElement, nsIDOMHTMLHRElement)

nsDOMHTMLHRElement::nsDOMHTMLHRElement()
{
  /* member initializers and constructor code */
}

nsDOMHTMLHRElement::~nsDOMHTMLHRElement()
{
  /* destructor code */
}

/* attribute DOMString align; */
NS_IMETHODIMP nsDOMHTMLHRElement::GetAlign(nsAString & aAlign)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLHRElement::SetAlign(const nsAString & aAlign)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean noShade; */
NS_IMETHODIMP nsDOMHTMLHRElement::GetNoShade(bool *aNoShade)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLHRElement::SetNoShade(bool aNoShade)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString size; */
NS_IMETHODIMP nsDOMHTMLHRElement::GetSize(nsAString & aSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLHRElement::SetSize(const nsAString & aSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString width; */
NS_IMETHODIMP nsDOMHTMLHRElement::GetWidth(nsAString & aWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLHRElement::SetWidth(const nsAString & aWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString color; */
NS_IMETHODIMP nsDOMHTMLHRElement::GetColor(nsAString & aColor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLHRElement::SetColor(const nsAString & aColor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMHTMLHRElement_h__ */
