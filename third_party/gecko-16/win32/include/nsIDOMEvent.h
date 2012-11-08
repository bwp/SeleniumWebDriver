/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/events/nsIDOMEvent.idl
 */

#ifndef __gen_nsIDOMEvent_h__
#define __gen_nsIDOMEvent_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMEventTarget; /* forward declaration */

class nsEvent;
class nsCommandEvent;
class nsPresContext;
class nsInvalidateRequestList;
namespace IPC {
class Message;
}

/* starting interface:    nsIDOMEvent */
#define NS_IDOMEVENT_IID_STR "a7dc0284-5832-4034-a8a5-d860ce0f21d3"

#define NS_IDOMEVENT_IID \
  {0xa7dc0284, 0x5832, 0x4034, \
    { 0xa8, 0xa5, 0xd8, 0x60, 0xce, 0x0f, 0x21, 0xd3 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMEvent : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMEVENT_IID)

  enum {
    NONE = 0U,
    CAPTURING_PHASE = 1U,
    AT_TARGET = 2U,
    BUBBLING_PHASE = 3U
  };

  /* readonly attribute DOMString type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) = 0;

  /* readonly attribute nsIDOMEventTarget target; */
  NS_SCRIPTABLE NS_IMETHOD GetTarget(nsIDOMEventTarget * *aTarget) = 0;

  /* readonly attribute nsIDOMEventTarget currentTarget; */
  NS_SCRIPTABLE NS_IMETHOD GetCurrentTarget(nsIDOMEventTarget * *aCurrentTarget) = 0;

  /* readonly attribute unsigned short eventPhase; */
  NS_SCRIPTABLE NS_IMETHOD GetEventPhase(PRUint16 *aEventPhase) = 0;

  /* readonly attribute boolean bubbles; */
  NS_SCRIPTABLE NS_IMETHOD GetBubbles(bool *aBubbles) = 0;

  /* readonly attribute boolean cancelable; */
  NS_SCRIPTABLE NS_IMETHOD GetCancelable(bool *aCancelable) = 0;

  /* readonly attribute DOMTimeStamp timeStamp; */
  NS_SCRIPTABLE NS_IMETHOD GetTimeStamp(DOMTimeStamp *aTimeStamp) = 0;

  /* void stopPropagation (); */
  NS_SCRIPTABLE NS_IMETHOD StopPropagation(void) = 0;

  /* void preventDefault (); */
  NS_SCRIPTABLE NS_IMETHOD PreventDefault(void) = 0;

  /* void initEvent (in DOMString eventTypeArg, in boolean canBubbleArg, in boolean cancelableArg); */
  NS_SCRIPTABLE NS_IMETHOD InitEvent(const nsAString & eventTypeArg, bool canBubbleArg, bool cancelableArg) = 0;

  /* readonly attribute boolean defaultPrevented; */
  NS_SCRIPTABLE NS_IMETHOD GetDefaultPrevented(bool *aDefaultPrevented) = 0;

  /* void stopImmediatePropagation (); */
  NS_SCRIPTABLE NS_IMETHOD StopImmediatePropagation(void) = 0;

  /* [noscript] void duplicatePrivateData (); */
  NS_IMETHOD DuplicatePrivateData(void) = 0;

  /* [noscript] void setTarget (in nsIDOMEventTarget aTarget); */
  NS_IMETHOD SetTarget(nsIDOMEventTarget *aTarget) = 0;

  /* [notxpcom] boolean IsDispatchStopped (); */
  NS_IMETHOD_(bool) IsDispatchStopped(void) = 0;

  /* [notxpcom] nsEventPtr GetInternalNSEvent (); */
  NS_IMETHOD_(nsEvent *) GetInternalNSEvent(void) = 0;

  /* [noscript] void SetTrusted (in boolean aTrusted); */
  NS_IMETHOD SetTrusted(bool aTrusted) = 0;

  /* [notxpcom] void Serialize (in IPCMessagePtr aMsg, in boolean aSerializeInterfaceType); */
  NS_IMETHOD_(void) Serialize(IPC::Message *aMsg, bool aSerializeInterfaceType) = 0;

  /* [notxpcom] boolean Deserialize (in ConstIPCMessagePtr aMsg, out voidPtr aIter); */
  NS_IMETHOD_(bool) Deserialize(const IPC::Message *aMsg, void **aIter NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMEvent, NS_IDOMEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMEVENT \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType); \
  NS_SCRIPTABLE NS_IMETHOD GetTarget(nsIDOMEventTarget * *aTarget); \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentTarget(nsIDOMEventTarget * *aCurrentTarget); \
  NS_SCRIPTABLE NS_IMETHOD GetEventPhase(PRUint16 *aEventPhase); \
  NS_SCRIPTABLE NS_IMETHOD GetBubbles(bool *aBubbles); \
  NS_SCRIPTABLE NS_IMETHOD GetCancelable(bool *aCancelable); \
  NS_SCRIPTABLE NS_IMETHOD GetTimeStamp(DOMTimeStamp *aTimeStamp); \
  NS_SCRIPTABLE NS_IMETHOD StopPropagation(void); \
  NS_SCRIPTABLE NS_IMETHOD PreventDefault(void); \
  NS_SCRIPTABLE NS_IMETHOD InitEvent(const nsAString & eventTypeArg, bool canBubbleArg, bool cancelableArg); \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultPrevented(bool *aDefaultPrevented); \
  NS_SCRIPTABLE NS_IMETHOD StopImmediatePropagation(void); \
  NS_IMETHOD DuplicatePrivateData(void); \
  NS_IMETHOD SetTarget(nsIDOMEventTarget *aTarget); \
  NS_IMETHOD_(bool) IsDispatchStopped(void); \
  NS_IMETHOD_(nsEvent *) GetInternalNSEvent(void); \
  NS_IMETHOD SetTrusted(bool aTrusted); \
  NS_IMETHOD_(void) Serialize(IPC::Message *aMsg, bool aSerializeInterfaceType); \
  NS_IMETHOD_(bool) Deserialize(const IPC::Message *aMsg, void **aIter NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetTarget(nsIDOMEventTarget * *aTarget) { return _to GetTarget(aTarget); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentTarget(nsIDOMEventTarget * *aCurrentTarget) { return _to GetCurrentTarget(aCurrentTarget); } \
  NS_SCRIPTABLE NS_IMETHOD GetEventPhase(PRUint16 *aEventPhase) { return _to GetEventPhase(aEventPhase); } \
  NS_SCRIPTABLE NS_IMETHOD GetBubbles(bool *aBubbles) { return _to GetBubbles(aBubbles); } \
  NS_SCRIPTABLE NS_IMETHOD GetCancelable(bool *aCancelable) { return _to GetCancelable(aCancelable); } \
  NS_SCRIPTABLE NS_IMETHOD GetTimeStamp(DOMTimeStamp *aTimeStamp) { return _to GetTimeStamp(aTimeStamp); } \
  NS_SCRIPTABLE NS_IMETHOD StopPropagation(void) { return _to StopPropagation(); } \
  NS_SCRIPTABLE NS_IMETHOD PreventDefault(void) { return _to PreventDefault(); } \
  NS_SCRIPTABLE NS_IMETHOD InitEvent(const nsAString & eventTypeArg, bool canBubbleArg, bool cancelableArg) { return _to InitEvent(eventTypeArg, canBubbleArg, cancelableArg); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultPrevented(bool *aDefaultPrevented) { return _to GetDefaultPrevented(aDefaultPrevented); } \
  NS_SCRIPTABLE NS_IMETHOD StopImmediatePropagation(void) { return _to StopImmediatePropagation(); } \
  NS_IMETHOD DuplicatePrivateData(void) { return _to DuplicatePrivateData(); } \
  NS_IMETHOD SetTarget(nsIDOMEventTarget *aTarget) { return _to SetTarget(aTarget); } \
  NS_IMETHOD_(bool) IsDispatchStopped(void) { return _to IsDispatchStopped(); } \
  NS_IMETHOD_(nsEvent *) GetInternalNSEvent(void) { return _to GetInternalNSEvent(); } \
  NS_IMETHOD SetTrusted(bool aTrusted) { return _to SetTrusted(aTrusted); } \
  NS_IMETHOD_(void) Serialize(IPC::Message *aMsg, bool aSerializeInterfaceType) { return _to Serialize(aMsg, aSerializeInterfaceType); } \
  NS_IMETHOD_(bool) Deserialize(const IPC::Message *aMsg, void **aIter NS_OUTPARAM) { return _to Deserialize(aMsg, aIter); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMEVENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetTarget(nsIDOMEventTarget * *aTarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTarget(aTarget); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentTarget(nsIDOMEventTarget * *aCurrentTarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentTarget(aCurrentTarget); } \
  NS_SCRIPTABLE NS_IMETHOD GetEventPhase(PRUint16 *aEventPhase) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEventPhase(aEventPhase); } \
  NS_SCRIPTABLE NS_IMETHOD GetBubbles(bool *aBubbles) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBubbles(aBubbles); } \
  NS_SCRIPTABLE NS_IMETHOD GetCancelable(bool *aCancelable) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCancelable(aCancelable); } \
  NS_SCRIPTABLE NS_IMETHOD GetTimeStamp(DOMTimeStamp *aTimeStamp) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTimeStamp(aTimeStamp); } \
  NS_SCRIPTABLE NS_IMETHOD StopPropagation(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->StopPropagation(); } \
  NS_SCRIPTABLE NS_IMETHOD PreventDefault(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->PreventDefault(); } \
  NS_SCRIPTABLE NS_IMETHOD InitEvent(const nsAString & eventTypeArg, bool canBubbleArg, bool cancelableArg) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitEvent(eventTypeArg, canBubbleArg, cancelableArg); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultPrevented(bool *aDefaultPrevented) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultPrevented(aDefaultPrevented); } \
  NS_SCRIPTABLE NS_IMETHOD StopImmediatePropagation(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->StopImmediatePropagation(); } \
  NS_IMETHOD DuplicatePrivateData(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->DuplicatePrivateData(); } \
  NS_IMETHOD SetTarget(nsIDOMEventTarget *aTarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTarget(aTarget); } \
  NS_IMETHOD_(bool) IsDispatchStopped(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsDispatchStopped(); } \
  NS_IMETHOD_(nsEvent *) GetInternalNSEvent(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInternalNSEvent(); } \
  NS_IMETHOD SetTrusted(bool aTrusted) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTrusted(aTrusted); } \
  NS_IMETHOD_(void) Serialize(IPC::Message *aMsg, bool aSerializeInterfaceType) { return !_to ? NS_ERROR_NULL_POINTER : _to->Serialize(aMsg, aSerializeInterfaceType); } \
  NS_IMETHOD_(bool) Deserialize(const IPC::Message *aMsg, void **aIter NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Deserialize(aMsg, aIter); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMEvent : public nsIDOMEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMEVENT

  nsDOMEvent();

private:
  ~nsDOMEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMEvent, nsIDOMEvent)

nsDOMEvent::nsDOMEvent()
{
  /* member initializers and constructor code */
}

nsDOMEvent::~nsDOMEvent()
{
  /* destructor code */
}

/* readonly attribute DOMString type; */
NS_IMETHODIMP nsDOMEvent::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMEventTarget target; */
NS_IMETHODIMP nsDOMEvent::GetTarget(nsIDOMEventTarget * *aTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMEventTarget currentTarget; */
NS_IMETHODIMP nsDOMEvent::GetCurrentTarget(nsIDOMEventTarget * *aCurrentTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned short eventPhase; */
NS_IMETHODIMP nsDOMEvent::GetEventPhase(PRUint16 *aEventPhase)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean bubbles; */
NS_IMETHODIMP nsDOMEvent::GetBubbles(bool *aBubbles)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean cancelable; */
NS_IMETHODIMP nsDOMEvent::GetCancelable(bool *aCancelable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeStamp timeStamp; */
NS_IMETHODIMP nsDOMEvent::GetTimeStamp(DOMTimeStamp *aTimeStamp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void stopPropagation (); */
NS_IMETHODIMP nsDOMEvent::StopPropagation()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void preventDefault (); */
NS_IMETHODIMP nsDOMEvent::PreventDefault()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initEvent (in DOMString eventTypeArg, in boolean canBubbleArg, in boolean cancelableArg); */
NS_IMETHODIMP nsDOMEvent::InitEvent(const nsAString & eventTypeArg, bool canBubbleArg, bool cancelableArg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean defaultPrevented; */
NS_IMETHODIMP nsDOMEvent::GetDefaultPrevented(bool *aDefaultPrevented)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void stopImmediatePropagation (); */
NS_IMETHODIMP nsDOMEvent::StopImmediatePropagation()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void duplicatePrivateData (); */
NS_IMETHODIMP nsDOMEvent::DuplicatePrivateData()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void setTarget (in nsIDOMEventTarget aTarget); */
NS_IMETHODIMP nsDOMEvent::SetTarget(nsIDOMEventTarget *aTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] boolean IsDispatchStopped (); */
NS_IMETHODIMP_(bool) nsDOMEvent::IsDispatchStopped()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] nsEventPtr GetInternalNSEvent (); */
NS_IMETHODIMP_(nsEvent *) nsDOMEvent::GetInternalNSEvent()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void SetTrusted (in boolean aTrusted); */
NS_IMETHODIMP nsDOMEvent::SetTrusted(bool aTrusted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] void Serialize (in IPCMessagePtr aMsg, in boolean aSerializeInterfaceType); */
NS_IMETHODIMP_(void) nsDOMEvent::Serialize(IPC::Message *aMsg, bool aSerializeInterfaceType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] boolean Deserialize (in ConstIPCMessagePtr aMsg, out voidPtr aIter); */
NS_IMETHODIMP_(bool) nsDOMEvent::Deserialize(const IPC::Message *aMsg, void **aIter NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

nsresult
NS_NewDOMEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, nsEvent *aEvent);
nsresult
NS_NewDOMDataContainerEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, nsEvent *aEvent);
nsresult
NS_NewDOMUIEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, class nsGUIEvent *aEvent);
nsresult
NS_NewDOMMouseEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, class nsInputEvent *aEvent);
nsresult
NS_NewDOMMouseScrollEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, class nsInputEvent *aEvent);
nsresult
NS_NewDOMDragEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, class nsDragEvent *aEvent);
nsresult
NS_NewDOMKeyboardEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, class nsKeyEvent *aEvent);
nsresult
NS_NewDOMCompositionEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, class nsCompositionEvent *aEvent);
nsresult
NS_NewDOMMutationEvent(nsIDOMEvent** aResult NS_OUTPARAM, nsPresContext* aPresContext, class nsMutationEvent* aEvent);
nsresult
NS_NewDOMPopupBlockedEvent(nsIDOMEvent** aResult, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMDeviceProximityEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, nsEvent *aEvent);
nsresult
NS_NewDOMUserProximityEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, nsEvent *aEvent);
nsresult
NS_NewDOMDeviceOrientationEvent(nsIDOMEvent** aResult, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMDeviceLightEvent(nsIDOMEvent** aResult, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMDeviceMotionEvent(nsIDOMEvent** aResult, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMTextEvent(nsIDOMEvent** aResult, nsPresContext* aPresContext, class nsTextEvent* aEvent);
nsresult
NS_NewDOMBeforeUnloadEvent(nsIDOMEvent** aResult, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMPageTransitionEvent(nsIDOMEvent** aResult, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMSVGEvent(nsIDOMEvent** aResult, nsPresContext* aPresContext, class nsEvent* aEvent);
nsresult
NS_NewDOMSVGZoomEvent(nsIDOMEvent** aResult, nsPresContext* aPresContext, class nsGUIEvent* aEvent);
nsresult
NS_NewDOMTimeEvent(nsIDOMEvent** aResult, nsPresContext* aPresContext, class nsEvent* aEvent);
nsresult
NS_NewDOMXULCommandEvent(nsIDOMEvent** aResult, nsPresContext* aPresContext, class nsInputEvent* aEvent);
nsresult
NS_NewDOMCommandEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, nsCommandEvent* aEvent);
nsresult
NS_NewDOMMessageEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, class nsEvent* aEvent);
nsresult
NS_NewDOMProgressEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, class nsEvent* aEvent);
// This empties aInvalidateRequests.
nsresult
NS_NewDOMNotifyPaintEvent(nsIDOMEvent** aResult, nsPresContext* aPresContext,
                          nsEvent* aEvent,
                          PRUint32 aEventType = 0,
                          nsInvalidateRequestList* aInvalidateRequests = nsnull);
nsresult
NS_NewDOMAudioAvailableEvent(nsIDOMEvent** aResult, nsPresContext* aPresContext,
                             nsEvent* aEvent,
                             PRUint32 aEventType = 0,
                             float* aFrameBuffer = nsnull,
                             PRUint32 aFrameBufferLength = 0,
                             float aTime = 0);
nsresult
NS_NewDOMSimpleGestureEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, class nsSimpleGestureEvent* aEvent);
nsresult
NS_NewDOMScrollAreaEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, class nsScrollAreaEvent* aEvent);
nsresult
NS_NewDOMTransitionEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, class nsTransitionEvent* aEvent);
nsresult
NS_NewDOMAnimationEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, class nsAnimationEvent* aEvent);
nsresult
NS_NewDOMCloseEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, class nsEvent* aEvent);
nsresult
NS_NewDOMMozTouchEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, class nsMozTouchEvent* aEvent);
nsresult
NS_NewDOMTouchEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, class nsTouchEvent *aEvent);
nsresult
NS_NewDOMCustomEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMSmsEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMMozSettingsEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMMozContactChangeEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMMozWifiStatusChangeEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMMozWifiConnectionInfoEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMPopStateEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMHashChangeEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, nsEvent* aEvent);
nsresult
NS_NewDOMMozApplicationEvent(nsIDOMEvent** aInstancePtrResult, nsPresContext* aPresContext, nsEvent* aEvent);

#endif /* __gen_nsIDOMEvent_h__ */
