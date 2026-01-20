ch = -1
while ch != 0:
    print("0. Exit")
    print("1. Create ")
    print("2. Update Dicitionart ")
    print("3. Append to Dicitonary ")
    print("4. Delete Whole Set ")
    print("5. Delete Particular Element ")
    print("6. Sort ")
    print("7. Find Length ")
    ch = int(input("Enter a Choise "))

    if ch==1:
        l = dict()
    elif ch==2:
        key = input("Enter a Key to update ")
        value = input("Enter a Value ")
        update_dict = {key:value}
        l.update(update_dict)
    elif ch==3:
        key = input("Enter a Key to update ")
        value = input("Enter a Value ")
        l[key] = value
    elif ch==4:
        del(l)
    elif ch==5:
        key = input("Enter a Key to update ")
        l.pop(key)
    elif ch==6:
        ans = sorted(l)
        print(ans)
    elif ch==7:
        print("Length of Dictonary is ",len(l))
    else:
        ch = int(input("Enter a choise "))