#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<mysql/mysql.h>

static char *host="localhost";
static char *user="root";
static char *pass="mythemiz1524";
static char *db="operator";

unsigned int port=3306;
static char *unix_socket=NULL;
unsigned int flag=0;

int main()
{
    MYSQL *connection;
    MYSQL_RES *result;
    MYSQL_ROW column;
    connection=mysql_init(NULL);
    if(!(mysql_real_connect(connection,host,user,pass,db,port,unix_socket,flag)))
    {
        fprintf(stderr,"\nError: %s [%d]\n",mysql_error(connection),mysql_errno(connection));
        exit(1);
    }
   printf("HELLO!--- Shreyansh you are successfully connected to the database---");
   mysql_query(connection,"use operator;");
   //mysql_query(connection,"show tables;");
   mysql_query(connection,"select * from clothes;");
   result=mysql_store_result(connection);
   printf("\n\nF_NAME:\n\n");
   while(column=mysql_fetch_row(result))
   {
       printf("%s\n",column[0]);
   }
   mysql_free_result(result);
   mysql_close(connection);
   return EXIT_SUCCESS;
}