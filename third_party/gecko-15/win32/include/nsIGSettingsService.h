/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/xpcom/system/nsIGSettingsService.idl
 */

#ifndef __gen_nsIGSettingsService_h__
#define __gen_nsIGSettingsService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIArray_h__
#include "nsIArray.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIGSettingsCollection */
#define NS_IGSETTINGSCOLLECTION_IID_STR "16d5b0ed-e756-4f1b-a8ce-9132e869acd8"

#define NS_IGSETTINGSCOLLECTION_IID \
  {0x16d5b0ed, 0xe756, 0x4f1b, \
    { 0xa8, 0xce, 0x91, 0x32, 0xe8, 0x69, 0xac, 0xd8 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIGSettingsCollection : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IGSETTINGSCOLLECTION_IID)

  /* void setString (in AUTF8String key, in AUTF8String value); */
  NS_SCRIPTABLE NS_IMETHOD SetString(const nsACString & key, const nsACString & value) = 0;

  /* void setBoolean (in AUTF8String key, in boolean value); */
  NS_SCRIPTABLE NS_IMETHOD SetBoolean(const nsACString & key, bool value) = 0;

  /* void setInt (in AUTF8String key, in long value); */
  NS_SCRIPTABLE NS_IMETHOD SetInt(const nsACString & key, PRInt32 value) = 0;

  /* AUTF8String getString (in AUTF8String key); */
  NS_SCRIPTABLE NS_IMETHOD GetString(const nsACString & key, nsACString & _retval NS_OUTPARAM) = 0;

  /* boolean getBoolean (in AUTF8String key); */
  NS_SCRIPTABLE NS_IMETHOD GetBoolean(const nsACString & key, bool *_retval NS_OUTPARAM) = 0;

  /* long getInt (in AUTF8String key); */
  NS_SCRIPTABLE NS_IMETHOD GetInt(const nsACString & key, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* nsIArray getStringList (in AUTF8String key); */
  NS_SCRIPTABLE NS_IMETHOD GetStringList(const nsACString & key, nsIArray * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIGSettingsCollection, NS_IGSETTINGSCOLLECTION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIGSETTINGSCOLLECTION \
  NS_SCRIPTABLE NS_IMETHOD SetString(const nsACString & key, const nsACString & value); \
  NS_SCRIPTABLE NS_IMETHOD SetBoolean(const nsACString & key, bool value); \
  NS_SCRIPTABLE NS_IMETHOD SetInt(const nsACString & key, PRInt32 value); \
  NS_SCRIPTABLE NS_IMETHOD GetString(const nsACString & key, nsACString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetBoolean(const nsACString & key, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetInt(const nsACString & key, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetStringList(const nsACString & key, nsIArray * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIGSETTINGSCOLLECTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetString(const nsACString & key, const nsACString & value) { return _to SetString(key, value); } \
  NS_SCRIPTABLE NS_IMETHOD SetBoolean(const nsACString & key, bool value) { return _to SetBoolean(key, value); } \
  NS_SCRIPTABLE NS_IMETHOD SetInt(const nsACString & key, PRInt32 value) { return _to SetInt(key, value); } \
  NS_SCRIPTABLE NS_IMETHOD GetString(const nsACString & key, nsACString & _retval NS_OUTPARAM) { return _to GetString(key, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBoolean(const nsACString & key, bool *_retval NS_OUTPARAM) { return _to GetBoolean(key, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInt(const nsACString & key, PRInt32 *_retval NS_OUTPARAM) { return _to GetInt(key, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetStringList(const nsACString & key, nsIArray * *_retval NS_OUTPARAM) { return _to GetStringList(key, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIGSETTINGSCOLLECTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetString(const nsACString & key, const nsACString & value) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetString(key, value); } \
  NS_SCRIPTABLE NS_IMETHOD SetBoolean(const nsACString & key, bool value) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBoolean(key, value); } \
  NS_SCRIPTABLE NS_IMETHOD SetInt(const nsACString & key, PRInt32 value) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInt(key, value); } \
  NS_SCRIPTABLE NS_IMETHOD GetString(const nsACString & key, nsACString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetString(key, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBoolean(const nsACString & key, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBoolean(key, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInt(const nsACString & key, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInt(key, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetStringList(const nsACString & key, nsIArray * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStringList(key, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsGSettingsCollection : public nsIGSettingsCollection
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIGSETTINGSCOLLECTION

  nsGSettingsCollection();

private:
  ~nsGSettingsCollection();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsGSettingsCollection, nsIGSettingsCollection)

nsGSettingsCollection::nsGSettingsCollection()
{
  /* member initializers and constructor code */
}

nsGSettingsCollection::~nsGSettingsCollection()
{
  /* destructor code */
}

/* void setString (in AUTF8String key, in AUTF8String value); */
NS_IMETHODIMP nsGSettingsCollection::SetString(const nsACString & key, const nsACString & value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setBoolean (in AUTF8String key, in boolean value); */
NS_IMETHODIMP nsGSettingsCollection::SetBoolean(const nsACString & key, bool value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setInt (in AUTF8String key, in long value); */
NS_IMETHODIMP nsGSettingsCollection::SetInt(const nsACString & key, PRInt32 value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AUTF8String getString (in AUTF8String key); */
NS_IMETHODIMP nsGSettingsCollection::GetString(const nsACString & key, nsACString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean getBoolean (in AUTF8String key); */
NS_IMETHODIMP nsGSettingsCollection::GetBoolean(const nsACString & key, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long getInt (in AUTF8String key); */
NS_IMETHODIMP nsGSettingsCollection::GetInt(const nsACString & key, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIArray getStringList (in AUTF8String key); */
NS_IMETHODIMP nsGSettingsCollection::GetStringList(const nsACString & key, nsIArray * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIGSettingsService */
#define NS_IGSETTINGSSERVICE_IID_STR "849c088b-57d1-4f24-b7b2-3dc4acb04c0a"

#define NS_IGSETTINGSSERVICE_IID \
  {0x849c088b, 0x57d1, 0x4f24, \
    { 0xb7, 0xb2, 0x3d, 0xc4, 0xac, 0xb0, 0x4c, 0x0a }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIGSettingsService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IGSETTINGSSERVICE_IID)

  /* nsIGSettingsCollection getCollectionForSchema (in AUTF8String schema); */
  NS_SCRIPTABLE NS_IMETHOD GetCollectionForSchema(const nsACString & schema, nsIGSettingsCollection * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIGSettingsService, NS_IGSETTINGSSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIGSETTINGSSERVICE \
  NS_SCRIPTABLE NS_IMETHOD GetCollectionForSchema(const nsACString & schema, nsIGSettingsCollection * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIGSETTINGSSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCollectionForSchema(const nsACString & schema, nsIGSettingsCollection * *_retval NS_OUTPARAM) { return _to GetCollectionForSchema(schema, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIGSETTINGSSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCollectionForSchema(const nsACString & schema, nsIGSettingsCollection * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCollectionForSchema(schema, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsGSettingsService : public nsIGSettingsService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIGSETTINGSSERVICE

  nsGSettingsService();

private:
  ~nsGSettingsService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsGSettingsService, nsIGSettingsService)

nsGSettingsService::nsGSettingsService()
{
  /* member initializers and constructor code */
}

nsGSettingsService::~nsGSettingsService()
{
  /* destructor code */
}

/* nsIGSettingsCollection getCollectionForSchema (in AUTF8String schema); */
NS_IMETHODIMP nsGSettingsService::GetCollectionForSchema(const nsACString & schema, nsIGSettingsCollection * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_GSETTINGSSERVICE_CONTRACTID "@mozilla.org/gsettings-service;1"

#endif /* __gen_nsIGSettingsService_h__ */
