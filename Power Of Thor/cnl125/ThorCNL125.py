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
# <p><span style="background-color: rgb(241, 196, 15);">KNT</span>: I was able
#     to recognize each variable, but I would put some kind of divider or
#     another line between the variables rather than a space.</p>
# <p><span style="background-color: rgb(241, 196, 15);">CNL</span>: I decided
#     to not mess with this as it is part of the default code provided
#     from coding game, and I don't want to mess up the input stream. </p>
light_x, light_y, thor_x, thor_y = [int(i) for i in input().split()]



# <p>game loop</p>
while True:
    remaining_turns = int(input())  # The remaining amount of turns Thor can move. Do not remove this line.

    # <p>Instantiate direction variables for later print statement</p>
    # <p><span style="background-color: rgb(241, 196, 15);">KNT</span>: I see
    #     that at the bottom that this is used to move Thor. I would suggest
    #     placing either a problem statement at the top or a link to the game
    #     site to make sure the goal is understood.</p>
    # <p><span style="background-color: rgb(241, 196, 15);">CNL</span>: Added. </p>
    # <p> The game is accessible via https://www.codingame.com/ide/puzzle/power-of-thor-episode-1 </p>
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
    # <p><span style="background-color: rgb(241, 196, 15);">KNT</span>: All of
    #     the comments on Thor's movement are great! The variable names are also
    #     perfect.</p>
    # <p><span style="background-color: rgb(241, 196, 15);">CNL</span>: Thank
    #     You!</p>
    print(ydirection + xdirection)
