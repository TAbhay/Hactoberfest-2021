from tkinter import *
from tkinter import messagebox
root = Tk()
root.geometry("440x180")
time = 0
def set():
    global time
    time += int(entry.get())
    return time
def reset():
    global time
    time=0
    timee.set("")
    label.config(text='')
    btn.config(state=NORMAL)
    btn2.config(state=NORMAL)
    
def countdown():
    global time
    if time > 0:
        btn.config(state=DISABLED)
        btn2.config(state=DISABLED)
        label.config(text=time)
        time -= 1
        label.after(1000 , countdown)
        if time == 0:
            messagebox.showinfo("Countdown Timer", "Time Over")
            btn.config(state=NORMAL)
            btn2.config(state=NORMAL)
label = Label(root, font = "ariel 30 bold")
label.place(x=190, y=5)     
entry_label = Label(root, text="Enter total time:", font = "ariel 15 bold")
entry_label.place(x=20, y=60)
timee = StringVar()
entry = Entry(root, textvariable = timee, font = "ariel 15 bold",
              width=15, relief=SOLID)
entry.place(x=220, y=60)
entry.focus()
btn = Button(root , text = "Set Time", font = "ariel 15 bold",
             bg='black', fg='gold', width=8, command = set)
btn.place(x=30, y=120)
btn2 = Button(root, text = "Start", font = "ariel 15 bold", bg='black',
              fg='gold', width=8, command = countdown)
btn2.place(x=155, y=120)
btn3 = Button(root, text = "Reset", font = "ariel 15 bold", bg='black',
              fg='gold', width=8, command = reset)
btn3.place(x=280, y=120)
root.mainloop()
