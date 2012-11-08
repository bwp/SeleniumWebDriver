/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/indexedDB/nsIStandardFileStream.idl
 */

#ifndef __gen_nsIStandardFileStream_h__
#define __gen_nsIStandardFileStream_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIFile; /* forward declaration */


/* starting interface:    nsIStandardFileStream */
#define NS_ISTANDARDFILESTREAM_IID_STR "ebbbb779-92a3-4b2a-b7cf-6efbe904c453"

#define NS_ISTANDARDFILESTREAM_IID \
  {0xebbbb779, 0x92a3, 0x4b2a, \
    { 0xb7, 0xcf, 0x6e, 0xfb, 0xe9, 0x04, 0xc4, 0x53 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIStandardFileStream : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISTANDARDFILESTREAM_IID)

  enum {
    FLAGS_DEFER_OPEN = 1
  };

  /* void init (in nsIFile file, in AString mode, in long flags); */
  NS_SCRIPTABLE NS_IMETHOD Init(nsIFile *file, const nsAString & mode, PRInt32 flags) = 0;

  /* void flushBuffers (); */
  NS_SCRIPTABLE NS_IMETHOD FlushBuffers(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIStandardFileStream, NS_ISTANDARDFILESTREAM_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISTANDARDFILESTREAM \
  NS_SCRIPTABLE NS_IMETHOD Init(nsIFile *file, const nsAString & mode, PRInt32 flags); \
  NS_SCRIPTABLE NS_IMETHOD FlushBuffers(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISTANDARDFILESTREAM(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(nsIFile *file, const nsAString & mode, PRInt32 flags) { return _to Init(file, mode, flags); } \
  NS_SCRIPTABLE NS_IMETHOD FlushBuffers(void) { return _to FlushBuffers(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISTANDARDFILESTREAM(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(nsIFile *file, const nsAString & mode, PRInt32 flags) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(file, mode, flags); } \
  NS_SCRIPTABLE NS_IMETHOD FlushBuffers(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->FlushBuffers(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsStandardFileStream : public nsIStandardFileStream
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISTANDARDFILESTREAM

  nsStandardFileStream();

private:
  ~nsStandardFileStream();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsStandardFileStream, nsIStandardFileStream)

nsStandardFileStream::nsStandardFileStream()
{
  /* member initializers and constructor code */
}

nsStandardFileStream::~nsStandardFileStream()
{
  /* destructor code */
}

/* void init (in nsIFile file, in AString mode, in long flags); */
NS_IMETHODIMP nsStandardFileStream::Init(nsIFile *file, const nsAString & mode, PRInt32 flags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void flushBuffers (); */
NS_IMETHODIMP nsStandardFileStream::FlushBuffers()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIStandardFileStream_h__ */
