/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/core/nsIDOMXMLDocument.idl
 */

#ifndef __gen_nsIDOMXMLDocument_h__
#define __gen_nsIDOMXMLDocument_h__


#ifndef __gen_nsIDOMDocument_h__
#include "nsIDOMDocument.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMXMLDocument */
#define NS_IDOMXMLDOCUMENT_IID_STR "18c55efc-560b-4bdd-9776-a8d239ef7052"

#define NS_IDOMXMLDOCUMENT_IID \
  {0x18c55efc, 0x560b, 0x4bdd, \
    { 0x97, 0x76, 0xa8, 0xd2, 0x39, 0xef, 0x70, 0x52 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMXMLDocument : public nsIDOMDocument {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMXMLDOCUMENT_IID)

  /* attribute boolean async; */
  NS_SCRIPTABLE NS_IMETHOD GetAsync(bool *aAsync) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAsync(bool aAsync) = 0;

  /* boolean load (in DOMString url); */
  NS_SCRIPTABLE NS_IMETHOD Load(const nsAString & url, bool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMXMLDocument, NS_IDOMXMLDOCUMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMXMLDOCUMENT \
  NS_SCRIPTABLE NS_IMETHOD GetAsync(bool *aAsync); \
  NS_SCRIPTABLE NS_IMETHOD SetAsync(bool aAsync); \
  NS_SCRIPTABLE NS_IMETHOD Load(const nsAString & url, bool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMXMLDOCUMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAsync(bool *aAsync) { return _to GetAsync(aAsync); } \
  NS_SCRIPTABLE NS_IMETHOD SetAsync(bool aAsync) { return _to SetAsync(aAsync); } \
  NS_SCRIPTABLE NS_IMETHOD Load(const nsAString & url, bool *_retval NS_OUTPARAM) { return _to Load(url, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMXMLDOCUMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAsync(bool *aAsync) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAsync(aAsync); } \
  NS_SCRIPTABLE NS_IMETHOD SetAsync(bool aAsync) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAsync(aAsync); } \
  NS_SCRIPTABLE NS_IMETHOD Load(const nsAString & url, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Load(url, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMXMLDocument : public nsIDOMXMLDocument
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMXMLDOCUMENT

  nsDOMXMLDocument();

private:
  ~nsDOMXMLDocument();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMXMLDocument, nsIDOMXMLDocument)

nsDOMXMLDocument::nsDOMXMLDocument()
{
  /* member initializers and constructor code */
}

nsDOMXMLDocument::~nsDOMXMLDocument()
{
  /* destructor code */
}

/* attribute boolean async; */
NS_IMETHODIMP nsDOMXMLDocument::GetAsync(bool *aAsync)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXMLDocument::SetAsync(bool aAsync)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean load (in DOMString url); */
NS_IMETHODIMP nsDOMXMLDocument::Load(const nsAString & url, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMXMLDocument_h__ */
