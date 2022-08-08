# Streak: 100_Daysof_Code
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

## end of day 1
<strong>time:</strong>23:24:21


# Day 2: 0x00. C - Hello, World
### Tasks
- 6-size.c


# Day 3: 0x00. C - Hello World
### Tasks
- 100-intel
- 
