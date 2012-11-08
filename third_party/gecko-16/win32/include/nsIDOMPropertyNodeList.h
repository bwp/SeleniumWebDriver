/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/html/nsIDOMPropertyNodeList.idl
 */

#ifndef __gen_nsIDOMPropertyNodeList_h__
#define __gen_nsIDOMPropertyNodeList_h__


#ifndef __gen_nsIVariant_h__
#include "nsIVariant.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMNode; /* forward declaration */

class nsIContent; /* forward declaration */


/* starting interface:    nsIDOMPropertyNodeList */
#define NS_IDOMPROPERTYNODELIST_IID_STR "255cc828-49e8-4fb0-8e36-875e6e072da3"

#define NS_IDOMPROPERTYNODELIST_IID \
  {0x255cc828, 0x49e8, 0x4fb0, \
    { 0x8e, 0x36, 0x87, 0x5e, 0x6e, 0x07, 0x2d, 0xa3 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMPropertyNodeList : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMPROPERTYNODELIST_IID)

  /* [forward(getNodeAt),getter] nsIDOMNode item (in unsigned long index); */
  NS_SCRIPTABLE NS_IMETHOD Item(PRUint32 index, nsIDOMNode * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute unsigned long length; */
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) = 0;

  /* [noscript,nostdcall,notxpcom] nsIContent getNodeAt (in unsigned long index); */
  virtual nsIContent * GetNodeAt(PRUint32 index) = 0;

  /* nsIVariant getValues (); */
  NS_SCRIPTABLE NS_IMETHOD GetValues(nsIVariant * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMPropertyNodeList, NS_IDOMPROPERTYNODELIST_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMPROPERTYNODELIST \
  NS_SCRIPTABLE NS_IMETHOD Item(PRUint32 index, nsIDOMNode * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength); \
  virtual nsIContent * GetNodeAt(PRUint32 index); \
  NS_SCRIPTABLE NS_IMETHOD GetValues(nsIVariant * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMPROPERTYNODELIST(_to) \
  NS_SCRIPTABLE NS_IMETHOD Item(PRUint32 index, nsIDOMNode * *_retval NS_OUTPARAM) { return _to Item(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) { return _to GetLength(aLength); } \
  virtual nsIContent * GetNodeAt(PRUint32 index) { return _to GetNodeAt(index); } \
  NS_SCRIPTABLE NS_IMETHOD GetValues(nsIVariant * *_retval NS_OUTPARAM) { return _to GetValues(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMPROPERTYNODELIST(_to) \
  NS_SCRIPTABLE NS_IMETHOD Item(PRUint32 index, nsIDOMNode * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Item(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLength(aLength); } \
  virtual nsIContent * GetNodeAt(PRUint32 index) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNodeAt(index); } \
  NS_SCRIPTABLE NS_IMETHOD GetValues(nsIVariant * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValues(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMPropertyNodeList : public nsIDOMPropertyNodeList
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMPROPERTYNODELIST

  nsDOMPropertyNodeList();

private:
  ~nsDOMPropertyNodeList();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMPropertyNodeList, nsIDOMPropertyNodeList)

nsDOMPropertyNodeList::nsDOMPropertyNodeList()
{
  /* member initializers and constructor code */
}

nsDOMPropertyNodeList::~nsDOMPropertyNodeList()
{
  /* destructor code */
}

/* [forward(getNodeAt),getter] nsIDOMNode item (in unsigned long index); */
NS_IMETHODIMP nsDOMPropertyNodeList::Item(PRUint32 index, nsIDOMNode * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long length; */
NS_IMETHODIMP nsDOMPropertyNodeList::GetLength(PRUint32 *aLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,nostdcall,notxpcom] nsIContent getNodeAt (in unsigned long index); */
nsIContent * nsDOMPropertyNodeList::GetNodeAt(PRUint32 index)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIVariant getValues (); */
NS_IMETHODIMP nsDOMPropertyNodeList::GetValues(nsIVariant * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMPropertyNodeList_h__ */
