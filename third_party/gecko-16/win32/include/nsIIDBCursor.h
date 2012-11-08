/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/indexedDB/nsIIDBCursor.idl
 */

#ifndef __gen_nsIIDBCursor_h__
#define __gen_nsIIDBCursor_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIIDBRequest; /* forward declaration */


/* starting interface:    nsIIDBCursor */
#define NS_IIDBCURSOR_IID_STR "148579a3-6b28-4b2a-92c3-ff5719e8e03e"

#define NS_IIDBCURSOR_IID \
  {0x148579a3, 0x6b28, 0x4b2a, \
    { 0x92, 0xc3, 0xff, 0x57, 0x19, 0xe8, 0xe0, 0x3e }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIIDBCursor : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IIDBCURSOR_IID)

  /* readonly attribute DOMString direction; */
  NS_SCRIPTABLE NS_IMETHOD GetDirection(nsAString & aDirection) = 0;

  /* readonly attribute nsISupports source; */
  NS_SCRIPTABLE NS_IMETHOD GetSource(nsISupports * *aSource) = 0;

  /* [implicit_jscontext] readonly attribute jsval key; */
  NS_SCRIPTABLE NS_IMETHOD GetKey(JSContext* cx, JS::Value *aKey) = 0;

  /* [implicit_jscontext] readonly attribute jsval primaryKey; */
  NS_SCRIPTABLE NS_IMETHOD GetPrimaryKey(JSContext* cx, JS::Value *aPrimaryKey) = 0;

  /* [implicit_jscontext] void continue ([optional] in jsval key); */
  NS_SCRIPTABLE NS_IMETHOD Continue(const JS::Value & key, JSContext* cx) = 0;

  /* [implicit_jscontext] nsIIDBRequest update (in jsval value); */
  NS_SCRIPTABLE NS_IMETHOD Update(const JS::Value & value, JSContext* cx, nsIIDBRequest * *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] nsIIDBRequest delete (); */
  NS_SCRIPTABLE NS_IMETHOD Delete(JSContext* cx, nsIIDBRequest * *_retval NS_OUTPARAM) = 0;

  /* void advance (in long long count); */
  NS_SCRIPTABLE NS_IMETHOD Advance(PRInt64 count) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIIDBCursor, NS_IIDBCURSOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIIDBCURSOR \
  NS_SCRIPTABLE NS_IMETHOD GetDirection(nsAString & aDirection); \
  NS_SCRIPTABLE NS_IMETHOD GetSource(nsISupports * *aSource); \
  NS_SCRIPTABLE NS_IMETHOD GetKey(JSContext* cx, JS::Value *aKey); \
  NS_SCRIPTABLE NS_IMETHOD GetPrimaryKey(JSContext* cx, JS::Value *aPrimaryKey); \
  NS_SCRIPTABLE NS_IMETHOD Continue(const JS::Value & key, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD Update(const JS::Value & value, JSContext* cx, nsIIDBRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Delete(JSContext* cx, nsIIDBRequest * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Advance(PRInt64 count); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIIDBCURSOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDirection(nsAString & aDirection) { return _to GetDirection(aDirection); } \
  NS_SCRIPTABLE NS_IMETHOD GetSource(nsISupports * *aSource) { return _to GetSource(aSource); } \
  NS_SCRIPTABLE NS_IMETHOD GetKey(JSContext* cx, JS::Value *aKey) { return _to GetKey(cx, aKey); } \
  NS_SCRIPTABLE NS_IMETHOD GetPrimaryKey(JSContext* cx, JS::Value *aPrimaryKey) { return _to GetPrimaryKey(cx, aPrimaryKey); } \
  NS_SCRIPTABLE NS_IMETHOD Continue(const JS::Value & key, JSContext* cx) { return _to Continue(key, cx); } \
  NS_SCRIPTABLE NS_IMETHOD Update(const JS::Value & value, JSContext* cx, nsIIDBRequest * *_retval NS_OUTPARAM) { return _to Update(value, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Delete(JSContext* cx, nsIIDBRequest * *_retval NS_OUTPARAM) { return _to Delete(cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Advance(PRInt64 count) { return _to Advance(count); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIIDBCURSOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDirection(nsAString & aDirection) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDirection(aDirection); } \
  NS_SCRIPTABLE NS_IMETHOD GetSource(nsISupports * *aSource) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSource(aSource); } \
  NS_SCRIPTABLE NS_IMETHOD GetKey(JSContext* cx, JS::Value *aKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetKey(cx, aKey); } \
  NS_SCRIPTABLE NS_IMETHOD GetPrimaryKey(JSContext* cx, JS::Value *aPrimaryKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrimaryKey(cx, aPrimaryKey); } \
  NS_SCRIPTABLE NS_IMETHOD Continue(const JS::Value & key, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->Continue(key, cx); } \
  NS_SCRIPTABLE NS_IMETHOD Update(const JS::Value & value, JSContext* cx, nsIIDBRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Update(value, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Delete(JSContext* cx, nsIIDBRequest * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Delete(cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Advance(PRInt64 count) { return !_to ? NS_ERROR_NULL_POINTER : _to->Advance(count); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsIDBCursor : public nsIIDBCursor
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIIDBCURSOR

  nsIDBCursor();

private:
  ~nsIDBCursor();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsIDBCursor, nsIIDBCursor)

nsIDBCursor::nsIDBCursor()
{
  /* member initializers and constructor code */
}

nsIDBCursor::~nsIDBCursor()
{
  /* destructor code */
}

/* readonly attribute DOMString direction; */
NS_IMETHODIMP nsIDBCursor::GetDirection(nsAString & aDirection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISupports source; */
NS_IMETHODIMP nsIDBCursor::GetSource(nsISupports * *aSource)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] readonly attribute jsval key; */
NS_IMETHODIMP nsIDBCursor::GetKey(JSContext* cx, JS::Value *aKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] readonly attribute jsval primaryKey; */
NS_IMETHODIMP nsIDBCursor::GetPrimaryKey(JSContext* cx, JS::Value *aPrimaryKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void continue ([optional] in jsval key); */
NS_IMETHODIMP nsIDBCursor::Continue(const JS::Value & key, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] nsIIDBRequest update (in jsval value); */
NS_IMETHODIMP nsIDBCursor::Update(const JS::Value & value, JSContext* cx, nsIIDBRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] nsIIDBRequest delete (); */
NS_IMETHODIMP nsIDBCursor::Delete(JSContext* cx, nsIIDBRequest * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void advance (in long long count); */
NS_IMETHODIMP nsIDBCursor::Advance(PRInt64 count)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIIDBCursor_h__ */
