/*
    This is a wrong function,will log in log-file
    
    setup time : Apr. 10th 2018 by @Jiang
-----------------------------------------------------
    wrong()      Do noting
    eg：         select wrong();
    result:      error:This is a wrong function
*/

#include "postgres.h"
#include "utils/elog.h"
#include "fmgr.h"
#ifdef PG_MODULE_MAGIC
PG_MODULE_MAGIC;
#endif

PG_FUNCTION_INFO_V1(wrong);

Datum
wrong()
{
  elog(ERROR,"This is a wrong function")
}
    
