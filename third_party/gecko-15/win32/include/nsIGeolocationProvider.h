/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/xpcom/system/nsIGeolocationProvider.idl
 */

#ifndef __gen_nsIGeolocationProvider_h__
#define __gen_nsIGeolocationProvider_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIDOMWindow; /* forward declaration */

class nsIDOMElement; /* forward declaration */

class nsIDOMGeoPosition; /* forward declaration */

class nsIGeolocationPrompt; /* forward declaration */


/* starting interface:    nsIGeolocationUpdate */
#define NS_IGEOLOCATIONUPDATE_IID_STR "b89d7227-9f04-4236-a582-25a3f2779d72"

#define NS_IGEOLOCATIONUPDATE_IID \
  {0xb89d7227, 0x9f04, 0x4236, \
    { 0xa5, 0x82, 0x25, 0xa3, 0xf2, 0x77, 0x9d, 0x72 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIGeolocationUpdate : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IGEOLOCATIONUPDATE_IID)

  /* void update (in nsIDOMGeoPosition position); */
  NS_SCRIPTABLE NS_IMETHOD Update(nsIDOMGeoPosition *position) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIGeolocationUpdate, NS_IGEOLOCATIONUPDATE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIGEOLOCATIONUPDATE \
  NS_SCRIPTABLE NS_IMETHOD Update(nsIDOMGeoPosition *position); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIGEOLOCATIONUPDATE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Update(nsIDOMGeoPosition *position) { return _to Update(position); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIGEOLOCATIONUPDATE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Update(nsIDOMGeoPosition *position) { return !_to ? NS_ERROR_NULL_POINTER : _to->Update(position); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsGeolocationUpdate : public nsIGeolocationUpdate
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIGEOLOCATIONUPDATE

  nsGeolocationUpdate();

private:
  ~nsGeolocationUpdate();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsGeolocationUpdate, nsIGeolocationUpdate)

nsGeolocationUpdate::nsGeolocationUpdate()
{
  /* member initializers and constructor code */
}

nsGeolocationUpdate::~nsGeolocationUpdate()
{
  /* destructor code */
}

/* void update (in nsIDOMGeoPosition position); */
NS_IMETHODIMP nsGeolocationUpdate::Update(nsIDOMGeoPosition *position)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIGeolocationProvider */
#define NS_IGEOLOCATIONPROVIDER_IID_STR "483be98b-f747-490a-8af1-53146d2d5373"

#define NS_IGEOLOCATIONPROVIDER_IID \
  {0x483be98b, 0xf747, 0x490a, \
    { 0x8a, 0xf1, 0x53, 0x14, 0x6d, 0x2d, 0x53, 0x73 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIGeolocationProvider : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IGEOLOCATIONPROVIDER_IID)

  /* void startup (); */
  NS_SCRIPTABLE NS_IMETHOD Startup(void) = 0;

  /* void watch (in nsIGeolocationUpdate callback); */
  NS_SCRIPTABLE NS_IMETHOD Watch(nsIGeolocationUpdate *callback) = 0;

  /* void shutdown (); */
  NS_SCRIPTABLE NS_IMETHOD Shutdown(void) = 0;

  /* void setHighAccuracy (in boolean enable); */
  NS_SCRIPTABLE NS_IMETHOD SetHighAccuracy(bool enable) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIGeolocationProvider, NS_IGEOLOCATIONPROVIDER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIGEOLOCATIONPROVIDER \
  NS_SCRIPTABLE NS_IMETHOD Startup(void); \
  NS_SCRIPTABLE NS_IMETHOD Watch(nsIGeolocationUpdate *callback); \
  NS_SCRIPTABLE NS_IMETHOD Shutdown(void); \
  NS_SCRIPTABLE NS_IMETHOD SetHighAccuracy(bool enable); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIGEOLOCATIONPROVIDER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Startup(void) { return _to Startup(); } \
  NS_SCRIPTABLE NS_IMETHOD Watch(nsIGeolocationUpdate *callback) { return _to Watch(callback); } \
  NS_SCRIPTABLE NS_IMETHOD Shutdown(void) { return _to Shutdown(); } \
  NS_SCRIPTABLE NS_IMETHOD SetHighAccuracy(bool enable) { return _to SetHighAccuracy(enable); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIGEOLOCATIONPROVIDER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Startup(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Startup(); } \
  NS_SCRIPTABLE NS_IMETHOD Watch(nsIGeolocationUpdate *callback) { return !_to ? NS_ERROR_NULL_POINTER : _to->Watch(callback); } \
  NS_SCRIPTABLE NS_IMETHOD Shutdown(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Shutdown(); } \
  NS_SCRIPTABLE NS_IMETHOD SetHighAccuracy(bool enable) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHighAccuracy(enable); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsGeolocationProvider : public nsIGeolocationProvider
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIGEOLOCATIONPROVIDER

  nsGeolocationProvider();

private:
  ~nsGeolocationProvider();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsGeolocationProvider, nsIGeolocationProvider)

nsGeolocationProvider::nsGeolocationProvider()
{
  /* member initializers and constructor code */
}

nsGeolocationProvider::~nsGeolocationProvider()
{
  /* destructor code */
}

/* void startup (); */
NS_IMETHODIMP nsGeolocationProvider::Startup()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void watch (in nsIGeolocationUpdate callback); */
NS_IMETHODIMP nsGeolocationProvider::Watch(nsIGeolocationUpdate *callback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void shutdown (); */
NS_IMETHODIMP nsGeolocationProvider::Shutdown()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setHighAccuracy (in boolean enable); */
NS_IMETHODIMP nsGeolocationProvider::SetHighAccuracy(bool enable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

/*  
    This must be implemented by geolocation providers.  It
    must support nsIGeolocationProvider.
*/
#define NS_GEOLOCATION_PROVIDER_CONTRACTID "@mozilla.org/geolocation/provider;1"

#endif /* __gen_nsIGeolocationProvider_h__ */
