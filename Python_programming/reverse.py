#Reversing any string of number through recursion.
#taking any integer value and storing in Num variable.
Num = int(input("Please Enter any Number: "))
Res = 0                          #taking Res as temperory variable.
def Result_Int(Num):
    global Res
    if(Num > 0):
        Rem = Num %10            #Rem for Reminder
        Res = (Res*10) + Rem
        Result_Int(Num //10)
    return Res
 Res= Result_Int(Num)
print("n Reverse of entered number is = %d" %Res)
