from tkinter import *
from tkinter import filedialog
from pygame import mixer

class MusicPlayer:
    def __init__(self, window ):
        window.geometry('800x600'); window.title('Amul Music Player'); window.resizable(0,0)
        Load = Button(window, text = 'Load',  width = 25, font = ('Times', 22), command = self.load)
        Play = Button(window, text = 'Play',  width = 25,font = ('Times', 22), command = self.play)
        Pause = Button(window,text = 'Pause',  width = 25, font = ('Times', 22), command = self.pause)
        Stop = Button(window ,text = 'Stop',  width = 25, font = ('Times', 22), command = self.stop)
        Load.place(x=200,y=20);Play.place(x=210,y=80);Pause.place(x=220,y=140);Stop.place(x=230,y=200) 
        self.music_file = False
        self.playing_state = False
    def load(self):
        self.music_file = filedialog.askopenfilename()
    def play(self):
        if self.music_file:
            mixer.init()
            mixer.music.load(self.music_file)
            mixer.music.play()
    def pause(self):
        if not self.playing_state:
            mixer.music.pause()
            self.playing_state=True
        else:
            mixer.music.unpause()
            self.playing_state = False
    def stop(self):
        mixer.music.stop()
root = Tk()
app= MusicPlayer(root)
root.mainloop()
