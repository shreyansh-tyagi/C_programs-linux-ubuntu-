#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<mysql/mysql.h>

static char *host="localhost";
static char *user="root";
static char *pass="mythemiz1524";
static char *database="employee";

unsigned int port=3306;
static char *unix_socket=NULL;
unsigned int flags=0;

int main()
{
    MYSQL *connection;
    MYSQL_RES *result;
    MYSQL_ROW *row;
    connection=mysql_init(NULL);
    if(!(mysql_real_connect(connection,host,user,pass,database,port,unix_socket,flags)))
    {
        fprintf(stderr,"ERROR:%s ,[%d]\n",mysql_error(connection),mysql_errno(connection));
        exit(1);
    }
    printf("-----\nHELLO SHREYANSH, you are successfully connected to database-----\n");
}