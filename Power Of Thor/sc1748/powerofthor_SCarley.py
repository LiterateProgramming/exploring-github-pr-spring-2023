
# <h2>Coding with Reflection: Power of Thor</h2>
# <h3>Overview</h3>
# <p>The game I chose is called&nbsp;<a
#         href="https://www.codingame.com/ide/puzzle/power-of-thor-episode-1"
#         target="_blank" rel="noopener">Power of Thor</a>. Thor must be moved
#     around the scene in order to get to the "light". The scene is bounded, and
#     if he moves out of bounds, the game is over. To move him, we specify the
#     direction that we want to move him in a print statement.</p>
# <h3>Approach</h3>
# <p>In order for all test cases to be solved, we can implement conditional
#     statements to test where Thor is within the scene. Once implemented, he
#     should automatically move to the light depending upon his starting
#     position. Here we present pseudocode for this problem:</p>
# <p class="MsoNormal"
#     style="margin-bottom: 0in; margin-top: 0in; mso-margin-bottom-alt: 8.0pt; mso-margin-top-alt: 0in; mso-add-space: auto; line-height: normal;">
#     <em>The beginning of the game loop starts with obtaining Thor&rsquo;s
#         current position and performing some conditional statements to figure
#         out which direction to send him.</em></p>
# <p class="MsoNormal"
#     style="margin-bottom: 0in; margin-top: 0in; mso-margin-bottom-alt: 8.0pt; mso-margin-top-alt: 0in; mso-add-space: auto; line-height: normal;">
#     Game loop start</p>
# <p class="MsoNormal"
#     style="margin-bottom: 0in; margin-top: 0in; mso-margin-bottom-alt: 8.0pt; mso-margin-top-alt: 0in; mso-add-space: auto; text-indent: .5in; line-height: normal;">
#     IF Thor&rsquo;s x coordinate is less than the light&rsquo;s x
#     coordinate:<span
#         style="mso-tab-count: 1;">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
#     </span></p>
# <p class="MsoNormal"
#     style="mso-add-space: auto; text-indent: .5in; line-height: normal; margin: 0in 0in 0in .5in;">
#     xDirection = East</p>
# <p class="MsoNormal"
#     style="mso-add-space: auto; text-indent: .5in; line-height: normal; margin: 0in 0in 0in .5in;">
#     Update Thor&rsquo;s position.</p>
# <p class="MsoNormal"
#     style="margin-bottom: 0in; margin-top: 0in; mso-margin-bottom-alt: 8.0pt; mso-margin-top-alt: 0in; mso-add-space: auto; text-indent: .5in; line-height: normal;">
#     ELSE IF Thor&rsquo;s x coordinate is greater than the light&rsquo;s x
#     coordinate:</p>
# <p class="MsoNormal"
#     style="mso-add-space: auto; text-indent: .5in; line-height: normal; margin: 0in 0in 0in .5in;">
#     xDirection = West</p>
# <p class="MsoNormal"
#     style="mso-add-space: auto; text-indent: .5in; line-height: normal; margin: 0in 0in 0in .5in;">
#     Update Thor&rsquo;s position.</p>
# <p class="MsoNormal"
#     style="margin-bottom: 0in; margin-top: 0in; mso-margin-bottom-alt: 8.0pt; mso-margin-top-alt: 0in; mso-add-space: auto; text-indent: .5in; line-height: normal;">
#     END</p>
# <p class="MsoNormal"
#     style="margin-bottom: 0in; margin-top: 0in; mso-margin-bottom-alt: 8.0pt; mso-margin-top-alt: 0in; mso-add-space: auto; text-indent: .5in; line-height: normal;">
#     IF Thor&rsquo;s y coordinate is less than the light&rsquo;s y coordinate:
# </p>
# <p class="MsoNormal"
#     style="margin-bottom: 0in; margin-top: 0in; mso-margin-bottom-alt: 8.0pt; mso-margin-top-alt: 0in; mso-add-space: auto; line-height: normal;">
#     <span
#         style="mso-tab-count: 1;">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
#     </span><span
#         style="mso-tab-count: 1;">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
#     </span>yDirection = South</p>
# <p class="MsoNormal"
#     style="margin-bottom: 0in; margin-top: 0in; mso-margin-bottom-alt: 8.0pt; mso-margin-top-alt: 0in; mso-add-space: auto; line-height: normal;">
#     <span
#         style="mso-tab-count: 1;">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
#     </span><span
#         style="mso-tab-count: 1;">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
#     </span>Update Thor&rsquo;s position.</p>
# <p class="MsoNormal"
#     style="margin-bottom: 0in; margin-top: 0in; mso-margin-bottom-alt: 8.0pt; mso-margin-top-alt: 0in; mso-add-space: auto; text-indent: .5in; line-height: normal;">
#     ELSE IF Thor&rsquo;s y coordinate is greater than the light&rsquo;s y
#     coordinate:</p>
# <p class="MsoNormal"
#     style="margin-bottom: 0in; margin-top: 0in; mso-margin-bottom-alt: 8.0pt; mso-margin-top-alt: 0in; mso-add-space: auto; line-height: normal;">
#     <span
#         style="mso-tab-count: 1;">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
#     </span><span
#         style="mso-tab-count: 1;">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
#     </span>yDirection = North</p>
# <p class="MsoNormal"
#     style="margin-bottom: 0in; margin-top: 0in; mso-margin-bottom-alt: 8.0pt; mso-margin-top-alt: 0in; mso-add-space: auto; line-height: normal;">
#     <span
#         style="mso-tab-count: 1;">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
#     </span><span
#         style="mso-tab-count: 1;">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
#     </span>Update Thor&rsquo;s position.</p>
# <p class="MsoNormal"
#     style="margin-bottom: 0in; margin-top: 0in; mso-margin-bottom-alt: 8.0pt; mso-margin-top-alt: 0in; mso-add-space: auto; text-indent: .5in; line-height: normal;">
#     END</p>
# <p class="MsoNormal"
#     style="mso-add-space: auto; line-height: normal; margin: 0in 0in 0in .5in;">
#     <em>So, now that we&rsquo;ve got the optimal x direction and y direction
#         for Thor to move, we can append them together, since the game is
#         designed to move Thor in all eight directions (N, NW, SW, etc).</em>
# </p>
# <p class="MsoNormal"
#     style="margin-bottom: 0in; margin-top: 0in; mso-margin-bottom-alt: 8.0pt; mso-margin-top-alt: 0in; mso-add-space: auto; text-indent: .5in; line-height: normal;">
#     Print(xDirection + yDirection)</p>
# <p class="MsoNormal"
#     style="margin-bottom: 0in; margin-top: 0in; mso-margin-bottom-alt: 8.0pt; mso-margin-top-alt: 0in; mso-add-space: auto; text-indent: .5in; line-height: normal;">
#     &nbsp;</p>
# <p class="MsoNormal"
#     style="margin-bottom: 0in; margin-top: 0in; mso-margin-bottom-alt: 8.0pt; mso-margin-top-alt: 0in; mso-add-space: auto; text-indent: .5in; line-height: normal;">
#     The picture below shows an example using the conditional statements in the
#     pseudocode.&nbsp;&nbsp;</p>
# <p><img src="Screenshot_edit.png" alt="Thor example" width="744" height="465">
# </p>
# <h3>&nbsp;Code</h3>
import sys
import math

# <p>initial_tx: Thor's starting X position</p>
# <p>initial_ty: Thor's starting Y position</p>
# <p>light_x: the X position of the light of power</p>
# <p>light_y: the Y position of the light of power</p>
# <p>thorX: Thor's current X position</p>
# <p>thorY: Thor's current Y position</p>

#
light_x, light_y, initial_tx, initial_ty = [int(i) for i in input().split()]

thorX = initial_tx
thorY = initial_ty
# <p>game loop</p>
while True:
    # The remaining amount of turns Thor can move.
    remaining_turns = int(input())  

    # <p>The beginning of the game loop starts with obtaining Thor&rsquo;s
    #     current position and performing some conditional statements to figure
    #     out which direction to send him.</p>
    xDir = ""
    yDir = ""
    if thorX < light_x:
        xDir = "E"
        thorX = thorX+1
    elif thorX > light_x:
        xDir = "W"
        thorX = thorX-1
  
    if thorY < light_y:
        yDir = "S"
        thorY = thorY+1
    elif thorY > light_y:
        yDir = "N"
        thorY = thorY-1
# <p style="padding-left: 40px;">Append the optimal X and Y directions together
#     in order to use all eight directions available.</p>
    print(yDir+xDir)
        
