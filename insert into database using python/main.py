import mysql.connector
mydb=mysql.connector.connect(host='localhost',user='root',passwd='mythemiz1524',database='operator',auth_plugin='mysql_native_password')
mycursor = mydb.cursor()
sql = "INSERT INTO clothes (f_name) VALUES (%s)"
val = ("John")
mycursor.execute(sql,(val,))

mydb.commit()

print(mycursor.rowcount, "record inserted.")