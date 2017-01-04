# lisql
cd mysql-3.23.49

./configure --prefix=/letv/lizha/mysql --with-mysqld-ldflags=-all-static --with-innodb --with-debug

make -j 16 

上一步报错，执行下面操作：
rm mysql-3.23.49/sql/sql_yacc.cc && git checkout mysql-3.23.49/sql/sql_yacc.cc

make install
