/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef mozilla_dom_DocumentRendererShmemChild
#define mozilla_dom_DocumentRendererShmemChild

#include "mozilla/ipc/PDocumentRendererShmemChild.h"

class nsIDOMWindow;
struct gfxMatrix;

namespace mozilla {
namespace ipc {

class DocumentRendererShmemChild : public PDocumentRendererShmemChild
{
public:
    DocumentRendererShmemChild();
    virtual ~DocumentRendererShmemChild();

    bool RenderDocument(nsIDOMWindow *window, const PRInt32& x,
                        const PRInt32& y, const PRInt32& w,
                        const PRInt32& h, const nsString& aBGColor,
                        const PRUint32& flags, const bool& flush,
                        const gfxMatrix& aMatrix,
                        Shmem& data);

private:

    DISALLOW_EVIL_CONSTRUCTORS(DocumentRendererShmemChild);
};

}
}

#endif
