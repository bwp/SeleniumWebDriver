/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/html/nsIDOMHTMLTextAreaElement.idl
 */

#ifndef __gen_nsIDOMHTMLTextAreaElement_h__
#define __gen_nsIDOMHTMLTextAreaElement_h__


#ifndef __gen_nsIDOMHTMLElement_h__
#include "nsIDOMHTMLElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIControllers; /* forward declaration */

class nsIDOMValidityState; /* forward declaration */


/* starting interface:    nsIDOMHTMLTextAreaElement */
#define NS_IDOMHTMLTEXTAREAELEMENT_IID_STR "88d09917-d2da-4737-a887-277a2f9750c7"

#define NS_IDOMHTMLTEXTAREAELEMENT_IID \
  {0x88d09917, 0xd2da, 0x4737, \
    { 0xa8, 0x87, 0x27, 0x7a, 0x2f, 0x97, 0x50, 0xc7 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMHTMLTextAreaElement : public nsIDOMHTMLElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMHTMLTEXTAREAELEMENT_IID)

  /* attribute boolean autofocus; */
  NS_SCRIPTABLE NS_IMETHOD GetAutofocus(bool *aAutofocus) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAutofocus(bool aAutofocus) = 0;

  /* attribute unsigned long cols; */
  NS_SCRIPTABLE NS_IMETHOD GetCols(PRUint32 *aCols) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCols(PRUint32 aCols) = 0;

  /* attribute boolean disabled; */
  NS_SCRIPTABLE NS_IMETHOD GetDisabled(bool *aDisabled) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDisabled(bool aDisabled) = 0;

  /* readonly attribute nsIDOMHTMLFormElement form; */
  NS_SCRIPTABLE NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) = 0;

  /* attribute long maxLength; */
  NS_SCRIPTABLE NS_IMETHOD GetMaxLength(PRInt32 *aMaxLength) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMaxLength(PRInt32 aMaxLength) = 0;

  /* attribute DOMString name; */
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetName(const nsAString & aName) = 0;

  /* attribute DOMString placeholder; */
  NS_SCRIPTABLE NS_IMETHOD GetPlaceholder(nsAString & aPlaceholder) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPlaceholder(const nsAString & aPlaceholder) = 0;

  /* attribute boolean readOnly; */
  NS_SCRIPTABLE NS_IMETHOD GetReadOnly(bool *aReadOnly) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetReadOnly(bool aReadOnly) = 0;

  /* attribute boolean required; */
  NS_SCRIPTABLE NS_IMETHOD GetRequired(bool *aRequired) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetRequired(bool aRequired) = 0;

  /* attribute unsigned long rows; */
  NS_SCRIPTABLE NS_IMETHOD GetRows(PRUint32 *aRows) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetRows(PRUint32 aRows) = 0;

  /* [Null(Stringify)] attribute DOMString wrap; */
  NS_SCRIPTABLE NS_IMETHOD GetWrap(nsAString & aWrap) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetWrap(const nsAString & aWrap) = 0;

  /* readonly attribute DOMString type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) = 0;

  /* attribute DOMString defaultValue; */
  NS_SCRIPTABLE NS_IMETHOD GetDefaultValue(nsAString & aDefaultValue) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDefaultValue(const nsAString & aDefaultValue) = 0;

  /* attribute DOMString value; */
  NS_SCRIPTABLE NS_IMETHOD GetValue(nsAString & aValue) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetValue(const nsAString & aValue) = 0;

  /* readonly attribute long textLength; */
  NS_SCRIPTABLE NS_IMETHOD GetTextLength(PRInt32 *aTextLength) = 0;

  /* readonly attribute boolean willValidate; */
  NS_SCRIPTABLE NS_IMETHOD GetWillValidate(bool *aWillValidate) = 0;

  /* readonly attribute nsIDOMValidityState validity; */
  NS_SCRIPTABLE NS_IMETHOD GetValidity(nsIDOMValidityState * *aValidity) = 0;

  /* readonly attribute DOMString validationMessage; */
  NS_SCRIPTABLE NS_IMETHOD GetValidationMessage(nsAString & aValidationMessage) = 0;

  /* boolean checkValidity (); */
  NS_SCRIPTABLE NS_IMETHOD CheckValidity(bool *_retval NS_OUTPARAM) = 0;

  /* void setCustomValidity (in DOMString error); */
  NS_SCRIPTABLE NS_IMETHOD SetCustomValidity(const nsAString & error) = 0;

  /* void select (); */
  NS_SCRIPTABLE NS_IMETHOD Select(void) = 0;

  /* attribute long selectionStart; */
  NS_SCRIPTABLE NS_IMETHOD GetSelectionStart(PRInt32 *aSelectionStart) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSelectionStart(PRInt32 aSelectionStart) = 0;

  /* attribute long selectionEnd; */
  NS_SCRIPTABLE NS_IMETHOD GetSelectionEnd(PRInt32 *aSelectionEnd) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSelectionEnd(PRInt32 aSelectionEnd) = 0;

  /* void setSelectionRange (in long selectionStart, in long selectionEnd, [optional] in DOMString direction); */
  NS_SCRIPTABLE NS_IMETHOD SetSelectionRange(PRInt32 selectionStart, PRInt32 selectionEnd, const nsAString & direction) = 0;

  /* attribute DOMString selectionDirection; */
  NS_SCRIPTABLE NS_IMETHOD GetSelectionDirection(nsAString & aSelectionDirection) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSelectionDirection(const nsAString & aSelectionDirection) = 0;

  /* readonly attribute nsIControllers controllers; */
  NS_SCRIPTABLE NS_IMETHOD GetControllers(nsIControllers * *aControllers) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMHTMLTextAreaElement, NS_IDOMHTMLTEXTAREAELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLTEXTAREAELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetAutofocus(bool *aAutofocus); \
  NS_SCRIPTABLE NS_IMETHOD SetAutofocus(bool aAutofocus); \
  NS_SCRIPTABLE NS_IMETHOD GetCols(PRUint32 *aCols); \
  NS_SCRIPTABLE NS_IMETHOD SetCols(PRUint32 aCols); \
  NS_SCRIPTABLE NS_IMETHOD GetDisabled(bool *aDisabled); \
  NS_SCRIPTABLE NS_IMETHOD SetDisabled(bool aDisabled); \
  NS_SCRIPTABLE NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm); \
  NS_SCRIPTABLE NS_IMETHOD GetMaxLength(PRInt32 *aMaxLength); \
  NS_SCRIPTABLE NS_IMETHOD SetMaxLength(PRInt32 aMaxLength); \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName); \
  NS_SCRIPTABLE NS_IMETHOD SetName(const nsAString & aName); \
  NS_SCRIPTABLE NS_IMETHOD GetPlaceholder(nsAString & aPlaceholder); \
  NS_SCRIPTABLE NS_IMETHOD SetPlaceholder(const nsAString & aPlaceholder); \
  NS_SCRIPTABLE NS_IMETHOD GetReadOnly(bool *aReadOnly); \
  NS_SCRIPTABLE NS_IMETHOD SetReadOnly(bool aReadOnly); \
  NS_SCRIPTABLE NS_IMETHOD GetRequired(bool *aRequired); \
  NS_SCRIPTABLE NS_IMETHOD SetRequired(bool aRequired); \
  NS_SCRIPTABLE NS_IMETHOD GetRows(PRUint32 *aRows); \
  NS_SCRIPTABLE NS_IMETHOD SetRows(PRUint32 aRows); \
  NS_SCRIPTABLE NS_IMETHOD GetWrap(nsAString & aWrap); \
  NS_SCRIPTABLE NS_IMETHOD SetWrap(const nsAString & aWrap); \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType); \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultValue(nsAString & aDefaultValue); \
  NS_SCRIPTABLE NS_IMETHOD SetDefaultValue(const nsAString & aDefaultValue); \
  NS_SCRIPTABLE NS_IMETHOD GetValue(nsAString & aValue); \
  NS_SCRIPTABLE NS_IMETHOD SetValue(const nsAString & aValue); \
  NS_SCRIPTABLE NS_IMETHOD GetTextLength(PRInt32 *aTextLength); \
  NS_SCRIPTABLE NS_IMETHOD GetWillValidate(bool *aWillValidate); \
  NS_SCRIPTABLE NS_IMETHOD GetValidity(nsIDOMValidityState * *aValidity); \
  NS_SCRIPTABLE NS_IMETHOD GetValidationMessage(nsAString & aValidationMessage); \
  NS_SCRIPTABLE NS_IMETHOD CheckValidity(bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetCustomValidity(const nsAString & error); \
  NS_SCRIPTABLE NS_IMETHOD Select(void); \
  NS_SCRIPTABLE NS_IMETHOD GetSelectionStart(PRInt32 *aSelectionStart); \
  NS_SCRIPTABLE NS_IMETHOD SetSelectionStart(PRInt32 aSelectionStart); \
  NS_SCRIPTABLE NS_IMETHOD GetSelectionEnd(PRInt32 *aSelectionEnd); \
  NS_SCRIPTABLE NS_IMETHOD SetSelectionEnd(PRInt32 aSelectionEnd); \
  NS_SCRIPTABLE NS_IMETHOD SetSelectionRange(PRInt32 selectionStart, PRInt32 selectionEnd, const nsAString & direction); \
  NS_SCRIPTABLE NS_IMETHOD GetSelectionDirection(nsAString & aSelectionDirection); \
  NS_SCRIPTABLE NS_IMETHOD SetSelectionDirection(const nsAString & aSelectionDirection); \
  NS_SCRIPTABLE NS_IMETHOD GetControllers(nsIControllers * *aControllers); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLTEXTAREAELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAutofocus(bool *aAutofocus) { return _to GetAutofocus(aAutofocus); } \
  NS_SCRIPTABLE NS_IMETHOD SetAutofocus(bool aAutofocus) { return _to SetAutofocus(aAutofocus); } \
  NS_SCRIPTABLE NS_IMETHOD GetCols(PRUint32 *aCols) { return _to GetCols(aCols); } \
  NS_SCRIPTABLE NS_IMETHOD SetCols(PRUint32 aCols) { return _to SetCols(aCols); } \
  NS_SCRIPTABLE NS_IMETHOD GetDisabled(bool *aDisabled) { return _to GetDisabled(aDisabled); } \
  NS_SCRIPTABLE NS_IMETHOD SetDisabled(bool aDisabled) { return _to SetDisabled(aDisabled); } \
  NS_SCRIPTABLE NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) { return _to GetForm(aForm); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxLength(PRInt32 *aMaxLength) { return _to GetMaxLength(aMaxLength); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxLength(PRInt32 aMaxLength) { return _to SetMaxLength(aMaxLength); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) { return _to GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const nsAString & aName) { return _to SetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetPlaceholder(nsAString & aPlaceholder) { return _to GetPlaceholder(aPlaceholder); } \
  NS_SCRIPTABLE NS_IMETHOD SetPlaceholder(const nsAString & aPlaceholder) { return _to SetPlaceholder(aPlaceholder); } \
  NS_SCRIPTABLE NS_IMETHOD GetReadOnly(bool *aReadOnly) { return _to GetReadOnly(aReadOnly); } \
  NS_SCRIPTABLE NS_IMETHOD SetReadOnly(bool aReadOnly) { return _to SetReadOnly(aReadOnly); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequired(bool *aRequired) { return _to GetRequired(aRequired); } \
  NS_SCRIPTABLE NS_IMETHOD SetRequired(bool aRequired) { return _to SetRequired(aRequired); } \
  NS_SCRIPTABLE NS_IMETHOD GetRows(PRUint32 *aRows) { return _to GetRows(aRows); } \
  NS_SCRIPTABLE NS_IMETHOD SetRows(PRUint32 aRows) { return _to SetRows(aRows); } \
  NS_SCRIPTABLE NS_IMETHOD GetWrap(nsAString & aWrap) { return _to GetWrap(aWrap); } \
  NS_SCRIPTABLE NS_IMETHOD SetWrap(const nsAString & aWrap) { return _to SetWrap(aWrap); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultValue(nsAString & aDefaultValue) { return _to GetDefaultValue(aDefaultValue); } \
  NS_SCRIPTABLE NS_IMETHOD SetDefaultValue(const nsAString & aDefaultValue) { return _to SetDefaultValue(aDefaultValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetValue(nsAString & aValue) { return _to GetValue(aValue); } \
  NS_SCRIPTABLE NS_IMETHOD SetValue(const nsAString & aValue) { return _to SetValue(aValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetTextLength(PRInt32 *aTextLength) { return _to GetTextLength(aTextLength); } \
  NS_SCRIPTABLE NS_IMETHOD GetWillValidate(bool *aWillValidate) { return _to GetWillValidate(aWillValidate); } \
  NS_SCRIPTABLE NS_IMETHOD GetValidity(nsIDOMValidityState * *aValidity) { return _to GetValidity(aValidity); } \
  NS_SCRIPTABLE NS_IMETHOD GetValidationMessage(nsAString & aValidationMessage) { return _to GetValidationMessage(aValidationMessage); } \
  NS_SCRIPTABLE NS_IMETHOD CheckValidity(bool *_retval NS_OUTPARAM) { return _to CheckValidity(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetCustomValidity(const nsAString & error) { return _to SetCustomValidity(error); } \
  NS_SCRIPTABLE NS_IMETHOD Select(void) { return _to Select(); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectionStart(PRInt32 *aSelectionStart) { return _to GetSelectionStart(aSelectionStart); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelectionStart(PRInt32 aSelectionStart) { return _to SetSelectionStart(aSelectionStart); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectionEnd(PRInt32 *aSelectionEnd) { return _to GetSelectionEnd(aSelectionEnd); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelectionEnd(PRInt32 aSelectionEnd) { return _to SetSelectionEnd(aSelectionEnd); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelectionRange(PRInt32 selectionStart, PRInt32 selectionEnd, const nsAString & direction) { return _to SetSelectionRange(selectionStart, selectionEnd, direction); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectionDirection(nsAString & aSelectionDirection) { return _to GetSelectionDirection(aSelectionDirection); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelectionDirection(const nsAString & aSelectionDirection) { return _to SetSelectionDirection(aSelectionDirection); } \
  NS_SCRIPTABLE NS_IMETHOD GetControllers(nsIControllers * *aControllers) { return _to GetControllers(aControllers); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLTEXTAREAELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAutofocus(bool *aAutofocus) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAutofocus(aAutofocus); } \
  NS_SCRIPTABLE NS_IMETHOD SetAutofocus(bool aAutofocus) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAutofocus(aAutofocus); } \
  NS_SCRIPTABLE NS_IMETHOD GetCols(PRUint32 *aCols) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCols(aCols); } \
  NS_SCRIPTABLE NS_IMETHOD SetCols(PRUint32 aCols) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCols(aCols); } \
  NS_SCRIPTABLE NS_IMETHOD GetDisabled(bool *aDisabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDisabled(aDisabled); } \
  NS_SCRIPTABLE NS_IMETHOD SetDisabled(bool aDisabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDisabled(aDisabled); } \
  NS_SCRIPTABLE NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetForm(aForm); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxLength(PRInt32 *aMaxLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxLength(aMaxLength); } \
  NS_SCRIPTABLE NS_IMETHOD SetMaxLength(PRInt32 aMaxLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMaxLength(aMaxLength); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetPlaceholder(nsAString & aPlaceholder) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPlaceholder(aPlaceholder); } \
  NS_SCRIPTABLE NS_IMETHOD SetPlaceholder(const nsAString & aPlaceholder) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPlaceholder(aPlaceholder); } \
  NS_SCRIPTABLE NS_IMETHOD GetReadOnly(bool *aReadOnly) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReadOnly(aReadOnly); } \
  NS_SCRIPTABLE NS_IMETHOD SetReadOnly(bool aReadOnly) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetReadOnly(aReadOnly); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequired(bool *aRequired) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequired(aRequired); } \
  NS_SCRIPTABLE NS_IMETHOD SetRequired(bool aRequired) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRequired(aRequired); } \
  NS_SCRIPTABLE NS_IMETHOD GetRows(PRUint32 *aRows) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRows(aRows); } \
  NS_SCRIPTABLE NS_IMETHOD SetRows(PRUint32 aRows) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRows(aRows); } \
  NS_SCRIPTABLE NS_IMETHOD GetWrap(nsAString & aWrap) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWrap(aWrap); } \
  NS_SCRIPTABLE NS_IMETHOD SetWrap(const nsAString & aWrap) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWrap(aWrap); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultValue(nsAString & aDefaultValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultValue(aDefaultValue); } \
  NS_SCRIPTABLE NS_IMETHOD SetDefaultValue(const nsAString & aDefaultValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDefaultValue(aDefaultValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetValue(nsAString & aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValue(aValue); } \
  NS_SCRIPTABLE NS_IMETHOD SetValue(const nsAString & aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetValue(aValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetTextLength(PRInt32 *aTextLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTextLength(aTextLength); } \
  NS_SCRIPTABLE NS_IMETHOD GetWillValidate(bool *aWillValidate) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWillValidate(aWillValidate); } \
  NS_SCRIPTABLE NS_IMETHOD GetValidity(nsIDOMValidityState * *aValidity) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValidity(aValidity); } \
  NS_SCRIPTABLE NS_IMETHOD GetValidationMessage(nsAString & aValidationMessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValidationMessage(aValidationMessage); } \
  NS_SCRIPTABLE NS_IMETHOD CheckValidity(bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckValidity(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetCustomValidity(const nsAString & error) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCustomValidity(error); } \
  NS_SCRIPTABLE NS_IMETHOD Select(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Select(); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectionStart(PRInt32 *aSelectionStart) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectionStart(aSelectionStart); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelectionStart(PRInt32 aSelectionStart) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelectionStart(aSelectionStart); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectionEnd(PRInt32 *aSelectionEnd) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectionEnd(aSelectionEnd); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelectionEnd(PRInt32 aSelectionEnd) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelectionEnd(aSelectionEnd); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelectionRange(PRInt32 selectionStart, PRInt32 selectionEnd, const nsAString & direction) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelectionRange(selectionStart, selectionEnd, direction); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelectionDirection(nsAString & aSelectionDirection) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectionDirection(aSelectionDirection); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelectionDirection(const nsAString & aSelectionDirection) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelectionDirection(aSelectionDirection); } \
  NS_SCRIPTABLE NS_IMETHOD GetControllers(nsIControllers * *aControllers) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetControllers(aControllers); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLTextAreaElement : public nsIDOMHTMLTextAreaElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLTEXTAREAELEMENT

  nsDOMHTMLTextAreaElement();

private:
  ~nsDOMHTMLTextAreaElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMHTMLTextAreaElement, nsIDOMHTMLTextAreaElement)

nsDOMHTMLTextAreaElement::nsDOMHTMLTextAreaElement()
{
  /* member initializers and constructor code */
}

nsDOMHTMLTextAreaElement::~nsDOMHTMLTextAreaElement()
{
  /* destructor code */
}

/* attribute boolean autofocus; */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::GetAutofocus(bool *aAutofocus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLTextAreaElement::SetAutofocus(bool aAutofocus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long cols; */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::GetCols(PRUint32 *aCols)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLTextAreaElement::SetCols(PRUint32 aCols)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean disabled; */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::GetDisabled(bool *aDisabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLTextAreaElement::SetDisabled(bool aDisabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMHTMLFormElement form; */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::GetForm(nsIDOMHTMLFormElement * *aForm)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long maxLength; */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::GetMaxLength(PRInt32 *aMaxLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLTextAreaElement::SetMaxLength(PRInt32 aMaxLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString name; */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLTextAreaElement::SetName(const nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString placeholder; */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::GetPlaceholder(nsAString & aPlaceholder)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLTextAreaElement::SetPlaceholder(const nsAString & aPlaceholder)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean readOnly; */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::GetReadOnly(bool *aReadOnly)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLTextAreaElement::SetReadOnly(bool aReadOnly)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean required; */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::GetRequired(bool *aRequired)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLTextAreaElement::SetRequired(bool aRequired)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long rows; */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::GetRows(PRUint32 *aRows)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLTextAreaElement::SetRows(PRUint32 aRows)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [Null(Stringify)] attribute DOMString wrap; */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::GetWrap(nsAString & aWrap)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLTextAreaElement::SetWrap(const nsAString & aWrap)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString type; */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString defaultValue; */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::GetDefaultValue(nsAString & aDefaultValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLTextAreaElement::SetDefaultValue(const nsAString & aDefaultValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString value; */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::GetValue(nsAString & aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLTextAreaElement::SetValue(const nsAString & aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long textLength; */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::GetTextLength(PRInt32 *aTextLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean willValidate; */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::GetWillValidate(bool *aWillValidate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMValidityState validity; */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::GetValidity(nsIDOMValidityState * *aValidity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString validationMessage; */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::GetValidationMessage(nsAString & aValidationMessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean checkValidity (); */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::CheckValidity(bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCustomValidity (in DOMString error); */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::SetCustomValidity(const nsAString & error)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void select (); */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::Select()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long selectionStart; */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::GetSelectionStart(PRInt32 *aSelectionStart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLTextAreaElement::SetSelectionStart(PRInt32 aSelectionStart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long selectionEnd; */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::GetSelectionEnd(PRInt32 *aSelectionEnd)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLTextAreaElement::SetSelectionEnd(PRInt32 aSelectionEnd)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setSelectionRange (in long selectionStart, in long selectionEnd, [optional] in DOMString direction); */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::SetSelectionRange(PRInt32 selectionStart, PRInt32 selectionEnd, const nsAString & direction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString selectionDirection; */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::GetSelectionDirection(nsAString & aSelectionDirection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLTextAreaElement::SetSelectionDirection(const nsAString & aSelectionDirection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIControllers controllers; */
NS_IMETHODIMP nsDOMHTMLTextAreaElement::GetControllers(nsIControllers * *aControllers)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMHTMLTextAreaElement_h__ */
