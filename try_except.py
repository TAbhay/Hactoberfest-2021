def ask():
    while True:
        try:  #try block
            n=int(input("Enter a number: "))
        except:  #except block
            print("This isn't a number,please enter a number")
            continue
        else:
            break
            
    print("The square of your number is ")
    print(n**2)
    
ask()