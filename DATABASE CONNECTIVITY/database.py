import C_data
#myfile=open('C_data.txt','r')
#a=myfile.read()
import mysql.connector 
mydb=mysql.connector.connect(host='localhost',user='root',passwd='mythemiz1524',database='operator',auth_plugin='mysql_native_password')
mycursor=mydb.cursor()
count=0
for i in range(C_data.n):
    sql='insert into clothes (f_name) values(%s);'
    mycursor.execute(sql,(C_data.name(i)))
    mydb.commit()
    count+=1
print(count,'record inserted')    