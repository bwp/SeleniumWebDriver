/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/widget/nsIScreen.idl
 */

#ifndef __gen_nsIScreen_h__
#define __gen_nsIScreen_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIScreen */
#define NS_ISCREEN_IID_STR "d961f76e-8437-4bc6-9ada-a1c98ace9560"

#define NS_ISCREEN_IID \
  {0xd961f76e, 0x8437, 0x4bc6, \
    { 0x9a, 0xda, 0xa1, 0xc9, 0x8a, 0xce, 0x95, 0x60 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIScreen : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISCREEN_IID)

  enum {
    BRIGHTNESS_DIM = 0U,
    BRIGHTNESS_FULL = 1U,
    BRIGHTNESS_LEVELS = 2U,
    ROTATION_0_DEG = 0U,
    ROTATION_90_DEG = 1U,
    ROTATION_180_DEG = 2U,
    ROTATION_270_DEG = 3U
  };

  /* void GetRect (out long left, out long top, out long width, out long height); */
  NS_SCRIPTABLE NS_IMETHOD GetRect(PRInt32 *left NS_OUTPARAM, PRInt32 *top NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM) = 0;

  /* void GetAvailRect (out long left, out long top, out long width, out long height); */
  NS_SCRIPTABLE NS_IMETHOD GetAvailRect(PRInt32 *left NS_OUTPARAM, PRInt32 *top NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM) = 0;

  /* void lockMinimumBrightness (in unsigned long brightness); */
  NS_SCRIPTABLE NS_IMETHOD LockMinimumBrightness(PRUint32 brightness) = 0;

  /* void unlockMinimumBrightness (in unsigned long brightness); */
  NS_SCRIPTABLE NS_IMETHOD UnlockMinimumBrightness(PRUint32 brightness) = 0;

  /* readonly attribute long pixelDepth; */
  NS_SCRIPTABLE NS_IMETHOD GetPixelDepth(PRInt32 *aPixelDepth) = 0;

  /* readonly attribute long colorDepth; */
  NS_SCRIPTABLE NS_IMETHOD GetColorDepth(PRInt32 *aColorDepth) = 0;

  /* attribute unsigned long rotation; */
  NS_SCRIPTABLE NS_IMETHOD GetRotation(PRUint32 *aRotation) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetRotation(PRUint32 aRotation) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIScreen, NS_ISCREEN_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISCREEN \
  NS_SCRIPTABLE NS_IMETHOD GetRect(PRInt32 *left NS_OUTPARAM, PRInt32 *top NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAvailRect(PRInt32 *left NS_OUTPARAM, PRInt32 *top NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD LockMinimumBrightness(PRUint32 brightness); \
  NS_SCRIPTABLE NS_IMETHOD UnlockMinimumBrightness(PRUint32 brightness); \
  NS_SCRIPTABLE NS_IMETHOD GetPixelDepth(PRInt32 *aPixelDepth); \
  NS_SCRIPTABLE NS_IMETHOD GetColorDepth(PRInt32 *aColorDepth); \
  NS_SCRIPTABLE NS_IMETHOD GetRotation(PRUint32 *aRotation); \
  NS_SCRIPTABLE NS_IMETHOD SetRotation(PRUint32 aRotation); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISCREEN(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRect(PRInt32 *left NS_OUTPARAM, PRInt32 *top NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM) { return _to GetRect(left, top, width, height); } \
  NS_SCRIPTABLE NS_IMETHOD GetAvailRect(PRInt32 *left NS_OUTPARAM, PRInt32 *top NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM) { return _to GetAvailRect(left, top, width, height); } \
  NS_SCRIPTABLE NS_IMETHOD LockMinimumBrightness(PRUint32 brightness) { return _to LockMinimumBrightness(brightness); } \
  NS_SCRIPTABLE NS_IMETHOD UnlockMinimumBrightness(PRUint32 brightness) { return _to UnlockMinimumBrightness(brightness); } \
  NS_SCRIPTABLE NS_IMETHOD GetPixelDepth(PRInt32 *aPixelDepth) { return _to GetPixelDepth(aPixelDepth); } \
  NS_SCRIPTABLE NS_IMETHOD GetColorDepth(PRInt32 *aColorDepth) { return _to GetColorDepth(aColorDepth); } \
  NS_SCRIPTABLE NS_IMETHOD GetRotation(PRUint32 *aRotation) { return _to GetRotation(aRotation); } \
  NS_SCRIPTABLE NS_IMETHOD SetRotation(PRUint32 aRotation) { return _to SetRotation(aRotation); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISCREEN(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRect(PRInt32 *left NS_OUTPARAM, PRInt32 *top NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRect(left, top, width, height); } \
  NS_SCRIPTABLE NS_IMETHOD GetAvailRect(PRInt32 *left NS_OUTPARAM, PRInt32 *top NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAvailRect(left, top, width, height); } \
  NS_SCRIPTABLE NS_IMETHOD LockMinimumBrightness(PRUint32 brightness) { return !_to ? NS_ERROR_NULL_POINTER : _to->LockMinimumBrightness(brightness); } \
  NS_SCRIPTABLE NS_IMETHOD UnlockMinimumBrightness(PRUint32 brightness) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnlockMinimumBrightness(brightness); } \
  NS_SCRIPTABLE NS_IMETHOD GetPixelDepth(PRInt32 *aPixelDepth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPixelDepth(aPixelDepth); } \
  NS_SCRIPTABLE NS_IMETHOD GetColorDepth(PRInt32 *aColorDepth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetColorDepth(aColorDepth); } \
  NS_SCRIPTABLE NS_IMETHOD GetRotation(PRUint32 *aRotation) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRotation(aRotation); } \
  NS_SCRIPTABLE NS_IMETHOD SetRotation(PRUint32 aRotation) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRotation(aRotation); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsScreen : public nsIScreen
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISCREEN

  nsScreen();

private:
  ~nsScreen();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsScreen, nsIScreen)

nsScreen::nsScreen()
{
  /* member initializers and constructor code */
}

nsScreen::~nsScreen()
{
  /* destructor code */
}

/* void GetRect (out long left, out long top, out long width, out long height); */
NS_IMETHODIMP nsScreen::GetRect(PRInt32 *left NS_OUTPARAM, PRInt32 *top NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GetAvailRect (out long left, out long top, out long width, out long height); */
NS_IMETHODIMP nsScreen::GetAvailRect(PRInt32 *left NS_OUTPARAM, PRInt32 *top NS_OUTPARAM, PRInt32 *width NS_OUTPARAM, PRInt32 *height NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void lockMinimumBrightness (in unsigned long brightness); */
NS_IMETHODIMP nsScreen::LockMinimumBrightness(PRUint32 brightness)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unlockMinimumBrightness (in unsigned long brightness); */
NS_IMETHODIMP nsScreen::UnlockMinimumBrightness(PRUint32 brightness)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long pixelDepth; */
NS_IMETHODIMP nsScreen::GetPixelDepth(PRInt32 *aPixelDepth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long colorDepth; */
NS_IMETHODIMP nsScreen::GetColorDepth(PRInt32 *aColorDepth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long rotation; */
NS_IMETHODIMP nsScreen::GetRotation(PRUint32 *aRotation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsScreen::SetRotation(PRUint32 aRotation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIScreen_h__ */
