import mysql.connector
mydb=mysql.connector.connect(host='localhost',user='root',passwd='mythemiz1524',database='operator',auth_plugin='mysql_native_password')
mycursor=mydb.cursor()
mycursor.execute("select version();")
row=mycursor.fetchone()
print('server version is: ',row)