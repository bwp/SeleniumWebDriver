/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/xpfe/appshell/public/nsIXULWindow.idl
 */

#ifndef __gen_nsIXULWindow_h__
#define __gen_nsIXULWindow_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDocShell; /* forward declaration */

class nsIDocShellTreeItem; /* forward declaration */

class nsIXULBrowserWindow; /* forward declaration */


/* starting interface:    nsIXULWindow */
#define NS_IXULWINDOW_IID_STR "ccf9e98a-e442-4061-9f74-94539dd9fe9e"

#define NS_IXULWINDOW_IID \
  {0xccf9e98a, 0xe442, 0x4061, \
    { 0x9f, 0x74, 0x94, 0x53, 0x9d, 0xd9, 0xfe, 0x9e }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIXULWindow : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXULWINDOW_IID)

  /* readonly attribute nsIDocShell docShell; */
  NS_SCRIPTABLE NS_IMETHOD GetDocShell(nsIDocShell * *aDocShell) = 0;

  /* attribute boolean intrinsicallySized; */
  NS_SCRIPTABLE NS_IMETHOD GetIntrinsicallySized(bool *aIntrinsicallySized) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetIntrinsicallySized(bool aIntrinsicallySized) = 0;

  /* readonly attribute nsIDocShellTreeItem primaryContentShell; */
  NS_SCRIPTABLE NS_IMETHOD GetPrimaryContentShell(nsIDocShellTreeItem * *aPrimaryContentShell) = 0;

  /* nsIDocShellTreeItem getContentShellById (in wstring ID); */
  NS_SCRIPTABLE NS_IMETHOD GetContentShellById(const PRUnichar * ID, nsIDocShellTreeItem * *_retval NS_OUTPARAM) = 0;

  /* void addChildWindow (in nsIXULWindow aChild); */
  NS_SCRIPTABLE NS_IMETHOD AddChildWindow(nsIXULWindow *aChild) = 0;

  /* void removeChildWindow (in nsIXULWindow aChild); */
  NS_SCRIPTABLE NS_IMETHOD RemoveChildWindow(nsIXULWindow *aChild) = 0;

  /* void center (in nsIXULWindow aRelative, in boolean aScreen, in boolean aAlert); */
  NS_SCRIPTABLE NS_IMETHOD Center(nsIXULWindow *aRelative, bool aScreen, bool aAlert) = 0;

  /* void showModal (); */
  NS_SCRIPTABLE NS_IMETHOD ShowModal(void) = 0;

  enum {
    lowestZ = 0U,
    loweredZ = 4U,
    normalZ = 5U,
    raisedZ = 6U,
    highestZ = 9U
  };

  /* attribute unsigned long zLevel; */
  NS_SCRIPTABLE NS_IMETHOD GetZLevel(PRUint32 *aZLevel) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetZLevel(PRUint32 aZLevel) = 0;

  /* attribute PRUint32 contextFlags; */
  NS_SCRIPTABLE NS_IMETHOD GetContextFlags(PRUint32 *aContextFlags) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetContextFlags(PRUint32 aContextFlags) = 0;

  /* attribute PRUint32 chromeFlags; */
  NS_SCRIPTABLE NS_IMETHOD GetChromeFlags(PRUint32 *aChromeFlags) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetChromeFlags(PRUint32 aChromeFlags) = 0;

  /* void assumeChromeFlagsAreFrozen (); */
  NS_SCRIPTABLE NS_IMETHOD AssumeChromeFlagsAreFrozen(void) = 0;

  /* nsIXULWindow createNewWindow (in PRInt32 aChromeFlags); */
  NS_SCRIPTABLE NS_IMETHOD CreateNewWindow(PRInt32 aChromeFlags, nsIXULWindow * *_retval NS_OUTPARAM) = 0;

  /* attribute nsIXULBrowserWindow XULBrowserWindow; */
  NS_SCRIPTABLE NS_IMETHOD GetXULBrowserWindow(nsIXULBrowserWindow * *aXULBrowserWindow) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetXULBrowserWindow(nsIXULBrowserWindow *aXULBrowserWindow) = 0;

  /* [noscript] void applyChromeFlags (); */
  NS_IMETHOD ApplyChromeFlags(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXULWindow, NS_IXULWINDOW_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXULWINDOW \
  NS_SCRIPTABLE NS_IMETHOD GetDocShell(nsIDocShell * *aDocShell); \
  NS_SCRIPTABLE NS_IMETHOD GetIntrinsicallySized(bool *aIntrinsicallySized); \
  NS_SCRIPTABLE NS_IMETHOD SetIntrinsicallySized(bool aIntrinsicallySized); \
  NS_SCRIPTABLE NS_IMETHOD GetPrimaryContentShell(nsIDocShellTreeItem * *aPrimaryContentShell); \
  NS_SCRIPTABLE NS_IMETHOD GetContentShellById(const PRUnichar * ID, nsIDocShellTreeItem * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AddChildWindow(nsIXULWindow *aChild); \
  NS_SCRIPTABLE NS_IMETHOD RemoveChildWindow(nsIXULWindow *aChild); \
  NS_SCRIPTABLE NS_IMETHOD Center(nsIXULWindow *aRelative, bool aScreen, bool aAlert); \
  NS_SCRIPTABLE NS_IMETHOD ShowModal(void); \
  NS_SCRIPTABLE NS_IMETHOD GetZLevel(PRUint32 *aZLevel); \
  NS_SCRIPTABLE NS_IMETHOD SetZLevel(PRUint32 aZLevel); \
  NS_SCRIPTABLE NS_IMETHOD GetContextFlags(PRUint32 *aContextFlags); \
  NS_SCRIPTABLE NS_IMETHOD SetContextFlags(PRUint32 aContextFlags); \
  NS_SCRIPTABLE NS_IMETHOD GetChromeFlags(PRUint32 *aChromeFlags); \
  NS_SCRIPTABLE NS_IMETHOD SetChromeFlags(PRUint32 aChromeFlags); \
  NS_SCRIPTABLE NS_IMETHOD AssumeChromeFlagsAreFrozen(void); \
  NS_SCRIPTABLE NS_IMETHOD CreateNewWindow(PRInt32 aChromeFlags, nsIXULWindow * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetXULBrowserWindow(nsIXULBrowserWindow * *aXULBrowserWindow); \
  NS_SCRIPTABLE NS_IMETHOD SetXULBrowserWindow(nsIXULBrowserWindow *aXULBrowserWindow); \
  NS_IMETHOD ApplyChromeFlags(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXULWINDOW(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDocShell(nsIDocShell * *aDocShell) { return _to GetDocShell(aDocShell); } \
  NS_SCRIPTABLE NS_IMETHOD GetIntrinsicallySized(bool *aIntrinsicallySized) { return _to GetIntrinsicallySized(aIntrinsicallySized); } \
  NS_SCRIPTABLE NS_IMETHOD SetIntrinsicallySized(bool aIntrinsicallySized) { return _to SetIntrinsicallySized(aIntrinsicallySized); } \
  NS_SCRIPTABLE NS_IMETHOD GetPrimaryContentShell(nsIDocShellTreeItem * *aPrimaryContentShell) { return _to GetPrimaryContentShell(aPrimaryContentShell); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentShellById(const PRUnichar * ID, nsIDocShellTreeItem * *_retval NS_OUTPARAM) { return _to GetContentShellById(ID, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddChildWindow(nsIXULWindow *aChild) { return _to AddChildWindow(aChild); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveChildWindow(nsIXULWindow *aChild) { return _to RemoveChildWindow(aChild); } \
  NS_SCRIPTABLE NS_IMETHOD Center(nsIXULWindow *aRelative, bool aScreen, bool aAlert) { return _to Center(aRelative, aScreen, aAlert); } \
  NS_SCRIPTABLE NS_IMETHOD ShowModal(void) { return _to ShowModal(); } \
  NS_SCRIPTABLE NS_IMETHOD GetZLevel(PRUint32 *aZLevel) { return _to GetZLevel(aZLevel); } \
  NS_SCRIPTABLE NS_IMETHOD SetZLevel(PRUint32 aZLevel) { return _to SetZLevel(aZLevel); } \
  NS_SCRIPTABLE NS_IMETHOD GetContextFlags(PRUint32 *aContextFlags) { return _to GetContextFlags(aContextFlags); } \
  NS_SCRIPTABLE NS_IMETHOD SetContextFlags(PRUint32 aContextFlags) { return _to SetContextFlags(aContextFlags); } \
  NS_SCRIPTABLE NS_IMETHOD GetChromeFlags(PRUint32 *aChromeFlags) { return _to GetChromeFlags(aChromeFlags); } \
  NS_SCRIPTABLE NS_IMETHOD SetChromeFlags(PRUint32 aChromeFlags) { return _to SetChromeFlags(aChromeFlags); } \
  NS_SCRIPTABLE NS_IMETHOD AssumeChromeFlagsAreFrozen(void) { return _to AssumeChromeFlagsAreFrozen(); } \
  NS_SCRIPTABLE NS_IMETHOD CreateNewWindow(PRInt32 aChromeFlags, nsIXULWindow * *_retval NS_OUTPARAM) { return _to CreateNewWindow(aChromeFlags, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetXULBrowserWindow(nsIXULBrowserWindow * *aXULBrowserWindow) { return _to GetXULBrowserWindow(aXULBrowserWindow); } \
  NS_SCRIPTABLE NS_IMETHOD SetXULBrowserWindow(nsIXULBrowserWindow *aXULBrowserWindow) { return _to SetXULBrowserWindow(aXULBrowserWindow); } \
  NS_IMETHOD ApplyChromeFlags(void) { return _to ApplyChromeFlags(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXULWINDOW(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDocShell(nsIDocShell * *aDocShell) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocShell(aDocShell); } \
  NS_SCRIPTABLE NS_IMETHOD GetIntrinsicallySized(bool *aIntrinsicallySized) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIntrinsicallySized(aIntrinsicallySized); } \
  NS_SCRIPTABLE NS_IMETHOD SetIntrinsicallySized(bool aIntrinsicallySized) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIntrinsicallySized(aIntrinsicallySized); } \
  NS_SCRIPTABLE NS_IMETHOD GetPrimaryContentShell(nsIDocShellTreeItem * *aPrimaryContentShell) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrimaryContentShell(aPrimaryContentShell); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentShellById(const PRUnichar * ID, nsIDocShellTreeItem * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentShellById(ID, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddChildWindow(nsIXULWindow *aChild) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddChildWindow(aChild); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveChildWindow(nsIXULWindow *aChild) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveChildWindow(aChild); } \
  NS_SCRIPTABLE NS_IMETHOD Center(nsIXULWindow *aRelative, bool aScreen, bool aAlert) { return !_to ? NS_ERROR_NULL_POINTER : _to->Center(aRelative, aScreen, aAlert); } \
  NS_SCRIPTABLE NS_IMETHOD ShowModal(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ShowModal(); } \
  NS_SCRIPTABLE NS_IMETHOD GetZLevel(PRUint32 *aZLevel) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetZLevel(aZLevel); } \
  NS_SCRIPTABLE NS_IMETHOD SetZLevel(PRUint32 aZLevel) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetZLevel(aZLevel); } \
  NS_SCRIPTABLE NS_IMETHOD GetContextFlags(PRUint32 *aContextFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContextFlags(aContextFlags); } \
  NS_SCRIPTABLE NS_IMETHOD SetContextFlags(PRUint32 aContextFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContextFlags(aContextFlags); } \
  NS_SCRIPTABLE NS_IMETHOD GetChromeFlags(PRUint32 *aChromeFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChromeFlags(aChromeFlags); } \
  NS_SCRIPTABLE NS_IMETHOD SetChromeFlags(PRUint32 aChromeFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetChromeFlags(aChromeFlags); } \
  NS_SCRIPTABLE NS_IMETHOD AssumeChromeFlagsAreFrozen(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->AssumeChromeFlagsAreFrozen(); } \
  NS_SCRIPTABLE NS_IMETHOD CreateNewWindow(PRInt32 aChromeFlags, nsIXULWindow * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateNewWindow(aChromeFlags, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetXULBrowserWindow(nsIXULBrowserWindow * *aXULBrowserWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetXULBrowserWindow(aXULBrowserWindow); } \
  NS_SCRIPTABLE NS_IMETHOD SetXULBrowserWindow(nsIXULBrowserWindow *aXULBrowserWindow) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetXULBrowserWindow(aXULBrowserWindow); } \
  NS_IMETHOD ApplyChromeFlags(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ApplyChromeFlags(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXULWindow : public nsIXULWindow
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXULWINDOW

  nsXULWindow();

private:
  ~nsXULWindow();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsXULWindow, nsIXULWindow)

nsXULWindow::nsXULWindow()
{
  /* member initializers and constructor code */
}

nsXULWindow::~nsXULWindow()
{
  /* destructor code */
}

/* readonly attribute nsIDocShell docShell; */
NS_IMETHODIMP nsXULWindow::GetDocShell(nsIDocShell * *aDocShell)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean intrinsicallySized; */
NS_IMETHODIMP nsXULWindow::GetIntrinsicallySized(bool *aIntrinsicallySized)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXULWindow::SetIntrinsicallySized(bool aIntrinsicallySized)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDocShellTreeItem primaryContentShell; */
NS_IMETHODIMP nsXULWindow::GetPrimaryContentShell(nsIDocShellTreeItem * *aPrimaryContentShell)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDocShellTreeItem getContentShellById (in wstring ID); */
NS_IMETHODIMP nsXULWindow::GetContentShellById(const PRUnichar * ID, nsIDocShellTreeItem * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addChildWindow (in nsIXULWindow aChild); */
NS_IMETHODIMP nsXULWindow::AddChildWindow(nsIXULWindow *aChild)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeChildWindow (in nsIXULWindow aChild); */
NS_IMETHODIMP nsXULWindow::RemoveChildWindow(nsIXULWindow *aChild)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void center (in nsIXULWindow aRelative, in boolean aScreen, in boolean aAlert); */
NS_IMETHODIMP nsXULWindow::Center(nsIXULWindow *aRelative, bool aScreen, bool aAlert)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void showModal (); */
NS_IMETHODIMP nsXULWindow::ShowModal()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long zLevel; */
NS_IMETHODIMP nsXULWindow::GetZLevel(PRUint32 *aZLevel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXULWindow::SetZLevel(PRUint32 aZLevel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute PRUint32 contextFlags; */
NS_IMETHODIMP nsXULWindow::GetContextFlags(PRUint32 *aContextFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXULWindow::SetContextFlags(PRUint32 aContextFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute PRUint32 chromeFlags; */
NS_IMETHODIMP nsXULWindow::GetChromeFlags(PRUint32 *aChromeFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXULWindow::SetChromeFlags(PRUint32 aChromeFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void assumeChromeFlagsAreFrozen (); */
NS_IMETHODIMP nsXULWindow::AssumeChromeFlagsAreFrozen()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIXULWindow createNewWindow (in PRInt32 aChromeFlags); */
NS_IMETHODIMP nsXULWindow::CreateNewWindow(PRInt32 aChromeFlags, nsIXULWindow * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIXULBrowserWindow XULBrowserWindow; */
NS_IMETHODIMP nsXULWindow::GetXULBrowserWindow(nsIXULBrowserWindow * *aXULBrowserWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXULWindow::SetXULBrowserWindow(nsIXULBrowserWindow *aXULBrowserWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void applyChromeFlags (); */
NS_IMETHODIMP nsXULWindow::ApplyChromeFlags()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIXULWindow_h__ */
