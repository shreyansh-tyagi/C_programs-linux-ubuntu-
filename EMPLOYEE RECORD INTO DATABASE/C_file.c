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
    MYSQL_ROW *col;
    connection=mysql_init(NULL);
    if(!(mysql_real_connect(connection,host,user,pass,database,port,unix_socket,flags)))
    {
        fprintf(stderr,"ERROR:%s ,[%d]\n",mysql_error(connection),mysql_errno(connection));
        exit(1);
    }
    printf("-----\nHELLO SHREYANSH, you are successfully connected to database-----\n");
    mysql_query(connection,"use employee;");
    mysql_query(connection,"select * from e_data;");
    result=mysql_store_result(connection);
    printf("\nID\t\tNAME\t\tADDRESS\t\tAGE\t\tGENDER\t\tSALARY\t\tDEPARTMENT\t\n\n");
    while(col=mysql_fetch_row(result))
    {
        printf("%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\n\n",col[0],col[1],col[2],col[3],col[4],col[5],col[6]);
    }
    mysql_free_result(result);
    mysql_close(connection);
    return EXIT_SUCCESS;
}