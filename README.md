# pg_cfunction
study creating C-language Function in PostgreSQL 
------------------------------------------------
eg:  gcc -I /opt/BeyonDB/5.0/include/postgresql/server -c add_one.c -fPIC
     gcc -shared -o add_one.so add_one.o
     cp  add_one.so  /opt/BeyonDB/5.0/lib/postgresql
-----------------------------------------------------     
1. add_one()
