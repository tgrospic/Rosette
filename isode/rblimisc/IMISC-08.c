/* automatically generated by pepy 7.0 #14 (nanook.mcc.com), do not edit! */

#include "psap.h"

#define	advise	PY_advise

void	advise ();

/* Generated from module IMISC */

#include <stdio.h>
#include "IMISC-types.h"

#ifndef PEPYPARM
#define PEPYPARM char *
#endif /* PEPYPARM */
extern PEPYPARM NullParm;

/* ARGSUSED */

int	decode_IMISC_UTCResult (pe, explicit, len, buffer, parm)
register PE	pe;
int	explicit;
int    *len;
char  **buffer;
struct type_IMISC_UTCResult ** parm;
{
#ifdef DEBUG
    (void) testdebug (pe, "IMISC.UTCResult");
#endif

    if (decode_UNIV_UniversalTime (pe, explicit, len, buffer, &((*parm))) == NOTOK)
        return NOTOK;

    return OK;
}
