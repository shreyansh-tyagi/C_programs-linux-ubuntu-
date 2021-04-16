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
    MYSQL_ROW col;
    FILE *ptr=NULL;
    int e_id,e_age,e_salary;
    char e_name[200],e_address[200],e_gender[200],e_dept[200];
    ptr=fopen("Employee_data.py","w");
    connection=mysql_init(NULL);
    if(!(mysql_real_connect(connection,host,user,pass,database,port,unix_socket,flags)))
    {
        fprintf(stderr,"ERROR:%s ,[%d]\n",mysql_error(connection),mysql_errno(connection));
        exit(1);
    }
    printf("\n-----HELLO SHREYANSH, you are successfully connected to database-----\n");
    mysql_query(connection,"use employee;");
    mysql_query(connection,"select * from e_data;");
    result=mysql_store_result(connection);
    printf("\n\nID\t\tNAME\t\tADDRESS\t\tAGE\t\tGENDER\t\tSALARY\t\tDEPARTMENT\t\n\n\n");
    while(col=mysql_fetch_row(result))
    {
        printf("%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\n\n",col[0],col[1],col[2],col[3],col[4],col[5],col[6]);
    }
    printf("\n\n");
    printf("\nenter the employee id: ");
    scanf("%d",&e_id);
    printf("\nenter the employee age: ");
    scanf("%d",&e_age);
    fflush(stdin);
    printf("\nenter the employee gender 'male' or 'female':");
    scanf("%s",e_gender);
    if(e_age<=105){
    printf("\nenter the employye salary: ");
    scanf("%d",&e_salary);
    fprintf(ptr,"e_id=%d\n",e_id);
    fprintf(ptr,"e_age=%d\n",e_age);
    fprintf(ptr,"e_salary=%d\n",e_salary);
    }
    else{
    printf("please enter the valid age");
    exit(1);
    }
        fprintf(ptr,"e_gender='%s'\n",e_gender);
        printf("\nenter the employee name: ");
        scanf("%s",e_name);
        printf("\nenter the employee address: ");
        scanf("%s",e_address);
        printf("\nenter the employee department: ");
        scanf("%s",e_dept);
        fprintf(ptr,"e_name='%s'\n",e_name);
        fprintf(ptr,"e_address='%s'\n",e_address);
        fprintf(ptr,"e_dept='%s'\n",e_dept);
    mysql_free_result(result);
    mysql_close(connection);
    return EXIT_SUCCESS;
}