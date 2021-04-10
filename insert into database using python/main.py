import mysql.connector
mydb=mysql.connector.connect(host='localhost',user='root',passwd='mythemiz1524',database='operator',auth_plugin='mysql_native_password')
mycursor = mydb.cursor()
#sql = "delete from clothes where f_name=%s"
count=0
while(True):
    name=input('enter the name to insert: ')
    if name=='quit':
        exit()
    
    sql="insert into clothes (f_name) values(%s) "    
    mycursor.execute(sql,(name,)) 
    count+=1

mydb.commit()
print(count, "record inserted.")