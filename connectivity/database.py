import mysql.connector
mydb=mysql.connector.connect(host="localhost",user="root",passwd="mythemiz1524",database="operator",auth_plugin="mysql_native_password")
mycursor=mydb.cursor()

print('to exit program, type name=quit')
while(True):
    name=input('ener your name: ')
    if name=='quit':
        exit()
   # sql="insert into clothes (f_name) values(%s);"
    #vals=(name)
    mycursor.execute("insert into clothes (f_name) values(%s);",name)
    mydb.commit()
    print('\ndata saved inside the database\n')  
        