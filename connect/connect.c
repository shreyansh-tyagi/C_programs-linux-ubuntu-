#include<stdio.h>
#include<stdlib.h>
#include<mysql/mysql.h>


static char *host="localhost";
static char *user="root";
static *pass="mythemiz1524";
static *db="operator";

unsigned int port=3306;
static char *unix_socket=NULL;
unsigned int flag=0;

int main()
{
MYSQL *conn;
conn=mysql_init(NULL);
if(!(mysql_real_connect(conn,host,user,pass,db,port,unix_socket,flag)))
{
fprintf(stderr,"\nError: %s [%d]\n", mysql_error(conn),mysql_errorno(conn));
exit(1);
}
printf("shreyansh you are successfully connected to mysql server\n\n");
return EXIT_SUCCESS;
}
