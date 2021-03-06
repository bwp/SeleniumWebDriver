/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/security/manager/ssl/public/nsIX509Cert.idl
 */

#ifndef __gen_nsIX509Cert_h__
#define __gen_nsIX509Cert_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIArray; /* forward declaration */

class nsIX509CertValidity; /* forward declaration */

class nsIASN1Object; /* forward declaration */


/* starting interface:    nsIX509Cert */
#define NS_IX509CERT_IID_STR "f0980f60-ee3d-11d4-998b-00b0d02354a0"

#define NS_IX509CERT_IID \
  {0xf0980f60, 0xee3d, 0x11d4, \
    { 0x99, 0x8b, 0x00, 0xb0, 0xd0, 0x23, 0x54, 0xa0 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIX509Cert : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IX509CERT_IID)

  /* readonly attribute AString nickname; */
  NS_SCRIPTABLE NS_IMETHOD GetNickname(nsAString & aNickname) = 0;

  /* readonly attribute AString emailAddress; */
  NS_SCRIPTABLE NS_IMETHOD GetEmailAddress(nsAString & aEmailAddress) = 0;

  /* void getEmailAddresses (out unsigned long length, [array, size_is (length), retval] out wstring addresses); */
  NS_SCRIPTABLE NS_IMETHOD GetEmailAddresses(PRUint32 *length NS_OUTPARAM, PRUnichar * **addresses NS_OUTPARAM) = 0;

  /* boolean containsEmailAddress (in AString aEmailAddress); */
  NS_SCRIPTABLE NS_IMETHOD ContainsEmailAddress(const nsAString & aEmailAddress, bool *_retval NS_OUTPARAM) = 0;

  /* readonly attribute AString subjectName; */
  NS_SCRIPTABLE NS_IMETHOD GetSubjectName(nsAString & aSubjectName) = 0;

  /* readonly attribute AString commonName; */
  NS_SCRIPTABLE NS_IMETHOD GetCommonName(nsAString & aCommonName) = 0;

  /* readonly attribute AString organization; */
  NS_SCRIPTABLE NS_IMETHOD GetOrganization(nsAString & aOrganization) = 0;

  /* readonly attribute AString organizationalUnit; */
  NS_SCRIPTABLE NS_IMETHOD GetOrganizationalUnit(nsAString & aOrganizationalUnit) = 0;

  /* readonly attribute AString sha1Fingerprint; */
  NS_SCRIPTABLE NS_IMETHOD GetSha1Fingerprint(nsAString & aSha1Fingerprint) = 0;

  /* readonly attribute AString md5Fingerprint; */
  NS_SCRIPTABLE NS_IMETHOD GetMd5Fingerprint(nsAString & aMd5Fingerprint) = 0;

  /* readonly attribute AString tokenName; */
  NS_SCRIPTABLE NS_IMETHOD GetTokenName(nsAString & aTokenName) = 0;

  /* readonly attribute AString issuerName; */
  NS_SCRIPTABLE NS_IMETHOD GetIssuerName(nsAString & aIssuerName) = 0;

  /* readonly attribute AString serialNumber; */
  NS_SCRIPTABLE NS_IMETHOD GetSerialNumber(nsAString & aSerialNumber) = 0;

  /* readonly attribute AString issuerCommonName; */
  NS_SCRIPTABLE NS_IMETHOD GetIssuerCommonName(nsAString & aIssuerCommonName) = 0;

  /* readonly attribute AString issuerOrganization; */
  NS_SCRIPTABLE NS_IMETHOD GetIssuerOrganization(nsAString & aIssuerOrganization) = 0;

  /* readonly attribute AString issuerOrganizationUnit; */
  NS_SCRIPTABLE NS_IMETHOD GetIssuerOrganizationUnit(nsAString & aIssuerOrganizationUnit) = 0;

  /* readonly attribute nsIX509Cert issuer; */
  NS_SCRIPTABLE NS_IMETHOD GetIssuer(nsIX509Cert * *aIssuer) = 0;

  /* readonly attribute nsIX509CertValidity validity; */
  NS_SCRIPTABLE NS_IMETHOD GetValidity(nsIX509CertValidity * *aValidity) = 0;

  /* readonly attribute string dbKey; */
  NS_SCRIPTABLE NS_IMETHOD GetDbKey(char * *aDbKey) = 0;

  /* readonly attribute string windowTitle; */
  NS_SCRIPTABLE NS_IMETHOD GetWindowTitle(char * *aWindowTitle) = 0;

  enum {
    UNKNOWN_CERT = 0U,
    CA_CERT = 1U,
    USER_CERT = 2U,
    EMAIL_CERT = 4U,
    SERVER_CERT = 8U,
    VERIFIED_OK = 0U,
    NOT_VERIFIED_UNKNOWN = 1U,
    CERT_REVOKED = 2U,
    CERT_EXPIRED = 4U,
    CERT_NOT_TRUSTED = 8U,
    ISSUER_NOT_TRUSTED = 16U,
    ISSUER_UNKNOWN = 32U,
    INVALID_CA = 64U,
    USAGE_NOT_ALLOWED = 128U,
    CERT_USAGE_SSLClient = 0U,
    CERT_USAGE_SSLServer = 1U,
    CERT_USAGE_SSLServerWithStepUp = 2U,
    CERT_USAGE_SSLCA = 3U,
    CERT_USAGE_EmailSigner = 4U,
    CERT_USAGE_EmailRecipient = 5U,
    CERT_USAGE_ObjectSigner = 6U,
    CERT_USAGE_UserCertImport = 7U,
    CERT_USAGE_VerifyCA = 8U,
    CERT_USAGE_ProtectedObjectSigner = 9U,
    CERT_USAGE_StatusResponder = 10U,
    CERT_USAGE_AnyCA = 11U
  };

  /* nsIArray getChain (); */
  NS_SCRIPTABLE NS_IMETHOD GetChain(nsIArray * *_retval NS_OUTPARAM) = 0;

  /* void getUsagesArray (in boolean localOnly, out PRUint32 verified, out PRUint32 count, [array, size_is (count)] out wstring usages); */
  NS_SCRIPTABLE NS_IMETHOD GetUsagesArray(bool localOnly, PRUint32 *verified NS_OUTPARAM, PRUint32 *count NS_OUTPARAM, PRUnichar * **usages NS_OUTPARAM) = 0;

  /* void getUsagesString (in boolean localOnly, out PRUint32 verified, out AString usages); */
  NS_SCRIPTABLE NS_IMETHOD GetUsagesString(bool localOnly, PRUint32 *verified NS_OUTPARAM, nsAString & usages NS_OUTPARAM) = 0;

  /* unsigned long verifyForUsage (in unsigned long usage); */
  NS_SCRIPTABLE NS_IMETHOD VerifyForUsage(PRUint32 usage, PRUint32 *_retval NS_OUTPARAM) = 0;

  /* readonly attribute nsIASN1Object ASN1Structure; */
  NS_SCRIPTABLE NS_IMETHOD GetASN1Structure(nsIASN1Object * *aASN1Structure) = 0;

  /* void getRawDER (out unsigned long length, [array, size_is (length), retval] out octet data); */
  NS_SCRIPTABLE NS_IMETHOD GetRawDER(PRUint32 *length NS_OUTPARAM, PRUint8 **data NS_OUTPARAM) = 0;

  /* boolean equals (in nsIX509Cert other); */
  NS_SCRIPTABLE NS_IMETHOD Equals(nsIX509Cert *other, bool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIX509Cert, NS_IX509CERT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIX509CERT \
  NS_SCRIPTABLE NS_IMETHOD GetNickname(nsAString & aNickname); \
  NS_SCRIPTABLE NS_IMETHOD GetEmailAddress(nsAString & aEmailAddress); \
  NS_SCRIPTABLE NS_IMETHOD GetEmailAddresses(PRUint32 *length NS_OUTPARAM, PRUnichar * **addresses NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ContainsEmailAddress(const nsAString & aEmailAddress, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetSubjectName(nsAString & aSubjectName); \
  NS_SCRIPTABLE NS_IMETHOD GetCommonName(nsAString & aCommonName); \
  NS_SCRIPTABLE NS_IMETHOD GetOrganization(nsAString & aOrganization); \
  NS_SCRIPTABLE NS_IMETHOD GetOrganizationalUnit(nsAString & aOrganizationalUnit); \
  NS_SCRIPTABLE NS_IMETHOD GetSha1Fingerprint(nsAString & aSha1Fingerprint); \
  NS_SCRIPTABLE NS_IMETHOD GetMd5Fingerprint(nsAString & aMd5Fingerprint); \
  NS_SCRIPTABLE NS_IMETHOD GetTokenName(nsAString & aTokenName); \
  NS_SCRIPTABLE NS_IMETHOD GetIssuerName(nsAString & aIssuerName); \
  NS_SCRIPTABLE NS_IMETHOD GetSerialNumber(nsAString & aSerialNumber); \
  NS_SCRIPTABLE NS_IMETHOD GetIssuerCommonName(nsAString & aIssuerCommonName); \
  NS_SCRIPTABLE NS_IMETHOD GetIssuerOrganization(nsAString & aIssuerOrganization); \
  NS_SCRIPTABLE NS_IMETHOD GetIssuerOrganizationUnit(nsAString & aIssuerOrganizationUnit); \
  NS_SCRIPTABLE NS_IMETHOD GetIssuer(nsIX509Cert * *aIssuer); \
  NS_SCRIPTABLE NS_IMETHOD GetValidity(nsIX509CertValidity * *aValidity); \
  NS_SCRIPTABLE NS_IMETHOD GetDbKey(char * *aDbKey); \
  NS_SCRIPTABLE NS_IMETHOD GetWindowTitle(char * *aWindowTitle); \
  NS_SCRIPTABLE NS_IMETHOD GetChain(nsIArray * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetUsagesArray(bool localOnly, PRUint32 *verified NS_OUTPARAM, PRUint32 *count NS_OUTPARAM, PRUnichar * **usages NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetUsagesString(bool localOnly, PRUint32 *verified NS_OUTPARAM, nsAString & usages NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD VerifyForUsage(PRUint32 usage, PRUint32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetASN1Structure(nsIASN1Object * *aASN1Structure); \
  NS_SCRIPTABLE NS_IMETHOD GetRawDER(PRUint32 *length NS_OUTPARAM, PRUint8 **data NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Equals(nsIX509Cert *other, bool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIX509CERT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetNickname(nsAString & aNickname) { return _to GetNickname(aNickname); } \
  NS_SCRIPTABLE NS_IMETHOD GetEmailAddress(nsAString & aEmailAddress) { return _to GetEmailAddress(aEmailAddress); } \
  NS_SCRIPTABLE NS_IMETHOD GetEmailAddresses(PRUint32 *length NS_OUTPARAM, PRUnichar * **addresses NS_OUTPARAM) { return _to GetEmailAddresses(length, addresses); } \
  NS_SCRIPTABLE NS_IMETHOD ContainsEmailAddress(const nsAString & aEmailAddress, bool *_retval NS_OUTPARAM) { return _to ContainsEmailAddress(aEmailAddress, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSubjectName(nsAString & aSubjectName) { return _to GetSubjectName(aSubjectName); } \
  NS_SCRIPTABLE NS_IMETHOD GetCommonName(nsAString & aCommonName) { return _to GetCommonName(aCommonName); } \
  NS_SCRIPTABLE NS_IMETHOD GetOrganization(nsAString & aOrganization) { return _to GetOrganization(aOrganization); } \
  NS_SCRIPTABLE NS_IMETHOD GetOrganizationalUnit(nsAString & aOrganizationalUnit) { return _to GetOrganizationalUnit(aOrganizationalUnit); } \
  NS_SCRIPTABLE NS_IMETHOD GetSha1Fingerprint(nsAString & aSha1Fingerprint) { return _to GetSha1Fingerprint(aSha1Fingerprint); } \
  NS_SCRIPTABLE NS_IMETHOD GetMd5Fingerprint(nsAString & aMd5Fingerprint) { return _to GetMd5Fingerprint(aMd5Fingerprint); } \
  NS_SCRIPTABLE NS_IMETHOD GetTokenName(nsAString & aTokenName) { return _to GetTokenName(aTokenName); } \
  NS_SCRIPTABLE NS_IMETHOD GetIssuerName(nsAString & aIssuerName) { return _to GetIssuerName(aIssuerName); } \
  NS_SCRIPTABLE NS_IMETHOD GetSerialNumber(nsAString & aSerialNumber) { return _to GetSerialNumber(aSerialNumber); } \
  NS_SCRIPTABLE NS_IMETHOD GetIssuerCommonName(nsAString & aIssuerCommonName) { return _to GetIssuerCommonName(aIssuerCommonName); } \
  NS_SCRIPTABLE NS_IMETHOD GetIssuerOrganization(nsAString & aIssuerOrganization) { return _to GetIssuerOrganization(aIssuerOrganization); } \
  NS_SCRIPTABLE NS_IMETHOD GetIssuerOrganizationUnit(nsAString & aIssuerOrganizationUnit) { return _to GetIssuerOrganizationUnit(aIssuerOrganizationUnit); } \
  NS_SCRIPTABLE NS_IMETHOD GetIssuer(nsIX509Cert * *aIssuer) { return _to GetIssuer(aIssuer); } \
  NS_SCRIPTABLE NS_IMETHOD GetValidity(nsIX509CertValidity * *aValidity) { return _to GetValidity(aValidity); } \
  NS_SCRIPTABLE NS_IMETHOD GetDbKey(char * *aDbKey) { return _to GetDbKey(aDbKey); } \
  NS_SCRIPTABLE NS_IMETHOD GetWindowTitle(char * *aWindowTitle) { return _to GetWindowTitle(aWindowTitle); } \
  NS_SCRIPTABLE NS_IMETHOD GetChain(nsIArray * *_retval NS_OUTPARAM) { return _to GetChain(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetUsagesArray(bool localOnly, PRUint32 *verified NS_OUTPARAM, PRUint32 *count NS_OUTPARAM, PRUnichar * **usages NS_OUTPARAM) { return _to GetUsagesArray(localOnly, verified, count, usages); } \
  NS_SCRIPTABLE NS_IMETHOD GetUsagesString(bool localOnly, PRUint32 *verified NS_OUTPARAM, nsAString & usages NS_OUTPARAM) { return _to GetUsagesString(localOnly, verified, usages); } \
  NS_SCRIPTABLE NS_IMETHOD VerifyForUsage(PRUint32 usage, PRUint32 *_retval NS_OUTPARAM) { return _to VerifyForUsage(usage, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetASN1Structure(nsIASN1Object * *aASN1Structure) { return _to GetASN1Structure(aASN1Structure); } \
  NS_SCRIPTABLE NS_IMETHOD GetRawDER(PRUint32 *length NS_OUTPARAM, PRUint8 **data NS_OUTPARAM) { return _to GetRawDER(length, data); } \
  NS_SCRIPTABLE NS_IMETHOD Equals(nsIX509Cert *other, bool *_retval NS_OUTPARAM) { return _to Equals(other, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIX509CERT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetNickname(nsAString & aNickname) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNickname(aNickname); } \
  NS_SCRIPTABLE NS_IMETHOD GetEmailAddress(nsAString & aEmailAddress) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEmailAddress(aEmailAddress); } \
  NS_SCRIPTABLE NS_IMETHOD GetEmailAddresses(PRUint32 *length NS_OUTPARAM, PRUnichar * **addresses NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEmailAddresses(length, addresses); } \
  NS_SCRIPTABLE NS_IMETHOD ContainsEmailAddress(const nsAString & aEmailAddress, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ContainsEmailAddress(aEmailAddress, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSubjectName(nsAString & aSubjectName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSubjectName(aSubjectName); } \
  NS_SCRIPTABLE NS_IMETHOD GetCommonName(nsAString & aCommonName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCommonName(aCommonName); } \
  NS_SCRIPTABLE NS_IMETHOD GetOrganization(nsAString & aOrganization) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOrganization(aOrganization); } \
  NS_SCRIPTABLE NS_IMETHOD GetOrganizationalUnit(nsAString & aOrganizationalUnit) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOrganizationalUnit(aOrganizationalUnit); } \
  NS_SCRIPTABLE NS_IMETHOD GetSha1Fingerprint(nsAString & aSha1Fingerprint) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSha1Fingerprint(aSha1Fingerprint); } \
  NS_SCRIPTABLE NS_IMETHOD GetMd5Fingerprint(nsAString & aMd5Fingerprint) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMd5Fingerprint(aMd5Fingerprint); } \
  NS_SCRIPTABLE NS_IMETHOD GetTokenName(nsAString & aTokenName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTokenName(aTokenName); } \
  NS_SCRIPTABLE NS_IMETHOD GetIssuerName(nsAString & aIssuerName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIssuerName(aIssuerName); } \
  NS_SCRIPTABLE NS_IMETHOD GetSerialNumber(nsAString & aSerialNumber) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSerialNumber(aSerialNumber); } \
  NS_SCRIPTABLE NS_IMETHOD GetIssuerCommonName(nsAString & aIssuerCommonName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIssuerCommonName(aIssuerCommonName); } \
  NS_SCRIPTABLE NS_IMETHOD GetIssuerOrganization(nsAString & aIssuerOrganization) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIssuerOrganization(aIssuerOrganization); } \
  NS_SCRIPTABLE NS_IMETHOD GetIssuerOrganizationUnit(nsAString & aIssuerOrganizationUnit) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIssuerOrganizationUnit(aIssuerOrganizationUnit); } \
  NS_SCRIPTABLE NS_IMETHOD GetIssuer(nsIX509Cert * *aIssuer) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIssuer(aIssuer); } \
  NS_SCRIPTABLE NS_IMETHOD GetValidity(nsIX509CertValidity * *aValidity) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValidity(aValidity); } \
  NS_SCRIPTABLE NS_IMETHOD GetDbKey(char * *aDbKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDbKey(aDbKey); } \
  NS_SCRIPTABLE NS_IMETHOD GetWindowTitle(char * *aWindowTitle) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWindowTitle(aWindowTitle); } \
  NS_SCRIPTABLE NS_IMETHOD GetChain(nsIArray * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChain(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetUsagesArray(bool localOnly, PRUint32 *verified NS_OUTPARAM, PRUint32 *count NS_OUTPARAM, PRUnichar * **usages NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUsagesArray(localOnly, verified, count, usages); } \
  NS_SCRIPTABLE NS_IMETHOD GetUsagesString(bool localOnly, PRUint32 *verified NS_OUTPARAM, nsAString & usages NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUsagesString(localOnly, verified, usages); } \
  NS_SCRIPTABLE NS_IMETHOD VerifyForUsage(PRUint32 usage, PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->VerifyForUsage(usage, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetASN1Structure(nsIASN1Object * *aASN1Structure) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetASN1Structure(aASN1Structure); } \
  NS_SCRIPTABLE NS_IMETHOD GetRawDER(PRUint32 *length NS_OUTPARAM, PRUint8 **data NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRawDER(length, data); } \
  NS_SCRIPTABLE NS_IMETHOD Equals(nsIX509Cert *other, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Equals(other, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsX509Cert : public nsIX509Cert
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIX509CERT

  nsX509Cert();

private:
  ~nsX509Cert();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsX509Cert, nsIX509Cert)

nsX509Cert::nsX509Cert()
{
  /* member initializers and constructor code */
}

nsX509Cert::~nsX509Cert()
{
  /* destructor code */
}

/* readonly attribute AString nickname; */
NS_IMETHODIMP nsX509Cert::GetNickname(nsAString & aNickname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString emailAddress; */
NS_IMETHODIMP nsX509Cert::GetEmailAddress(nsAString & aEmailAddress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getEmailAddresses (out unsigned long length, [array, size_is (length), retval] out wstring addresses); */
NS_IMETHODIMP nsX509Cert::GetEmailAddresses(PRUint32 *length NS_OUTPARAM, PRUnichar * **addresses NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean containsEmailAddress (in AString aEmailAddress); */
NS_IMETHODIMP nsX509Cert::ContainsEmailAddress(const nsAString & aEmailAddress, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString subjectName; */
NS_IMETHODIMP nsX509Cert::GetSubjectName(nsAString & aSubjectName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString commonName; */
NS_IMETHODIMP nsX509Cert::GetCommonName(nsAString & aCommonName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString organization; */
NS_IMETHODIMP nsX509Cert::GetOrganization(nsAString & aOrganization)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString organizationalUnit; */
NS_IMETHODIMP nsX509Cert::GetOrganizationalUnit(nsAString & aOrganizationalUnit)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString sha1Fingerprint; */
NS_IMETHODIMP nsX509Cert::GetSha1Fingerprint(nsAString & aSha1Fingerprint)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString md5Fingerprint; */
NS_IMETHODIMP nsX509Cert::GetMd5Fingerprint(nsAString & aMd5Fingerprint)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString tokenName; */
NS_IMETHODIMP nsX509Cert::GetTokenName(nsAString & aTokenName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString issuerName; */
NS_IMETHODIMP nsX509Cert::GetIssuerName(nsAString & aIssuerName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString serialNumber; */
NS_IMETHODIMP nsX509Cert::GetSerialNumber(nsAString & aSerialNumber)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString issuerCommonName; */
NS_IMETHODIMP nsX509Cert::GetIssuerCommonName(nsAString & aIssuerCommonName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString issuerOrganization; */
NS_IMETHODIMP nsX509Cert::GetIssuerOrganization(nsAString & aIssuerOrganization)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString issuerOrganizationUnit; */
NS_IMETHODIMP nsX509Cert::GetIssuerOrganizationUnit(nsAString & aIssuerOrganizationUnit)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIX509Cert issuer; */
NS_IMETHODIMP nsX509Cert::GetIssuer(nsIX509Cert * *aIssuer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIX509CertValidity validity; */
NS_IMETHODIMP nsX509Cert::GetValidity(nsIX509CertValidity * *aValidity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute string dbKey; */
NS_IMETHODIMP nsX509Cert::GetDbKey(char * *aDbKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute string windowTitle; */
NS_IMETHODIMP nsX509Cert::GetWindowTitle(char * *aWindowTitle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIArray getChain (); */
NS_IMETHODIMP nsX509Cert::GetChain(nsIArray * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getUsagesArray (in boolean localOnly, out PRUint32 verified, out PRUint32 count, [array, size_is (count)] out wstring usages); */
NS_IMETHODIMP nsX509Cert::GetUsagesArray(bool localOnly, PRUint32 *verified NS_OUTPARAM, PRUint32 *count NS_OUTPARAM, PRUnichar * **usages NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getUsagesString (in boolean localOnly, out PRUint32 verified, out AString usages); */
NS_IMETHODIMP nsX509Cert::GetUsagesString(bool localOnly, PRUint32 *verified NS_OUTPARAM, nsAString & usages NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long verifyForUsage (in unsigned long usage); */
NS_IMETHODIMP nsX509Cert::VerifyForUsage(PRUint32 usage, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIASN1Object ASN1Structure; */
NS_IMETHODIMP nsX509Cert::GetASN1Structure(nsIASN1Object * *aASN1Structure)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getRawDER (out unsigned long length, [array, size_is (length), retval] out octet data); */
NS_IMETHODIMP nsX509Cert::GetRawDER(PRUint32 *length NS_OUTPARAM, PRUint8 **data NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean equals (in nsIX509Cert other); */
NS_IMETHODIMP nsX509Cert::Equals(nsIX509Cert *other, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIX509Cert_h__ */
