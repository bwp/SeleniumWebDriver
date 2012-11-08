/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/xpcom/io/nsIOutputStream.idl
 */

#ifndef __gen_nsIOutputStream_h__
#define __gen_nsIOutputStream_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIOutputStream; /* forward declaration */

class nsIInputStream; /* forward declaration */

/**
 * The signature for the reader function passed to WriteSegments. This 
 * is the "provider" of data that gets written into the stream's buffer.
 *
 * @param aOutStream stream being written to
 * @param aClosure opaque parameter passed to WriteSegments
 * @param aToSegment pointer to memory owned by the output stream
 * @param aFromOffset amount already written (since WriteSegments was called)
 * @param aCount length of toSegment
 * @param aReadCount number of bytes written
 *
 * Implementers should return the following:
 *
 * @return NS_OK and (*aReadCount > 0) if successfully provided some data
 * @return NS_OK and (*aReadCount = 0) or
 * @return <any-error> if not interested in providing any data
 *
 * Errors are never passed to the caller of WriteSegments.
 */
typedef NS_CALLBACK(nsReadSegmentFun)(nsIOutputStream *aOutStream,
                                      void *aClosure,
                                      char *aToSegment,
                                      PRUint32 aFromOffset,
                                      PRUint32 aCount,
                                      PRUint32 *aReadCount);

/* starting interface:    nsIOutputStream */
#define NS_IOUTPUTSTREAM_IID_STR "0d0acd2a-61b4-11d4-9877-00c04fa0cf4a"

#define NS_IOUTPUTSTREAM_IID \
  {0x0d0acd2a, 0x61b4, 0x11d4, \
    { 0x98, 0x77, 0x00, 0xc0, 0x4f, 0xa0, 0xcf, 0x4a }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIOutputStream : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IOUTPUTSTREAM_IID)

  /* void close (); */
  NS_SCRIPTABLE NS_IMETHOD Close(void) = 0;

  /* void flush (); */
  NS_SCRIPTABLE NS_IMETHOD Flush(void) = 0;

  /* unsigned long write (in string aBuf, in unsigned long aCount); */
  NS_SCRIPTABLE NS_IMETHOD Write(const char * aBuf, PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM) = 0;

  /* unsigned long writeFrom (in nsIInputStream aFromStream, in unsigned long aCount); */
  NS_SCRIPTABLE NS_IMETHOD WriteFrom(nsIInputStream *aFromStream, PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM) = 0;

  /* [noscript] unsigned long writeSegments (in nsReadSegmentFun aReader, in voidPtr aClosure, in unsigned long aCount); */
  NS_IMETHOD WriteSegments(nsReadSegmentFun aReader, void *aClosure, PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM) = 0;

  /* boolean isNonBlocking (); */
  NS_SCRIPTABLE NS_IMETHOD IsNonBlocking(bool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIOutputStream, NS_IOUTPUTSTREAM_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIOUTPUTSTREAM \
  NS_SCRIPTABLE NS_IMETHOD Close(void); \
  NS_SCRIPTABLE NS_IMETHOD Flush(void); \
  NS_SCRIPTABLE NS_IMETHOD Write(const char * aBuf, PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD WriteFrom(nsIInputStream *aFromStream, PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM); \
  NS_IMETHOD WriteSegments(nsReadSegmentFun aReader, void *aClosure, PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsNonBlocking(bool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIOUTPUTSTREAM(_to) \
  NS_SCRIPTABLE NS_IMETHOD Close(void) { return _to Close(); } \
  NS_SCRIPTABLE NS_IMETHOD Flush(void) { return _to Flush(); } \
  NS_SCRIPTABLE NS_IMETHOD Write(const char * aBuf, PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM) { return _to Write(aBuf, aCount, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD WriteFrom(nsIInputStream *aFromStream, PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM) { return _to WriteFrom(aFromStream, aCount, _retval); } \
  NS_IMETHOD WriteSegments(nsReadSegmentFun aReader, void *aClosure, PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM) { return _to WriteSegments(aReader, aClosure, aCount, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsNonBlocking(bool *_retval NS_OUTPARAM) { return _to IsNonBlocking(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIOUTPUTSTREAM(_to) \
  NS_SCRIPTABLE NS_IMETHOD Close(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Close(); } \
  NS_SCRIPTABLE NS_IMETHOD Flush(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Flush(); } \
  NS_SCRIPTABLE NS_IMETHOD Write(const char * aBuf, PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Write(aBuf, aCount, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD WriteFrom(nsIInputStream *aFromStream, PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->WriteFrom(aFromStream, aCount, _retval); } \
  NS_IMETHOD WriteSegments(nsReadSegmentFun aReader, void *aClosure, PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->WriteSegments(aReader, aClosure, aCount, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsNonBlocking(bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsNonBlocking(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsOutputStream : public nsIOutputStream
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIOUTPUTSTREAM

  nsOutputStream();

private:
  ~nsOutputStream();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsOutputStream, nsIOutputStream)

nsOutputStream::nsOutputStream()
{
  /* member initializers and constructor code */
}

nsOutputStream::~nsOutputStream()
{
  /* destructor code */
}

/* void close (); */
NS_IMETHODIMP nsOutputStream::Close()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void flush (); */
NS_IMETHODIMP nsOutputStream::Flush()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long write (in string aBuf, in unsigned long aCount); */
NS_IMETHODIMP nsOutputStream::Write(const char * aBuf, PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long writeFrom (in nsIInputStream aFromStream, in unsigned long aCount); */
NS_IMETHODIMP nsOutputStream::WriteFrom(nsIInputStream *aFromStream, PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] unsigned long writeSegments (in nsReadSegmentFun aReader, in voidPtr aClosure, in unsigned long aCount); */
NS_IMETHODIMP nsOutputStream::WriteSegments(nsReadSegmentFun aReader, void *aClosure, PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isNonBlocking (); */
NS_IMETHODIMP nsOutputStream::IsNonBlocking(bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIOutputStream_h__ */
