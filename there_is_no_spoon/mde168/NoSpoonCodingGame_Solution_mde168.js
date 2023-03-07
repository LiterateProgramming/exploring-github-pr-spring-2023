// <h1>Coding Game - There is No Spoon Solution</h1>
// <h2>Overview</h2>
// <p>The puzzle described in this document is "<a
//         href="https://www.codingame.com/ide/puzzle/there-is-no-spoon-episode-1">There
//         is No Spoon - Episode 1</a>". This coding game was found on the
//     website&nbsp;<a href="https://www.codingame.com/training">CodinGame
//     </a>listed under medium-level classic puzzles.&nbsp;</p>
// <h3>Problem Explained</h3>
// <div style="display: inline-table;">The format for the game is given in a
//     rectangular grid. Within this grid, there is a character in each position
//     that can either be a power node or an empty cell. The character that
//     represents a power node is '0'. The character that represents an empty
//     cell is '.'. An example of a 2x2 grid with inputs&nbsp;
//     <table
//         style="display: inline-table; border-collapse: collapse; width: 5%; border-width: 1px; height: 42.4px;"
//         border="1">
//         <colgroup>
//             <col style="width: 49.9584%;">
//             <col style="width: 49.9584%;">
//         </colgroup>
//         <tbody>
//             <tr style="height: 21.2px;">
//                 <td
//                     style="border-width: 1px; text-align: center; height: 21.2px;">
//                     0</td>
//                 <td
//                     style="border-width: 1px; text-align: center; height: 21.2px;">
//                     0</td>
//             </tr>
//             <tr style="height: 21.2px;">
//                 <td
//                     style="border-width: 1px; text-align: center; height: 21.2px;">
//                     0</td>
//                 <td
//                     style="border-width: 1px; text-align: center; height: 21.2px;">
//                     .</td>
//             </tr>
//         </tbody>
//     </table>
//     &nbsp;is shown below.
// </div>
// <p><a id="gridPicture"></a><img
//         style="display: block; margin-left: auto; margin-right: auto;"
//         title="2x2 Grid Representation" src="gridExample.png"
//         alt="2x2 Grid Representation" width="163" height="157"></p>
// <p>The coordinates for the grid begin in the top left with (0,0). <span
//         style="background-color: rgb(251, 238, 184);"><strong>The goal of
//             this game is to find the nearest neighbor to the right and the
//             nearest neighbor below each power node within the grid.
//         </strong></span>These neighbors will be the closest non-empty nodes
//     to the right and below each node. If the neighbor directly to the right
//     or below the current node is empty, then continuously check further to
//     the right or below until either a power node is found or the edge of the
//     grid is reached. If the neighbor does <em>not</em> exist, then print the
//     coordinates (-1,-1) for the missing neighbor. Each power node's neighbors
//     need to be outputted in a single line per node. The format for the output
//     is the current node's coordinates, the right neighbor's coordinates, and
//     the below neighbor's coordinates <strong>in order all in a single
//         line</strong> with one space between each number. For the example
//     grid above, the output for the power node at (0,0) would be "0 0 1 0 0
//     1". The table below shows more examples of different grid inputs and
//     their complete corresponding outputs.&nbsp;</p>
// <table style="border-collapse: collapse; width: 100%;" border="1">
//     <colgroup>
//         <col style="width: 49.9589%;">
//         <col style="width: 49.9589%;">
//     </colgroup>
//     <tbody>
//         <tr>
//             <td style="text-align: center;"><strong>Input Grid</strong></td>
//             <td style="text-align: center;"><strong>Output</strong></td>
//         </tr>
//         <tr>
//             <td>
//                 <p>&nbsp;</p>
//                 &nbsp;
//                 <table
//                     style="display: inline-table; border-collapse: collapse; width: 10.9181%; border-width: 1px; height: 42.4px;"
//                     border="1">
//                     <colgroup>
//                         <col style="width: 50.9122%;">
//                         <col style="width: 50.9122%;">
//                     </colgroup>
//                     <tbody>
//                         <tr style="height: 21.2px;">
//                             <td
//                                 style="border-width: 1px; text-align: center; height: 21.2px;">
//                                 0</td>
//                             <td
//                                 style="border-width: 1px; text-align: center; height: 21.2px;">
//                                 0</td>
//                         </tr>
//                         <tr style="height: 21.2px;">
//                             <td
//                                 style="border-width: 1px; text-align: center; height: 21.2px;">
//                                 0</td>
//                             <td
//                                 style="border-width: 1px; text-align: center; height: 21.2px;">
//                                 .</td>
//                         </tr>
//                     </tbody>
//                 </table>
//                 &nbsp;
//                 <p>&nbsp;</p>
//             </td>
//             <td>
//                 <p>0 0 1 0 0 1</p>
//                 <p>1 0 -1 -1 -1 -1</p>
//                 <p>0 1 -1 -1 -1 -1</p>
//             </td>
//         </tr>
//         <tr>
//             <td>&nbsp;
//                 <table
//                     style="display: inline-table; border-collapse: collapse; width: 14.5575%; border-width: 1px; height: 42.4px;"
//                     border="1">
//                     <colgroup>
//                         <col style="width: 23.913%;">
//                         <col style="width: 15.2174%;">
//                         <col style="width: 23.913%;">
//                         <col style="width: 15.2174%;">
//                         <col style="width: 23.913%;">
//                     </colgroup>
//                     <tbody>
//                         <tr style="height: 21.2px;">
//                             <td
//                                 style="border-width: 1px; text-align: center; height: 21.2px;">
//                                 0</td>
//                             <td
//                                 style="border-width: 1px; text-align: center; height: 21.2px;">
//                                 .</td>
//                             <td
//                                 style="border-width: 1px; text-align: center;">
//                                 0</td>
//                             <td
//                                 style="border-width: 1px; text-align: center;">
//                                 .</td>
//                             <td
//                                 style="border-width: 1px; text-align: center;">
//                                 0</td>
//                         </tr>
//                     </tbody>
//                 </table>
//                 &nbsp;
//             </td>
//             <td>
//                 <p>0 0 2 0 -1 -1</p>
//                 <p>2 0 4 0 -1 -1</p>
//                 <p>4 0 -1 -1 -1 -1</p>
//             </td>
//         </tr>
//         <tr>
//             <td>&nbsp;
//                 <table
//                     style="display: inline-table; border-collapse: collapse; width: 11.4144%; border-width: 1px; height: 42.4px;"
//                     border="1">
//                     <colgroup>
//                         <col style="width: 37.6229%;">
//                         <col style="width: 23.9419%;">
//                         <col style="width: 37.6229%;">
//                     </colgroup>
//                     <tbody>
//                         <tr style="height: 21.2px;">
//                             <td
//                                 style="border-width: 1px; text-align: center; height: 21.2px;">
//                                 0</td>
//                             <td
//                                 style="border-width: 1px; text-align: center; height: 21.2px;">
//                                 .</td>
//                             <td
//                                 style="border-width: 1px; text-align: center;">
//                                 0</td>
//                         </tr>
//                         <tr>
//                             <td
//                                 style="border-width: 1px; text-align: center;">
//                                 0</td>
//                             <td
//                                 style="border-width: 1px; text-align: center;">
//                                 .</td>
//                             <td
//                                 style="border-width: 1px; text-align: center;">
//                                 .</td>
//                         </tr>
//                         <tr style="height: 21.2px;">
//                             <td
//                                 style="border-width: 1px; text-align: center; height: 21.2px;">
//                                 .</td>
//                             <td
//                                 style="border-width: 1px; text-align: center; height: 21.2px;">
//                                 .</td>
//                             <td
//                                 style="border-width: 1px; text-align: center;">
//                                 0</td>
//                         </tr>
//                     </tbody>
//                 </table>
//                 &nbsp;
//             </td>
//             <td>
//                 <p>0 0 2 0 0 1</p>
//                 <p>2 0 -1 -1 2 2</p>
//                 <p>0 1 -1 -1 -1 -1</p>
//                 <p>2 2 -1 -1 -1 -1</p>
//             </td>
//         </tr>
//     </tbody>
// </table>
// <p>The test will <strong>fail </strong>if the incorrect coordinates are given
//     for the neighbors of a power node, the neighbors for an empty cell are
//     printed, the same power node is computed twice, or the neighbors for a
//     power node are not printed. The test will <strong>pass </strong>if all
//     the nodes are displayed correctly.&nbsp;</p>
// <h3>Solution Approach</h3>
// <p>To compute the neighbors for a power node, the nodes directly right and
//     directly below are first checked. If the node in that position is empty,
//     then move on to check the next node to the right or below. If there are
//     no <em>non-empty</em> cells for the right neighbor or below neighbor,
//     then the coordinates will be (-1,-1) for that neighbor. A diagram
//     representation of finding the right and below neighbor for a power node
//     is shown below.&nbsp;&nbsp;</p>
// <p><img style="display: block; margin-left: auto; margin-right: auto;"
//         title="Matrix Diagram" src="matrixDiagram.png" alt="Matrix Diagram"
//         width="536" height="252"></p>
// <p>In this example, the node directly to the right of (0,0) is an empty cell
//     so the next node to the right is checked. This node is another power cell
//     and is determined to be the nearest neighbor to the right of the current
//     power node. A similar process can be seen when looking for the nearest
//     node below the node at (0,0).&nbsp;</p>
// <h2>Solution - Code</h2>
// <p>There are <strong>three different inputs</strong> given for this game. The
//     first one is the width of the grid. The second input is the height of the
//     grid. The last input is the data for the grid and is given per line. For
//     the <a href="NoSpoonCodingGame_Solution_mde168.js#gridPicture">previous
//         grid</a>, the input would be "2", "2", "00", and "0.". The function
//     <a
//         href="https://www.w3schools.com/jsref/jsref_parseint.asp">parseInt()</a>
//     is used to convert the string inputs for the width and the height into
//     integers. The <a
//         href="https://www.w3schools.com/jsref/jsref_split.asp">split()</a>
//     function is used to separate each character in every line (row within the
//     grid) into an array so that every node will be accessible. The code below
//     initializes all of the inputs given.&nbsp;</p>
// <p>&nbsp;</p>
const width = parseInt(readline()); // the number of cells on the X axis
const height = parseInt(readline()); // the number of cells on the Y axis
var line;
var nodes = [];

for (let i = 0; i < height; i++) {
    line = readline(); // width characters, each either 0 or .
    nodes[i] = line.split('');
}

//Transpose array so that nodes can be accessed with [x][y]
nodes = nodes[0].map((_, colIndex) => nodes.map(row => row[colIndex]));
// <p>To better organize the grid data so that it is easier to access each
//     individual node, it is put into a two-dimensional array. The data in the
//     nodes array is transposed so that each node is able to be accessed with
//     coordinates in the form (x,y) rather than (y, x). The code to transpose
//     this two-dimensional array was found on <a
//         href="https://stackoverflow.com/questions/17428587/transposing-a-2d-array-in-javascript">Stack
//         Overflow</a>. Each node is now able to be accessed using the
//     nodes[x][y] array. The x coordinates correlate with the width and the y
//     coordinates coordinate with the height of the grid. The x coordinates go
//     from zero to width minus one. The y coordinates range from zero to height
//     minus one.</p>
// <p><strong>To navigate through each node a double for loop is used.</strong>
//     This double loop will go through each node on the grid starting with the
//     top left and continuing horizontally for the length of the width and
//     moving down once it is at the end of each line until it reaches the final
//     node on the bottom right. For each node, it is first checked to ensure
//     that it is <em>not </em>an empty cell, which is represented by the
//     character '.',&nbsp;<em>before </em>computing the neighbor nodes. If it
//     is an empty cell, then the neighbor nodes are not computed, nothing is
//     outputted, and the loop moves to the next node. If it is a power node,
//     the output string is initialized with the current x and y coordinates.
//     The code for navigating through each node, checking if the node is a
//     power node, and initializing the output string is shown below.&nbsp;</p>

for (let y = 0; y < height; y++){
    for (let x = 0; x < width; x++) {
        if (nodes[x][y] != '.'){
            output = x + ' ' + y;

// <p><strong>To compute the nearest neighbor to the right of the current
//         node</strong>, a while loop is used to find the nearest power node.
//     The loop starts with the node directly to the right and will continue
//     until the node is either a power cell or has reached outside the grid.
//     Once the while loop ends, the x coordinate for the neighbor is checked to
//     see if it is outside of the grid. The output string is appended in order
//     to add the right neighbor's coordinates. The code for computing the
//     nearest right neighbor is shown below.&nbsp;</p>
            //Find nearest neighbor to the right of current node
            xNeighbor = x+1;
            if (xNeighbor != width){
                while (nodes[xNeighbor][y] == '.')
                {
                    xNeighbor += 1;
                    if (xNeighbor == width) break;
                }
            }
            if (xNeighbor == width) {
                output = output + ' -1 -1';
            }
            else {
                output = output + ' ' + xNeighbor + ' ' + y;
            }

// <p><strong>To compute the nearest neighbor below the current node</strong>,
//     the same approach is used. The while loop will search for the nearest
//     power node below the current node until it finds one or it reaches
//     outside the grid. The output string is then appended to add the nearest
//     neighbor below the current node if it exists or adds the coordinates
//     (-1,-1) if the node does not have a power node below it. The output
//     string now containing the current node's coordinates, the nearest right
//     neighbor's coordinates, and the nearest below neighbor's coordinates is
//     then printed. The code for this computation is shown below.&nbsp;</p>
            //Find nearest neighbor below current node
            yNeighbor = y+1;
            if (yNeighbor != height){
                while (nodes[x][yNeighbor] == '.')
                {
                    yNeighbor += 1;
                    if (yNeighbor == height) break;
                }   
            }
            if (yNeighbor == height) {
                output = output + ' -1 -1';
            }
            else {
                output = output + ' ' + x + ' ' + yNeighbor;
            }

            console.log(output);
        }
    }
} 
// <p>This code will go through every individual node within the grid and
//     compute the nearest neighbor to the right and the nearest neighbor below
//     each power node. This solution works for each test case and can be run on
//     <a
//         href="https://www.codingame.com/ide/puzzle/there-is-no-spoon-episode-1">CodinGame</a>
//     to see each test pass with the visual.</p>
