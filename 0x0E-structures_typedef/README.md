# 0x0E. C - Structures, typedef

# Description
## Structures
- A structure is a user defined data type available in C that allows to combine data items of different kinds.
- It is a keyword that creates user-defined data types in C / C++. A structure creates a data type that can e used to group items of possibly different types into a single type.

## typedef
- The typdef is a keyword that is used in C programming to provide exisiting data types with a a new name. typedef is used to redrfine the name that already exists.
- Synatax : typedef <existing_name> <alias_name>

# Learning objectives
- What are structures, when, why and how to use them
- How to use typedef

# Mandatory tasks
0. Poppy
- Define a new type struct dog with the following elements:
* name, type = char *
* age, type = float
* owner, type = char *

1. A dog is the only thing on earth that loves you more than you love yourself
- Write a function that initialize a variable of type struct dog
* Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad.
- Write a function that prints a struct dog
- Prototype: void print_dog(struct dog *d);

3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
- Define a new type dog_t as a new name for the type struct dog.

4. A door is what a dog is perpetually on the wrong side of
- Write a function that creates a new dog
- Prototype: dog_t *new_dog(char *name, float age, char *owner);

5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
- Writes a function that frees dogs
- Prototype: void free_dog(dog_t *d);
