/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/xpcom/io/nsILocalFileWin.idl
 */

#ifndef __gen_nsILocalFileWin_h__
#define __gen_nsILocalFileWin_h__


#ifndef __gen_nsILocalFile_h__
#include "nsILocalFile.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsILocalFileWin */
#define NS_ILOCALFILEWIN_IID_STR "c7b3fd13-30f2-46e5-a0d9-7a79a9b73c5b"

#define NS_ILOCALFILEWIN_IID \
  {0xc7b3fd13, 0x30f2, 0x46e5, \
    { 0xa0, 0xd9, 0x7a, 0x79, 0xa9, 0xb7, 0x3c, 0x5b }}

class NS_NO_VTABLE NS_SCRIPTABLE nsILocalFileWin : public nsILocalFile {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ILOCALFILEWIN_IID)

  /* AString getVersionInfoField (in string aField); */
  NS_SCRIPTABLE NS_IMETHOD GetVersionInfoField(const char * aField, nsAString & _retval NS_OUTPARAM) = 0;

  /* readonly attribute AString canonicalPath; */
  NS_SCRIPTABLE NS_IMETHOD GetCanonicalPath(nsAString & aCanonicalPath) = 0;

  /* [noscript] readonly attribute ACString nativeCanonicalPath; */
  NS_IMETHOD GetNativeCanonicalPath(nsACString & aNativeCanonicalPath) = 0;

  enum {
    WFA_SEARCH_INDEXED = 1U,
    WFA_READONLY = 2U,
    WFA_READWRITE = 4U
  };

  /* attribute unsigned long fileAttributesWin; */
  NS_SCRIPTABLE NS_IMETHOD GetFileAttributesWin(PRUint32 *aFileAttributesWin) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFileAttributesWin(PRUint32 aFileAttributesWin) = 0;

  /* void setShortcut ([optional] in nsILocalFile targetFile, [optional] in nsILocalFile workingDir, [optional] in wstring args, [optional] in wstring description, [optional] in nsILocalFile iconFile, [optional] in long iconIndex); */
  NS_SCRIPTABLE NS_IMETHOD SetShortcut(nsILocalFile *targetFile, nsILocalFile *workingDir, const PRUnichar * args, const PRUnichar * description, nsILocalFile *iconFile, PRInt32 iconIndex) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsILocalFileWin, NS_ILOCALFILEWIN_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSILOCALFILEWIN \
  NS_SCRIPTABLE NS_IMETHOD GetVersionInfoField(const char * aField, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCanonicalPath(nsAString & aCanonicalPath); \
  NS_IMETHOD GetNativeCanonicalPath(nsACString & aNativeCanonicalPath); \
  NS_SCRIPTABLE NS_IMETHOD GetFileAttributesWin(PRUint32 *aFileAttributesWin); \
  NS_SCRIPTABLE NS_IMETHOD SetFileAttributesWin(PRUint32 aFileAttributesWin); \
  NS_SCRIPTABLE NS_IMETHOD SetShortcut(nsILocalFile *targetFile, nsILocalFile *workingDir, const PRUnichar * args, const PRUnichar * description, nsILocalFile *iconFile, PRInt32 iconIndex); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSILOCALFILEWIN(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetVersionInfoField(const char * aField, nsAString & _retval NS_OUTPARAM) { return _to GetVersionInfoField(aField, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCanonicalPath(nsAString & aCanonicalPath) { return _to GetCanonicalPath(aCanonicalPath); } \
  NS_IMETHOD GetNativeCanonicalPath(nsACString & aNativeCanonicalPath) { return _to GetNativeCanonicalPath(aNativeCanonicalPath); } \
  NS_SCRIPTABLE NS_IMETHOD GetFileAttributesWin(PRUint32 *aFileAttributesWin) { return _to GetFileAttributesWin(aFileAttributesWin); } \
  NS_SCRIPTABLE NS_IMETHOD SetFileAttributesWin(PRUint32 aFileAttributesWin) { return _to SetFileAttributesWin(aFileAttributesWin); } \
  NS_SCRIPTABLE NS_IMETHOD SetShortcut(nsILocalFile *targetFile, nsILocalFile *workingDir, const PRUnichar * args, const PRUnichar * description, nsILocalFile *iconFile, PRInt32 iconIndex) { return _to SetShortcut(targetFile, workingDir, args, description, iconFile, iconIndex); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSILOCALFILEWIN(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetVersionInfoField(const char * aField, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVersionInfoField(aField, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCanonicalPath(nsAString & aCanonicalPath) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCanonicalPath(aCanonicalPath); } \
  NS_IMETHOD GetNativeCanonicalPath(nsACString & aNativeCanonicalPath) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNativeCanonicalPath(aNativeCanonicalPath); } \
  NS_SCRIPTABLE NS_IMETHOD GetFileAttributesWin(PRUint32 *aFileAttributesWin) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileAttributesWin(aFileAttributesWin); } \
  NS_SCRIPTABLE NS_IMETHOD SetFileAttributesWin(PRUint32 aFileAttributesWin) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFileAttributesWin(aFileAttributesWin); } \
  NS_SCRIPTABLE NS_IMETHOD SetShortcut(nsILocalFile *targetFile, nsILocalFile *workingDir, const PRUnichar * args, const PRUnichar * description, nsILocalFile *iconFile, PRInt32 iconIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetShortcut(targetFile, workingDir, args, description, iconFile, iconIndex); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsLocalFileWin : public nsILocalFileWin
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSILOCALFILEWIN

  nsLocalFileWin();

private:
  ~nsLocalFileWin();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsLocalFileWin, nsILocalFileWin)

nsLocalFileWin::nsLocalFileWin()
{
  /* member initializers and constructor code */
}

nsLocalFileWin::~nsLocalFileWin()
{
  /* destructor code */
}

/* AString getVersionInfoField (in string aField); */
NS_IMETHODIMP nsLocalFileWin::GetVersionInfoField(const char * aField, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString canonicalPath; */
NS_IMETHODIMP nsLocalFileWin::GetCanonicalPath(nsAString & aCanonicalPath)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute ACString nativeCanonicalPath; */
NS_IMETHODIMP nsLocalFileWin::GetNativeCanonicalPath(nsACString & aNativeCanonicalPath)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long fileAttributesWin; */
NS_IMETHODIMP nsLocalFileWin::GetFileAttributesWin(PRUint32 *aFileAttributesWin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsLocalFileWin::SetFileAttributesWin(PRUint32 aFileAttributesWin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setShortcut ([optional] in nsILocalFile targetFile, [optional] in nsILocalFile workingDir, [optional] in wstring args, [optional] in wstring description, [optional] in nsILocalFile iconFile, [optional] in long iconIndex); */
NS_IMETHODIMP nsLocalFileWin::SetShortcut(nsILocalFile *targetFile, nsILocalFile *workingDir, const PRUnichar * args, const PRUnichar * description, nsILocalFile *iconFile, PRInt32 iconIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsILocalFileWin_h__ */