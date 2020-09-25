# Compilation process of a program:
Commands can be used in powershell or cmd to step by step compilation:

	1. gcc -E program.c -o program.i //Expandable Code
	2. gcc -S program.i -o program.s //Assembly Code
	3. gcc -E program.s -o program.o //Object Code
	4. gcc -v program.o -o program.exe //Executable Code

![image](https://drive.google.com/uc?export=view&id=1d8xK2HFH99DNw31xhIW5vZyvfv0MGxFh)

# Functions: // 10 SEPT 2020

Set of statement or block of code that perform some tasks.

Functions can be use multiple times depend on function call.

The idea is to use some commonly or repeatedly done task together and make a function so that instead of writing the same code again and again we can call that function.

Types of Functions:

		1. System Defined/Predefined/library Function/built-in Function (printf, scanf, etc).
		2. User Defined Function => Used to customize user's task.

How create user defined function:

Function Declaration

	Syntax: return_type function_name(argument);
	ReturnType: void (no return), int, char, float etc.
	FunctionName: Valid Identifier
	Argument: What you want to pass to the function.

Function Definition:

	Syntax: return_type function_name(argument) {
	------
	------
	}

Function Calling:

	FunctionName(argument);

1. A variable name can begin only with an underscore or an alphabet (any case).
2. It can thereafter consist of any number of _(underscore), alphabets and numbers.
3. No special characters other than _ is allowed.

# 15 SEPT 2020

	getch() -> To take input, user cannot see, on_spot assigning-> no need to press enter. => no argument with return
	getche() -> To take input, user can see, on_spot assigning->  no need to press enter.
	getchar() -> To take input, user can see, for assigning pressing enter button is needed.

# Array:
	-> An Array is a collection of similar data items and these data items may be all int, float or all char.
	-> Each member of an array is identified by unique index or subscript assigned to it.
	-> An Array is defined in the same way as a variable defined except that array name is followed by onr or more, expressions, enclosed withing square brackets[], specifying the array dimension.
	-> The general Syntax of an array is:

SYNTAX: data_type ArrayName[SIZE];

	Array Disadvantage:
	-> Similar datatype storage ==> Disadvantage. => overcome structure
	-> Size cannot be modified.
	-> Memory waste

Dynamic Memory Allocation functions: => Run-time Memory Allocation.

	1. malloc()
	2. calloc()
	3. realloc()
	4. free()

# Pointer:

Pointer is special varible that hold the address of any memory (address).

To create pointer varible it should start with * symbol.

	Syntax: datatype *pointerVarible;

	for e.g,
	#include<stdio.h>
	void main(){
		int a; //Varible
		a = 10;
		printf("%d\n", a);
		printf("%u\n", &a);
	}

# Structure:

Structure Syntax:

	struct structureName{
		-------
		-------
	}structureVariable;
	or
	struct structureName{
		-------
		-------
	};
	struct structureName structureVariable;

Accessing member:

structureVariable.MemberName //period operator


	struct structureName{
		-------
		-------
	}*structureVariable; //ptr_to_struct
	or
	struct structureName{
		-------
		-------
	};
	struct structureName *structureVariable;

Accessing member:
structureVariable->MemberName //Arrow operator

# Array to pointer:

	for e.g,
	#include<stdio.h>
	void main(){
		int a = 11, b=22, c=33,d=44.,e=55; //Varible
		int *ptr[5];
		ptr[0] = &a;
		ptr[1] = &b;
		ptr[2] = &c;
		ptr[3] = &d;
		ptr[4] = &e;
		for(int i = 0; i<5 ; i++){
			printf("%u => %d\n", ptr[i], *ptr[i]);
		}
	}

# Data Structure:

1. Data Structure is a representation of logical relationship existing between individual elements of data.
2. In other words, a data structure defines a way of organizing all data items that considers not only the elements stored	but also their relationship to each other.
3. The term data structure is used to describe the way data is stored.
4. To develop a program of an algorithm we should select an appropriate data structure for that algorithm. Therefore, data structure is represented as:

		Algorithm + Data Structure = Program.

# Algorithm:

An algorithm is a finite sequence of instructions, each of which has a clear meaning and can
be performed with a finite amount of effort in a finite length of time. No matter what the
input values may be, an algorithm terminates after executing a finite number of instructions.
In addition every algorithm must satisfy the following criteria:

	1. Input: there are zero or more quantities, which are externally supplied;

	2. Output: at least one quantity is produced;

	3. Definiteness: each instruction must be clear and unambiguous;

	4. Finiteness: if we trace out the instructions of an algorithm, then for all cases the
	algorithm will terminate after a finite number of steps;

	5. Effectiveness: every instruction must be sufficiently basic that it can in principle be
	carried out by a person using only pencil and paper. It is not enough that each operation
	be definite, but it must also be feasible.

# Introduction:
1. Memory can be understand as a piece of area which a
program needs to run it self.

2. A computer program always needs some amount of memory
to run which is allocated to it by Operating System.

		To run any process an O.S. Allocates it separate memory.

3. A program requests the amount of memory which it needs
to run itself from O.S. Then OS Manages this memory.

4. Memory can be allocated in following:
		1. Static memory allocation
		2. Dynamic memory allocation

# Different Part Of Program Memory
	Program Code
	1. it is the area which is used to store all source code
	like .c Or .cpp files.

	2. Stack
	It is the are which is used to store variables like
	int a, char name[20], float height

	3. Heap
	It is the are which operating system allocates us when we
	request it at run time of a program.

int *ptr; //pointer to integer

char *a; //pointer to character

void *n; // void pointer or generic pointer

# Type casting: converting from one type to another type.
Types of type casting:
1. Implicit(automatic)

		for e.g,
			#. float n = 5.67;
			#. int a = 2.5;
			#. char ch ='a';
			#. ch = ch + 32;
			#. int n = 56;
			#. char ch;
			#. ch = n + n;

2. Explicit(Manually)

		Syntax: (data_type)Varible;

# Dynamic Memory in C:
	Function Which Can Be Used For Dynamic Memory Allocation Are :-

	Void * malloc(int)
	1.It allocates specified number of bytes from the heap and return a void
	type of pointer pointing towards the base address of that address.

	return_type void_pointer;

	2. Void * calloc(int,int)
	it also allocates specified number of bytes from heap but the difference is that memory is shattered.

	return_type void_pointer;

	3. Void * realloc(void *,int size)
	It reallocates a free memory to us.

	4. Void free(void *)
	It deallocates the memory from the heap which is previously allocated.

	int a=10;
	int* ptr = &a;
	scanf("%d", &a); or scanf("%d", ptr);

# Pointer Increment & Scale Factor:
	Pointer increment means its value is increased by the length of the data type that it points to, and this length is called as scale Factor.
		for e.g,
			int *ptr;
			ptr = ptr + 1;
			ptr = 0x2012 + 4;

	Sizeof(var_name) function is used to know the no of bytes need for that variable.

# Operations with pointers:

Addition and subtraction are the only arithmetic operations that can be performed on pointers.

	For e.g,
		p1= p1 + 4;
		p1 = p1 - 2;
		p3 = p1 - p2;

	Following operations are valid with pointers:
		if(p1 > p2){
			------
		}

		if(p1 != p2){
			------
		}

		if(p1 == p2){
			------
		}

		p1++;

		--p2;

		sum += *p2;

# Data Structure:
	1. Primitive Data Structures
			a. integer
			b. float
			c. char
			d. pointer
	2. Non-Primitive Data Structures
			a. Arrays
			b. Lists
					i. Linear Lists
							>> Linked Lists
							>> Stacks
							>> Queues
					ii. Non-Linear Lists
							>> Graphs
							>> Trees
			c. Files

# Linked List:

1. Linked Lists and arrays are similar since they both store collection of data.

2. Array is the most common data structure used to store collection of elements.

3. Arrays are convenient to declare and provide the easy Syntax to access any element by its index number. Once the array is set up, access to any elements is convenient and fast.

5. A linked list data structure include a series of connected nodes. Here, each node and the address of the next node.

	1. A data item
	2. An address of another nodes
	3. We wrap both the data item and the next node reference in a struct.

# Representation of Linked List

	struct node{
		int data;
		struct node *next;
	}

Each struct node has a data item and a pointer to another struct node.
Let us create a simple Linked List with three items to understand how this works.

	//Initialize nodes
	struct node * head;
	struct node * one = NULL;
	struct node *two = NULL;
	struct node * three = NULL;

	//Allocate memory
	one = malloc(sizeof(struct node));
	two = malloc(sizeof(struct node));
	three = malloc(sizeof(struct node));

	//Assign data values
	one->data = 1;
	two->data = 2;
	three->data=3;

	//Assign data values
	one->data = 1;
	two->data = 2;
	three->data=3;

	//Connect nodes
	one->next = two;
	two->next = three;
	three->next = NULL;

	//Save address of first node in head
	head = one;

# Singly Linked List:

	It is the most common. Each node has data and a pointer to the next node.

# Circular Linked List:

	A Circular linked list is variation if a linked list in which the last element is linked to the first element. This forms a circular loop.

# Doubly Linked List:

	We add a pointer to the previous node in a Doubly-linked list. Thus, we can go in either direction: Forward or Backward.

# Circular Doubly Linked List:

	We add a pointer to the previous node in a Doubly-linked list.
	Thus, we can go in either direction: Forward or Backward.

	NOTE: The power of Linked List comes from the ability to break the chain and rejoin it.

# Operations on linked list

	1. Creation
	2. Traversing
	3. Searching
	4. Insertion
	5. Deletion
	6. Updation
