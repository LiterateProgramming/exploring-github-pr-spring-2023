# <h1>Power of Thor Solution</h1>
# <p>&nbsp;</p>
# <h2>Game Overview and Approach</h2>
# <p><img src="thor.png" alt="" width="767" height="378"></p>
# <h3>Game Overview&nbsp;</h3>
# <p>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;This game is known
#     as <a
#         href="https://www.codingame.com/training/easy/power-of-thor-episode-1">Power
#         of Thor</a>. It is a game that can be found with several others at <a
#         href="https://www.codingame.com/training">CodeinGame.com</a>. <em>The
#         goal of this game is to lead Thor to the lightning symbol in
#         2-Dimensional space</em>. You can guide Thor by giving him <strong>8
#         different commands</strong>. You can tell him to move <strong>North,
#         Northeast, Northwest, South, Southeast, Southwest, East, or
#         West</strong>. This is achieved by a print statement. You can print
#     out the abbreviations for the following directions and the program then
#     parses the print statement in order to determine what direction Thor needs
#     to move. <em>The final goal is to create a program that can tell Thor
#         where to move regardless of where the lightning is placed.&nbsp;</em>
# </p>
# <h3><strong>My Approach</strong></h3>
# <p>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;I began solving this
#     problem by play testing with different outputs and then viewing the visual
#     output to get a clear understanding of the problem at hand. The game gives
#     you several different missions in which to complete with your final goal
#     being to write a program capable of completing every mission without
#     needing to edit the code. I was able to complete 3 of the 4 submissions
#     before getting stuck.</p>
# <p>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;My next step was to
#     stop trying to power through the problem and to instead, stop and think
#     about what I am trying to achieve. I wrote everything that I was given out
#     on a sheet of paper: variables, goals, outputs, and possible solutions. My
#     brain was thinking of this problem as a videogame solution and not as much
#     as a coding solution. I had an epiphany at that moment. The goal was
#     simple;<strong> I needed to match the variables that represented the
#         coordinates of Thor to that of the lightning symbol.&nbsp;</strong>
# </p>
# <p>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;Since I was dealing
#     with comparisons, my first thought was to use conditional if statements to
#     solve the problem. I wrote out code in pseudocode and used this to
#     construct my program that you will see below.&nbsp;</p>
# <p>&nbsp;</p>
# <h2>Beginning of Code</h2>
# <h3>Imports</h3>
import sys
import math

#

# <h3>Initialized Variables</h3>
# <p>&nbsp; &nbsp; &nbsp; The variables below are given by the game depending on
#     the mission at end. The variables <strong>light_x</strong> and
#     <strong>light_y </strong>represent the x-y coordinates of the lightning
#     symbol. The variables <strong>initial_tx </strong>and <strong>initial_ty
#     </strong>are the starting coordinates for Thor.&nbsp;</p>
light_x, light_y, initial_tx, initial_ty = [int(i) for i in input().split()]

# <p>&nbsp; &nbsp; &nbsp; To utilize these variables for comparisons, you will
#     need to create two changing variables for <strong>Thor (x, y)</strong> as
#     he will be moving throughout iterations.&nbsp;</p>
thorx = initial_tx
thory = initial_ty

# <h3>Game Loop</h3>
# <p>&nbsp; &nbsp; &nbsp; The first line in the while statement initializes a
#     variable that gives it the value of however many turns you are given to
#     reach the destination that changes depending on the mission.&nbsp;</p>
while True:
    remaining_turns = int(input())  # The remaining amount of turns Thor can move. Do not remove this line.

    #

    # <p>To adjust (x, y) in one iteration, create 2 strings to hold value of
    #     <strong>N/S for the y-axis</strong> and <strong>E/W for the
    #         x-axis</strong>. Append these values at the end of loop to produce
    #     one output per iteration</p>
    directionx = ""
    directiony = ""
    # <p><em>The core part of solving this problem are the if statements</em>.
    #     First compare Thor's x-axis to the destination. If Thor's x is larger,
    #     you need to move west and decrement the variable's value, so that the
    #     value of Thor's location is up to date on the upcoming iterations. If
    #     the x value is less, then move east and increment the variable's
    #     value. The same is done for the y-axis.&nbsp;</p>
    # <p><img src="ifxlight.png" alt="" width="732" height="412"></p>
    #If Thor(x) > Light(x) : Print W and Decrease Thor(x) by 1
    if(thorx > light_x):
        directionx = "W"
        thorx = thorx - 1
    #If Thor(x) < Light(x) : Print E and Increase Thor(x) by 1
    if(thorx < light_x):
        directionx = "E"
        thorx = thorx + 1
    #If Thor(y) > Light(y) : Print N and Decrease Thor(y) by 1
    if(thory > light_y):
        directiony = "N"
        thory = thory - 1
    #If Thor(y) < Light(y) : Print S and Increase Thor(y) by 1
    if(thory < light_y):
        directiony = "S"
        thory = thory + 1

    #

    # <p><strong>Append</strong> both string results from the if statements and
    #     print the output</p>
    print(directiony + directionx)
