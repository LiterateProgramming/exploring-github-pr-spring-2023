// <h1>War (The Card Game)</h1>
// <p>The following code aims to create a solution to the War challenge
//     available at <a
//         href="https://www.codingame.com/training/medium/winamax-battle">CodinGame</a>.&nbsp;
// </p>
// <h2 id="h_42539775065021675731469916"><a id="Game_Breakdown"></a>&nbsp;Game
//     Breakdown</h2>
// <p><span data-preserver-spaces="true">War is a round-based card game played
//         between two players (known as Player 1 and 2). The deck of cards is
//         shuffled and distributed (face down) to each player equally such that
//         each player has their own deck of cards. Each round can be divided
//         into two stages:&nbsp;</span><a class="editor-rtfLink"
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Fight_Battle"
//         target="_blank" rel="noopener"><strong><span
//                 data-preserver-spaces="true">Fight/Battle&nbsp;</span></strong></a><span
//         data-preserver-spaces="true">and&nbsp;</span><a
//         class="editor-rtfLink"
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#War"
//         target="_blank" rel="noopener"><strong><span
//                 data-preserver-spaces="true">War</span></strong></a><span
//         data-preserver-spaces="true">. In these stages, cards are staked by
//         each player, and the winner of the "Fight/Battle" stage takes all
//         staked cards. It is important to note that <strong>a card's suit does
//             <em><span style="text-decoration: underline;">not</span></em>
//             affect its value.</strong></span></p>
// <p style="text-align: left;"><strong>Card Values</strong></p>
// <table style="border-collapse: collapse; width: 39.3621%; height: 304px;"
//     border="1">
//     <colgroup>
//         <col style="width: 50.0916%;">
//         <col style="width: 49.9084%;">
//     </colgroup>
//     <tbody>
//         <tr style="height: 21px;">
//             <td style="height: 21px; text-align: center;"><strong>Card
//                     Face</strong></td>
//             <td style="height: 21px; text-align: center;">
//                 <strong>Value</strong></td>
//         </tr>
//         <tr style="height: 21px;">
//             <td style="height: 21px; text-align: center;">2</td>
//             <td style="height: 21px; text-align: center;">2</td>
//         </tr>
//         <tr style="height: 21px;">
//             <td style="height: 21px; text-align: center;">3</td>
//             <td style="height: 21px; text-align: center;">3</td>
//         </tr>
//         <tr style="height: 21px;">
//             <td style="height: 21px; text-align: center;">4</td>
//             <td style="height: 21px; text-align: center;">4</td>
//         </tr>
//         <tr style="height: 21px;">
//             <td style="height: 21px; text-align: center;">5</td>
//             <td style="height: 21px; text-align: center;">5</td>
//         </tr>
//         <tr style="height: 21px;">
//             <td style="height: 21px; text-align: center;">6</td>
//             <td style="height: 21px; text-align: center;">6</td>
//         </tr>
//         <tr style="height: 21px;">
//             <td style="height: 21px; text-align: center;">7</td>
//             <td style="height: 21px; text-align: center;">7</td>
//         </tr>
//         <tr style="height: 21px;">
//             <td style="height: 21px; text-align: center;">8</td>
//             <td style="height: 21px; text-align: center;">8</td>
//         </tr>
//         <tr style="height: 21px;">
//             <td style="height: 21px; text-align: center;">9</td>
//             <td style="height: 21px; text-align: center;">9</td>
//         </tr>
//         <tr style="height: 21px;">
//             <td style="height: 21px; text-align: center;">10</td>
//             <td style="height: 21px; text-align: center;">10</td>
//         </tr>
//         <tr style="height: 21px;">
//             <td style="height: 21px; text-align: center;">J</td>
//             <td style="height: 21px; text-align: center;">11</td>
//         </tr>
//         <tr style="height: 22px;">
//             <td style="height: 22px; text-align: center;">Q</td>
//             <td style="height: 22px; text-align: center;">12</td>
//         </tr>
//         <tr style="height: 21px;">
//             <td style="height: 21px; text-align: center;">K</td>
//             <td style="height: 21px; text-align: center;">13</td>
//         </tr>
//         <tr style="height: 21px;">
//             <td style="height: 21px; text-align: center;">A</td>
//             <td style="height: 21px; text-align: center;">14</td>
//         </tr>
//     </tbody>
// </table>
// <p><span style="background-color: rgb(251, 238, 184);">MDE</span>: <span
//         style="background-color: rgb(191, 237, 210);">Nice use of a table
//         here! Much easier to read than if you were to write this
//         out.&nbsp;</span></p>
// <h3 id="h_55388256262451675731459007"><a id="Fight_Battle"></a> Fight/Battle
// </h3>
// <p><span data-preserver-spaces="true">The beginning of each round starts in
//         the Fight/Battle stage. At the beginning of each Fight/Battle, both
//         players draw a card off the top of their deck. These cards are added
//         to their staked cards. The player with the <strong>highest-valued
//         </strong>drawn card takes the staked cards of Player 1 and then
//         Player 2 (</span><strong><span data-preserver-spaces="true">in that
//             order</span></strong><span data-preserver-spaces="true">) and
//         adds them to the back of their deck. If both players draw an
//         equal-valued card, the&nbsp;</span><a class="editor-rtfLink"
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#War"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">War</span></a><span
//         data-preserver-spaces="true">&nbsp;stage begins.</span></p>
// <h3><a id="War"></a>&nbsp;War</h3>
// <p><span style="background-color: rgb(251, 238, 184);">MDE</span>:<span
//         style="background-color: rgb(191, 237, 210);"> It may be beneficial
//         to mention that the three cards drawn for a war remain face
//         down.&nbsp;</span></p>
// <p><span data-preserver-spaces="true">In the war stage, each player draws
//         three cards from the top of their deck and adds them to their staked
//         cards. The cards are added to the stake pile (face down) as they are
//         drawn, that is the first card drawn will be the bottom-most card
//         added to the pile. As an example, if Player 1 were to draw A, K, Q
//         and their stake pile consisted of J, 10, then their stake pile after
//         drawing would consist of J, 10, A, K, Q where Q would be the top-most
//         card in the stake pile. Importantly the cards J and 10 would have
//         been from a previous battle and the battle leading to the current war
//         stage respectively. They then return to the&nbsp;</span><a
//         class="editor-rtfLink"
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Fight_Battle"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">Fight/Battle</span></a><span
//         data-preserver-spaces="true"> stage to determine a winner. It is not
//         abnormal for a single game round to be comprised of multiple
//         wars.&nbsp;</span></p>
// <p><span style="background-color: rgb(251, 238, 184);">MDE</span>: <span
//         style="background-color: rgb(191, 237, 210);">Good description of the
//         basic stages of the real-life card game. I like how you referenced
//         and linked the fight/battle and war stages together to show how they
//         connect. I would mention the order of how the cards stack in the
//         staked cards for each player. Just to make it clear that the first
//         card drawn (that starts the war) is placed onto the bottom of the
//         deck first, then the three cards drawn during a war are placed after,
//         and then the card that wins/loses the final battle. Maybe an example
//         of this would help it be more clear.&nbsp;</span></p>
// <h3><a id="Determining_the_Winner"></a>&nbsp;Determining the Winner</h3>
// <p><span data-preserver-spaces="true">A player wins when the other player no
//         longer has cards to play. The only exception to this rule is when a
//         player runs out of cards to draw during the&nbsp;</span><a
//         class="editor-rtfLink"
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#War"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">War</span></a><span
//         data-preserver-spaces="true">&nbsp;stage, which will instead result
//         in a PAT (draw). This particular case applies to the three staked
//         cards and the next card drawn during the Fight/Battle stage. This
//         means each game ends in one of the following: <strong>Player 1
//             Wins</strong>, <strong>Player 2 Wins</strong>, or<strong> PAT
//             (draw)</strong>.</span></p>
// <h2>Simulating the Game</h2>
// <p><span data-preserver-spaces="true">The goal of the War challenge is to
//         simulate the game described by&nbsp;</span><a class="editor-rtfLink"
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Game_Breakdown"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">Game Breakdown</span></a><span
//         data-preserver-spaces="true">. This simulation begins with the
//         distribution of the players' cards. The stages described in the
//         "real-life" version of the game have been modified to allow a better
//         breakdown of the simulated game. The revised/new stages are Input
//         Stage, Game Stage, Fight/Battle Stage, and Post-Game Stage. An index
//         of these stages and a brief description of their purpose is provided
//         in the table below. Included within the sections for each of these
//         stages will be "jump links," which will jump you to the portions of
//         code being described.</span></p>
// <p><strong>Game Stages</strong>&nbsp;</p>
// <p><span style="background-color: rgb(251, 238, 184);">MDE</span>:<span
//         style="background-color: rgb(248, 202, 198);"> I like the use of a
//         table here to organize each stage and make it easy to jump to each
//         section quickly. I am a bit curious as to why you didn't decide to
//         keep the fight/battle stage and the war stage separate though. I feel
//         like keeping these stages separate similar to the description of the
//         game above would help improve the understanding of how they are
//         connected.&nbsp;</span></p>
// <table style="border-collapse: collapse; width: 100.001%; height: 125px;"
//     border="1">
//     <colgroup>
//         <col style="width: 49.9374%;">
//         <col style="width: 50%;">
//     </colgroup>
//     <tbody>
//         <tr style="height: 25px;">
//             <td style="height: 25px;">Stage Name</td>
//             <td style="height: 25px;">Description</td>
//         </tr>
//         <tr style="height: 25px;">
//             <td style="height: 25px;"><a
//                     href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Input_Stage">Input
//                     Stage</a></td>
//             <td style="height: 25px;">The stage responsible for parsing in
//                 and handling the creation of each player's deck.</td>
//         </tr>
//         <tr style="height: 25px;">
//             <td style="height: 25px;"><a
//                     href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Game_Stage"
//                     target="_blank" rel="noopener">Game Stage (Round
//                     Manager)</a></td>
//             <td style="height: 25px;">The stage responsible for simulating
//                 game rounds until a game victor is determined.</td>
//         </tr>
//         <tr style="height: 25px;">
//             <td style="height: 25px;"><a
//                     href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Fight_Battle_Stage">Fight/Battle
//                     Stage</a></td>
//             <td style="height: 25px;">The stage responsible for implementing
//                 the <a
//                     href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Fight_Battle"
//                     target="_blank" rel="noopener">Fight/Battle</a> and <a
//                     href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#War">War</a>
//                 stages described in <a
//                     href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Game_Breakdown">Game
//                     Breakdown</a>.</td>
//         </tr>
//         <tr style="height: 25px;">
//             <td style="height: 25px;"><a
//                     href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Post_Game_Loop">Post-Game
//                     Stage</a></td>
//             <td style="height: 25px;">The stage responsible for outputting
//                 the game results and the number of game rounds.</td>
//         </tr>
//     </tbody>
// </table>
// <p><span style="background-color: rgb(251, 238, 184);">MDE</span>: <span
//         style="background-color: rgb(191, 237, 210);">I like the example
//         outputs as it makes it very clear what needs to be outputted, but I
//         would recommend rewording the first sentence below. The use of
//         "game-winner" generally makes me think of the move that leads to the
//         win, not necessarily the player that won.</span></p>
// <p>The challenge asks that we implement the above stages and output the
//     game-winner (the player who won) and the number of game rounds. An
//     example output is as follows "1 3". In this instance, Player 1 won, and
//     the game lasted three rounds. A short table of example outputs (with
//     explanations of what they mean) is provided below.</p>
// <p><strong>Example Outputs</strong></p>
// <table style="border-collapse: collapse; width: 100%; height: 126px;"
//     border="1">
//     <colgroup>
//         <col style="width: 49.9505%;">
//         <col style="width: 50.033%;">
//     </colgroup>
//     <tbody>
//         <tr style="height: 21px;">
//             <td style="height: 21px;">Output</td>
//             <td style="height: 21px;">Meaning</td>
//         </tr>
//         <tr style="height: 21px;">
//             <td style="height: 21px;">1 3</td>
//             <td style="height: 21px;">Winner: Player 1 | Game Rounds: 3</td>
//         </tr>
//         <tr style="height: 21px;">
//             <td style="height: 21px;">2 9</td>
//             <td style="height: 21px;">Winner: Player 2 | Game Rounds: 9</td>
//         </tr>
//         <tr style="height: 21px;">
//             <td style="height: 21px;">PAT</td>
//             <td style="height: 21px;">Winner: Draw (See <a
//                     href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Determining_the_Winner"
//                     target="_blank" rel="noopener">Determining the
//                     Winner</a>)</td>
//         </tr>
//         <tr style="height: 21px;">
//             <td style="height: 21px;">2 5</td>
//             <td style="height: 21px;">Winner: Player 2 | Game Rounds: 5</td>
//         </tr>
//         <tr style="height: 21px;">
//             <td style="height: 21px;">1 8</td>
//             <td style="height: 21px;">Winner: Player 1 | Game Rounds: 8</td>
//         </tr>
//     </tbody>
// </table>
// <p><span style="background-color: rgb(251, 238, 184);">MDE</span>:<span
//         style="background-color: rgb(191, 237, 210);"> Good use of a link
//         back to a previous description of the PAT output considering the case
//         in which they consider a draw for this simulation is not generally
//         seen as a draw in the real-life game.</span></p>
// <h3 id="h_19159367641411675728910787"><a id="Input_Stage"></a>&nbsp;Input
//     Stage</h3>
// <p>The input stage is required to create the players' decks and distribute
//     the game cards to those decks. The player's decks are only used in a
//     First-In-First-Out (FIFO) fashion. As a result, a queue of integers was
//     selected to represent each player's deck. Additional data structures that
//     could serve as an alternative include vectors, arrays, linked lists, etc.
//     The reason the C++ implementation (std) for a queue was used in place of
//     these alternatives was due to the simplification of implementation and
//     the ability to avoid implementing structure control functions. Player
//     cards are passed in by the simulation manager (external to this program)
//     provided by CodinGame. These cards are passed in as the number of cards
//     for Player 1 and then the&nbsp;<a
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Parsing_Card_Descriptors">card
//         descriptors</a> for each of Player 1's cards. This repeats for Player
//     2 after all of Player 1's cards have been read in.&nbsp;</p>
// <h4><a id="Parsing_Card_Descriptors"></a> Understanding and Parsing Card
//     Descriptors</h4>
// <p><span data-preserver-spaces="true">A card descriptor is a string
//         representing the card's face and suit. For example, <em>AS</em>
//         stands for Ace of Spades and can be valued as a 14. A helper function
//         called ParseCard is responsible for taking in a single card
//         descriptor and returning its integer value so that it can be added to
//         a player's deck. It accomplishes this by combining a switch statement
//         and the descriptor's length. It initially checks to see if the
//         <strong>first character</strong> of the descriptor is any potential
//         non-integer value (J, Q, K, A), returning its value if it is. If it
//         is not, it checks the card's length. This is so that it can handle
//         double-digit numbers, i.e., if the card length is 2, then it is known
//         that it is a single-digit number followed by the card's suit.
//         Vice-versa, if it is 3, it is known that it is a double-digit number
//         followed by the card's suit. This determination allows us to
//         use&nbsp;</span><a class="editor-rtfLink"
//         href="https://cplusplus.com/reference/cstdlib/atoi/?kw=atoi"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">atoi</span></a><span
//         data-preserver-spaces="true">&nbsp;and&nbsp;</span><a
//         class="editor-rtfLink"
//         href="https://cplusplus.com/reference/string/string/substr/"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">substr</span></a><span
//         data-preserver-spaces="true">&nbsp;to convert the string
//         representation into its integer counterpart. The short-hand
//         conditional operator (?) is used, and its usage is
//         available&nbsp;</span><a class="editor-rtfLink"
//         href="https://cplusplus.com/doc/tutorial/operators/#conditional"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">here</span></a><span
//         data-preserver-spaces="true">. The ParseCard helper function can be
//         found&nbsp;</span><a class="editor-rtfLink"
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Code_ParseCard"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">here</span></a>.</p>
// <p><span style="background-color: rgb(251, 238, 184);">MDE</span>:<span
//         style="background-color: rgb(191, 237, 210);"> Very good description
//         of this helper function. This made it easy to understand and read the
//         code, especially for those extra functions that were
//         linked.&nbsp;</span></p>
// <figure class="image"><img src="images/card_descriptor_example.png" alt=""
//         width="353" height="267">
//     <figcaption>Card Descriptor Breakdown</figcaption>
// </figure>
// <p>Below is an example of a complete simulation input:</p>
// <p><strong>Example Input</strong></p>
// <p><img src="images/input_example.png" alt=""><img
//         src="../../../../home/kaf386/CodeChat_Editor/Code/images/input_example.png"
//         alt=""><img
//         src="../../../../home/kaf386/CodeChat_Editor/Code/images/input_example.png"
//         alt=""></p>
// <p>The reading in and population of each players' cards can be found&nbsp;<a
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Code_InputStage"
//         target="_blank" rel="noopener">here</a>. In the reading in of the
//     card count and the card descriptors, you will see a call to&nbsp;<a
//         href="https://cplusplus.com/reference/iostream/cin/">cin </a>(which
//     reads in data from the standard input stream of the program) followed by
//     a call to<a
//         href="https://cplusplus.com/reference/istream/istream/ignore/">
//         cin.ignore()</a>. The<a
//         href="https://cplusplus.com/reference/istream/istream/ignore/">
//         cin.ignore()</a> call is intended to skip to the next line of input
//     as there are remaining inputs such as \n (new line) and \r (carriage
//     return) on the input stream that we would like to ignore.</p>
// <p><span style="background-color: rgb(251, 238, 184);">MDE</span>: <span
//         style="background-color: rgb(191, 237, 210);">I like the example
//         input image and the annotation within it, but I would explain the
//         format for the card descriptors before the image. Seeing this image
//         first I was a bit confused why there were extra characters after the
//         card values before reading the paragraph below.</span></p>
// <h3><a id="Game_Stage"></a> Game Stage (Round Manager)</h3>
// <p><span data-preserver-spaces="true">The Game Stage can be thought of as a
//         "round manager" it keeps track of the number of cards in each
//         player's hand, allocates the "staked" cards based on the round
//         winner, and increments the number of game rounds after each round is
//         completed. In order to facilitate this process, the <strong>game
//             rounds and game winner are initialized to 0 and -2 outside of the
//             loop</strong>, respectively. Importantly, a check to see if the
//         latest round resulted in a PAT is made in order to streamline the
//         battle function in the case of a draw (if an early termination check
//         is not made in the round manager, then the battle function would need
//         to be responsible for clearing the player's decks on a draw, instead
//         in this implementation their decks are entirely ignored in the case
//         of a draw). This portion of the code can be found&nbsp;</span><a
//         class="editor-rtfLink"
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Code_GameStage"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">here</span></a><span
//         data-preserver-spaces="true">.&nbsp;</span></p>
// <p><span data-preserver-spaces="true">At the beginning of the game loop, the
//         game round counter is incremented, and each <strong>player's stakes
//             are initialized to an empty queue of integer</strong>s. At this
//         point, we enter the Fight/Battle stage. The result from this stage is
//         saved into the game-winner variable so that it can be used to
//         distribute the stake cards to the winner and, in the&nbsp;</span><a
//         class="editor-rtfLink"
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Post_Game_Loop"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">Post-Game Stage</span></a><span
//         data-preserver-spaces="true">, to determine the victor. The
//         distribution of the stake cards is handled using a switch statement
//         with a case for a value of 1 (Player 1 Victory) and 2 (Player 2
//         Victory). This switch statement then handles distributing the
//         "staked" cards to the winner (keep in mind the order for adding
//         staked cards back to the winner's hands discussed in&nbsp;</span><a
//         class="editor-rtfLink"
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp##Game_Breakdown"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">Game Breakdown</span></a><span
//         data-preserver-spaces="true">)..</span></p>
// <p><span data-preserver-spaces="true"><span
//             style="background-color: rgb(251, 238, 184);">MDE</span>: <span
//             style="background-color: rgb(191, 237, 210);">Good overview and
//             description of the game stage! I like the name "round manager"
//             used to describe this section, and would even suggest renaming
//             this stage to something containing the word "round" in it so that
//             you can get a better idea of what this stage is doing from the
//             name.&nbsp;</span></span></p>
// <h4><a id="Game_Winner_Values"></a>&nbsp;Game Winner Values</h4>
// <p><span data-preserver-spaces="true">In the real-life breakdown, it was
//         discussed that there are <strong>three victory states Player 1 Wins,
//             Player 2 Wins, and a Draw (PAT)</strong>. These can be encoded
//         (with no fundamental importance on their value) as integers. It was
//         chosen that <strong>-1 would represent PAT, 1 would represent a
//             Player 1 victory, and 2 would be a Player 2 victory</strong>.
//         In&nbsp;</span><a class="editor-rtfLink"
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Game_Stage"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">Game Stage</span></a><span
//         data-preserver-spaces="true">, it was noted that the game-winner
//         would be initially encoded as -2. <strong>-</strong>2 is an
//         additional state added for simulation that represents an undefined
//         (or <em>non-updated</em>) game-winner. It is primarily used to verify
//         that the simulation ran successfully (did not fall through). A quick
//         reference table is available below.</span></p>
// <p><strong>Game Winner Quick Reference Table</strong></p>
// <table style="border-collapse: collapse; width: 65.8329%; height: 144px;"
//     border="1">
//     <colgroup>
//         <col style="width: 49.9086%;">
//         <col style="width: 50.0914%;">
//     </colgroup>
//     <tbody>
//         <tr style="height: 21px;">
//             <td style="height: 21px;">Game Winner Value</td>
//             <td style="height: 21px;">Meaning</td>
//         </tr>
//         <tr style="height: 21px;">
//             <td style="height: 21px;">1</td>
//             <td style="height: 21px;">Player 1 Wins</td>
//         </tr>
//         <tr style="height: 21px;">
//             <td style="height: 21px;">2</td>
//             <td style="height: 21px;">Player 2 Wins</td>
//         </tr>
//         <tr style="height: 21px;">
//             <td style="height: 21px;">-1</td>
//             <td style="height: 21px;">PAT - Occurs only in a special case
//                 involving wars (see <a
//                     href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Determining_the_Winner">Determining
//                     the Winner</a>)</td>
//         </tr>
//         <tr style="height: 21px;">
//             <td style="height: 21px;">-2</td>
//             <td style="height: 21px;">Undefined, simulation did not update
//                 the game winner from its default value.</td>
//         </tr>
//     </tbody>
// </table>
// <p><span style="background-color: rgb(251, 238, 184);">MDE</span>: <span
//         style="background-color: rgb(191, 237, 210);">I like the addition of
//         keeping the built-in undefined state here so that it would be easy to
//         tell what went wrong if this were the output.&nbsp;</span></p>
// <h3><a id="Fight_Battle_Stage"></a>&nbsp;Fight/Battle Stage</h3>
// <p><span data-preserver-spaces="true">The Fight/Battle Stage code implements
//         the logic for both the&nbsp;</span><a class="editor-rtfLink"
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Fight_Battle"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">Fight/Battle</span></a><span
//         data-preserver-spaces="true">&nbsp;and&nbsp;</span><a
//         class="editor-rtfLink"
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#War"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">War</span></a><span
//         data-preserver-spaces="true">&nbsp;stages (you can think of the War
//         as a special recursive call to the Battle Stage) discussed in
//         the&nbsp;</span><a class="editor-rtfLink"
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Game_Breakdown"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">Game Breakdown</span></a><span
//         data-preserver-spaces="true">. A Fight is <strong>equivalent</strong>
//         to a Battle, except that a Battle follows a War. I.e., a round begins
//         with a fight but not a "battle." The Fight/Battle stage was
//         implemented as a singular function call which can be called as many
//         times as necessary (until a player has no remaining cards) by the
//         Game Stage Loop (see the call <a
//             href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Code_BattleStage">here</a>).
//         In order to do this, it was <strong>necessary</strong> to pass each
//         player's deck and their staked cards.&nbsp;This function can be found
//     </span><a class="editor-rtfLink"
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Code_BattleFunction"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">here</span></a><span
//         data-preserver-spaces="true">.</span></p>
// <h4><a id="Fight_Battle_Stage"></a>&nbsp;Fight/Battle</h4>
// <p><span data-preserver-spaces="true">A fight is completed by checking and
//         removing the top card of the players' decks (<em>P1Hand</em> and
//         <em>P2Hand</em>). These cards are added to each player's respective
//         stake piles (<em>P1Stakes</em> and <em>P2Stakes</em>). If Player 1's
//         "fight" card (p1FightCard) is greater than Player 2's "fight" card,
//         then a 1 (Player 1 Win) is returned. Accordingly, a 2 (Player 2 Win)
//         is returned if Player 2's "fight" card is greater than Player 1's
//         "fight" card. Before this check is made, it is determined if Player
//         1's "fight" card is equal to Player 2's "fight" card. If they are, we
//         enter the&nbsp;</span><a class="editor-rtfLink"
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#War_Stage"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">War</span></a><span
//         data-preserver-spaces="true">&nbsp;stage.</span></p>
// <h4><a id="War_Stage"></a>&nbsp;War&nbsp;</h4>
// <p><span data-preserver-spaces="true">The war stage is an <em>extended</em>
//         fight stage. Initially, a check is made such that if Player 1 or
//         Player 2 has less than four cards if so, a draw is returned (see PAT
//         case described in <a
//             href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Determining_the_Winner">Determining
//             the Winner</a>)</span><span data-preserver-spaces="true">. If
//         this check passes (both players have at least four cards), the three
//         topmost cards are removed from their hands and added to their
//         respective stake piles. After adding the players' cards to their
//         stake piles, the </span><a class="editor-rtfLink"
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Fight_Battle_Stage"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">Fight/Battle</span></a><span
//         data-preserver-spaces="true"> function is called recursively.</span>
// </p>
// <p><span data-preserver-spaces="true"><span
//             style="background-color: rgb(251, 238, 184);">MDE</span>: <span
//             style="background-color: rgb(191, 237, 210);">It looks as though
//             if you change the war section to check if player 1 or player 2
//             has less than four cards rather than less than three, this would
//             allow you to take out the check at the beginning of the battle
//             section. If either player has less than four cards in a war, it
//             should always end in a draw since they do not have enough cards
//             to do the next battle to determine the winner of the war. The
//             player with cards less than four though will need to have their
//             hand queue emptied though before returning to the game stage. If
//             it's not emptied here, the loop will continue as it thinks there
//             are still cards in the player's hand. With this returning -1 to
//             the game stage here and one player's hand empty, there should be
//             no cases left where either player will have zero cards at the
//             beginning of the battle stage.&nbsp;</span></span></p>
// <p><span data-preserver-spaces="true"><span
//             style="background-color: rgb(251, 238, 184);">MDE</span>:<span
//             style="background-color: rgb(191, 237, 210);"> Implementing the
//             change stated above would also get rid of the need for the
//             variable inWar. This variable is no longer needed because the
//             draw will return from within the war section
//             itself.&nbsp;</span></span></p>
// <h4>Fight/Battle Stage Flow Chart</h4>
// <p>The following image is a flowchart describing the Fight/Battle Stage
//     function including the logic for the recursive <a
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#War_Stage">War</a>
//     stage.&nbsp;</p>
// <p><img style="display: block; margin-left: auto; margin-right: auto;"
//         src="images/rb_flow.png" alt="" width="583" height="706"></p>
// <p><span style="background-color: rgb(251, 238, 184);">MDE</span>: <span
//         style="background-color: rgb(191, 237, 210);">I like the flowchart
//         visual here. It makes it much easier to understand how the code is
//         formatted with the recursion and all the various spots where values
//         are returned to the game stage.</span></p>
// <p>&nbsp;</p>
// <h3><a id="Post_Game_Loop"></a> Post-Game Stage</h3>
// <p><span data-preserver-spaces="true">The purpose of the Post-Game stage is
//         to interpret the value of the game-winner variable produced by the
//         Game Stage and output the corresponding results. This is accomplished
//         with a switch statement. If the game winner is 1 (Player 1 Victory)
//         or 2 (Player 2 Victory), it outputs the corresponding winner and the
//         number of game rounds. If it is -1, it outputs PAT. As a fail-safe,
//         if the variable is <strong>never</strong> updated from -2 (as
//         discussed in&nbsp;</span><a class="editor-rtfLink"
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Game_Winner_Values"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">Game Winner Values</span></a><span
//         data-preserver-spaces="true">), it outputs an error corresponding to
//         the value not being changed. Otherwise, it will output an undefined
//         error state. The Post-Game Stage can be found&nbsp;</span><a
//         class="editor-rtfLink"
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Code_Post_Game_Stage"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">here</span></a><span
//         data-preserver-spaces="true">.</span></p>
// <p><span data-preserver-spaces="true"><span
//             style="background-color: rgb(251, 238, 184);">MDE</span>: <span
//             style="background-color: rgb(191, 237, 210);">I like the use of
//             both the fail-safe for the winner variable never updated and the
//             undefined error state. Nice job at making sure the code can not
//             fully error out or produce no output in this
//             section!</span></span></p>
// <h2><a id="Pseudocode"></a>&nbsp;Brief Pseudocode</h2>
// <p>In order to summarize the process discussed above, the following is a
//     brief pseudocode describing the entire process. This pseudocode will be
//     referenced throughout the code in order to help with guidance and
//     readability. If you run into any questions while going through this
//     pseudocode, it is recommended to refer to the above sections describing
//     the process in detail.</p>
// <p><strong>====================== | Input Stage |
//         ==================================================================</strong><br>1.
//     Create a &ldquo;Hand&rdquo; (Queue) for Player 1 <br>2. Create a
//     &rdquo;Hand&rdquo; (Queue) for Player 2 <br>3. Loop over program inputs
//     for Player 1, adding Cards to Player 1&rsquo;s Hand.<br>&nbsp; &nbsp;
//     &nbsp;a. This should parse non-integer characters (A, K, Q) to integer
//     value representations. <br>4. Loop over program inputs for Player 2,
//     adding Cards to Player 2&rsquo;s Hand. <br>&nbsp; &nbsp; &nbsp;a. Same
//     process as Step 3, however, focused on the inputs for Player 2 instead of
//     1. <br><strong>====================== | Input Stage Complete
//         |===========================================================</strong><br>5.
//     Pre-Loop Initialize Game Winner to (-2) and Game Rounds to 0 <br>&nbsp;
//     &nbsp; &nbsp;a (-2) is UNDEFINED (will result in an error state if
//     returned)&nbsp;<br>&nbsp; &nbsp; &nbsp;b. (-1) is PAT <br>&nbsp; &nbsp;
//     &nbsp;c. (1) is Player 1 Win <br>&nbsp; &nbsp; &nbsp;d. (2) is Player 2
//     Win <br>6. Increase Game Rounds by 1 <br>7. Initialize 2 Queues which
//     will hold each Players "Staked" Cards <br>&nbsp; &nbsp; &nbsp; a. Queue
//     since order matters (alternatives could be vectors, arrays, or other
//     structures if proper controls implemented)
//     <br><strong>=========================== | Battle Stage (Function) |
//         ====================================================</strong><br>8.
//     Pop the top &ldquo;Card&rdquo; from Player 1&rsquo;s &ldquo;Hand&rdquo;,
//     adding it to the queue for Player 1&rsquo;s &ldquo;Staked&rdquo;
//     Cards&nbsp;<br>9. Pop the top &ldquo;Card&rdquo; from Player 2&rsquo;s
//     &ldquo;Hand&rdquo;, adding it to the queue for Player 2&rsquo;s
//     &ldquo;Staked&rdquo; Cards&nbsp;<br>10. Check for the following battle
//     states:&nbsp;<br>&nbsp; &nbsp; &nbsp; &nbsp; a. TIE <br>&nbsp; &nbsp;
//     &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;i. The value of the card last added to
//     Player 1&rsquo;s &ldquo;Staked&rdquo; Cards matches that of the last card
//     added to Player 2&rsquo;s &ldquo;Staked&rdquo; Cards <br>&nbsp; &nbsp;
//     &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;ii. Go to War Stage <br>&nbsp; &nbsp;
//     &nbsp; &nbsp; b. PLAYER 1 WINS (Add contents of both Players
//     &ldquo;Staked&rdquo; Cards to Player 1&rsquo;s Hand) <br>&nbsp; &nbsp;
//     &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;i. The value of the card last added to
//     Player 1&rsquo;s &ldquo;Staked&rdquo; Cards exceeds that of the last card
//     added to Player 2&rsquo;s &ldquo;Staked&rdquo; Cards <br>&nbsp; &nbsp;
//     &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;ii. Return Player 1 Win (1) <br>&nbsp;
//     &nbsp; &nbsp; &nbsp; c. PLAYER 2 WINS (Add the contents of both Players
//     &ldquo;Staked&rdquo; Cards to Player 2&rsquo;s Hand) <br>&nbsp; &nbsp;
//     &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;i. The value of the card last added to
//     Player 1&rsquo;s &ldquo;Staked&rdquo; Cards subceeds that of the last
//     card added to Player 2&rsquo;s &ldquo;Staked&rdquo; Cards <br>&nbsp;
//     &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;ii. Return Player 2 Win (2)
//     <br><strong>==================================== | (On Battle State: TIE)
//         War Stage | ====================================</strong> <br>11.
//     Check the number of Cards in each hand, if either is less than four,
//     return PAT (-1)&nbsp;<br>12. Pop three &ldquo;cards&rdquo; from Player
//     1&rsquo;s &ldquo;Hand&rdquo;, adding them to the queue for Player
//     1&rsquo;s &ldquo;Staked&rdquo; Cards&nbsp;<br>13. Pop three
//     &ldquo;cards&rdquo; from Player 2&rsquo;s &ldquo;Hand&rdquo;, adding them
//     to the queue for Player 2&rsquo;s &ldquo;Staked&rdquo; Cards&nbsp;<br>14.
//     Do Battle (Recursion)<br><strong>================================ |
//         Post-Game Stage (After Loop) |
//         ==========================================</strong> <br>15. Output
//     Game Results&nbsp;<br>&nbsp; &nbsp; &nbsp;a. If Game Winner is
//     -1<br>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;i. Output
//     &ldquo;PAT&rdquo;<br>&nbsp; &nbsp; &nbsp;b. If Game Winner is 2
//     <br>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;i. Output &ldquo;2&rdquo;
//     with the number of Game Rounds<br>&nbsp; &nbsp; &nbsp;c. If Game Winner
//     is 1 <br>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;i. Output
//     &ldquo;1&rdquo; with the number of Game Rounds
//     <br><strong>============================== | End of Post-Game Stage |
//         ================================================</strong></p>
// <p><span style="background-color: rgb(251, 238, 184);">MDE</span>: <span
//         style="background-color: rgb(191, 237, 210);">Very nice pseudocode
//         use! This seems to match up with what you currently have implemented
//         and is a nice guide to the program</span></p>
// <h2>Code</h2>

// <h4>Necessary Includes and Namespace Setup</h4>
#include <iostream>
#include <string>
#include <queue>

using namespace std;

// <h4><a id="Code_ParseCard"></a> <a
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Parsing_Card_Descriptors">Helper
//         Function Information</a></h4>
int ParseCard(string cardDescriptor) {
    // <pre><span style="color: rgb(22, 145, 121);">See Steps 3a and 4a</span></pre>
    switch (cardDescriptor[0]) {
        case 'J': {
            return 11;
            break;
        }
        case 'Q': {
            return 12;
            break;
        }
        case 'K': {
            return 13;
            break;
        }
        case 'A': {
            return 14;
            break;
        }
        default: {
            return cardDescriptor.length() == 3 ? atoi(cardDescriptor.substr(0, 2).c_str()) : atoi(cardDescriptor.substr(0, 1).c_str());
            break;
        }
    };
};


// <h3><a id="Code_BattleFunction"></a>&nbsp;<a
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Fight_Battle_Stage">Battle
//         Function Information</a></h3>
int Battle(queue<int> &P1Hand, queue<int> &P2Hand, queue<int> &P1Stakes, queue<int> &P2Stakes) {
    // <p><span style="background-color: rgb(251, 238, 184);">MDE</span>: <span
    //         style="background-color: rgb(191, 237, 210);">As stated above
    //         under the fight/battle stage description, this section (8) is
    //         able to be removed if the code is refactored to handle draws
    //         during the war section. The inWar variable will be able to be
    //         removed from the program completely as well.&nbsp;</span></p>

    // <pre><span style="color: rgb(22, 145, 121);">8. Pop the top &ldquo;Card&rdquo; from Player 1&rsquo;s &ldquo;Hand&rdquo;, adding it to the queue for Player 1&rsquo;s &ldquo;Staked&rdquo; Cards</span></pre>
    int p1FightCard = P1Hand.front();
    P1Hand.pop();
    P1Stakes.push(p1FightCard);

    // <pre><span style="color: rgb(22, 145, 121);">9. Pop the top &ldquo;Card&rdquo; from Player 2&rsquo;s &ldquo;Hand&rdquo;, adding it to the queue for Player 2&rsquo;s &ldquo;Staked&rdquo; Cards</span></pre>
    int p2FightCard = P2Hand.front();
    P2Hand.pop();
    P2Stakes.push(p2FightCard);

    // <pre><span style="color: rgb(22, 145, 121);">10. Check for the following battle states: TIE (WAR STAGE)</span></pre>
    if (p1FightCard == p2FightCard) 
    {
        // <p><span style="background-color: rgb(251, 238, 184);">MDE</span>:
        //     <span style="background-color: rgb(191, 237, 210);">As stated
        //         above, I recommend checking for &lt; 4 in both of these if
        //         statements. If either of the player's hands is less than
        //         four, reinitialize that player's hand so that it is empty
        //         with something like " P1Hand = queue&lt;int&gt;(); ". This
        //         will allow the while loop to stop when -1 is returned to the
        //         battle stage since the player's hand's size will be
        //         zero.&nbsp;</span></p>
        // <p><span style="background-color: rgb(251, 238, 184);">MDE</span>:
        //     <span style="background-color: rgb(191, 237, 210);">Also, as this
        //         is written currently, inWar is never set to true here when
        //         the war stage is entered, so these will always return the
        //         player's number even though they are actually in the war
        //         stage.&nbsp; &nbsp;</span></p>
        // <pre><span style="color: rgb(22, 145, 121);">11. Check the number of Cards in each hand, if either is less than four, return PAT (-1)</span></pre>
        if (P1Hand.size() < 4 || P2Hand.size() < 4) {
            return -1;
        }

        // <pre><span style="color: rgb(22, 145, 121);">13. Pop three &ldquo;cards&rdquo; from Player 1&rsquo;s &ldquo;Hand&rdquo;, adding them to the queue for Player 1&rsquo;s &ldquo;Staked&rdquo; Cards </span><br><span style="color: rgb(22, 145, 121);">14. Pop three &ldquo;cards&rdquo; from Player 2&rsquo;s &ldquo;Hand&rdquo;, adding them to the queue for Player 2&rsquo;s &ldquo;Staked&rdquo; Cards</span></pre>
        for (int i = 0; i < 3; i++) {
            P1Stakes.push(P1Hand.front());
            P1Hand.pop();

            P2Stakes.push(P2Hand.front());
            P2Hand.pop();
        }

        // <pre><span style="color: rgb(22, 145, 121);">15. Do Battle (Recursion -&gt; inWar set to true for special case PAT)</span></pre>
        return Battle(P1Hand, P2Hand, P1Stakes, P2Stakes);
    } 
    // <pre><span style="color: rgb(22, 145, 121);">P1 WINS</span></pre>
    else if (p1FightCard > p2FightCard) 
    {
        return 1;
    }
    // <pre><span style="color: rgb(22, 145, 121);">P2 WINS</span></pre>
    else 
    {        
        return 2;
    }
}

int main()
{
    // <h4><span style="color: rgb(22, 145, 121);"><span
    //             style="color: rgb(0, 0, 0);"><a
    //                 id="Code_InputStage"></a>&nbsp;Begin Input
    //             Stage</span></span></h4>
    // <pre><span style="color: rgb(22, 145, 121);">1. Create a &ldquo;Hand&rdquo; (Queue) for Player 1</span></pre>
    queue<int> P1Hand;

    // <pre><span style="color: rgb(22, 145, 121);">2. Create a "Hand" (Queue) for Player 2</span></pre>
    queue<int> P2Hand;
    
// <p>&nbsp; &nbsp; &nbsp; <span
//         style="background-color: rgb(251, 238, 184);">MDE</span>: <span
//         style="background-color: rgb(191, 237, 210);">Changing the variable
//         name 'n' to something such as 'numCardsP1' would help code
//         readability and get rid of the extra comment next to the
//         initialization. A similar change can be&nbsp; &nbsp; &nbsp; &nbsp;
//         made for variable 'm'.</span></p>
// <p>&nbsp; &nbsp; &nbsp; <span
//         style="background-color: rgb(251, 238, 184);">MDE</span>: <span
//         style="background-color: rgb(191, 237, 210);">An explanation or link
//         to why cin.ignore() is used here could be beneficial. You could
//         probably add this to your input stage description.</span></p>

    // <pre><span style="color: rgb(22, 145, 121);">3. Loop over program inputs for Player 1, adding Cards to Player 1&rsquo;s Hand.<br></span></pre>
    int numCardsP1;
    cin >> numCardsP1; cin.ignore();
    for (int i = 0; i < numCardsP1; i++) {
        string cardp_1;
        cin >> cardp_1; cin.ignore();
        P1Hand.push(ParseCard(cardp_1));
    }
    
    // <pre><span style="color: rgb(22, 145, 121);">4. Loop over program inputs for Player 2, adding Cards to Player 2&rsquo;s Hand.</span></pre>
    int numCardsP2;
    cin >> numCardsP2; cin.ignore();
    for (int i = 0; i < numCardsP2; i++) {
        string cardp_2;
        cin >> cardp_2; cin.ignore();
        P2Hand.push(ParseCard(cardp_2));
    }

    // <h4><span style="color: rgb(0, 0, 0);"><a
    //             id="Code_GameStage"></a>&nbsp;Game Stage</span></h4>

    // <pre><span style="color: rgb(22, 145, 121);">5. Pre-Loop Initialize Game Winner to (-2) and Game Rounds to 0</span></pre>
    int gameRounds = 0;
    int gameWinner = -2;
    while (P1Hand.size() != 0 && P2Hand.size() != 0 && gameWinner != -1) {
        // <pre><span style="color: rgb(22, 145, 121);">6. Increase Game Rounds by 1</span></pre>
        gameRounds++;

        // <pre><span style="color: rgb(22, 145, 121);">7. Create 2 Queues which will hold each Players &ldquo;Staked&rdquo; Cards</span></pre>
        queue<int> P1Stakes;
        queue<int> P2Stakes;

        // <h4><span style="color: rgb(0, 0, 0);"><a
        //             id="Code_BattleStage"></a>&nbsp;Battle Stage</span></h4>
        gameWinner = Battle(P1Hand, P2Hand, P1Stakes, P2Stakes);

        // <pre><span style="color: rgb(22, 145, 121);">Victory Cards Added After Battle Completes (See internals of Step 11)</span></pre>
        switch (gameWinner) {
            case 1: {
                while (!P1Stakes.empty()) {
                    P1Hand.push(P1Stakes.front());
                    P1Stakes.pop();
                }

                while (!P2Stakes.empty()) {
                    P1Hand.push(P2Stakes.front());
                    P2Stakes.pop();
                }
                break;
            }
            case 2: {
                while (!P1Stakes.empty()) {
                    P2Hand.push(P1Stakes.front());
                    P1Stakes.pop();
                }

                while (!P2Stakes.empty()) {
                    P2Hand.push(P2Stakes.front());
                    P2Stakes.pop();
                }
                break;
            }
        }
    }
    
    // <h4><a id="Code_Post_Game_Stage"></a> Post-Game Stage</h4>
    // <pre><span style="color: rgb(22, 145, 121);">16. Output Game Results</span></pre>
    switch (gameWinner) {
        case -1:
            cout << "PAT" << endl;
            break;
        case 1:
        case 2:
            cout << gameWinner << " " << gameRounds << endl;
            break;
        case -2:
            cerr << "STATE WAS NOT UPDATED FROM UNDEFINED (-2)" << endl;
        // <p><span style="background-color: rgb(251, 238, 184);">MDE</span>:
        //     <span style="background-color: rgb(191, 237, 210);">To keep
        //         consistency, I would recommended changing the below cout to
        //         cerr since you used cerr for the previous error state.</span>
        // </p>
        default:
            cerr << "ERROR! " << gameWinner << " is not a defined value." << endl;
            break;
    }
}

// <p><span style="background-color: rgb(251, 238, 184);">MDE</span>: <span
//         style="background-color: rgb(191, 237, 210);">Overall a very good
//         breakdown and description of the problem and simulation for the
//         solution. Your descriptions went in-depth and were very helpful in
//         understanding how the program worked exactly. In the actual code for
//         the solution, the variable names were well-named so that the code was
//         easily readable. All of the tables, figures, the flowchart, and
//         pseudocode were great choices to add to this documentation as most of
//         these helped with visualizing the format and code. I could easily
//         follow along with the code with the descriptions. I liked how the
//         descriptions for each code section were separate from the code
//         itself. The links between them made it easy to reference back to the
//         description/code for each section. The main issue I saw within the
//         program was within the battle/war stage. Mostly with the inWar
//         variable not being set to true after entering a war, and then checked
//         while currently within the war if statement. If the code is
//         refactored there to be more accurate to the problem, this variable
//         and issue will be fixed. Great work on this program and
//         documentation!</span></p>
