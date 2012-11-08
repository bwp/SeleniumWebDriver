/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/toolkit/components/url-classifier/nsIUrlClassifierPrefixSet.idl
 */

#ifndef __gen_nsIUrlClassifierPrefixSet_h__
#define __gen_nsIUrlClassifierPrefixSet_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIFile_h__
#include "nsIFile.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIArray; /* forward declaration */


/* starting interface:    nsIUrlClassifierPrefixSet */
#define NS_IURLCLASSIFIERPREFIXSET_IID_STR "519c8519-0f30-426b-bb7b-c400ba0318e2"

#define NS_IURLCLASSIFIERPREFIXSET_IID \
  {0x519c8519, 0x0f30, 0x426b, \
    { 0xbb, 0x7b, 0xc4, 0x00, 0xba, 0x03, 0x18, 0xe2 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIUrlClassifierPrefixSet : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IURLCLASSIFIERPREFIXSET_IID)

  /* void setPrefixes ([array, size_is (aLength), const] in unsigned long aPrefixes, in unsigned long aLength); */
  NS_SCRIPTABLE NS_IMETHOD SetPrefixes(const PRUint32 *aPrefixes, PRUint32 aLength) = 0;

  /* boolean probe (in unsigned long aPrefix, in unsigned long aKey, inout boolean aReady); */
  NS_SCRIPTABLE NS_IMETHOD Probe(PRUint32 aPrefix, PRUint32 aKey, bool *aReady NS_INOUTPARAM, bool *_retval NS_OUTPARAM) = 0;

  /* PRUint32 getKey (); */
  NS_SCRIPTABLE NS_IMETHOD GetKey(PRUint32 *_retval NS_OUTPARAM) = 0;

  /* boolean isEmpty (); */
  NS_SCRIPTABLE NS_IMETHOD IsEmpty(bool *_retval NS_OUTPARAM) = 0;

  /* void loadFromFile (in nsIFile aFile); */
  NS_SCRIPTABLE NS_IMETHOD LoadFromFile(nsIFile *aFile) = 0;

  /* void storeToFile (in nsIFile aFile); */
  NS_SCRIPTABLE NS_IMETHOD StoreToFile(nsIFile *aFile) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIUrlClassifierPrefixSet, NS_IURLCLASSIFIERPREFIXSET_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIURLCLASSIFIERPREFIXSET \
  NS_SCRIPTABLE NS_IMETHOD SetPrefixes(const PRUint32 *aPrefixes, PRUint32 aLength); \
  NS_SCRIPTABLE NS_IMETHOD Probe(PRUint32 aPrefix, PRUint32 aKey, bool *aReady NS_INOUTPARAM, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetKey(PRUint32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsEmpty(bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD LoadFromFile(nsIFile *aFile); \
  NS_SCRIPTABLE NS_IMETHOD StoreToFile(nsIFile *aFile); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIURLCLASSIFIERPREFIXSET(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetPrefixes(const PRUint32 *aPrefixes, PRUint32 aLength) { return _to SetPrefixes(aPrefixes, aLength); } \
  NS_SCRIPTABLE NS_IMETHOD Probe(PRUint32 aPrefix, PRUint32 aKey, bool *aReady NS_INOUTPARAM, bool *_retval NS_OUTPARAM) { return _to Probe(aPrefix, aKey, aReady, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetKey(PRUint32 *_retval NS_OUTPARAM) { return _to GetKey(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsEmpty(bool *_retval NS_OUTPARAM) { return _to IsEmpty(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD LoadFromFile(nsIFile *aFile) { return _to LoadFromFile(aFile); } \
  NS_SCRIPTABLE NS_IMETHOD StoreToFile(nsIFile *aFile) { return _to StoreToFile(aFile); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIURLCLASSIFIERPREFIXSET(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetPrefixes(const PRUint32 *aPrefixes, PRUint32 aLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPrefixes(aPrefixes, aLength); } \
  NS_SCRIPTABLE NS_IMETHOD Probe(PRUint32 aPrefix, PRUint32 aKey, bool *aReady NS_INOUTPARAM, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Probe(aPrefix, aKey, aReady, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetKey(PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetKey(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsEmpty(bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsEmpty(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD LoadFromFile(nsIFile *aFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadFromFile(aFile); } \
  NS_SCRIPTABLE NS_IMETHOD StoreToFile(nsIFile *aFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->StoreToFile(aFile); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsUrlClassifierPrefixSet : public nsIUrlClassifierPrefixSet
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIURLCLASSIFIERPREFIXSET

  nsUrlClassifierPrefixSet();

private:
  ~nsUrlClassifierPrefixSet();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsUrlClassifierPrefixSet, nsIUrlClassifierPrefixSet)

nsUrlClassifierPrefixSet::nsUrlClassifierPrefixSet()
{
  /* member initializers and constructor code */
}

nsUrlClassifierPrefixSet::~nsUrlClassifierPrefixSet()
{
  /* destructor code */
}

/* void setPrefixes ([array, size_is (aLength), const] in unsigned long aPrefixes, in unsigned long aLength); */
NS_IMETHODIMP nsUrlClassifierPrefixSet::SetPrefixes(const PRUint32 *aPrefixes, PRUint32 aLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean probe (in unsigned long aPrefix, in unsigned long aKey, inout boolean aReady); */
NS_IMETHODIMP nsUrlClassifierPrefixSet::Probe(PRUint32 aPrefix, PRUint32 aKey, bool *aReady NS_INOUTPARAM, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* PRUint32 getKey (); */
NS_IMETHODIMP nsUrlClassifierPrefixSet::GetKey(PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isEmpty (); */
NS_IMETHODIMP nsUrlClassifierPrefixSet::IsEmpty(bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void loadFromFile (in nsIFile aFile); */
NS_IMETHODIMP nsUrlClassifierPrefixSet::LoadFromFile(nsIFile *aFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void storeToFile (in nsIFile aFile); */
NS_IMETHODIMP nsUrlClassifierPrefixSet::StoreToFile(nsIFile *aFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIUrlClassifierPrefixSet_h__ */
