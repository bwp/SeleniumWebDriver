/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/svg/nsIDOMSVGLengthList.idl
 */

#ifndef __gen_nsIDOMSVGLengthList_h__
#define __gen_nsIDOMSVGLengthList_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMSVGLength; /* forward declaration */


/* starting interface:    nsIDOMSVGLengthList */
#define NS_IDOMSVGLENGTHLIST_IID_STR "f8c89734-d6b4-4a56-bdf5-1ce1104dc1ab"

#define NS_IDOMSVGLENGTHLIST_IID \
  {0xf8c89734, 0xd6b4, 0x4a56, \
    { 0xbd, 0xf5, 0x1c, 0xe1, 0x10, 0x4d, 0xc1, 0xab }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGLengthList : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGLENGTHLIST_IID)

  /* readonly attribute unsigned long numberOfItems; */
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfItems(PRUint32 *aNumberOfItems) = 0;

  /* readonly attribute unsigned long length; */
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) = 0;

  /* void clear (); */
  NS_SCRIPTABLE NS_IMETHOD Clear(void) = 0;

  /* nsIDOMSVGLength initialize (in nsIDOMSVGLength newItem); */
  NS_SCRIPTABLE NS_IMETHOD Initialize(nsIDOMSVGLength *newItem, nsIDOMSVGLength * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMSVGLength getItem (in unsigned long index); */
  NS_SCRIPTABLE NS_IMETHOD GetItem(PRUint32 index, nsIDOMSVGLength * *_retval NS_OUTPARAM) = 0;

  /* [getter,noscript,nostdcall,notxpcom] nsIDOMSVGLength getItemAt (in unsigned long index); */
  virtual nsIDOMSVGLength * GetItemAt(PRUint32 index) = 0;

  /* nsIDOMSVGLength insertItemBefore (in nsIDOMSVGLength newItem, in unsigned long index); */
  NS_SCRIPTABLE NS_IMETHOD InsertItemBefore(nsIDOMSVGLength *newItem, PRUint32 index, nsIDOMSVGLength * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMSVGLength replaceItem (in nsIDOMSVGLength newItem, in unsigned long index); */
  NS_SCRIPTABLE NS_IMETHOD ReplaceItem(nsIDOMSVGLength *newItem, PRUint32 index, nsIDOMSVGLength * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMSVGLength removeItem (in unsigned long index); */
  NS_SCRIPTABLE NS_IMETHOD RemoveItem(PRUint32 index, nsIDOMSVGLength * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMSVGLength appendItem (in nsIDOMSVGLength newItem); */
  NS_SCRIPTABLE NS_IMETHOD AppendItem(nsIDOMSVGLength *newItem, nsIDOMSVGLength * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGLengthList, NS_IDOMSVGLENGTHLIST_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGLENGTHLIST \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfItems(PRUint32 *aNumberOfItems); \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength); \
  NS_SCRIPTABLE NS_IMETHOD Clear(void); \
  NS_SCRIPTABLE NS_IMETHOD Initialize(nsIDOMSVGLength *newItem, nsIDOMSVGLength * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetItem(PRUint32 index, nsIDOMSVGLength * *_retval NS_OUTPARAM); \
  virtual nsIDOMSVGLength * GetItemAt(PRUint32 index); \
  NS_SCRIPTABLE NS_IMETHOD InsertItemBefore(nsIDOMSVGLength *newItem, PRUint32 index, nsIDOMSVGLength * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReplaceItem(nsIDOMSVGLength *newItem, PRUint32 index, nsIDOMSVGLength * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RemoveItem(PRUint32 index, nsIDOMSVGLength * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AppendItem(nsIDOMSVGLength *newItem, nsIDOMSVGLength * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGLENGTHLIST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfItems(PRUint32 *aNumberOfItems) { return _to GetNumberOfItems(aNumberOfItems); } \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) { return _to GetLength(aLength); } \
  NS_SCRIPTABLE NS_IMETHOD Clear(void) { return _to Clear(); } \
  NS_SCRIPTABLE NS_IMETHOD Initialize(nsIDOMSVGLength *newItem, nsIDOMSVGLength * *_retval NS_OUTPARAM) { return _to Initialize(newItem, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetItem(PRUint32 index, nsIDOMSVGLength * *_retval NS_OUTPARAM) { return _to GetItem(index, _retval); } \
  virtual nsIDOMSVGLength * GetItemAt(PRUint32 index) { return _to GetItemAt(index); } \
  NS_SCRIPTABLE NS_IMETHOD InsertItemBefore(nsIDOMSVGLength *newItem, PRUint32 index, nsIDOMSVGLength * *_retval NS_OUTPARAM) { return _to InsertItemBefore(newItem, index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReplaceItem(nsIDOMSVGLength *newItem, PRUint32 index, nsIDOMSVGLength * *_retval NS_OUTPARAM) { return _to ReplaceItem(newItem, index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveItem(PRUint32 index, nsIDOMSVGLength * *_retval NS_OUTPARAM) { return _to RemoveItem(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AppendItem(nsIDOMSVGLength *newItem, nsIDOMSVGLength * *_retval NS_OUTPARAM) { return _to AppendItem(newItem, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGLENGTHLIST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfItems(PRUint32 *aNumberOfItems) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNumberOfItems(aNumberOfItems); } \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLength(aLength); } \
  NS_SCRIPTABLE NS_IMETHOD Clear(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Clear(); } \
  NS_SCRIPTABLE NS_IMETHOD Initialize(nsIDOMSVGLength *newItem, nsIDOMSVGLength * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Initialize(newItem, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetItem(PRUint32 index, nsIDOMSVGLength * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetItem(index, _retval); } \
  virtual nsIDOMSVGLength * GetItemAt(PRUint32 index) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetItemAt(index); } \
  NS_SCRIPTABLE NS_IMETHOD InsertItemBefore(nsIDOMSVGLength *newItem, PRUint32 index, nsIDOMSVGLength * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertItemBefore(newItem, index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReplaceItem(nsIDOMSVGLength *newItem, PRUint32 index, nsIDOMSVGLength * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReplaceItem(newItem, index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveItem(PRUint32 index, nsIDOMSVGLength * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveItem(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AppendItem(nsIDOMSVGLength *newItem, nsIDOMSVGLength * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendItem(newItem, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGLengthList : public nsIDOMSVGLengthList
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGLENGTHLIST

  nsDOMSVGLengthList();

private:
  ~nsDOMSVGLengthList();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGLengthList, nsIDOMSVGLengthList)

nsDOMSVGLengthList::nsDOMSVGLengthList()
{
  /* member initializers and constructor code */
}

nsDOMSVGLengthList::~nsDOMSVGLengthList()
{
  /* destructor code */
}

/* readonly attribute unsigned long numberOfItems; */
NS_IMETHODIMP nsDOMSVGLengthList::GetNumberOfItems(PRUint32 *aNumberOfItems)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long length; */
NS_IMETHODIMP nsDOMSVGLengthList::GetLength(PRUint32 *aLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clear (); */
NS_IMETHODIMP nsDOMSVGLengthList::Clear()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMSVGLength initialize (in nsIDOMSVGLength newItem); */
NS_IMETHODIMP nsDOMSVGLengthList::Initialize(nsIDOMSVGLength *newItem, nsIDOMSVGLength * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMSVGLength getItem (in unsigned long index); */
NS_IMETHODIMP nsDOMSVGLengthList::GetItem(PRUint32 index, nsIDOMSVGLength * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [getter,noscript,nostdcall,notxpcom] nsIDOMSVGLength getItemAt (in unsigned long index); */
nsIDOMSVGLength * nsDOMSVGLengthList::GetItemAt(PRUint32 index)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMSVGLength insertItemBefore (in nsIDOMSVGLength newItem, in unsigned long index); */
NS_IMETHODIMP nsDOMSVGLengthList::InsertItemBefore(nsIDOMSVGLength *newItem, PRUint32 index, nsIDOMSVGLength * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMSVGLength replaceItem (in nsIDOMSVGLength newItem, in unsigned long index); */
NS_IMETHODIMP nsDOMSVGLengthList::ReplaceItem(nsIDOMSVGLength *newItem, PRUint32 index, nsIDOMSVGLength * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMSVGLength removeItem (in unsigned long index); */
NS_IMETHODIMP nsDOMSVGLengthList::RemoveItem(PRUint32 index, nsIDOMSVGLength * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMSVGLength appendItem (in nsIDOMSVGLength newItem); */
NS_IMETHODIMP nsDOMSVGLengthList::AppendItem(nsIDOMSVGLength *newItem, nsIDOMSVGLength * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMSVGLengthList_h__ */
