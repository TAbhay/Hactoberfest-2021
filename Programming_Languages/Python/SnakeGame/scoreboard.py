from turtle import Turtle


class Scoreboard(Turtle):

    def __init__(self):
        super().__init__()
        self.score = 0
        with open("high.txt", "r") as file:
            self.high_score = int(file.read())
        self.color("white")
        self.penup()
        self.setpos(0, 270)
        self.hideturtle()
        self.update_scoreboard()

    def increase_score(self):
        self.score += 1
        self.update_scoreboard()

    def update_scoreboard(self):
        self.clear()
        self.write(f"Score: {self.score} || Highscore: {self.high_score}", align="center", font=("Arial", 20, "normal"))

    # def game_over(self):
    #     self.setpos(0, 0)
    #
    #     self.write("**GAME OVER**", align="center", font=("Arial", 20, "normal"))

    def reset(self):
        if self.score > self.high_score:
            self.high_score = self.score
            with open("high.txt","w") as file:
                file.write(str(self.high_score))
        self.score = 0
        self.update_scoreboard()
