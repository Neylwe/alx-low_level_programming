# 0x09. C - Static libraries

# Description
- In C programming language , a static library is a compiled file containing all symbols required by the main program to operate (functions, variables etc.) as opposed to having to pull in separate entities. 

- Using a static library means only one object file need be pulled in during the linking phase. This contrasts having the compiler pull in multiple object files (one for each function etc) during linking.

- The benefit of using a static library is that the functions and other symbols loaded into it are indexed. This means instead of having to look for each entity on separate parts of the disk, the program need only reference a single single archived object (.a) file that has ordered the entities together.

# Learning objectives
- What is a static library, how does it work, how to create one, and how to use it
- Basic usage of ar, ranlib and nm

# Mandatory tasks
0. A library is not a luxury but one of the necessities of life
- Create the static library libmy.a containing all the functions listed below on task section.

1. Without libraries what have we? We have no past and no future
-Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
