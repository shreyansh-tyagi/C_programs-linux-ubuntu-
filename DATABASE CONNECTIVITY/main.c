#include<stdio.h>
#include<stdlib.h>
#include<mysql/mysql.h>
#include<stdint.h>

static char *host="localhost";
static char *user="root";
static char *pass="mythemiz1524";
static char *db="operator";

unsigned int port=3306;
static char *unix_socket=NULL;
unsigned int flag=0;

int main(int argc, char **argv)
{
MYSQL *conn;
MYSQL_RES *res;
MYSQL_ROW col;
FILE *ptr=NULL;
int n;
printf("enter the number of records you want to insert: ");
scanf("%d",&n);
ptr=fopen("C_data.py","a");
char name[200];
conn=mysql_init(NULL);
if(!(mysql_real_connect(conn,host,user,pass,db,port,unix_socket,flag)))
{
fprintf(stderr,"\nError: %s [%d]\n", mysql_error(conn),mysql_errno(conn));
exit(1);
}
printf("\nHELLO SHREYANSH!----- you are now successfully connected to mysql server------\n\n");
mysql_query(conn,"use operator");
res=mysql_store_result(conn);
mysql_free_result(res);
fprintf(ptr,"n=%d\n",n);
fflush(stdin);
for(int i=1;i<=n;i++)
{
    printf("\nenter the name: ");
    scanf("%s",name);
    fprintf(ptr,"name%d='%s'\n",i,name);

}
mysql_close(conn);
return EXIT_SUCCESS;
}
