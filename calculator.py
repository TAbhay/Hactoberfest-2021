from tkinter import *


window = Tk()
window.geometry("360x610")
window.config(bg="grey")
window.title("Calculator")
window.wm_iconbitmap("calculator.ico")
window.resizable(0, 0)


# functions
def click(event):
    global value
    calc = event.widget.cget("text")
    if calc == "=":
        if value.get().isdigit():
            calculation = int(value.get())

        else:
            try:
                calculation = eval(text.get())

            except Exception as e:
                print(e)
                calculation = "Error!"

        value.set(calculation)
        text.update()

    elif calc == "C":
        value.set("")
        text.update()

    elif calc == "Del":
        value.set(value.get()[:-1])
        text.update()

    else:
        value.set(value.get()+calc)
        text.update()


value = StringVar()
value.set("")

# textarea
text = Entry(textvar=value, width=10, bg="cyan", font="None 40")
text.pack(pady=5)

# key_area
# edits
f = Frame(window, bg="grey", pady=5)

b = Button(f, text="C", font="old_english 36", padx=5)
b.pack(side=LEFT, padx=5)
b.bind("<Button-1>", click)

b = Button(f, text="Del", font="old_english 26", pady=15)
b.pack(side=LEFT, padx=5)
b.bind("<Button-1>", click)


# numbers

f1 = Frame(window, bg="grey", padx=10, pady=5)
for i in range(1, 4):

    b = Button(f1, text=str(i), font="old_english 36")
    b.pack(side=LEFT)
    b.bind("<Button-1>", click)

f2 = Frame(window, bg="grey", padx=10, pady=5)
for i in range(4, 7):

    b = Button(f2, text=str(i), font="old_english 36")
    b.pack(side=LEFT)
    b.bind("<Button-1>", click)

f3 = Frame(window, bg="grey", padx=10, pady=5)
for i in range(7, 10):

    b = Button(f3, text=str(i), font="old_english 36")
    b.pack(side=LEFT)
    b.bind("<Button-1>", click)

f4 = Frame(window, bg="grey", padx=10, pady=5)
b = Button(f4, text="0", font="old_english 36")
b.pack(side=LEFT)
b.bind("<Button-1>", click)

b = Button(f4, text="00", font="old_english 26", pady=14)
b.pack(side=LEFT)
b.bind("<Button-1>", click)

# operators

b = Button(f4, text="=", font="old_english 36")
b.pack(side=LEFT)
b.bind("<Button-1>", click)

b = Button(f1, text="*", font="old_english 36")
b.pack(side=LEFT, padx=5)
b.bind("<Button-1>", click)

b = Button(f2, text="/", font="old_english 36", padx=3)
b.pack(side=LEFT, padx=5)
b.bind("<Button-1>", click)

b = Button(f3, text="-", font="old_english 36")
b.pack(side=LEFT, padx=5)
b.bind("<Button-1>", click)

b = Button(f4, text="+", font="old_english 30", pady=9)
b.pack(side=LEFT, padx=5)
b.bind("<Button-1>", click)

b = Button(f, text="%", font="old_english 36")
b.pack(side=LEFT, padx=5)
b.bind("<Button-1>", click)


f.pack()
f1.pack()
f2.pack()
f3.pack()
f4.pack()

window.mainloop()
