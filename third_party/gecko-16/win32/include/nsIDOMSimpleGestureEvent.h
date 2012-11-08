/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/events/nsIDOMSimpleGestureEvent.idl
 */

#ifndef __gen_nsIDOMSimpleGestureEvent_h__
#define __gen_nsIDOMSimpleGestureEvent_h__


#ifndef __gen_nsIDOMMouseEvent_h__
#include "nsIDOMMouseEvent.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMSimpleGestureEvent */
#define NS_IDOMSIMPLEGESTUREEVENT_IID_STR "5e2a88ce-5032-4758-8578-37c6d7f87d7b"

#define NS_IDOMSIMPLEGESTUREEVENT_IID \
  {0x5e2a88ce, 0x5032, 0x4758, \
    { 0x85, 0x78, 0x37, 0xc6, 0xd7, 0xf8, 0x7d, 0x7b }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSimpleGestureEvent : public nsIDOMMouseEvent {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSIMPLEGESTUREEVENT_IID)

  enum {
    DIRECTION_UP = 1U,
    DIRECTION_DOWN = 2U,
    DIRECTION_LEFT = 4U,
    DIRECTION_RIGHT = 8U,
    ROTATION_COUNTERCLOCKWISE = 1U,
    ROTATION_CLOCKWISE = 2U
  };

  /* readonly attribute unsigned long direction; */
  NS_SCRIPTABLE NS_IMETHOD GetDirection(PRUint32 *aDirection) = 0;

  /* readonly attribute double delta; */
  NS_SCRIPTABLE NS_IMETHOD GetDelta(double *aDelta) = 0;

  /* readonly attribute unsigned long clickCount; */
  NS_SCRIPTABLE NS_IMETHOD GetClickCount(PRUint32 *aClickCount) = 0;

  /* void initSimpleGestureEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean cancelableArg, in nsIDOMWindow viewArg, in long detailArg, in long screenXArg, in long screenYArg, in long clientXArg, in long clientYArg, in boolean ctrlKeyArg, in boolean altKeyArg, in boolean shiftKeyArg, in boolean metaKeyArg, in unsigned short buttonArg, in nsIDOMEventTarget relatedTargetArg, in unsigned long directionArg, in double deltaArg, in unsigned long clickCount); */
  NS_SCRIPTABLE NS_IMETHOD InitSimpleGestureEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, nsIDOMWindow *viewArg, PRInt32 detailArg, PRInt32 screenXArg, PRInt32 screenYArg, PRInt32 clientXArg, PRInt32 clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, PRUint16 buttonArg, nsIDOMEventTarget *relatedTargetArg, PRUint32 directionArg, double deltaArg, PRUint32 clickCount) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSimpleGestureEvent, NS_IDOMSIMPLEGESTUREEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSIMPLEGESTUREEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetDirection(PRUint32 *aDirection); \
  NS_SCRIPTABLE NS_IMETHOD GetDelta(double *aDelta); \
  NS_SCRIPTABLE NS_IMETHOD GetClickCount(PRUint32 *aClickCount); \
  NS_SCRIPTABLE NS_IMETHOD InitSimpleGestureEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, nsIDOMWindow *viewArg, PRInt32 detailArg, PRInt32 screenXArg, PRInt32 screenYArg, PRInt32 clientXArg, PRInt32 clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, PRUint16 buttonArg, nsIDOMEventTarget *relatedTargetArg, PRUint32 directionArg, double deltaArg, PRUint32 clickCount); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSIMPLEGESTUREEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDirection(PRUint32 *aDirection) { return _to GetDirection(aDirection); } \
  NS_SCRIPTABLE NS_IMETHOD GetDelta(double *aDelta) { return _to GetDelta(aDelta); } \
  NS_SCRIPTABLE NS_IMETHOD GetClickCount(PRUint32 *aClickCount) { return _to GetClickCount(aClickCount); } \
  NS_SCRIPTABLE NS_IMETHOD InitSimpleGestureEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, nsIDOMWindow *viewArg, PRInt32 detailArg, PRInt32 screenXArg, PRInt32 screenYArg, PRInt32 clientXArg, PRInt32 clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, PRUint16 buttonArg, nsIDOMEventTarget *relatedTargetArg, PRUint32 directionArg, double deltaArg, PRUint32 clickCount) { return _to InitSimpleGestureEvent(typeArg, canBubbleArg, cancelableArg, viewArg, detailArg, screenXArg, screenYArg, clientXArg, clientYArg, ctrlKeyArg, altKeyArg, shiftKeyArg, metaKeyArg, buttonArg, relatedTargetArg, directionArg, deltaArg, clickCount); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSIMPLEGESTUREEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDirection(PRUint32 *aDirection) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDirection(aDirection); } \
  NS_SCRIPTABLE NS_IMETHOD GetDelta(double *aDelta) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDelta(aDelta); } \
  NS_SCRIPTABLE NS_IMETHOD GetClickCount(PRUint32 *aClickCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClickCount(aClickCount); } \
  NS_SCRIPTABLE NS_IMETHOD InitSimpleGestureEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, nsIDOMWindow *viewArg, PRInt32 detailArg, PRInt32 screenXArg, PRInt32 screenYArg, PRInt32 clientXArg, PRInt32 clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, PRUint16 buttonArg, nsIDOMEventTarget *relatedTargetArg, PRUint32 directionArg, double deltaArg, PRUint32 clickCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitSimpleGestureEvent(typeArg, canBubbleArg, cancelableArg, viewArg, detailArg, screenXArg, screenYArg, clientXArg, clientYArg, ctrlKeyArg, altKeyArg, shiftKeyArg, metaKeyArg, buttonArg, relatedTargetArg, directionArg, deltaArg, clickCount); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSimpleGestureEvent : public nsIDOMSimpleGestureEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSIMPLEGESTUREEVENT

  nsDOMSimpleGestureEvent();

private:
  ~nsDOMSimpleGestureEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSimpleGestureEvent, nsIDOMSimpleGestureEvent)

nsDOMSimpleGestureEvent::nsDOMSimpleGestureEvent()
{
  /* member initializers and constructor code */
}

nsDOMSimpleGestureEvent::~nsDOMSimpleGestureEvent()
{
  /* destructor code */
}

/* readonly attribute unsigned long direction; */
NS_IMETHODIMP nsDOMSimpleGestureEvent::GetDirection(PRUint32 *aDirection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute double delta; */
NS_IMETHODIMP nsDOMSimpleGestureEvent::GetDelta(double *aDelta)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long clickCount; */
NS_IMETHODIMP nsDOMSimpleGestureEvent::GetClickCount(PRUint32 *aClickCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initSimpleGestureEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean cancelableArg, in nsIDOMWindow viewArg, in long detailArg, in long screenXArg, in long screenYArg, in long clientXArg, in long clientYArg, in boolean ctrlKeyArg, in boolean altKeyArg, in boolean shiftKeyArg, in boolean metaKeyArg, in unsigned short buttonArg, in nsIDOMEventTarget relatedTargetArg, in unsigned long directionArg, in double deltaArg, in unsigned long clickCount); */
NS_IMETHODIMP nsDOMSimpleGestureEvent::InitSimpleGestureEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, nsIDOMWindow *viewArg, PRInt32 detailArg, PRInt32 screenXArg, PRInt32 screenYArg, PRInt32 clientXArg, PRInt32 clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, PRUint16 buttonArg, nsIDOMEventTarget *relatedTargetArg, PRUint32 directionArg, double deltaArg, PRUint32 clickCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMSimpleGestureEvent_h__ */
