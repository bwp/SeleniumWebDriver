/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/docshell/base/nsIDocShell.idl
 */

#ifndef __gen_nsIDocShell_h__
#define __gen_nsIDocShell_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIAtom_h__
#include "nsIAtom.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsPresContext;
class nsIPresShell;
struct JSContext;
class nsIURI; /* forward declaration */

class nsIChannel; /* forward declaration */

class nsIContentViewer; /* forward declaration */

class nsIURIContentListener; /* forward declaration */

class nsIDOMEventTarget; /* forward declaration */

class nsIDocShellLoadInfo; /* forward declaration */

class nsIWebNavigation; /* forward declaration */

class nsISimpleEnumerator; /* forward declaration */

class nsIInputStream; /* forward declaration */

class nsIRequest; /* forward declaration */

class nsISHEntry; /* forward declaration */

class nsILayoutHistoryState; /* forward declaration */

class nsISecureBrowserUI; /* forward declaration */

class nsIDOMStorage; /* forward declaration */

class nsIPrincipal; /* forward declaration */

class nsIWebBrowserPrint; /* forward declaration */

class nsIVariant; /* forward declaration */

class nsIPrivacyTransitionObserver; /* forward declaration */


/* starting interface:    nsIDocShell */
#define NS_IDOCSHELL_IID_STR "89ea9f32-18ec-413b-9e2c-ce9a4c851b1c"

#define NS_IDOCSHELL_IID \
  {0x89ea9f32, 0x18ec, 0x413b, \
    { 0x9e, 0x2c, 0xce, 0x9a, 0x4c, 0x85, 0x1b, 0x1c }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDocShell : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOCSHELL_IID)

  /* [noscript] void loadURI (in nsIURI uri, in nsIDocShellLoadInfo loadInfo, in unsigned long aLoadFlags, in boolean firstParty); */
  NS_IMETHOD LoadURI(nsIURI *uri, nsIDocShellLoadInfo *loadInfo, PRUint32 aLoadFlags, bool firstParty) = 0;

  /* [noscript] void loadStream (in nsIInputStream aStream, in nsIURI aURI, in ACString aContentType, in ACString aContentCharset, in nsIDocShellLoadInfo aLoadInfo); */
  NS_IMETHOD LoadStream(nsIInputStream *aStream, nsIURI *aURI, const nsACString & aContentType, const nsACString & aContentCharset, nsIDocShellLoadInfo *aLoadInfo) = 0;

  enum {
    INTERNAL_LOAD_FLAGS_NONE = 0,
    INTERNAL_LOAD_FLAGS_INHERIT_OWNER = 1,
    INTERNAL_LOAD_FLAGS_DONT_SEND_REFERRER = 2,
    INTERNAL_LOAD_FLAGS_ALLOW_THIRD_PARTY_FIXUP = 4,
    INTERNAL_LOAD_FLAGS_FIRST_LOAD = 8,
    INTERNAL_LOAD_FLAGS_BYPASS_CLASSIFIER = 16,
    INTERNAL_LOAD_FLAGS_FORCE_ALLOW_COOKIES = 32
  };

  /* [noscript] void internalLoad (in nsIURI aURI, in nsIURI aReferrer, in nsISupports aOwner, in PRUint32 aFlags, in wstring aWindowTarget, in string aTypeHint, in nsIInputStream aPostDataStream, in nsIInputStream aHeadersStream, in unsigned long aLoadFlags, in nsISHEntry aSHEntry, in boolean firstParty, out nsIDocShell aDocShell, out nsIRequest aRequest); */
  NS_IMETHOD InternalLoad(nsIURI *aURI, nsIURI *aReferrer, nsISupports *aOwner, PRUint32 aFlags, const PRUnichar * aWindowTarget, const char * aTypeHint, nsIInputStream *aPostDataStream, nsIInputStream *aHeadersStream, PRUint32 aLoadFlags, nsISHEntry *aSHEntry, bool firstParty, nsIDocShell * *aDocShell NS_OUTPARAM, nsIRequest * *aRequest NS_OUTPARAM) = 0;

  /* [implicit_jscontext] void addState (in nsIVariant aData, in DOMString aTitle, in DOMString aURL, in boolean aReplace); */
  NS_SCRIPTABLE NS_IMETHOD AddState(nsIVariant *aData, const nsAString & aTitle, const nsAString & aURL, bool aReplace, JSContext* cx) = 0;

  /* void createLoadInfo (out nsIDocShellLoadInfo loadInfo); */
  NS_SCRIPTABLE NS_IMETHOD CreateLoadInfo(nsIDocShellLoadInfo * *loadInfo NS_OUTPARAM) = 0;

  /* void prepareForNewContentModel (); */
  NS_SCRIPTABLE NS_IMETHOD PrepareForNewContentModel(void) = 0;

  /* void setCurrentURI (in nsIURI aURI); */
  NS_SCRIPTABLE NS_IMETHOD SetCurrentURI(nsIURI *aURI) = 0;

  /* [noscript] void firePageHideNotification (in boolean isUnload); */
  NS_IMETHOD FirePageHideNotification(bool isUnload) = 0;

  /* [noscript] readonly attribute nsPresContext presContext; */
  NS_IMETHOD GetPresContext(nsPresContext **aPresContext) = 0;

  /* [noscript] readonly attribute nsIPresShell presShell; */
  NS_IMETHOD GetPresShell(nsIPresShell **aPresShell) = 0;

  /* [noscript] readonly attribute nsIPresShell eldestPresShell; */
  NS_IMETHOD GetEldestPresShell(nsIPresShell **aEldestPresShell) = 0;

  /* readonly attribute nsIContentViewer contentViewer; */
  NS_SCRIPTABLE NS_IMETHOD GetContentViewer(nsIContentViewer * *aContentViewer) = 0;

  /* attribute nsIDOMEventTarget chromeEventHandler; */
  NS_SCRIPTABLE NS_IMETHOD GetChromeEventHandler(nsIDOMEventTarget * *aChromeEventHandler) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetChromeEventHandler(nsIDOMEventTarget *aChromeEventHandler) = 0;

  /* attribute boolean allowPlugins; */
  NS_SCRIPTABLE NS_IMETHOD GetAllowPlugins(bool *aAllowPlugins) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAllowPlugins(bool aAllowPlugins) = 0;

  /* attribute boolean allowJavascript; */
  NS_SCRIPTABLE NS_IMETHOD GetAllowJavascript(bool *aAllowJavascript) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAllowJavascript(bool aAllowJavascript) = 0;

  /* attribute boolean allowMetaRedirects; */
  NS_SCRIPTABLE NS_IMETHOD GetAllowMetaRedirects(bool *aAllowMetaRedirects) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAllowMetaRedirects(bool aAllowMetaRedirects) = 0;

  /* attribute boolean allowSubframes; */
  NS_SCRIPTABLE NS_IMETHOD GetAllowSubframes(bool *aAllowSubframes) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAllowSubframes(bool aAllowSubframes) = 0;

  /* attribute boolean allowImages; */
  NS_SCRIPTABLE NS_IMETHOD GetAllowImages(bool *aAllowImages) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAllowImages(bool aAllowImages) = 0;

  /* attribute boolean allowDNSPrefetch; */
  NS_SCRIPTABLE NS_IMETHOD GetAllowDNSPrefetch(bool *aAllowDNSPrefetch) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAllowDNSPrefetch(bool aAllowDNSPrefetch) = 0;

  /* attribute boolean allowWindowControl; */
  NS_SCRIPTABLE NS_IMETHOD GetAllowWindowControl(bool *aAllowWindowControl) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAllowWindowControl(bool aAllowWindowControl) = 0;

  enum {
    ENUMERATE_FORWARDS = 0,
    ENUMERATE_BACKWARDS = 1
  };

  /* nsISimpleEnumerator getDocShellEnumerator (in long aItemType, in long aDirection); */
  NS_SCRIPTABLE NS_IMETHOD GetDocShellEnumerator(PRInt32 aItemType, PRInt32 aDirection, nsISimpleEnumerator * *_retval NS_OUTPARAM) = 0;

  enum {
    APP_TYPE_UNKNOWN = 0U,
    APP_TYPE_MAIL = 1U,
    APP_TYPE_EDITOR = 2U
  };

  /* attribute unsigned long appType; */
  NS_SCRIPTABLE NS_IMETHOD GetAppType(PRUint32 *aAppType) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAppType(PRUint32 aAppType) = 0;

  /* attribute boolean allowAuth; */
  NS_SCRIPTABLE NS_IMETHOD GetAllowAuth(bool *aAllowAuth) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAllowAuth(bool aAllowAuth) = 0;

  /* attribute float zoom; */
  NS_SCRIPTABLE NS_IMETHOD GetZoom(float *aZoom) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetZoom(float aZoom) = 0;

  /* attribute long marginWidth; */
  NS_SCRIPTABLE NS_IMETHOD GetMarginWidth(PRInt32 *aMarginWidth) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMarginWidth(PRInt32 aMarginWidth) = 0;

  /* attribute long marginHeight; */
  NS_SCRIPTABLE NS_IMETHOD GetMarginHeight(PRInt32 *aMarginHeight) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMarginHeight(PRInt32 aMarginHeight) = 0;

  /* void tabToTreeOwner (in boolean forward, out boolean tookFocus); */
  NS_SCRIPTABLE NS_IMETHOD TabToTreeOwner(bool forward, bool *tookFocus NS_OUTPARAM) = 0;

  enum {
    BUSY_FLAGS_NONE = 0U,
    BUSY_FLAGS_BUSY = 1U,
    BUSY_FLAGS_BEFORE_PAGE_LOAD = 2U,
    BUSY_FLAGS_PAGE_LOADING = 4U,
    LOAD_CMD_NORMAL = 1U,
    LOAD_CMD_RELOAD = 2U,
    LOAD_CMD_HISTORY = 4U,
    LOAD_CMD_PUSHSTATE = 8U
  };

  /* readonly attribute unsigned long busyFlags; */
  NS_SCRIPTABLE NS_IMETHOD GetBusyFlags(PRUint32 *aBusyFlags) = 0;

  /* attribute unsigned long loadType; */
  NS_SCRIPTABLE NS_IMETHOD GetLoadType(PRUint32 *aLoadType) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetLoadType(PRUint32 aLoadType) = 0;

  /* boolean isBeingDestroyed (); */
  NS_SCRIPTABLE NS_IMETHOD IsBeingDestroyed(bool *_retval NS_OUTPARAM) = 0;

  /* readonly attribute boolean isExecutingOnLoadHandler; */
  NS_SCRIPTABLE NS_IMETHOD GetIsExecutingOnLoadHandler(bool *aIsExecutingOnLoadHandler) = 0;

  /* attribute nsILayoutHistoryState layoutHistoryState; */
  NS_SCRIPTABLE NS_IMETHOD GetLayoutHistoryState(nsILayoutHistoryState * *aLayoutHistoryState) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetLayoutHistoryState(nsILayoutHistoryState *aLayoutHistoryState) = 0;

  /* readonly attribute boolean shouldSaveLayoutState; */
  NS_SCRIPTABLE NS_IMETHOD GetShouldSaveLayoutState(bool *aShouldSaveLayoutState) = 0;

  /* attribute nsISecureBrowserUI securityUI; */
  NS_SCRIPTABLE NS_IMETHOD GetSecurityUI(nsISecureBrowserUI * *aSecurityUI) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSecurityUI(nsISecureBrowserUI *aSecurityUI) = 0;

  /* void suspendRefreshURIs (); */
  NS_SCRIPTABLE NS_IMETHOD SuspendRefreshURIs(void) = 0;

  /* void resumeRefreshURIs (); */
  NS_SCRIPTABLE NS_IMETHOD ResumeRefreshURIs(void) = 0;

  /* void beginRestore (in nsIContentViewer viewer, in boolean top); */
  NS_SCRIPTABLE NS_IMETHOD BeginRestore(nsIContentViewer *viewer, bool top) = 0;

  /* void finishRestore (); */
  NS_SCRIPTABLE NS_IMETHOD FinishRestore(void) = 0;

  /* readonly attribute boolean restoringDocument; */
  NS_SCRIPTABLE NS_IMETHOD GetRestoringDocument(bool *aRestoringDocument) = 0;

  /* attribute boolean useErrorPages; */
  NS_SCRIPTABLE NS_IMETHOD GetUseErrorPages(bool *aUseErrorPages) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetUseErrorPages(bool aUseErrorPages) = 0;

  /* readonly attribute long previousTransIndex; */
  NS_SCRIPTABLE NS_IMETHOD GetPreviousTransIndex(PRInt32 *aPreviousTransIndex) = 0;

  /* readonly attribute long loadedTransIndex; */
  NS_SCRIPTABLE NS_IMETHOD GetLoadedTransIndex(PRInt32 *aLoadedTransIndex) = 0;

  /* void historyPurged (in long numEntries); */
  NS_SCRIPTABLE NS_IMETHOD HistoryPurged(PRInt32 numEntries) = 0;

  /* nsIDOMStorage getSessionStorageForURI (in nsIURI uri, in DOMString documentURI); */
  NS_SCRIPTABLE NS_IMETHOD GetSessionStorageForURI(nsIURI *uri, const nsAString & documentURI, nsIDOMStorage * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMStorage getSessionStorageForPrincipal (in nsIPrincipal principal, in DOMString documentURI, in boolean create); */
  NS_SCRIPTABLE NS_IMETHOD GetSessionStorageForPrincipal(nsIPrincipal *principal, const nsAString & documentURI, bool create, nsIDOMStorage * *_retval NS_OUTPARAM) = 0;

  /* void addSessionStorage (in nsIPrincipal principal, in nsIDOMStorage storage); */
  NS_SCRIPTABLE NS_IMETHOD AddSessionStorage(nsIPrincipal *principal, nsIDOMStorage *storage) = 0;

  /* void cloneSessionStoragesTo (in nsIDocShell docShell); */
  NS_SCRIPTABLE NS_IMETHOD CloneSessionStoragesTo(nsIDocShell *docShell) = 0;

  /* void clearSessionStorages (); */
  NS_SCRIPTABLE NS_IMETHOD ClearSessionStorages(void) = 0;

  /* readonly attribute nsIChannel currentDocumentChannel; */
  NS_SCRIPTABLE NS_IMETHOD GetCurrentDocumentChannel(nsIChannel * *aCurrentDocumentChannel) = 0;

  /* [noscript] void setChildOffset (in unsigned long offset); */
  NS_IMETHOD SetChildOffset(PRUint32 offset) = 0;

  /* readonly attribute boolean isInUnload; */
  NS_SCRIPTABLE NS_IMETHOD GetIsInUnload(bool *aIsInUnload) = 0;

  /* readonly attribute boolean channelIsUnsafe; */
  NS_SCRIPTABLE NS_IMETHOD GetChannelIsUnsafe(bool *aChannelIsUnsafe) = 0;

  /* [noscript,notxpcom] void DetachEditorFromWindow (); */
  NS_IMETHOD_(void) DetachEditorFromWindow(void) = 0;

  /* attribute boolean isOffScreenBrowser; */
  NS_SCRIPTABLE NS_IMETHOD GetIsOffScreenBrowser(bool *aIsOffScreenBrowser) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetIsOffScreenBrowser(bool aIsOffScreenBrowser) = 0;

  /* readonly attribute nsIWebBrowserPrint printPreview; */
  NS_SCRIPTABLE NS_IMETHOD GetPrintPreview(nsIWebBrowserPrint * *aPrintPreview) = 0;

  /* readonly attribute boolean canExecuteScripts; */
  NS_SCRIPTABLE NS_IMETHOD GetCanExecuteScripts(bool *aCanExecuteScripts) = 0;

  /* attribute boolean isActive; */
  NS_SCRIPTABLE NS_IMETHOD GetIsActive(bool *aIsActive) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetIsActive(bool aIsActive) = 0;

  /* readonly attribute unsigned long long historyID; */
  NS_SCRIPTABLE NS_IMETHOD GetHistoryID(PRUint64 *aHistoryID) = 0;

  /* attribute boolean isAppTab; */
  NS_SCRIPTABLE NS_IMETHOD GetIsAppTab(bool *aIsAppTab) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetIsAppTab(bool aIsAppTab) = 0;

  /* void createAboutBlankContentViewer (in nsIPrincipal aPrincipal); */
  NS_SCRIPTABLE NS_IMETHOD CreateAboutBlankContentViewer(nsIPrincipal *aPrincipal) = 0;

  /* attribute string charset; */
  NS_SCRIPTABLE NS_IMETHOD GetCharset(char * *aCharset) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCharset(const char * aCharset) = 0;

  /* attribute nsIAtom forcedCharset; */
  NS_SCRIPTABLE NS_IMETHOD GetForcedCharset(nsIAtom * *aForcedCharset) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetForcedCharset(nsIAtom *aForcedCharset) = 0;

  /* attribute nsIAtom parentCharset; */
  NS_SCRIPTABLE NS_IMETHOD GetParentCharset(nsIAtom * *aParentCharset) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetParentCharset(nsIAtom *aParentCharset) = 0;

  /* attribute PRInt32 parentCharsetSource; */
  NS_SCRIPTABLE NS_IMETHOD GetParentCharsetSource(PRInt32 *aParentCharsetSource) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetParentCharsetSource(PRInt32 aParentCharsetSource) = 0;

  /* void addWeakPrivacyTransitionObserver (in nsIPrivacyTransitionObserver obs); */
  NS_SCRIPTABLE NS_IMETHOD AddWeakPrivacyTransitionObserver(nsIPrivacyTransitionObserver *obs) = 0;

  /* attribute bool isBrowserFrame; */
  NS_SCRIPTABLE NS_IMETHOD GetIsBrowserFrame(bool *aIsBrowserFrame) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetIsBrowserFrame(bool aIsBrowserFrame) = 0;

  /* readonly attribute bool containedInBrowserFrame; */
  NS_SCRIPTABLE NS_IMETHOD GetContainedInBrowserFrame(bool *aContainedInBrowserFrame) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDocShell, NS_IDOCSHELL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOCSHELL \
  NS_IMETHOD LoadURI(nsIURI *uri, nsIDocShellLoadInfo *loadInfo, PRUint32 aLoadFlags, bool firstParty); \
  NS_IMETHOD LoadStream(nsIInputStream *aStream, nsIURI *aURI, const nsACString & aContentType, const nsACString & aContentCharset, nsIDocShellLoadInfo *aLoadInfo); \
  NS_IMETHOD InternalLoad(nsIURI *aURI, nsIURI *aReferrer, nsISupports *aOwner, PRUint32 aFlags, const PRUnichar * aWindowTarget, const char * aTypeHint, nsIInputStream *aPostDataStream, nsIInputStream *aHeadersStream, PRUint32 aLoadFlags, nsISHEntry *aSHEntry, bool firstParty, nsIDocShell * *aDocShell NS_OUTPARAM, nsIRequest * *aRequest NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AddState(nsIVariant *aData, const nsAString & aTitle, const nsAString & aURL, bool aReplace, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD CreateLoadInfo(nsIDocShellLoadInfo * *loadInfo NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD PrepareForNewContentModel(void); \
  NS_SCRIPTABLE NS_IMETHOD SetCurrentURI(nsIURI *aURI); \
  NS_IMETHOD FirePageHideNotification(bool isUnload); \
  NS_IMETHOD GetPresContext(nsPresContext **aPresContext); \
  NS_IMETHOD GetPresShell(nsIPresShell **aPresShell); \
  NS_IMETHOD GetEldestPresShell(nsIPresShell **aEldestPresShell); \
  NS_SCRIPTABLE NS_IMETHOD GetContentViewer(nsIContentViewer * *aContentViewer); \
  NS_SCRIPTABLE NS_IMETHOD GetChromeEventHandler(nsIDOMEventTarget * *aChromeEventHandler); \
  NS_SCRIPTABLE NS_IMETHOD SetChromeEventHandler(nsIDOMEventTarget *aChromeEventHandler); \
  NS_SCRIPTABLE NS_IMETHOD GetAllowPlugins(bool *aAllowPlugins); \
  NS_SCRIPTABLE NS_IMETHOD SetAllowPlugins(bool aAllowPlugins); \
  NS_SCRIPTABLE NS_IMETHOD GetAllowJavascript(bool *aAllowJavascript); \
  NS_SCRIPTABLE NS_IMETHOD SetAllowJavascript(bool aAllowJavascript); \
  NS_SCRIPTABLE NS_IMETHOD GetAllowMetaRedirects(bool *aAllowMetaRedirects); \
  NS_SCRIPTABLE NS_IMETHOD SetAllowMetaRedirects(bool aAllowMetaRedirects); \
  NS_SCRIPTABLE NS_IMETHOD GetAllowSubframes(bool *aAllowSubframes); \
  NS_SCRIPTABLE NS_IMETHOD SetAllowSubframes(bool aAllowSubframes); \
  NS_SCRIPTABLE NS_IMETHOD GetAllowImages(bool *aAllowImages); \
  NS_SCRIPTABLE NS_IMETHOD SetAllowImages(bool aAllowImages); \
  NS_SCRIPTABLE NS_IMETHOD GetAllowDNSPrefetch(bool *aAllowDNSPrefetch); \
  NS_SCRIPTABLE NS_IMETHOD SetAllowDNSPrefetch(bool aAllowDNSPrefetch); \
  NS_SCRIPTABLE NS_IMETHOD GetAllowWindowControl(bool *aAllowWindowControl); \
  NS_SCRIPTABLE NS_IMETHOD SetAllowWindowControl(bool aAllowWindowControl); \
  NS_SCRIPTABLE NS_IMETHOD GetDocShellEnumerator(PRInt32 aItemType, PRInt32 aDirection, nsISimpleEnumerator * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAppType(PRUint32 *aAppType); \
  NS_SCRIPTABLE NS_IMETHOD SetAppType(PRUint32 aAppType); \
  NS_SCRIPTABLE NS_IMETHOD GetAllowAuth(bool *aAllowAuth); \
  NS_SCRIPTABLE NS_IMETHOD SetAllowAuth(bool aAllowAuth); \
  NS_SCRIPTABLE NS_IMETHOD GetZoom(float *aZoom); \
  NS_SCRIPTABLE NS_IMETHOD SetZoom(float aZoom); \
  NS_SCRIPTABLE NS_IMETHOD GetMarginWidth(PRInt32 *aMarginWidth); \
  NS_SCRIPTABLE NS_IMETHOD SetMarginWidth(PRInt32 aMarginWidth); \
  NS_SCRIPTABLE NS_IMETHOD GetMarginHeight(PRInt32 *aMarginHeight); \
  NS_SCRIPTABLE NS_IMETHOD SetMarginHeight(PRInt32 aMarginHeight); \
  NS_SCRIPTABLE NS_IMETHOD TabToTreeOwner(bool forward, bool *tookFocus NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetBusyFlags(PRUint32 *aBusyFlags); \
  NS_SCRIPTABLE NS_IMETHOD GetLoadType(PRUint32 *aLoadType); \
  NS_SCRIPTABLE NS_IMETHOD SetLoadType(PRUint32 aLoadType); \
  NS_SCRIPTABLE NS_IMETHOD IsBeingDestroyed(bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetIsExecutingOnLoadHandler(bool *aIsExecutingOnLoadHandler); \
  NS_SCRIPTABLE NS_IMETHOD GetLayoutHistoryState(nsILayoutHistoryState * *aLayoutHistoryState); \
  NS_SCRIPTABLE NS_IMETHOD SetLayoutHistoryState(nsILayoutHistoryState *aLayoutHistoryState); \
  NS_SCRIPTABLE NS_IMETHOD GetShouldSaveLayoutState(bool *aShouldSaveLayoutState); \
  NS_SCRIPTABLE NS_IMETHOD GetSecurityUI(nsISecureBrowserUI * *aSecurityUI); \
  NS_SCRIPTABLE NS_IMETHOD SetSecurityUI(nsISecureBrowserUI *aSecurityUI); \
  NS_SCRIPTABLE NS_IMETHOD SuspendRefreshURIs(void); \
  NS_SCRIPTABLE NS_IMETHOD ResumeRefreshURIs(void); \
  NS_SCRIPTABLE NS_IMETHOD BeginRestore(nsIContentViewer *viewer, bool top); \
  NS_SCRIPTABLE NS_IMETHOD FinishRestore(void); \
  NS_SCRIPTABLE NS_IMETHOD GetRestoringDocument(bool *aRestoringDocument); \
  NS_SCRIPTABLE NS_IMETHOD GetUseErrorPages(bool *aUseErrorPages); \
  NS_SCRIPTABLE NS_IMETHOD SetUseErrorPages(bool aUseErrorPages); \
  NS_SCRIPTABLE NS_IMETHOD GetPreviousTransIndex(PRInt32 *aPreviousTransIndex); \
  NS_SCRIPTABLE NS_IMETHOD GetLoadedTransIndex(PRInt32 *aLoadedTransIndex); \
  NS_SCRIPTABLE NS_IMETHOD HistoryPurged(PRInt32 numEntries); \
  NS_SCRIPTABLE NS_IMETHOD GetSessionStorageForURI(nsIURI *uri, const nsAString & documentURI, nsIDOMStorage * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetSessionStorageForPrincipal(nsIPrincipal *principal, const nsAString & documentURI, bool create, nsIDOMStorage * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AddSessionStorage(nsIPrincipal *principal, nsIDOMStorage *storage); \
  NS_SCRIPTABLE NS_IMETHOD CloneSessionStoragesTo(nsIDocShell *docShell); \
  NS_SCRIPTABLE NS_IMETHOD ClearSessionStorages(void); \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentDocumentChannel(nsIChannel * *aCurrentDocumentChannel); \
  NS_IMETHOD SetChildOffset(PRUint32 offset); \
  NS_SCRIPTABLE NS_IMETHOD GetIsInUnload(bool *aIsInUnload); \
  NS_SCRIPTABLE NS_IMETHOD GetChannelIsUnsafe(bool *aChannelIsUnsafe); \
  NS_IMETHOD_(void) DetachEditorFromWindow(void); \
  NS_SCRIPTABLE NS_IMETHOD GetIsOffScreenBrowser(bool *aIsOffScreenBrowser); \
  NS_SCRIPTABLE NS_IMETHOD SetIsOffScreenBrowser(bool aIsOffScreenBrowser); \
  NS_SCRIPTABLE NS_IMETHOD GetPrintPreview(nsIWebBrowserPrint * *aPrintPreview); \
  NS_SCRIPTABLE NS_IMETHOD GetCanExecuteScripts(bool *aCanExecuteScripts); \
  NS_SCRIPTABLE NS_IMETHOD GetIsActive(bool *aIsActive); \
  NS_SCRIPTABLE NS_IMETHOD SetIsActive(bool aIsActive); \
  NS_SCRIPTABLE NS_IMETHOD GetHistoryID(PRUint64 *aHistoryID); \
  NS_SCRIPTABLE NS_IMETHOD GetIsAppTab(bool *aIsAppTab); \
  NS_SCRIPTABLE NS_IMETHOD SetIsAppTab(bool aIsAppTab); \
  NS_SCRIPTABLE NS_IMETHOD CreateAboutBlankContentViewer(nsIPrincipal *aPrincipal); \
  NS_SCRIPTABLE NS_IMETHOD GetCharset(char * *aCharset); \
  NS_SCRIPTABLE NS_IMETHOD SetCharset(const char * aCharset); \
  NS_SCRIPTABLE NS_IMETHOD GetForcedCharset(nsIAtom * *aForcedCharset); \
  NS_SCRIPTABLE NS_IMETHOD SetForcedCharset(nsIAtom *aForcedCharset); \
  NS_SCRIPTABLE NS_IMETHOD GetParentCharset(nsIAtom * *aParentCharset); \
  NS_SCRIPTABLE NS_IMETHOD SetParentCharset(nsIAtom *aParentCharset); \
  NS_SCRIPTABLE NS_IMETHOD GetParentCharsetSource(PRInt32 *aParentCharsetSource); \
  NS_SCRIPTABLE NS_IMETHOD SetParentCharsetSource(PRInt32 aParentCharsetSource); \
  NS_SCRIPTABLE NS_IMETHOD AddWeakPrivacyTransitionObserver(nsIPrivacyTransitionObserver *obs); \
  NS_SCRIPTABLE NS_IMETHOD GetIsBrowserFrame(bool *aIsBrowserFrame); \
  NS_SCRIPTABLE NS_IMETHOD SetIsBrowserFrame(bool aIsBrowserFrame); \
  NS_SCRIPTABLE NS_IMETHOD GetContainedInBrowserFrame(bool *aContainedInBrowserFrame); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOCSHELL(_to) \
  NS_IMETHOD LoadURI(nsIURI *uri, nsIDocShellLoadInfo *loadInfo, PRUint32 aLoadFlags, bool firstParty) { return _to LoadURI(uri, loadInfo, aLoadFlags, firstParty); } \
  NS_IMETHOD LoadStream(nsIInputStream *aStream, nsIURI *aURI, const nsACString & aContentType, const nsACString & aContentCharset, nsIDocShellLoadInfo *aLoadInfo) { return _to LoadStream(aStream, aURI, aContentType, aContentCharset, aLoadInfo); } \
  NS_IMETHOD InternalLoad(nsIURI *aURI, nsIURI *aReferrer, nsISupports *aOwner, PRUint32 aFlags, const PRUnichar * aWindowTarget, const char * aTypeHint, nsIInputStream *aPostDataStream, nsIInputStream *aHeadersStream, PRUint32 aLoadFlags, nsISHEntry *aSHEntry, bool firstParty, nsIDocShell * *aDocShell NS_OUTPARAM, nsIRequest * *aRequest NS_OUTPARAM) { return _to InternalLoad(aURI, aReferrer, aOwner, aFlags, aWindowTarget, aTypeHint, aPostDataStream, aHeadersStream, aLoadFlags, aSHEntry, firstParty, aDocShell, aRequest); } \
  NS_SCRIPTABLE NS_IMETHOD AddState(nsIVariant *aData, const nsAString & aTitle, const nsAString & aURL, bool aReplace, JSContext* cx) { return _to AddState(aData, aTitle, aURL, aReplace, cx); } \
  NS_SCRIPTABLE NS_IMETHOD CreateLoadInfo(nsIDocShellLoadInfo * *loadInfo NS_OUTPARAM) { return _to CreateLoadInfo(loadInfo); } \
  NS_SCRIPTABLE NS_IMETHOD PrepareForNewContentModel(void) { return _to PrepareForNewContentModel(); } \
  NS_SCRIPTABLE NS_IMETHOD SetCurrentURI(nsIURI *aURI) { return _to SetCurrentURI(aURI); } \
  NS_IMETHOD FirePageHideNotification(bool isUnload) { return _to FirePageHideNotification(isUnload); } \
  NS_IMETHOD GetPresContext(nsPresContext **aPresContext) { return _to GetPresContext(aPresContext); } \
  NS_IMETHOD GetPresShell(nsIPresShell **aPresShell) { return _to GetPresShell(aPresShell); } \
  NS_IMETHOD GetEldestPresShell(nsIPresShell **aEldestPresShell) { return _to GetEldestPresShell(aEldestPresShell); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentViewer(nsIContentViewer * *aContentViewer) { return _to GetContentViewer(aContentViewer); } \
  NS_SCRIPTABLE NS_IMETHOD GetChromeEventHandler(nsIDOMEventTarget * *aChromeEventHandler) { return _to GetChromeEventHandler(aChromeEventHandler); } \
  NS_SCRIPTABLE NS_IMETHOD SetChromeEventHandler(nsIDOMEventTarget *aChromeEventHandler) { return _to SetChromeEventHandler(aChromeEventHandler); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllowPlugins(bool *aAllowPlugins) { return _to GetAllowPlugins(aAllowPlugins); } \
  NS_SCRIPTABLE NS_IMETHOD SetAllowPlugins(bool aAllowPlugins) { return _to SetAllowPlugins(aAllowPlugins); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllowJavascript(bool *aAllowJavascript) { return _to GetAllowJavascript(aAllowJavascript); } \
  NS_SCRIPTABLE NS_IMETHOD SetAllowJavascript(bool aAllowJavascript) { return _to SetAllowJavascript(aAllowJavascript); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllowMetaRedirects(bool *aAllowMetaRedirects) { return _to GetAllowMetaRedirects(aAllowMetaRedirects); } \
  NS_SCRIPTABLE NS_IMETHOD SetAllowMetaRedirects(bool aAllowMetaRedirects) { return _to SetAllowMetaRedirects(aAllowMetaRedirects); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllowSubframes(bool *aAllowSubframes) { return _to GetAllowSubframes(aAllowSubframes); } \
  NS_SCRIPTABLE NS_IMETHOD SetAllowSubframes(bool aAllowSubframes) { return _to SetAllowSubframes(aAllowSubframes); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllowImages(bool *aAllowImages) { return _to GetAllowImages(aAllowImages); } \
  NS_SCRIPTABLE NS_IMETHOD SetAllowImages(bool aAllowImages) { return _to SetAllowImages(aAllowImages); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllowDNSPrefetch(bool *aAllowDNSPrefetch) { return _to GetAllowDNSPrefetch(aAllowDNSPrefetch); } \
  NS_SCRIPTABLE NS_IMETHOD SetAllowDNSPrefetch(bool aAllowDNSPrefetch) { return _to SetAllowDNSPrefetch(aAllowDNSPrefetch); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllowWindowControl(bool *aAllowWindowControl) { return _to GetAllowWindowControl(aAllowWindowControl); } \
  NS_SCRIPTABLE NS_IMETHOD SetAllowWindowControl(bool aAllowWindowControl) { return _to SetAllowWindowControl(aAllowWindowControl); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocShellEnumerator(PRInt32 aItemType, PRInt32 aDirection, nsISimpleEnumerator * *_retval NS_OUTPARAM) { return _to GetDocShellEnumerator(aItemType, aDirection, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAppType(PRUint32 *aAppType) { return _to GetAppType(aAppType); } \
  NS_SCRIPTABLE NS_IMETHOD SetAppType(PRUint32 aAppType) { return _to SetAppType(aAppType); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllowAuth(bool *aAllowAuth) { return _to GetAllowAuth(aAllowAuth); } \
  NS_SCRIPTABLE NS_IMETHOD SetAllowAuth(bool aAllowAuth) { return _to SetAllowAuth(aAllowAuth); } \
  NS_SCRIPTABLE NS_IMETHOD GetZoom(float *aZoom) { return _to GetZoom(aZoom); } \
  NS_SCRIPTABLE NS_IMETHOD SetZoom(float aZoom) { return _to SetZoom(aZoom); } \
  NS_SCRIPTABLE NS_IMETHOD GetMarginWidth(PRInt32 *aMarginWidth) { return _to GetMarginWidth(aMarginWidth); } \
  NS_SCRIPTABLE NS_IMETHOD SetMarginWidth(PRInt32 aMarginWidth) { return _to SetMarginWidth(aMarginWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetMarginHeight(PRInt32 *aMarginHeight) { return _to GetMarginHeight(aMarginHeight); } \
  NS_SCRIPTABLE NS_IMETHOD SetMarginHeight(PRInt32 aMarginHeight) { return _to SetMarginHeight(aMarginHeight); } \
  NS_SCRIPTABLE NS_IMETHOD TabToTreeOwner(bool forward, bool *tookFocus NS_OUTPARAM) { return _to TabToTreeOwner(forward, tookFocus); } \
  NS_SCRIPTABLE NS_IMETHOD GetBusyFlags(PRUint32 *aBusyFlags) { return _to GetBusyFlags(aBusyFlags); } \
  NS_SCRIPTABLE NS_IMETHOD GetLoadType(PRUint32 *aLoadType) { return _to GetLoadType(aLoadType); } \
  NS_SCRIPTABLE NS_IMETHOD SetLoadType(PRUint32 aLoadType) { return _to SetLoadType(aLoadType); } \
  NS_SCRIPTABLE NS_IMETHOD IsBeingDestroyed(bool *_retval NS_OUTPARAM) { return _to IsBeingDestroyed(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsExecutingOnLoadHandler(bool *aIsExecutingOnLoadHandler) { return _to GetIsExecutingOnLoadHandler(aIsExecutingOnLoadHandler); } \
  NS_SCRIPTABLE NS_IMETHOD GetLayoutHistoryState(nsILayoutHistoryState * *aLayoutHistoryState) { return _to GetLayoutHistoryState(aLayoutHistoryState); } \
  NS_SCRIPTABLE NS_IMETHOD SetLayoutHistoryState(nsILayoutHistoryState *aLayoutHistoryState) { return _to SetLayoutHistoryState(aLayoutHistoryState); } \
  NS_SCRIPTABLE NS_IMETHOD GetShouldSaveLayoutState(bool *aShouldSaveLayoutState) { return _to GetShouldSaveLayoutState(aShouldSaveLayoutState); } \
  NS_SCRIPTABLE NS_IMETHOD GetSecurityUI(nsISecureBrowserUI * *aSecurityUI) { return _to GetSecurityUI(aSecurityUI); } \
  NS_SCRIPTABLE NS_IMETHOD SetSecurityUI(nsISecureBrowserUI *aSecurityUI) { return _to SetSecurityUI(aSecurityUI); } \
  NS_SCRIPTABLE NS_IMETHOD SuspendRefreshURIs(void) { return _to SuspendRefreshURIs(); } \
  NS_SCRIPTABLE NS_IMETHOD ResumeRefreshURIs(void) { return _to ResumeRefreshURIs(); } \
  NS_SCRIPTABLE NS_IMETHOD BeginRestore(nsIContentViewer *viewer, bool top) { return _to BeginRestore(viewer, top); } \
  NS_SCRIPTABLE NS_IMETHOD FinishRestore(void) { return _to FinishRestore(); } \
  NS_SCRIPTABLE NS_IMETHOD GetRestoringDocument(bool *aRestoringDocument) { return _to GetRestoringDocument(aRestoringDocument); } \
  NS_SCRIPTABLE NS_IMETHOD GetUseErrorPages(bool *aUseErrorPages) { return _to GetUseErrorPages(aUseErrorPages); } \
  NS_SCRIPTABLE NS_IMETHOD SetUseErrorPages(bool aUseErrorPages) { return _to SetUseErrorPages(aUseErrorPages); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreviousTransIndex(PRInt32 *aPreviousTransIndex) { return _to GetPreviousTransIndex(aPreviousTransIndex); } \
  NS_SCRIPTABLE NS_IMETHOD GetLoadedTransIndex(PRInt32 *aLoadedTransIndex) { return _to GetLoadedTransIndex(aLoadedTransIndex); } \
  NS_SCRIPTABLE NS_IMETHOD HistoryPurged(PRInt32 numEntries) { return _to HistoryPurged(numEntries); } \
  NS_SCRIPTABLE NS_IMETHOD GetSessionStorageForURI(nsIURI *uri, const nsAString & documentURI, nsIDOMStorage * *_retval NS_OUTPARAM) { return _to GetSessionStorageForURI(uri, documentURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSessionStorageForPrincipal(nsIPrincipal *principal, const nsAString & documentURI, bool create, nsIDOMStorage * *_retval NS_OUTPARAM) { return _to GetSessionStorageForPrincipal(principal, documentURI, create, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddSessionStorage(nsIPrincipal *principal, nsIDOMStorage *storage) { return _to AddSessionStorage(principal, storage); } \
  NS_SCRIPTABLE NS_IMETHOD CloneSessionStoragesTo(nsIDocShell *docShell) { return _to CloneSessionStoragesTo(docShell); } \
  NS_SCRIPTABLE NS_IMETHOD ClearSessionStorages(void) { return _to ClearSessionStorages(); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentDocumentChannel(nsIChannel * *aCurrentDocumentChannel) { return _to GetCurrentDocumentChannel(aCurrentDocumentChannel); } \
  NS_IMETHOD SetChildOffset(PRUint32 offset) { return _to SetChildOffset(offset); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsInUnload(bool *aIsInUnload) { return _to GetIsInUnload(aIsInUnload); } \
  NS_SCRIPTABLE NS_IMETHOD GetChannelIsUnsafe(bool *aChannelIsUnsafe) { return _to GetChannelIsUnsafe(aChannelIsUnsafe); } \
  NS_IMETHOD_(void) DetachEditorFromWindow(void) { return _to DetachEditorFromWindow(); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsOffScreenBrowser(bool *aIsOffScreenBrowser) { return _to GetIsOffScreenBrowser(aIsOffScreenBrowser); } \
  NS_SCRIPTABLE NS_IMETHOD SetIsOffScreenBrowser(bool aIsOffScreenBrowser) { return _to SetIsOffScreenBrowser(aIsOffScreenBrowser); } \
  NS_SCRIPTABLE NS_IMETHOD GetPrintPreview(nsIWebBrowserPrint * *aPrintPreview) { return _to GetPrintPreview(aPrintPreview); } \
  NS_SCRIPTABLE NS_IMETHOD GetCanExecuteScripts(bool *aCanExecuteScripts) { return _to GetCanExecuteScripts(aCanExecuteScripts); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsActive(bool *aIsActive) { return _to GetIsActive(aIsActive); } \
  NS_SCRIPTABLE NS_IMETHOD SetIsActive(bool aIsActive) { return _to SetIsActive(aIsActive); } \
  NS_SCRIPTABLE NS_IMETHOD GetHistoryID(PRUint64 *aHistoryID) { return _to GetHistoryID(aHistoryID); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsAppTab(bool *aIsAppTab) { return _to GetIsAppTab(aIsAppTab); } \
  NS_SCRIPTABLE NS_IMETHOD SetIsAppTab(bool aIsAppTab) { return _to SetIsAppTab(aIsAppTab); } \
  NS_SCRIPTABLE NS_IMETHOD CreateAboutBlankContentViewer(nsIPrincipal *aPrincipal) { return _to CreateAboutBlankContentViewer(aPrincipal); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharset(char * *aCharset) { return _to GetCharset(aCharset); } \
  NS_SCRIPTABLE NS_IMETHOD SetCharset(const char * aCharset) { return _to SetCharset(aCharset); } \
  NS_SCRIPTABLE NS_IMETHOD GetForcedCharset(nsIAtom * *aForcedCharset) { return _to GetForcedCharset(aForcedCharset); } \
  NS_SCRIPTABLE NS_IMETHOD SetForcedCharset(nsIAtom *aForcedCharset) { return _to SetForcedCharset(aForcedCharset); } \
  NS_SCRIPTABLE NS_IMETHOD GetParentCharset(nsIAtom * *aParentCharset) { return _to GetParentCharset(aParentCharset); } \
  NS_SCRIPTABLE NS_IMETHOD SetParentCharset(nsIAtom *aParentCharset) { return _to SetParentCharset(aParentCharset); } \
  NS_SCRIPTABLE NS_IMETHOD GetParentCharsetSource(PRInt32 *aParentCharsetSource) { return _to GetParentCharsetSource(aParentCharsetSource); } \
  NS_SCRIPTABLE NS_IMETHOD SetParentCharsetSource(PRInt32 aParentCharsetSource) { return _to SetParentCharsetSource(aParentCharsetSource); } \
  NS_SCRIPTABLE NS_IMETHOD AddWeakPrivacyTransitionObserver(nsIPrivacyTransitionObserver *obs) { return _to AddWeakPrivacyTransitionObserver(obs); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsBrowserFrame(bool *aIsBrowserFrame) { return _to GetIsBrowserFrame(aIsBrowserFrame); } \
  NS_SCRIPTABLE NS_IMETHOD SetIsBrowserFrame(bool aIsBrowserFrame) { return _to SetIsBrowserFrame(aIsBrowserFrame); } \
  NS_SCRIPTABLE NS_IMETHOD GetContainedInBrowserFrame(bool *aContainedInBrowserFrame) { return _to GetContainedInBrowserFrame(aContainedInBrowserFrame); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOCSHELL(_to) \
  NS_IMETHOD LoadURI(nsIURI *uri, nsIDocShellLoadInfo *loadInfo, PRUint32 aLoadFlags, bool firstParty) { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadURI(uri, loadInfo, aLoadFlags, firstParty); } \
  NS_IMETHOD LoadStream(nsIInputStream *aStream, nsIURI *aURI, const nsACString & aContentType, const nsACString & aContentCharset, nsIDocShellLoadInfo *aLoadInfo) { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadStream(aStream, aURI, aContentType, aContentCharset, aLoadInfo); } \
  NS_IMETHOD InternalLoad(nsIURI *aURI, nsIURI *aReferrer, nsISupports *aOwner, PRUint32 aFlags, const PRUnichar * aWindowTarget, const char * aTypeHint, nsIInputStream *aPostDataStream, nsIInputStream *aHeadersStream, PRUint32 aLoadFlags, nsISHEntry *aSHEntry, bool firstParty, nsIDocShell * *aDocShell NS_OUTPARAM, nsIRequest * *aRequest NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InternalLoad(aURI, aReferrer, aOwner, aFlags, aWindowTarget, aTypeHint, aPostDataStream, aHeadersStream, aLoadFlags, aSHEntry, firstParty, aDocShell, aRequest); } \
  NS_SCRIPTABLE NS_IMETHOD AddState(nsIVariant *aData, const nsAString & aTitle, const nsAString & aURL, bool aReplace, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddState(aData, aTitle, aURL, aReplace, cx); } \
  NS_SCRIPTABLE NS_IMETHOD CreateLoadInfo(nsIDocShellLoadInfo * *loadInfo NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateLoadInfo(loadInfo); } \
  NS_SCRIPTABLE NS_IMETHOD PrepareForNewContentModel(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->PrepareForNewContentModel(); } \
  NS_SCRIPTABLE NS_IMETHOD SetCurrentURI(nsIURI *aURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCurrentURI(aURI); } \
  NS_IMETHOD FirePageHideNotification(bool isUnload) { return !_to ? NS_ERROR_NULL_POINTER : _to->FirePageHideNotification(isUnload); } \
  NS_IMETHOD GetPresContext(nsPresContext **aPresContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPresContext(aPresContext); } \
  NS_IMETHOD GetPresShell(nsIPresShell **aPresShell) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPresShell(aPresShell); } \
  NS_IMETHOD GetEldestPresShell(nsIPresShell **aEldestPresShell) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEldestPresShell(aEldestPresShell); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentViewer(nsIContentViewer * *aContentViewer) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentViewer(aContentViewer); } \
  NS_SCRIPTABLE NS_IMETHOD GetChromeEventHandler(nsIDOMEventTarget * *aChromeEventHandler) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChromeEventHandler(aChromeEventHandler); } \
  NS_SCRIPTABLE NS_IMETHOD SetChromeEventHandler(nsIDOMEventTarget *aChromeEventHandler) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetChromeEventHandler(aChromeEventHandler); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllowPlugins(bool *aAllowPlugins) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllowPlugins(aAllowPlugins); } \
  NS_SCRIPTABLE NS_IMETHOD SetAllowPlugins(bool aAllowPlugins) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAllowPlugins(aAllowPlugins); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllowJavascript(bool *aAllowJavascript) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllowJavascript(aAllowJavascript); } \
  NS_SCRIPTABLE NS_IMETHOD SetAllowJavascript(bool aAllowJavascript) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAllowJavascript(aAllowJavascript); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllowMetaRedirects(bool *aAllowMetaRedirects) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllowMetaRedirects(aAllowMetaRedirects); } \
  NS_SCRIPTABLE NS_IMETHOD SetAllowMetaRedirects(bool aAllowMetaRedirects) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAllowMetaRedirects(aAllowMetaRedirects); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllowSubframes(bool *aAllowSubframes) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllowSubframes(aAllowSubframes); } \
  NS_SCRIPTABLE NS_IMETHOD SetAllowSubframes(bool aAllowSubframes) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAllowSubframes(aAllowSubframes); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllowImages(bool *aAllowImages) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllowImages(aAllowImages); } \
  NS_SCRIPTABLE NS_IMETHOD SetAllowImages(bool aAllowImages) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAllowImages(aAllowImages); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllowDNSPrefetch(bool *aAllowDNSPrefetch) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllowDNSPrefetch(aAllowDNSPrefetch); } \
  NS_SCRIPTABLE NS_IMETHOD SetAllowDNSPrefetch(bool aAllowDNSPrefetch) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAllowDNSPrefetch(aAllowDNSPrefetch); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllowWindowControl(bool *aAllowWindowControl) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllowWindowControl(aAllowWindowControl); } \
  NS_SCRIPTABLE NS_IMETHOD SetAllowWindowControl(bool aAllowWindowControl) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAllowWindowControl(aAllowWindowControl); } \
  NS_SCRIPTABLE NS_IMETHOD GetDocShellEnumerator(PRInt32 aItemType, PRInt32 aDirection, nsISimpleEnumerator * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocShellEnumerator(aItemType, aDirection, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAppType(PRUint32 *aAppType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAppType(aAppType); } \
  NS_SCRIPTABLE NS_IMETHOD SetAppType(PRUint32 aAppType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAppType(aAppType); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllowAuth(bool *aAllowAuth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllowAuth(aAllowAuth); } \
  NS_SCRIPTABLE NS_IMETHOD SetAllowAuth(bool aAllowAuth) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAllowAuth(aAllowAuth); } \
  NS_SCRIPTABLE NS_IMETHOD GetZoom(float *aZoom) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetZoom(aZoom); } \
  NS_SCRIPTABLE NS_IMETHOD SetZoom(float aZoom) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetZoom(aZoom); } \
  NS_SCRIPTABLE NS_IMETHOD GetMarginWidth(PRInt32 *aMarginWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMarginWidth(aMarginWidth); } \
  NS_SCRIPTABLE NS_IMETHOD SetMarginWidth(PRInt32 aMarginWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMarginWidth(aMarginWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetMarginHeight(PRInt32 *aMarginHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMarginHeight(aMarginHeight); } \
  NS_SCRIPTABLE NS_IMETHOD SetMarginHeight(PRInt32 aMarginHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMarginHeight(aMarginHeight); } \
  NS_SCRIPTABLE NS_IMETHOD TabToTreeOwner(bool forward, bool *tookFocus NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->TabToTreeOwner(forward, tookFocus); } \
  NS_SCRIPTABLE NS_IMETHOD GetBusyFlags(PRUint32 *aBusyFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBusyFlags(aBusyFlags); } \
  NS_SCRIPTABLE NS_IMETHOD GetLoadType(PRUint32 *aLoadType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLoadType(aLoadType); } \
  NS_SCRIPTABLE NS_IMETHOD SetLoadType(PRUint32 aLoadType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLoadType(aLoadType); } \
  NS_SCRIPTABLE NS_IMETHOD IsBeingDestroyed(bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsBeingDestroyed(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsExecutingOnLoadHandler(bool *aIsExecutingOnLoadHandler) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsExecutingOnLoadHandler(aIsExecutingOnLoadHandler); } \
  NS_SCRIPTABLE NS_IMETHOD GetLayoutHistoryState(nsILayoutHistoryState * *aLayoutHistoryState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLayoutHistoryState(aLayoutHistoryState); } \
  NS_SCRIPTABLE NS_IMETHOD SetLayoutHistoryState(nsILayoutHistoryState *aLayoutHistoryState) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLayoutHistoryState(aLayoutHistoryState); } \
  NS_SCRIPTABLE NS_IMETHOD GetShouldSaveLayoutState(bool *aShouldSaveLayoutState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetShouldSaveLayoutState(aShouldSaveLayoutState); } \
  NS_SCRIPTABLE NS_IMETHOD GetSecurityUI(nsISecureBrowserUI * *aSecurityUI) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSecurityUI(aSecurityUI); } \
  NS_SCRIPTABLE NS_IMETHOD SetSecurityUI(nsISecureBrowserUI *aSecurityUI) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSecurityUI(aSecurityUI); } \
  NS_SCRIPTABLE NS_IMETHOD SuspendRefreshURIs(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SuspendRefreshURIs(); } \
  NS_SCRIPTABLE NS_IMETHOD ResumeRefreshURIs(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ResumeRefreshURIs(); } \
  NS_SCRIPTABLE NS_IMETHOD BeginRestore(nsIContentViewer *viewer, bool top) { return !_to ? NS_ERROR_NULL_POINTER : _to->BeginRestore(viewer, top); } \
  NS_SCRIPTABLE NS_IMETHOD FinishRestore(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->FinishRestore(); } \
  NS_SCRIPTABLE NS_IMETHOD GetRestoringDocument(bool *aRestoringDocument) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRestoringDocument(aRestoringDocument); } \
  NS_SCRIPTABLE NS_IMETHOD GetUseErrorPages(bool *aUseErrorPages) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUseErrorPages(aUseErrorPages); } \
  NS_SCRIPTABLE NS_IMETHOD SetUseErrorPages(bool aUseErrorPages) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUseErrorPages(aUseErrorPages); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreviousTransIndex(PRInt32 *aPreviousTransIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPreviousTransIndex(aPreviousTransIndex); } \
  NS_SCRIPTABLE NS_IMETHOD GetLoadedTransIndex(PRInt32 *aLoadedTransIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLoadedTransIndex(aLoadedTransIndex); } \
  NS_SCRIPTABLE NS_IMETHOD HistoryPurged(PRInt32 numEntries) { return !_to ? NS_ERROR_NULL_POINTER : _to->HistoryPurged(numEntries); } \
  NS_SCRIPTABLE NS_IMETHOD GetSessionStorageForURI(nsIURI *uri, const nsAString & documentURI, nsIDOMStorage * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSessionStorageForURI(uri, documentURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSessionStorageForPrincipal(nsIPrincipal *principal, const nsAString & documentURI, bool create, nsIDOMStorage * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSessionStorageForPrincipal(principal, documentURI, create, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddSessionStorage(nsIPrincipal *principal, nsIDOMStorage *storage) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddSessionStorage(principal, storage); } \
  NS_SCRIPTABLE NS_IMETHOD CloneSessionStoragesTo(nsIDocShell *docShell) { return !_to ? NS_ERROR_NULL_POINTER : _to->CloneSessionStoragesTo(docShell); } \
  NS_SCRIPTABLE NS_IMETHOD ClearSessionStorages(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearSessionStorages(); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentDocumentChannel(nsIChannel * *aCurrentDocumentChannel) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentDocumentChannel(aCurrentDocumentChannel); } \
  NS_IMETHOD SetChildOffset(PRUint32 offset) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetChildOffset(offset); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsInUnload(bool *aIsInUnload) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsInUnload(aIsInUnload); } \
  NS_SCRIPTABLE NS_IMETHOD GetChannelIsUnsafe(bool *aChannelIsUnsafe) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChannelIsUnsafe(aChannelIsUnsafe); } \
  NS_IMETHOD_(void) DetachEditorFromWindow(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->DetachEditorFromWindow(); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsOffScreenBrowser(bool *aIsOffScreenBrowser) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsOffScreenBrowser(aIsOffScreenBrowser); } \
  NS_SCRIPTABLE NS_IMETHOD SetIsOffScreenBrowser(bool aIsOffScreenBrowser) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsOffScreenBrowser(aIsOffScreenBrowser); } \
  NS_SCRIPTABLE NS_IMETHOD GetPrintPreview(nsIWebBrowserPrint * *aPrintPreview) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrintPreview(aPrintPreview); } \
  NS_SCRIPTABLE NS_IMETHOD GetCanExecuteScripts(bool *aCanExecuteScripts) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCanExecuteScripts(aCanExecuteScripts); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsActive(bool *aIsActive) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsActive(aIsActive); } \
  NS_SCRIPTABLE NS_IMETHOD SetIsActive(bool aIsActive) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsActive(aIsActive); } \
  NS_SCRIPTABLE NS_IMETHOD GetHistoryID(PRUint64 *aHistoryID) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHistoryID(aHistoryID); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsAppTab(bool *aIsAppTab) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsAppTab(aIsAppTab); } \
  NS_SCRIPTABLE NS_IMETHOD SetIsAppTab(bool aIsAppTab) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsAppTab(aIsAppTab); } \
  NS_SCRIPTABLE NS_IMETHOD CreateAboutBlankContentViewer(nsIPrincipal *aPrincipal) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateAboutBlankContentViewer(aPrincipal); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharset(char * *aCharset) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCharset(aCharset); } \
  NS_SCRIPTABLE NS_IMETHOD SetCharset(const char * aCharset) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCharset(aCharset); } \
  NS_SCRIPTABLE NS_IMETHOD GetForcedCharset(nsIAtom * *aForcedCharset) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetForcedCharset(aForcedCharset); } \
  NS_SCRIPTABLE NS_IMETHOD SetForcedCharset(nsIAtom *aForcedCharset) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetForcedCharset(aForcedCharset); } \
  NS_SCRIPTABLE NS_IMETHOD GetParentCharset(nsIAtom * *aParentCharset) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParentCharset(aParentCharset); } \
  NS_SCRIPTABLE NS_IMETHOD SetParentCharset(nsIAtom *aParentCharset) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetParentCharset(aParentCharset); } \
  NS_SCRIPTABLE NS_IMETHOD GetParentCharsetSource(PRInt32 *aParentCharsetSource) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParentCharsetSource(aParentCharsetSource); } \
  NS_SCRIPTABLE NS_IMETHOD SetParentCharsetSource(PRInt32 aParentCharsetSource) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetParentCharsetSource(aParentCharsetSource); } \
  NS_SCRIPTABLE NS_IMETHOD AddWeakPrivacyTransitionObserver(nsIPrivacyTransitionObserver *obs) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddWeakPrivacyTransitionObserver(obs); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsBrowserFrame(bool *aIsBrowserFrame) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsBrowserFrame(aIsBrowserFrame); } \
  NS_SCRIPTABLE NS_IMETHOD SetIsBrowserFrame(bool aIsBrowserFrame) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsBrowserFrame(aIsBrowserFrame); } \
  NS_SCRIPTABLE NS_IMETHOD GetContainedInBrowserFrame(bool *aContainedInBrowserFrame) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContainedInBrowserFrame(aContainedInBrowserFrame); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDocShell : public nsIDocShell
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOCSHELL

  nsDocShell();

private:
  ~nsDocShell();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDocShell, nsIDocShell)

nsDocShell::nsDocShell()
{
  /* member initializers and constructor code */
}

nsDocShell::~nsDocShell()
{
  /* destructor code */
}

/* [noscript] void loadURI (in nsIURI uri, in nsIDocShellLoadInfo loadInfo, in unsigned long aLoadFlags, in boolean firstParty); */
NS_IMETHODIMP nsDocShell::LoadURI(nsIURI *uri, nsIDocShellLoadInfo *loadInfo, PRUint32 aLoadFlags, bool firstParty)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void loadStream (in nsIInputStream aStream, in nsIURI aURI, in ACString aContentType, in ACString aContentCharset, in nsIDocShellLoadInfo aLoadInfo); */
NS_IMETHODIMP nsDocShell::LoadStream(nsIInputStream *aStream, nsIURI *aURI, const nsACString & aContentType, const nsACString & aContentCharset, nsIDocShellLoadInfo *aLoadInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void internalLoad (in nsIURI aURI, in nsIURI aReferrer, in nsISupports aOwner, in PRUint32 aFlags, in wstring aWindowTarget, in string aTypeHint, in nsIInputStream aPostDataStream, in nsIInputStream aHeadersStream, in unsigned long aLoadFlags, in nsISHEntry aSHEntry, in boolean firstParty, out nsIDocShell aDocShell, out nsIRequest aRequest); */
NS_IMETHODIMP nsDocShell::InternalLoad(nsIURI *aURI, nsIURI *aReferrer, nsISupports *aOwner, PRUint32 aFlags, const PRUnichar * aWindowTarget, const char * aTypeHint, nsIInputStream *aPostDataStream, nsIInputStream *aHeadersStream, PRUint32 aLoadFlags, nsISHEntry *aSHEntry, bool firstParty, nsIDocShell * *aDocShell NS_OUTPARAM, nsIRequest * *aRequest NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void addState (in nsIVariant aData, in DOMString aTitle, in DOMString aURL, in boolean aReplace); */
NS_IMETHODIMP nsDocShell::AddState(nsIVariant *aData, const nsAString & aTitle, const nsAString & aURL, bool aReplace, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void createLoadInfo (out nsIDocShellLoadInfo loadInfo); */
NS_IMETHODIMP nsDocShell::CreateLoadInfo(nsIDocShellLoadInfo * *loadInfo NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void prepareForNewContentModel (); */
NS_IMETHODIMP nsDocShell::PrepareForNewContentModel()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCurrentURI (in nsIURI aURI); */
NS_IMETHODIMP nsDocShell::SetCurrentURI(nsIURI *aURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void firePageHideNotification (in boolean isUnload); */
NS_IMETHODIMP nsDocShell::FirePageHideNotification(bool isUnload)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute nsPresContext presContext; */
NS_IMETHODIMP nsDocShell::GetPresContext(nsPresContext **aPresContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute nsIPresShell presShell; */
NS_IMETHODIMP nsDocShell::GetPresShell(nsIPresShell **aPresShell)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute nsIPresShell eldestPresShell; */
NS_IMETHODIMP nsDocShell::GetEldestPresShell(nsIPresShell **aEldestPresShell)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIContentViewer contentViewer; */
NS_IMETHODIMP nsDocShell::GetContentViewer(nsIContentViewer * *aContentViewer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMEventTarget chromeEventHandler; */
NS_IMETHODIMP nsDocShell::GetChromeEventHandler(nsIDOMEventTarget * *aChromeEventHandler)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetChromeEventHandler(nsIDOMEventTarget *aChromeEventHandler)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean allowPlugins; */
NS_IMETHODIMP nsDocShell::GetAllowPlugins(bool *aAllowPlugins)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetAllowPlugins(bool aAllowPlugins)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean allowJavascript; */
NS_IMETHODIMP nsDocShell::GetAllowJavascript(bool *aAllowJavascript)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetAllowJavascript(bool aAllowJavascript)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean allowMetaRedirects; */
NS_IMETHODIMP nsDocShell::GetAllowMetaRedirects(bool *aAllowMetaRedirects)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetAllowMetaRedirects(bool aAllowMetaRedirects)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean allowSubframes; */
NS_IMETHODIMP nsDocShell::GetAllowSubframes(bool *aAllowSubframes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetAllowSubframes(bool aAllowSubframes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean allowImages; */
NS_IMETHODIMP nsDocShell::GetAllowImages(bool *aAllowImages)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetAllowImages(bool aAllowImages)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean allowDNSPrefetch; */
NS_IMETHODIMP nsDocShell::GetAllowDNSPrefetch(bool *aAllowDNSPrefetch)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetAllowDNSPrefetch(bool aAllowDNSPrefetch)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean allowWindowControl; */
NS_IMETHODIMP nsDocShell::GetAllowWindowControl(bool *aAllowWindowControl)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetAllowWindowControl(bool aAllowWindowControl)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISimpleEnumerator getDocShellEnumerator (in long aItemType, in long aDirection); */
NS_IMETHODIMP nsDocShell::GetDocShellEnumerator(PRInt32 aItemType, PRInt32 aDirection, nsISimpleEnumerator * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long appType; */
NS_IMETHODIMP nsDocShell::GetAppType(PRUint32 *aAppType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetAppType(PRUint32 aAppType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean allowAuth; */
NS_IMETHODIMP nsDocShell::GetAllowAuth(bool *aAllowAuth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetAllowAuth(bool aAllowAuth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float zoom; */
NS_IMETHODIMP nsDocShell::GetZoom(float *aZoom)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetZoom(float aZoom)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long marginWidth; */
NS_IMETHODIMP nsDocShell::GetMarginWidth(PRInt32 *aMarginWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetMarginWidth(PRInt32 aMarginWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long marginHeight; */
NS_IMETHODIMP nsDocShell::GetMarginHeight(PRInt32 *aMarginHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetMarginHeight(PRInt32 aMarginHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void tabToTreeOwner (in boolean forward, out boolean tookFocus); */
NS_IMETHODIMP nsDocShell::TabToTreeOwner(bool forward, bool *tookFocus NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long busyFlags; */
NS_IMETHODIMP nsDocShell::GetBusyFlags(PRUint32 *aBusyFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long loadType; */
NS_IMETHODIMP nsDocShell::GetLoadType(PRUint32 *aLoadType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetLoadType(PRUint32 aLoadType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isBeingDestroyed (); */
NS_IMETHODIMP nsDocShell::IsBeingDestroyed(bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isExecutingOnLoadHandler; */
NS_IMETHODIMP nsDocShell::GetIsExecutingOnLoadHandler(bool *aIsExecutingOnLoadHandler)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsILayoutHistoryState layoutHistoryState; */
NS_IMETHODIMP nsDocShell::GetLayoutHistoryState(nsILayoutHistoryState * *aLayoutHistoryState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetLayoutHistoryState(nsILayoutHistoryState *aLayoutHistoryState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean shouldSaveLayoutState; */
NS_IMETHODIMP nsDocShell::GetShouldSaveLayoutState(bool *aShouldSaveLayoutState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISecureBrowserUI securityUI; */
NS_IMETHODIMP nsDocShell::GetSecurityUI(nsISecureBrowserUI * *aSecurityUI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetSecurityUI(nsISecureBrowserUI *aSecurityUI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void suspendRefreshURIs (); */
NS_IMETHODIMP nsDocShell::SuspendRefreshURIs()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void resumeRefreshURIs (); */
NS_IMETHODIMP nsDocShell::ResumeRefreshURIs()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void beginRestore (in nsIContentViewer viewer, in boolean top); */
NS_IMETHODIMP nsDocShell::BeginRestore(nsIContentViewer *viewer, bool top)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void finishRestore (); */
NS_IMETHODIMP nsDocShell::FinishRestore()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean restoringDocument; */
NS_IMETHODIMP nsDocShell::GetRestoringDocument(bool *aRestoringDocument)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean useErrorPages; */
NS_IMETHODIMP nsDocShell::GetUseErrorPages(bool *aUseErrorPages)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetUseErrorPages(bool aUseErrorPages)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long previousTransIndex; */
NS_IMETHODIMP nsDocShell::GetPreviousTransIndex(PRInt32 *aPreviousTransIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long loadedTransIndex; */
NS_IMETHODIMP nsDocShell::GetLoadedTransIndex(PRInt32 *aLoadedTransIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void historyPurged (in long numEntries); */
NS_IMETHODIMP nsDocShell::HistoryPurged(PRInt32 numEntries)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMStorage getSessionStorageForURI (in nsIURI uri, in DOMString documentURI); */
NS_IMETHODIMP nsDocShell::GetSessionStorageForURI(nsIURI *uri, const nsAString & documentURI, nsIDOMStorage * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMStorage getSessionStorageForPrincipal (in nsIPrincipal principal, in DOMString documentURI, in boolean create); */
NS_IMETHODIMP nsDocShell::GetSessionStorageForPrincipal(nsIPrincipal *principal, const nsAString & documentURI, bool create, nsIDOMStorage * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addSessionStorage (in nsIPrincipal principal, in nsIDOMStorage storage); */
NS_IMETHODIMP nsDocShell::AddSessionStorage(nsIPrincipal *principal, nsIDOMStorage *storage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cloneSessionStoragesTo (in nsIDocShell docShell); */
NS_IMETHODIMP nsDocShell::CloneSessionStoragesTo(nsIDocShell *docShell)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearSessionStorages (); */
NS_IMETHODIMP nsDocShell::ClearSessionStorages()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIChannel currentDocumentChannel; */
NS_IMETHODIMP nsDocShell::GetCurrentDocumentChannel(nsIChannel * *aCurrentDocumentChannel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void setChildOffset (in unsigned long offset); */
NS_IMETHODIMP nsDocShell::SetChildOffset(PRUint32 offset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isInUnload; */
NS_IMETHODIMP nsDocShell::GetIsInUnload(bool *aIsInUnload)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean channelIsUnsafe; */
NS_IMETHODIMP nsDocShell::GetChannelIsUnsafe(bool *aChannelIsUnsafe)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] void DetachEditorFromWindow (); */
NS_IMETHODIMP_(void) nsDocShell::DetachEditorFromWindow()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean isOffScreenBrowser; */
NS_IMETHODIMP nsDocShell::GetIsOffScreenBrowser(bool *aIsOffScreenBrowser)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetIsOffScreenBrowser(bool aIsOffScreenBrowser)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIWebBrowserPrint printPreview; */
NS_IMETHODIMP nsDocShell::GetPrintPreview(nsIWebBrowserPrint * *aPrintPreview)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean canExecuteScripts; */
NS_IMETHODIMP nsDocShell::GetCanExecuteScripts(bool *aCanExecuteScripts)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean isActive; */
NS_IMETHODIMP nsDocShell::GetIsActive(bool *aIsActive)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetIsActive(bool aIsActive)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long long historyID; */
NS_IMETHODIMP nsDocShell::GetHistoryID(PRUint64 *aHistoryID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean isAppTab; */
NS_IMETHODIMP nsDocShell::GetIsAppTab(bool *aIsAppTab)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetIsAppTab(bool aIsAppTab)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void createAboutBlankContentViewer (in nsIPrincipal aPrincipal); */
NS_IMETHODIMP nsDocShell::CreateAboutBlankContentViewer(nsIPrincipal *aPrincipal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string charset; */
NS_IMETHODIMP nsDocShell::GetCharset(char * *aCharset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetCharset(const char * aCharset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIAtom forcedCharset; */
NS_IMETHODIMP nsDocShell::GetForcedCharset(nsIAtom * *aForcedCharset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetForcedCharset(nsIAtom *aForcedCharset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIAtom parentCharset; */
NS_IMETHODIMP nsDocShell::GetParentCharset(nsIAtom * *aParentCharset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetParentCharset(nsIAtom *aParentCharset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute PRInt32 parentCharsetSource; */
NS_IMETHODIMP nsDocShell::GetParentCharsetSource(PRInt32 *aParentCharsetSource)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetParentCharsetSource(PRInt32 aParentCharsetSource)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addWeakPrivacyTransitionObserver (in nsIPrivacyTransitionObserver obs); */
NS_IMETHODIMP nsDocShell::AddWeakPrivacyTransitionObserver(nsIPrivacyTransitionObserver *obs)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute bool isBrowserFrame; */
NS_IMETHODIMP nsDocShell::GetIsBrowserFrame(bool *aIsBrowserFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocShell::SetIsBrowserFrame(bool aIsBrowserFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute bool containedInBrowserFrame; */
NS_IMETHODIMP nsDocShell::GetContainedInBrowserFrame(bool *aContainedInBrowserFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDocShell_h__ */
