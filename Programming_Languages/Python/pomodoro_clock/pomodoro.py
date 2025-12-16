from tkinter import *
from PIL import Image, ImageTk
import math

COLOR = "#e29979"
FONT = "Courier"
WORK = 25
BREAK = 5
LONG_BREAK = 20
reps = 0





#--------------COUNTDOWN MECHANISM-------------#

def count_down(count):
	minutes = math.floor(count/60)
	seconds = count%60
	if seconds == 0:
		seconds = '00'
	elif seconds < 10:
		seconds = f"0{seconds}"


	canvas.itemconfig(timer, text=f"{minutes}:{seconds}")
	if count > 0:
		window.after(1000, count_down, count-1)

	else :
		start_clock()




#-------------START TIMER----------#

def start_clock():
	global reps
	reps += 1
	if reps % 8 == 0:
		title_label.config(text="Long Break!!")
		count_down(LONG_BREAK)

	elif reps % 2 == 0:
		title_label.config(text="Short Break!")
		count_down(BREAK)

	else :
		title_label.config(text="Working!")
		count_down(WORK)
        






#--------------- UI INTERFACE -----------#

window = Tk()
window.title('Pomodora Clock')
window.config(padx=150, pady=50, bg=COLOR)


canvas = Canvas(width=220, height=380, bg=COLOR, highlightthickness=0)
t_image = ImageTk.PhotoImage(Image.open('2.png'))
s_image=canvas.create_image(96,190,image=t_image)
timer= canvas.create_text(115,170,text="00:00", fill='white',font=(FONT,50,'bold'))
canvas.grid(column=2,row=2)


title_label = Label(text='Timer', fg='white', bg=COLOR, font=(FONT,45,'bold'))
title_label.grid(column=2,row=0)

start = Button(text='Start', command=start_clock)
start.grid(column=1,row=3)

reset = Button(text='Reset')
reset.grid(column=3,row=3)

check_mark = Label(text='*', bg=COLOR, fg='white', font=(FONT,25,'bold'))
check_mark.grid(column=2,row=3)





window.mainloop()