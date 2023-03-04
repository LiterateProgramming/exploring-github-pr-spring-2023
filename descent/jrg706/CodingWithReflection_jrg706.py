# <h1>The Descent</h1>
# <p><em>The&nbsp;Destiny ship&nbsp;is in danger: drawn towards the surface of
#         an unknown planet, it is at risk of crashing against towering
#         mountains. Help Rick to destroy the mountains... Save
#         the&nbsp;Destiny!</em></p>
# <p><em><img src="gameplay.png" alt="" width="847" height="476"></em></p>
# <p>This program below solves the coding game "<a
#         href="https://www.codingame.com/ide/puzzle/the-descent">The
#         Descent</a>"</p>

# <h2>Imports</h2>
import sys
import math

# <p>Given: The while loop represents the game. Each iteration represents a turn
#     of the game where you are given inputs (the heights of the mountains) and
#     where you have to print an output (the index of the mountain to fire on)
#     The inputs you are given are automatically updated according to your last
#     actions.</p>

# <h2>Game Loop</h2>
# <p>In order for this code to successfully target the correct mountain top, the
#     highest peak must be found. We are given a line of code that initializes
#     an array of mountain heights ranging from mountain 0 to mountain 7. To do
#     this efficiently, we can find the highest peak during the initialization
#     of the mountain array. After finding the height of the first mountain, we
#     can compare its height to the next initialized mountain, taking the higher
#     peak and repeating the cycle until all 8 mountains have been inputted.
#     After this is done, not only have we gathered the heights of the
#     mountains, but we have a peak height and the corresponding mountain. There
#     is no need to check for repeating heights as the problem does not allow
#     for such cases, but in the case that there was a repeating height, the
#     mountain with the lowest index would stay as it is the mountain that the
#     ship would encounter first.</p>
# <p>Conceptualized:</p>
# <p><img src="TestCase.png" alt=""></p>
while True:
# <h3>Initialize</h3>
    highestPeak = 0
    mountNum = 0
#For Loop
    for i in range(8):
        mountain_h = int(input())  # represents the height of one mountain.
# <h3>Find Peak</h3>
        if mountain_h > highestPeak:
            highestPeak = mountain_h
            mountNum = i
# <h3>Shoot Mountain</h3>
# <p>Once we have completed the game loop all that's left to do is fire on the
#     mountain. Use print statement in order to shoot the correct mountain by
#     calling out its index given in the mountNum variable. Once this mountain
#     is shot down, the ship moves down a level and loops through the program
#     again to find the next highest peak. Multiple Test Cases were used
#     including,&nbsp;<strong>Descending
#         Mountains</strong>,&nbsp;<strong>Scattered Mountains</strong>,
#     and&nbsp;<strong>Strong Mountains</strong>(more than one shot was required
#     per mountain).</p>
    print(mountNum)
    #

    #
