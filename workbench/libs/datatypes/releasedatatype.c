/*
    Copyright (C) 1995-2020, The AROS Development Team. All rights reserved.

    Desc:
*/

#include "datatypes_intern.h"
#include <proto/exec.h>
#include <exec/alerts.h>

/*****************************************************************************

    NAME */
#include <proto/datatypes.h>

        AROS_LH1(VOID, ReleaseDataType,

/*  SYNOPSIS */
        AROS_LHA(struct DataType *, dt, A0),

/*  LOCATION */
        struct Library *, DataTypesBase, 7, DataTypes)

/*  FUNCTION

    Release a DataType structure aquired by ObtainDataTypeA().

    INPUTS

    dt  --  DataType structure as returned by ObtainDataTypeA(); NULL is
            a valid input.

    RESULT

    NOTES

    EXAMPLE

    BUGS

    SEE ALSO

    ObtainDataTypeA()

    INTERNALS

    HISTORY

*****************************************************************************/
{
    AROS_LIBFUNC_INIT

    D(bug("datatypes.library/ReleaseDataType: Entering routine.\n"));
    
    if(!dt)
    {
        D(bug("datatypes.library/ReleaseDataType: was given an invalid datatype addr = %x\n", dt));
        return;
    }

    ObtainSemaphoreShared(&(GPB(DataTypesBase)->dtb_DTList)->dtl_Lock);

    if(((struct CompoundDataType *)dt)->OpenCount)
        ((struct CompoundDataType*)dt)->OpenCount--;
    else
    {
        /* Alert(AN_Unknown); */
        D(bug("datatypes.library/ReleaseDataType: OpenCount was already 0!\n"));
    }

    ReleaseSemaphore(&(GPB(DataTypesBase)->dtb_DTList)->dtl_Lock);

    D(bug("datatypes.library/ReleaseDataType: Done.\n"));

    AROS_LIBFUNC_EXIT
} /* ReleaseDataType */
