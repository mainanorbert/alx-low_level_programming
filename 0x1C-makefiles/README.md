# 0x1C. C - Makefiles
![Makefile](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/273/giphy-2.gif)
- The project is on `make utility` a software for managing and maintaining
computer programs consisting many component files. The make utility
automatically determines which pieces of a large program need to be
recompiled, and issues commands to recompile them.
## Definitions
1. `make`: a command that by default, it reads its instructions from Makefile (also known as the descriptor file).
2. `Makefile sets`: a set of rules that determines which parts of a program must be recompiled and issues a command to do so.
3. `Makefile`: a way of automating software building procedure and other
complex tasks with dependencies. 
## Contents of a Makefile
1. Macros
2. Suffix(or implicit)
rules
3. Dependency rules

## Explanation for each file
[0-Makefile](0-Makefile)
[1-Makefile](1-Makefile)


### 0-Makefile
- name of the executable: school
- rules: all
	- The all rule builds your executable
- variables: none
### 1-Makefile
- name of the executable: school
- rules: all
	The all rule builds your executable
- variables: CC, SRC
	- CC: the compiler to be used
	-SRC: the .c files
