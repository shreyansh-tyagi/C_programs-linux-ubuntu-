import mysql.connector
mydb=mysql.connector.connect(host='localhost',user='root',passwd='mythemiz1524',database='operator',auth_plugin='mysql_native_password')
mycursor = mydb.cursor()
#sql = "delete from clothes where f_name=%s"
print('\n\nto exit , type name:-quit')
a=int(input('enter how many records you want to insert: '))
count=0
for i in range(a):
    name=input('enter the name to insert: ')
    sql="insert into clothes (f_name) values(%s) "    
    mycursor.execute(sql,(name,)) 
    count+=1
mydb.commit()
print(f'{count},record inserted') 