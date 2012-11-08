/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/events/nsIDOMNSEvent.idl
 */

#ifndef __gen_nsIDOMNSEvent_h__
#define __gen_nsIDOMNSEvent_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#ifdef ERROR
#undef ERROR
#endif

/* starting interface:    nsIDOMNSEvent */
#define NS_IDOMNSEVENT_IID_STR "07f905c1-9170-4103-86ca-766374da149a"

#define NS_IDOMNSEVENT_IID \
  {0x07f905c1, 0x9170, 0x4103, \
    { 0x86, 0xca, 0x76, 0x63, 0x74, 0xda, 0x14, 0x9a }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMNSEvent : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMNSEVENT_IID)

  enum {
    MOUSEDOWN = 1,
    MOUSEUP = 2,
    MOUSEOVER = 4,
    MOUSEOUT = 8,
    MOUSEMOVE = 16,
    MOUSEDRAG = 32,
    CLICK = 64,
    DBLCLICK = 128,
    KEYDOWN = 256,
    KEYUP = 512,
    KEYPRESS = 1024,
    DRAGDROP = 2048,
    FOCUS = 4096,
    BLUR = 8192,
    SELECT = 16384,
    CHANGE = 32768,
    RESET = 65536,
    SUBMIT = 131072,
    SCROLL = 262144,
    LOAD = 524288,
    UNLOAD = 1048576,
    XFER_DONE = 2097152,
    ABORT = 4194304,
    ERROR = 8388608,
    LOCATE = 16777216,
    MOVE = 33554432,
    RESIZE = 67108864,
    FORWARD = 134217728,
    HELP = 268435456,
    BACK = 536870912,
    TEXT = 1073741824,
    ALT_MASK = 1,
    CONTROL_MASK = 2,
    SHIFT_MASK = 4,
    META_MASK = 8
  };

  /* readonly attribute nsIDOMEventTarget originalTarget; */
  NS_SCRIPTABLE NS_IMETHOD GetOriginalTarget(nsIDOMEventTarget * *aOriginalTarget) = 0;

  /* readonly attribute nsIDOMEventTarget explicitOriginalTarget; */
  NS_SCRIPTABLE NS_IMETHOD GetExplicitOriginalTarget(nsIDOMEventTarget * *aExplicitOriginalTarget) = 0;

  /* void preventBubble (); */
  NS_SCRIPTABLE NS_IMETHOD PreventBubble(void) = 0;

  /* void preventCapture (); */
  NS_SCRIPTABLE NS_IMETHOD PreventCapture(void) = 0;

  /* boolean getPreventDefault (); */
  NS_SCRIPTABLE NS_IMETHOD GetPreventDefault(bool *_retval NS_OUTPARAM) = 0;

  /* readonly attribute boolean isTrusted; */
  NS_SCRIPTABLE NS_IMETHOD GetIsTrusted(bool *aIsTrusted) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMNSEvent, NS_IDOMNSEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMNSEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetOriginalTarget(nsIDOMEventTarget * *aOriginalTarget); \
  NS_SCRIPTABLE NS_IMETHOD GetExplicitOriginalTarget(nsIDOMEventTarget * *aExplicitOriginalTarget); \
  NS_SCRIPTABLE NS_IMETHOD PreventBubble(void); \
  NS_SCRIPTABLE NS_IMETHOD PreventCapture(void); \
  NS_SCRIPTABLE NS_IMETHOD GetPreventDefault(bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetIsTrusted(bool *aIsTrusted); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMNSEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOriginalTarget(nsIDOMEventTarget * *aOriginalTarget) { return _to GetOriginalTarget(aOriginalTarget); } \
  NS_SCRIPTABLE NS_IMETHOD GetExplicitOriginalTarget(nsIDOMEventTarget * *aExplicitOriginalTarget) { return _to GetExplicitOriginalTarget(aExplicitOriginalTarget); } \
  NS_SCRIPTABLE NS_IMETHOD PreventBubble(void) { return _to PreventBubble(); } \
  NS_SCRIPTABLE NS_IMETHOD PreventCapture(void) { return _to PreventCapture(); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreventDefault(bool *_retval NS_OUTPARAM) { return _to GetPreventDefault(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsTrusted(bool *aIsTrusted) { return _to GetIsTrusted(aIsTrusted); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMNSEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOriginalTarget(nsIDOMEventTarget * *aOriginalTarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOriginalTarget(aOriginalTarget); } \
  NS_SCRIPTABLE NS_IMETHOD GetExplicitOriginalTarget(nsIDOMEventTarget * *aExplicitOriginalTarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExplicitOriginalTarget(aExplicitOriginalTarget); } \
  NS_SCRIPTABLE NS_IMETHOD PreventBubble(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->PreventBubble(); } \
  NS_SCRIPTABLE NS_IMETHOD PreventCapture(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->PreventCapture(); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreventDefault(bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPreventDefault(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsTrusted(bool *aIsTrusted) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsTrusted(aIsTrusted); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMNSEvent : public nsIDOMNSEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMNSEVENT

  nsDOMNSEvent();

private:
  ~nsDOMNSEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMNSEvent, nsIDOMNSEvent)

nsDOMNSEvent::nsDOMNSEvent()
{
  /* member initializers and constructor code */
}

nsDOMNSEvent::~nsDOMNSEvent()
{
  /* destructor code */
}

/* readonly attribute nsIDOMEventTarget originalTarget; */
NS_IMETHODIMP nsDOMNSEvent::GetOriginalTarget(nsIDOMEventTarget * *aOriginalTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMEventTarget explicitOriginalTarget; */
NS_IMETHODIMP nsDOMNSEvent::GetExplicitOriginalTarget(nsIDOMEventTarget * *aExplicitOriginalTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void preventBubble (); */
NS_IMETHODIMP nsDOMNSEvent::PreventBubble()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void preventCapture (); */
NS_IMETHODIMP nsDOMNSEvent::PreventCapture()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean getPreventDefault (); */
NS_IMETHODIMP nsDOMNSEvent::GetPreventDefault(bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isTrusted; */
NS_IMETHODIMP nsDOMNSEvent::GetIsTrusted(bool *aIsTrusted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMNSEvent_h__ */
