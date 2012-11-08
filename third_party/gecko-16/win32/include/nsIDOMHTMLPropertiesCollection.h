/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/html/nsIDOMHTMLPropertiesCollection.idl
 */

#ifndef __gen_nsIDOMHTMLPropertiesCollection_h__
#define __gen_nsIDOMHTMLPropertiesCollection_h__


#ifndef __gen_nsIDOMHTMLElement_h__
#include "nsIDOMHTMLElement.h"
#endif

#ifndef __gen_nsIDOMPropertyNodeList_h__
#include "nsIDOMPropertyNodeList.h"
#endif

#ifndef __gen_nsIDOMDOMStringList_h__
#include "nsIDOMDOMStringList.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMHTMLPropertiesCollection */
#define NS_IDOMHTMLPROPERTIESCOLLECTION_IID_STR "da1101db-d1d7-465d-9fd6-49ec9960cb20"

#define NS_IDOMHTMLPROPERTIESCOLLECTION_IID \
  {0xda1101db, 0xd1d7, 0x465d, \
    { 0x9f, 0xd6, 0x49, 0xec, 0x99, 0x60, 0xcb, 0x20 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMHTMLPropertiesCollection : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMHTMLPROPERTIESCOLLECTION_IID)

  /* readonly attribute unsigned long length; */
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) = 0;

  /* readonly attribute nsIDOMDOMStringList names; */
  NS_SCRIPTABLE NS_IMETHOD GetNames(nsIDOMDOMStringList * *aNames) = 0;

  /* [forward(getNodeAt),getter] nsIDOMNode item (in unsigned long index); */
  NS_SCRIPTABLE NS_IMETHOD Item(PRUint32 index, nsIDOMNode * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMPropertyNodeList namedItem (in DOMString name); */
  NS_SCRIPTABLE NS_IMETHOD NamedItem(const nsAString & name, nsIDOMPropertyNodeList * *_retval NS_OUTPARAM) = 0;

  /* [noscript,nostdcall,notxpcom] nsIContent getNodeAt (in unsigned long index); */
  virtual nsIContent * GetNodeAt(PRUint32 index) = 0;

  /* [noscript,nostdcall,notxpcom] nsISupports getNamedItem (in DOMString name, out nsWrapperCachePtr cache); */
  virtual nsISupports * GetNamedItem(const nsAString & name, nsWrapperCache **cache NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMHTMLPropertiesCollection, NS_IDOMHTMLPROPERTIESCOLLECTION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLPROPERTIESCOLLECTION \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength); \
  NS_SCRIPTABLE NS_IMETHOD GetNames(nsIDOMDOMStringList * *aNames); \
  NS_SCRIPTABLE NS_IMETHOD Item(PRUint32 index, nsIDOMNode * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD NamedItem(const nsAString & name, nsIDOMPropertyNodeList * *_retval NS_OUTPARAM); \
  virtual nsIContent * GetNodeAt(PRUint32 index); \
  virtual nsISupports * GetNamedItem(const nsAString & name, nsWrapperCache **cache NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLPROPERTIESCOLLECTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) { return _to GetLength(aLength); } \
  NS_SCRIPTABLE NS_IMETHOD GetNames(nsIDOMDOMStringList * *aNames) { return _to GetNames(aNames); } \
  NS_SCRIPTABLE NS_IMETHOD Item(PRUint32 index, nsIDOMNode * *_retval NS_OUTPARAM) { return _to Item(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD NamedItem(const nsAString & name, nsIDOMPropertyNodeList * *_retval NS_OUTPARAM) { return _to NamedItem(name, _retval); } \
  virtual nsIContent * GetNodeAt(PRUint32 index) { return _to GetNodeAt(index); } \
  virtual nsISupports * GetNamedItem(const nsAString & name, nsWrapperCache **cache NS_OUTPARAM) { return _to GetNamedItem(name, cache); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLPROPERTIESCOLLECTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLength(aLength); } \
  NS_SCRIPTABLE NS_IMETHOD GetNames(nsIDOMDOMStringList * *aNames) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNames(aNames); } \
  NS_SCRIPTABLE NS_IMETHOD Item(PRUint32 index, nsIDOMNode * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Item(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD NamedItem(const nsAString & name, nsIDOMPropertyNodeList * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->NamedItem(name, _retval); } \
  virtual nsIContent * GetNodeAt(PRUint32 index) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNodeAt(index); } \
  virtual nsISupports * GetNamedItem(const nsAString & name, nsWrapperCache **cache NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNamedItem(name, cache); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLPropertiesCollection : public nsIDOMHTMLPropertiesCollection
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLPROPERTIESCOLLECTION

  nsDOMHTMLPropertiesCollection();

private:
  ~nsDOMHTMLPropertiesCollection();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMHTMLPropertiesCollection, nsIDOMHTMLPropertiesCollection)

nsDOMHTMLPropertiesCollection::nsDOMHTMLPropertiesCollection()
{
  /* member initializers and constructor code */
}

nsDOMHTMLPropertiesCollection::~nsDOMHTMLPropertiesCollection()
{
  /* destructor code */
}

/* readonly attribute unsigned long length; */
NS_IMETHODIMP nsDOMHTMLPropertiesCollection::GetLength(PRUint32 *aLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMDOMStringList names; */
NS_IMETHODIMP nsDOMHTMLPropertiesCollection::GetNames(nsIDOMDOMStringList * *aNames)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [forward(getNodeAt),getter] nsIDOMNode item (in unsigned long index); */
NS_IMETHODIMP nsDOMHTMLPropertiesCollection::Item(PRUint32 index, nsIDOMNode * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMPropertyNodeList namedItem (in DOMString name); */
NS_IMETHODIMP nsDOMHTMLPropertiesCollection::NamedItem(const nsAString & name, nsIDOMPropertyNodeList * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,nostdcall,notxpcom] nsIContent getNodeAt (in unsigned long index); */
nsIContent * nsDOMHTMLPropertiesCollection::GetNodeAt(PRUint32 index)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,nostdcall,notxpcom] nsISupports getNamedItem (in DOMString name, out nsWrapperCachePtr cache); */
nsISupports * nsDOMHTMLPropertiesCollection::GetNamedItem(const nsAString & name, nsWrapperCache **cache NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMHTMLPropertiesCollection_h__ */
