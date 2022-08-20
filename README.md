# Streak: 100_Daysof_Code
- <strong>The projects in this streak are a redo of the alx C curriculum with the exception of the deadlines.</strong>

# Day 1: 0x00. C - Hello, World
Steps to compiling a C program
- Preprocessing
- Compilation
- Assembly
- Linking

<br>
<strong>man or help</strong>
- gcc
- printf (3)
- puts
- putchar


### Betty Style UseCase
To run the Betty linter just with command `betty <filename>`:
- Repo: Go to [Betty](https://alx-intranet.hbtn.io/rltoken/wQ4sMfsWfxvyfN67Sc11zA) repositiory
- Clone the repoto your local machine
- `cd` into the Betty directory
- Install the linter with `sudo ./install.sh`
- `emacs` or `vi` a new file called `betty`, and copy the script below

```
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```



- Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`
- Move the `betty` file into `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`

You can now type `betty <filename>` to run Betty linter!



### Tasks
- 0-preprocessor
- 1-compiler
- 2-assembler
- 3-name
- 4-puts
- 5-printf

## End of day 1
<strong>time:</strong>23:24:21 pm


# Day 2: 0x00. C - Hello, World
### Tasks
- 6-size.c


# Day 3: 0x00. C - Hello World
### Tasks
- 100-intel
- 101-quote.c

## End of day 3. 23:59:59 pm


# Day 4: 0x01. C variables, if, else, while
`C`
### Tasks
- task 0. +ve anything is better than -ve nothing
	* File: [0-positive_or_negative.c]()

- task 1. The last digit
	* file: [1-last_digit.c]()

## End of day 4. 21:02:40 pm


# Day 5: 0x01. C variables, if, else, while. contd
`C`
### Tasks
- task 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

- task 3. alphABET

## End of Day 5. 23:53:11


# Day 6: 0x01. C variables, if, else, while. contd
`C`
### Tasks
- task 4. When I was having that alphabet soup, I never thought that it would pay off.
- task 5. Numbers
- task 6. Numberz
- task 7. Smile in the mirror
- task 8. Hexadecimal


## End of Day 6. 23:48:11


# Day 7: 0x01.C avriables, if, else, while. contd
`C`
### Tasks
- task 9. `Patience, persistence and perspiration make an unbeatable combination for success`

- rollover task to <strong>Day 8</strong>

## End of Day 7. 21:43:48


# Day 8. write in C
`C`
- WRITE.md
using the write function fow standarsd input, output and error

## end of Day8: 23:08:17


# Day9. random practice 
- header files
- function prototypes
- Hackerrank c problems (Hello world) `scanf` and `printf`

## End of day9: 23:39:30


# Day10. random practice
- header files
- functions
- constants
	- const
	- define

## End of Day10: 23:56:31


# Day 11. functions
Functions, nested loops
- print_alphabet
- print_alphabetx10
- _islower
- _isalpha


## End of day 11: 23:47:18


# Day 12. functions contd
- The folder for Day12 is a symbolic link to Day11, this because we require the function prototypes and the corresponding function to be in the same file, hence a symbolic link is a good way to achieve this goal. `portability and structure all satisfied.`

#### Summary
- worked on much harder tasks
- encountered musch difficult tasks

## End of day12 23:59:22
