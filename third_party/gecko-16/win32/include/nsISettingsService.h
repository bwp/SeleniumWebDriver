/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/settings/nsISettingsService.idl
 */

#ifndef __gen_nsISettingsService_h__
#define __gen_nsISettingsService_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsISettingsServiceCallback */
#define NS_ISETTINGSSERVICECALLBACK_IID_STR "83d67430-8516-11e1-b0c4-0800200c9a66"

#define NS_ISETTINGSSERVICECALLBACK_IID \
  {0x83d67430, 0x8516, 0x11e1, \
    { 0xb0, 0xc4, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsISettingsServiceCallback : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISETTINGSSERVICECALLBACK_IID)

  /* [implicit_jscontext] void handle (in DOMString aName, in jsval aResult); */
  NS_SCRIPTABLE NS_IMETHOD Handle(const nsAString & aName, const JS::Value & aResult, JSContext* cx) = 0;

  /* [implicit_jscontext] void handleError (in DOMString aErrorMessage); */
  NS_SCRIPTABLE NS_IMETHOD HandleError(const nsAString & aErrorMessage, JSContext* cx) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISettingsServiceCallback, NS_ISETTINGSSERVICECALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISETTINGSSERVICECALLBACK \
  NS_SCRIPTABLE NS_IMETHOD Handle(const nsAString & aName, const JS::Value & aResult, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD HandleError(const nsAString & aErrorMessage, JSContext* cx); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISETTINGSSERVICECALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD Handle(const nsAString & aName, const JS::Value & aResult, JSContext* cx) { return _to Handle(aName, aResult, cx); } \
  NS_SCRIPTABLE NS_IMETHOD HandleError(const nsAString & aErrorMessage, JSContext* cx) { return _to HandleError(aErrorMessage, cx); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISETTINGSSERVICECALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD Handle(const nsAString & aName, const JS::Value & aResult, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->Handle(aName, aResult, cx); } \
  NS_SCRIPTABLE NS_IMETHOD HandleError(const nsAString & aErrorMessage, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->HandleError(aErrorMessage, cx); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSettingsServiceCallback : public nsISettingsServiceCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISETTINGSSERVICECALLBACK

  nsSettingsServiceCallback();

private:
  ~nsSettingsServiceCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsSettingsServiceCallback, nsISettingsServiceCallback)

nsSettingsServiceCallback::nsSettingsServiceCallback()
{
  /* member initializers and constructor code */
}

nsSettingsServiceCallback::~nsSettingsServiceCallback()
{
  /* destructor code */
}

/* [implicit_jscontext] void handle (in DOMString aName, in jsval aResult); */
NS_IMETHODIMP nsSettingsServiceCallback::Handle(const nsAString & aName, const JS::Value & aResult, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void handleError (in DOMString aErrorMessage); */
NS_IMETHODIMP nsSettingsServiceCallback::HandleError(const nsAString & aErrorMessage, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsISettingsServiceLock */
#define NS_ISETTINGSSERVICELOCK_IID_STR "3ab3cbc0-8513-11e1-b0c4-0800200c9a66"

#define NS_ISETTINGSSERVICELOCK_IID \
  {0x3ab3cbc0, 0x8513, 0x11e1, \
    { 0xb0, 0xc4, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsISettingsServiceLock : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISETTINGSSERVICELOCK_IID)

  /* void set (in string aName, in jsval aValue, in nsISettingsServiceCallback aCallback); */
  NS_SCRIPTABLE NS_IMETHOD Set(const char * aName, const JS::Value & aValue, nsISettingsServiceCallback *aCallback) = 0;

  /* void get (in string aName, in nsISettingsServiceCallback aCallback); */
  NS_SCRIPTABLE NS_IMETHOD Get(const char * aName, nsISettingsServiceCallback *aCallback) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISettingsServiceLock, NS_ISETTINGSSERVICELOCK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISETTINGSSERVICELOCK \
  NS_SCRIPTABLE NS_IMETHOD Set(const char * aName, const JS::Value & aValue, nsISettingsServiceCallback *aCallback); \
  NS_SCRIPTABLE NS_IMETHOD Get(const char * aName, nsISettingsServiceCallback *aCallback); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISETTINGSSERVICELOCK(_to) \
  NS_SCRIPTABLE NS_IMETHOD Set(const char * aName, const JS::Value & aValue, nsISettingsServiceCallback *aCallback) { return _to Set(aName, aValue, aCallback); } \
  NS_SCRIPTABLE NS_IMETHOD Get(const char * aName, nsISettingsServiceCallback *aCallback) { return _to Get(aName, aCallback); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISETTINGSSERVICELOCK(_to) \
  NS_SCRIPTABLE NS_IMETHOD Set(const char * aName, const JS::Value & aValue, nsISettingsServiceCallback *aCallback) { return !_to ? NS_ERROR_NULL_POINTER : _to->Set(aName, aValue, aCallback); } \
  NS_SCRIPTABLE NS_IMETHOD Get(const char * aName, nsISettingsServiceCallback *aCallback) { return !_to ? NS_ERROR_NULL_POINTER : _to->Get(aName, aCallback); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSettingsServiceLock : public nsISettingsServiceLock
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISETTINGSSERVICELOCK

  nsSettingsServiceLock();

private:
  ~nsSettingsServiceLock();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsSettingsServiceLock, nsISettingsServiceLock)

nsSettingsServiceLock::nsSettingsServiceLock()
{
  /* member initializers and constructor code */
}

nsSettingsServiceLock::~nsSettingsServiceLock()
{
  /* destructor code */
}

/* void set (in string aName, in jsval aValue, in nsISettingsServiceCallback aCallback); */
NS_IMETHODIMP nsSettingsServiceLock::Set(const char * aName, const JS::Value & aValue, nsISettingsServiceCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void get (in string aName, in nsISettingsServiceCallback aCallback); */
NS_IMETHODIMP nsSettingsServiceLock::Get(const char * aName, nsISettingsServiceCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsISettingsService */
#define NS_ISETTINGSSERVICE_IID_STR "3458e760-8513-11e1-b0c4-0800200c9a66"

#define NS_ISETTINGSSERVICE_IID \
  {0x3458e760, 0x8513, 0x11e1, \
    { 0xb0, 0xc4, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsISettingsService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISETTINGSSERVICE_IID)

  /* nsISettingsServiceLock getLock (); */
  NS_SCRIPTABLE NS_IMETHOD GetLock(nsISettingsServiceLock * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISettingsService, NS_ISETTINGSSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISETTINGSSERVICE \
  NS_SCRIPTABLE NS_IMETHOD GetLock(nsISettingsServiceLock * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISETTINGSSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetLock(nsISettingsServiceLock * *_retval NS_OUTPARAM) { return _to GetLock(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISETTINGSSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetLock(nsISettingsServiceLock * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLock(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSettingsService : public nsISettingsService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISETTINGSSERVICE

  nsSettingsService();

private:
  ~nsSettingsService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsSettingsService, nsISettingsService)

nsSettingsService::nsSettingsService()
{
  /* member initializers and constructor code */
}

nsSettingsService::~nsSettingsService()
{
  /* destructor code */
}

/* nsISettingsServiceLock getLock (); */
NS_IMETHODIMP nsSettingsService::GetLock(nsISettingsServiceLock * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsISettingsService_h__ */
