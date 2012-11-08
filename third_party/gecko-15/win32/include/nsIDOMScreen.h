/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/base/nsIDOMScreen.idl
 */

#ifndef __gen_nsIDOMScreen_h__
#define __gen_nsIDOMScreen_h__


#ifndef __gen_nsIDOMEventTarget_h__
#include "nsIDOMEventTarget.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMScreen */
#define NS_IDOMSCREEN_IID_STR "9b978f58-5bfe-409d-aa3f-946ca934e51d"

#define NS_IDOMSCREEN_IID \
  {0x9b978f58, 0x5bfe, 0x409d, \
    { 0xaa, 0x3f, 0x94, 0x6c, 0xa9, 0x34, 0xe5, 0x1d }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMScreen : public nsIDOMEventTarget {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSCREEN_IID)

  /* readonly attribute long top; */
  NS_SCRIPTABLE NS_IMETHOD GetTop(PRInt32 *aTop) = 0;

  /* readonly attribute long left; */
  NS_SCRIPTABLE NS_IMETHOD GetLeft(PRInt32 *aLeft) = 0;

  /* readonly attribute long width; */
  NS_SCRIPTABLE NS_IMETHOD GetWidth(PRInt32 *aWidth) = 0;

  /* readonly attribute long height; */
  NS_SCRIPTABLE NS_IMETHOD GetHeight(PRInt32 *aHeight) = 0;

  /* readonly attribute long pixelDepth; */
  NS_SCRIPTABLE NS_IMETHOD GetPixelDepth(PRInt32 *aPixelDepth) = 0;

  /* readonly attribute long colorDepth; */
  NS_SCRIPTABLE NS_IMETHOD GetColorDepth(PRInt32 *aColorDepth) = 0;

  /* readonly attribute long availWidth; */
  NS_SCRIPTABLE NS_IMETHOD GetAvailWidth(PRInt32 *aAvailWidth) = 0;

  /* readonly attribute long availHeight; */
  NS_SCRIPTABLE NS_IMETHOD GetAvailHeight(PRInt32 *aAvailHeight) = 0;

  /* readonly attribute long availLeft; */
  NS_SCRIPTABLE NS_IMETHOD GetAvailLeft(PRInt32 *aAvailLeft) = 0;

  /* readonly attribute long availTop; */
  NS_SCRIPTABLE NS_IMETHOD GetAvailTop(PRInt32 *aAvailTop) = 0;

  /* readonly attribute DOMString mozOrientation; */
  NS_SCRIPTABLE NS_IMETHOD GetMozOrientation(nsAString & aMozOrientation) = 0;

  /* attribute nsIDOMEventListener onmozorientationchange; */
  NS_SCRIPTABLE NS_IMETHOD GetOnmozorientationchange(nsIDOMEventListener * *aOnmozorientationchange) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOnmozorientationchange(nsIDOMEventListener *aOnmozorientationchange) = 0;

  /* boolean mozLockOrientation (in DOMString orientation); */
  NS_SCRIPTABLE NS_IMETHOD MozLockOrientation(const nsAString & orientation, bool *_retval NS_OUTPARAM) = 0;

  /* void mozUnlockOrientation (); */
  NS_SCRIPTABLE NS_IMETHOD MozUnlockOrientation(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMScreen, NS_IDOMSCREEN_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSCREEN \
  NS_SCRIPTABLE NS_IMETHOD GetTop(PRInt32 *aTop); \
  NS_SCRIPTABLE NS_IMETHOD GetLeft(PRInt32 *aLeft); \
  NS_SCRIPTABLE NS_IMETHOD GetWidth(PRInt32 *aWidth); \
  NS_SCRIPTABLE NS_IMETHOD GetHeight(PRInt32 *aHeight); \
  NS_SCRIPTABLE NS_IMETHOD GetPixelDepth(PRInt32 *aPixelDepth); \
  NS_SCRIPTABLE NS_IMETHOD GetColorDepth(PRInt32 *aColorDepth); \
  NS_SCRIPTABLE NS_IMETHOD GetAvailWidth(PRInt32 *aAvailWidth); \
  NS_SCRIPTABLE NS_IMETHOD GetAvailHeight(PRInt32 *aAvailHeight); \
  NS_SCRIPTABLE NS_IMETHOD GetAvailLeft(PRInt32 *aAvailLeft); \
  NS_SCRIPTABLE NS_IMETHOD GetAvailTop(PRInt32 *aAvailTop); \
  NS_SCRIPTABLE NS_IMETHOD GetMozOrientation(nsAString & aMozOrientation); \
  NS_SCRIPTABLE NS_IMETHOD GetOnmozorientationchange(nsIDOMEventListener * *aOnmozorientationchange); \
  NS_SCRIPTABLE NS_IMETHOD SetOnmozorientationchange(nsIDOMEventListener *aOnmozorientationchange); \
  NS_SCRIPTABLE NS_IMETHOD MozLockOrientation(const nsAString & orientation, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MozUnlockOrientation(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSCREEN(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetTop(PRInt32 *aTop) { return _to GetTop(aTop); } \
  NS_SCRIPTABLE NS_IMETHOD GetLeft(PRInt32 *aLeft) { return _to GetLeft(aLeft); } \
  NS_SCRIPTABLE NS_IMETHOD GetWidth(PRInt32 *aWidth) { return _to GetWidth(aWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetHeight(PRInt32 *aHeight) { return _to GetHeight(aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetPixelDepth(PRInt32 *aPixelDepth) { return _to GetPixelDepth(aPixelDepth); } \
  NS_SCRIPTABLE NS_IMETHOD GetColorDepth(PRInt32 *aColorDepth) { return _to GetColorDepth(aColorDepth); } \
  NS_SCRIPTABLE NS_IMETHOD GetAvailWidth(PRInt32 *aAvailWidth) { return _to GetAvailWidth(aAvailWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetAvailHeight(PRInt32 *aAvailHeight) { return _to GetAvailHeight(aAvailHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetAvailLeft(PRInt32 *aAvailLeft) { return _to GetAvailLeft(aAvailLeft); } \
  NS_SCRIPTABLE NS_IMETHOD GetAvailTop(PRInt32 *aAvailTop) { return _to GetAvailTop(aAvailTop); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozOrientation(nsAString & aMozOrientation) { return _to GetMozOrientation(aMozOrientation); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnmozorientationchange(nsIDOMEventListener * *aOnmozorientationchange) { return _to GetOnmozorientationchange(aOnmozorientationchange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnmozorientationchange(nsIDOMEventListener *aOnmozorientationchange) { return _to SetOnmozorientationchange(aOnmozorientationchange); } \
  NS_SCRIPTABLE NS_IMETHOD MozLockOrientation(const nsAString & orientation, bool *_retval NS_OUTPARAM) { return _to MozLockOrientation(orientation, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozUnlockOrientation(void) { return _to MozUnlockOrientation(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSCREEN(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetTop(PRInt32 *aTop) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTop(aTop); } \
  NS_SCRIPTABLE NS_IMETHOD GetLeft(PRInt32 *aLeft) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLeft(aLeft); } \
  NS_SCRIPTABLE NS_IMETHOD GetWidth(PRInt32 *aWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWidth(aWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetHeight(PRInt32 *aHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHeight(aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetPixelDepth(PRInt32 *aPixelDepth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPixelDepth(aPixelDepth); } \
  NS_SCRIPTABLE NS_IMETHOD GetColorDepth(PRInt32 *aColorDepth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetColorDepth(aColorDepth); } \
  NS_SCRIPTABLE NS_IMETHOD GetAvailWidth(PRInt32 *aAvailWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAvailWidth(aAvailWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetAvailHeight(PRInt32 *aAvailHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAvailHeight(aAvailHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetAvailLeft(PRInt32 *aAvailLeft) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAvailLeft(aAvailLeft); } \
  NS_SCRIPTABLE NS_IMETHOD GetAvailTop(PRInt32 *aAvailTop) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAvailTop(aAvailTop); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozOrientation(nsAString & aMozOrientation) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozOrientation(aMozOrientation); } \
  NS_SCRIPTABLE NS_IMETHOD GetOnmozorientationchange(nsIDOMEventListener * *aOnmozorientationchange) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnmozorientationchange(aOnmozorientationchange); } \
  NS_SCRIPTABLE NS_IMETHOD SetOnmozorientationchange(nsIDOMEventListener *aOnmozorientationchange) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOnmozorientationchange(aOnmozorientationchange); } \
  NS_SCRIPTABLE NS_IMETHOD MozLockOrientation(const nsAString & orientation, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozLockOrientation(orientation, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozUnlockOrientation(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozUnlockOrientation(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMScreen : public nsIDOMScreen
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSCREEN

  nsDOMScreen();

private:
  ~nsDOMScreen();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMScreen, nsIDOMScreen)

nsDOMScreen::nsDOMScreen()
{
  /* member initializers and constructor code */
}

nsDOMScreen::~nsDOMScreen()
{
  /* destructor code */
}

/* readonly attribute long top; */
NS_IMETHODIMP nsDOMScreen::GetTop(PRInt32 *aTop)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long left; */
NS_IMETHODIMP nsDOMScreen::GetLeft(PRInt32 *aLeft)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long width; */
NS_IMETHODIMP nsDOMScreen::GetWidth(PRInt32 *aWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long height; */
NS_IMETHODIMP nsDOMScreen::GetHeight(PRInt32 *aHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long pixelDepth; */
NS_IMETHODIMP nsDOMScreen::GetPixelDepth(PRInt32 *aPixelDepth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long colorDepth; */
NS_IMETHODIMP nsDOMScreen::GetColorDepth(PRInt32 *aColorDepth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long availWidth; */
NS_IMETHODIMP nsDOMScreen::GetAvailWidth(PRInt32 *aAvailWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long availHeight; */
NS_IMETHODIMP nsDOMScreen::GetAvailHeight(PRInt32 *aAvailHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long availLeft; */
NS_IMETHODIMP nsDOMScreen::GetAvailLeft(PRInt32 *aAvailLeft)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long availTop; */
NS_IMETHODIMP nsDOMScreen::GetAvailTop(PRInt32 *aAvailTop)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString mozOrientation; */
NS_IMETHODIMP nsDOMScreen::GetMozOrientation(nsAString & aMozOrientation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventListener onmozorientationchange; */
NS_IMETHODIMP nsDOMScreen::GetOnmozorientationchange(nsIDOMEventListener * *aOnmozorientationchange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMScreen::SetOnmozorientationchange(nsIDOMEventListener *aOnmozorientationchange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean mozLockOrientation (in DOMString orientation); */
NS_IMETHODIMP nsDOMScreen::MozLockOrientation(const nsAString & orientation, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void mozUnlockOrientation (); */
NS_IMETHODIMP nsDOMScreen::MozUnlockOrientation()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMScreen_h__ */
