/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/base/nsIDOMWindowUtils.idl
 */

#ifndef __gen_nsIDOMWindowUtils_h__
#define __gen_nsIDOMWindowUtils_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#include "nsColor.h"
#include "nsRect.h"
#include "gfxContext.h"
typedef PRUint64  nsViewID;

class nsICycleCollectorListener; /* forward declaration */

class nsIDOMNode; /* forward declaration */

class nsIDOMNodeList; /* forward declaration */

class nsIDOMElement; /* forward declaration */

class nsIDOMHTMLCanvasElement; /* forward declaration */

class nsIDOMEvent; /* forward declaration */

class nsITransferable; /* forward declaration */

class nsIQueryContentEventResult; /* forward declaration */

class nsIDOMWindow; /* forward declaration */

class nsIDOMBlob; /* forward declaration */

class nsIDOMFile; /* forward declaration */

class nsIFile; /* forward declaration */

class nsIDOMTouch; /* forward declaration */

class nsIDOMClientRect; /* forward declaration */


/* starting interface:    nsIDOMWindowUtils */
#define NS_IDOMWINDOWUTILS_IID_STR "858578f1-9653-4d5c-821a-07479bf2d9b2"

#define NS_IDOMWINDOWUTILS_IID \
  {0x858578f1, 0x9653, 0x4d5c, \
    { 0x82, 0x1a, 0x07, 0x47, 0x9b, 0xf2, 0xd9, 0xb2 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMWindowUtils : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMWINDOWUTILS_IID)

  /* attribute unsigned short imageAnimationMode; */
  NS_SCRIPTABLE NS_IMETHOD GetImageAnimationMode(PRUint16 *aImageAnimationMode) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetImageAnimationMode(PRUint16 aImageAnimationMode) = 0;

  /* readonly attribute boolean docCharsetIsForced; */
  NS_SCRIPTABLE NS_IMETHOD GetDocCharsetIsForced(bool *aDocCharsetIsForced) = 0;

  /* short getCursorType (); */
  NS_SCRIPTABLE NS_IMETHOD GetCursorType(PRInt16 *_retval NS_OUTPARAM) = 0;

  /* AString getDocumentMetadata (in AString aName); */
  NS_SCRIPTABLE NS_IMETHOD GetDocumentMetadata(const nsAString & aName, nsAString & _retval NS_OUTPARAM) = 0;

  /* unsigned long redraw ([optional] in unsigned long aCount); */
  NS_SCRIPTABLE NS_IMETHOD Redraw(PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM) = 0;

  /* void setCSSViewport (in float aWidthPx, in float aHeightPx); */
  NS_SCRIPTABLE NS_IMETHOD SetCSSViewport(float aWidthPx, float aHeightPx) = 0;

  /* void setDisplayPortForElement (in float aXPx, in float aYPx, in float aWidthPx, in float aHeightPx, in nsIDOMElement aElement); */
  NS_SCRIPTABLE NS_IMETHOD SetDisplayPortForElement(float aXPx, float aYPx, float aWidthPx, float aHeightPx, nsIDOMElement *aElement) = 0;

  /* void setResolution (in float aXResolution, in float aYResolution); */
  NS_SCRIPTABLE NS_IMETHOD SetResolution(float aXResolution, float aYResolution) = 0;

  /* attribute boolean isFirstPaint; */
  NS_SCRIPTABLE NS_IMETHOD GetIsFirstPaint(bool *aIsFirstPaint) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetIsFirstPaint(bool aIsFirstPaint) = 0;

  enum {
    MODIFIER_ALT = 1,
    MODIFIER_CONTROL = 2,
    MODIFIER_SHIFT = 4,
    MODIFIER_META = 8,
    MODIFIER_ALTGRAPH = 16,
    MODIFIER_CAPSLOCK = 32,
    MODIFIER_FN = 64,
    MODIFIER_NUMLOCK = 128,
    MODIFIER_SCROLLLOCK = 256,
    MODIFIER_SYMBOLLOCK = 512,
    MODIFIER_OS = 1024
  };

  /* void sendMouseEvent (in AString aType, in float aX, in float aY, in long aButton, in long aClickCount, in long aModifiers, [optional] in boolean aIgnoreRootScrollFrame); */
  NS_SCRIPTABLE NS_IMETHOD SendMouseEvent(const nsAString & aType, float aX, float aY, PRInt32 aButton, PRInt32 aClickCount, PRInt32 aModifiers, bool aIgnoreRootScrollFrame) = 0;

  /* boolean sendTouchEvent (in AString aType, [array, size_is (count)] in PRUint32 aIdentifiers, [array, size_is (count)] in PRInt32 aXs, [array, size_is (count)] in PRInt32 aYs, [array, size_is (count)] in PRUint32 aRxs, [array, size_is (count)] in PRUint32 aRys, [array, size_is (count)] in float aRotationAngles, [array, size_is (count)] in float aForces, in PRUint32 count, in long aModifiers, [optional] in boolean aIgnoreRootScrollFrame); */
  NS_SCRIPTABLE NS_IMETHOD SendTouchEvent(const nsAString & aType, PRUint32 *aIdentifiers, PRInt32 *aXs, PRInt32 *aYs, PRUint32 *aRxs, PRUint32 *aRys, float *aRotationAngles, float *aForces, PRUint32 count, PRInt32 aModifiers, bool aIgnoreRootScrollFrame, bool *_retval NS_OUTPARAM) = 0;

  /* void sendMouseEventToWindow (in AString aType, in float aX, in float aY, in long aButton, in long aClickCount, in long aModifiers, [optional] in boolean aIgnoreRootScrollFrame); */
  NS_SCRIPTABLE NS_IMETHOD SendMouseEventToWindow(const nsAString & aType, float aX, float aY, PRInt32 aButton, PRInt32 aClickCount, PRInt32 aModifiers, bool aIgnoreRootScrollFrame) = 0;

  /* void sendMouseScrollEvent (in AString aType, in float aX, in float aY, in long aButton, in long aScrollFlags, in long aDelta, in long aModifiers); */
  NS_SCRIPTABLE NS_IMETHOD SendMouseScrollEvent(const nsAString & aType, float aX, float aY, PRInt32 aButton, PRInt32 aScrollFlags, PRInt32 aDelta, PRInt32 aModifiers) = 0;

  enum {
    KEY_FLAG_PREVENT_DEFAULT = 1U,
    KEY_FLAG_LOCATION_STANDARD = 16U,
    KEY_FLAG_LOCATION_LEFT = 32U,
    KEY_FLAG_LOCATION_RIGHT = 64U,
    KEY_FLAG_LOCATION_NUMPAD = 128U,
    KEY_FLAG_LOCATION_MOBILE = 256U,
    KEY_FLAG_LOCATION_JOYSTICK = 512U
  };

  /* boolean sendKeyEvent (in AString aType, in long aKeyCode, in long aCharCode, in long aModifiers, [optional] in unsigned long aAdditionalFlags); */
  NS_SCRIPTABLE NS_IMETHOD SendKeyEvent(const nsAString & aType, PRInt32 aKeyCode, PRInt32 aCharCode, PRInt32 aModifiers, PRUint32 aAdditionalFlags, bool *_retval NS_OUTPARAM) = 0;

  /* void sendNativeKeyEvent (in long aNativeKeyboardLayout, in long aNativeKeyCode, in long aModifierFlags, in AString aCharacters, in AString aUnmodifiedCharacters); */
  NS_SCRIPTABLE NS_IMETHOD SendNativeKeyEvent(PRInt32 aNativeKeyboardLayout, PRInt32 aNativeKeyCode, PRInt32 aModifierFlags, const nsAString & aCharacters, const nsAString & aUnmodifiedCharacters) = 0;

  /* void sendNativeMouseEvent (in long aScreenX, in long aScreenY, in long aNativeMessage, in long aModifierFlags, in nsIDOMElement aElement); */
  NS_SCRIPTABLE NS_IMETHOD SendNativeMouseEvent(PRInt32 aScreenX, PRInt32 aScreenY, PRInt32 aNativeMessage, PRInt32 aModifierFlags, nsIDOMElement *aElement) = 0;

  /* void sendNativeMouseScrollEvent (in long aScreenX, in long aScreenY, in unsigned long aNativeMessage, in double aDeltaX, in double aDeltaY, in double aDeltaZ, in unsigned long aModifierFlags, in unsigned long aAdditionalFlags, in nsIDOMElement aElement); */
  NS_SCRIPTABLE NS_IMETHOD SendNativeMouseScrollEvent(PRInt32 aScreenX, PRInt32 aScreenY, PRUint32 aNativeMessage, double aDeltaX, double aDeltaY, double aDeltaZ, PRUint32 aModifierFlags, PRUint32 aAdditionalFlags, nsIDOMElement *aElement) = 0;

  enum {
    MOUSESCROLL_PREFER_WIDGET_AT_POINT = 1U,
    MOUSESCROLL_WIN_SCROLL_LPARAM_NOT_NULL = 65536U
  };

  /* void activateNativeMenuItemAt (in AString indexString); */
  NS_SCRIPTABLE NS_IMETHOD ActivateNativeMenuItemAt(const nsAString & indexString) = 0;

  /* void forceUpdateNativeMenuAt (in AString indexString); */
  NS_SCRIPTABLE NS_IMETHOD ForceUpdateNativeMenuAt(const nsAString & indexString) = 0;

  /* void focus (in nsIDOMElement aElement); */
  NS_SCRIPTABLE NS_IMETHOD Focus(nsIDOMElement *aElement) = 0;

  /* void garbageCollect ([optional] in nsICycleCollectorListener aListener, [optional] in long aExtraForgetSkippableCalls); */
  NS_SCRIPTABLE NS_IMETHOD GarbageCollect(nsICycleCollectorListener *aListener, PRInt32 aExtraForgetSkippableCalls) = 0;

  /* void cycleCollect ([optional] in nsICycleCollectorListener aListener, [optional] in long aExtraForgetSkippableCalls); */
  NS_SCRIPTABLE NS_IMETHOD CycleCollect(nsICycleCollectorListener *aListener, PRInt32 aExtraForgetSkippableCalls) = 0;

  /* void sendSimpleGestureEvent (in AString aType, in float aX, in float aY, in unsigned long aDirection, in double aDelta, in long aModifiers); */
  NS_SCRIPTABLE NS_IMETHOD SendSimpleGestureEvent(const nsAString & aType, float aX, float aY, PRUint32 aDirection, double aDelta, PRInt32 aModifiers) = 0;

  /* nsIDOMElement elementFromPoint (in float aX, in float aY, in boolean aIgnoreRootScrollFrame, in boolean aFlushLayout); */
  NS_SCRIPTABLE NS_IMETHOD ElementFromPoint(float aX, float aY, bool aIgnoreRootScrollFrame, bool aFlushLayout, nsIDOMElement * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMNodeList nodesFromRect (in float aX, in float aY, in float aTopSize, in float aRightSize, in float aBottomSize, in float aLeftSize, in boolean aIgnoreRootScrollFrame, in boolean aFlushLayout); */
  NS_SCRIPTABLE NS_IMETHOD NodesFromRect(float aX, float aY, float aTopSize, float aRightSize, float aBottomSize, float aLeftSize, bool aIgnoreRootScrollFrame, bool aFlushLayout, nsIDOMNodeList * *_retval NS_OUTPARAM) = 0;

  /* PRUint32 compareCanvases (in nsIDOMHTMLCanvasElement aCanvas1, in nsIDOMHTMLCanvasElement aCanvas2, out unsigned long aMaxDifference); */
  NS_SCRIPTABLE NS_IMETHOD CompareCanvases(nsIDOMHTMLCanvasElement *aCanvas1, nsIDOMHTMLCanvasElement *aCanvas2, PRUint32 *aMaxDifference NS_OUTPARAM, PRUint32 *_retval NS_OUTPARAM) = 0;

  /* readonly attribute boolean isMozAfterPaintPending; */
  NS_SCRIPTABLE NS_IMETHOD GetIsMozAfterPaintPending(bool *aIsMozAfterPaintPending) = 0;

  /* void suppressEventHandling (in boolean aSuppress); */
  NS_SCRIPTABLE NS_IMETHOD SuppressEventHandling(bool aSuppress) = 0;

  /* void clearMozAfterPaintEvents (); */
  NS_SCRIPTABLE NS_IMETHOD ClearMozAfterPaintEvents(void) = 0;

  /* void disableNonTestMouseEvents (in boolean aDisable); */
  NS_SCRIPTABLE NS_IMETHOD DisableNonTestMouseEvents(bool aDisable) = 0;

  /* void getScrollXY (in boolean aFlushLayout, out long aScrollX, out long aScrollY); */
  NS_SCRIPTABLE NS_IMETHOD GetScrollXY(bool aFlushLayout, PRInt32 *aScrollX NS_OUTPARAM, PRInt32 *aScrollY NS_OUTPARAM) = 0;

  /* nsIDOMClientRect getRootBounds (); */
  NS_SCRIPTABLE NS_IMETHOD GetRootBounds(nsIDOMClientRect * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute boolean IMEIsOpen; */
  NS_SCRIPTABLE NS_IMETHOD GetIMEIsOpen(bool *aIMEIsOpen) = 0;

  enum {
    IME_STATUS_DISABLED = 0U,
    IME_STATUS_ENABLED = 1U,
    IME_STATUS_PASSWORD = 2U,
    IME_STATUS_PLUGIN = 3U
  };

  /* readonly attribute unsigned long IMEStatus; */
  NS_SCRIPTABLE NS_IMETHOD GetIMEStatus(PRUint32 *aIMEStatus) = 0;

  /* readonly attribute float screenPixelsPerCSSPixel; */
  NS_SCRIPTABLE NS_IMETHOD GetScreenPixelsPerCSSPixel(float *aScreenPixelsPerCSSPixel) = 0;

  /* boolean dispatchDOMEventViaPresShell (in nsIDOMNode aTarget, in nsIDOMEvent aEvent, in boolean aTrusted); */
  NS_SCRIPTABLE NS_IMETHOD DispatchDOMEventViaPresShell(nsIDOMNode *aTarget, nsIDOMEvent *aEvent, bool aTrusted, bool *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] string getClassName (in jsval aObject); */
  NS_SCRIPTABLE NS_IMETHOD GetClassName(const JS::Value & aObject, JSContext* cx, char * *_retval NS_OUTPARAM) = 0;

  /* void sendContentCommandEvent (in AString aType, [optional] in nsITransferable aTransferable); */
  NS_SCRIPTABLE NS_IMETHOD SendContentCommandEvent(const nsAString & aType, nsITransferable *aTransferable) = 0;

  /* void sendCompositionEvent (in AString aType, in AString aData, in AString aLocale); */
  NS_SCRIPTABLE NS_IMETHOD SendCompositionEvent(const nsAString & aType, const nsAString & aData, const nsAString & aLocale) = 0;

  enum {
    COMPOSITION_ATTR_RAWINPUT = 2U,
    COMPOSITION_ATTR_SELECTEDRAWTEXT = 3U,
    COMPOSITION_ATTR_CONVERTEDTEXT = 4U,
    COMPOSITION_ATTR_SELECTEDCONVERTEDTEXT = 5U
  };

  /* void sendTextEvent (in AString aCompositionString, in long aFirstClauseLength, in unsigned long aFirstClauseAttr, in long aSecondClauseLength, in unsigned long aSecondClauseAttr, in long aThirdClauseLength, in unsigned long aThirdClauseAttr, in long aCaretStart, in long aCaretLength); */
  NS_SCRIPTABLE NS_IMETHOD SendTextEvent(const nsAString & aCompositionString, PRInt32 aFirstClauseLength, PRUint32 aFirstClauseAttr, PRInt32 aSecondClauseLength, PRUint32 aSecondClauseAttr, PRInt32 aThirdClauseLength, PRUint32 aThirdClauseAttr, PRInt32 aCaretStart, PRInt32 aCaretLength) = 0;

  /* nsIQueryContentEventResult sendQueryContentEvent (in unsigned long aType, in unsigned long aOffset, in unsigned long aLength, in long aX, in long aY); */
  NS_SCRIPTABLE NS_IMETHOD SendQueryContentEvent(PRUint32 aType, PRUint32 aOffset, PRUint32 aLength, PRInt32 aX, PRInt32 aY, nsIQueryContentEventResult * *_retval NS_OUTPARAM) = 0;

  enum {
    QUERY_SELECTED_TEXT = 3200U,
    QUERY_TEXT_CONTENT = 3201U,
    QUERY_CARET_RECT = 3203U,
    QUERY_TEXT_RECT = 3204U,
    QUERY_EDITOR_RECT = 3205U,
    QUERY_CHARACTER_AT_POINT = 3208U
  };

  /* boolean sendSelectionSetEvent (in unsigned long aOffset, in unsigned long aLength, in boolean aReverse); */
  NS_SCRIPTABLE NS_IMETHOD SendSelectionSetEvent(PRUint32 aOffset, PRUint32 aLength, bool aReverse, bool *_retval NS_OUTPARAM) = 0;

  /* AString getVisitedDependentComputedStyle (in nsIDOMElement aElement, in AString aPseudoElement, in AString aPropertyName); */
  NS_SCRIPTABLE NS_IMETHOD GetVisitedDependentComputedStyle(nsIDOMElement *aElement, const nsAString & aPseudoElement, const nsAString & aPropertyName, nsAString & _retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] jsval getParent (in jsval obj); */
  NS_SCRIPTABLE NS_IMETHOD GetParent(const JS::Value & obj, JSContext* cx, JS::Value *_retval NS_OUTPARAM) = 0;

  /* readonly attribute unsigned long long outerWindowID; */
  NS_SCRIPTABLE NS_IMETHOD GetOuterWindowID(PRUint64 *aOuterWindowID) = 0;

  /* readonly attribute unsigned long long currentInnerWindowID; */
  NS_SCRIPTABLE NS_IMETHOD GetCurrentInnerWindowID(PRUint64 *aCurrentInnerWindowID) = 0;

  /* [noscript] void enterModalState (); */
  NS_IMETHOD EnterModalState(void) = 0;

  /* [noscript] void leaveModalState (); */
  NS_IMETHOD LeaveModalState(void) = 0;

  /* nsIDOMWindow enterModalStateWithWindow (); */
  NS_SCRIPTABLE NS_IMETHOD EnterModalStateWithWindow(nsIDOMWindow * *_retval NS_OUTPARAM) = 0;

  /* void leaveModalStateWithWindow (in nsIDOMWindow aWindow); */
  NS_SCRIPTABLE NS_IMETHOD LeaveModalStateWithWindow(nsIDOMWindow *aWindow) = 0;

  /* [noscript] boolean isInModalState (); */
  NS_IMETHOD IsInModalState(bool *_retval NS_OUTPARAM) = 0;

  /* void suspendTimeouts (); */
  NS_SCRIPTABLE NS_IMETHOD SuspendTimeouts(void) = 0;

  /* void resumeTimeouts (); */
  NS_SCRIPTABLE NS_IMETHOD ResumeTimeouts(void) = 0;

  /* void goOnline (); */
  NS_SCRIPTABLE NS_IMETHOD GoOnline(void) = 0;

  /* readonly attribute AString layerManagerType; */
  NS_SCRIPTABLE NS_IMETHOD GetLayerManagerType(nsAString & aLayerManagerType) = 0;

  /* void startFrameTimeRecording (); */
  NS_SCRIPTABLE NS_IMETHOD StartFrameTimeRecording(void) = 0;

  /* void stopFrameTimeRecording ([optional] out unsigned long frameCount, [array, size_is (frameCount), retval] out float frameTime); */
  NS_SCRIPTABLE NS_IMETHOD StopFrameTimeRecording(PRUint32 *frameCount NS_OUTPARAM, float **frameTime NS_OUTPARAM) = 0;

  /* readonly attribute float displayDPI; */
  NS_SCRIPTABLE NS_IMETHOD GetDisplayDPI(float *aDisplayDPI) = 0;

  /* nsIDOMWindow getOuterWindowWithId (in unsigned long long aOuterWindowID); */
  NS_SCRIPTABLE NS_IMETHOD GetOuterWindowWithId(PRUint64 aOuterWindowID, nsIDOMWindow * *_retval NS_OUTPARAM) = 0;

  /* [noscript] void RenderDocument (in nsConstRect aRect, in PRUint32 aFlags, in nscolor aBackgroundColor, in gfxContext aThebesContext); */
  NS_IMETHOD RenderDocument(const nsRect & aRect, PRUint32 aFlags, nscolor aBackgroundColor, gfxContext *aThebesContext) = 0;

  /* void advanceTimeAndRefresh (in long long aMilliseconds); */
  NS_SCRIPTABLE NS_IMETHOD AdvanceTimeAndRefresh(PRInt64 aMilliseconds) = 0;

  /* void restoreNormalRefresh (); */
  NS_SCRIPTABLE NS_IMETHOD RestoreNormalRefresh(void) = 0;

  /* double computeAnimationDistance (in nsIDOMElement element, in AString property, in AString value1, in AString value2); */
  NS_SCRIPTABLE NS_IMETHOD ComputeAnimationDistance(nsIDOMElement *element, const nsAString & property, const nsAString & value1, const nsAString & value2, double *_retval NS_OUTPARAM) = 0;

  /* nsIDOMFile wrapDOMFile (in nsIFile aFile); */
  NS_SCRIPTABLE NS_IMETHOD WrapDOMFile(nsIFile *aFile, nsIDOMFile * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute string focusedInputType; */
  NS_SCRIPTABLE NS_IMETHOD GetFocusedInputType(char * *aFocusedInputType) = 0;

  /* nsIDOMElement findElementWithViewId (in nsViewID aId); */
  NS_SCRIPTABLE NS_IMETHOD FindElementWithViewId(nsViewID aId, nsIDOMElement * *_retval NS_OUTPARAM) = 0;

  /* boolean leafLayersPartitionWindow (); */
  NS_SCRIPTABLE NS_IMETHOD LeafLayersPartitionWindow(bool *_retval NS_OUTPARAM) = 0;

  /* readonly attribute boolean mayHaveTouchEventListeners; */
  NS_SCRIPTABLE NS_IMETHOD GetMayHaveTouchEventListeners(bool *aMayHaveTouchEventListeners) = 0;

  /* boolean checkAndClearPaintedState (in nsIDOMElement aElement); */
  NS_SCRIPTABLE NS_IMETHOD CheckAndClearPaintedState(nsIDOMElement *aElement, bool *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext,optional_argc] nsIDOMFile getFile (in DOMString aName, [optional] in jsval aBlobParts, [optional] in jsval aParameters); */
  NS_SCRIPTABLE NS_IMETHOD GetFile(const nsAString & aName, const JS::Value & aBlobParts, const JS::Value & aParameters, JSContext* cx, PRUint8 _argc, nsIDOMFile * *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext,optional_argc] nsIDOMBlob getBlob ([optional] in jsval aBlobParts, [optional] in jsval aParameters); */
  NS_SCRIPTABLE NS_IMETHOD GetBlob(const JS::Value & aBlobParts, const JS::Value & aParameters, JSContext* cx, PRUint8 _argc, nsIDOMBlob * *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] long long getFileId (in jsval aFile); */
  NS_SCRIPTABLE NS_IMETHOD GetFileId(const JS::Value & aFile, JSContext* cx, PRInt64 *_retval NS_OUTPARAM) = 0;

  /* boolean getFileReferences (in AString aDatabaseName, in long long aId, [optional] out long aRefCnt, [optional] out long aDBRefCnt, [optional] out long aSliceRefCnt); */
  NS_SCRIPTABLE NS_IMETHOD GetFileReferences(const nsAString & aDatabaseName, PRInt64 aId, PRInt32 *aRefCnt NS_OUTPARAM, PRInt32 *aDBRefCnt NS_OUTPARAM, PRInt32 *aSliceRefCnt NS_OUTPARAM, bool *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] boolean isIncrementalGCEnabled (); */
  NS_SCRIPTABLE NS_IMETHOD IsIncrementalGCEnabled(JSContext* cx, bool *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] void startPCCountProfiling (); */
  NS_SCRIPTABLE NS_IMETHOD StartPCCountProfiling(JSContext* cx) = 0;

  /* [implicit_jscontext] void stopPCCountProfiling (); */
  NS_SCRIPTABLE NS_IMETHOD StopPCCountProfiling(JSContext* cx) = 0;

  /* [implicit_jscontext] void purgePCCounts (); */
  NS_SCRIPTABLE NS_IMETHOD PurgePCCounts(JSContext* cx) = 0;

  /* [implicit_jscontext] long getPCCountScriptCount (); */
  NS_SCRIPTABLE NS_IMETHOD GetPCCountScriptCount(JSContext* cx, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] AString getPCCountScriptSummary (in long script); */
  NS_SCRIPTABLE NS_IMETHOD GetPCCountScriptSummary(PRInt32 script, JSContext* cx, nsAString & _retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] AString getPCCountScriptContents (in long script); */
  NS_SCRIPTABLE NS_IMETHOD GetPCCountScriptContents(PRInt32 script, JSContext* cx, nsAString & _retval NS_OUTPARAM) = 0;

  /* readonly attribute boolean paintingSuppressed; */
  NS_SCRIPTABLE NS_IMETHOD GetPaintingSuppressed(bool *aPaintingSuppressed) = 0;

  /* [implicit_jscontext] readonly attribute jsval plugins; */
  NS_SCRIPTABLE NS_IMETHOD GetPlugins(JSContext* cx, JS::Value *aPlugins) = 0;

  /* void setScrollPositionClampingScrollPortSize (in float aWidth, in float aHeight); */
  NS_SCRIPTABLE NS_IMETHOD SetScrollPositionClampingScrollPortSize(float aWidth, float aHeight) = 0;

  /* void setIsApp (in boolean value); */
  NS_SCRIPTABLE NS_IMETHOD SetIsApp(bool value) = 0;

  /* void setApp (in DOMString manifestURL); */
  NS_SCRIPTABLE NS_IMETHOD SetApp(const nsAString & manifestURL) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMWindowUtils, NS_IDOMWINDOWUTILS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMWINDOWUTILS \
  NS_SCRIPTABLE NS_IMETHOD GetImageAnimationMode(PRUint16 *aImageAnimationMode); \
  NS_SCRIPTABLE NS_IMETHOD SetImageAnimationMode(PRUint16 aImageAnimationMode); \
  NS_SCRIPTABLE NS_IMETHOD GetDocCharsetIsForced(bool *aDocCharsetIsForced); \
  NS_SCRIPTABLE NS_IMETHOD GetCursorType(PRInt16 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDocumentMetadata(const nsAString & aName, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Redraw(PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetCSSViewport(float aWidthPx, float aHeightPx); \
  NS_SCRIPTABLE NS_IMETHOD SetDisplayPortForElement(float aXPx, float aYPx, float aWidthPx, float aHeightPx, nsIDOMElement *aElement); \
  NS_SCRIPTABLE NS_IMETHOD SetResolution(float aXResolution, float aYResolution); \
  NS_SCRIPTABLE NS_IMETHOD GetIsFirstPaint(bool *aIsFirstPaint); \
  NS_SCRIPTABLE NS_IMETHOD SetIsFirstPaint(bool aIsFirstPaint); \
  NS_SCRIPTABLE NS_IMETHOD SendMouseEvent(const nsAString & aType, float aX, float aY, PRInt32 aButton, PRInt32 aClickCount, PRInt32 aModifiers, bool aIgnoreRootScrollFrame); \
  NS_SCRIPTABLE NS_IMETHOD SendTouchEvent(const nsAString & aType, PRUint32 *aIdentifiers, PRInt32 *aXs, PRInt32 *aYs, PRUint32 *aRxs, PRUint32 *aRys, float *aRotationAngles, float *aForces, PRUint32 count, PRInt32 aModifiers, bool aIgnoreRootScrollFrame, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SendMouseEventToWindow(const nsAString & aType, float aX, float aY, PRInt32 aButton, PRInt32 aClickCount, PRInt32 aModifiers, bool aIgnoreRootScrollFrame); \
  NS_SCRIPTABLE NS_IMETHOD SendMouseScrollEvent(const nsAString & aType, float aX, float aY, PRInt32 aButton, PRInt32 aScrollFlags, PRInt32 aDelta, PRInt32 aModifiers); \
  NS_SCRIPTABLE NS_IMETHOD SendKeyEvent(const nsAString & aType, PRInt32 aKeyCode, PRInt32 aCharCode, PRInt32 aModifiers, PRUint32 aAdditionalFlags, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SendNativeKeyEvent(PRInt32 aNativeKeyboardLayout, PRInt32 aNativeKeyCode, PRInt32 aModifierFlags, const nsAString & aCharacters, const nsAString & aUnmodifiedCharacters); \
  NS_SCRIPTABLE NS_IMETHOD SendNativeMouseEvent(PRInt32 aScreenX, PRInt32 aScreenY, PRInt32 aNativeMessage, PRInt32 aModifierFlags, nsIDOMElement *aElement); \
  NS_SCRIPTABLE NS_IMETHOD SendNativeMouseScrollEvent(PRInt32 aScreenX, PRInt32 aScreenY, PRUint32 aNativeMessage, double aDeltaX, double aDeltaY, double aDeltaZ, PRUint32 aModifierFlags, PRUint32 aAdditionalFlags, nsIDOMElement *aElement); \
  NS_SCRIPTABLE NS_IMETHOD ActivateNativeMenuItemAt(const nsAString & indexString); \
  NS_SCRIPTABLE NS_IMETHOD ForceUpdateNativeMenuAt(const nsAString & indexString); \
  NS_SCRIPTABLE NS_IMETHOD Focus(nsIDOMElement *aElement); \
  NS_SCRIPTABLE NS_IMETHOD GarbageCollect(nsICycleCollectorListener *aListener, PRInt32 aExtraForgetSkippableCalls); \
  NS_SCRIPTABLE NS_IMETHOD CycleCollect(nsICycleCollectorListener *aListener, PRInt32 aExtraForgetSkippableCalls); \
  NS_SCRIPTABLE NS_IMETHOD SendSimpleGestureEvent(const nsAString & aType, float aX, float aY, PRUint32 aDirection, double aDelta, PRInt32 aModifiers); \
  NS_SCRIPTABLE NS_IMETHOD ElementFromPoint(float aX, float aY, bool aIgnoreRootScrollFrame, bool aFlushLayout, nsIDOMElement * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD NodesFromRect(float aX, float aY, float aTopSize, float aRightSize, float aBottomSize, float aLeftSize, bool aIgnoreRootScrollFrame, bool aFlushLayout, nsIDOMNodeList * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CompareCanvases(nsIDOMHTMLCanvasElement *aCanvas1, nsIDOMHTMLCanvasElement *aCanvas2, PRUint32 *aMaxDifference NS_OUTPARAM, PRUint32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetIsMozAfterPaintPending(bool *aIsMozAfterPaintPending); \
  NS_SCRIPTABLE NS_IMETHOD SuppressEventHandling(bool aSuppress); \
  NS_SCRIPTABLE NS_IMETHOD ClearMozAfterPaintEvents(void); \
  NS_SCRIPTABLE NS_IMETHOD DisableNonTestMouseEvents(bool aDisable); \
  NS_SCRIPTABLE NS_IMETHOD GetScrollXY(bool aFlushLayout, PRInt32 *aScrollX NS_OUTPARAM, PRInt32 *aScrollY NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetRootBounds(nsIDOMClientRect * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetIMEIsOpen(bool *aIMEIsOpen); \
  NS_SCRIPTABLE NS_IMETHOD GetIMEStatus(PRUint32 *aIMEStatus); \
  NS_SCRIPTABLE NS_IMETHOD GetScreenPixelsPerCSSPixel(float *aScreenPixelsPerCSSPixel); \
  NS_SCRIPTABLE NS_IMETHOD DispatchDOMEventViaPresShell(nsIDOMNode *aTarget, nsIDOMEvent *aEvent, bool aTrusted, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetClassName(const JS::Value & aObject, JSContext* cx, char * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SendContentCommandEvent(const nsAString & aType, nsITransferable *aTransferable); \
  NS_SCRIPTABLE NS_IMETHOD SendCompositionEvent(const nsAString & aType, const nsAString & aData, const nsAString & aLocale); \
  NS_SCRIPTABLE NS_IMETHOD SendTextEvent(const nsAString & aCompositionString, PRInt32 aFirstClauseLength, PRUint32 aFirstClauseAttr, PRInt32 aSecondClauseLength, PRUint32 aSecondClauseAttr, PRInt32 aThirdClauseLength, PRUint32 aThirdClauseAttr, PRInt32 aCaretStart, PRInt32 aCaretLength); \
  NS_SCRIPTABLE NS_IMETHOD SendQueryContentEvent(PRUint32 aType, PRUint32 aOffset, PRUint32 aLength, PRInt32 aX, PRInt32 aY, nsIQueryContentEventResult * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SendSelectionSetEvent(PRUint32 aOffset, PRUint32 aLength, bool aReverse, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetVisitedDependentComputedStyle(nsIDOMElement *aElement, const nsAString & aPseudoElement, const nsAString & aPropertyName, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetParent(const JS::Value & obj, JSContext* cx, JS::Value *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetOuterWindowID(PRUint64 *aOuterWindowID); \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentInnerWindowID(PRUint64 *aCurrentInnerWindowID); \
  NS_IMETHOD EnterModalState(void); \
  NS_IMETHOD LeaveModalState(void); \
  NS_SCRIPTABLE NS_IMETHOD EnterModalStateWithWindow(nsIDOMWindow * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD LeaveModalStateWithWindow(nsIDOMWindow *aWindow); \
  NS_IMETHOD IsInModalState(bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SuspendTimeouts(void); \
  NS_SCRIPTABLE NS_IMETHOD ResumeTimeouts(void); \
  NS_SCRIPTABLE NS_IMETHOD GoOnline(void); \
  NS_SCRIPTABLE NS_IMETHOD GetLayerManagerType(nsAString & aLayerManagerType); \
  NS_SCRIPTABLE NS_IMETHOD StartFrameTimeRecording(void); \
  NS_SCRIPTABLE NS_IMETHOD StopFrameTimeRecording(PRUint32 *frameCount NS_OUTPARAM, float **frameTime NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDisplayDPI(float *aDisplayDPI); \
  NS_SCRIPTABLE NS_IMETHOD GetOuterWindowWithId(PRUint64 aOuterWindowID, nsIDOMWindow * *_retval NS_OUTPARAM); \
  NS_IMETHOD RenderDocument(const nsRect & aRect, PRUint32 aFlags, nscolor aBackgroundColor, gfxContext *aThebesContext); \
  NS_SCRIPTABLE NS_IMETHOD AdvanceTimeAndRefresh(PRInt64 aMilliseconds); \
  NS_SCRIPTABLE NS_IMETHOD RestoreNormalRefresh(void); \
  NS_SCRIPTABLE NS_IMETHOD ComputeAnimationDistance(nsIDOMElement *element, const nsAString & property, const nsAString & value1, const nsAString & value2, double *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD WrapDOMFile(nsIFile *aFile, nsIDOMFile * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFocusedInputType(char * *aFocusedInputType); \
  NS_SCRIPTABLE NS_IMETHOD FindElementWithViewId(nsViewID aId, nsIDOMElement * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD LeafLayersPartitionWindow(bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetMayHaveTouchEventListeners(bool *aMayHaveTouchEventListeners); \
  NS_SCRIPTABLE NS_IMETHOD CheckAndClearPaintedState(nsIDOMElement *aElement, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFile(const nsAString & aName, const JS::Value & aBlobParts, const JS::Value & aParameters, JSContext* cx, PRUint8 _argc, nsIDOMFile * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetBlob(const JS::Value & aBlobParts, const JS::Value & aParameters, JSContext* cx, PRUint8 _argc, nsIDOMBlob * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFileId(const JS::Value & aFile, JSContext* cx, PRInt64 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFileReferences(const nsAString & aDatabaseName, PRInt64 aId, PRInt32 *aRefCnt NS_OUTPARAM, PRInt32 *aDBRefCnt NS_OUTPARAM, PRInt32 *aSliceRefCnt NS_OUTPARAM, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsIncrementalGCEnabled(JSContext* cx, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD StartPCCountProfiling(JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD StopPCCountProfiling(JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD PurgePCCounts(JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD GetPCCountScriptCount(JSContext* cx, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetPCCountScriptSummary(PRInt32 script, JSContext* cx, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetPCCountScriptContents(PRInt32 script, JSContext* cx, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetPaintingSuppressed(bool *aPaintingSuppressed); \
  NS_SCRIPTABLE NS_IMETHOD GetPlugins(JSContext* cx, JS::Value *aPlugins); \
  NS_SCRIPTABLE NS_IMETHOD SetScrollPositionClampingScrollPortSize(float aWidth, float aHeight); \
  NS_SCRIPTABLE NS_IMETHOD SetIsApp(bool value); \
  NS_SCRIPTABLE NS_IMETHOD SetApp(const nsAString & manifestURL); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMWINDOWUTILS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetImageAnimationMode(PRUint16 *aImageAnimationMode) { return _to GetImageAnimationMode(aImageAnimationMode); } \
  NS_SCRIPTABLE NS_IMETHOD SetImageAnimationMode(PRUint16 aImageAnimationMode) { return _to SetImageAnimationMode(aImageAnimationMode); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocCharsetIsForced(bool *aDocCharsetIsForced) { return _to GetDocCharsetIsForced(aDocCharsetIsForced); } \
  NS_SCRIPTABLE NS_IMETHOD GetCursorType(PRInt16 *_retval NS_OUTPARAM) { return _to GetCursorType(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocumentMetadata(const nsAString & aName, nsAString & _retval NS_OUTPARAM) { return _to GetDocumentMetadata(aName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Redraw(PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM) { return _to Redraw(aCount, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetCSSViewport(float aWidthPx, float aHeightPx) { return _to SetCSSViewport(aWidthPx, aHeightPx); } \
  NS_SCRIPTABLE NS_IMETHOD SetDisplayPortForElement(float aXPx, float aYPx, float aWidthPx, float aHeightPx, nsIDOMElement *aElement) { return _to SetDisplayPortForElement(aXPx, aYPx, aWidthPx, aHeightPx, aElement); } \
  NS_SCRIPTABLE NS_IMETHOD SetResolution(float aXResolution, float aYResolution) { return _to SetResolution(aXResolution, aYResolution); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsFirstPaint(bool *aIsFirstPaint) { return _to GetIsFirstPaint(aIsFirstPaint); } \
  NS_SCRIPTABLE NS_IMETHOD SetIsFirstPaint(bool aIsFirstPaint) { return _to SetIsFirstPaint(aIsFirstPaint); } \
  NS_SCRIPTABLE NS_IMETHOD SendMouseEvent(const nsAString & aType, float aX, float aY, PRInt32 aButton, PRInt32 aClickCount, PRInt32 aModifiers, bool aIgnoreRootScrollFrame) { return _to SendMouseEvent(aType, aX, aY, aButton, aClickCount, aModifiers, aIgnoreRootScrollFrame); } \
  NS_SCRIPTABLE NS_IMETHOD SendTouchEvent(const nsAString & aType, PRUint32 *aIdentifiers, PRInt32 *aXs, PRInt32 *aYs, PRUint32 *aRxs, PRUint32 *aRys, float *aRotationAngles, float *aForces, PRUint32 count, PRInt32 aModifiers, bool aIgnoreRootScrollFrame, bool *_retval NS_OUTPARAM) { return _to SendTouchEvent(aType, aIdentifiers, aXs, aYs, aRxs, aRys, aRotationAngles, aForces, count, aModifiers, aIgnoreRootScrollFrame, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SendMouseEventToWindow(const nsAString & aType, float aX, float aY, PRInt32 aButton, PRInt32 aClickCount, PRInt32 aModifiers, bool aIgnoreRootScrollFrame) { return _to SendMouseEventToWindow(aType, aX, aY, aButton, aClickCount, aModifiers, aIgnoreRootScrollFrame); } \
  NS_SCRIPTABLE NS_IMETHOD SendMouseScrollEvent(const nsAString & aType, float aX, float aY, PRInt32 aButton, PRInt32 aScrollFlags, PRInt32 aDelta, PRInt32 aModifiers) { return _to SendMouseScrollEvent(aType, aX, aY, aButton, aScrollFlags, aDelta, aModifiers); } \
  NS_SCRIPTABLE NS_IMETHOD SendKeyEvent(const nsAString & aType, PRInt32 aKeyCode, PRInt32 aCharCode, PRInt32 aModifiers, PRUint32 aAdditionalFlags, bool *_retval NS_OUTPARAM) { return _to SendKeyEvent(aType, aKeyCode, aCharCode, aModifiers, aAdditionalFlags, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SendNativeKeyEvent(PRInt32 aNativeKeyboardLayout, PRInt32 aNativeKeyCode, PRInt32 aModifierFlags, const nsAString & aCharacters, const nsAString & aUnmodifiedCharacters) { return _to SendNativeKeyEvent(aNativeKeyboardLayout, aNativeKeyCode, aModifierFlags, aCharacters, aUnmodifiedCharacters); } \
  NS_SCRIPTABLE NS_IMETHOD SendNativeMouseEvent(PRInt32 aScreenX, PRInt32 aScreenY, PRInt32 aNativeMessage, PRInt32 aModifierFlags, nsIDOMElement *aElement) { return _to SendNativeMouseEvent(aScreenX, aScreenY, aNativeMessage, aModifierFlags, aElement); } \
  NS_SCRIPTABLE NS_IMETHOD SendNativeMouseScrollEvent(PRInt32 aScreenX, PRInt32 aScreenY, PRUint32 aNativeMessage, double aDeltaX, double aDeltaY, double aDeltaZ, PRUint32 aModifierFlags, PRUint32 aAdditionalFlags, nsIDOMElement *aElement) { return _to SendNativeMouseScrollEvent(aScreenX, aScreenY, aNativeMessage, aDeltaX, aDeltaY, aDeltaZ, aModifierFlags, aAdditionalFlags, aElement); } \
  NS_SCRIPTABLE NS_IMETHOD ActivateNativeMenuItemAt(const nsAString & indexString) { return _to ActivateNativeMenuItemAt(indexString); } \
  NS_SCRIPTABLE NS_IMETHOD ForceUpdateNativeMenuAt(const nsAString & indexString) { return _to ForceUpdateNativeMenuAt(indexString); } \
  NS_SCRIPTABLE NS_IMETHOD Focus(nsIDOMElement *aElement) { return _to Focus(aElement); } \
  NS_SCRIPTABLE NS_IMETHOD GarbageCollect(nsICycleCollectorListener *aListener, PRInt32 aExtraForgetSkippableCalls) { return _to GarbageCollect(aListener, aExtraForgetSkippableCalls); } \
  NS_SCRIPTABLE NS_IMETHOD CycleCollect(nsICycleCollectorListener *aListener, PRInt32 aExtraForgetSkippableCalls) { return _to CycleCollect(aListener, aExtraForgetSkippableCalls); } \
  NS_SCRIPTABLE NS_IMETHOD SendSimpleGestureEvent(const nsAString & aType, float aX, float aY, PRUint32 aDirection, double aDelta, PRInt32 aModifiers) { return _to SendSimpleGestureEvent(aType, aX, aY, aDirection, aDelta, aModifiers); } \
  NS_SCRIPTABLE NS_IMETHOD ElementFromPoint(float aX, float aY, bool aIgnoreRootScrollFrame, bool aFlushLayout, nsIDOMElement * *_retval NS_OUTPARAM) { return _to ElementFromPoint(aX, aY, aIgnoreRootScrollFrame, aFlushLayout, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD NodesFromRect(float aX, float aY, float aTopSize, float aRightSize, float aBottomSize, float aLeftSize, bool aIgnoreRootScrollFrame, bool aFlushLayout, nsIDOMNodeList * *_retval NS_OUTPARAM) { return _to NodesFromRect(aX, aY, aTopSize, aRightSize, aBottomSize, aLeftSize, aIgnoreRootScrollFrame, aFlushLayout, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CompareCanvases(nsIDOMHTMLCanvasElement *aCanvas1, nsIDOMHTMLCanvasElement *aCanvas2, PRUint32 *aMaxDifference NS_OUTPARAM, PRUint32 *_retval NS_OUTPARAM) { return _to CompareCanvases(aCanvas1, aCanvas2, aMaxDifference, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsMozAfterPaintPending(bool *aIsMozAfterPaintPending) { return _to GetIsMozAfterPaintPending(aIsMozAfterPaintPending); } \
  NS_SCRIPTABLE NS_IMETHOD SuppressEventHandling(bool aSuppress) { return _to SuppressEventHandling(aSuppress); } \
  NS_SCRIPTABLE NS_IMETHOD ClearMozAfterPaintEvents(void) { return _to ClearMozAfterPaintEvents(); } \
  NS_SCRIPTABLE NS_IMETHOD DisableNonTestMouseEvents(bool aDisable) { return _to DisableNonTestMouseEvents(aDisable); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollXY(bool aFlushLayout, PRInt32 *aScrollX NS_OUTPARAM, PRInt32 *aScrollY NS_OUTPARAM) { return _to GetScrollXY(aFlushLayout, aScrollX, aScrollY); } \
  NS_SCRIPTABLE NS_IMETHOD GetRootBounds(nsIDOMClientRect * *_retval NS_OUTPARAM) { return _to GetRootBounds(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIMEIsOpen(bool *aIMEIsOpen) { return _to GetIMEIsOpen(aIMEIsOpen); } \
  NS_SCRIPTABLE NS_IMETHOD GetIMEStatus(PRUint32 *aIMEStatus) { return _to GetIMEStatus(aIMEStatus); } \
  NS_SCRIPTABLE NS_IMETHOD GetScreenPixelsPerCSSPixel(float *aScreenPixelsPerCSSPixel) { return _to GetScreenPixelsPerCSSPixel(aScreenPixelsPerCSSPixel); } \
  NS_SCRIPTABLE NS_IMETHOD DispatchDOMEventViaPresShell(nsIDOMNode *aTarget, nsIDOMEvent *aEvent, bool aTrusted, bool *_retval NS_OUTPARAM) { return _to DispatchDOMEventViaPresShell(aTarget, aEvent, aTrusted, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetClassName(const JS::Value & aObject, JSContext* cx, char * *_retval NS_OUTPARAM) { return _to GetClassName(aObject, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SendContentCommandEvent(const nsAString & aType, nsITransferable *aTransferable) { return _to SendContentCommandEvent(aType, aTransferable); } \
  NS_SCRIPTABLE NS_IMETHOD SendCompositionEvent(const nsAString & aType, const nsAString & aData, const nsAString & aLocale) { return _to SendCompositionEvent(aType, aData, aLocale); } \
  NS_SCRIPTABLE NS_IMETHOD SendTextEvent(const nsAString & aCompositionString, PRInt32 aFirstClauseLength, PRUint32 aFirstClauseAttr, PRInt32 aSecondClauseLength, PRUint32 aSecondClauseAttr, PRInt32 aThirdClauseLength, PRUint32 aThirdClauseAttr, PRInt32 aCaretStart, PRInt32 aCaretLength) { return _to SendTextEvent(aCompositionString, aFirstClauseLength, aFirstClauseAttr, aSecondClauseLength, aSecondClauseAttr, aThirdClauseLength, aThirdClauseAttr, aCaretStart, aCaretLength); } \
  NS_SCRIPTABLE NS_IMETHOD SendQueryContentEvent(PRUint32 aType, PRUint32 aOffset, PRUint32 aLength, PRInt32 aX, PRInt32 aY, nsIQueryContentEventResult * *_retval NS_OUTPARAM) { return _to SendQueryContentEvent(aType, aOffset, aLength, aX, aY, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SendSelectionSetEvent(PRUint32 aOffset, PRUint32 aLength, bool aReverse, bool *_retval NS_OUTPARAM) { return _to SendSelectionSetEvent(aOffset, aLength, aReverse, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetVisitedDependentComputedStyle(nsIDOMElement *aElement, const nsAString & aPseudoElement, const nsAString & aPropertyName, nsAString & _retval NS_OUTPARAM) { return _to GetVisitedDependentComputedStyle(aElement, aPseudoElement, aPropertyName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetParent(const JS::Value & obj, JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return _to GetParent(obj, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetOuterWindowID(PRUint64 *aOuterWindowID) { return _to GetOuterWindowID(aOuterWindowID); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentInnerWindowID(PRUint64 *aCurrentInnerWindowID) { return _to GetCurrentInnerWindowID(aCurrentInnerWindowID); } \
  NS_IMETHOD EnterModalState(void) { return _to EnterModalState(); } \
  NS_IMETHOD LeaveModalState(void) { return _to LeaveModalState(); } \
  NS_SCRIPTABLE NS_IMETHOD EnterModalStateWithWindow(nsIDOMWindow * *_retval NS_OUTPARAM) { return _to EnterModalStateWithWindow(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD LeaveModalStateWithWindow(nsIDOMWindow *aWindow) { return _to LeaveModalStateWithWindow(aWindow); } \
  NS_IMETHOD IsInModalState(bool *_retval NS_OUTPARAM) { return _to IsInModalState(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SuspendTimeouts(void) { return _to SuspendTimeouts(); } \
  NS_SCRIPTABLE NS_IMETHOD ResumeTimeouts(void) { return _to ResumeTimeouts(); } \
  NS_SCRIPTABLE NS_IMETHOD GoOnline(void) { return _to GoOnline(); } \
  NS_SCRIPTABLE NS_IMETHOD GetLayerManagerType(nsAString & aLayerManagerType) { return _to GetLayerManagerType(aLayerManagerType); } \
  NS_SCRIPTABLE NS_IMETHOD StartFrameTimeRecording(void) { return _to StartFrameTimeRecording(); } \
  NS_SCRIPTABLE NS_IMETHOD StopFrameTimeRecording(PRUint32 *frameCount NS_OUTPARAM, float **frameTime NS_OUTPARAM) { return _to StopFrameTimeRecording(frameCount, frameTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetDisplayDPI(float *aDisplayDPI) { return _to GetDisplayDPI(aDisplayDPI); } \
  NS_SCRIPTABLE NS_IMETHOD GetOuterWindowWithId(PRUint64 aOuterWindowID, nsIDOMWindow * *_retval NS_OUTPARAM) { return _to GetOuterWindowWithId(aOuterWindowID, _retval); } \
  NS_IMETHOD RenderDocument(const nsRect & aRect, PRUint32 aFlags, nscolor aBackgroundColor, gfxContext *aThebesContext) { return _to RenderDocument(aRect, aFlags, aBackgroundColor, aThebesContext); } \
  NS_SCRIPTABLE NS_IMETHOD AdvanceTimeAndRefresh(PRInt64 aMilliseconds) { return _to AdvanceTimeAndRefresh(aMilliseconds); } \
  NS_SCRIPTABLE NS_IMETHOD RestoreNormalRefresh(void) { return _to RestoreNormalRefresh(); } \
  NS_SCRIPTABLE NS_IMETHOD ComputeAnimationDistance(nsIDOMElement *element, const nsAString & property, const nsAString & value1, const nsAString & value2, double *_retval NS_OUTPARAM) { return _to ComputeAnimationDistance(element, property, value1, value2, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD WrapDOMFile(nsIFile *aFile, nsIDOMFile * *_retval NS_OUTPARAM) { return _to WrapDOMFile(aFile, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFocusedInputType(char * *aFocusedInputType) { return _to GetFocusedInputType(aFocusedInputType); } \
  NS_SCRIPTABLE NS_IMETHOD FindElementWithViewId(nsViewID aId, nsIDOMElement * *_retval NS_OUTPARAM) { return _to FindElementWithViewId(aId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD LeafLayersPartitionWindow(bool *_retval NS_OUTPARAM) { return _to LeafLayersPartitionWindow(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMayHaveTouchEventListeners(bool *aMayHaveTouchEventListeners) { return _to GetMayHaveTouchEventListeners(aMayHaveTouchEventListeners); } \
  NS_SCRIPTABLE NS_IMETHOD CheckAndClearPaintedState(nsIDOMElement *aElement, bool *_retval NS_OUTPARAM) { return _to CheckAndClearPaintedState(aElement, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFile(const nsAString & aName, const JS::Value & aBlobParts, const JS::Value & aParameters, JSContext* cx, PRUint8 _argc, nsIDOMFile * *_retval NS_OUTPARAM) { return _to GetFile(aName, aBlobParts, aParameters, cx, _argc, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBlob(const JS::Value & aBlobParts, const JS::Value & aParameters, JSContext* cx, PRUint8 _argc, nsIDOMBlob * *_retval NS_OUTPARAM) { return _to GetBlob(aBlobParts, aParameters, cx, _argc, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFileId(const JS::Value & aFile, JSContext* cx, PRInt64 *_retval NS_OUTPARAM) { return _to GetFileId(aFile, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFileReferences(const nsAString & aDatabaseName, PRInt64 aId, PRInt32 *aRefCnt NS_OUTPARAM, PRInt32 *aDBRefCnt NS_OUTPARAM, PRInt32 *aSliceRefCnt NS_OUTPARAM, bool *_retval NS_OUTPARAM) { return _to GetFileReferences(aDatabaseName, aId, aRefCnt, aDBRefCnt, aSliceRefCnt, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsIncrementalGCEnabled(JSContext* cx, bool *_retval NS_OUTPARAM) { return _to IsIncrementalGCEnabled(cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD StartPCCountProfiling(JSContext* cx) { return _to StartPCCountProfiling(cx); } \
  NS_SCRIPTABLE NS_IMETHOD StopPCCountProfiling(JSContext* cx) { return _to StopPCCountProfiling(cx); } \
  NS_SCRIPTABLE NS_IMETHOD PurgePCCounts(JSContext* cx) { return _to PurgePCCounts(cx); } \
  NS_SCRIPTABLE NS_IMETHOD GetPCCountScriptCount(JSContext* cx, PRInt32 *_retval NS_OUTPARAM) { return _to GetPCCountScriptCount(cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetPCCountScriptSummary(PRInt32 script, JSContext* cx, nsAString & _retval NS_OUTPARAM) { return _to GetPCCountScriptSummary(script, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetPCCountScriptContents(PRInt32 script, JSContext* cx, nsAString & _retval NS_OUTPARAM) { return _to GetPCCountScriptContents(script, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetPaintingSuppressed(bool *aPaintingSuppressed) { return _to GetPaintingSuppressed(aPaintingSuppressed); } \
  NS_SCRIPTABLE NS_IMETHOD GetPlugins(JSContext* cx, JS::Value *aPlugins) { return _to GetPlugins(cx, aPlugins); } \
  NS_SCRIPTABLE NS_IMETHOD SetScrollPositionClampingScrollPortSize(float aWidth, float aHeight) { return _to SetScrollPositionClampingScrollPortSize(aWidth, aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD SetIsApp(bool value) { return _to SetIsApp(value); } \
  NS_SCRIPTABLE NS_IMETHOD SetApp(const nsAString & manifestURL) { return _to SetApp(manifestURL); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMWINDOWUTILS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetImageAnimationMode(PRUint16 *aImageAnimationMode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetImageAnimationMode(aImageAnimationMode); } \
  NS_SCRIPTABLE NS_IMETHOD SetImageAnimationMode(PRUint16 aImageAnimationMode) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetImageAnimationMode(aImageAnimationMode); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocCharsetIsForced(bool *aDocCharsetIsForced) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocCharsetIsForced(aDocCharsetIsForced); } \
  NS_SCRIPTABLE NS_IMETHOD GetCursorType(PRInt16 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCursorType(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocumentMetadata(const nsAString & aName, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocumentMetadata(aName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Redraw(PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Redraw(aCount, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetCSSViewport(float aWidthPx, float aHeightPx) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCSSViewport(aWidthPx, aHeightPx); } \
  NS_SCRIPTABLE NS_IMETHOD SetDisplayPortForElement(float aXPx, float aYPx, float aWidthPx, float aHeightPx, nsIDOMElement *aElement) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDisplayPortForElement(aXPx, aYPx, aWidthPx, aHeightPx, aElement); } \
  NS_SCRIPTABLE NS_IMETHOD SetResolution(float aXResolution, float aYResolution) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetResolution(aXResolution, aYResolution); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsFirstPaint(bool *aIsFirstPaint) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsFirstPaint(aIsFirstPaint); } \
  NS_SCRIPTABLE NS_IMETHOD SetIsFirstPaint(bool aIsFirstPaint) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsFirstPaint(aIsFirstPaint); } \
  NS_SCRIPTABLE NS_IMETHOD SendMouseEvent(const nsAString & aType, float aX, float aY, PRInt32 aButton, PRInt32 aClickCount, PRInt32 aModifiers, bool aIgnoreRootScrollFrame) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendMouseEvent(aType, aX, aY, aButton, aClickCount, aModifiers, aIgnoreRootScrollFrame); } \
  NS_SCRIPTABLE NS_IMETHOD SendTouchEvent(const nsAString & aType, PRUint32 *aIdentifiers, PRInt32 *aXs, PRInt32 *aYs, PRUint32 *aRxs, PRUint32 *aRys, float *aRotationAngles, float *aForces, PRUint32 count, PRInt32 aModifiers, bool aIgnoreRootScrollFrame, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendTouchEvent(aType, aIdentifiers, aXs, aYs, aRxs, aRys, aRotationAngles, aForces, count, aModifiers, aIgnoreRootScrollFrame, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SendMouseEventToWindow(const nsAString & aType, float aX, float aY, PRInt32 aButton, PRInt32 aClickCount, PRInt32 aModifiers, bool aIgnoreRootScrollFrame) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendMouseEventToWindow(aType, aX, aY, aButton, aClickCount, aModifiers, aIgnoreRootScrollFrame); } \
  NS_SCRIPTABLE NS_IMETHOD SendMouseScrollEvent(const nsAString & aType, float aX, float aY, PRInt32 aButton, PRInt32 aScrollFlags, PRInt32 aDelta, PRInt32 aModifiers) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendMouseScrollEvent(aType, aX, aY, aButton, aScrollFlags, aDelta, aModifiers); } \
  NS_SCRIPTABLE NS_IMETHOD SendKeyEvent(const nsAString & aType, PRInt32 aKeyCode, PRInt32 aCharCode, PRInt32 aModifiers, PRUint32 aAdditionalFlags, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendKeyEvent(aType, aKeyCode, aCharCode, aModifiers, aAdditionalFlags, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SendNativeKeyEvent(PRInt32 aNativeKeyboardLayout, PRInt32 aNativeKeyCode, PRInt32 aModifierFlags, const nsAString & aCharacters, const nsAString & aUnmodifiedCharacters) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendNativeKeyEvent(aNativeKeyboardLayout, aNativeKeyCode, aModifierFlags, aCharacters, aUnmodifiedCharacters); } \
  NS_SCRIPTABLE NS_IMETHOD SendNativeMouseEvent(PRInt32 aScreenX, PRInt32 aScreenY, PRInt32 aNativeMessage, PRInt32 aModifierFlags, nsIDOMElement *aElement) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendNativeMouseEvent(aScreenX, aScreenY, aNativeMessage, aModifierFlags, aElement); } \
  NS_SCRIPTABLE NS_IMETHOD SendNativeMouseScrollEvent(PRInt32 aScreenX, PRInt32 aScreenY, PRUint32 aNativeMessage, double aDeltaX, double aDeltaY, double aDeltaZ, PRUint32 aModifierFlags, PRUint32 aAdditionalFlags, nsIDOMElement *aElement) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendNativeMouseScrollEvent(aScreenX, aScreenY, aNativeMessage, aDeltaX, aDeltaY, aDeltaZ, aModifierFlags, aAdditionalFlags, aElement); } \
  NS_SCRIPTABLE NS_IMETHOD ActivateNativeMenuItemAt(const nsAString & indexString) { return !_to ? NS_ERROR_NULL_POINTER : _to->ActivateNativeMenuItemAt(indexString); } \
  NS_SCRIPTABLE NS_IMETHOD ForceUpdateNativeMenuAt(const nsAString & indexString) { return !_to ? NS_ERROR_NULL_POINTER : _to->ForceUpdateNativeMenuAt(indexString); } \
  NS_SCRIPTABLE NS_IMETHOD Focus(nsIDOMElement *aElement) { return !_to ? NS_ERROR_NULL_POINTER : _to->Focus(aElement); } \
  NS_SCRIPTABLE NS_IMETHOD GarbageCollect(nsICycleCollectorListener *aListener, PRInt32 aExtraForgetSkippableCalls) { return !_to ? NS_ERROR_NULL_POINTER : _to->GarbageCollect(aListener, aExtraForgetSkippableCalls); } \
  NS_SCRIPTABLE NS_IMETHOD CycleCollect(nsICycleCollectorListener *aListener, PRInt32 aExtraForgetSkippableCalls) { return !_to ? NS_ERROR_NULL_POINTER : _to->CycleCollect(aListener, aExtraForgetSkippableCalls); } \
  NS_SCRIPTABLE NS_IMETHOD SendSimpleGestureEvent(const nsAString & aType, float aX, float aY, PRUint32 aDirection, double aDelta, PRInt32 aModifiers) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendSimpleGestureEvent(aType, aX, aY, aDirection, aDelta, aModifiers); } \
  NS_SCRIPTABLE NS_IMETHOD ElementFromPoint(float aX, float aY, bool aIgnoreRootScrollFrame, bool aFlushLayout, nsIDOMElement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ElementFromPoint(aX, aY, aIgnoreRootScrollFrame, aFlushLayout, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD NodesFromRect(float aX, float aY, float aTopSize, float aRightSize, float aBottomSize, float aLeftSize, bool aIgnoreRootScrollFrame, bool aFlushLayout, nsIDOMNodeList * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->NodesFromRect(aX, aY, aTopSize, aRightSize, aBottomSize, aLeftSize, aIgnoreRootScrollFrame, aFlushLayout, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CompareCanvases(nsIDOMHTMLCanvasElement *aCanvas1, nsIDOMHTMLCanvasElement *aCanvas2, PRUint32 *aMaxDifference NS_OUTPARAM, PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CompareCanvases(aCanvas1, aCanvas2, aMaxDifference, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsMozAfterPaintPending(bool *aIsMozAfterPaintPending) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsMozAfterPaintPending(aIsMozAfterPaintPending); } \
  NS_SCRIPTABLE NS_IMETHOD SuppressEventHandling(bool aSuppress) { return !_to ? NS_ERROR_NULL_POINTER : _to->SuppressEventHandling(aSuppress); } \
  NS_SCRIPTABLE NS_IMETHOD ClearMozAfterPaintEvents(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearMozAfterPaintEvents(); } \
  NS_SCRIPTABLE NS_IMETHOD DisableNonTestMouseEvents(bool aDisable) { return !_to ? NS_ERROR_NULL_POINTER : _to->DisableNonTestMouseEvents(aDisable); } \
  NS_SCRIPTABLE NS_IMETHOD GetScrollXY(bool aFlushLayout, PRInt32 *aScrollX NS_OUTPARAM, PRInt32 *aScrollY NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScrollXY(aFlushLayout, aScrollX, aScrollY); } \
  NS_SCRIPTABLE NS_IMETHOD GetRootBounds(nsIDOMClientRect * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRootBounds(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIMEIsOpen(bool *aIMEIsOpen) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIMEIsOpen(aIMEIsOpen); } \
  NS_SCRIPTABLE NS_IMETHOD GetIMEStatus(PRUint32 *aIMEStatus) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIMEStatus(aIMEStatus); } \
  NS_SCRIPTABLE NS_IMETHOD GetScreenPixelsPerCSSPixel(float *aScreenPixelsPerCSSPixel) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScreenPixelsPerCSSPixel(aScreenPixelsPerCSSPixel); } \
  NS_SCRIPTABLE NS_IMETHOD DispatchDOMEventViaPresShell(nsIDOMNode *aTarget, nsIDOMEvent *aEvent, bool aTrusted, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->DispatchDOMEventViaPresShell(aTarget, aEvent, aTrusted, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetClassName(const JS::Value & aObject, JSContext* cx, char * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClassName(aObject, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SendContentCommandEvent(const nsAString & aType, nsITransferable *aTransferable) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendContentCommandEvent(aType, aTransferable); } \
  NS_SCRIPTABLE NS_IMETHOD SendCompositionEvent(const nsAString & aType, const nsAString & aData, const nsAString & aLocale) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendCompositionEvent(aType, aData, aLocale); } \
  NS_SCRIPTABLE NS_IMETHOD SendTextEvent(const nsAString & aCompositionString, PRInt32 aFirstClauseLength, PRUint32 aFirstClauseAttr, PRInt32 aSecondClauseLength, PRUint32 aSecondClauseAttr, PRInt32 aThirdClauseLength, PRUint32 aThirdClauseAttr, PRInt32 aCaretStart, PRInt32 aCaretLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendTextEvent(aCompositionString, aFirstClauseLength, aFirstClauseAttr, aSecondClauseLength, aSecondClauseAttr, aThirdClauseLength, aThirdClauseAttr, aCaretStart, aCaretLength); } \
  NS_SCRIPTABLE NS_IMETHOD SendQueryContentEvent(PRUint32 aType, PRUint32 aOffset, PRUint32 aLength, PRInt32 aX, PRInt32 aY, nsIQueryContentEventResult * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendQueryContentEvent(aType, aOffset, aLength, aX, aY, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SendSelectionSetEvent(PRUint32 aOffset, PRUint32 aLength, bool aReverse, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendSelectionSetEvent(aOffset, aLength, aReverse, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetVisitedDependentComputedStyle(nsIDOMElement *aElement, const nsAString & aPseudoElement, const nsAString & aPropertyName, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVisitedDependentComputedStyle(aElement, aPseudoElement, aPropertyName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetParent(const JS::Value & obj, JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParent(obj, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetOuterWindowID(PRUint64 *aOuterWindowID) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOuterWindowID(aOuterWindowID); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentInnerWindowID(PRUint64 *aCurrentInnerWindowID) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentInnerWindowID(aCurrentInnerWindowID); } \
  NS_IMETHOD EnterModalState(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnterModalState(); } \
  NS_IMETHOD LeaveModalState(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->LeaveModalState(); } \
  NS_SCRIPTABLE NS_IMETHOD EnterModalStateWithWindow(nsIDOMWindow * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnterModalStateWithWindow(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD LeaveModalStateWithWindow(nsIDOMWindow *aWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->LeaveModalStateWithWindow(aWindow); } \
  NS_IMETHOD IsInModalState(bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsInModalState(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SuspendTimeouts(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SuspendTimeouts(); } \
  NS_SCRIPTABLE NS_IMETHOD ResumeTimeouts(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ResumeTimeouts(); } \
  NS_SCRIPTABLE NS_IMETHOD GoOnline(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->GoOnline(); } \
  NS_SCRIPTABLE NS_IMETHOD GetLayerManagerType(nsAString & aLayerManagerType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLayerManagerType(aLayerManagerType); } \
  NS_SCRIPTABLE NS_IMETHOD StartFrameTimeRecording(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->StartFrameTimeRecording(); } \
  NS_SCRIPTABLE NS_IMETHOD StopFrameTimeRecording(PRUint32 *frameCount NS_OUTPARAM, float **frameTime NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->StopFrameTimeRecording(frameCount, frameTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetDisplayDPI(float *aDisplayDPI) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDisplayDPI(aDisplayDPI); } \
  NS_SCRIPTABLE NS_IMETHOD GetOuterWindowWithId(PRUint64 aOuterWindowID, nsIDOMWindow * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOuterWindowWithId(aOuterWindowID, _retval); } \
  NS_IMETHOD RenderDocument(const nsRect & aRect, PRUint32 aFlags, nscolor aBackgroundColor, gfxContext *aThebesContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->RenderDocument(aRect, aFlags, aBackgroundColor, aThebesContext); } \
  NS_SCRIPTABLE NS_IMETHOD AdvanceTimeAndRefresh(PRInt64 aMilliseconds) { return !_to ? NS_ERROR_NULL_POINTER : _to->AdvanceTimeAndRefresh(aMilliseconds); } \
  NS_SCRIPTABLE NS_IMETHOD RestoreNormalRefresh(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->RestoreNormalRefresh(); } \
  NS_SCRIPTABLE NS_IMETHOD ComputeAnimationDistance(nsIDOMElement *element, const nsAString & property, const nsAString & value1, const nsAString & value2, double *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ComputeAnimationDistance(element, property, value1, value2, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD WrapDOMFile(nsIFile *aFile, nsIDOMFile * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->WrapDOMFile(aFile, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFocusedInputType(char * *aFocusedInputType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFocusedInputType(aFocusedInputType); } \
  NS_SCRIPTABLE NS_IMETHOD FindElementWithViewId(nsViewID aId, nsIDOMElement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->FindElementWithViewId(aId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD LeafLayersPartitionWindow(bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->LeafLayersPartitionWindow(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMayHaveTouchEventListeners(bool *aMayHaveTouchEventListeners) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMayHaveTouchEventListeners(aMayHaveTouchEventListeners); } \
  NS_SCRIPTABLE NS_IMETHOD CheckAndClearPaintedState(nsIDOMElement *aElement, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckAndClearPaintedState(aElement, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFile(const nsAString & aName, const JS::Value & aBlobParts, const JS::Value & aParameters, JSContext* cx, PRUint8 _argc, nsIDOMFile * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFile(aName, aBlobParts, aParameters, cx, _argc, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBlob(const JS::Value & aBlobParts, const JS::Value & aParameters, JSContext* cx, PRUint8 _argc, nsIDOMBlob * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBlob(aBlobParts, aParameters, cx, _argc, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFileId(const JS::Value & aFile, JSContext* cx, PRInt64 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileId(aFile, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFileReferences(const nsAString & aDatabaseName, PRInt64 aId, PRInt32 *aRefCnt NS_OUTPARAM, PRInt32 *aDBRefCnt NS_OUTPARAM, PRInt32 *aSliceRefCnt NS_OUTPARAM, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileReferences(aDatabaseName, aId, aRefCnt, aDBRefCnt, aSliceRefCnt, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsIncrementalGCEnabled(JSContext* cx, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsIncrementalGCEnabled(cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD StartPCCountProfiling(JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->StartPCCountProfiling(cx); } \
  NS_SCRIPTABLE NS_IMETHOD StopPCCountProfiling(JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->StopPCCountProfiling(cx); } \
  NS_SCRIPTABLE NS_IMETHOD PurgePCCounts(JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->PurgePCCounts(cx); } \
  NS_SCRIPTABLE NS_IMETHOD GetPCCountScriptCount(JSContext* cx, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPCCountScriptCount(cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetPCCountScriptSummary(PRInt32 script, JSContext* cx, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPCCountScriptSummary(script, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetPCCountScriptContents(PRInt32 script, JSContext* cx, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPCCountScriptContents(script, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetPaintingSuppressed(bool *aPaintingSuppressed) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPaintingSuppressed(aPaintingSuppressed); } \
  NS_SCRIPTABLE NS_IMETHOD GetPlugins(JSContext* cx, JS::Value *aPlugins) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPlugins(cx, aPlugins); } \
  NS_SCRIPTABLE NS_IMETHOD SetScrollPositionClampingScrollPortSize(float aWidth, float aHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetScrollPositionClampingScrollPortSize(aWidth, aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD SetIsApp(bool value) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsApp(value); } \
  NS_SCRIPTABLE NS_IMETHOD SetApp(const nsAString & manifestURL) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetApp(manifestURL); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMWindowUtils : public nsIDOMWindowUtils
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMWINDOWUTILS

  nsDOMWindowUtils();

private:
  ~nsDOMWindowUtils();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMWindowUtils, nsIDOMWindowUtils)

nsDOMWindowUtils::nsDOMWindowUtils()
{
  /* member initializers and constructor code */
}

nsDOMWindowUtils::~nsDOMWindowUtils()
{
  /* destructor code */
}

/* attribute unsigned short imageAnimationMode; */
NS_IMETHODIMP nsDOMWindowUtils::GetImageAnimationMode(PRUint16 *aImageAnimationMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindowUtils::SetImageAnimationMode(PRUint16 aImageAnimationMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean docCharsetIsForced; */
NS_IMETHODIMP nsDOMWindowUtils::GetDocCharsetIsForced(bool *aDocCharsetIsForced)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* short getCursorType (); */
NS_IMETHODIMP nsDOMWindowUtils::GetCursorType(PRInt16 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getDocumentMetadata (in AString aName); */
NS_IMETHODIMP nsDOMWindowUtils::GetDocumentMetadata(const nsAString & aName, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long redraw ([optional] in unsigned long aCount); */
NS_IMETHODIMP nsDOMWindowUtils::Redraw(PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCSSViewport (in float aWidthPx, in float aHeightPx); */
NS_IMETHODIMP nsDOMWindowUtils::SetCSSViewport(float aWidthPx, float aHeightPx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setDisplayPortForElement (in float aXPx, in float aYPx, in float aWidthPx, in float aHeightPx, in nsIDOMElement aElement); */
NS_IMETHODIMP nsDOMWindowUtils::SetDisplayPortForElement(float aXPx, float aYPx, float aWidthPx, float aHeightPx, nsIDOMElement *aElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setResolution (in float aXResolution, in float aYResolution); */
NS_IMETHODIMP nsDOMWindowUtils::SetResolution(float aXResolution, float aYResolution)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean isFirstPaint; */
NS_IMETHODIMP nsDOMWindowUtils::GetIsFirstPaint(bool *aIsFirstPaint)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMWindowUtils::SetIsFirstPaint(bool aIsFirstPaint)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendMouseEvent (in AString aType, in float aX, in float aY, in long aButton, in long aClickCount, in long aModifiers, [optional] in boolean aIgnoreRootScrollFrame); */
NS_IMETHODIMP nsDOMWindowUtils::SendMouseEvent(const nsAString & aType, float aX, float aY, PRInt32 aButton, PRInt32 aClickCount, PRInt32 aModifiers, bool aIgnoreRootScrollFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean sendTouchEvent (in AString aType, [array, size_is (count)] in PRUint32 aIdentifiers, [array, size_is (count)] in PRInt32 aXs, [array, size_is (count)] in PRInt32 aYs, [array, size_is (count)] in PRUint32 aRxs, [array, size_is (count)] in PRUint32 aRys, [array, size_is (count)] in float aRotationAngles, [array, size_is (count)] in float aForces, in PRUint32 count, in long aModifiers, [optional] in boolean aIgnoreRootScrollFrame); */
NS_IMETHODIMP nsDOMWindowUtils::SendTouchEvent(const nsAString & aType, PRUint32 *aIdentifiers, PRInt32 *aXs, PRInt32 *aYs, PRUint32 *aRxs, PRUint32 *aRys, float *aRotationAngles, float *aForces, PRUint32 count, PRInt32 aModifiers, bool aIgnoreRootScrollFrame, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendMouseEventToWindow (in AString aType, in float aX, in float aY, in long aButton, in long aClickCount, in long aModifiers, [optional] in boolean aIgnoreRootScrollFrame); */
NS_IMETHODIMP nsDOMWindowUtils::SendMouseEventToWindow(const nsAString & aType, float aX, float aY, PRInt32 aButton, PRInt32 aClickCount, PRInt32 aModifiers, bool aIgnoreRootScrollFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendMouseScrollEvent (in AString aType, in float aX, in float aY, in long aButton, in long aScrollFlags, in long aDelta, in long aModifiers); */
NS_IMETHODIMP nsDOMWindowUtils::SendMouseScrollEvent(const nsAString & aType, float aX, float aY, PRInt32 aButton, PRInt32 aScrollFlags, PRInt32 aDelta, PRInt32 aModifiers)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean sendKeyEvent (in AString aType, in long aKeyCode, in long aCharCode, in long aModifiers, [optional] in unsigned long aAdditionalFlags); */
NS_IMETHODIMP nsDOMWindowUtils::SendKeyEvent(const nsAString & aType, PRInt32 aKeyCode, PRInt32 aCharCode, PRInt32 aModifiers, PRUint32 aAdditionalFlags, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendNativeKeyEvent (in long aNativeKeyboardLayout, in long aNativeKeyCode, in long aModifierFlags, in AString aCharacters, in AString aUnmodifiedCharacters); */
NS_IMETHODIMP nsDOMWindowUtils::SendNativeKeyEvent(PRInt32 aNativeKeyboardLayout, PRInt32 aNativeKeyCode, PRInt32 aModifierFlags, const nsAString & aCharacters, const nsAString & aUnmodifiedCharacters)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendNativeMouseEvent (in long aScreenX, in long aScreenY, in long aNativeMessage, in long aModifierFlags, in nsIDOMElement aElement); */
NS_IMETHODIMP nsDOMWindowUtils::SendNativeMouseEvent(PRInt32 aScreenX, PRInt32 aScreenY, PRInt32 aNativeMessage, PRInt32 aModifierFlags, nsIDOMElement *aElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendNativeMouseScrollEvent (in long aScreenX, in long aScreenY, in unsigned long aNativeMessage, in double aDeltaX, in double aDeltaY, in double aDeltaZ, in unsigned long aModifierFlags, in unsigned long aAdditionalFlags, in nsIDOMElement aElement); */
NS_IMETHODIMP nsDOMWindowUtils::SendNativeMouseScrollEvent(PRInt32 aScreenX, PRInt32 aScreenY, PRUint32 aNativeMessage, double aDeltaX, double aDeltaY, double aDeltaZ, PRUint32 aModifierFlags, PRUint32 aAdditionalFlags, nsIDOMElement *aElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void activateNativeMenuItemAt (in AString indexString); */
NS_IMETHODIMP nsDOMWindowUtils::ActivateNativeMenuItemAt(const nsAString & indexString)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void forceUpdateNativeMenuAt (in AString indexString); */
NS_IMETHODIMP nsDOMWindowUtils::ForceUpdateNativeMenuAt(const nsAString & indexString)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void focus (in nsIDOMElement aElement); */
NS_IMETHODIMP nsDOMWindowUtils::Focus(nsIDOMElement *aElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void garbageCollect ([optional] in nsICycleCollectorListener aListener, [optional] in long aExtraForgetSkippableCalls); */
NS_IMETHODIMP nsDOMWindowUtils::GarbageCollect(nsICycleCollectorListener *aListener, PRInt32 aExtraForgetSkippableCalls)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cycleCollect ([optional] in nsICycleCollectorListener aListener, [optional] in long aExtraForgetSkippableCalls); */
NS_IMETHODIMP nsDOMWindowUtils::CycleCollect(nsICycleCollectorListener *aListener, PRInt32 aExtraForgetSkippableCalls)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendSimpleGestureEvent (in AString aType, in float aX, in float aY, in unsigned long aDirection, in double aDelta, in long aModifiers); */
NS_IMETHODIMP nsDOMWindowUtils::SendSimpleGestureEvent(const nsAString & aType, float aX, float aY, PRUint32 aDirection, double aDelta, PRInt32 aModifiers)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMElement elementFromPoint (in float aX, in float aY, in boolean aIgnoreRootScrollFrame, in boolean aFlushLayout); */
NS_IMETHODIMP nsDOMWindowUtils::ElementFromPoint(float aX, float aY, bool aIgnoreRootScrollFrame, bool aFlushLayout, nsIDOMElement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNodeList nodesFromRect (in float aX, in float aY, in float aTopSize, in float aRightSize, in float aBottomSize, in float aLeftSize, in boolean aIgnoreRootScrollFrame, in boolean aFlushLayout); */
NS_IMETHODIMP nsDOMWindowUtils::NodesFromRect(float aX, float aY, float aTopSize, float aRightSize, float aBottomSize, float aLeftSize, bool aIgnoreRootScrollFrame, bool aFlushLayout, nsIDOMNodeList * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* PRUint32 compareCanvases (in nsIDOMHTMLCanvasElement aCanvas1, in nsIDOMHTMLCanvasElement aCanvas2, out unsigned long aMaxDifference); */
NS_IMETHODIMP nsDOMWindowUtils::CompareCanvases(nsIDOMHTMLCanvasElement *aCanvas1, nsIDOMHTMLCanvasElement *aCanvas2, PRUint32 *aMaxDifference NS_OUTPARAM, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isMozAfterPaintPending; */
NS_IMETHODIMP nsDOMWindowUtils::GetIsMozAfterPaintPending(bool *aIsMozAfterPaintPending)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void suppressEventHandling (in boolean aSuppress); */
NS_IMETHODIMP nsDOMWindowUtils::SuppressEventHandling(bool aSuppress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearMozAfterPaintEvents (); */
NS_IMETHODIMP nsDOMWindowUtils::ClearMozAfterPaintEvents()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void disableNonTestMouseEvents (in boolean aDisable); */
NS_IMETHODIMP nsDOMWindowUtils::DisableNonTestMouseEvents(bool aDisable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getScrollXY (in boolean aFlushLayout, out long aScrollX, out long aScrollY); */
NS_IMETHODIMP nsDOMWindowUtils::GetScrollXY(bool aFlushLayout, PRInt32 *aScrollX NS_OUTPARAM, PRInt32 *aScrollY NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMClientRect getRootBounds (); */
NS_IMETHODIMP nsDOMWindowUtils::GetRootBounds(nsIDOMClientRect * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean IMEIsOpen; */
NS_IMETHODIMP nsDOMWindowUtils::GetIMEIsOpen(bool *aIMEIsOpen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long IMEStatus; */
NS_IMETHODIMP nsDOMWindowUtils::GetIMEStatus(PRUint32 *aIMEStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute float screenPixelsPerCSSPixel; */
NS_IMETHODIMP nsDOMWindowUtils::GetScreenPixelsPerCSSPixel(float *aScreenPixelsPerCSSPixel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean dispatchDOMEventViaPresShell (in nsIDOMNode aTarget, in nsIDOMEvent aEvent, in boolean aTrusted); */
NS_IMETHODIMP nsDOMWindowUtils::DispatchDOMEventViaPresShell(nsIDOMNode *aTarget, nsIDOMEvent *aEvent, bool aTrusted, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] string getClassName (in jsval aObject); */
NS_IMETHODIMP nsDOMWindowUtils::GetClassName(const JS::Value & aObject, JSContext* cx, char * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendContentCommandEvent (in AString aType, [optional] in nsITransferable aTransferable); */
NS_IMETHODIMP nsDOMWindowUtils::SendContentCommandEvent(const nsAString & aType, nsITransferable *aTransferable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendCompositionEvent (in AString aType, in AString aData, in AString aLocale); */
NS_IMETHODIMP nsDOMWindowUtils::SendCompositionEvent(const nsAString & aType, const nsAString & aData, const nsAString & aLocale)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendTextEvent (in AString aCompositionString, in long aFirstClauseLength, in unsigned long aFirstClauseAttr, in long aSecondClauseLength, in unsigned long aSecondClauseAttr, in long aThirdClauseLength, in unsigned long aThirdClauseAttr, in long aCaretStart, in long aCaretLength); */
NS_IMETHODIMP nsDOMWindowUtils::SendTextEvent(const nsAString & aCompositionString, PRInt32 aFirstClauseLength, PRUint32 aFirstClauseAttr, PRInt32 aSecondClauseLength, PRUint32 aSecondClauseAttr, PRInt32 aThirdClauseLength, PRUint32 aThirdClauseAttr, PRInt32 aCaretStart, PRInt32 aCaretLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIQueryContentEventResult sendQueryContentEvent (in unsigned long aType, in unsigned long aOffset, in unsigned long aLength, in long aX, in long aY); */
NS_IMETHODIMP nsDOMWindowUtils::SendQueryContentEvent(PRUint32 aType, PRUint32 aOffset, PRUint32 aLength, PRInt32 aX, PRInt32 aY, nsIQueryContentEventResult * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean sendSelectionSetEvent (in unsigned long aOffset, in unsigned long aLength, in boolean aReverse); */
NS_IMETHODIMP nsDOMWindowUtils::SendSelectionSetEvent(PRUint32 aOffset, PRUint32 aLength, bool aReverse, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getVisitedDependentComputedStyle (in nsIDOMElement aElement, in AString aPseudoElement, in AString aPropertyName); */
NS_IMETHODIMP nsDOMWindowUtils::GetVisitedDependentComputedStyle(nsIDOMElement *aElement, const nsAString & aPseudoElement, const nsAString & aPropertyName, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] jsval getParent (in jsval obj); */
NS_IMETHODIMP nsDOMWindowUtils::GetParent(const JS::Value & obj, JSContext* cx, JS::Value *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long long outerWindowID; */
NS_IMETHODIMP nsDOMWindowUtils::GetOuterWindowID(PRUint64 *aOuterWindowID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long long currentInnerWindowID; */
NS_IMETHODIMP nsDOMWindowUtils::GetCurrentInnerWindowID(PRUint64 *aCurrentInnerWindowID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void enterModalState (); */
NS_IMETHODIMP nsDOMWindowUtils::EnterModalState()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void leaveModalState (); */
NS_IMETHODIMP nsDOMWindowUtils::LeaveModalState()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMWindow enterModalStateWithWindow (); */
NS_IMETHODIMP nsDOMWindowUtils::EnterModalStateWithWindow(nsIDOMWindow * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void leaveModalStateWithWindow (in nsIDOMWindow aWindow); */
NS_IMETHODIMP nsDOMWindowUtils::LeaveModalStateWithWindow(nsIDOMWindow *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] boolean isInModalState (); */
NS_IMETHODIMP nsDOMWindowUtils::IsInModalState(bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void suspendTimeouts (); */
NS_IMETHODIMP nsDOMWindowUtils::SuspendTimeouts()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void resumeTimeouts (); */
NS_IMETHODIMP nsDOMWindowUtils::ResumeTimeouts()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void goOnline (); */
NS_IMETHODIMP nsDOMWindowUtils::GoOnline()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString layerManagerType; */
NS_IMETHODIMP nsDOMWindowUtils::GetLayerManagerType(nsAString & aLayerManagerType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void startFrameTimeRecording (); */
NS_IMETHODIMP nsDOMWindowUtils::StartFrameTimeRecording()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void stopFrameTimeRecording ([optional] out unsigned long frameCount, [array, size_is (frameCount), retval] out float frameTime); */
NS_IMETHODIMP nsDOMWindowUtils::StopFrameTimeRecording(PRUint32 *frameCount NS_OUTPARAM, float **frameTime NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute float displayDPI; */
NS_IMETHODIMP nsDOMWindowUtils::GetDisplayDPI(float *aDisplayDPI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMWindow getOuterWindowWithId (in unsigned long long aOuterWindowID); */
NS_IMETHODIMP nsDOMWindowUtils::GetOuterWindowWithId(PRUint64 aOuterWindowID, nsIDOMWindow * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void RenderDocument (in nsConstRect aRect, in PRUint32 aFlags, in nscolor aBackgroundColor, in gfxContext aThebesContext); */
NS_IMETHODIMP nsDOMWindowUtils::RenderDocument(const nsRect & aRect, PRUint32 aFlags, nscolor aBackgroundColor, gfxContext *aThebesContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void advanceTimeAndRefresh (in long long aMilliseconds); */
NS_IMETHODIMP nsDOMWindowUtils::AdvanceTimeAndRefresh(PRInt64 aMilliseconds)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void restoreNormalRefresh (); */
NS_IMETHODIMP nsDOMWindowUtils::RestoreNormalRefresh()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* double computeAnimationDistance (in nsIDOMElement element, in AString property, in AString value1, in AString value2); */
NS_IMETHODIMP nsDOMWindowUtils::ComputeAnimationDistance(nsIDOMElement *element, const nsAString & property, const nsAString & value1, const nsAString & value2, double *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMFile wrapDOMFile (in nsIFile aFile); */
NS_IMETHODIMP nsDOMWindowUtils::WrapDOMFile(nsIFile *aFile, nsIDOMFile * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute string focusedInputType; */
NS_IMETHODIMP nsDOMWindowUtils::GetFocusedInputType(char * *aFocusedInputType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMElement findElementWithViewId (in nsViewID aId); */
NS_IMETHODIMP nsDOMWindowUtils::FindElementWithViewId(nsViewID aId, nsIDOMElement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean leafLayersPartitionWindow (); */
NS_IMETHODIMP nsDOMWindowUtils::LeafLayersPartitionWindow(bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean mayHaveTouchEventListeners; */
NS_IMETHODIMP nsDOMWindowUtils::GetMayHaveTouchEventListeners(bool *aMayHaveTouchEventListeners)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean checkAndClearPaintedState (in nsIDOMElement aElement); */
NS_IMETHODIMP nsDOMWindowUtils::CheckAndClearPaintedState(nsIDOMElement *aElement, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext,optional_argc] nsIDOMFile getFile (in DOMString aName, [optional] in jsval aBlobParts, [optional] in jsval aParameters); */
NS_IMETHODIMP nsDOMWindowUtils::GetFile(const nsAString & aName, const JS::Value & aBlobParts, const JS::Value & aParameters, JSContext* cx, PRUint8 _argc, nsIDOMFile * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext,optional_argc] nsIDOMBlob getBlob ([optional] in jsval aBlobParts, [optional] in jsval aParameters); */
NS_IMETHODIMP nsDOMWindowUtils::GetBlob(const JS::Value & aBlobParts, const JS::Value & aParameters, JSContext* cx, PRUint8 _argc, nsIDOMBlob * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] long long getFileId (in jsval aFile); */
NS_IMETHODIMP nsDOMWindowUtils::GetFileId(const JS::Value & aFile, JSContext* cx, PRInt64 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean getFileReferences (in AString aDatabaseName, in long long aId, [optional] out long aRefCnt, [optional] out long aDBRefCnt, [optional] out long aSliceRefCnt); */
NS_IMETHODIMP nsDOMWindowUtils::GetFileReferences(const nsAString & aDatabaseName, PRInt64 aId, PRInt32 *aRefCnt NS_OUTPARAM, PRInt32 *aDBRefCnt NS_OUTPARAM, PRInt32 *aSliceRefCnt NS_OUTPARAM, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] boolean isIncrementalGCEnabled (); */
NS_IMETHODIMP nsDOMWindowUtils::IsIncrementalGCEnabled(JSContext* cx, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void startPCCountProfiling (); */
NS_IMETHODIMP nsDOMWindowUtils::StartPCCountProfiling(JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void stopPCCountProfiling (); */
NS_IMETHODIMP nsDOMWindowUtils::StopPCCountProfiling(JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void purgePCCounts (); */
NS_IMETHODIMP nsDOMWindowUtils::PurgePCCounts(JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] long getPCCountScriptCount (); */
NS_IMETHODIMP nsDOMWindowUtils::GetPCCountScriptCount(JSContext* cx, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] AString getPCCountScriptSummary (in long script); */
NS_IMETHODIMP nsDOMWindowUtils::GetPCCountScriptSummary(PRInt32 script, JSContext* cx, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] AString getPCCountScriptContents (in long script); */
NS_IMETHODIMP nsDOMWindowUtils::GetPCCountScriptContents(PRInt32 script, JSContext* cx, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean paintingSuppressed; */
NS_IMETHODIMP nsDOMWindowUtils::GetPaintingSuppressed(bool *aPaintingSuppressed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] readonly attribute jsval plugins; */
NS_IMETHODIMP nsDOMWindowUtils::GetPlugins(JSContext* cx, JS::Value *aPlugins)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setScrollPositionClampingScrollPortSize (in float aWidth, in float aHeight); */
NS_IMETHODIMP nsDOMWindowUtils::SetScrollPositionClampingScrollPortSize(float aWidth, float aHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setIsApp (in boolean value); */
NS_IMETHODIMP nsDOMWindowUtils::SetIsApp(bool value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setApp (in DOMString manifestURL); */
NS_IMETHODIMP nsDOMWindowUtils::SetApp(const nsAString & manifestURL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMWindowUtils_h__ */
