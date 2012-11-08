/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/media/nsIDOMMediaStream.idl
 */

#ifndef __gen_nsIDOMMediaStream_h__
#define __gen_nsIDOMMediaStream_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMMediaStream */
#define NS_IDOMMEDIASTREAM_IID_STR "f37c2871-4cb7-4672-bb28-c2d601f7cc9e"

#define NS_IDOMMEDIASTREAM_IID \
  {0xf37c2871, 0x4cb7, 0x4672, \
    { 0xbb, 0x28, 0xc2, 0xd6, 0x01, 0xf7, 0xcc, 0x9e }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMMediaStream : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMEDIASTREAM_IID)

  /* readonly attribute double currentTime; */
  NS_SCRIPTABLE NS_IMETHOD GetCurrentTime(double *aCurrentTime) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMediaStream, NS_IDOMMEDIASTREAM_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMEDIASTREAM \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentTime(double *aCurrentTime); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMEDIASTREAM(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentTime(double *aCurrentTime) { return _to GetCurrentTime(aCurrentTime); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMEDIASTREAM(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentTime(double *aCurrentTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentTime(aCurrentTime); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMediaStream : public nsIDOMMediaStream
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMEDIASTREAM

  nsDOMMediaStream();

private:
  ~nsDOMMediaStream();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMMediaStream, nsIDOMMediaStream)

nsDOMMediaStream::nsDOMMediaStream()
{
  /* member initializers and constructor code */
}

nsDOMMediaStream::~nsDOMMediaStream()
{
  /* destructor code */
}

/* readonly attribute double currentTime; */
NS_IMETHODIMP nsDOMMediaStream::GetCurrentTime(double *aCurrentTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMMediaStream_h__ */
