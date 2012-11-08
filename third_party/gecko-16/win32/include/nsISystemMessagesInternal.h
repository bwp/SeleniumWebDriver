/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/messages/interfaces/nsISystemMessagesInternal.idl
 */

#ifndef __gen_nsISystemMessagesInternal_h__
#define __gen_nsISystemMessagesInternal_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */


/* starting interface:    nsISystemMessagesInternal */
#define NS_ISYSTEMMESSAGESINTERNAL_IID_STR "fdc1ba03-5d8f-4de9-894a-333c7a136c5f"

#define NS_ISYSTEMMESSAGESINTERNAL_IID \
  {0xfdc1ba03, 0x5d8f, 0x4de9, \
    { 0x89, 0x4a, 0x33, 0x3c, 0x7a, 0x13, 0x6c, 0x5f }}

class NS_NO_VTABLE NS_SCRIPTABLE nsISystemMessagesInternal : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISYSTEMMESSAGESINTERNAL_IID)

  /* void sendMessage (in DOMString type, in jsval message, in nsIURI manifestURI); */
  NS_SCRIPTABLE NS_IMETHOD SendMessage(const nsAString & type, const JS::Value & message, nsIURI *manifestURI) = 0;

  /* void registerPage (in DOMString type, in nsIURI pageURI, in nsIURI manifestURI); */
  NS_SCRIPTABLE NS_IMETHOD RegisterPage(const nsAString & type, nsIURI *pageURI, nsIURI *manifestURI) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISystemMessagesInternal, NS_ISYSTEMMESSAGESINTERNAL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISYSTEMMESSAGESINTERNAL \
  NS_SCRIPTABLE NS_IMETHOD SendMessage(const nsAString & type, const JS::Value & message, nsIURI *manifestURI); \
  NS_SCRIPTABLE NS_IMETHOD RegisterPage(const nsAString & type, nsIURI *pageURI, nsIURI *manifestURI); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISYSTEMMESSAGESINTERNAL(_to) \
  NS_SCRIPTABLE NS_IMETHOD SendMessage(const nsAString & type, const JS::Value & message, nsIURI *manifestURI) { return _to SendMessage(type, message, manifestURI); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterPage(const nsAString & type, nsIURI *pageURI, nsIURI *manifestURI) { return _to RegisterPage(type, pageURI, manifestURI); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISYSTEMMESSAGESINTERNAL(_to) \
  NS_SCRIPTABLE NS_IMETHOD SendMessage(const nsAString & type, const JS::Value & message, nsIURI *manifestURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendMessage(type, message, manifestURI); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterPage(const nsAString & type, nsIURI *pageURI, nsIURI *manifestURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterPage(type, pageURI, manifestURI); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSystemMessagesInternal : public nsISystemMessagesInternal
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISYSTEMMESSAGESINTERNAL

  nsSystemMessagesInternal();

private:
  ~nsSystemMessagesInternal();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsSystemMessagesInternal, nsISystemMessagesInternal)

nsSystemMessagesInternal::nsSystemMessagesInternal()
{
  /* member initializers and constructor code */
}

nsSystemMessagesInternal::~nsSystemMessagesInternal()
{
  /* destructor code */
}

/* void sendMessage (in DOMString type, in jsval message, in nsIURI manifestURI); */
NS_IMETHODIMP nsSystemMessagesInternal::SendMessage(const nsAString & type, const JS::Value & message, nsIURI *manifestURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void registerPage (in DOMString type, in nsIURI pageURI, in nsIURI manifestURI); */
NS_IMETHODIMP nsSystemMessagesInternal::RegisterPage(const nsAString & type, nsIURI *pageURI, nsIURI *manifestURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsISystemMessagesInternal_h__ */
