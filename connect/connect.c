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
MYSQL_ROW col;
conn=mysql_init(NULL);
if(!(mysql_real_connect(conn,host,user,pass,db,port,unix_socket,flag)))
{
fprintf(stderr,"\nError: %s [%d]\n", mysql_error(conn),mysql_errno(conn));
exit(1);
}
printf("\nHELLO SHREYANSH!----- you are successfully connected to mysql server------\n\n");
mysql_query(conn,"use employee");
//mysql_query(conn,"select e_name,e_salary from e_data");
//mysql_query(conn,"delete from e_data where e_name='shrey'");
//mysql_query(conn,"delete from e_data where e_name ='shrey'");
mysql_query(conn,"insert into e_data values(4,'shrey','paris',22,'male',124000,'data scientist')");

//mysql_query(conn,"insert into e_data values(11,'shivani','london',25,'female',140000,'data analyst')");
//mysql_query(conn,"insert into e_data values(7,'shanaya','london',22,'female',134231,'senior data scientist')");
//mysql_query(conn,"select * from e_data where e_salary between 40000 and 50000");
//mysql_query(conn,"select e_name,e_salary,e_dept from e_data where e_gender='male' and e_salary>100000");
mysql_query(conn,"select * from e_data");
res=mysql_store_result(conn);
printf("\nID\t\tNAME\t\tADDRESS\t\tAGE\t\tGENDER\t\tSALARY\t\tDEPARTMENT\t\n\n");
while(col=mysql_fetch_row(res))
{
    printf("%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\n\n",col[0],col[1],col[2],col[3],col[4],col[5],col[6]);
   // printf("Name\tSalary\tDepartment\t\n\n");
    //printf("%s\t%s\t%s\n\n",col[0],col[1],col[2]);
}
mysql_free_result(res);
mysql_close(conn);
return EXIT_SUCCESS;
}
