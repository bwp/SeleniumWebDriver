/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/html/nsIDOMHTMLMediaElement.idl
 */

#ifndef __gen_nsIDOMHTMLMediaElement_h__
#define __gen_nsIDOMHTMLMediaElement_h__


#ifndef __gen_nsIDOMHTMLElement_h__
#include "nsIDOMHTMLElement.h"
#endif

#ifndef __gen_nsIDOMMediaError_h__
#include "nsIDOMMediaError.h"
#endif

#ifndef __gen_nsIDOMTimeRanges_h__
#include "nsIDOMTimeRanges.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMMediaStream; /* forward declaration */

#ifdef GetCurrentTime
#undef GetCurrentTime
#endif

/* starting interface:    nsIDOMHTMLMediaElement */
#define NS_IDOMHTMLMEDIAELEMENT_IID_STR "6b938133-a8c2-424a-9401-a631f74aeff5"

#define NS_IDOMHTMLMEDIAELEMENT_IID \
  {0x6b938133, 0xa8c2, 0x424a, \
    { 0x94, 0x01, 0xa6, 0x31, 0xf7, 0x4a, 0xef, 0xf5 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMHTMLMediaElement : public nsIDOMHTMLElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMHTMLMEDIAELEMENT_IID)

  /* readonly attribute nsIDOMMediaError error; */
  NS_SCRIPTABLE NS_IMETHOD GetError(nsIDOMMediaError * *aError) = 0;

  /* [implicit_jscontext] attribute jsval src; */
  NS_SCRIPTABLE NS_IMETHOD GetSrc(JSContext* cx, JS::Value *aSrc) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSrc(JSContext* cx, const JS::Value & aSrc) = 0;

  /* readonly attribute DOMString currentSrc; */
  NS_SCRIPTABLE NS_IMETHOD GetCurrentSrc(nsAString & aCurrentSrc) = 0;

  /* attribute DOMString crossorigin; */
  NS_SCRIPTABLE NS_IMETHOD GetCrossorigin(nsAString & aCrossorigin) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCrossorigin(const nsAString & aCrossorigin) = 0;

  enum {
    NETWORK_EMPTY = 0U,
    NETWORK_IDLE = 1U,
    NETWORK_LOADING = 2U,
    NETWORK_NO_SOURCE = 3U
  };

  /* readonly attribute unsigned short networkState; */
  NS_SCRIPTABLE NS_IMETHOD GetNetworkState(PRUint16 *aNetworkState) = 0;

  /* attribute DOMString preload; */
  NS_SCRIPTABLE NS_IMETHOD GetPreload(nsAString & aPreload) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPreload(const nsAString & aPreload) = 0;

  /* readonly attribute nsIDOMTimeRanges buffered; */
  NS_SCRIPTABLE NS_IMETHOD GetBuffered(nsIDOMTimeRanges * *aBuffered) = 0;

  /* void load (); */
  NS_SCRIPTABLE NS_IMETHOD Load(void) = 0;

  /* DOMString canPlayType (in DOMString type); */
  NS_SCRIPTABLE NS_IMETHOD CanPlayType(const nsAString & type, nsAString & _retval NS_OUTPARAM) = 0;

  enum {
    HAVE_NOTHING = 0U,
    HAVE_METADATA = 1U,
    HAVE_CURRENT_DATA = 2U,
    HAVE_FUTURE_DATA = 3U,
    HAVE_ENOUGH_DATA = 4U
  };

  /* readonly attribute unsigned short readyState; */
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRUint16 *aReadyState) = 0;

  /* readonly attribute boolean seeking; */
  NS_SCRIPTABLE NS_IMETHOD GetSeeking(bool *aSeeking) = 0;

  /* attribute double currentTime; */
  NS_SCRIPTABLE NS_IMETHOD GetCurrentTime(double *aCurrentTime) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCurrentTime(double aCurrentTime) = 0;

  /* readonly attribute double initialTime; */
  NS_SCRIPTABLE NS_IMETHOD GetInitialTime(double *aInitialTime) = 0;

  /* readonly attribute double duration; */
  NS_SCRIPTABLE NS_IMETHOD GetDuration(double *aDuration) = 0;

  /* readonly attribute boolean paused; */
  NS_SCRIPTABLE NS_IMETHOD GetPaused(bool *aPaused) = 0;

  /* readonly attribute nsIDOMTimeRanges played; */
  NS_SCRIPTABLE NS_IMETHOD GetPlayed(nsIDOMTimeRanges * *aPlayed) = 0;

  /* readonly attribute nsIDOMTimeRanges seekable; */
  NS_SCRIPTABLE NS_IMETHOD GetSeekable(nsIDOMTimeRanges * *aSeekable) = 0;

  /* readonly attribute boolean ended; */
  NS_SCRIPTABLE NS_IMETHOD GetEnded(bool *aEnded) = 0;

  /* readonly attribute boolean mozAutoplayEnabled; */
  NS_SCRIPTABLE NS_IMETHOD GetMozAutoplayEnabled(bool *aMozAutoplayEnabled) = 0;

  /* attribute boolean autoplay; */
  NS_SCRIPTABLE NS_IMETHOD GetAutoplay(bool *aAutoplay) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAutoplay(bool aAutoplay) = 0;

  /* attribute boolean loop; */
  NS_SCRIPTABLE NS_IMETHOD GetLoop(bool *aLoop) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetLoop(bool aLoop) = 0;

  /* void play (); */
  NS_SCRIPTABLE NS_IMETHOD Play(void) = 0;

  /* void pause (); */
  NS_SCRIPTABLE NS_IMETHOD Pause(void) = 0;

  /* attribute boolean controls; */
  NS_SCRIPTABLE NS_IMETHOD GetControls(bool *aControls) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetControls(bool aControls) = 0;

  /* attribute double volume; */
  NS_SCRIPTABLE NS_IMETHOD GetVolume(double *aVolume) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVolume(double aVolume) = 0;

  /* attribute boolean muted; */
  NS_SCRIPTABLE NS_IMETHOD GetMuted(bool *aMuted) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMuted(bool aMuted) = 0;

  /* attribute boolean defaultMuted; */
  NS_SCRIPTABLE NS_IMETHOD GetDefaultMuted(bool *aDefaultMuted) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDefaultMuted(bool aDefaultMuted) = 0;

  /* nsIDOMMediaStream mozCaptureStream (); */
  NS_SCRIPTABLE NS_IMETHOD MozCaptureStream(nsIDOMMediaStream * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMMediaStream mozCaptureStreamUntilEnded (); */
  NS_SCRIPTABLE NS_IMETHOD MozCaptureStreamUntilEnded(nsIDOMMediaStream * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute boolean mozAudioCaptured; */
  NS_SCRIPTABLE NS_IMETHOD GetMozAudioCaptured(bool *aMozAudioCaptured) = 0;

  /* readonly attribute unsigned long mozChannels; */
  NS_SCRIPTABLE NS_IMETHOD GetMozChannels(PRUint32 *aMozChannels) = 0;

  /* readonly attribute unsigned long mozSampleRate; */
  NS_SCRIPTABLE NS_IMETHOD GetMozSampleRate(PRUint32 *aMozSampleRate) = 0;

  /* attribute unsigned long mozFrameBufferLength; */
  NS_SCRIPTABLE NS_IMETHOD GetMozFrameBufferLength(PRUint32 *aMozFrameBufferLength) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMozFrameBufferLength(PRUint32 aMozFrameBufferLength) = 0;

  /* void mozLoadFrom (in nsIDOMHTMLMediaElement other); */
  NS_SCRIPTABLE NS_IMETHOD MozLoadFrom(nsIDOMHTMLMediaElement *other) = 0;

  /* readonly attribute double mozFragmentEnd; */
  NS_SCRIPTABLE NS_IMETHOD GetMozFragmentEnd(double *aMozFragmentEnd) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMHTMLMediaElement, NS_IDOMHTMLMEDIAELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLMEDIAELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetError(nsIDOMMediaError * *aError); \
  NS_SCRIPTABLE NS_IMETHOD GetSrc(JSContext* cx, JS::Value *aSrc); \
  NS_SCRIPTABLE NS_IMETHOD SetSrc(JSContext* cx, const JS::Value & aSrc); \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentSrc(nsAString & aCurrentSrc); \
  NS_SCRIPTABLE NS_IMETHOD GetCrossorigin(nsAString & aCrossorigin); \
  NS_SCRIPTABLE NS_IMETHOD SetCrossorigin(const nsAString & aCrossorigin); \
  NS_SCRIPTABLE NS_IMETHOD GetNetworkState(PRUint16 *aNetworkState); \
  NS_SCRIPTABLE NS_IMETHOD GetPreload(nsAString & aPreload); \
  NS_SCRIPTABLE NS_IMETHOD SetPreload(const nsAString & aPreload); \
  NS_SCRIPTABLE NS_IMETHOD GetBuffered(nsIDOMTimeRanges * *aBuffered); \
  NS_SCRIPTABLE NS_IMETHOD Load(void); \
  NS_SCRIPTABLE NS_IMETHOD CanPlayType(const nsAString & type, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRUint16 *aReadyState); \
  NS_SCRIPTABLE NS_IMETHOD GetSeeking(bool *aSeeking); \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentTime(double *aCurrentTime); \
  NS_SCRIPTABLE NS_IMETHOD SetCurrentTime(double aCurrentTime); \
  NS_SCRIPTABLE NS_IMETHOD GetInitialTime(double *aInitialTime); \
  NS_SCRIPTABLE NS_IMETHOD GetDuration(double *aDuration); \
  NS_SCRIPTABLE NS_IMETHOD GetPaused(bool *aPaused); \
  NS_SCRIPTABLE NS_IMETHOD GetPlayed(nsIDOMTimeRanges * *aPlayed); \
  NS_SCRIPTABLE NS_IMETHOD GetSeekable(nsIDOMTimeRanges * *aSeekable); \
  NS_SCRIPTABLE NS_IMETHOD GetEnded(bool *aEnded); \
  NS_SCRIPTABLE NS_IMETHOD GetMozAutoplayEnabled(bool *aMozAutoplayEnabled); \
  NS_SCRIPTABLE NS_IMETHOD GetAutoplay(bool *aAutoplay); \
  NS_SCRIPTABLE NS_IMETHOD SetAutoplay(bool aAutoplay); \
  NS_SCRIPTABLE NS_IMETHOD GetLoop(bool *aLoop); \
  NS_SCRIPTABLE NS_IMETHOD SetLoop(bool aLoop); \
  NS_SCRIPTABLE NS_IMETHOD Play(void); \
  NS_SCRIPTABLE NS_IMETHOD Pause(void); \
  NS_SCRIPTABLE NS_IMETHOD GetControls(bool *aControls); \
  NS_SCRIPTABLE NS_IMETHOD SetControls(bool aControls); \
  NS_SCRIPTABLE NS_IMETHOD GetVolume(double *aVolume); \
  NS_SCRIPTABLE NS_IMETHOD SetVolume(double aVolume); \
  NS_SCRIPTABLE NS_IMETHOD GetMuted(bool *aMuted); \
  NS_SCRIPTABLE NS_IMETHOD SetMuted(bool aMuted); \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultMuted(bool *aDefaultMuted); \
  NS_SCRIPTABLE NS_IMETHOD SetDefaultMuted(bool aDefaultMuted); \
  NS_SCRIPTABLE NS_IMETHOD MozCaptureStream(nsIDOMMediaStream * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MozCaptureStreamUntilEnded(nsIDOMMediaStream * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetMozAudioCaptured(bool *aMozAudioCaptured); \
  NS_SCRIPTABLE NS_IMETHOD GetMozChannels(PRUint32 *aMozChannels); \
  NS_SCRIPTABLE NS_IMETHOD GetMozSampleRate(PRUint32 *aMozSampleRate); \
  NS_SCRIPTABLE NS_IMETHOD GetMozFrameBufferLength(PRUint32 *aMozFrameBufferLength); \
  NS_SCRIPTABLE NS_IMETHOD SetMozFrameBufferLength(PRUint32 aMozFrameBufferLength); \
  NS_SCRIPTABLE NS_IMETHOD MozLoadFrom(nsIDOMHTMLMediaElement *other); \
  NS_SCRIPTABLE NS_IMETHOD GetMozFragmentEnd(double *aMozFragmentEnd); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLMEDIAELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetError(nsIDOMMediaError * *aError) { return _to GetError(aError); } \
  NS_SCRIPTABLE NS_IMETHOD GetSrc(JSContext* cx, JS::Value *aSrc) { return _to GetSrc(cx, aSrc); } \
  NS_SCRIPTABLE NS_IMETHOD SetSrc(JSContext* cx, const JS::Value & aSrc) { return _to SetSrc(cx, aSrc); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentSrc(nsAString & aCurrentSrc) { return _to GetCurrentSrc(aCurrentSrc); } \
  NS_SCRIPTABLE NS_IMETHOD GetCrossorigin(nsAString & aCrossorigin) { return _to GetCrossorigin(aCrossorigin); } \
  NS_SCRIPTABLE NS_IMETHOD SetCrossorigin(const nsAString & aCrossorigin) { return _to SetCrossorigin(aCrossorigin); } \
  NS_SCRIPTABLE NS_IMETHOD GetNetworkState(PRUint16 *aNetworkState) { return _to GetNetworkState(aNetworkState); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreload(nsAString & aPreload) { return _to GetPreload(aPreload); } \
  NS_SCRIPTABLE NS_IMETHOD SetPreload(const nsAString & aPreload) { return _to SetPreload(aPreload); } \
  NS_SCRIPTABLE NS_IMETHOD GetBuffered(nsIDOMTimeRanges * *aBuffered) { return _to GetBuffered(aBuffered); } \
  NS_SCRIPTABLE NS_IMETHOD Load(void) { return _to Load(); } \
  NS_SCRIPTABLE NS_IMETHOD CanPlayType(const nsAString & type, nsAString & _retval NS_OUTPARAM) { return _to CanPlayType(type, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRUint16 *aReadyState) { return _to GetReadyState(aReadyState); } \
  NS_SCRIPTABLE NS_IMETHOD GetSeeking(bool *aSeeking) { return _to GetSeeking(aSeeking); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentTime(double *aCurrentTime) { return _to GetCurrentTime(aCurrentTime); } \
  NS_SCRIPTABLE NS_IMETHOD SetCurrentTime(double aCurrentTime) { return _to SetCurrentTime(aCurrentTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetInitialTime(double *aInitialTime) { return _to GetInitialTime(aInitialTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetDuration(double *aDuration) { return _to GetDuration(aDuration); } \
  NS_SCRIPTABLE NS_IMETHOD GetPaused(bool *aPaused) { return _to GetPaused(aPaused); } \
  NS_SCRIPTABLE NS_IMETHOD GetPlayed(nsIDOMTimeRanges * *aPlayed) { return _to GetPlayed(aPlayed); } \
  NS_SCRIPTABLE NS_IMETHOD GetSeekable(nsIDOMTimeRanges * *aSeekable) { return _to GetSeekable(aSeekable); } \
  NS_SCRIPTABLE NS_IMETHOD GetEnded(bool *aEnded) { return _to GetEnded(aEnded); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozAutoplayEnabled(bool *aMozAutoplayEnabled) { return _to GetMozAutoplayEnabled(aMozAutoplayEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD GetAutoplay(bool *aAutoplay) { return _to GetAutoplay(aAutoplay); } \
  NS_SCRIPTABLE NS_IMETHOD SetAutoplay(bool aAutoplay) { return _to SetAutoplay(aAutoplay); } \
  NS_SCRIPTABLE NS_IMETHOD GetLoop(bool *aLoop) { return _to GetLoop(aLoop); } \
  NS_SCRIPTABLE NS_IMETHOD SetLoop(bool aLoop) { return _to SetLoop(aLoop); } \
  NS_SCRIPTABLE NS_IMETHOD Play(void) { return _to Play(); } \
  NS_SCRIPTABLE NS_IMETHOD Pause(void) { return _to Pause(); } \
  NS_SCRIPTABLE NS_IMETHOD GetControls(bool *aControls) { return _to GetControls(aControls); } \
  NS_SCRIPTABLE NS_IMETHOD SetControls(bool aControls) { return _to SetControls(aControls); } \
  NS_SCRIPTABLE NS_IMETHOD GetVolume(double *aVolume) { return _to GetVolume(aVolume); } \
  NS_SCRIPTABLE NS_IMETHOD SetVolume(double aVolume) { return _to SetVolume(aVolume); } \
  NS_SCRIPTABLE NS_IMETHOD GetMuted(bool *aMuted) { return _to GetMuted(aMuted); } \
  NS_SCRIPTABLE NS_IMETHOD SetMuted(bool aMuted) { return _to SetMuted(aMuted); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultMuted(bool *aDefaultMuted) { return _to GetDefaultMuted(aDefaultMuted); } \
  NS_SCRIPTABLE NS_IMETHOD SetDefaultMuted(bool aDefaultMuted) { return _to SetDefaultMuted(aDefaultMuted); } \
  NS_SCRIPTABLE NS_IMETHOD MozCaptureStream(nsIDOMMediaStream * *_retval NS_OUTPARAM) { return _to MozCaptureStream(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozCaptureStreamUntilEnded(nsIDOMMediaStream * *_retval NS_OUTPARAM) { return _to MozCaptureStreamUntilEnded(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozAudioCaptured(bool *aMozAudioCaptured) { return _to GetMozAudioCaptured(aMozAudioCaptured); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozChannels(PRUint32 *aMozChannels) { return _to GetMozChannels(aMozChannels); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozSampleRate(PRUint32 *aMozSampleRate) { return _to GetMozSampleRate(aMozSampleRate); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozFrameBufferLength(PRUint32 *aMozFrameBufferLength) { return _to GetMozFrameBufferLength(aMozFrameBufferLength); } \
  NS_SCRIPTABLE NS_IMETHOD SetMozFrameBufferLength(PRUint32 aMozFrameBufferLength) { return _to SetMozFrameBufferLength(aMozFrameBufferLength); } \
  NS_SCRIPTABLE NS_IMETHOD MozLoadFrom(nsIDOMHTMLMediaElement *other) { return _to MozLoadFrom(other); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozFragmentEnd(double *aMozFragmentEnd) { return _to GetMozFragmentEnd(aMozFragmentEnd); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLMEDIAELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetError(nsIDOMMediaError * *aError) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetError(aError); } \
  NS_SCRIPTABLE NS_IMETHOD GetSrc(JSContext* cx, JS::Value *aSrc) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSrc(cx, aSrc); } \
  NS_SCRIPTABLE NS_IMETHOD SetSrc(JSContext* cx, const JS::Value & aSrc) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSrc(cx, aSrc); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentSrc(nsAString & aCurrentSrc) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentSrc(aCurrentSrc); } \
  NS_SCRIPTABLE NS_IMETHOD GetCrossorigin(nsAString & aCrossorigin) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCrossorigin(aCrossorigin); } \
  NS_SCRIPTABLE NS_IMETHOD SetCrossorigin(const nsAString & aCrossorigin) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCrossorigin(aCrossorigin); } \
  NS_SCRIPTABLE NS_IMETHOD GetNetworkState(PRUint16 *aNetworkState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNetworkState(aNetworkState); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreload(nsAString & aPreload) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPreload(aPreload); } \
  NS_SCRIPTABLE NS_IMETHOD SetPreload(const nsAString & aPreload) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPreload(aPreload); } \
  NS_SCRIPTABLE NS_IMETHOD GetBuffered(nsIDOMTimeRanges * *aBuffered) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBuffered(aBuffered); } \
  NS_SCRIPTABLE NS_IMETHOD Load(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Load(); } \
  NS_SCRIPTABLE NS_IMETHOD CanPlayType(const nsAString & type, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CanPlayType(type, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRUint16 *aReadyState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReadyState(aReadyState); } \
  NS_SCRIPTABLE NS_IMETHOD GetSeeking(bool *aSeeking) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSeeking(aSeeking); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentTime(double *aCurrentTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentTime(aCurrentTime); } \
  NS_SCRIPTABLE NS_IMETHOD SetCurrentTime(double aCurrentTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCurrentTime(aCurrentTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetInitialTime(double *aInitialTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInitialTime(aInitialTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetDuration(double *aDuration) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDuration(aDuration); } \
  NS_SCRIPTABLE NS_IMETHOD GetPaused(bool *aPaused) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPaused(aPaused); } \
  NS_SCRIPTABLE NS_IMETHOD GetPlayed(nsIDOMTimeRanges * *aPlayed) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPlayed(aPlayed); } \
  NS_SCRIPTABLE NS_IMETHOD GetSeekable(nsIDOMTimeRanges * *aSeekable) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSeekable(aSeekable); } \
  NS_SCRIPTABLE NS_IMETHOD GetEnded(bool *aEnded) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEnded(aEnded); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozAutoplayEnabled(bool *aMozAutoplayEnabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozAutoplayEnabled(aMozAutoplayEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD GetAutoplay(bool *aAutoplay) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAutoplay(aAutoplay); } \
  NS_SCRIPTABLE NS_IMETHOD SetAutoplay(bool aAutoplay) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAutoplay(aAutoplay); } \
  NS_SCRIPTABLE NS_IMETHOD GetLoop(bool *aLoop) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLoop(aLoop); } \
  NS_SCRIPTABLE NS_IMETHOD SetLoop(bool aLoop) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLoop(aLoop); } \
  NS_SCRIPTABLE NS_IMETHOD Play(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Play(); } \
  NS_SCRIPTABLE NS_IMETHOD Pause(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Pause(); } \
  NS_SCRIPTABLE NS_IMETHOD GetControls(bool *aControls) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetControls(aControls); } \
  NS_SCRIPTABLE NS_IMETHOD SetControls(bool aControls) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetControls(aControls); } \
  NS_SCRIPTABLE NS_IMETHOD GetVolume(double *aVolume) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVolume(aVolume); } \
  NS_SCRIPTABLE NS_IMETHOD SetVolume(double aVolume) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVolume(aVolume); } \
  NS_SCRIPTABLE NS_IMETHOD GetMuted(bool *aMuted) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMuted(aMuted); } \
  NS_SCRIPTABLE NS_IMETHOD SetMuted(bool aMuted) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMuted(aMuted); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultMuted(bool *aDefaultMuted) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultMuted(aDefaultMuted); } \
  NS_SCRIPTABLE NS_IMETHOD SetDefaultMuted(bool aDefaultMuted) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDefaultMuted(aDefaultMuted); } \
  NS_SCRIPTABLE NS_IMETHOD MozCaptureStream(nsIDOMMediaStream * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozCaptureStream(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozCaptureStreamUntilEnded(nsIDOMMediaStream * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozCaptureStreamUntilEnded(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozAudioCaptured(bool *aMozAudioCaptured) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozAudioCaptured(aMozAudioCaptured); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozChannels(PRUint32 *aMozChannels) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozChannels(aMozChannels); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozSampleRate(PRUint32 *aMozSampleRate) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozSampleRate(aMozSampleRate); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozFrameBufferLength(PRUint32 *aMozFrameBufferLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozFrameBufferLength(aMozFrameBufferLength); } \
  NS_SCRIPTABLE NS_IMETHOD SetMozFrameBufferLength(PRUint32 aMozFrameBufferLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMozFrameBufferLength(aMozFrameBufferLength); } \
  NS_SCRIPTABLE NS_IMETHOD MozLoadFrom(nsIDOMHTMLMediaElement *other) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozLoadFrom(other); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozFragmentEnd(double *aMozFragmentEnd) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozFragmentEnd(aMozFragmentEnd); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLMediaElement : public nsIDOMHTMLMediaElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLMEDIAELEMENT

  nsDOMHTMLMediaElement();

private:
  ~nsDOMHTMLMediaElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMHTMLMediaElement, nsIDOMHTMLMediaElement)

nsDOMHTMLMediaElement::nsDOMHTMLMediaElement()
{
  /* member initializers and constructor code */
}

nsDOMHTMLMediaElement::~nsDOMHTMLMediaElement()
{
  /* destructor code */
}

/* readonly attribute nsIDOMMediaError error; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetError(nsIDOMMediaError * *aError)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute jsval src; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetSrc(JSContext* cx, JS::Value *aSrc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLMediaElement::SetSrc(JSContext* cx, const JS::Value & aSrc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString currentSrc; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetCurrentSrc(nsAString & aCurrentSrc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString crossorigin; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetCrossorigin(nsAString & aCrossorigin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLMediaElement::SetCrossorigin(const nsAString & aCrossorigin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned short networkState; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetNetworkState(PRUint16 *aNetworkState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString preload; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetPreload(nsAString & aPreload)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLMediaElement::SetPreload(const nsAString & aPreload)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMTimeRanges buffered; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetBuffered(nsIDOMTimeRanges * *aBuffered)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void load (); */
NS_IMETHODIMP nsDOMHTMLMediaElement::Load()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString canPlayType (in DOMString type); */
NS_IMETHODIMP nsDOMHTMLMediaElement::CanPlayType(const nsAString & type, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned short readyState; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetReadyState(PRUint16 *aReadyState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean seeking; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetSeeking(bool *aSeeking)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute double currentTime; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetCurrentTime(double *aCurrentTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLMediaElement::SetCurrentTime(double aCurrentTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute double initialTime; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetInitialTime(double *aInitialTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute double duration; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetDuration(double *aDuration)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean paused; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetPaused(bool *aPaused)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMTimeRanges played; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetPlayed(nsIDOMTimeRanges * *aPlayed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMTimeRanges seekable; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetSeekable(nsIDOMTimeRanges * *aSeekable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean ended; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetEnded(bool *aEnded)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean mozAutoplayEnabled; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetMozAutoplayEnabled(bool *aMozAutoplayEnabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean autoplay; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetAutoplay(bool *aAutoplay)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLMediaElement::SetAutoplay(bool aAutoplay)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean loop; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetLoop(bool *aLoop)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLMediaElement::SetLoop(bool aLoop)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void play (); */
NS_IMETHODIMP nsDOMHTMLMediaElement::Play()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void pause (); */
NS_IMETHODIMP nsDOMHTMLMediaElement::Pause()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean controls; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetControls(bool *aControls)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLMediaElement::SetControls(bool aControls)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute double volume; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetVolume(double *aVolume)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLMediaElement::SetVolume(double aVolume)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean muted; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetMuted(bool *aMuted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLMediaElement::SetMuted(bool aMuted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean defaultMuted; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetDefaultMuted(bool *aDefaultMuted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLMediaElement::SetDefaultMuted(bool aDefaultMuted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMMediaStream mozCaptureStream (); */
NS_IMETHODIMP nsDOMHTMLMediaElement::MozCaptureStream(nsIDOMMediaStream * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMMediaStream mozCaptureStreamUntilEnded (); */
NS_IMETHODIMP nsDOMHTMLMediaElement::MozCaptureStreamUntilEnded(nsIDOMMediaStream * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean mozAudioCaptured; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetMozAudioCaptured(bool *aMozAudioCaptured)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long mozChannels; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetMozChannels(PRUint32 *aMozChannels)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long mozSampleRate; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetMozSampleRate(PRUint32 *aMozSampleRate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long mozFrameBufferLength; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetMozFrameBufferLength(PRUint32 *aMozFrameBufferLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLMediaElement::SetMozFrameBufferLength(PRUint32 aMozFrameBufferLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void mozLoadFrom (in nsIDOMHTMLMediaElement other); */
NS_IMETHODIMP nsDOMHTMLMediaElement::MozLoadFrom(nsIDOMHTMLMediaElement *other)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute double mozFragmentEnd; */
NS_IMETHODIMP nsDOMHTMLMediaElement::GetMozFragmentEnd(double *aMozFragmentEnd)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMHTMLMediaElement_h__ */
