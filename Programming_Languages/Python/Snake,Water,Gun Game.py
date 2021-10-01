import random

# snake Water Gun Game or Rock Paper Scissor Game
def gameWin(comp, you):
    # check for all possiblities in the game when computer chose s 
    if(comp == 's'):
        if(you == "w"):
            return False
        elif you == "g":
            return True
        elif you == "s":
            return None

    # check for all possiblities in the game when computer chose w
    elif comp == 'w':
        if you == 's':
            return True
        elif you == 'g':
            return False
        elif you == 'w':
            return None

    # check for all possiblities in the game when computer chose g
    elif comp == 'g':
        if you == 's':
            return False
        elif you == 'g':
            return None
        elif you == 'w':
            return True


you = input("Your Turn: Snake(s) ,Water(w), Gun(g): ")
print("Only Write s,w,g in the input for the Choice")
print("Comp Turn:  Snake(s) ,Water(w), Gun(g)")
comp = ''
randNo = random.randint(1, 3)
if randNo == 1:
    comp = 's'
elif randNo == 2:
    comp = 'w'
elif randNo == 3:
    comp = 'g'

print(f"you Chose: {you}")
print(f"Computer Chose: {comp}")

gameValue = gameWin(comp, you)
if gameValue:
    print("You Win !!!!!!!!!!")
elif gameValue == False:
    print("You Loose !!!!!!!")
elif gameValue == None:
    print("The Game is Draw!!!!!!!!!!!!!!")
else:
    print("Wrong Input!!!!!!!!")
