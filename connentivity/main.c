#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<mysql/mysql.h>

static char *host="localhost";
static char *user="root";
static char *pass="mythemiz1524";
static char *db="operator";
static char *unix_socket=NULL;

unsigned int port=3306;
unsigned int flag=0;

int main()
{
    MYSQL *connection;
    MYSQL_RES *result;
    MYSQL_ROW column;
    connection=mysql_init(NULL);
    if(!(mysql_real_connect(connection,host,user,pass,db,unix_socket,port,flag)))
    {
        fprintf(stderr,"\nError: %s [%d]\n",mysql_error(connection),mysql_errno(connection));
        exit(1);
    }
   printf("HELLO!--- Shreyansh you are successfully connected to the database---");
   mysql_query(connection,"use operator");
   mysql_query(connection,"show tables");
   mysql_query(connection,"select * from f_name");
   result=mysql_store_result(connection);
   printf("\n")
}