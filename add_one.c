/*
    This is the first c-language function by @Jiang
    setup—time ： Apr. 10th 2018 
    -----------------------------------------------
    add_one  Enter a number(int) and output the value it add one.
    eg：     select add_one(1);
    result:  2    
*/


#include "postgres.h"
#include "fmgr.h"
#ifdef PG_MODULE_MAGIC
PG_MODULE_MAGIC;
#endif

PG_FUNCTION_INFO_V1(add_one);

Datum
add_one(PG_FUNCTION_ARGS)
{
  int32 arg = PG_GETARG_INT32(0);
  PG_RETURN_INT32(arg+1);
}
