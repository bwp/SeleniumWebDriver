/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/file/nsIDOMFileRequest.idl
 */

#ifndef __gen_nsIDOMFileRequest_h__
#define __gen_nsIDOMFileRequest_h__


#ifndef __gen_nsIDOMDOMRequest_h__
#include "nsIDOMDOMRequest.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMEventListener; /* forward declaration */

class nsIDOMLockedFile; /* forward declaration */


/* starting interface:    nsIDOMFileRequest */
#define NS_IDOMFILEREQUEST_IID_STR "fe06b66e-fede-4d44-ab3a-403f60d6b593"

#define NS_IDOMFILEREQUEST_IID \
  {0xfe06b66e, 0xfede, 0x4d44, \
    { 0xab, 0x3a, 0x40, 0x3f, 0x60, 0xd6, 0xb5, 0x93 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMFileRequest : public nsIDOMDOMRequest {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMFILEREQUEST_IID)

  /* readonly attribute nsIDOMLockedFile lockedFile; */
  NS_SCRIPTABLE NS_IMETHOD GetLockedFile(nsIDOMLockedFile * *aLockedFile) = 0;

  /* attribute nsIDOMEventListener onprogress; */
  NS_SCRIPTABLE NS_IMETHOD GetOnprogress(nsIDOMEventListener * *aOnprogress) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnprogress(nsIDOMEventListener *aOnprogress) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMFileRequest, NS_IDOMFILEREQUEST_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMFILEREQUEST \
  NS_SCRIPTABLE NS_IMETHOD GetLockedFile(nsIDOMLockedFile * *aLockedFile); \
  NS_SCRIPTABLE NS_IMETHOD GetOnprogress(nsIDOMEventListener * *aOnprogress); \
  NS_SCRIPTABLE NS_IMETHOD SetOnprogress(nsIDOMEventListener *aOnprogress); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMFILEREQUEST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetLockedFile(nsIDOMLockedFile * *aLockedFile) { return _to GetLockedFile(aLockedFile); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnprogress(nsIDOMEventListener * *aOnprogress) { return _to GetOnprogress(aOnprogress); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnprogress(nsIDOMEventListener *aOnprogress) { return _to SetOnprogress(aOnprogress); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMFILEREQUEST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetLockedFile(nsIDOMLockedFile * *aLockedFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLockedFile(aLockedFile); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnprogress(nsIDOMEventListener * *aOnprogress) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnprogress(aOnprogress); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnprogress(nsIDOMEventListener *aOnprogress) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnprogress(aOnprogress); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMFileRequest : public nsIDOMFileRequest
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMFILEREQUEST

  nsDOMFileRequest();

private:
  ~nsDOMFileRequest();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMFileRequest, nsIDOMFileRequest)

nsDOMFileRequest::nsDOMFileRequest()
{
  /* member initializers and constructor code */
}

nsDOMFileRequest::~nsDOMFileRequest()
{
  /* destructor code */
}

/* readonly attribute nsIDOMLockedFile lockedFile; */
NS_IMETHODIMP nsDOMFileRequest::GetLockedFile(nsIDOMLockedFile * *aLockedFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onprogress; */
NS_IMETHODIMP nsDOMFileRequest::GetOnprogress(nsIDOMEventListener * *aOnprogress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMFileRequest::SetOnprogress(nsIDOMEventListener *aOnprogress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMFileRequest_h__ */
