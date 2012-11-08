/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/file/nsIDOMLockedFile.idl
 */

#ifndef __gen_nsIDOMLockedFile_h__
#define __gen_nsIDOMLockedFile_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMEventListener; /* forward declaration */

class nsIDOMFileHandle; /* forward declaration */

class nsIDOMFileRequest; /* forward declaration */


/* starting interface:    nsIDOMLockedFile */
#define NS_IDOMLOCKEDFILE_IID_STR "696a4cbf-603d-40e1-840a-e468ee363871"

#define NS_IDOMLOCKEDFILE_IID \
  {0x696a4cbf, 0x603d, 0x40e1, \
    { 0x84, 0x0a, 0xe4, 0x68, 0xee, 0x36, 0x38, 0x71 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMLockedFile : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMLOCKEDFILE_IID)

  /* readonly attribute nsIDOMFileHandle fileHandle; */
  NS_SCRIPTABLE NS_IMETHOD GetFileHandle(nsIDOMFileHandle * *aFileHandle) = 0;

  /* readonly attribute DOMString mode; */
  NS_SCRIPTABLE NS_IMETHOD GetMode(nsAString & aMode) = 0;

  /* readonly attribute boolean active; */
  NS_SCRIPTABLE NS_IMETHOD GetActive(bool *aActive) = 0;

  /* [implicit_jscontext] attribute jsval location; */
  NS_SCRIPTABLE NS_IMETHOD GetLocation(JSContext* cx, JS::Value *aLocation) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetLocation(JSContext* cx, const JS::Value & aLocation) = 0;

  /* [implicit_jscontext] nsIDOMFileRequest getMetadata ([optional] in jsval parameters); */
  NS_SCRIPTABLE NS_IMETHOD GetMetadata(const JS::Value & parameters, JSContext* cx, nsIDOMFileRequest * *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] nsIDOMFileRequest readAsArrayBuffer (in unsigned long long size); */
  NS_SCRIPTABLE NS_IMETHOD ReadAsArrayBuffer(PRUint64 size, JSContext* cx, nsIDOMFileRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMFileRequest readAsText (in unsigned long long size, [optional] in DOMString encoding); */
  NS_SCRIPTABLE NS_IMETHOD ReadAsText(PRUint64 size, const nsAString & encoding, nsIDOMFileRequest * *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] nsIDOMFileRequest write (in jsval value); */
  NS_SCRIPTABLE NS_IMETHOD Write(const JS::Value & value, JSContext* cx, nsIDOMFileRequest * *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] nsIDOMFileRequest append (in jsval value); */
  NS_SCRIPTABLE NS_IMETHOD Append(const JS::Value & value, JSContext* cx, nsIDOMFileRequest * *_retval NS_OUTPARAM) = 0;

  /* [optional_argc] nsIDOMFileRequest truncate ([optional] in unsigned long long size); */
  NS_SCRIPTABLE NS_IMETHOD Truncate(PRUint64 size, PRUint8 _argc, nsIDOMFileRequest * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMFileRequest flush (); */
  NS_SCRIPTABLE NS_IMETHOD Flush(nsIDOMFileRequest * *_retval NS_OUTPARAM) = 0;

  /* void abort (); */
  NS_SCRIPTABLE NS_IMETHOD Abort(void) = 0;

  /* attribute nsIDOMEventListener oncomplete; */
  NS_SCRIPTABLE NS_IMETHOD GetOncomplete(nsIDOMEventListener * *aOncomplete) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOncomplete(nsIDOMEventListener *aOncomplete) = 0;

  /* attribute nsIDOMEventListener onabort; */
  NS_SCRIPTABLE NS_IMETHOD GetOnabort(nsIDOMEventListener * *aOnabort) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnabort(nsIDOMEventListener *aOnabort) = 0;

  /* attribute nsIDOMEventListener onerror; */
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMLockedFile, NS_IDOMLOCKEDFILE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMLOCKEDFILE \
  NS_SCRIPTABLE NS_IMETHOD GetFileHandle(nsIDOMFileHandle * *aFileHandle); \
  NS_SCRIPTABLE NS_IMETHOD GetMode(nsAString & aMode); \
  NS_SCRIPTABLE NS_IMETHOD GetActive(bool *aActive); \
  NS_SCRIPTABLE NS_IMETHOD GetLocation(JSContext* cx, JS::Value *aLocation); \
  NS_SCRIPTABLE NS_IMETHOD SetLocation(JSContext* cx, const JS::Value & aLocation); \
  NS_SCRIPTABLE NS_IMETHOD GetMetadata(const JS::Value & parameters, JSContext* cx, nsIDOMFileRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReadAsArrayBuffer(PRUint64 size, JSContext* cx, nsIDOMFileRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ReadAsText(PRUint64 size, const nsAString & encoding, nsIDOMFileRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Write(const JS::Value & value, JSContext* cx, nsIDOMFileRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Append(const JS::Value & value, JSContext* cx, nsIDOMFileRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Truncate(PRUint64 size, PRUint8 _argc, nsIDOMFileRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Flush(nsIDOMFileRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Abort(void); \
  NS_SCRIPTABLE NS_IMETHOD GetOncomplete(nsIDOMEventListener * *aOncomplete); \
  NS_SCRIPTABLE NS_IMETHOD SetOncomplete(nsIDOMEventListener *aOncomplete); \
  NS_SCRIPTABLE NS_IMETHOD GetOnabort(nsIDOMEventListener * *aOnabort); \
  NS_SCRIPTABLE NS_IMETHOD SetOnabort(nsIDOMEventListener *aOnabort); \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror); \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMLOCKEDFILE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFileHandle(nsIDOMFileHandle * *aFileHandle) { return _to GetFileHandle(aFileHandle); } \
  NS_SCRIPTABLE NS_IMETHOD GetMode(nsAString & aMode) { return _to GetMode(aMode); } \
  NS_SCRIPTABLE NS_IMETHOD GetActive(bool *aActive) { return _to GetActive(aActive); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocation(JSContext* cx, JS::Value *aLocation) { return _to GetLocation(cx, aLocation); } \
  NS_SCRIPTABLE NS_IMETHOD SetLocation(JSContext* cx, const JS::Value & aLocation) { return _to SetLocation(cx, aLocation); } \
  NS_SCRIPTABLE NS_IMETHOD GetMetadata(const JS::Value & parameters, JSContext* cx, nsIDOMFileRequest * *_retval NS_OUTPARAM) { return _to GetMetadata(parameters, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadAsArrayBuffer(PRUint64 size, JSContext* cx, nsIDOMFileRequest * *_retval NS_OUTPARAM) { return _to ReadAsArrayBuffer(size, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadAsText(PRUint64 size, const nsAString & encoding, nsIDOMFileRequest * *_retval NS_OUTPARAM) { return _to ReadAsText(size, encoding, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Write(const JS::Value & value, JSContext* cx, nsIDOMFileRequest * *_retval NS_OUTPARAM) { return _to Write(value, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Append(const JS::Value & value, JSContext* cx, nsIDOMFileRequest * *_retval NS_OUTPARAM) { return _to Append(value, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Truncate(PRUint64 size, PRUint8 _argc, nsIDOMFileRequest * *_retval NS_OUTPARAM) { return _to Truncate(size, _argc, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Flush(nsIDOMFileRequest * *_retval NS_OUTPARAM) { return _to Flush(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Abort(void) { return _to Abort(); } \
  NS_SCRIPTABLE NS_IMETHOD GetOncomplete(nsIDOMEventListener * *aOncomplete) { return _to GetOncomplete(aOncomplete); } \
  NS_SCRIPTABLE NS_IMETHOD SetOncomplete(nsIDOMEventListener *aOncomplete) { return _to SetOncomplete(aOncomplete); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnabort(nsIDOMEventListener * *aOnabort) { return _to GetOnabort(aOnabort); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnabort(nsIDOMEventListener *aOnabort) { return _to SetOnabort(aOnabort); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) { return _to GetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) { return _to SetOnerror(aOnerror); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMLOCKEDFILE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFileHandle(nsIDOMFileHandle * *aFileHandle) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileHandle(aFileHandle); } \
  NS_SCRIPTABLE NS_IMETHOD GetMode(nsAString & aMode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMode(aMode); } \
  NS_SCRIPTABLE NS_IMETHOD GetActive(bool *aActive) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActive(aActive); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocation(JSContext* cx, JS::Value *aLocation) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLocation(cx, aLocation); } \
  NS_SCRIPTABLE NS_IMETHOD SetLocation(JSContext* cx, const JS::Value & aLocation) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLocation(cx, aLocation); } \
  NS_SCRIPTABLE NS_IMETHOD GetMetadata(const JS::Value & parameters, JSContext* cx, nsIDOMFileRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMetadata(parameters, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadAsArrayBuffer(PRUint64 size, JSContext* cx, nsIDOMFileRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadAsArrayBuffer(size, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadAsText(PRUint64 size, const nsAString & encoding, nsIDOMFileRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadAsText(size, encoding, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Write(const JS::Value & value, JSContext* cx, nsIDOMFileRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Write(value, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Append(const JS::Value & value, JSContext* cx, nsIDOMFileRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Append(value, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Truncate(PRUint64 size, PRUint8 _argc, nsIDOMFileRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Truncate(size, _argc, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Flush(nsIDOMFileRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Flush(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Abort(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Abort(); } \
  NS_SCRIPTABLE NS_IMETHOD GetOncomplete(nsIDOMEventListener * *aOncomplete) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOncomplete(aOncomplete); } \
  NS_SCRIPTABLE NS_IMETHOD SetOncomplete(nsIDOMEventListener *aOncomplete) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOncomplete(aOncomplete); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnabort(nsIDOMEventListener * *aOnabort) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnabort(aOnabort); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnabort(nsIDOMEventListener *aOnabort) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnabort(aOnabort); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnerror(nsIDOMEventListener * *aOnerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnerror(aOnerror); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnerror(nsIDOMEventListener *aOnerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnerror(aOnerror); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMLockedFile : public nsIDOMLockedFile
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMLOCKEDFILE

  nsDOMLockedFile();

private:
  ~nsDOMLockedFile();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMLockedFile, nsIDOMLockedFile)

nsDOMLockedFile::nsDOMLockedFile()
{
  /* member initializers and constructor code */
}

nsDOMLockedFile::~nsDOMLockedFile()
{
  /* destructor code */
}

/* readonly attribute nsIDOMFileHandle fileHandle; */
NS_IMETHODIMP nsDOMLockedFile::GetFileHandle(nsIDOMFileHandle * *aFileHandle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString mode; */
NS_IMETHODIMP nsDOMLockedFile::GetMode(nsAString & aMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean active; */
NS_IMETHODIMP nsDOMLockedFile::GetActive(bool *aActive)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval location; */
NS_IMETHODIMP nsDOMLockedFile::GetLocation(JSContext* cx, JS::Value *aLocation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMLockedFile::SetLocation(JSContext* cx, const JS::Value & aLocation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] nsIDOMFileRequest getMetadata ([optional] in jsval parameters); */
NS_IMETHODIMP nsDOMLockedFile::GetMetadata(const JS::Value & parameters, JSContext* cx, nsIDOMFileRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] nsIDOMFileRequest readAsArrayBuffer (in unsigned long long size); */
NS_IMETHODIMP nsDOMLockedFile::ReadAsArrayBuffer(PRUint64 size, JSContext* cx, nsIDOMFileRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMFileRequest readAsText (in unsigned long long size, [optional] in DOMString encoding); */
NS_IMETHODIMP nsDOMLockedFile::ReadAsText(PRUint64 size, const nsAString & encoding, nsIDOMFileRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] nsIDOMFileRequest write (in jsval value); */
NS_IMETHODIMP nsDOMLockedFile::Write(const JS::Value & value, JSContext* cx, nsIDOMFileRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] nsIDOMFileRequest append (in jsval value); */
NS_IMETHODIMP nsDOMLockedFile::Append(const JS::Value & value, JSContext* cx, nsIDOMFileRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [optional_argc] nsIDOMFileRequest truncate ([optional] in unsigned long long size); */
NS_IMETHODIMP nsDOMLockedFile::Truncate(PRUint64 size, PRUint8 _argc, nsIDOMFileRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMFileRequest flush (); */
NS_IMETHODIMP nsDOMLockedFile::Flush(nsIDOMFileRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void abort (); */
NS_IMETHODIMP nsDOMLockedFile::Abort()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener oncomplete; */
NS_IMETHODIMP nsDOMLockedFile::GetOncomplete(nsIDOMEventListener * *aOncomplete)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMLockedFile::SetOncomplete(nsIDOMEventListener *aOncomplete)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onabort; */
NS_IMETHODIMP nsDOMLockedFile::GetOnabort(nsIDOMEventListener * *aOnabort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMLockedFile::SetOnabort(nsIDOMEventListener *aOnabort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onerror; */
NS_IMETHODIMP nsDOMLockedFile::GetOnerror(nsIDOMEventListener * *aOnerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMLockedFile::SetOnerror(nsIDOMEventListener *aOnerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMLockedFile_h__ */
