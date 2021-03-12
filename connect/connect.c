#include<stdio.h>
#include<stdlib.h>
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
MYSQL *conn;
MYSQL_RES *res;
MYSQL_ROW row;
conn=mysql_init(NULL);
if(!(mysql_real_connect(conn,host,user,pass,db,port,unix_socket,flag)))
{
fprintf(stderr,"\nError: %s [%d]\n", mysql_error(conn),mysql_errno(conn));
exit(1);
}
//printf("shreyansh you are successfully connected to mysql server\n\n");
mysql_query(conn,"use employee");
//mysql_query(conn,"select e_name,e_salary from e_data");
mysql_query(conn,"select * from e_data");
mysq_query(conn,"delete from e_data where e_name='shreyansh' and 'david'");
res=mysql_store_result(conn);
while(row=mysql_fetch_row(res))
{
    //printf("%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\n\n",row[0],row[1],row[2],row[3],row[4],row[5],row[6]);
    printf("%s\t%s\t\n",row[0],row[1]);
}
mysql_free_result(res);
mysql_close(conn);
return EXIT_SUCCESS;
}
