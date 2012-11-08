/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/contacts/nsIDOMContactProperties.idl
 */

#ifndef __gen_nsIDOMContactProperties_h__
#define __gen_nsIDOMContactProperties_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIArray; /* forward declaration */

class nsIDOMContact; /* forward declaration */


/* starting interface:    nsIDOMContactAddress */
#define NS_IDOMCONTACTADDRESS_IID_STR "eba48030-89e8-11e1-b0c4-0800200c9a66"

#define NS_IDOMCONTACTADDRESS_IID \
  {0xeba48030, 0x89e8, 0x11e1, \
    { 0xb0, 0xc4, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMContactAddress : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMCONTACTADDRESS_IID)

  /* attribute DOMString type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetType(const nsAString & aType) = 0;

  /* attribute DOMString streetAddress; */
  NS_SCRIPTABLE NS_IMETHOD GetStreetAddress(nsAString & aStreetAddress) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetStreetAddress(const nsAString & aStreetAddress) = 0;

  /* attribute DOMString locality; */
  NS_SCRIPTABLE NS_IMETHOD GetLocality(nsAString & aLocality) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetLocality(const nsAString & aLocality) = 0;

  /* attribute DOMString region; */
  NS_SCRIPTABLE NS_IMETHOD GetRegion(nsAString & aRegion) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetRegion(const nsAString & aRegion) = 0;

  /* attribute DOMString postalCode; */
  NS_SCRIPTABLE NS_IMETHOD GetPostalCode(nsAString & aPostalCode) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPostalCode(const nsAString & aPostalCode) = 0;

  /* attribute DOMString countryName; */
  NS_SCRIPTABLE NS_IMETHOD GetCountryName(nsAString & aCountryName) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCountryName(const nsAString & aCountryName) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMContactAddress, NS_IDOMCONTACTADDRESS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMCONTACTADDRESS \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType); \
  NS_SCRIPTABLE NS_IMETHOD SetType(const nsAString & aType); \
  NS_SCRIPTABLE NS_IMETHOD GetStreetAddress(nsAString & aStreetAddress); \
  NS_SCRIPTABLE NS_IMETHOD SetStreetAddress(const nsAString & aStreetAddress); \
  NS_SCRIPTABLE NS_IMETHOD GetLocality(nsAString & aLocality); \
  NS_SCRIPTABLE NS_IMETHOD SetLocality(const nsAString & aLocality); \
  NS_SCRIPTABLE NS_IMETHOD GetRegion(nsAString & aRegion); \
  NS_SCRIPTABLE NS_IMETHOD SetRegion(const nsAString & aRegion); \
  NS_SCRIPTABLE NS_IMETHOD GetPostalCode(nsAString & aPostalCode); \
  NS_SCRIPTABLE NS_IMETHOD SetPostalCode(const nsAString & aPostalCode); \
  NS_SCRIPTABLE NS_IMETHOD GetCountryName(nsAString & aCountryName); \
  NS_SCRIPTABLE NS_IMETHOD SetCountryName(const nsAString & aCountryName); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMCONTACTADDRESS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD SetType(const nsAString & aType) { return _to SetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetStreetAddress(nsAString & aStreetAddress) { return _to GetStreetAddress(aStreetAddress); } \
  NS_SCRIPTABLE NS_IMETHOD SetStreetAddress(const nsAString & aStreetAddress) { return _to SetStreetAddress(aStreetAddress); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocality(nsAString & aLocality) { return _to GetLocality(aLocality); } \
  NS_SCRIPTABLE NS_IMETHOD SetLocality(const nsAString & aLocality) { return _to SetLocality(aLocality); } \
  NS_SCRIPTABLE NS_IMETHOD GetRegion(nsAString & aRegion) { return _to GetRegion(aRegion); } \
  NS_SCRIPTABLE NS_IMETHOD SetRegion(const nsAString & aRegion) { return _to SetRegion(aRegion); } \
  NS_SCRIPTABLE NS_IMETHOD GetPostalCode(nsAString & aPostalCode) { return _to GetPostalCode(aPostalCode); } \
  NS_SCRIPTABLE NS_IMETHOD SetPostalCode(const nsAString & aPostalCode) { return _to SetPostalCode(aPostalCode); } \
  NS_SCRIPTABLE NS_IMETHOD GetCountryName(nsAString & aCountryName) { return _to GetCountryName(aCountryName); } \
  NS_SCRIPTABLE NS_IMETHOD SetCountryName(const nsAString & aCountryName) { return _to SetCountryName(aCountryName); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMCONTACTADDRESS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD SetType(const nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetStreetAddress(nsAString & aStreetAddress) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStreetAddress(aStreetAddress); } \
  NS_SCRIPTABLE NS_IMETHOD SetStreetAddress(const nsAString & aStreetAddress) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStreetAddress(aStreetAddress); } \
  NS_SCRIPTABLE NS_IMETHOD GetLocality(nsAString & aLocality) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLocality(aLocality); } \
  NS_SCRIPTABLE NS_IMETHOD SetLocality(const nsAString & aLocality) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLocality(aLocality); } \
  NS_SCRIPTABLE NS_IMETHOD GetRegion(nsAString & aRegion) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRegion(aRegion); } \
  NS_SCRIPTABLE NS_IMETHOD SetRegion(const nsAString & aRegion) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRegion(aRegion); } \
  NS_SCRIPTABLE NS_IMETHOD GetPostalCode(nsAString & aPostalCode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPostalCode(aPostalCode); } \
  NS_SCRIPTABLE NS_IMETHOD SetPostalCode(const nsAString & aPostalCode) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPostalCode(aPostalCode); } \
  NS_SCRIPTABLE NS_IMETHOD GetCountryName(nsAString & aCountryName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCountryName(aCountryName); } \
  NS_SCRIPTABLE NS_IMETHOD SetCountryName(const nsAString & aCountryName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCountryName(aCountryName); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMContactAddress : public nsIDOMContactAddress
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMCONTACTADDRESS

  nsDOMContactAddress();

private:
  ~nsDOMContactAddress();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMContactAddress, nsIDOMContactAddress)

nsDOMContactAddress::nsDOMContactAddress()
{
  /* member initializers and constructor code */
}

nsDOMContactAddress::~nsDOMContactAddress()
{
  /* destructor code */
}

/* attribute DOMString type; */
NS_IMETHODIMP nsDOMContactAddress::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactAddress::SetType(const nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString streetAddress; */
NS_IMETHODIMP nsDOMContactAddress::GetStreetAddress(nsAString & aStreetAddress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactAddress::SetStreetAddress(const nsAString & aStreetAddress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString locality; */
NS_IMETHODIMP nsDOMContactAddress::GetLocality(nsAString & aLocality)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactAddress::SetLocality(const nsAString & aLocality)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString region; */
NS_IMETHODIMP nsDOMContactAddress::GetRegion(nsAString & aRegion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactAddress::SetRegion(const nsAString & aRegion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString postalCode; */
NS_IMETHODIMP nsDOMContactAddress::GetPostalCode(nsAString & aPostalCode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactAddress::SetPostalCode(const nsAString & aPostalCode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString countryName; */
NS_IMETHODIMP nsDOMContactAddress::GetCountryName(nsAString & aCountryName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactAddress::SetCountryName(const nsAString & aCountryName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMContactTelephone */
#define NS_IDOMCONTACTTELEPHONE_IID_STR "82601b20-89e8-11e1-b0c4-0800200c9a66"

#define NS_IDOMCONTACTTELEPHONE_IID \
  {0x82601b20, 0x89e8, 0x11e1, \
    { 0xb0, 0xc4, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMContactTelephone : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMCONTACTTELEPHONE_IID)

  /* attribute DOMString type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetType(const nsAString & aType) = 0;

  /* attribute DOMString number; */
  NS_SCRIPTABLE NS_IMETHOD GetNumber(nsAString & aNumber) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetNumber(const nsAString & aNumber) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMContactTelephone, NS_IDOMCONTACTTELEPHONE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMCONTACTTELEPHONE \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType); \
  NS_SCRIPTABLE NS_IMETHOD SetType(const nsAString & aType); \
  NS_SCRIPTABLE NS_IMETHOD GetNumber(nsAString & aNumber); \
  NS_SCRIPTABLE NS_IMETHOD SetNumber(const nsAString & aNumber); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMCONTACTTELEPHONE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD SetType(const nsAString & aType) { return _to SetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumber(nsAString & aNumber) { return _to GetNumber(aNumber); } \
  NS_SCRIPTABLE NS_IMETHOD SetNumber(const nsAString & aNumber) { return _to SetNumber(aNumber); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMCONTACTTELEPHONE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD SetType(const nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumber(nsAString & aNumber) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNumber(aNumber); } \
  NS_SCRIPTABLE NS_IMETHOD SetNumber(const nsAString & aNumber) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNumber(aNumber); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMContactTelephone : public nsIDOMContactTelephone
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMCONTACTTELEPHONE

  nsDOMContactTelephone();

private:
  ~nsDOMContactTelephone();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMContactTelephone, nsIDOMContactTelephone)

nsDOMContactTelephone::nsDOMContactTelephone()
{
  /* member initializers and constructor code */
}

nsDOMContactTelephone::~nsDOMContactTelephone()
{
  /* destructor code */
}

/* attribute DOMString type; */
NS_IMETHODIMP nsDOMContactTelephone::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactTelephone::SetType(const nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString number; */
NS_IMETHODIMP nsDOMContactTelephone::GetNumber(nsAString & aNumber)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactTelephone::SetNumber(const nsAString & aNumber)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMContactEmail */
#define NS_IDOMCONTACTEMAIL_IID_STR "94811520-c11f-11e1-afa7-0800200c9a66"

#define NS_IDOMCONTACTEMAIL_IID \
  {0x94811520, 0xc11f, 0x11e1, \
    { 0xaf, 0xa7, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMContactEmail : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMCONTACTEMAIL_IID)

  /* attribute DOMString type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetType(const nsAString & aType) = 0;

  /* attribute DOMString address; */
  NS_SCRIPTABLE NS_IMETHOD GetAddress(nsAString & aAddress) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAddress(const nsAString & aAddress) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMContactEmail, NS_IDOMCONTACTEMAIL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMCONTACTEMAIL \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType); \
  NS_SCRIPTABLE NS_IMETHOD SetType(const nsAString & aType); \
  NS_SCRIPTABLE NS_IMETHOD GetAddress(nsAString & aAddress); \
  NS_SCRIPTABLE NS_IMETHOD SetAddress(const nsAString & aAddress); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMCONTACTEMAIL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD SetType(const nsAString & aType) { return _to SetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetAddress(nsAString & aAddress) { return _to GetAddress(aAddress); } \
  NS_SCRIPTABLE NS_IMETHOD SetAddress(const nsAString & aAddress) { return _to SetAddress(aAddress); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMCONTACTEMAIL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD SetType(const nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetAddress(nsAString & aAddress) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAddress(aAddress); } \
  NS_SCRIPTABLE NS_IMETHOD SetAddress(const nsAString & aAddress) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAddress(aAddress); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMContactEmail : public nsIDOMContactEmail
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMCONTACTEMAIL

  nsDOMContactEmail();

private:
  ~nsDOMContactEmail();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMContactEmail, nsIDOMContactEmail)

nsDOMContactEmail::nsDOMContactEmail()
{
  /* member initializers and constructor code */
}

nsDOMContactEmail::~nsDOMContactEmail()
{
  /* destructor code */
}

/* attribute DOMString type; */
NS_IMETHODIMP nsDOMContactEmail::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactEmail::SetType(const nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString address; */
NS_IMETHODIMP nsDOMContactEmail::GetAddress(nsAString & aAddress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactEmail::SetAddress(const nsAString & aAddress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMContactFindOptions */
#define NS_IDOMCONTACTFINDOPTIONS_IID_STR "e31daea0-0cb6-11e1-be50-0800200c9a66"

#define NS_IDOMCONTACTFINDOPTIONS_IID \
  {0xe31daea0, 0x0cb6, 0x11e1, \
    { 0xbe, 0x50, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMContactFindOptions : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMCONTACTFINDOPTIONS_IID)

  /* attribute DOMString filterValue; */
  NS_SCRIPTABLE NS_IMETHOD GetFilterValue(nsAString & aFilterValue) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFilterValue(const nsAString & aFilterValue) = 0;

  /* attribute DOMString filterOp; */
  NS_SCRIPTABLE NS_IMETHOD GetFilterOp(nsAString & aFilterOp) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFilterOp(const nsAString & aFilterOp) = 0;

  /* attribute jsval filterBy; */
  NS_SCRIPTABLE NS_IMETHOD GetFilterBy(JS::Value *aFilterBy) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFilterBy(const JS::Value & aFilterBy) = 0;

  /* attribute DOMString sortBy; */
  NS_SCRIPTABLE NS_IMETHOD GetSortBy(nsAString & aSortBy) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSortBy(const nsAString & aSortBy) = 0;

  /* attribute DOMString sortOrder; */
  NS_SCRIPTABLE NS_IMETHOD GetSortOrder(nsAString & aSortOrder) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSortOrder(const nsAString & aSortOrder) = 0;

  /* attribute unsigned long filterLimit; */
  NS_SCRIPTABLE NS_IMETHOD GetFilterLimit(PRUint32 *aFilterLimit) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFilterLimit(PRUint32 aFilterLimit) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMContactFindOptions, NS_IDOMCONTACTFINDOPTIONS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMCONTACTFINDOPTIONS \
  NS_SCRIPTABLE NS_IMETHOD GetFilterValue(nsAString & aFilterValue); \
  NS_SCRIPTABLE NS_IMETHOD SetFilterValue(const nsAString & aFilterValue); \
  NS_SCRIPTABLE NS_IMETHOD GetFilterOp(nsAString & aFilterOp); \
  NS_SCRIPTABLE NS_IMETHOD SetFilterOp(const nsAString & aFilterOp); \
  NS_SCRIPTABLE NS_IMETHOD GetFilterBy(JS::Value *aFilterBy); \
  NS_SCRIPTABLE NS_IMETHOD SetFilterBy(const JS::Value & aFilterBy); \
  NS_SCRIPTABLE NS_IMETHOD GetSortBy(nsAString & aSortBy); \
  NS_SCRIPTABLE NS_IMETHOD SetSortBy(const nsAString & aSortBy); \
  NS_SCRIPTABLE NS_IMETHOD GetSortOrder(nsAString & aSortOrder); \
  NS_SCRIPTABLE NS_IMETHOD SetSortOrder(const nsAString & aSortOrder); \
  NS_SCRIPTABLE NS_IMETHOD GetFilterLimit(PRUint32 *aFilterLimit); \
  NS_SCRIPTABLE NS_IMETHOD SetFilterLimit(PRUint32 aFilterLimit); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMCONTACTFINDOPTIONS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFilterValue(nsAString & aFilterValue) { return _to GetFilterValue(aFilterValue); } \
  NS_SCRIPTABLE NS_IMETHOD SetFilterValue(const nsAString & aFilterValue) { return _to SetFilterValue(aFilterValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetFilterOp(nsAString & aFilterOp) { return _to GetFilterOp(aFilterOp); } \
  NS_SCRIPTABLE NS_IMETHOD SetFilterOp(const nsAString & aFilterOp) { return _to SetFilterOp(aFilterOp); } \
  NS_SCRIPTABLE NS_IMETHOD GetFilterBy(JS::Value *aFilterBy) { return _to GetFilterBy(aFilterBy); } \
  NS_SCRIPTABLE NS_IMETHOD SetFilterBy(const JS::Value & aFilterBy) { return _to SetFilterBy(aFilterBy); } \
  NS_SCRIPTABLE NS_IMETHOD GetSortBy(nsAString & aSortBy) { return _to GetSortBy(aSortBy); } \
  NS_SCRIPTABLE NS_IMETHOD SetSortBy(const nsAString & aSortBy) { return _to SetSortBy(aSortBy); } \
  NS_SCRIPTABLE NS_IMETHOD GetSortOrder(nsAString & aSortOrder) { return _to GetSortOrder(aSortOrder); } \
  NS_SCRIPTABLE NS_IMETHOD SetSortOrder(const nsAString & aSortOrder) { return _to SetSortOrder(aSortOrder); } \
  NS_SCRIPTABLE NS_IMETHOD GetFilterLimit(PRUint32 *aFilterLimit) { return _to GetFilterLimit(aFilterLimit); } \
  NS_SCRIPTABLE NS_IMETHOD SetFilterLimit(PRUint32 aFilterLimit) { return _to SetFilterLimit(aFilterLimit); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMCONTACTFINDOPTIONS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFilterValue(nsAString & aFilterValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFilterValue(aFilterValue); } \
  NS_SCRIPTABLE NS_IMETHOD SetFilterValue(const nsAString & aFilterValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFilterValue(aFilterValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetFilterOp(nsAString & aFilterOp) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFilterOp(aFilterOp); } \
  NS_SCRIPTABLE NS_IMETHOD SetFilterOp(const nsAString & aFilterOp) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFilterOp(aFilterOp); } \
  NS_SCRIPTABLE NS_IMETHOD GetFilterBy(JS::Value *aFilterBy) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFilterBy(aFilterBy); } \
  NS_SCRIPTABLE NS_IMETHOD SetFilterBy(const JS::Value & aFilterBy) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFilterBy(aFilterBy); } \
  NS_SCRIPTABLE NS_IMETHOD GetSortBy(nsAString & aSortBy) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSortBy(aSortBy); } \
  NS_SCRIPTABLE NS_IMETHOD SetSortBy(const nsAString & aSortBy) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSortBy(aSortBy); } \
  NS_SCRIPTABLE NS_IMETHOD GetSortOrder(nsAString & aSortOrder) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSortOrder(aSortOrder); } \
  NS_SCRIPTABLE NS_IMETHOD SetSortOrder(const nsAString & aSortOrder) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSortOrder(aSortOrder); } \
  NS_SCRIPTABLE NS_IMETHOD GetFilterLimit(PRUint32 *aFilterLimit) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFilterLimit(aFilterLimit); } \
  NS_SCRIPTABLE NS_IMETHOD SetFilterLimit(PRUint32 aFilterLimit) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFilterLimit(aFilterLimit); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMContactFindOptions : public nsIDOMContactFindOptions
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMCONTACTFINDOPTIONS

  nsDOMContactFindOptions();

private:
  ~nsDOMContactFindOptions();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMContactFindOptions, nsIDOMContactFindOptions)

nsDOMContactFindOptions::nsDOMContactFindOptions()
{
  /* member initializers and constructor code */
}

nsDOMContactFindOptions::~nsDOMContactFindOptions()
{
  /* destructor code */
}

/* attribute DOMString filterValue; */
NS_IMETHODIMP nsDOMContactFindOptions::GetFilterValue(nsAString & aFilterValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactFindOptions::SetFilterValue(const nsAString & aFilterValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString filterOp; */
NS_IMETHODIMP nsDOMContactFindOptions::GetFilterOp(nsAString & aFilterOp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactFindOptions::SetFilterOp(const nsAString & aFilterOp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsval filterBy; */
NS_IMETHODIMP nsDOMContactFindOptions::GetFilterBy(JS::Value *aFilterBy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactFindOptions::SetFilterBy(const JS::Value & aFilterBy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString sortBy; */
NS_IMETHODIMP nsDOMContactFindOptions::GetSortBy(nsAString & aSortBy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactFindOptions::SetSortBy(const nsAString & aSortBy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString sortOrder; */
NS_IMETHODIMP nsDOMContactFindOptions::GetSortOrder(nsAString & aSortOrder)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactFindOptions::SetSortOrder(const nsAString & aSortOrder)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long filterLimit; */
NS_IMETHODIMP nsDOMContactFindOptions::GetFilterLimit(PRUint32 *aFilterLimit)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactFindOptions::SetFilterLimit(PRUint32 aFilterLimit)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMContactProperties */
#define NS_IDOMCONTACTPROPERTIES_IID_STR "f5181640-89e8-11e1-b0c4-0800200c9a66"

#define NS_IDOMCONTACTPROPERTIES_IID \
  {0xf5181640, 0x89e8, 0x11e1, \
    { 0xb0, 0xc4, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMContactProperties : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMCONTACTPROPERTIES_IID)

  /* attribute jsval name; */
  NS_SCRIPTABLE NS_IMETHOD GetName(JS::Value *aName) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetName(const JS::Value & aName) = 0;

  /* attribute jsval honorificPrefix; */
  NS_SCRIPTABLE NS_IMETHOD GetHonorificPrefix(JS::Value *aHonorificPrefix) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetHonorificPrefix(const JS::Value & aHonorificPrefix) = 0;

  /* attribute jsval givenName; */
  NS_SCRIPTABLE NS_IMETHOD GetGivenName(JS::Value *aGivenName) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetGivenName(const JS::Value & aGivenName) = 0;

  /* attribute jsval additionalName; */
  NS_SCRIPTABLE NS_IMETHOD GetAdditionalName(JS::Value *aAdditionalName) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAdditionalName(const JS::Value & aAdditionalName) = 0;

  /* attribute jsval familyName; */
  NS_SCRIPTABLE NS_IMETHOD GetFamilyName(JS::Value *aFamilyName) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFamilyName(const JS::Value & aFamilyName) = 0;

  /* attribute jsval honorificSuffix; */
  NS_SCRIPTABLE NS_IMETHOD GetHonorificSuffix(JS::Value *aHonorificSuffix) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetHonorificSuffix(const JS::Value & aHonorificSuffix) = 0;

  /* attribute jsval nickname; */
  NS_SCRIPTABLE NS_IMETHOD GetNickname(JS::Value *aNickname) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetNickname(const JS::Value & aNickname) = 0;

  /* attribute jsval email; */
  NS_SCRIPTABLE NS_IMETHOD GetEmail(JS::Value *aEmail) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetEmail(const JS::Value & aEmail) = 0;

  /* attribute jsval photo; */
  NS_SCRIPTABLE NS_IMETHOD GetPhoto(JS::Value *aPhoto) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPhoto(const JS::Value & aPhoto) = 0;

  /* attribute jsval url; */
  NS_SCRIPTABLE NS_IMETHOD GetUrl(JS::Value *aUrl) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetUrl(const JS::Value & aUrl) = 0;

  /* attribute jsval category; */
  NS_SCRIPTABLE NS_IMETHOD GetCategory(JS::Value *aCategory) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCategory(const JS::Value & aCategory) = 0;

  /* attribute jsval adr; */
  NS_SCRIPTABLE NS_IMETHOD GetAdr(JS::Value *aAdr) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAdr(const JS::Value & aAdr) = 0;

  /* attribute jsval tel; */
  NS_SCRIPTABLE NS_IMETHOD GetTel(JS::Value *aTel) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTel(const JS::Value & aTel) = 0;

  /* attribute jsval org; */
  NS_SCRIPTABLE NS_IMETHOD GetOrg(JS::Value *aOrg) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOrg(const JS::Value & aOrg) = 0;

  /* attribute jsval jobTitle; */
  NS_SCRIPTABLE NS_IMETHOD GetJobTitle(JS::Value *aJobTitle) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetJobTitle(const JS::Value & aJobTitle) = 0;

  /* attribute jsval bday; */
  NS_SCRIPTABLE NS_IMETHOD GetBday(JS::Value *aBday) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetBday(const JS::Value & aBday) = 0;

  /* attribute jsval note; */
  NS_SCRIPTABLE NS_IMETHOD GetNote(JS::Value *aNote) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetNote(const JS::Value & aNote) = 0;

  /* attribute jsval impp; */
  NS_SCRIPTABLE NS_IMETHOD GetImpp(JS::Value *aImpp) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetImpp(const JS::Value & aImpp) = 0;

  /* attribute jsval anniversary; */
  NS_SCRIPTABLE NS_IMETHOD GetAnniversary(JS::Value *aAnniversary) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAnniversary(const JS::Value & aAnniversary) = 0;

  /* attribute jsval sex; */
  NS_SCRIPTABLE NS_IMETHOD GetSex(JS::Value *aSex) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSex(const JS::Value & aSex) = 0;

  /* attribute jsval genderIdentity; */
  NS_SCRIPTABLE NS_IMETHOD GetGenderIdentity(JS::Value *aGenderIdentity) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetGenderIdentity(const JS::Value & aGenderIdentity) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMContactProperties, NS_IDOMCONTACTPROPERTIES_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMCONTACTPROPERTIES \
  NS_SCRIPTABLE NS_IMETHOD GetName(JS::Value *aName); \
  NS_SCRIPTABLE NS_IMETHOD SetName(const JS::Value & aName); \
  NS_SCRIPTABLE NS_IMETHOD GetHonorificPrefix(JS::Value *aHonorificPrefix); \
  NS_SCRIPTABLE NS_IMETHOD SetHonorificPrefix(const JS::Value & aHonorificPrefix); \
  NS_SCRIPTABLE NS_IMETHOD GetGivenName(JS::Value *aGivenName); \
  NS_SCRIPTABLE NS_IMETHOD SetGivenName(const JS::Value & aGivenName); \
  NS_SCRIPTABLE NS_IMETHOD GetAdditionalName(JS::Value *aAdditionalName); \
  NS_SCRIPTABLE NS_IMETHOD SetAdditionalName(const JS::Value & aAdditionalName); \
  NS_SCRIPTABLE NS_IMETHOD GetFamilyName(JS::Value *aFamilyName); \
  NS_SCRIPTABLE NS_IMETHOD SetFamilyName(const JS::Value & aFamilyName); \
  NS_SCRIPTABLE NS_IMETHOD GetHonorificSuffix(JS::Value *aHonorificSuffix); \
  NS_SCRIPTABLE NS_IMETHOD SetHonorificSuffix(const JS::Value & aHonorificSuffix); \
  NS_SCRIPTABLE NS_IMETHOD GetNickname(JS::Value *aNickname); \
  NS_SCRIPTABLE NS_IMETHOD SetNickname(const JS::Value & aNickname); \
  NS_SCRIPTABLE NS_IMETHOD GetEmail(JS::Value *aEmail); \
  NS_SCRIPTABLE NS_IMETHOD SetEmail(const JS::Value & aEmail); \
  NS_SCRIPTABLE NS_IMETHOD GetPhoto(JS::Value *aPhoto); \
  NS_SCRIPTABLE NS_IMETHOD SetPhoto(const JS::Value & aPhoto); \
  NS_SCRIPTABLE NS_IMETHOD GetUrl(JS::Value *aUrl); \
  NS_SCRIPTABLE NS_IMETHOD SetUrl(const JS::Value & aUrl); \
  NS_SCRIPTABLE NS_IMETHOD GetCategory(JS::Value *aCategory); \
  NS_SCRIPTABLE NS_IMETHOD SetCategory(const JS::Value & aCategory); \
  NS_SCRIPTABLE NS_IMETHOD GetAdr(JS::Value *aAdr); \
  NS_SCRIPTABLE NS_IMETHOD SetAdr(const JS::Value & aAdr); \
  NS_SCRIPTABLE NS_IMETHOD GetTel(JS::Value *aTel); \
  NS_SCRIPTABLE NS_IMETHOD SetTel(const JS::Value & aTel); \
  NS_SCRIPTABLE NS_IMETHOD GetOrg(JS::Value *aOrg); \
  NS_SCRIPTABLE NS_IMETHOD SetOrg(const JS::Value & aOrg); \
  NS_SCRIPTABLE NS_IMETHOD GetJobTitle(JS::Value *aJobTitle); \
  NS_SCRIPTABLE NS_IMETHOD SetJobTitle(const JS::Value & aJobTitle); \
  NS_SCRIPTABLE NS_IMETHOD GetBday(JS::Value *aBday); \
  NS_SCRIPTABLE NS_IMETHOD SetBday(const JS::Value & aBday); \
  NS_SCRIPTABLE NS_IMETHOD GetNote(JS::Value *aNote); \
  NS_SCRIPTABLE NS_IMETHOD SetNote(const JS::Value & aNote); \
  NS_SCRIPTABLE NS_IMETHOD GetImpp(JS::Value *aImpp); \
  NS_SCRIPTABLE NS_IMETHOD SetImpp(const JS::Value & aImpp); \
  NS_SCRIPTABLE NS_IMETHOD GetAnniversary(JS::Value *aAnniversary); \
  NS_SCRIPTABLE NS_IMETHOD SetAnniversary(const JS::Value & aAnniversary); \
  NS_SCRIPTABLE NS_IMETHOD GetSex(JS::Value *aSex); \
  NS_SCRIPTABLE NS_IMETHOD SetSex(const JS::Value & aSex); \
  NS_SCRIPTABLE NS_IMETHOD GetGenderIdentity(JS::Value *aGenderIdentity); \
  NS_SCRIPTABLE NS_IMETHOD SetGenderIdentity(const JS::Value & aGenderIdentity); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMCONTACTPROPERTIES(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetName(JS::Value *aName) { return _to GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const JS::Value & aName) { return _to SetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetHonorificPrefix(JS::Value *aHonorificPrefix) { return _to GetHonorificPrefix(aHonorificPrefix); } \
  NS_SCRIPTABLE NS_IMETHOD SetHonorificPrefix(const JS::Value & aHonorificPrefix) { return _to SetHonorificPrefix(aHonorificPrefix); } \
  NS_SCRIPTABLE NS_IMETHOD GetGivenName(JS::Value *aGivenName) { return _to GetGivenName(aGivenName); } \
  NS_SCRIPTABLE NS_IMETHOD SetGivenName(const JS::Value & aGivenName) { return _to SetGivenName(aGivenName); } \
  NS_SCRIPTABLE NS_IMETHOD GetAdditionalName(JS::Value *aAdditionalName) { return _to GetAdditionalName(aAdditionalName); } \
  NS_SCRIPTABLE NS_IMETHOD SetAdditionalName(const JS::Value & aAdditionalName) { return _to SetAdditionalName(aAdditionalName); } \
  NS_SCRIPTABLE NS_IMETHOD GetFamilyName(JS::Value *aFamilyName) { return _to GetFamilyName(aFamilyName); } \
  NS_SCRIPTABLE NS_IMETHOD SetFamilyName(const JS::Value & aFamilyName) { return _to SetFamilyName(aFamilyName); } \
  NS_SCRIPTABLE NS_IMETHOD GetHonorificSuffix(JS::Value *aHonorificSuffix) { return _to GetHonorificSuffix(aHonorificSuffix); } \
  NS_SCRIPTABLE NS_IMETHOD SetHonorificSuffix(const JS::Value & aHonorificSuffix) { return _to SetHonorificSuffix(aHonorificSuffix); } \
  NS_SCRIPTABLE NS_IMETHOD GetNickname(JS::Value *aNickname) { return _to GetNickname(aNickname); } \
  NS_SCRIPTABLE NS_IMETHOD SetNickname(const JS::Value & aNickname) { return _to SetNickname(aNickname); } \
  NS_SCRIPTABLE NS_IMETHOD GetEmail(JS::Value *aEmail) { return _to GetEmail(aEmail); } \
  NS_SCRIPTABLE NS_IMETHOD SetEmail(const JS::Value & aEmail) { return _to SetEmail(aEmail); } \
  NS_SCRIPTABLE NS_IMETHOD GetPhoto(JS::Value *aPhoto) { return _to GetPhoto(aPhoto); } \
  NS_SCRIPTABLE NS_IMETHOD SetPhoto(const JS::Value & aPhoto) { return _to SetPhoto(aPhoto); } \
  NS_SCRIPTABLE NS_IMETHOD GetUrl(JS::Value *aUrl) { return _to GetUrl(aUrl); } \
  NS_SCRIPTABLE NS_IMETHOD SetUrl(const JS::Value & aUrl) { return _to SetUrl(aUrl); } \
  NS_SCRIPTABLE NS_IMETHOD GetCategory(JS::Value *aCategory) { return _to GetCategory(aCategory); } \
  NS_SCRIPTABLE NS_IMETHOD SetCategory(const JS::Value & aCategory) { return _to SetCategory(aCategory); } \
  NS_SCRIPTABLE NS_IMETHOD GetAdr(JS::Value *aAdr) { return _to GetAdr(aAdr); } \
  NS_SCRIPTABLE NS_IMETHOD SetAdr(const JS::Value & aAdr) { return _to SetAdr(aAdr); } \
  NS_SCRIPTABLE NS_IMETHOD GetTel(JS::Value *aTel) { return _to GetTel(aTel); } \
  NS_SCRIPTABLE NS_IMETHOD SetTel(const JS::Value & aTel) { return _to SetTel(aTel); } \
  NS_SCRIPTABLE NS_IMETHOD GetOrg(JS::Value *aOrg) { return _to GetOrg(aOrg); } \
  NS_SCRIPTABLE NS_IMETHOD SetOrg(const JS::Value & aOrg) { return _to SetOrg(aOrg); } \
  NS_SCRIPTABLE NS_IMETHOD GetJobTitle(JS::Value *aJobTitle) { return _to GetJobTitle(aJobTitle); } \
  NS_SCRIPTABLE NS_IMETHOD SetJobTitle(const JS::Value & aJobTitle) { return _to SetJobTitle(aJobTitle); } \
  NS_SCRIPTABLE NS_IMETHOD GetBday(JS::Value *aBday) { return _to GetBday(aBday); } \
  NS_SCRIPTABLE NS_IMETHOD SetBday(const JS::Value & aBday) { return _to SetBday(aBday); } \
  NS_SCRIPTABLE NS_IMETHOD GetNote(JS::Value *aNote) { return _to GetNote(aNote); } \
  NS_SCRIPTABLE NS_IMETHOD SetNote(const JS::Value & aNote) { return _to SetNote(aNote); } \
  NS_SCRIPTABLE NS_IMETHOD GetImpp(JS::Value *aImpp) { return _to GetImpp(aImpp); } \
  NS_SCRIPTABLE NS_IMETHOD SetImpp(const JS::Value & aImpp) { return _to SetImpp(aImpp); } \
  NS_SCRIPTABLE NS_IMETHOD GetAnniversary(JS::Value *aAnniversary) { return _to GetAnniversary(aAnniversary); } \
  NS_SCRIPTABLE NS_IMETHOD SetAnniversary(const JS::Value & aAnniversary) { return _to SetAnniversary(aAnniversary); } \
  NS_SCRIPTABLE NS_IMETHOD GetSex(JS::Value *aSex) { return _to GetSex(aSex); } \
  NS_SCRIPTABLE NS_IMETHOD SetSex(const JS::Value & aSex) { return _to SetSex(aSex); } \
  NS_SCRIPTABLE NS_IMETHOD GetGenderIdentity(JS::Value *aGenderIdentity) { return _to GetGenderIdentity(aGenderIdentity); } \
  NS_SCRIPTABLE NS_IMETHOD SetGenderIdentity(const JS::Value & aGenderIdentity) { return _to SetGenderIdentity(aGenderIdentity); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMCONTACTPROPERTIES(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetName(JS::Value *aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const JS::Value & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetHonorificPrefix(JS::Value *aHonorificPrefix) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHonorificPrefix(aHonorificPrefix); } \
  NS_SCRIPTABLE NS_IMETHOD SetHonorificPrefix(const JS::Value & aHonorificPrefix) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHonorificPrefix(aHonorificPrefix); } \
  NS_SCRIPTABLE NS_IMETHOD GetGivenName(JS::Value *aGivenName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGivenName(aGivenName); } \
  NS_SCRIPTABLE NS_IMETHOD SetGivenName(const JS::Value & aGivenName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetGivenName(aGivenName); } \
  NS_SCRIPTABLE NS_IMETHOD GetAdditionalName(JS::Value *aAdditionalName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAdditionalName(aAdditionalName); } \
  NS_SCRIPTABLE NS_IMETHOD SetAdditionalName(const JS::Value & aAdditionalName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAdditionalName(aAdditionalName); } \
  NS_SCRIPTABLE NS_IMETHOD GetFamilyName(JS::Value *aFamilyName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFamilyName(aFamilyName); } \
  NS_SCRIPTABLE NS_IMETHOD SetFamilyName(const JS::Value & aFamilyName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFamilyName(aFamilyName); } \
  NS_SCRIPTABLE NS_IMETHOD GetHonorificSuffix(JS::Value *aHonorificSuffix) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHonorificSuffix(aHonorificSuffix); } \
  NS_SCRIPTABLE NS_IMETHOD SetHonorificSuffix(const JS::Value & aHonorificSuffix) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHonorificSuffix(aHonorificSuffix); } \
  NS_SCRIPTABLE NS_IMETHOD GetNickname(JS::Value *aNickname) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNickname(aNickname); } \
  NS_SCRIPTABLE NS_IMETHOD SetNickname(const JS::Value & aNickname) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNickname(aNickname); } \
  NS_SCRIPTABLE NS_IMETHOD GetEmail(JS::Value *aEmail) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEmail(aEmail); } \
  NS_SCRIPTABLE NS_IMETHOD SetEmail(const JS::Value & aEmail) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEmail(aEmail); } \
  NS_SCRIPTABLE NS_IMETHOD GetPhoto(JS::Value *aPhoto) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPhoto(aPhoto); } \
  NS_SCRIPTABLE NS_IMETHOD SetPhoto(const JS::Value & aPhoto) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPhoto(aPhoto); } \
  NS_SCRIPTABLE NS_IMETHOD GetUrl(JS::Value *aUrl) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUrl(aUrl); } \
  NS_SCRIPTABLE NS_IMETHOD SetUrl(const JS::Value & aUrl) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUrl(aUrl); } \
  NS_SCRIPTABLE NS_IMETHOD GetCategory(JS::Value *aCategory) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCategory(aCategory); } \
  NS_SCRIPTABLE NS_IMETHOD SetCategory(const JS::Value & aCategory) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCategory(aCategory); } \
  NS_SCRIPTABLE NS_IMETHOD GetAdr(JS::Value *aAdr) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAdr(aAdr); } \
  NS_SCRIPTABLE NS_IMETHOD SetAdr(const JS::Value & aAdr) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAdr(aAdr); } \
  NS_SCRIPTABLE NS_IMETHOD GetTel(JS::Value *aTel) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTel(aTel); } \
  NS_SCRIPTABLE NS_IMETHOD SetTel(const JS::Value & aTel) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTel(aTel); } \
  NS_SCRIPTABLE NS_IMETHOD GetOrg(JS::Value *aOrg) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOrg(aOrg); } \
  NS_SCRIPTABLE NS_IMETHOD SetOrg(const JS::Value & aOrg) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOrg(aOrg); } \
  NS_SCRIPTABLE NS_IMETHOD GetJobTitle(JS::Value *aJobTitle) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJobTitle(aJobTitle); } \
  NS_SCRIPTABLE NS_IMETHOD SetJobTitle(const JS::Value & aJobTitle) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetJobTitle(aJobTitle); } \
  NS_SCRIPTABLE NS_IMETHOD GetBday(JS::Value *aBday) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBday(aBday); } \
  NS_SCRIPTABLE NS_IMETHOD SetBday(const JS::Value & aBday) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBday(aBday); } \
  NS_SCRIPTABLE NS_IMETHOD GetNote(JS::Value *aNote) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNote(aNote); } \
  NS_SCRIPTABLE NS_IMETHOD SetNote(const JS::Value & aNote) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNote(aNote); } \
  NS_SCRIPTABLE NS_IMETHOD GetImpp(JS::Value *aImpp) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetImpp(aImpp); } \
  NS_SCRIPTABLE NS_IMETHOD SetImpp(const JS::Value & aImpp) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetImpp(aImpp); } \
  NS_SCRIPTABLE NS_IMETHOD GetAnniversary(JS::Value *aAnniversary) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAnniversary(aAnniversary); } \
  NS_SCRIPTABLE NS_IMETHOD SetAnniversary(const JS::Value & aAnniversary) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAnniversary(aAnniversary); } \
  NS_SCRIPTABLE NS_IMETHOD GetSex(JS::Value *aSex) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSex(aSex); } \
  NS_SCRIPTABLE NS_IMETHOD SetSex(const JS::Value & aSex) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSex(aSex); } \
  NS_SCRIPTABLE NS_IMETHOD GetGenderIdentity(JS::Value *aGenderIdentity) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGenderIdentity(aGenderIdentity); } \
  NS_SCRIPTABLE NS_IMETHOD SetGenderIdentity(const JS::Value & aGenderIdentity) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetGenderIdentity(aGenderIdentity); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMContactProperties : public nsIDOMContactProperties
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMCONTACTPROPERTIES

  nsDOMContactProperties();

private:
  ~nsDOMContactProperties();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMContactProperties, nsIDOMContactProperties)

nsDOMContactProperties::nsDOMContactProperties()
{
  /* member initializers and constructor code */
}

nsDOMContactProperties::~nsDOMContactProperties()
{
  /* destructor code */
}

/* attribute jsval name; */
NS_IMETHODIMP nsDOMContactProperties::GetName(JS::Value *aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactProperties::SetName(const JS::Value & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsval honorificPrefix; */
NS_IMETHODIMP nsDOMContactProperties::GetHonorificPrefix(JS::Value *aHonorificPrefix)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactProperties::SetHonorificPrefix(const JS::Value & aHonorificPrefix)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsval givenName; */
NS_IMETHODIMP nsDOMContactProperties::GetGivenName(JS::Value *aGivenName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactProperties::SetGivenName(const JS::Value & aGivenName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsval additionalName; */
NS_IMETHODIMP nsDOMContactProperties::GetAdditionalName(JS::Value *aAdditionalName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactProperties::SetAdditionalName(const JS::Value & aAdditionalName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsval familyName; */
NS_IMETHODIMP nsDOMContactProperties::GetFamilyName(JS::Value *aFamilyName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactProperties::SetFamilyName(const JS::Value & aFamilyName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsval honorificSuffix; */
NS_IMETHODIMP nsDOMContactProperties::GetHonorificSuffix(JS::Value *aHonorificSuffix)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactProperties::SetHonorificSuffix(const JS::Value & aHonorificSuffix)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsval nickname; */
NS_IMETHODIMP nsDOMContactProperties::GetNickname(JS::Value *aNickname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactProperties::SetNickname(const JS::Value & aNickname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsval email; */
NS_IMETHODIMP nsDOMContactProperties::GetEmail(JS::Value *aEmail)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactProperties::SetEmail(const JS::Value & aEmail)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsval photo; */
NS_IMETHODIMP nsDOMContactProperties::GetPhoto(JS::Value *aPhoto)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactProperties::SetPhoto(const JS::Value & aPhoto)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsval url; */
NS_IMETHODIMP nsDOMContactProperties::GetUrl(JS::Value *aUrl)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactProperties::SetUrl(const JS::Value & aUrl)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsval category; */
NS_IMETHODIMP nsDOMContactProperties::GetCategory(JS::Value *aCategory)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactProperties::SetCategory(const JS::Value & aCategory)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsval adr; */
NS_IMETHODIMP nsDOMContactProperties::GetAdr(JS::Value *aAdr)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactProperties::SetAdr(const JS::Value & aAdr)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsval tel; */
NS_IMETHODIMP nsDOMContactProperties::GetTel(JS::Value *aTel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactProperties::SetTel(const JS::Value & aTel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsval org; */
NS_IMETHODIMP nsDOMContactProperties::GetOrg(JS::Value *aOrg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactProperties::SetOrg(const JS::Value & aOrg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsval jobTitle; */
NS_IMETHODIMP nsDOMContactProperties::GetJobTitle(JS::Value *aJobTitle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactProperties::SetJobTitle(const JS::Value & aJobTitle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsval bday; */
NS_IMETHODIMP nsDOMContactProperties::GetBday(JS::Value *aBday)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactProperties::SetBday(const JS::Value & aBday)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsval note; */
NS_IMETHODIMP nsDOMContactProperties::GetNote(JS::Value *aNote)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactProperties::SetNote(const JS::Value & aNote)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsval impp; */
NS_IMETHODIMP nsDOMContactProperties::GetImpp(JS::Value *aImpp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactProperties::SetImpp(const JS::Value & aImpp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsval anniversary; */
NS_IMETHODIMP nsDOMContactProperties::GetAnniversary(JS::Value *aAnniversary)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactProperties::SetAnniversary(const JS::Value & aAnniversary)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsval sex; */
NS_IMETHODIMP nsDOMContactProperties::GetSex(JS::Value *aSex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactProperties::SetSex(const JS::Value & aSex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsval genderIdentity; */
NS_IMETHODIMP nsDOMContactProperties::GetGenderIdentity(JS::Value *aGenderIdentity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMContactProperties::SetGenderIdentity(const JS::Value & aGenderIdentity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMContactProperties_h__ */
