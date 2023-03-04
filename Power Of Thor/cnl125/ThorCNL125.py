import sys
import math

# <h1>Power of Thor</h1>
# <p>Auto-generated code below aims at helping you parse the standard input
#     according to the problem statement. --- Hint: You can use the debug stream
#     to print initialTX and initialTY, if Thor seems not follow your orders.
# </p>

# <p>light_x: the X position of the light of power light_y: the Y position of
#     the light of power thor_x: Thor's starting X position or thor_x thor_y:
#     Thor's starting Y position or thor_y</p>
light_x, light_y, thor_x, thor_y = [int(i) for i in input().split()]

# <p>game loop</p>
while True:
    remaining_turns = int(input())  # The remaining amount of turns Thor can move. Do not remove this line.

    # <p>Instantiate direction variables for later print statement</p>
    ydirection = ""
    xdirection = ""
# <p>&nbsp;</p>
# <p>Determine X Component If Thor is west of light, head east, then update
#     thor_x to match Thor's position</p>
    if (thor_x < light_x):
        xdirection = "E"
        thor_x += 1
    # <p>If Thor is east of light, head west, then update thor_x</p>
    elif (thor_x > light_x):
        xdirection = "W"
        thor_x -= 1
    

    # <p>Determine Y Component If Thor is north of light, head south, then
    #     update thor_y to match Thor's position</p>
    if (thor_y < light_y):
        ydirection = "S"
        thor_y += 1
    # <p>If thor is south of light, head north, then update thor_y</p>
    elif (thor_y > light_y):
        ydirection = "N"
        thor_y -= 1

    # <p>Print statement to direct thor, need to print Y direction first to
    #     follow standard "NW" format</p>
    print(ydirection + xdirection)
