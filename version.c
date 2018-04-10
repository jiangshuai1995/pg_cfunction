/*
    setup time : Apr. 10th by@Jiang
----------------------------------------
    version() : show version
    eg:         select version();
    result:     "TEST-0.1 by Jiang"
*/

#include "postgres.h"
#include "fmgr.h"
#indef PG_MODULE_MAGIC
PG_MODULE_MAGIC;
#endif

#define VERSION_STR  "TEST-0.1 by Jiang"

PG_FUNCTION_INFO_V1(version);

Datum
version()
{
  PG_RETURN_TEXT_P(cstring_to_text(VERSION_STR));
}

