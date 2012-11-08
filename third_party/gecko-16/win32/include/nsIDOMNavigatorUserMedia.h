/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/media/nsIDOMNavigatorUserMedia.idl
 */

#ifndef __gen_nsIDOMNavigatorUserMedia_h__
#define __gen_nsIDOMNavigatorUserMedia_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIDOMMediaStream_h__
#include "nsIDOMMediaStream.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMGetUserMediaSuccessCallback */
#define NS_IDOMGETUSERMEDIASUCCESSCALLBACK_IID_STR "f2a144fc-3534-4761-8c5d-989ae720f89a"

#define NS_IDOMGETUSERMEDIASUCCESSCALLBACK_IID \
  {0xf2a144fc, 0x3534, 0x4761, \
    { 0x8c, 0x5d, 0x98, 0x9a, 0xe7, 0x20, 0xf8, 0x9a }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMGetUserMediaSuccessCallback : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMGETUSERMEDIASUCCESSCALLBACK_IID)

  /* void onSuccess (in nsISupports value); */
  NS_SCRIPTABLE NS_IMETHOD OnSuccess(nsISupports *value) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMGetUserMediaSuccessCallback, NS_IDOMGETUSERMEDIASUCCESSCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMGETUSERMEDIASUCCESSCALLBACK \
  NS_SCRIPTABLE NS_IMETHOD OnSuccess(nsISupports *value); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMGETUSERMEDIASUCCESSCALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnSuccess(nsISupports *value) { return _to OnSuccess(value); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMGETUSERMEDIASUCCESSCALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnSuccess(nsISupports *value) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnSuccess(value); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMGetUserMediaSuccessCallback : public nsIDOMGetUserMediaSuccessCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMGETUSERMEDIASUCCESSCALLBACK

  nsDOMGetUserMediaSuccessCallback();

private:
  ~nsDOMGetUserMediaSuccessCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMGetUserMediaSuccessCallback, nsIDOMGetUserMediaSuccessCallback)

nsDOMGetUserMediaSuccessCallback::nsDOMGetUserMediaSuccessCallback()
{
  /* member initializers and constructor code */
}

nsDOMGetUserMediaSuccessCallback::~nsDOMGetUserMediaSuccessCallback()
{
  /* destructor code */
}

/* void onSuccess (in nsISupports value); */
NS_IMETHODIMP nsDOMGetUserMediaSuccessCallback::OnSuccess(nsISupports *value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMGetUserMediaErrorCallback */
#define NS_IDOMGETUSERMEDIAERRORCALLBACK_IID_STR "2614bbcf-85cc-43e5-8740-964f52bdc7ca"

#define NS_IDOMGETUSERMEDIAERRORCALLBACK_IID \
  {0x2614bbcf, 0x85cc, 0x43e5, \
    { 0x87, 0x40, 0x96, 0x4f, 0x52, 0xbd, 0xc7, 0xca }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMGetUserMediaErrorCallback : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMGETUSERMEDIAERRORCALLBACK_IID)

  /* void onError (in DOMString error); */
  NS_SCRIPTABLE NS_IMETHOD OnError(const nsAString & error) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMGetUserMediaErrorCallback, NS_IDOMGETUSERMEDIAERRORCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMGETUSERMEDIAERRORCALLBACK \
  NS_SCRIPTABLE NS_IMETHOD OnError(const nsAString & error); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMGETUSERMEDIAERRORCALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnError(const nsAString & error) { return _to OnError(error); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMGETUSERMEDIAERRORCALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnError(const nsAString & error) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnError(error); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMGetUserMediaErrorCallback : public nsIDOMGetUserMediaErrorCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMGETUSERMEDIAERRORCALLBACK

  nsDOMGetUserMediaErrorCallback();

private:
  ~nsDOMGetUserMediaErrorCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMGetUserMediaErrorCallback, nsIDOMGetUserMediaErrorCallback)

nsDOMGetUserMediaErrorCallback::nsDOMGetUserMediaErrorCallback()
{
  /* member initializers and constructor code */
}

nsDOMGetUserMediaErrorCallback::~nsDOMGetUserMediaErrorCallback()
{
  /* destructor code */
}

/* void onError (in DOMString error); */
NS_IMETHODIMP nsDOMGetUserMediaErrorCallback::OnError(const nsAString & error)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIMediaStreamOptions */
#define NS_IMEDIASTREAMOPTIONS_IID_STR "8a26205e-e8f7-4372-bd15-97ff982b4c1c"

#define NS_IMEDIASTREAMOPTIONS_IID \
  {0x8a26205e, 0xe8f7, 0x4372, \
    { 0xbd, 0x15, 0x97, 0xff, 0x98, 0x2b, 0x4c, 0x1c }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIMediaStreamOptions : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IMEDIASTREAMOPTIONS_IID)

  /* readonly attribute boolean audio; */
  NS_SCRIPTABLE NS_IMETHOD GetAudio(bool *aAudio) = 0;

  /* readonly attribute boolean video; */
  NS_SCRIPTABLE NS_IMETHOD GetVideo(bool *aVideo) = 0;

  /* readonly attribute boolean picture; */
  NS_SCRIPTABLE NS_IMETHOD GetPicture(bool *aPicture) = 0;

  /* readonly attribute DOMString camera; */
  NS_SCRIPTABLE NS_IMETHOD GetCamera(nsAString & aCamera) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIMediaStreamOptions, NS_IMEDIASTREAMOPTIONS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMEDIASTREAMOPTIONS \
  NS_SCRIPTABLE NS_IMETHOD GetAudio(bool *aAudio); \
  NS_SCRIPTABLE NS_IMETHOD GetVideo(bool *aVideo); \
  NS_SCRIPTABLE NS_IMETHOD GetPicture(bool *aPicture); \
  NS_SCRIPTABLE NS_IMETHOD GetCamera(nsAString & aCamera); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMEDIASTREAMOPTIONS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAudio(bool *aAudio) { return _to GetAudio(aAudio); } \
  NS_SCRIPTABLE NS_IMETHOD GetVideo(bool *aVideo) { return _to GetVideo(aVideo); } \
  NS_SCRIPTABLE NS_IMETHOD GetPicture(bool *aPicture) { return _to GetPicture(aPicture); } \
  NS_SCRIPTABLE NS_IMETHOD GetCamera(nsAString & aCamera) { return _to GetCamera(aCamera); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMEDIASTREAMOPTIONS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAudio(bool *aAudio) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAudio(aAudio); } \
  NS_SCRIPTABLE NS_IMETHOD GetVideo(bool *aVideo) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVideo(aVideo); } \
  NS_SCRIPTABLE NS_IMETHOD GetPicture(bool *aPicture) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPicture(aPicture); } \
  NS_SCRIPTABLE NS_IMETHOD GetCamera(nsAString & aCamera) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCamera(aCamera); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsMediaStreamOptions : public nsIMediaStreamOptions
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMEDIASTREAMOPTIONS

  nsMediaStreamOptions();

private:
  ~nsMediaStreamOptions();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsMediaStreamOptions, nsIMediaStreamOptions)

nsMediaStreamOptions::nsMediaStreamOptions()
{
  /* member initializers and constructor code */
}

nsMediaStreamOptions::~nsMediaStreamOptions()
{
  /* destructor code */
}

/* readonly attribute boolean audio; */
NS_IMETHODIMP nsMediaStreamOptions::GetAudio(bool *aAudio)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean video; */
NS_IMETHODIMP nsMediaStreamOptions::GetVideo(bool *aVideo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean picture; */
NS_IMETHODIMP nsMediaStreamOptions::GetPicture(bool *aPicture)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString camera; */
NS_IMETHODIMP nsMediaStreamOptions::GetCamera(nsAString & aCamera)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMNavigatorUserMedia */
#define NS_IDOMNAVIGATORUSERMEDIA_IID_STR "381e0071-0be5-4f6b-ae21-8e3407a37faa"

#define NS_IDOMNAVIGATORUSERMEDIA_IID \
  {0x381e0071, 0x0be5, 0x4f6b, \
    { 0xae, 0x21, 0x8e, 0x34, 0x07, 0xa3, 0x7f, 0xaa }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMNavigatorUserMedia : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMNAVIGATORUSERMEDIA_IID)

  /* void mozGetUserMedia (in nsIMediaStreamOptions params, in nsIDOMGetUserMediaSuccessCallback onsuccess, in nsIDOMGetUserMediaErrorCallback onerror); */
  NS_SCRIPTABLE NS_IMETHOD MozGetUserMedia(nsIMediaStreamOptions *params, nsIDOMGetUserMediaSuccessCallback *onsuccess, nsIDOMGetUserMediaErrorCallback *onerror) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMNavigatorUserMedia, NS_IDOMNAVIGATORUSERMEDIA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMNAVIGATORUSERMEDIA \
  NS_SCRIPTABLE NS_IMETHOD MozGetUserMedia(nsIMediaStreamOptions *params, nsIDOMGetUserMediaSuccessCallback *onsuccess, nsIDOMGetUserMediaErrorCallback *onerror); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMNAVIGATORUSERMEDIA(_to) \
  NS_SCRIPTABLE NS_IMETHOD MozGetUserMedia(nsIMediaStreamOptions *params, nsIDOMGetUserMediaSuccessCallback *onsuccess, nsIDOMGetUserMediaErrorCallback *onerror) { return _to MozGetUserMedia(params, onsuccess, onerror); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMNAVIGATORUSERMEDIA(_to) \
  NS_SCRIPTABLE NS_IMETHOD MozGetUserMedia(nsIMediaStreamOptions *params, nsIDOMGetUserMediaSuccessCallback *onsuccess, nsIDOMGetUserMediaErrorCallback *onerror) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozGetUserMedia(params, onsuccess, onerror); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMNavigatorUserMedia : public nsIDOMNavigatorUserMedia
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMNAVIGATORUSERMEDIA

  nsDOMNavigatorUserMedia();

private:
  ~nsDOMNavigatorUserMedia();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMNavigatorUserMedia, nsIDOMNavigatorUserMedia)

nsDOMNavigatorUserMedia::nsDOMNavigatorUserMedia()
{
  /* member initializers and constructor code */
}

nsDOMNavigatorUserMedia::~nsDOMNavigatorUserMedia()
{
  /* destructor code */
}

/* void mozGetUserMedia (in nsIMediaStreamOptions params, in nsIDOMGetUserMediaSuccessCallback onsuccess, in nsIDOMGetUserMediaErrorCallback onerror); */
NS_IMETHODIMP nsDOMNavigatorUserMedia::MozGetUserMedia(nsIMediaStreamOptions *params, nsIDOMGetUserMediaSuccessCallback *onsuccess, nsIDOMGetUserMediaErrorCallback *onerror)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMNavigatorUserMedia_h__ */
