
# <h1>Introduction to the CodeChat Editor</h1>
# <h2>&nbsp;Goals of Assignment</h2>
# <p>This commenting exercise is designed to test the features of the CodeChat
#     Editor by&nbsp;</p>
# <p>adding comments to the work performed solving a game-centered programming
#     challenge online.</p>
# <p><strong>link to game:</strong> <a
#         href="https://www.codingame.com/training/easy/power-of-thor-episode-1">Power
#         of Thor: Episode 1 (from codingame.com)</a>&nbsp;</p>
# <p><span style="background-color: rgb(251, 238, 184);">SSC: I'd suggest making
#         "Game Overview" a bigger heading like "Goals of Assignment".</span>
# </p>
# <blockquote><strong>Game Overview:</strong>
#     <p>On a gridded playing field, there is a character (Thor) and a location
#         (the Light of Power).</p>
#     <p>The object of the game is to move Thor to the same position as the
#         light of power, no matter the&nbsp;</p>
#     <p>starting positions of either. To output a <em>direction</em>, a string
#         is printed to the screen.&nbsp;</p>
#     <p>The string will either consist of one or two letters from the following
#         options: N, NE, E, SE, S, SW, W, or NW.</p>
#     <p>To make decisions on which direction to move, conditional operators and
#         if/else statements are used. <span
#             style="background-color: rgb(251, 238, 184);">SSC: Pseudocode
#             could be useful here, since there are several statements (we want
#             to make sure we include all possibilities)</span></p>
#     <p>&nbsp;</p>
#     <p>As seen in the example diagram below, each space on the board can be
#         represented by a row and column.</p>
#     <p>The game stores the position in X and in Y as the index in an array
#         each.</p>
#     <p>For example, below, Thor's X position is 6, and his Y position is 1.
#         The Light's X is 2 and its Y is 4.&nbsp; &nbsp;<span
#             style="background-color: rgb(251, 238, 184);">SSC: This figure is
#             a good way to show that the scene is defined by
#             coordinates!</span></p>
#     <table
#         style="border-collapse: collapse; width: 33.5088%; height: 133.2px;"
#         border="1">
#         <colgroup>
#             <col style="width: 9.93117%;">
#             <col style="width: 9.93117%;">
#             <col style="width: 10.0295%;">
#             <col style="width: 10.0295%;">
#             <col style="width: 9.93117%;">
#             <col style="width: 9.93117%;">
#             <col style="width: 10.0295%;">
#             <col style="width: 10.0295%;">
#             <col style="width: 10.0295%;">
#             <col style="width: 10.0295%;">
#         </colgroup>
#         <tbody>
#             <tr style="height: 22.2px;">
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#             </tr>
#             <tr style="height: 22.2px;">
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">THOR</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#             </tr>
#             <tr style="height: 22.2px;">
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#             </tr>
#             <tr style="height: 22.2px;">
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#             </tr>
#             <tr style="height: 22.2px;">
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">LIGHT</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#             </tr>
#             <tr style="height: 22.2px;">
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#                 <td style="height: 22.2px;">&nbsp;</td>
#             </tr>
#         </tbody>
#     </table>
#     <br>
#     <p>&nbsp;</p>
#     <p><span style="background-color: rgb(251, 238, 184);">SSC: The game's
#             objective and your solution to the game are somewhat intermingled.
#             I would suggest perhaps dividing them up into two sections: an
#             overview of the game (like you've already done) and an additional
#             "Approach" section.</span></p>
#     <p><span style="background-color: rgb(251, 238, 184);">Overall, your
#             information and process is clear, just needs a little bit of
#             sectioning!</span></p>
#     <p>&nbsp;</p>
# </blockquote>

# <h2><strong>Begin Code</strong></h2>

import sys
import math

# <p>Here, the X and Y positions of the Light and Thor are given by the game.
# </p>
light_x, light_y, initial_tx, initial_ty = [int(i) for i in input().split()]

# <h3>Game Loop:</h3>
# <p>The game will first record the initial positions of Thor into a new
#     variable that will be updated as Thor navigates the game.</p>
while True:
    
    thor_y = initial_ty
    thor_x = initial_tx

  # <h2>Deciding If and Where to Move</h2>
  # <blockquote>
  #     <p>In this inner loop, the actual gameplay occurs.&nbsp;</p>
  #     <p>As long as there are turns remaining, the game will continue checking
  #         Thor's position and&nbsp;</p>
  #     <p>attempt to move him to the Light.</p>
  # </blockquote>
    while True:
        remaining_turns = int(input())  # The remaining amount of turns Thor can move. Do not remove this line.

    # <h3>Conditional Operators for Directional Decision Making</h3>
    # <p>This section first compares Thor's Y position first (since the Y
    #     direction is N or S, and that letter must be listed before E/W
    #     according to convention</p>
    # <p>If Thor's Y is greater than Light's Y, set output string to "S" and
    #     update position.&nbsp;</p>
    # <p>Similarly, if Thor's Y is less than Light Y, set output to "N" and
    #     update position variable.</p>
    # <p>If Thor's Y and Light's Y are equal, make sure the output string is
    #     empty for now.&nbsp;</p>
        if ((light_y - thor_y) > 0):
            action_str = "S"
            thor_y += 1
        elif ((light_y - thor_y) < 0):
            action_str = "N"
            thor_y -= 1
        elif (light_y == thor_y):
            action_str = ""

    # <h3>Conditional Operators for Directional Decision Making</h3>
    # <p>This section first compares Thor's X position</p>
    # <p>If Thor's X is greater than Light's X, <em><strong>append</strong></em>
    #     output string to "E" and update position.&nbsp;</p>
    # <p>Similarly, if Thor's X is less than Light X,
    #     <em><strong>append</strong></em> output string to "W" and update
    #     position variable.</p>
    # <p>If Thor's X and Light's X are equal, do not add anything to the output
    #     string</p>
        if ((light_x - thor_x) > 0):
            action_str += "E"
            thor_x += 1
        elif ((light_x - thor_x) < 0):
            action_str += "W"
            thor_x -= 1
        elif (light_x == initial_tx): 
            action_str += ""

     # <h3>Output the Direction</h3>
     # <p>A single string output determines the move to be made: N NE E SE S SW
     #     W or NW <span style="background-color: rgb(251, 238, 184);">SSC: Good
     #         comments and sections!</span></p>
        print(action_str)


