/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/content/base/public/nsIDOMFile.idl
 */

#ifndef __gen_nsIDOMFile_h__
#define __gen_nsIDOMFile_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#include "jsapi.h"
namespace mozilla {
namespace dom {
namespace indexedDB {
class FileInfo;
class FileManager;
}
}
}
class nsIDOMFileError; /* forward declaration */

class nsIInputStream; /* forward declaration */

class nsIURI; /* forward declaration */

class nsIPrincipal; /* forward declaration */

class nsIDOMBlob; /* forward declaration */


/* starting interface:    nsIDOMBlob */
#define NS_IDOMBLOB_IID_STR "16e3f8d1-7f31-48cc-93f5-9c931a977cf6"

#define NS_IDOMBLOB_IID \
  {0x16e3f8d1, 0x7f31, 0x48cc, \
    { 0x93, 0xf5, 0x9c, 0x93, 0x1a, 0x97, 0x7c, 0xf6 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMBlob : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMBLOB_IID)

  /* readonly attribute unsigned long long size; */
  NS_SCRIPTABLE NS_IMETHOD GetSize(PRUint64 *aSize) = 0;

  /* readonly attribute DOMString type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) = 0;

  /* [noscript] readonly attribute nsIInputStream internalStream; */
  NS_IMETHOD GetInternalStream(nsIInputStream * *aInternalStream) = 0;

  /* [noscript] DOMString getInternalUrl (in nsIPrincipal principal); */
  NS_IMETHOD GetInternalUrl(nsIPrincipal *principal, nsAString & _retval NS_OUTPARAM) = 0;

  /* [optional_argc] nsIDOMBlob slice ([optional] in long long start, [optional] in long long end, [optional] in DOMString contentType); */
  NS_SCRIPTABLE NS_IMETHOD Slice(PRInt64 start, PRInt64 end, const nsAString & contentType, PRUint8 _argc, nsIDOMBlob * *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext,optional_argc] nsIDOMBlob mozSlice ([optional] in long long start, [optional] in long long end, [optional] in DOMString contentType); */
  NS_SCRIPTABLE NS_IMETHOD MozSlice(PRInt64 start, PRInt64 end, const nsAString & contentType, JSContext* cx, PRUint8 _argc, nsIDOMBlob * *_retval NS_OUTPARAM) = 0;

  /* [notxpcom] long long getFileId (); */
  NS_IMETHOD_(PRInt64) GetFileId(void) = 0;

  /* [notxpcom] void addFileInfo (in FileInfo aFileInfo); */
  NS_IMETHOD_(void) AddFileInfo(mozilla::dom::indexedDB::FileInfo *aFileInfo) = 0;

  /* [notxpcom] FileInfo getFileInfo (in FileManager aFileManager); */
  NS_IMETHOD_(mozilla::dom::indexedDB::FileInfo *) GetFileInfo(mozilla::dom::indexedDB::FileManager *aFileManager) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMBlob, NS_IDOMBLOB_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMBLOB \
  NS_SCRIPTABLE NS_IMETHOD GetSize(PRUint64 *aSize); \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType); \
  NS_IMETHOD GetInternalStream(nsIInputStream * *aInternalStream); \
  NS_IMETHOD GetInternalUrl(nsIPrincipal *principal, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Slice(PRInt64 start, PRInt64 end, const nsAString & contentType, PRUint8 _argc, nsIDOMBlob * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MozSlice(PRInt64 start, PRInt64 end, const nsAString & contentType, JSContext* cx, PRUint8 _argc, nsIDOMBlob * *_retval NS_OUTPARAM); \
  NS_IMETHOD_(PRInt64) GetFileId(void); \
  NS_IMETHOD_(void) AddFileInfo(mozilla::dom::indexedDB::FileInfo *aFileInfo); \
  NS_IMETHOD_(mozilla::dom::indexedDB::FileInfo *) GetFileInfo(mozilla::dom::indexedDB::FileManager *aFileManager); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMBLOB(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSize(PRUint64 *aSize) { return _to GetSize(aSize); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return _to GetType(aType); } \
  NS_IMETHOD GetInternalStream(nsIInputStream * *aInternalStream) { return _to GetInternalStream(aInternalStream); } \
  NS_IMETHOD GetInternalUrl(nsIPrincipal *principal, nsAString & _retval NS_OUTPARAM) { return _to GetInternalUrl(principal, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Slice(PRInt64 start, PRInt64 end, const nsAString & contentType, PRUint8 _argc, nsIDOMBlob * *_retval NS_OUTPARAM) { return _to Slice(start, end, contentType, _argc, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozSlice(PRInt64 start, PRInt64 end, const nsAString & contentType, JSContext* cx, PRUint8 _argc, nsIDOMBlob * *_retval NS_OUTPARAM) { return _to MozSlice(start, end, contentType, cx, _argc, _retval); } \
  NS_IMETHOD_(PRInt64) GetFileId(void) { return _to GetFileId(); } \
  NS_IMETHOD_(void) AddFileInfo(mozilla::dom::indexedDB::FileInfo *aFileInfo) { return _to AddFileInfo(aFileInfo); } \
  NS_IMETHOD_(mozilla::dom::indexedDB::FileInfo *) GetFileInfo(mozilla::dom::indexedDB::FileManager *aFileManager) { return _to GetFileInfo(aFileManager); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMBLOB(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSize(PRUint64 *aSize) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSize(aSize); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_IMETHOD GetInternalStream(nsIInputStream * *aInternalStream) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInternalStream(aInternalStream); } \
  NS_IMETHOD GetInternalUrl(nsIPrincipal *principal, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInternalUrl(principal, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Slice(PRInt64 start, PRInt64 end, const nsAString & contentType, PRUint8 _argc, nsIDOMBlob * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Slice(start, end, contentType, _argc, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozSlice(PRInt64 start, PRInt64 end, const nsAString & contentType, JSContext* cx, PRUint8 _argc, nsIDOMBlob * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozSlice(start, end, contentType, cx, _argc, _retval); } \
  NS_IMETHOD_(PRInt64) GetFileId(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileId(); } \
  NS_IMETHOD_(void) AddFileInfo(mozilla::dom::indexedDB::FileInfo *aFileInfo) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddFileInfo(aFileInfo); } \
  NS_IMETHOD_(mozilla::dom::indexedDB::FileInfo *) GetFileInfo(mozilla::dom::indexedDB::FileManager *aFileManager) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileInfo(aFileManager); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMBlob : public nsIDOMBlob
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMBLOB

  nsDOMBlob();

private:
  ~nsDOMBlob();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMBlob, nsIDOMBlob)

nsDOMBlob::nsDOMBlob()
{
  /* member initializers and constructor code */
}

nsDOMBlob::~nsDOMBlob()
{
  /* destructor code */
}

/* readonly attribute unsigned long long size; */
NS_IMETHODIMP nsDOMBlob::GetSize(PRUint64 *aSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString type; */
NS_IMETHODIMP nsDOMBlob::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute nsIInputStream internalStream; */
NS_IMETHODIMP nsDOMBlob::GetInternalStream(nsIInputStream * *aInternalStream)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] DOMString getInternalUrl (in nsIPrincipal principal); */
NS_IMETHODIMP nsDOMBlob::GetInternalUrl(nsIPrincipal *principal, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [optional_argc] nsIDOMBlob slice ([optional] in long long start, [optional] in long long end, [optional] in DOMString contentType); */
NS_IMETHODIMP nsDOMBlob::Slice(PRInt64 start, PRInt64 end, const nsAString & contentType, PRUint8 _argc, nsIDOMBlob * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext,optional_argc] nsIDOMBlob mozSlice ([optional] in long long start, [optional] in long long end, [optional] in DOMString contentType); */
NS_IMETHODIMP nsDOMBlob::MozSlice(PRInt64 start, PRInt64 end, const nsAString & contentType, JSContext* cx, PRUint8 _argc, nsIDOMBlob * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] long long getFileId (); */
NS_IMETHODIMP_(PRInt64) nsDOMBlob::GetFileId()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] void addFileInfo (in FileInfo aFileInfo); */
NS_IMETHODIMP_(void) nsDOMBlob::AddFileInfo(mozilla::dom::indexedDB::FileInfo *aFileInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] FileInfo getFileInfo (in FileManager aFileManager); */
NS_IMETHODIMP_(mozilla::dom::indexedDB::FileInfo *) nsDOMBlob::GetFileInfo(mozilla::dom::indexedDB::FileManager *aFileManager)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMFile */
#define NS_IDOMFILE_IID_STR "cddf6087-0e83-4e1f-91b3-4861d5d4c53f"

#define NS_IDOMFILE_IID \
  {0xcddf6087, 0x0e83, 0x4e1f, \
    { 0x91, 0xb3, 0x48, 0x61, 0xd5, 0xd4, 0xc5, 0x3f }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMFile : public nsIDOMBlob {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMFILE_IID)

  /* readonly attribute DOMString name; */
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) = 0;

  /* [implicit_jscontext] readonly attribute jsval lastModifiedDate; */
  NS_SCRIPTABLE NS_IMETHOD GetLastModifiedDate(JSContext* cx, JS::Value *aLastModifiedDate) = 0;

  /* readonly attribute DOMString mozFullPath; */
  NS_SCRIPTABLE NS_IMETHOD GetMozFullPath(nsAString & aMozFullPath) = 0;

  /* [noscript] readonly attribute DOMString mozFullPathInternal; */
  NS_IMETHOD GetMozFullPathInternal(nsAString & aMozFullPathInternal) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMFile, NS_IDOMFILE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMFILE \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName); \
  NS_SCRIPTABLE NS_IMETHOD GetLastModifiedDate(JSContext* cx, JS::Value *aLastModifiedDate); \
  NS_SCRIPTABLE NS_IMETHOD GetMozFullPath(nsAString & aMozFullPath); \
  NS_IMETHOD GetMozFullPathInternal(nsAString & aMozFullPathInternal); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMFILE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) { return _to GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastModifiedDate(JSContext* cx, JS::Value *aLastModifiedDate) { return _to GetLastModifiedDate(cx, aLastModifiedDate); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozFullPath(nsAString & aMozFullPath) { return _to GetMozFullPath(aMozFullPath); } \
  NS_IMETHOD GetMozFullPathInternal(nsAString & aMozFullPathInternal) { return _to GetMozFullPathInternal(aMozFullPathInternal); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMFILE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastModifiedDate(JSContext* cx, JS::Value *aLastModifiedDate) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLastModifiedDate(cx, aLastModifiedDate); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozFullPath(nsAString & aMozFullPath) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozFullPath(aMozFullPath); } \
  NS_IMETHOD GetMozFullPathInternal(nsAString & aMozFullPathInternal) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozFullPathInternal(aMozFullPathInternal); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMFile : public nsIDOMFile
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMFILE

  nsDOMFile();

private:
  ~nsDOMFile();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMFile, nsIDOMFile)

nsDOMFile::nsDOMFile()
{
  /* member initializers and constructor code */
}

nsDOMFile::~nsDOMFile()
{
  /* destructor code */
}

/* readonly attribute DOMString name; */
NS_IMETHODIMP nsDOMFile::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] readonly attribute jsval lastModifiedDate; */
NS_IMETHODIMP nsDOMFile::GetLastModifiedDate(JSContext* cx, JS::Value *aLastModifiedDate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString mozFullPath; */
NS_IMETHODIMP nsDOMFile::GetMozFullPath(nsAString & aMozFullPath)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute DOMString mozFullPathInternal; */
NS_IMETHODIMP nsDOMFile::GetMozFullPathInternal(nsAString & aMozFullPathInternal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMMozBlobBuilder */
#define NS_IDOMMOZBLOBBUILDER_IID_STR "57195950-edd9-496b-9b45-e4893a9ffca9"

#define NS_IDOMMOZBLOBBUILDER_IID \
  {0x57195950, 0xedd9, 0x496b, \
    { 0x9b, 0x45, 0xe4, 0x89, 0x3a, 0x9f, 0xfc, 0xa9 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMMozBlobBuilder : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMOZBLOBBUILDER_IID)

  /* nsIDOMBlob getBlob ([optional] in DOMString contentType); */
  NS_SCRIPTABLE NS_IMETHOD GetBlob(const nsAString & contentType, nsIDOMBlob * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMFile getFile (in DOMString name, [optional] in DOMString contentType); */
  NS_SCRIPTABLE NS_IMETHOD GetFile(const nsAString & name, const nsAString & contentType, nsIDOMFile * *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] void append (in jsval data, [optional] in DOMString endings); */
  NS_SCRIPTABLE NS_IMETHOD Append(const JS::Value & data, const nsAString & endings, JSContext* cx) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMozBlobBuilder, NS_IDOMMOZBLOBBUILDER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMOZBLOBBUILDER \
  NS_SCRIPTABLE NS_IMETHOD GetBlob(const nsAString & contentType, nsIDOMBlob * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFile(const nsAString & name, const nsAString & contentType, nsIDOMFile * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Append(const JS::Value & data, const nsAString & endings, JSContext* cx); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMOZBLOBBUILDER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetBlob(const nsAString & contentType, nsIDOMBlob * *_retval NS_OUTPARAM) { return _to GetBlob(contentType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFile(const nsAString & name, const nsAString & contentType, nsIDOMFile * *_retval NS_OUTPARAM) { return _to GetFile(name, contentType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Append(const JS::Value & data, const nsAString & endings, JSContext* cx) { return _to Append(data, endings, cx); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMOZBLOBBUILDER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetBlob(const nsAString & contentType, nsIDOMBlob * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBlob(contentType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFile(const nsAString & name, const nsAString & contentType, nsIDOMFile * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFile(name, contentType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Append(const JS::Value & data, const nsAString & endings, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->Append(data, endings, cx); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMozBlobBuilder : public nsIDOMMozBlobBuilder
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMOZBLOBBUILDER

  nsDOMMozBlobBuilder();

private:
  ~nsDOMMozBlobBuilder();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMMozBlobBuilder, nsIDOMMozBlobBuilder)

nsDOMMozBlobBuilder::nsDOMMozBlobBuilder()
{
  /* member initializers and constructor code */
}

nsDOMMozBlobBuilder::~nsDOMMozBlobBuilder()
{
  /* destructor code */
}

/* nsIDOMBlob getBlob ([optional] in DOMString contentType); */
NS_IMETHODIMP nsDOMMozBlobBuilder::GetBlob(const nsAString & contentType, nsIDOMBlob * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMFile getFile (in DOMString name, [optional] in DOMString contentType); */
NS_IMETHODIMP nsDOMMozBlobBuilder::GetFile(const nsAString & name, const nsAString & contentType, nsIDOMFile * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void append (in jsval data, [optional] in DOMString endings); */
NS_IMETHODIMP nsDOMMozBlobBuilder::Append(const JS::Value & data, const nsAString & endings, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMFile_h__ */
