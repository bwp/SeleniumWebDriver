/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/css/nsIDOMCSSRule.idl
 */

#ifndef __gen_nsIDOMCSSRule_h__
#define __gen_nsIDOMCSSRule_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMCSSRule */
#define NS_IDOMCSSRULE_IID_STR "2938307a-9d70-4b63-8afc-0197e82318ad"

#define NS_IDOMCSSRULE_IID \
  {0x2938307a, 0x9d70, 0x4b63, \
    { 0x8a, 0xfc, 0x01, 0x97, 0xe8, 0x23, 0x18, 0xad }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMCSSRule : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMCSSRULE_IID)

  enum { UNKNOWN_RULE = 0U };

  enum { STYLE_RULE = 1U };

  enum { CHARSET_RULE = 2U };

  enum { IMPORT_RULE = 3U };

  enum { MEDIA_RULE = 4U };

  enum { FONT_FACE_RULE = 5U };

  enum { PAGE_RULE = 6U };

  enum { MOZ_KEYFRAMES_RULE = 7U };

  enum { MOZ_KEYFRAME_RULE = 8U };

  /* readonly attribute unsigned short type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(PRUint16 *aType) = 0;

  /* attribute DOMString cssText; */
  NS_SCRIPTABLE NS_IMETHOD GetCssText(nsAString & aCssText) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCssText(const nsAString & aCssText) = 0;

  /* readonly attribute nsIDOMCSSStyleSheet parentStyleSheet; */
  NS_SCRIPTABLE NS_IMETHOD GetParentStyleSheet(nsIDOMCSSStyleSheet * *aParentStyleSheet) = 0;

  /* readonly attribute nsIDOMCSSRule parentRule; */
  NS_SCRIPTABLE NS_IMETHOD GetParentRule(nsIDOMCSSRule * *aParentRule) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMCSSRule, NS_IDOMCSSRULE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMCSSRULE \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRUint16 *aType); \
  NS_SCRIPTABLE NS_IMETHOD GetCssText(nsAString & aCssText); \
  NS_SCRIPTABLE NS_IMETHOD SetCssText(const nsAString & aCssText); \
  NS_SCRIPTABLE NS_IMETHOD GetParentStyleSheet(nsIDOMCSSStyleSheet * *aParentStyleSheet); \
  NS_SCRIPTABLE NS_IMETHOD GetParentRule(nsIDOMCSSRule * *aParentRule); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMCSSRULE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRUint16 *aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetCssText(nsAString & aCssText) { return _to GetCssText(aCssText); } \
  NS_SCRIPTABLE NS_IMETHOD SetCssText(const nsAString & aCssText) { return _to SetCssText(aCssText); } \
  NS_SCRIPTABLE NS_IMETHOD GetParentStyleSheet(nsIDOMCSSStyleSheet * *aParentStyleSheet) { return _to GetParentStyleSheet(aParentStyleSheet); } \
  NS_SCRIPTABLE NS_IMETHOD GetParentRule(nsIDOMCSSRule * *aParentRule) { return _to GetParentRule(aParentRule); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMCSSRULE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRUint16 *aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetCssText(nsAString & aCssText) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCssText(aCssText); } \
  NS_SCRIPTABLE NS_IMETHOD SetCssText(const nsAString & aCssText) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCssText(aCssText); } \
  NS_SCRIPTABLE NS_IMETHOD GetParentStyleSheet(nsIDOMCSSStyleSheet * *aParentStyleSheet) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParentStyleSheet(aParentStyleSheet); } \
  NS_SCRIPTABLE NS_IMETHOD GetParentRule(nsIDOMCSSRule * *aParentRule) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParentRule(aParentRule); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMCSSRule : public nsIDOMCSSRule
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMCSSRULE

  nsDOMCSSRule();

private:
  ~nsDOMCSSRule();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMCSSRule, nsIDOMCSSRule)

nsDOMCSSRule::nsDOMCSSRule()
{
  /* member initializers and constructor code */
}

nsDOMCSSRule::~nsDOMCSSRule()
{
  /* destructor code */
}

/* readonly attribute unsigned short type; */
NS_IMETHODIMP nsDOMCSSRule::GetType(PRUint16 *aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString cssText; */
NS_IMETHODIMP nsDOMCSSRule::GetCssText(nsAString & aCssText)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMCSSRule::SetCssText(const nsAString & aCssText)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMCSSStyleSheet parentStyleSheet; */
NS_IMETHODIMP nsDOMCSSRule::GetParentStyleSheet(nsIDOMCSSStyleSheet * *aParentStyleSheet)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMCSSRule parentRule; */
NS_IMETHODIMP nsDOMCSSRule::GetParentRule(nsIDOMCSSRule * *aParentRule)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMCSSRule_h__ */
