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
click the links to jump to each section with explation on how each form was created:
1. [0-Makefile](#0-makefile)
2. [1-Makefile](#1-makefile)
3. [2-Makefile](#2-makefile)
4. [3-Makefile](#3-makefile)
5. [4-Makefile](#4-makefile)
6. [5-island_perimeter.py](#Island-parameter)

### 0-Makefile
- name of the executable: school
- rules: all
	- The all rule builds your executable
- variables: none
### 1-Makefile
- name of the executable: school
- rules: all
	- The all rule builds your executable
- variables: CC, SRC
	- `CC:` the compiler to be used
	- `SRC:` the .c files
### 2-Makefile
- Requirements:
	- name of the executable: school
	- rules: all
		-The all rule builds your executable
	- variables: `CC`, `SRC`, `OBJ`, `NAME`
		- `CC:` the compiler to be used
		- `SRC:` the .c files
		- `OBJ:` the .o files
		- `NAME:` the name of the executable
	- The all rule should recompile only the updated source files
`	- You are not allowed to have a list of all the .o files
### 3-Makefile
- Requirements:
	- name of the executable: school
	- rules: all, clean, oclean, fclean, re
		- `all:` builds your executable
		- `clean:` deletes all Emacs and Vim temporary files along with the executable
		- `oclean:` deletes the object files
		- `fclean:` deletes all Emacs and Vim temporary files, the executable, and the object files
		-`re:` forces recompilation of all source files
	- variables: `CC`, `SRC`, `OBJ`, `NAME`
		- `CC:` the compiler to be used
		- `SRC:` the .c files
		- `OBJ:` the .o files
		- `NAME:` the name of the executable
		- `RM:` the program to delete files
	- The all rule should recompile only the updated source files
`	- You are not allowed to have a list of all the .o files
### 4-Makefile
- Requirements:
	- name of the executable: school
	- rules: all, clean, oclean, fclean, re
		- `all:` builds your executable
		- `clean:` deletes all Emacs and Vim temporary files along with the executable
		- `oclean:` deletes the object files
		- `fclean:` deletes all Emacs and Vim temporary files, the executable, and the object files
		-`re:` forces recompilation of all source files
	- variables: `CC`, `SRC`, `OBJ`, `NAME`
		- `CC:` the compiler to be used
		- `SRC:` the .c files
		- `OBJ:` the .o files
		- `NAME:` the name of the executable
		- `RM:` the program to delete files
		- `FLAGS:`your favorite compiler flags: -Wall -Werror -Wextra -pedantic
	- The all rule should recompile only the updated source files
	- The clean, oclean, fclean, re rules should never fail
`	- You are not allowed to have a list of all the .o files
