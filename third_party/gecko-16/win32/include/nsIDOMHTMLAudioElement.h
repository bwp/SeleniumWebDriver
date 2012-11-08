/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/html/nsIDOMHTMLAudioElement.idl
 */

#ifndef __gen_nsIDOMHTMLAudioElement_h__
#define __gen_nsIDOMHTMLAudioElement_h__


#ifndef __gen_nsIDOMHTMLMediaElement_h__
#include "nsIDOMHTMLMediaElement.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#include "jsapi.h"

/* starting interface:    nsIDOMHTMLAudioElement */
#define NS_IDOMHTMLAUDIOELEMENT_IID_STR "32c54e30-5063-4e35-8fc9-890e50fed147"

#define NS_IDOMHTMLAUDIOELEMENT_IID \
  {0x32c54e30, 0x5063, 0x4e35, \
    { 0x8f, 0xc9, 0x89, 0x0e, 0x50, 0xfe, 0xd1, 0x47 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMHTMLAudioElement : public nsIDOMHTMLMediaElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMHTMLAUDIOELEMENT_IID)

  /* void mozSetup (in PRUint32 channels, in PRUint32 rate); */
  NS_SCRIPTABLE NS_IMETHOD MozSetup(PRUint32 channels, PRUint32 rate) = 0;

  /* [implicit_jscontext] unsigned long mozWriteAudio (in jsval data); */
  NS_SCRIPTABLE NS_IMETHOD MozWriteAudio(const JS::Value & data, JSContext* cx, PRUint32 *_retval NS_OUTPARAM) = 0;

  /* unsigned long long mozCurrentSampleOffset (); */
  NS_SCRIPTABLE NS_IMETHOD MozCurrentSampleOffset(PRUint64 *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMHTMLAudioElement, NS_IDOMHTMLAUDIOELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLAUDIOELEMENT \
  NS_SCRIPTABLE NS_IMETHOD MozSetup(PRUint32 channels, PRUint32 rate); \
  NS_SCRIPTABLE NS_IMETHOD MozWriteAudio(const JS::Value & data, JSContext* cx, PRUint32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MozCurrentSampleOffset(PRUint64 *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLAUDIOELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD MozSetup(PRUint32 channels, PRUint32 rate) { return _to MozSetup(channels, rate); } \
  NS_SCRIPTABLE NS_IMETHOD MozWriteAudio(const JS::Value & data, JSContext* cx, PRUint32 *_retval NS_OUTPARAM) { return _to MozWriteAudio(data, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozCurrentSampleOffset(PRUint64 *_retval NS_OUTPARAM) { return _to MozCurrentSampleOffset(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLAUDIOELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD MozSetup(PRUint32 channels, PRUint32 rate) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozSetup(channels, rate); } \
  NS_SCRIPTABLE NS_IMETHOD MozWriteAudio(const JS::Value & data, JSContext* cx, PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozWriteAudio(data, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozCurrentSampleOffset(PRUint64 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozCurrentSampleOffset(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLAudioElement : public nsIDOMHTMLAudioElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLAUDIOELEMENT

  nsDOMHTMLAudioElement();

private:
  ~nsDOMHTMLAudioElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMHTMLAudioElement, nsIDOMHTMLAudioElement)

nsDOMHTMLAudioElement::nsDOMHTMLAudioElement()
{
  /* member initializers and constructor code */
}

nsDOMHTMLAudioElement::~nsDOMHTMLAudioElement()
{
  /* destructor code */
}

/* void mozSetup (in PRUint32 channels, in PRUint32 rate); */
NS_IMETHODIMP nsDOMHTMLAudioElement::MozSetup(PRUint32 channels, PRUint32 rate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] unsigned long mozWriteAudio (in jsval data); */
NS_IMETHODIMP nsDOMHTMLAudioElement::MozWriteAudio(const JS::Value & data, JSContext* cx, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long long mozCurrentSampleOffset (); */
NS_IMETHODIMP nsDOMHTMLAudioElement::MozCurrentSampleOffset(PRUint64 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMHTMLAudioElement_h__ */
