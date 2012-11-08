/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/css/nsIDOMCSSPrimitiveValue.idl
 */

#ifndef __gen_nsIDOMCSSPrimitiveValue_h__
#define __gen_nsIDOMCSSPrimitiveValue_h__


#ifndef __gen_nsIDOMCSSValue_h__
#include "nsIDOMCSSValue.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMCSSPrimitiveValue */
#define NS_IDOMCSSPRIMITIVEVALUE_IID_STR "e249031f-8df9-4e7a-b644-18946dce0019"

#define NS_IDOMCSSPRIMITIVEVALUE_IID \
  {0xe249031f, 0x8df9, 0x4e7a, \
    { 0xb6, 0x44, 0x18, 0x94, 0x6d, 0xce, 0x00, 0x19 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMCSSPrimitiveValue : public nsIDOMCSSValue {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMCSSPRIMITIVEVALUE_IID)

  enum {
    CSS_UNKNOWN = 0U,
    CSS_NUMBER = 1U,
    CSS_PERCENTAGE = 2U,
    CSS_EMS = 3U,
    CSS_EXS = 4U,
    CSS_PX = 5U,
    CSS_CM = 6U,
    CSS_MM = 7U,
    CSS_IN = 8U,
    CSS_PT = 9U,
    CSS_PC = 10U,
    CSS_DEG = 11U,
    CSS_RAD = 12U,
    CSS_GRAD = 13U,
    CSS_MS = 14U,
    CSS_S = 15U,
    CSS_HZ = 16U,
    CSS_KHZ = 17U,
    CSS_DIMENSION = 18U,
    CSS_STRING = 19U,
    CSS_URI = 20U,
    CSS_IDENT = 21U,
    CSS_ATTR = 22U,
    CSS_COUNTER = 23U,
    CSS_RECT = 24U,
    CSS_RGBCOLOR = 25U
  };

  /* readonly attribute unsigned short primitiveType; */
  NS_SCRIPTABLE NS_IMETHOD GetPrimitiveType(PRUint16 *aPrimitiveType) = 0;

  /* void setFloatValue (in unsigned short unitType, in float floatValue) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD SetFloatValue(PRUint16 unitType, float floatValue) = 0;

  /* float getFloatValue (in unsigned short unitType) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD GetFloatValue(PRUint16 unitType, float *_retval NS_OUTPARAM) = 0;

  /* void setStringValue (in unsigned short stringType, in DOMString stringValue) raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD SetStringValue(PRUint16 stringType, const nsAString & stringValue) = 0;

  /* DOMString getStringValue () raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD GetStringValue(nsAString & _retval NS_OUTPARAM) = 0;

  /* nsIDOMCounter getCounterValue () raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD GetCounterValue(nsIDOMCounter * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMRect getRectValue () raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD GetRectValue(nsIDOMRect * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMRGBColor getRGBColorValue () raises (DOMException); */
  NS_SCRIPTABLE NS_IMETHOD GetRGBColorValue(nsIDOMRGBColor * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMCSSPrimitiveValue, NS_IDOMCSSPRIMITIVEVALUE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMCSSPRIMITIVEVALUE \
  NS_SCRIPTABLE NS_IMETHOD GetPrimitiveType(PRUint16 *aPrimitiveType); \
  NS_SCRIPTABLE NS_IMETHOD SetFloatValue(PRUint16 unitType, float floatValue); \
  NS_SCRIPTABLE NS_IMETHOD GetFloatValue(PRUint16 unitType, float *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetStringValue(PRUint16 stringType, const nsAString & stringValue); \
  NS_SCRIPTABLE NS_IMETHOD GetStringValue(nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCounterValue(nsIDOMCounter * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRectValue(nsIDOMRect * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRGBColorValue(nsIDOMRGBColor * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMCSSPRIMITIVEVALUE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPrimitiveType(PRUint16 *aPrimitiveType) { return _to GetPrimitiveType(aPrimitiveType); } \
  NS_SCRIPTABLE NS_IMETHOD SetFloatValue(PRUint16 unitType, float floatValue) { return _to SetFloatValue(unitType, floatValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetFloatValue(PRUint16 unitType, float *_retval NS_OUTPARAM) { return _to GetFloatValue(unitType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetStringValue(PRUint16 stringType, const nsAString & stringValue) { return _to SetStringValue(stringType, stringValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetStringValue(nsAString & _retval NS_OUTPARAM) { return _to GetStringValue(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCounterValue(nsIDOMCounter * *_retval NS_OUTPARAM) { return _to GetCounterValue(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRectValue(nsIDOMRect * *_retval NS_OUTPARAM) { return _to GetRectValue(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRGBColorValue(nsIDOMRGBColor * *_retval NS_OUTPARAM) { return _to GetRGBColorValue(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMCSSPRIMITIVEVALUE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPrimitiveType(PRUint16 *aPrimitiveType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrimitiveType(aPrimitiveType); } \
  NS_SCRIPTABLE NS_IMETHOD SetFloatValue(PRUint16 unitType, float floatValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFloatValue(unitType, floatValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetFloatValue(PRUint16 unitType, float *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFloatValue(unitType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetStringValue(PRUint16 stringType, const nsAString & stringValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStringValue(stringType, stringValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetStringValue(nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStringValue(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCounterValue(nsIDOMCounter * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCounterValue(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRectValue(nsIDOMRect * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRectValue(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetRGBColorValue(nsIDOMRGBColor * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRGBColorValue(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMCSSPrimitiveValue : public nsIDOMCSSPrimitiveValue
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMCSSPRIMITIVEVALUE

  nsDOMCSSPrimitiveValue();

private:
  ~nsDOMCSSPrimitiveValue();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMCSSPrimitiveValue, nsIDOMCSSPrimitiveValue)

nsDOMCSSPrimitiveValue::nsDOMCSSPrimitiveValue()
{
  /* member initializers and constructor code */
}

nsDOMCSSPrimitiveValue::~nsDOMCSSPrimitiveValue()
{
  /* destructor code */
}

/* readonly attribute unsigned short primitiveType; */
NS_IMETHODIMP nsDOMCSSPrimitiveValue::GetPrimitiveType(PRUint16 *aPrimitiveType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setFloatValue (in unsigned short unitType, in float floatValue) raises (DOMException); */
NS_IMETHODIMP nsDOMCSSPrimitiveValue::SetFloatValue(PRUint16 unitType, float floatValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* float getFloatValue (in unsigned short unitType) raises (DOMException); */
NS_IMETHODIMP nsDOMCSSPrimitiveValue::GetFloatValue(PRUint16 unitType, float *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setStringValue (in unsigned short stringType, in DOMString stringValue) raises (DOMException); */
NS_IMETHODIMP nsDOMCSSPrimitiveValue::SetStringValue(PRUint16 stringType, const nsAString & stringValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString getStringValue () raises (DOMException); */
NS_IMETHODIMP nsDOMCSSPrimitiveValue::GetStringValue(nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMCounter getCounterValue () raises (DOMException); */
NS_IMETHODIMP nsDOMCSSPrimitiveValue::GetCounterValue(nsIDOMCounter * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMRect getRectValue () raises (DOMException); */
NS_IMETHODIMP nsDOMCSSPrimitiveValue::GetRectValue(nsIDOMRect * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMRGBColor getRGBColorValue () raises (DOMException); */
NS_IMETHODIMP nsDOMCSSPrimitiveValue::GetRGBColorValue(nsIDOMRGBColor * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMCSSPrimitiveValue_h__ */
