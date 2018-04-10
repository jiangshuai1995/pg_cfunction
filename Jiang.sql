--DROP FUNCTION  public.add_one(integer);

CREATE OR REPLACE FUNCTION public.add_one(integer)
  RETURNS integer AS
  '$libdir/add_one','add_one'
  LANGUAGE C STRICT;
  
  
  
--DROP FUNCTION  public.version();

CREATE OR REPLACE FUNCTION public.version()
  RETURNS TEXT AS
  '$libdir/version','version'
  LANGUAGE C STRICT;
  
  
  
--DROP FUNCTION  public.wrong();

CREATE OR REPLACE FUNCTION public.wrong()
  RETURNS TEXT AS
  '$libdir/wrong','wrong'
  LANGUAGE C STRICT;
