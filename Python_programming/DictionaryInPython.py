#Dictionaries in python. It takes the key and the value.

student = {'Name':'Jack', 'Age':25, 'Subjects':['DBMS','TOC','OS']}
print(student)
print(len(student)) #shows the length
print(student.keys()) #shows the dictionary keys
print(student.values()) #shows the dictionary values
print(student.items()) #shows the items

for key in student: #shows keys in student using for
    print(key)
    
for key , value in student.items(): #shows keys and values in student using for
    print(key, value)
print(student['Name'])
print(student['Subjects'])
print(student.get('Name'))
print(student.get('Phone','Not Found!')) #If the key is not in the dictionary
student['Phone']='7898-8900' #add new
print(student.get('Phone','Not Found!')) #Now phone will be shown
student['Name']='John' #Name will be replaced
print(student)
student.update({'Name':'John','Age':'24','Phone':'01-3344545'}) 
print(student) #Update the new entry
del student['Phone'] #delete the entry
print(student)

age = student.pop('Age') #delete using the pop
print(student)
print(age)