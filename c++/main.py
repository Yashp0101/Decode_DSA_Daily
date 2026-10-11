import math
from turtle import *

def heart(k):
    return 15 * math.sin(k) ** 3

def heart(k):
    return 12 * math.cos(k) - 5 * math.cos(2 * k) - 2 * math.cos(3 * k)

speed(1000)
bgcolor("black")
color('#f73487')  # Set the drawing color outside the loop
for i in range(6000):
    goto(heart(i) * 20, heart(i) * 20)
    goto(0, 0)  # Return to the origin
done()  # Keep the window open after drawing is complete