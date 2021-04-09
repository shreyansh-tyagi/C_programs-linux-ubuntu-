import mysql.connector
mydb=mysql.connector.connect(host='loaclhost',user='root',Pass='mythemiz1524',database='operator',port=3306,auth_plugin='mysql_native_password')
cursor=mydb.cursor()