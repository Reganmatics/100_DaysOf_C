# streak: 100_Daysof_Code
# Day 1: 0x00. C - Hello, World
Steps to compiling a C program
<br>
<strong>man or help</strong>
- gcc
- printf (3)
- puts
- putchar


### Betty Style UseCase
To run the Betty linter just with command `betty <filename>`:
- Repo: Go to [Betty]() repositiory
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
