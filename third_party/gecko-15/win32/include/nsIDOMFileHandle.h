/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/file/nsIDOMFileHandle.idl
 */

#ifndef __gen_nsIDOMFileHandle_h__
#define __gen_nsIDOMFileHandle_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
namespace mozilla {
namespace dom {
namespace indexedDB {
class FileInfo;
}
}
}
class nsIDOMDOMRequest; /* forward declaration */

class nsIDOMEventListener; /* forward declaration */

class nsIDOMLockedFile; /* forward declaration */


/* starting interface:    nsIDOMFileHandle */
#define NS_IDOMFILEHANDLE_IID_STR "882ad3d0-6fb1-4841-8e17-0ba17b11edc8"

#define NS_IDOMFILEHANDLE_IID \
  {0x882ad3d0, 0x6fb1, 0x4841, \
    { 0x8e, 0x17, 0x0b, 0xa1, 0x7b, 0x11, 0xed, 0xc8 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMFileHandle : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMFILEHANDLE_IID)

  /* readonly attribute DOMString name; */
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) = 0;

  /* readonly attribute DOMString type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) = 0;

  /* [optional_argc] nsIDOMLockedFile open ([optional] in DOMString mode); */
  NS_SCRIPTABLE NS_IMETHOD Open(const nsAString & mode, PRUint8 _argc, nsIDOMLockedFile * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMDOMRequest getFile (); */
  NS_SCRIPTABLE NS_IMETHOD GetFile(nsIDOMDOMRequest * *_retval NS_OUTPARAM) = 0;

  /* [notxpcom] long long getFileId (); */
  NS_IMETHOD_(PRInt64) GetFileId(void) = 0;

  /* [notxpcom] FileInfo getFileInfo (); */
  NS_IMETHOD_(mozilla::dom::indexedDB::FileInfo *) GetFileInfo(void) = 0;

  /* attribute nsIDOMEventListener onabort; */
  NS_SCRIPTABLE NS_IMETHOD GetOnabort(nsIDOMEventListener * *aOnabort) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnabort(nsIDOMEventListener *aOnabort) = 0;

  /* attribute nsIDOMEventListener onerror; */
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMFileHandle, NS_IDOMFILEHANDLE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMFILEHANDLE \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName); \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType); \
  NS_SCRIPTABLE NS_IMETHOD Open(const nsAString & mode, PRUint8 _argc, nsIDOMLockedFile * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFile(nsIDOMDOMRequest * *_retval NS_OUTPARAM); \
  NS_IMETHOD_(PRInt64) GetFileId(void); \
  NS_IMETHOD_(mozilla::dom::indexedDB::FileInfo *) GetFileInfo(void); \
  NS_SCRIPTABLE NS_IMETHOD GetOnabort(nsIDOMEventListener * *aOnabort); \
  NS_SCRIPTABLE NS_IMETHOD SetOnabort(nsIDOMEventListener *aOnabort); \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror); \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMFILEHANDLE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) { return _to GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD Open(const nsAString & mode, PRUint8 _argc, nsIDOMLockedFile * *_retval NS_OUTPARAM) { return _to Open(mode, _argc, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFile(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return _to GetFile(_retval); } \
  NS_IMETHOD_(PRInt64) GetFileId(void) { return _to GetFileId(); } \
  NS_IMETHOD_(mozilla::dom::indexedDB::FileInfo *) GetFileInfo(void) { return _to GetFileInfo(); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnabort(nsIDOMEventListener * *aOnabort) { return _to GetOnabort(aOnabort); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnabort(nsIDOMEventListener *aOnabort) { return _to SetOnabort(aOnabort); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) { return _to GetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) { return _to SetOnerror(aOnerror); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMFILEHANDLE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD Open(const nsAString & mode, PRUint8 _argc, nsIDOMLockedFile * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Open(mode, _argc, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFile(nsIDOMDOMRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFile(_retval); } \
  NS_IMETHOD_(PRInt64) GetFileId(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileId(); } \
  NS_IMETHOD_(mozilla::dom::indexedDB::FileInfo *) GetFileInfo(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileInfo(); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnabort(nsIDOMEventListener * *aOnabort) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnabort(aOnabort); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnabort(nsIDOMEventListener *aOnabort) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnabort(aOnabort); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnerror(aOnerror); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMFileHandle : public nsIDOMFileHandle
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMFILEHANDLE

  nsDOMFileHandle();

private:
  ~nsDOMFileHandle();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMFileHandle, nsIDOMFileHandle)

nsDOMFileHandle::nsDOMFileHandle()
{
  /* member initializers and constructor code */
}

nsDOMFileHandle::~nsDOMFileHandle()
{
  /* destructor code */
}

/* readonly attribute DOMString name; */
NS_IMETHODIMP nsDOMFileHandle::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString type; */
NS_IMETHODIMP nsDOMFileHandle::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [optional_argc] nsIDOMLockedFile open ([optional] in DOMString mode); */
NS_IMETHODIMP nsDOMFileHandle::Open(const nsAString & mode, PRUint8 _argc, nsIDOMLockedFile * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest getFile (); */
NS_IMETHODIMP nsDOMFileHandle::GetFile(nsIDOMDOMRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] long long getFileId (); */
NS_IMETHODIMP_(PRInt64) nsDOMFileHandle::GetFileId()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] FileInfo getFileInfo (); */
NS_IMETHODIMP_(mozilla::dom::indexedDB::FileInfo *) nsDOMFileHandle::GetFileInfo()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onabort; */
NS_IMETHODIMP nsDOMFileHandle::GetOnabort(nsIDOMEventListener * *aOnabort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMFileHandle::SetOnabort(nsIDOMEventListener *aOnabort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onerror; */
NS_IMETHODIMP nsDOMFileHandle::GetOnerror(nsIDOMEventListener * *aOnerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMFileHandle::SetOnerror(nsIDOMEventListener *aOnerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMFileHandle_h__ */
