// <h1 style="text-align: center;">Temperatures</h1>
// <p style="text-align: center;"><img src="Temperatures_Logo.png" alt=""
//         width="309" height="202"></p>
// <h2>Description:</h2>
// <p>I chose to play the game "<a
//         href="https://www.codingame.com/ide/puzzle/temperatures">temperatures</a>"
//     using C as my coding language for our in-class exercise. The objective of
//     this game is to analyze an array of temperatures and print out the
//     temperature that is closest to zero.</p>
// <h3><a id="Rules"></a>Rules:&nbsp;</h3>
// <ol>
//     <li>If there are no temperatures provided, print zero as the temperature
//         closest to zero.</li>
//     <li>If two temperatures are equally close to zero, the positive
//         temperature is to be considered closer to zero.</li>
// </ol>
// <h2>Approach:</h2>
// <h3>Attempt 1:</h3>
// <p>I wrote this code two separate times so that I could look back on how I
//     worked through the code the first time and improve on it. So, the first
//     time I wrote code for this game, I started by writing a comment block to
//     describe my intentions and how I planned to solve the problem, then I
//     started coding (Lines 7 - 9 and 20 - 23). This served me well and kept me
//     on track for the majority of the code, but after compiling the code I
//     realized that I hadn't read the entirety of the prompt and did not factor
//     in the two <a href="#Rules">rules</a>. I went back and wrote code to take
//     into account the rules (lines 24 - 26 and 31 - 33), but I forgot to write
//     comments to explain them before finishing. Once the code was complete and
//     passed all of the tests, <strong>I did not think about altering my code
//         at all, even to add comments</strong>. This is what my first attempt
//     looked like:</p>
// <p><img src="Attempt_1.png" alt="" width="536" height="645"></p>
// <h3>Attempt 2:</h3>
// <p>In my second attempt I decided to create a diagram to help me create a
//     plan for my code:</p>
// <p><img src="Code_Map.png" alt="" width="396" height="655"></p>
// <p>I used this diagram as a method to structure my code and also just to make
//     sure I keep on track. In my first attempt, the code that I made belatedly
//     to conform to the <a href="#Rules">rules</a> was uncommented and also out
//     of place. This would make it very difficult for a third party to
//     understand the purpose of those lines of code, and also just makes the
//     code look bad in my opinion. In my second attempt, I kept the code
//     regarding how many temperatures were going to be in the array near the
//     preset scanning in of that variable and near my initialization of my
//     <em>zerovalue</em> variable since they are related. I also created
//     comments to explain the lines of code that I forgot to in my first
//     attempt and altered the comments that I did make so that they would make
//     more sense and add more to the code.</p>
// <p>So not only was I able to make my code look&nbsp;<em>more structured</em>
//     on my second attempt, I also commented the code <em>much better</em> than
//     in my first attempt. Here is the code from my second attempt:</p>
// <h3>Libraries included:</h3>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// <p>Main:</p>
int main()
{
    //the number of temperatures to analyse
    int n;
    //create a variable to hold the temperature that is closest to zero
    int zerovalue;

    scanf("%d", &n);

    // <p><a href="#Rules">Rule 1</a>:</p>
    //Show the temperature closest to zero as 0 (zero) if no temperatures are provided
    if (n == 0){
        zerovalue = 0;
    }
    //If there are temperatures to check, then make the zero value equal to
    //a number large enough that the first temperature will take its place
    else{
        zerovalue = 5527;
    }

    for (int i = 0; i < n; i++) {
        //a temperature expressed as an integer ranging from -273 to 5526
        int t;
        scanf("%d", &t);

        // <p><a href="#Rules">Rule 2</a>:</p>
        //If the new temperature is equally as close to zero as what is
        //already recorded, record the absolute value of that temperature
        //as the new zero value.
        if(abs(t) == abs(zerovalue)){
            zerovalue = abs(t);
        }
        //If that is not true but the new temp is closer to zero than the
        //zero value, make the zero value equal to the new temp.
        else if(abs(t) < abs(zerovalue)){
            zerovalue = t;
        }
    }
    //The value closest to zero will be printed, followed by a new line
    printf("%d\n", zerovalue);

    return 0;
}
