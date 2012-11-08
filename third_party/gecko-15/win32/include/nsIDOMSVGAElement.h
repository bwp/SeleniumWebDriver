/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/svg/nsIDOMSVGAElement.idl
 */

#ifndef __gen_nsIDOMSVGAElement_h__
#define __gen_nsIDOMSVGAElement_h__


#ifndef __gen_nsIDOMSVGElement_h__
#include "nsIDOMSVGElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMSVGAnimatedString; /* forward declaration */


/* starting interface:    nsIDOMSVGAElement */
#define NS_IDOMSVGAELEMENT_IID_STR "dbc9b56c-3de3-4475-a934-ee88d3bcb03c"

#define NS_IDOMSVGAELEMENT_IID \
  {0xdbc9b56c, 0x3de3, 0x4475, \
    { 0xa9, 0x34, 0xee, 0x88, 0xd3, 0xbc, 0xb0, 0x3c }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGAElement : public nsIDOMSVGElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGAELEMENT_IID)

  /* readonly attribute nsIDOMSVGAnimatedString target; */
  NS_SCRIPTABLE NS_IMETHOD GetTarget(nsIDOMSVGAnimatedString * *aTarget) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGAElement, NS_IDOMSVGAELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGAELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetTarget(nsIDOMSVGAnimatedString * *aTarget); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGAELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetTarget(nsIDOMSVGAnimatedString * *aTarget) { return _to GetTarget(aTarget); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGAELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetTarget(nsIDOMSVGAnimatedString * *aTarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTarget(aTarget); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGAElement : public nsIDOMSVGAElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGAELEMENT

  nsDOMSVGAElement();

private:
  ~nsDOMSVGAElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGAElement, nsIDOMSVGAElement)

nsDOMSVGAElement::nsDOMSVGAElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGAElement::~nsDOMSVGAElement()
{
  /* destructor code */
}

/* readonly attribute nsIDOMSVGAnimatedString target; */
NS_IMETHODIMP nsDOMSVGAElement::GetTarget(nsIDOMSVGAnimatedString * *aTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMSVGAElement_h__ */
