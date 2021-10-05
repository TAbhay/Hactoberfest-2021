from turtle import Turtle, Screen
import time
from snake import Snake
from food import Food
from scoreboard import Scoreboard

screen = Screen()
screen.setup(width=600, height=600)
screen.title("Snake Game")
screen.bgcolor("black")
screen.tracer(0)

snake = Snake()
food = Food()
scoreboard = Scoreboard()

screen.listen()
screen.onkey(snake.up, "Up")
screen.onkey(snake.down, "Down")
screen.onkey(snake.left, "Left")
screen.onkey(snake.right, "Right")

game_is_on = True

while game_is_on:
    screen.update()
    time.sleep(0.1)
    snake.move()

    #Collision with food
    if snake.head.distance(food) < 15:
        scoreboard.increase_score()
        food.refresh()
        snake.extend()

    #Detect collision to wall
    if snake.head.xcor() > 280 or snake.head.xcor() < -280 or snake.head.ycor() > 280 or snake.head.ycor() < -280:
        scoreboard.reset()
        snake.reset()

    # Detect collision with tail
#     head collide to ay seg we trigger game over

    for segment in snake.segments[1:]:

        if snake.head.distance(segment)<10:
            scoreboard.reset()
            snake.reset()










screen.exitonclick()
