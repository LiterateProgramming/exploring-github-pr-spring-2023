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
// <h3 id="h_55388256262451675731459007"><a
//         id="Fight_Battle"></a>&nbsp;Fight/Battle</h3>
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
// <p><span data-preserver-spaces="true">In the war stage, each player draws
//         three cards from the top of their deck and adds them to their staked
//         cards. They then return to the&nbsp;</span><a class="editor-rtfLink"
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Fight_Battle"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">Fight/Battle</span></a><span
//         data-preserver-spaces="true">&nbsp;stage to determine a winner. It is
//         not abnormal for a single game round to be comprised of multiple
//         wars.&nbsp;</span>&nbsp;</p>
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
//                     target="_blank" rel="noopener">Game Stage</a></td>
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
// <p>The challenge asks that we implement the above stages and output the
//     game-winner and the number of game rounds. An example output is as
//     follows "1 3". In this instance, Player 1 won, and the game lasted three
//     rounds. A short table of example outputs (with explanations of what they
//     mean) is provided below.</p>
// <p><strong>Example Outputs</strong></p>
// <table style="border-collapse: collapse; width: 100.001%; height: 126px;"
//     border="1">
//     <colgroup>
//         <col style="width: 49.9374%;">
//         <col style="width: 50%;">
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
// <h3 id="h_19159367641411675728910787"><a id="Input_Stage"></a>&nbsp;Input
//     Stage</h3>
// <p>The input stage is required to create the players' decks and distribute
//     the game cards to those decks. The player's decks are only used in a
//     First-In-First-Out (FIFO) fashion. As a result, a queue of integers was
//     selected to represent each player's deck. Additional data structures that
//     could serve as an alternative include vectors, arrays, linked lists, etc.
//     The reason the C++ implementation (std) was used in place of these
//     alternatives was due to the simplification of implementation and the
//     ability to avoid implementing structure control functions. Player cards
//     are passed in by the simulation manager (external to this program)
//     provided by CodinGame. These cards are passed in as the number of cards
//     for Player 1 and then the card descriptors for each of Player 1's cards.
//     This repeats for Player 2 after all of Player 1's cards have been read
//     in. Below is an example of a complete simulation input:</p>
// <p><strong>Example Input</strong></p>
// <p><img src="images/input_example.png" alt=""><img
//         src="../../../../home/kaf386/CodeChat_Editor/Code/images/input_example.png"
//         alt=""><img
//         src="../../../../home/kaf386/CodeChat_Editor/Code/images/input_example.png"
//         alt=""></p>
// <p>The reading in and population of each players' cards can be found&nbsp;<a
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Code_InputStage"
//         target="_blank" rel="noopener">here</a>.</p>
// <h4><a id="Parsing_Card_Descriptors"></a>&nbsp;Parsing Card Descriptors</h4>
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
// <figure class="image"><img src="images/card_descriptor_example.png" alt=""
//         width="353" height="267">
//     <figcaption>Card Descriptor Breakdown</figcaption>
// </figure>
// <h3><a id="Game_Stage"></a>&nbsp;Game Stage</h3>
// <p><span data-preserver-spaces="true">The Game Stage can be thought of as a
//         "round manager" it keeps track of the number of cards in each
//         player's hand, allocates the "staked" cards based on the round
//         winner, and increments the number of game rounds after each round is
//         completed. In order to facilitate this process, the <strong>game
//             rounds and game winner are initialized to 0 and -2 outside of the
//             loop</strong>, respectively. This portion of the code can be
//         found&nbsp;</span><a class="editor-rtfLink"
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Code_GameStage"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">here</span></a><span
//         data-preserver-spaces="true">.</span></p>
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
//         data-preserver-spaces="true">).&nbsp;</span></p>
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
//         player's deck, their staked cards, and whether or not the call is
//         from the war stage to the function. The "in war" parameter is a&nbsp;
//         boolean that <em>defaults to false</em>, as it is only used when a
//         war occurs so that a recursive call can be made to the function (a
//         war never ends the round, the battle does). This function can be
//         found </span><a class="editor-rtfLink"
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Code_BattleFunction"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">here</span></a><span
//         data-preserver-spaces="true">.</span></p>
// <h4><a id="Pre_Flight_Checks"></a>&nbsp;Pre-F(l)ight Checks</h4>
// <p>The Battle Stage begins by checking if the player has enough cards to
//     continue. This is because the function is recursive during a war, and the
//     main game loop will not be able to stop it. If either player has zero
//     cards, the in war parameter is checked. If it is true, then a draw (-1)
//     is declared and returned. Otherwise, the player that does not have zero
//     cards wins. <strong>There are currently no checks to see if both players
//         have zero cards</strong>; in this event, Player 2 will always win.
//     This also acts as a safety mechanism to prevent errors when comparing the
//     players' top cards (the "fight cards").</p>
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
//         Player 2 has less than three cards and the in war variable is
//         <em>true</em>, a draw is returned. Otherwise, the player with the
//         hand equal to or exceeding three cards will be declared the winner.
//         This serves the same function as the check made in&nbsp;</span><a
//         class="editor-rtfLink"
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Pre_Flight_Checks"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">Pre-Fight</span></a><span
//         data-preserver-spaces="true">&nbsp;checks <em>except</em> to look at
//         three cards instead of one. If this check passes (both players have
//         more than three cards), the three topmost cards are removed from
//         their hands and added to their respective stake piles. After adding
//         the players' cards to their stake piles, the&nbsp;</span><a
//         class="editor-rtfLink"
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#Fight_Battle_Stage"
//         target="_blank" rel="noopener"><span
//             data-preserver-spaces="true">Fight/Battle</span></a><span
//         data-preserver-spaces="true">&nbsp;function is called recursively
//         with the "in war" parameter set to true.</span></p>
// <h4>Fight/Battle Stage Flow Chart</h4>
// <p>The following image is a flowchart describing the Fight/Battle Stage
//     function including the logic for the recursive <a
//         href="ECE6793_CodingWithReflection_War_Solution_kaf386.cpp#War_Stage">War</a>
//     stage.&nbsp;</p>
// <p><img style="display: block; margin-left: auto; margin-right: auto;"
//         src="images/rb_flow.png" alt="" width="583" height="706"></p>
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
//     Check number of Cards in each hand, if either is 0. <br>&nbsp; &nbsp;
//     &nbsp; &nbsp; a. If in war return PAT (-1) <br>&nbsp; &nbsp; &nbsp;
//     &nbsp; b. Otherwise return Player 1 Win (1) or Player 2 Win (2) based off
//     who has 0 <br>9. Pop the top &ldquo;Card&rdquo; from Player 1&rsquo;s
//     &ldquo;Hand&rdquo;, adding it to the queue for Player 1&rsquo;s
//     &ldquo;Staked&rdquo; Cards <br>10. Pop the top &ldquo;Card&rdquo; from
//     Player 2&rsquo;s &ldquo;Hand&rdquo;, adding it to the queue for Player
//     2&rsquo;s &ldquo;Staked&rdquo; Cards <br>11. Check for the following
//     battle states: <br>&nbsp; &nbsp; &nbsp; &nbsp; a. TIE <br>&nbsp; &nbsp;
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
//         War Stage | ====================================</strong> <br>12.
//     Check the number of Cards in each hand, if either is less than three,
//     return PAT (-1) <br>13. Pop three &ldquo;cards&rdquo; from Player
//     1&rsquo;s &ldquo;Hand&rdquo;, adding them to the queue for Player
//     1&rsquo;s &ldquo;Staked&rdquo; Cards <br>14. Pop three
//     &ldquo;cards&rdquo; from Player 2&rsquo;s &ldquo;Hand&rdquo;, adding them
//     to the queue for Player 2&rsquo;s &ldquo;Staked&rdquo; Cards <br>15. Do
//     Battle (Recursion)<br><strong>================================ |
//         Post-Game Stage (After Loop) |
//         ==========================================</strong> <br>16. Output
//     Game Results <br>&nbsp; &nbsp; &nbsp;a. If Game Winner is -1<br>&nbsp;
//     &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;i. Output &ldquo;PAT&rdquo;<br>&nbsp;
//     &nbsp; &nbsp;b. If Game Winner is 2 <br>&nbsp; &nbsp; &nbsp; &nbsp;
//     &nbsp; &nbsp;i. Output &ldquo;2&rdquo; with the number of Game
//     Rounds<br>&nbsp; &nbsp; &nbsp;c. If Game Winner is 1 <br>&nbsp; &nbsp;
//     &nbsp; &nbsp; &nbsp; &nbsp;i. Output &ldquo;1&rdquo; with the number of
//     Game Rounds <br><strong>============================== | End of Post-Game
//         Stage | ================================================</strong></p>
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
int Battle(queue<int> &P1Hand, queue<int> &P2Hand, queue<int> &P1Stakes, queue<int> &P2Stakes, bool inWar=false) {
     // <pre><span style="color: rgb(22, 145, 121);">8. Check number of Cards in each hand, if either is 0.</span><br><span style="color: rgb(22, 145, 121);">     a. If in war return PAT (-1)</span><br><span style="color: rgb(22, 145, 121);">     b. Otherwise return Player 1 Win (1) or Player 2 Win (2) based off who has 0</span></pre>
    if (P1Hand.size() == 0) {
        return inWar ? -1 : 2;
    } else if (P2Hand.size() == 0) {
        return inWar ? -1 : 1;
    }

    // <pre><span style="color: rgb(22, 145, 121);">9. Pop the top &ldquo;Card&rdquo; from Player 1&rsquo;s &ldquo;Hand&rdquo;, adding it to the queue for Player 1&rsquo;s &ldquo;Staked&rdquo; Cards</span></pre>
    int p1FightCard = P1Hand.front();
    P1Hand.pop();
    P1Stakes.push(p1FightCard);

    // <pre><span style="color: rgb(22, 145, 121);">10. Pop the top &ldquo;Card&rdquo; from Player 2&rsquo;s &ldquo;Hand&rdquo;, adding it to the queue for Player 2&rsquo;s &ldquo;Staked&rdquo; Cards</span></pre>
    int p2FightCard = P2Hand.front();
    P2Hand.pop();
    P2Stakes.push(p2FightCard);

    // <pre><span style="color: rgb(22, 145, 121);">11. Check for the following battle states: TIE (WAR STAGE)</span></pre>
    if (p1FightCard == p2FightCard) 
    {
        // <pre><span style="color: rgb(22, 145, 121);">12. Check the number of Cards in each hand, if either is less than three, return PAT (-1)</span></pre>
        if (P1Hand.size() < 3) {
            return inWar ? -1 : 2;
        } else if (P2Hand.size() < 3) {
            return inWar ? -1 : 1;
        }

        // <pre><span style="color: rgb(22, 145, 121);">13. Pop three &ldquo;cards&rdquo; from Player 1&rsquo;s &ldquo;Hand&rdquo;, adding them to the queue for Player 1&rsquo;s &ldquo;Staked&rdquo; Cards </span><br><span style="color: rgb(22, 145, 121);">14. Pop three &ldquo;cards&rdquo; from Player 2&rsquo;s &ldquo;Hand&rdquo;, adding them to the queue for Player 2&rsquo;s &ldquo;Staked&rdquo; Cards</span></pre>
        for (int i = 0; i < 3; i++) {
            P1Stakes.push(P1Hand.front());
            P1Hand.pop();

            P2Stakes.push(P2Hand.front());
            P2Hand.pop();
        }

        // <pre><span style="color: rgb(22, 145, 121);">15. Do Battle (Recursion -&gt; inWar set to true for special case PAT)</span></pre>
        return Battle(P1Hand, P2Hand, P1Stakes, P2Stakes, true);
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

    // <pre><span style="color: rgb(22, 145, 121);">3. Loop over program inputs for Player 1, adding Cards to Player 1&rsquo;s Hand.</span></pre>
    int n; // The number of cards for player 1
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        string cardp_1; // The n cards of player 1
        cin >> cardp_1; cin.ignore();
        P1Hand.push(ParseCard(cardp_1));
    }

    // <pre><span style="color: rgb(22, 145, 121);">4. Loop over program inputs for Player 2, adding Cards to Player 2&rsquo;s Hand.</span></pre>
    int m; // The number of cards for player 2
    cin >> m; cin.ignore();
    for (int i = 0; i < m; i++) {
        string cardp_2; // the m cards of player 2
        cin >> cardp_2; cin.ignore();
        P2Hand.push(ParseCard(cardp_2));
    }

    // <h4><span style="color: rgb(0, 0, 0);"><a
    //             id="Code_GameStage"></a>&nbsp;Game Stage</span></h4>

    // <pre><span style="color: rgb(22, 145, 121);">5. Pre-Loop Initialize Game Winner to (-2) and Game Rounds to 0</span></pre>
    int gameRounds = 0;
    int gameWinner = -2;
    while (P1Hand.size() != 0 && P2Hand.size() != 0) {
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
        default:
            cout << "ERROR! " << gameWinner << " is not a defined value." << endl;
            break;
    }
}
