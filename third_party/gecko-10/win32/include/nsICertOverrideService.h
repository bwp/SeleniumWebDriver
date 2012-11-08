/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/security/manager/ssl/public/nsICertOverrideService.idl
 */

#ifndef __gen_nsICertOverrideService_h__
#define __gen_nsICertOverrideService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIArray; /* forward declaration */

class nsIX509Cert; /* forward declaration */

#define NS_CERTOVERRIDE_CONTRACTID "@mozilla.org/security/certoverride;1"

/* starting interface:    nsICertOverrideService */
#define NS_ICERTOVERRIDESERVICE_IID_STR "31738d2a-77d3-4359-84c9-4be2f38fb8c5"

#define NS_ICERTOVERRIDESERVICE_IID \
  {0x31738d2a, 0x77d3, 0x4359, \
    { 0x84, 0xc9, 0x4b, 0xe2, 0xf3, 0x8f, 0xb8, 0xc5 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsICertOverrideService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICERTOVERRIDESERVICE_IID)

  enum { ERROR_UNTRUSTED = 1 };

  enum { ERROR_MISMATCH = 2 };

  enum { ERROR_TIME = 4 };

  /* void rememberValidityOverride (in ACString aHostName, in PRInt32 aPort, in nsIX509Cert aCert, in PRUint32 aOverrideBits, in boolean aTemporary); */
  NS_SCRIPTABLE NS_IMETHOD RememberValidityOverride(const nsACString & aHostName, PRInt32 aPort, nsIX509Cert *aCert, PRUint32 aOverrideBits, bool aTemporary) = 0;

  /* boolean hasMatchingOverride (in ACString aHostName, in PRInt32 aPort, in nsIX509Cert aCert, out PRUint32 aOverrideBits, out boolean aIsTemporary); */
  NS_SCRIPTABLE NS_IMETHOD HasMatchingOverride(const nsACString & aHostName, PRInt32 aPort, nsIX509Cert *aCert, PRUint32 *aOverrideBits NS_OUTPARAM, bool *aIsTemporary NS_OUTPARAM, bool *_retval NS_OUTPARAM) = 0;

  /* boolean getValidityOverride (in ACString aHostName, in PRInt32 aPort, out ACString aHashAlg, out ACString aFingerprint, out PRUint32 aOverrideBits, out boolean aIsTemporary); */
  NS_SCRIPTABLE NS_IMETHOD GetValidityOverride(const nsACString & aHostName, PRInt32 aPort, nsACString & aHashAlg NS_OUTPARAM, nsACString & aFingerprint NS_OUTPARAM, PRUint32 *aOverrideBits NS_OUTPARAM, bool *aIsTemporary NS_OUTPARAM, bool *_retval NS_OUTPARAM) = 0;

  /* void clearValidityOverride (in ACString aHostName, in PRInt32 aPort); */
  NS_SCRIPTABLE NS_IMETHOD ClearValidityOverride(const nsACString & aHostName, PRInt32 aPort) = 0;

  /* void getAllOverrideHostsWithPorts (out PRUint32 aCount, [array, size_is (aCount)] out wstring aHostsWithPortsArray); */
  NS_SCRIPTABLE NS_IMETHOD GetAllOverrideHostsWithPorts(PRUint32 *aCount NS_OUTPARAM, PRUnichar * **aHostsWithPortsArray NS_OUTPARAM) = 0;

  /* PRUint32 isCertUsedForOverrides (in nsIX509Cert aCert, in boolean aCheckTemporaries, in boolean aCheckPermanents); */
  NS_SCRIPTABLE NS_IMETHOD IsCertUsedForOverrides(nsIX509Cert *aCert, bool aCheckTemporaries, bool aCheckPermanents, PRUint32 *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICertOverrideService, NS_ICERTOVERRIDESERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICERTOVERRIDESERVICE \
  NS_SCRIPTABLE NS_IMETHOD RememberValidityOverride(const nsACString & aHostName, PRInt32 aPort, nsIX509Cert *aCert, PRUint32 aOverrideBits, bool aTemporary); \
  NS_SCRIPTABLE NS_IMETHOD HasMatchingOverride(const nsACString & aHostName, PRInt32 aPort, nsIX509Cert *aCert, PRUint32 *aOverrideBits NS_OUTPARAM, bool *aIsTemporary NS_OUTPARAM, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetValidityOverride(const nsACString & aHostName, PRInt32 aPort, nsACString & aHashAlg NS_OUTPARAM, nsACString & aFingerprint NS_OUTPARAM, PRUint32 *aOverrideBits NS_OUTPARAM, bool *aIsTemporary NS_OUTPARAM, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ClearValidityOverride(const nsACString & aHostName, PRInt32 aPort); \
  NS_SCRIPTABLE NS_IMETHOD GetAllOverrideHostsWithPorts(PRUint32 *aCount NS_OUTPARAM, PRUnichar * **aHostsWithPortsArray NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsCertUsedForOverrides(nsIX509Cert *aCert, bool aCheckTemporaries, bool aCheckPermanents, PRUint32 *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICERTOVERRIDESERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD RememberValidityOverride(const nsACString & aHostName, PRInt32 aPort, nsIX509Cert *aCert, PRUint32 aOverrideBits, bool aTemporary) { return _to RememberValidityOverride(aHostName, aPort, aCert, aOverrideBits, aTemporary); } \
  NS_SCRIPTABLE NS_IMETHOD HasMatchingOverride(const nsACString & aHostName, PRInt32 aPort, nsIX509Cert *aCert, PRUint32 *aOverrideBits NS_OUTPARAM, bool *aIsTemporary NS_OUTPARAM, bool *_retval NS_OUTPARAM) { return _to HasMatchingOverride(aHostName, aPort, aCert, aOverrideBits, aIsTemporary, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetValidityOverride(const nsACString & aHostName, PRInt32 aPort, nsACString & aHashAlg NS_OUTPARAM, nsACString & aFingerprint NS_OUTPARAM, PRUint32 *aOverrideBits NS_OUTPARAM, bool *aIsTemporary NS_OUTPARAM, bool *_retval NS_OUTPARAM) { return _to GetValidityOverride(aHostName, aPort, aHashAlg, aFingerprint, aOverrideBits, aIsTemporary, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ClearValidityOverride(const nsACString & aHostName, PRInt32 aPort) { return _to ClearValidityOverride(aHostName, aPort); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllOverrideHostsWithPorts(PRUint32 *aCount NS_OUTPARAM, PRUnichar * **aHostsWithPortsArray NS_OUTPARAM) { return _to GetAllOverrideHostsWithPorts(aCount, aHostsWithPortsArray); } \
  NS_SCRIPTABLE NS_IMETHOD IsCertUsedForOverrides(nsIX509Cert *aCert, bool aCheckTemporaries, bool aCheckPermanents, PRUint32 *_retval NS_OUTPARAM) { return _to IsCertUsedForOverrides(aCert, aCheckTemporaries, aCheckPermanents, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICERTOVERRIDESERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD RememberValidityOverride(const nsACString & aHostName, PRInt32 aPort, nsIX509Cert *aCert, PRUint32 aOverrideBits, bool aTemporary) { return !_to ? NS_ERROR_NULL_POINTER : _to->RememberValidityOverride(aHostName, aPort, aCert, aOverrideBits, aTemporary); } \
  NS_SCRIPTABLE NS_IMETHOD HasMatchingOverride(const nsACString & aHostName, PRInt32 aPort, nsIX509Cert *aCert, PRUint32 *aOverrideBits NS_OUTPARAM, bool *aIsTemporary NS_OUTPARAM, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasMatchingOverride(aHostName, aPort, aCert, aOverrideBits, aIsTemporary, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetValidityOverride(const nsACString & aHostName, PRInt32 aPort, nsACString & aHashAlg NS_OUTPARAM, nsACString & aFingerprint NS_OUTPARAM, PRUint32 *aOverrideBits NS_OUTPARAM, bool *aIsTemporary NS_OUTPARAM, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValidityOverride(aHostName, aPort, aHashAlg, aFingerprint, aOverrideBits, aIsTemporary, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ClearValidityOverride(const nsACString & aHostName, PRInt32 aPort) { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearValidityOverride(aHostName, aPort); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllOverrideHostsWithPorts(PRUint32 *aCount NS_OUTPARAM, PRUnichar * **aHostsWithPortsArray NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllOverrideHostsWithPorts(aCount, aHostsWithPortsArray); } \
  NS_SCRIPTABLE NS_IMETHOD IsCertUsedForOverrides(nsIX509Cert *aCert, bool aCheckTemporaries, bool aCheckPermanents, PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsCertUsedForOverrides(aCert, aCheckTemporaries, aCheckPermanents, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCertOverrideService : public nsICertOverrideService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICERTOVERRIDESERVICE

  nsCertOverrideService();

private:
  ~nsCertOverrideService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsCertOverrideService, nsICertOverrideService)

nsCertOverrideService::nsCertOverrideService()
{
  /* member initializers and constructor code */
}

nsCertOverrideService::~nsCertOverrideService()
{
  /* destructor code */
}

/* void rememberValidityOverride (in ACString aHostName, in PRInt32 aPort, in nsIX509Cert aCert, in PRUint32 aOverrideBits, in boolean aTemporary); */
NS_IMETHODIMP nsCertOverrideService::RememberValidityOverride(const nsACString & aHostName, PRInt32 aPort, nsIX509Cert *aCert, PRUint32 aOverrideBits, bool aTemporary)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean hasMatchingOverride (in ACString aHostName, in PRInt32 aPort, in nsIX509Cert aCert, out PRUint32 aOverrideBits, out boolean aIsTemporary); */
NS_IMETHODIMP nsCertOverrideService::HasMatchingOverride(const nsACString & aHostName, PRInt32 aPort, nsIX509Cert *aCert, PRUint32 *aOverrideBits NS_OUTPARAM, bool *aIsTemporary NS_OUTPARAM, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean getValidityOverride (in ACString aHostName, in PRInt32 aPort, out ACString aHashAlg, out ACString aFingerprint, out PRUint32 aOverrideBits, out boolean aIsTemporary); */
NS_IMETHODIMP nsCertOverrideService::GetValidityOverride(const nsACString & aHostName, PRInt32 aPort, nsACString & aHashAlg NS_OUTPARAM, nsACString & aFingerprint NS_OUTPARAM, PRUint32 *aOverrideBits NS_OUTPARAM, bool *aIsTemporary NS_OUTPARAM, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearValidityOverride (in ACString aHostName, in PRInt32 aPort); */
NS_IMETHODIMP nsCertOverrideService::ClearValidityOverride(const nsACString & aHostName, PRInt32 aPort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getAllOverrideHostsWithPorts (out PRUint32 aCount, [array, size_is (aCount)] out wstring aHostsWithPortsArray); */
NS_IMETHODIMP nsCertOverrideService::GetAllOverrideHostsWithPorts(PRUint32 *aCount NS_OUTPARAM, PRUnichar * **aHostsWithPortsArray NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* PRUint32 isCertUsedForOverrides (in nsIX509Cert aCert, in boolean aCheckTemporaries, in boolean aCheckPermanents); */
NS_IMETHODIMP nsCertOverrideService::IsCertUsedForOverrides(nsIX509Cert *aCert, bool aCheckTemporaries, bool aCheckPermanents, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsICertOverrideService_h__ */
