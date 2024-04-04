# push_swap


## How to execute

1. Make files;
2. Type ./push_swap [list of arguments, must be numbers];
3. Program sorts and displays the movements necessary for sorting, if sorting is needed;

## For testing purposes

1. You can execute the following command in CLT ./push_swap $(seq 1 3 | sort -R | tr '\n' ' ')

## Log
```
week 1
1. Added parsing.c, error.c, main.c, and utils.c;
2. Parsing is dealing with the parsing of the arguments given;
3. Error is mainly taking care of error messages, even tho there isn't a lot of them now;
4. Utils is an umbrella file for particular functions.
5. Parsed most of the inputs that would be considered as invalid and misguiding, such as:
- letters;
- special characters;
- positive and negative signs in numbers;
6. function add_node() does a crucial job of getting input into nodes of my linked list;
7. In my struct of the linked list there is a variable called len (int) that takes the number of nodes to know the length of my list. This is an important information so I can treat individually small number of arguments and leave the algorithm to deal with larger number of arguments.
```
```
week 2 (so far)
1. Added rr.c, rrr.c, ss.c, pp.c, and sorting.c;
2. rr.c deals with rotation. First element goes to the end and everything goes up in whichever stack is given;
3. rrr.c works the same way as rr.c, but with the last element going to first place and everything goes downwards;
4. ss.c is swapping the first two elements in whiever stack is given;
5. pp.c pushes element from stack a to b, and vice-versa.
6. sorting.c right now only deals with 3 elements. Logic is hardcoded since there is a small number of combinations;
7. Added some functions to find information on the minimum value from the arguments given and tried to sort up to 10 numbers. After thorough failure, it is advised that I should probably find a proper algorithm that will sort from three numbers and beyond.
8. Sorting has gone to phase of finding the middle of the list and the closest numbers of the first elements of the stacks, depending which one it is. In utils2.c there are two functions that take care of looking through the stacks to find the corresponding target number that should be on top of the stack and pushed. The next step will be to calculate the cost for moving around the stacks.
```
