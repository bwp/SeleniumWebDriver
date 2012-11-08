/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/base/public/nsIAuthPrompt.idl
 */

#ifndef __gen_nsIAuthPrompt_h__
#define __gen_nsIAuthPrompt_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIPrompt; /* forward declaration */


/* starting interface:    nsIAuthPrompt */
#define NS_IAUTHPROMPT_IID_STR "358089f9-ee4b-4711-82fd-bcd07fc62061"

#define NS_IAUTHPROMPT_IID \
  {0x358089f9, 0xee4b, 0x4711, \
    { 0x82, 0xfd, 0xbc, 0xd0, 0x7f, 0xc6, 0x20, 0x61 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIAuthPrompt : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IAUTHPROMPT_IID)

  enum { SAVE_PASSWORD_NEVER = 0U };

  enum { SAVE_PASSWORD_FOR_SESSION = 1U };

  enum { SAVE_PASSWORD_PERMANENTLY = 2U };

  /* boolean prompt (in wstring dialogTitle, in wstring text, in wstring passwordRealm, in PRUint32 savePassword, in wstring defaultText, out wstring result); */
  NS_SCRIPTABLE NS_IMETHOD Prompt(const PRUnichar * dialogTitle, const PRUnichar * text, const PRUnichar * passwordRealm, PRUint32 savePassword, const PRUnichar * defaultText, PRUnichar * *result NS_OUTPARAM, bool *_retval NS_OUTPARAM) = 0;

  /* boolean promptUsernameAndPassword (in wstring dialogTitle, in wstring text, in wstring passwordRealm, in PRUint32 savePassword, inout wstring user, inout wstring pwd); */
  NS_SCRIPTABLE NS_IMETHOD PromptUsernameAndPassword(const PRUnichar * dialogTitle, const PRUnichar * text, const PRUnichar * passwordRealm, PRUint32 savePassword, PRUnichar * *user NS_INOUTPARAM, PRUnichar * *pwd NS_INOUTPARAM, bool *_retval NS_OUTPARAM) = 0;

  /* boolean promptPassword (in wstring dialogTitle, in wstring text, in wstring passwordRealm, in PRUint32 savePassword, inout wstring pwd); */
  NS_SCRIPTABLE NS_IMETHOD PromptPassword(const PRUnichar * dialogTitle, const PRUnichar * text, const PRUnichar * passwordRealm, PRUint32 savePassword, PRUnichar * *pwd NS_INOUTPARAM, bool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAuthPrompt, NS_IAUTHPROMPT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIAUTHPROMPT \
  NS_SCRIPTABLE NS_IMETHOD Prompt(const PRUnichar * dialogTitle, const PRUnichar * text, const PRUnichar * passwordRealm, PRUint32 savePassword, const PRUnichar * defaultText, PRUnichar * *result NS_OUTPARAM, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD PromptUsernameAndPassword(const PRUnichar * dialogTitle, const PRUnichar * text, const PRUnichar * passwordRealm, PRUint32 savePassword, PRUnichar * *user NS_INOUTPARAM, PRUnichar * *pwd NS_INOUTPARAM, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD PromptPassword(const PRUnichar * dialogTitle, const PRUnichar * text, const PRUnichar * passwordRealm, PRUint32 savePassword, PRUnichar * *pwd NS_INOUTPARAM, bool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIAUTHPROMPT(_to) \
  NS_SCRIPTABLE NS_IMETHOD Prompt(const PRUnichar * dialogTitle, const PRUnichar * text, const PRUnichar * passwordRealm, PRUint32 savePassword, const PRUnichar * defaultText, PRUnichar * *result NS_OUTPARAM, bool *_retval NS_OUTPARAM) { return _to Prompt(dialogTitle, text, passwordRealm, savePassword, defaultText, result, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD PromptUsernameAndPassword(const PRUnichar * dialogTitle, const PRUnichar * text, const PRUnichar * passwordRealm, PRUint32 savePassword, PRUnichar * *user NS_INOUTPARAM, PRUnichar * *pwd NS_INOUTPARAM, bool *_retval NS_OUTPARAM) { return _to PromptUsernameAndPassword(dialogTitle, text, passwordRealm, savePassword, user, pwd, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD PromptPassword(const PRUnichar * dialogTitle, const PRUnichar * text, const PRUnichar * passwordRealm, PRUint32 savePassword, PRUnichar * *pwd NS_INOUTPARAM, bool *_retval NS_OUTPARAM) { return _to PromptPassword(dialogTitle, text, passwordRealm, savePassword, pwd, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIAUTHPROMPT(_to) \
  NS_SCRIPTABLE NS_IMETHOD Prompt(const PRUnichar * dialogTitle, const PRUnichar * text, const PRUnichar * passwordRealm, PRUint32 savePassword, const PRUnichar * defaultText, PRUnichar * *result NS_OUTPARAM, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Prompt(dialogTitle, text, passwordRealm, savePassword, defaultText, result, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD PromptUsernameAndPassword(const PRUnichar * dialogTitle, const PRUnichar * text, const PRUnichar * passwordRealm, PRUint32 savePassword, PRUnichar * *user NS_INOUTPARAM, PRUnichar * *pwd NS_INOUTPARAM, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->PromptUsernameAndPassword(dialogTitle, text, passwordRealm, savePassword, user, pwd, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD PromptPassword(const PRUnichar * dialogTitle, const PRUnichar * text, const PRUnichar * passwordRealm, PRUint32 savePassword, PRUnichar * *pwd NS_INOUTPARAM, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->PromptPassword(dialogTitle, text, passwordRealm, savePassword, pwd, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAuthPrompt : public nsIAuthPrompt
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIAUTHPROMPT

  nsAuthPrompt();

private:
  ~nsAuthPrompt();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsAuthPrompt, nsIAuthPrompt)

nsAuthPrompt::nsAuthPrompt()
{
  /* member initializers and constructor code */
}

nsAuthPrompt::~nsAuthPrompt()
{
  /* destructor code */
}

/* boolean prompt (in wstring dialogTitle, in wstring text, in wstring passwordRealm, in PRUint32 savePassword, in wstring defaultText, out wstring result); */
NS_IMETHODIMP nsAuthPrompt::Prompt(const PRUnichar * dialogTitle, const PRUnichar * text, const PRUnichar * passwordRealm, PRUint32 savePassword, const PRUnichar * defaultText, PRUnichar * *result NS_OUTPARAM, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean promptUsernameAndPassword (in wstring dialogTitle, in wstring text, in wstring passwordRealm, in PRUint32 savePassword, inout wstring user, inout wstring pwd); */
NS_IMETHODIMP nsAuthPrompt::PromptUsernameAndPassword(const PRUnichar * dialogTitle, const PRUnichar * text, const PRUnichar * passwordRealm, PRUint32 savePassword, PRUnichar * *user NS_INOUTPARAM, PRUnichar * *pwd NS_INOUTPARAM, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean promptPassword (in wstring dialogTitle, in wstring text, in wstring passwordRealm, in PRUint32 savePassword, inout wstring pwd); */
NS_IMETHODIMP nsAuthPrompt::PromptPassword(const PRUnichar * dialogTitle, const PRUnichar * text, const PRUnichar * passwordRealm, PRUint32 savePassword, PRUnichar * *pwd NS_INOUTPARAM, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIAuthPrompt_h__ */
