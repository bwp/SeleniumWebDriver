/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/indexedDB/nsIIDBVersionChangeEvent.idl
 */

#ifndef __gen_nsIIDBVersionChangeEvent_h__
#define __gen_nsIIDBVersionChangeEvent_h__


#ifndef __gen_nsIDOMEvent_h__
#include "nsIDOMEvent.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIIDBVersionChangeEvent */
#define NS_IIDBVERSIONCHANGEEVENT_IID_STR "bfe7143f-1cfd-488d-bc0b-fa22d9d7c840"

#define NS_IIDBVERSIONCHANGEEVENT_IID \
  {0xbfe7143f, 0x1cfd, 0x488d, \
    { 0xbc, 0x0b, 0xfa, 0x22, 0xd9, 0xd7, 0xc8, 0x40 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIIDBVersionChangeEvent : public nsIDOMEvent {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IIDBVERSIONCHANGEEVENT_IID)

  /* readonly attribute unsigned long long oldVersion; */
  NS_SCRIPTABLE NS_IMETHOD GetOldVersion(PRUint64 *aOldVersion) = 0;

  /* [implicit_jscontext] readonly attribute jsval newVersion; */
  NS_SCRIPTABLE NS_IMETHOD GetNewVersion(JSContext* cx, JS::Value *aNewVersion) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIIDBVersionChangeEvent, NS_IIDBVERSIONCHANGEEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIIDBVERSIONCHANGEEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetOldVersion(PRUint64 *aOldVersion); \
  NS_SCRIPTABLE NS_IMETHOD GetNewVersion(JSContext* cx, JS::Value *aNewVersion); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIIDBVERSIONCHANGEEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOldVersion(PRUint64 *aOldVersion) { return _to GetOldVersion(aOldVersion); } \
  NS_SCRIPTABLE NS_IMETHOD GetNewVersion(JSContext* cx, JS::Value *aNewVersion) { return _to GetNewVersion(cx, aNewVersion); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIIDBVERSIONCHANGEEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOldVersion(PRUint64 *aOldVersion) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOldVersion(aOldVersion); } \
  NS_SCRIPTABLE NS_IMETHOD GetNewVersion(JSContext* cx, JS::Value *aNewVersion) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNewVersion(cx, aNewVersion); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsIDBVersionChangeEvent : public nsIIDBVersionChangeEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIIDBVERSIONCHANGEEVENT

  nsIDBVersionChangeEvent();

private:
  ~nsIDBVersionChangeEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsIDBVersionChangeEvent, nsIIDBVersionChangeEvent)

nsIDBVersionChangeEvent::nsIDBVersionChangeEvent()
{
  /* member initializers and constructor code */
}

nsIDBVersionChangeEvent::~nsIDBVersionChangeEvent()
{
  /* destructor code */
}

/* readonly attribute unsigned long long oldVersion; */
NS_IMETHODIMP nsIDBVersionChangeEvent::GetOldVersion(PRUint64 *aOldVersion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] readonly attribute jsval newVersion; */
NS_IMETHODIMP nsIDBVersionChangeEvent::GetNewVersion(JSContext* cx, JS::Value *aNewVersion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIIDBVersionChangeEvent_h__ */
