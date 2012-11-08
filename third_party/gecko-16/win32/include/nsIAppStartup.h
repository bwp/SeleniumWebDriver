/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/toolkit/components/startup/public/nsIAppStartup.idl
 */

#ifndef __gen_nsIAppStartup_h__
#define __gen_nsIAppStartup_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsICmdLineService; /* forward declaration */


/* starting interface:    nsIAppStartup */
#define NS_IAPPSTARTUP_IID_STR "50c4194b-61c6-4292-963f-6e1a8e11c9d3"

#define NS_IAPPSTARTUP_IID \
  {0x50c4194b, 0x61c6, 0x4292, \
    { 0x96, 0x3f, 0x6e, 0x1a, 0x8e, 0x11, 0xc9, 0xd3 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIAppStartup : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IAPPSTARTUP_IID)

  /* void createHiddenWindow (); */
  NS_SCRIPTABLE NS_IMETHOD CreateHiddenWindow(void) = 0;

  /* void destroyHiddenWindow (); */
  NS_SCRIPTABLE NS_IMETHOD DestroyHiddenWindow(void) = 0;

  /* void run (); */
  NS_SCRIPTABLE NS_IMETHOD Run(void) = 0;

  /* void enterLastWindowClosingSurvivalArea (); */
  NS_SCRIPTABLE NS_IMETHOD EnterLastWindowClosingSurvivalArea(void) = 0;

  /* void exitLastWindowClosingSurvivalArea (); */
  NS_SCRIPTABLE NS_IMETHOD ExitLastWindowClosingSurvivalArea(void) = 0;

  /* readonly attribute boolean automaticSafeModeNecessary; */
  NS_SCRIPTABLE NS_IMETHOD GetAutomaticSafeModeNecessary(bool *aAutomaticSafeModeNecessary) = 0;

  /* void restartInSafeMode (in PRUint32 aQuitMode); */
  NS_SCRIPTABLE NS_IMETHOD RestartInSafeMode(PRUint32 aQuitMode) = 0;

  /* bool trackStartupCrashBegin (); */
  NS_SCRIPTABLE NS_IMETHOD TrackStartupCrashBegin(bool *_retval NS_OUTPARAM) = 0;

  /* void trackStartupCrashEnd (); */
  NS_SCRIPTABLE NS_IMETHOD TrackStartupCrashEnd(void) = 0;

  enum {
    eConsiderQuit = 1U,
    eAttemptQuit = 2U,
    eForceQuit = 3U,
    eRestart = 16U,
    eRestarti386 = 32U,
    eRestartx86_64 = 64U
  };

  /* void quit (in PRUint32 aMode); */
  NS_SCRIPTABLE NS_IMETHOD Quit(PRUint32 aMode) = 0;

  /* readonly attribute boolean shuttingDown; */
  NS_SCRIPTABLE NS_IMETHOD GetShuttingDown(bool *aShuttingDown) = 0;

  /* [implicit_jscontext] jsval getStartupInfo (); */
  NS_SCRIPTABLE NS_IMETHOD GetStartupInfo(JSContext* cx, JS::Value *_retval NS_OUTPARAM) = 0;

  /* attribute boolean interrupted; */
  NS_SCRIPTABLE NS_IMETHOD GetInterrupted(bool *aInterrupted) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetInterrupted(bool aInterrupted) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAppStartup, NS_IAPPSTARTUP_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIAPPSTARTUP \
  NS_SCRIPTABLE NS_IMETHOD CreateHiddenWindow(void); \
  NS_SCRIPTABLE NS_IMETHOD DestroyHiddenWindow(void); \
  NS_SCRIPTABLE NS_IMETHOD Run(void); \
  NS_SCRIPTABLE NS_IMETHOD EnterLastWindowClosingSurvivalArea(void); \
  NS_SCRIPTABLE NS_IMETHOD ExitLastWindowClosingSurvivalArea(void); \
  NS_SCRIPTABLE NS_IMETHOD GetAutomaticSafeModeNecessary(bool *aAutomaticSafeModeNecessary); \
  NS_SCRIPTABLE NS_IMETHOD RestartInSafeMode(PRUint32 aQuitMode); \
  NS_SCRIPTABLE NS_IMETHOD TrackStartupCrashBegin(bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD TrackStartupCrashEnd(void); \
  NS_SCRIPTABLE NS_IMETHOD Quit(PRUint32 aMode); \
  NS_SCRIPTABLE NS_IMETHOD GetShuttingDown(bool *aShuttingDown); \
  NS_SCRIPTABLE NS_IMETHOD GetStartupInfo(JSContext* cx, JS::Value *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetInterrupted(bool *aInterrupted); \
  NS_SCRIPTABLE NS_IMETHOD SetInterrupted(bool aInterrupted); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIAPPSTARTUP(_to) \
  NS_SCRIPTABLE NS_IMETHOD CreateHiddenWindow(void) { return _to CreateHiddenWindow(); } \
  NS_SCRIPTABLE NS_IMETHOD DestroyHiddenWindow(void) { return _to DestroyHiddenWindow(); } \
  NS_SCRIPTABLE NS_IMETHOD Run(void) { return _to Run(); } \
  NS_SCRIPTABLE NS_IMETHOD EnterLastWindowClosingSurvivalArea(void) { return _to EnterLastWindowClosingSurvivalArea(); } \
  NS_SCRIPTABLE NS_IMETHOD ExitLastWindowClosingSurvivalArea(void) { return _to ExitLastWindowClosingSurvivalArea(); } \
  NS_SCRIPTABLE NS_IMETHOD GetAutomaticSafeModeNecessary(bool *aAutomaticSafeModeNecessary) { return _to GetAutomaticSafeModeNecessary(aAutomaticSafeModeNecessary); } \
  NS_SCRIPTABLE NS_IMETHOD RestartInSafeMode(PRUint32 aQuitMode) { return _to RestartInSafeMode(aQuitMode); } \
  NS_SCRIPTABLE NS_IMETHOD TrackStartupCrashBegin(bool *_retval NS_OUTPARAM) { return _to TrackStartupCrashBegin(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD TrackStartupCrashEnd(void) { return _to TrackStartupCrashEnd(); } \
  NS_SCRIPTABLE NS_IMETHOD Quit(PRUint32 aMode) { return _to Quit(aMode); } \
  NS_SCRIPTABLE NS_IMETHOD GetShuttingDown(bool *aShuttingDown) { return _to GetShuttingDown(aShuttingDown); } \
  NS_SCRIPTABLE NS_IMETHOD GetStartupInfo(JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return _to GetStartupInfo(cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInterrupted(bool *aInterrupted) { return _to GetInterrupted(aInterrupted); } \
  NS_SCRIPTABLE NS_IMETHOD SetInterrupted(bool aInterrupted) { return _to SetInterrupted(aInterrupted); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIAPPSTARTUP(_to) \
  NS_SCRIPTABLE NS_IMETHOD CreateHiddenWindow(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateHiddenWindow(); } \
  NS_SCRIPTABLE NS_IMETHOD DestroyHiddenWindow(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->DestroyHiddenWindow(); } \
  NS_SCRIPTABLE NS_IMETHOD Run(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Run(); } \
  NS_SCRIPTABLE NS_IMETHOD EnterLastWindowClosingSurvivalArea(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnterLastWindowClosingSurvivalArea(); } \
  NS_SCRIPTABLE NS_IMETHOD ExitLastWindowClosingSurvivalArea(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ExitLastWindowClosingSurvivalArea(); } \
  NS_SCRIPTABLE NS_IMETHOD GetAutomaticSafeModeNecessary(bool *aAutomaticSafeModeNecessary) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAutomaticSafeModeNecessary(aAutomaticSafeModeNecessary); } \
  NS_SCRIPTABLE NS_IMETHOD RestartInSafeMode(PRUint32 aQuitMode) { return !_to ? NS_ERROR_NULL_POINTER : _to->RestartInSafeMode(aQuitMode); } \
  NS_SCRIPTABLE NS_IMETHOD TrackStartupCrashBegin(bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->TrackStartupCrashBegin(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD TrackStartupCrashEnd(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->TrackStartupCrashEnd(); } \
  NS_SCRIPTABLE NS_IMETHOD Quit(PRUint32 aMode) { return !_to ? NS_ERROR_NULL_POINTER : _to->Quit(aMode); } \
  NS_SCRIPTABLE NS_IMETHOD GetShuttingDown(bool *aShuttingDown) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetShuttingDown(aShuttingDown); } \
  NS_SCRIPTABLE NS_IMETHOD GetStartupInfo(JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStartupInfo(cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInterrupted(bool *aInterrupted) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInterrupted(aInterrupted); } \
  NS_SCRIPTABLE NS_IMETHOD SetInterrupted(bool aInterrupted) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInterrupted(aInterrupted); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAppStartup : public nsIAppStartup
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIAPPSTARTUP

  nsAppStartup();

private:
  ~nsAppStartup();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsAppStartup, nsIAppStartup)

nsAppStartup::nsAppStartup()
{
  /* member initializers and constructor code */
}

nsAppStartup::~nsAppStartup()
{
  /* destructor code */
}

/* void createHiddenWindow (); */
NS_IMETHODIMP nsAppStartup::CreateHiddenWindow()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void destroyHiddenWindow (); */
NS_IMETHODIMP nsAppStartup::DestroyHiddenWindow()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void run (); */
NS_IMETHODIMP nsAppStartup::Run()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void enterLastWindowClosingSurvivalArea (); */
NS_IMETHODIMP nsAppStartup::EnterLastWindowClosingSurvivalArea()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void exitLastWindowClosingSurvivalArea (); */
NS_IMETHODIMP nsAppStartup::ExitLastWindowClosingSurvivalArea()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean automaticSafeModeNecessary; */
NS_IMETHODIMP nsAppStartup::GetAutomaticSafeModeNecessary(bool *aAutomaticSafeModeNecessary)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void restartInSafeMode (in PRUint32 aQuitMode); */
NS_IMETHODIMP nsAppStartup::RestartInSafeMode(PRUint32 aQuitMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* bool trackStartupCrashBegin (); */
NS_IMETHODIMP nsAppStartup::TrackStartupCrashBegin(bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void trackStartupCrashEnd (); */
NS_IMETHODIMP nsAppStartup::TrackStartupCrashEnd()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void quit (in PRUint32 aMode); */
NS_IMETHODIMP nsAppStartup::Quit(PRUint32 aMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean shuttingDown; */
NS_IMETHODIMP nsAppStartup::GetShuttingDown(bool *aShuttingDown)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] jsval getStartupInfo (); */
NS_IMETHODIMP nsAppStartup::GetStartupInfo(JSContext* cx, JS::Value *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean interrupted; */
NS_IMETHODIMP nsAppStartup::GetInterrupted(bool *aInterrupted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsAppStartup::SetInterrupted(bool aInterrupted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

/**
 * This success code may be returned by nsIAppStartup::Run to indicate that the
 * application should be restarted.  This condition corresponds to the case in
 * which nsIAppStartup::Quit was called with the eRestart flag.
 */
#define NS_SUCCESS_RESTART_APP \
    NS_ERROR_GENERATE_SUCCESS(NS_ERROR_MODULE_GENERAL, 1)

#endif /* __gen_nsIAppStartup_h__ */
