# Revision day questions!

Hi everyone!

Look in the above folders for some practice lab questions for you to complete. Each question has some incomplete code that requires you to fill in a function or two!

you'll have to do your own testing for most questions, there is no autotest!

Good luck :)

## Malloc and Free questions:

### Free All

Put free() function calls on all variables that need to be free'd (i.e. variables that were created with a malloc() call).

Every free() call must be made at the latest point it possibly can!

Make sure to compile with:

`dcc --valgrind --leak-check -o free free_all.c`

### Make Array

Create an array of `size`, and initialise all array values to 0 in the function makeArray.

Return a pointer to this array.

## Structs and Pointers questions:

### Make Struct 

Write a suitable typedef to the provided struct `data`.

Then, write the function `makeData`, as defined in the comment inside the function.

### Design Struct

Design a struct that can hold the following types of data:

1. a name
2. a zid
3. a WAM
4. an array of current subjects (e.g. COMP1911, ENGG1000, ...)

Assume a student will always have 4 current subjects.

The types of these values are up to you! Just make sure they can correctly hold the data.

Then, implement these 3 functions:
1. `readStudent`
2. `printStudent`
3. `destroyStudent`

As described in the comments above the function prototypes.

## Practice exam questions

### Reverse

Given an input string, reverse the string!

Make sure you test your function.

### Remove

Given an input string, and a character to remove, remove all instances of that character from the input string.

### Numbers

Read in up to 100 integers, until no more numbers can be read. Ignore all integers that are divisible by 5. Print the mean, median and mode of the remaining numbers.

