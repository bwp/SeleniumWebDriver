/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/toolkit/devtools/debugger/nsIJSInspector.idl
 */

#ifndef __gen_nsIJSInspector_h__
#define __gen_nsIJSInspector_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIJSInspector */
#define NS_IJSINSPECTOR_IID_STR "dbf84113-506a-4fd3-9183-a0348c6fa9cc"

#define NS_IJSINSPECTOR_IID \
  {0xdbf84113, 0x506a, 0x4fd3, \
    { 0x91, 0x83, 0xa0, 0x34, 0x8c, 0x6f, 0xa9, 0xcc }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIJSInspector : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IJSINSPECTOR_IID)

  /* unsigned long enterNestedEventLoop (); */
  NS_SCRIPTABLE NS_IMETHOD EnterNestedEventLoop(PRUint32 *_retval NS_OUTPARAM) = 0;

  /* unsigned long exitNestedEventLoop (); */
  NS_SCRIPTABLE NS_IMETHOD ExitNestedEventLoop(PRUint32 *_retval NS_OUTPARAM) = 0;

  /* readonly attribute unsigned long eventLoopNestLevel; */
  NS_SCRIPTABLE NS_IMETHOD GetEventLoopNestLevel(PRUint32 *aEventLoopNestLevel) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIJSInspector, NS_IJSINSPECTOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIJSINSPECTOR \
  NS_SCRIPTABLE NS_IMETHOD EnterNestedEventLoop(PRUint32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ExitNestedEventLoop(PRUint32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetEventLoopNestLevel(PRUint32 *aEventLoopNestLevel); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIJSINSPECTOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD EnterNestedEventLoop(PRUint32 *_retval NS_OUTPARAM) { return _to EnterNestedEventLoop(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExitNestedEventLoop(PRUint32 *_retval NS_OUTPARAM) { return _to ExitNestedEventLoop(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetEventLoopNestLevel(PRUint32 *aEventLoopNestLevel) { return _to GetEventLoopNestLevel(aEventLoopNestLevel); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIJSINSPECTOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD EnterNestedEventLoop(PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnterNestedEventLoop(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExitNestedEventLoop(PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ExitNestedEventLoop(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetEventLoopNestLevel(PRUint32 *aEventLoopNestLevel) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEventLoopNestLevel(aEventLoopNestLevel); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsJSInspector : public nsIJSInspector
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIJSINSPECTOR

  nsJSInspector();

private:
  ~nsJSInspector();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsJSInspector, nsIJSInspector)

nsJSInspector::nsJSInspector()
{
  /* member initializers and constructor code */
}

nsJSInspector::~nsJSInspector()
{
  /* destructor code */
}

/* unsigned long enterNestedEventLoop (); */
NS_IMETHODIMP nsJSInspector::EnterNestedEventLoop(PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long exitNestedEventLoop (); */
NS_IMETHODIMP nsJSInspector::ExitNestedEventLoop(PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long eventLoopNestLevel; */
NS_IMETHODIMP nsJSInspector::GetEventLoopNestLevel(PRUint32 *aEventLoopNestLevel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIJSInspector_h__ */
