import C_data
#myfile=open('C_data.py','r')
#a=myfile.read()
import mysql.connector 
mydb=mysql.connector.connect(host='localhost',user='root',passwd='mythemiz1524',database='operator',auth_plugin='mysql_native_password')
mycursor=mydb.cursor()
sql='insert into clothes (f_name) values(%s);'
mycursor.execute(sql,(C_data.a,)) 
mydb.commit()
print('record inserted')    
