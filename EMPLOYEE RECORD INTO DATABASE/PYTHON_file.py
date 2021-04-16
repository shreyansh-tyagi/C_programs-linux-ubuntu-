import Employee_data
import mysql.connector
mydb=mysql.connector.connect(host='localhost',user='root',passwd='mythemiz1524',database='employee',auth_plugin='mysql_native_password')
this_cursor=mydb.cusor()
sql='insert into e_data(e_id,e_name,e_address,e_age,e_gender,e_salary,e_dept) values(%d,%s,%s,%d,%s,%d,%s);'
this_cursor.execute(sql,(Employee_data.e_id,Employee_data.e_name,Employee_data.e_address,Employee_data.e_age,Employee_data.e_gender,Employee_data.e_salary,Employee_data.e_dept,))
mydb.commit()
print('record inserted')