# 0x12. C - Singly linked lists

# Description

- A singly linked list is a linear data structure in which the elements are not stored in contiguous memory locations and each element is connected only to its next element using a pointer.
- Linked List can be defined as collection of objects called nodes that are randomly stored in the memory.
- A node contains two fields i.e. data stored at that particular address and the pointer which contains the address of the next node in the memory.
- The last node of the list contains pointer to the null.

# Why we use linked list over aaray
Array is used to organise the group of elements that are stored individually in memeory. However this does have some limitations namely

1. The size of array must be known in advance before using it in the program.

2. Increasing size of the array is a time taking process. It is almost impossible to expand the size of the array at run time.

3. All the elements in the array need to be contiguously stored in the memory. Inserting any element in the array needs shifting of all its predecessors.

A linked list is the data structure which can overcome all the limitations of an array and thus making them useful because;

1. It allocates the memory dynamically. All the nodes of linked list are non-contiguously stored in the memory and linked together with the help of pointers.

2. Sizing is no longer a problem since we do not need to define its size at the time of declaration. List grows as per the program's demand and limited to the available memory space.


# Task Objectives
- When and why using linked lists vs arrays
- How to build and use linked lists

# Task Breakdown

## Mandatory Task

0. Print list
- Write a function that prints all the elements of a list_t list.
- Prototype: size_t print_list(const list_t *h);

1. List length
- Write a function that returns the number of elements in a linked list_t list.
- Prototype: size_t list_len(const list_t *h);

2. Add node
- Write a function that adds a new node at the beginning of a list_t list.
- Prototype: list_t *add_node(list_t **head, const char *str);

3. Add node at the end
- Write a function that adds a new node at the end of a list_t list.
- Prototype: list_t *add_node_end(list_t **head, const char *str)

4. Free llist
- Write a function that frees a list_t list.
- Prototype: void free_list(list_t *head);


## Advanced Task

5. The hare and the tortoise
- Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.

6. Real programmers can write assembly code in any language
- Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
