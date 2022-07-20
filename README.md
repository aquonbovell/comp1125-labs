# Six Love
Six Love is a game with a structure similar to the popular Sudoku puzzles, in which you, the player, get to challenge the algorithm. The game will fill a 36-cell grid with the numbers 1 to 6 at random. Each row and column, however, can only have one instant of each digit. The game will ask you for your name or gamer tag, as well as your age, and then display a welcome message using the name you provided, inviting you to select a skill level:

- Rookie
- Tuff Gong
- Hard Seed 

For the rookie level, the algorithm will randomly remove 10 slots from the puzzle and present you with the remaining grid to start and complete. Tufftong has 15 slots removed, and HardSeed has 20 slots removed. You are allowed to make a request:

- 1 hint for a rookie
- 2 hints for a tuff gong
- 3 hints for a hard seed

Each requested hint places one number in a cell on the puzzle at random. Each hint requested results in a 2**n point (where n is the number of hints requested) deduction from the 20 points you were given at the start. 

Closed: July 20th, 2021
