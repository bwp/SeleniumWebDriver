/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/image/public/imgIContainerObserver.idl
 */

#ifndef __gen_imgIContainerObserver_h__
#define __gen_imgIContainerObserver_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#include "nsRect.h"
class imgIContainer; /* forward declaration */

class imgIRequest; /* forward declaration */


/* starting interface:    imgIContainerObserver */
#define IMGICONTAINEROBSERVER_IID_STR "f01efdb3-4b20-4313-a636-a2aa01a4ef5d"

#define IMGICONTAINEROBSERVER_IID \
  {0xf01efdb3, 0x4b20, 0x4313, \
    { 0xa6, 0x36, 0xa2, 0xaa, 0x01, 0xa4, 0xef, 0x5d }}

class NS_NO_VTABLE NS_SCRIPTABLE imgIContainerObserver : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IMGICONTAINEROBSERVER_IID)

  /* [noscript] void frameChanged (in imgIRequest aRequest, in imgIContainer aContainer, [const] in nsIntRect aDirtyRect); */
  NS_IMETHOD FrameChanged(imgIRequest *aRequest, imgIContainer *aContainer, const nsIntRect *aDirtyRect) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(imgIContainerObserver, IMGICONTAINEROBSERVER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IMGICONTAINEROBSERVER \
  NS_IMETHOD FrameChanged(imgIRequest *aRequest, imgIContainer *aContainer, const nsIntRect *aDirtyRect); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IMGICONTAINEROBSERVER(_to) \
  NS_IMETHOD FrameChanged(imgIRequest *aRequest, imgIContainer *aContainer, const nsIntRect *aDirtyRect) { return _to FrameChanged(aRequest, aContainer, aDirtyRect); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IMGICONTAINEROBSERVER(_to) \
  NS_IMETHOD FrameChanged(imgIRequest *aRequest, imgIContainer *aContainer, const nsIntRect *aDirtyRect) { return !_to ? NS_ERROR_NULL_POINTER : _to->FrameChanged(aRequest, aContainer, aDirtyRect); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public imgIContainerObserver
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IMGICONTAINEROBSERVER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, imgIContainerObserver)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* [noscript] void frameChanged (in imgIRequest aRequest, in imgIContainer aContainer, [const] in nsIntRect aDirtyRect); */
NS_IMETHODIMP _MYCLASS_::FrameChanged(imgIRequest *aRequest, imgIContainer *aContainer, const nsIntRect *aDirtyRect)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_imgIContainerObserver_h__ */
