# Compilation process of a program:
- Commands can be used in powershell to compile the source code.

		gcc program.c -o program.exe

![image](https://drive.google.com/uc?export=view&id=1d8xK2HFH99DNw31xhIW5vZyvfv0MGxFh)

# Functions:

- Set of statement or block of code that perform some tasks.

- Functions can be use multiple times depend on function call.

- The idea is to use some commonly or repeatedly done task together and make a function so that instead of writing the same code again and again we can call that function.

- Types of Functions:

		1. System Defined/Predefined/library Function/built-in Function (printf, scanf, etc).
		2. User Defined Function => Used to customize user's task.

### How create user defined function?

#### Function Declaration

- <strong> Syntax </strong>: return_type function_name(argument);
- <strong> ReturnType </strong>: void (no return), int, char, float etc.
- <strong> FunctionName </strong>: Valid Identifier
- <strong> Argument </strong>: What you want to pass to the function.

#### Function Definition:
	```
	Syntax: return_type function_name(argument) {
	------
	------
	}
	```

Function Calling:

	FunctionName(argument);

1. A variable name can begin only with an underscore or an alphabet (any case).
2. It can thereafter consist of any number of _(underscore), alphabets and numbers.
3. No special characters other than _ is allowed.

# 15 SEPT 2020:

	1. getch()

		 => To take input, user cannot see, on the spot assigning
		 => No need to press enter.
		 => No argument with return.

	2. getche()

		 => To take input, user can see, on the spot assigning.
		 => No need to press enter.

	3. getchar()

		 => To take input, user can see, for assigning pressing enter button is needed.

# Array:
- An Array is a collection of similar data items and these data items may be all int, float or all char.
- Each member of an array is identified by unique index or subscript assigned to it.
- An Array is defined in the same way as a variable is defined except that, the array name is followed by one or more expressions, enclosed withing square brackets[], specifying the array dimension.
- The general Syntax of an array is:

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

- Pointer is special variable that holds the address of any memory (address).
- To create pointer variable, variable should start with * symbol.

##### Syntax: datatype *pointerVariable;

	```
	for e.g,
			#include<stdio.h>
			void main(){
				int a; //variable
				a = 10;
				printf("%d\n", a);
				printf("%u\n", &a);
			}
	```

# Structure:

##### Structure Syntax:

	```
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
	```

<strong>Accessing member: </strong> structureVariable.MemberName //period operator


	```
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
	```

<strong>Accessing member: </strong>  structureVariable->MemberName //Arrow operator

# Array to pointer:

		```
		for e.g,
		#include<stdio.h>
		void main(){
			int a = 11, b=22, c=33,d=44, e=55; //variable
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
		```

# Data Structure:

- Data Structure is a representation of logical relationship existing between individual elements of data.
- In other words, a data structure defines a way of organizing all data items that considers not only the elements stored	but also their relationship to each other.
- The term data structure is used to describe the way data is stored.
- To develop a program of an algorithm, we should select an appropriate data structure for that algorithm. Therefore, data structure is represented as:

		Algorithm + Data Structure = Program

# Algorithm:

An algorithm is a finite sequence of instructions, each of which has a clear meaning and can be performed with a finite amount of effort in a finite length of time. No matter what the input values may be, an algorithm terminates after executing a finite number of instructions. In addition, every algorithm must satisfy the following criteria:

	1. Input: there are zero or more quantities, which are externally supplied;

	2. Output: at least one quantity is produced;

	3. Definiteness: each instruction must be clear and unambiguous;

	4. Finiteness: if we trace out the instructions of an algorithm, then for all cases the
	algorithm will terminate after a finite number of steps;

	5. Effectiveness: every instruction must be sufficiently basic that it can in principle be
	carried out by a person using only pencil and paper. It is not enough that each operation
	be definite, but it must also be feasible.

# Introduction:
- Memory can be understand as a piece of area which a program needs to run it self.

- A computer program always needs some amount of memory to run which is allocated to it by Operating System.

		To run any process, an O.S. allocates it, separate memory.

- A program requests the amount of memory which it needs to run itself from O.S. Then OS Manages this memory.

- Memory can be allocated in following:
		1. Static memory allocation
		2. Dynamic memory allocation

# Different Part Of Program Memory:
- It is the area which is used to store all source code like .c Or .cpp files.

- <strong> Stack: </strong>
It is the area which is used to store variables like
int a, char name[20], float height

- <strong> Heap: </strong>
It is the area which operating system allocates us when we
request it at run time of a program.


	```
	int *ptr; //pointer to integer
	char *a; //pointer to character
	void *n; // void pointer or generic pointer
	```

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
- Function Which Can Be Used For Dynamic Memory Allocation Are :-

		Void * malloc(int)
		1.It allocates specified number of bytes from the heap and return a void
		type of pointer pointing towards the base address of that address.

		return_type void_pointer;

		2. Void * calloc(int,int)
		It also allocates specified number of bytes from heap but the difference is that memory is shattered.

		return_type void_pointer;

		3. Void * realloc(void *,int size)
		It reallocates a free memory to us.

		4. Void free(void *)
		It deallocates the memory from the heap which is previously allocated.

			```
			int a=10;
			int* ptr = &a;
			scanf("%d", &a); or scanf("%d", ptr);
			```

# Pointer Increment & Scale Factor:
- Pointer increment means its value is increased by the length of the data type that it points to, and this length is called as scale Factor.

		for e.g, int *ptr;
			   ptr = ptr + 1;
			   ptr = 0x2012 + 4;

- Sizeof(var_name) function is used to know the no of bytes need for that variable.

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
![image](https://drive.google.com/uc?export=view&id=1ITXoDo-VtJ9W_toIAqrjXPcMIDHdbido)

# Linked List:

- Linked Lists and arrays are similar since they both store collection of data.

- Array is the most common data structure used to store collection of elements.

- Arrays are convenient to declare and provide the easy Syntax to access any element by its index number. Once the array is set up, access to any element is convenient and fast.

- A linked list data structure include a series of connected nodes. Here, each node and the address of the next node:

		1. A data item
		2. An address of another nodes
		3. We wrap both the data item and the next node reference in a struct.
	

# Representation of Linked List:

	```
	struct node{
		int data;
		struct node *next;
	}
	```

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

- It is the most common. Each node has data and a pointer to the next node.

# Circular Linked List:

- A Circular linked list is variation of a linked list in which the last element is linked to the first element.
This forms a circular loop.

# Doubly Linked List:

- We add a pointer to the previous node in a Doubly-linked list. Thus, we can go in either direction: Forward or Backward.

# Circular Doubly Linked List:

- We add a pointer to the previous node in a Doubly-linked list. Thus, we can go in either direction: Forward or Backward.

	NOTE: The power of Linked List comes from the ability to break the chain and rejoin it.

# Operations on linked list:

	1. Creation
	2. Traversing
	3. Searching
	4. Insertion
	5. Deletion
	6. Updation

# Inserting a node in the begining:

Algorithm to be followed to insert a new node at the beginning of the list:

- Allocate new memory block
- If the list is empty then start = newnode.
- If the list is not empty, follow the steps given below:

		```
		newnode -> next = start;
		start = newnode;
		```

# Inserting a node at the end:

Algorithm to insert a new node at the end of the list:

- Allocate new memory block.
- If the list is empty then start = newnode
- If the list is not empty follow the steps given below:
		
		```
		temp = start;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newnode;

		```

# Inserting a node at intermediate (Specific) Position:

Algorithm to insert a new node in an intermediate position in the list:

- Allocate new memory block
- Ensure that the specified position is in between first node and last node. If not, specified position is invalid.
- Store the starting address (which is in start pointer) in temp and prev pointers.
- Then traverse the temp pointer upto the specified position followed by prev pointer.
- After reaching the specified position, follow the steps given below:

		```
		prev -> next = newnode;
		newnode -> next = temp;
		```

# Linked List Applications:

	1. Dynamic Memory Allocation.
	2. Implemented in stack and queue.
	3. In undo functionality of software
	4. Hash tables, Graphs

# STACK:

1. A stack is a list of elements in which an element may be inserted or deleted only at one end, called the top of the stack. Stacks are sometimes known as LIFO(Last in, first out) lists.

2. As the items can be added or removed only from the top i.e, the last item to be added to a stack is the first item to be removed.

3. The two basic operations associated with stacks are:

		1. Push: Is the term used to insert an element into a stack.

![image](https://drive.google.com/uc?export=view&id=1bse0K_BUSvh3XpB3t9NNSwLJKNGq7OFt)

		2. Pop: Is the term used to delete an element from a stack.

![image](https://drive.google.com/uc?export=view&id=1tOZLI3UjpWj0WGz2wg89EPKOULypt4fC)

4. Operations on Stacks:

	- Creation
	- Traversing
	- Searching
	- Insertion
	- Deletion
	- Updation

# Representation of STACK:

		1. Array Implementation of Stack(Static Implementation)

![image](https://drive.google.com/uc?export=view&id=1OkToZvW0PEv-e_gbPnML_TTCc5j7NncO)

		2. Linked List Implementation of Stack(Dynamic Implementation)

![image](https://drive.google.com/uc?export=view&id=1LClIceVMNGbLwMuJAmO0IsDTB_H9Kzfv)

# Applications of STACK:

	a. Stack Frame (Memory Structure)
	b. Reversing a String
	c. Calculation of Expressions

# Stack Frame / Memory Layout:

![image](https://drive.google.com/uc?export=view&id=1IhpZkOZ-4d8mziDXa1rgxNFdBplECMn5)

# Algebraic Expressions:

	1. An Algebraic expressions is a legal combination of operators and operands.
	2. Operand is the quantity on which a mathematical operation is performed.
		Operand may be a variable like x, y, z or a constant like 5, 4, 6 etc.
	3. Operator is a symbol which signifies a mathematical or logical operation between the operands.
		Examples of familiar operators include +, -, *, /, ^ etc.
	4. An Algebraic expression can be represented using three notations.
		They are infix, postfix and prefix notations.

# Infix:
It is the form of an arithmetic expression in which we fix (place) the
arithmetic operator in between the two operands.

		Example: A+B
		(A + B) * (C - D)

- Prefix: It is the form of an arithmetic notation in which we fix (place) the arithmetic operator before (pre) its two operands. The prefix notation is called as polish notation.

		Example: +AB
		*+AB - CD

- Postfix: It is the form of an arithmetic expression in which we fix (place) the arithmetic operator after (post) its two operands. The postfix notation is called as suffix notation and is also referred to reverse polish notation.

		Example: AB+
		AB + CD -*

# Five Binary Operations: +, -, *, /, ^(exponentiation)
For these binary operations, the following in the order of precedence (highest to lowest):

| Operator    				| Precedence   		|
| :----------: 				| :-----------: 	|
| exponentiation(^)   		| Highest    		|
| *, /   					| Next Highest 		|
| +, - 						|Lowest				|

# Convert Infix notation to prefix:

		1. If a infix expression is given so first check precedence of
		operators and make brackets according to that.

		This means higher precedence operator bracket first.

		2. We need to traverse whole expression and find opening
		brackets if finds fetch operator that combined in between
		them and if any operand will encountered then this will write in same sequence.

		3. If any operator or closing bracket is encountered so ignore
		that.

				for e.g. A+B*C
						=> A+(B*C)
						=> (A+(B*C))
						=> +A*BC

				for e.g. A*B+CAD
						=> A*B+(CAD)
						=> (A*B)+(CAD)
						=> ((A*B)+(C^D))
						=> +*AB^CD


				for e.g. A^B*C-D/E
						=> (A^B) *C-D/E
						=> ((A^B) *C)-D/E

				for e.g. ((A^B) *C)-(D/E)
						=> (((A^B) *C)-(D/E))
						=> -*^ABC/DE


# Convert Infix notation to postfix:
1. If a infix expression is given so first check precedence of operators and make brackets according to that. This means higher precedence operator bracket first.

2. we need to traverse whole expression and find closing brackets if finds fetch operator that combined in between them and if any operand will encountered then this will write in same sequence.

3. If any operator or opening bracket is encountered so ignore that.

				for e.g. A+B*C
						=> A+(B*C)
						=> (A+(B*C))
						=> ABC*+

				for e.g. A+B*C/D
						=> A+(B*C) /D
						=> A+((B*C) /D)
						=> (A+((B*C) /D))
						=> ABC*D/+

				for e.g. (A + B) * (C - D) / E
						=> ((A+B) *(C-D)) /E
						=> (((A+B) *(C-D)) /E)
						=> Postfix: AB+CD-*E/
						=> Prefix: *+AB-CDE

# Queue:
- A queue is another special kind of list, where items are inserted at one end called the rear and deleted at the other end called the front. Another name for a queue is a "FIFO" or "First-in-first-out" list.

- The operations for a queue are analogues to those for a stack, the difference is that the insertions go at the end of the list, rather than the beginning. We shall use the following operations on queues:

		1. enqueue: which inserts an element at the end of the queue.

		2. dequeue: which deletes an element at the start of the queue.

# Representation of Queue:

![image](https://drive.google.com/uc?export=view&id=1-sR8kTbwR2HwxTfv9ozZHpVwOVE4WOZk)

# Queue Implementation:

	1. Using Array
	2. Using Linked List

# Searching:

1. Refers to the operation of finding the location of a given item in a collection of items.
2. Searching is a technique of finding an element from the given data list or set of the elements like an array, list or trees.
3. It is a technique to find out an element in a sorted or unsorted list.
3. Types of Searching:

		1. Linear (Sequential) Search
		2. Binary Search

# Sorting:

Refers to the operation of arranging data in some given order, such as increasing or decreasing, with numerical data, or alphabetically, with character data.

## Bubble Sort Algorithm:

- Starting from the first index, compare the first and the second elements. If the first element is greater than the second element, they are swapped.
- Now, compare the second and the third elements. Swap them if they are not in order. The above program goes on until the last element.
- The same process goes on for the remaining iterations. After each iteration, the largest element among the unsorted elements is placed at the end.
- In each iteration, the comparison takes place up to the last unsorted element.
- The array is sorted when all the unsorted elements are placed at their correct positions.

![image](https://drive.google.com/uc?export=view&id=1UV1q1qmpCBjLpB0otwo_zSIqJJVyOAVc)

## Insertion Sort:
- Pseudocode

		```
		i <- 1
		while i < length(A)
			j <- i
			while j > 0 and A[j-1] > A[j]
				swap A[j] and A[j - 1]
				j <- j + 1
			end while
			i <- i + 1
		end while
		```

# Tree:

- A tree is a non-linear hierarchical data structure taht consists of nodes connected by edges.

## Tree Terminologies:
#### Node:
- A node is an entity that contains a key or value and pointers
to its child nodes.
- The last nodes of each path are called leaf nodes or external nodes that do not contain a link/pointer to child nodes.
- The node having at least a child node is called an internal
node.

#### Edge:
- It is the link between any two nodes.

![image](https://drive.google.com/uc?export=view&id=1lKb2zi-MZm6v_En-rpIzLDvrkaVrtYUH)

#### Leaf node:
- A node with no children is called a leaf (or external node).
A node which is not a leaf is called an internal node.

#### Path:
- A sequence of consecutive edges from the source node to
destination node.

- A sequence of nodes n1, n2, . . .,nk such that ni is the parent of ni + 1 for i = 1, 2,. . ., k - 1. The length of a path is 1 less than the number of nodes on the path. Thus there is a path of length zero from a node to itself.
For the tree shown in above figure, the path between A and I is A, B, D, I.

#### Siblings
- The children of the same parent are called siblings. 
- For the tree shown in figure, F & G are the siblings of the parent node C and H and I are the siblings of the parent node D.
#### Ancestor and Descendent:
- If there is a path from node A to node B, then A is called an ancestor of B and 
- B is called a descendent of A.

#### Root:
- It is the topmost node of a tree.

#### Height of a Node:
- The height of a node is the number of edges from the node to the deepest leaf (i.e,he longest path fromt he node to a leaf node).
#### Depth of a Node:
- The depth of a node is the number of edges from the root to the node.

#### Subtree:
- Any node of tree, with all of its descendants is a subtree.

#### Level:
- The level of the node refers to its distance from the root. The root of the tree has level O, and the level of any other node in the tree is one more thatn the level of its parent. For e.g., In the binary tree of figure above node F is at level 2 and node H is at level 3.
- The maximum number of nodes at any level is 2^n. 

![image](https://drive.google.com/uc?export=view&id=1GwqJ5RIvG1kya2cPGIlcwzQXtDrR8n5h)

#### Height of a Tree:
- The height of a Tree is the height of the root node or the depth of the deepest node.

![image](https://drive.google.com/uc?export=view&id=1OrqYao4X2TmnoNgu_vCx12n8WZW6WmM5)

#### Degree of a Node:
- The degree of a node is the total number of branches of that node.

#### Forest:
- A collection of disjoint trees is called a forest.

![image](https://drive.google.com/uc?export=view&id=1_kQdMhfvF7C-01RJcunXQl7J4E4NUTX-)

- You can create a forest by cutting the root of a tree.

#### Terminal Node:
- A node with degree zero is called a terminal node or a leaf

#### Non - Terminal Node:
- Any node (except the root node) whose degree is not zero is called non - terminal node, also called intermediate nodes.

## Types of Tree:

	1. Binary Tree
	2. Binary Search Tree
	3. AVL Tree
	4. B - Tree

# Binary Tree:
- In general, tree nodes can have any number of children. In a binary tree, each node can have at most two children.
- A binary tree is either empty or consists of a node called the root together with two binary trees called the <strong>left-subtree</strong> and the <strong>right-subtree.</strong>
- A tree with no nodes is called as a NULL Tree.
- A binary tree is shown in figure:

![image](https://drive.google.com/uc?export=view&id=1Bg1XcmwkgMEOtK4i08nP2D0EFq095n94)
- Binary Trees are easy to implement beacause they have a small, fixed number of child links. Because of this characteristics, binary trees are the most common types of trees and form the basis of many important data structures.

### Level in Binary Tree:

<strong>Assigning level numbers and Numbering of nodes for a binary tree: </strong>

- The nodes of a binary tree can be numbered in a natural way, level by level, left to right.
- The nodes of a complete binary tree can be numbered so that the root is assigned the number 1, a left child is assigned twice the number assigned its parent, and a right child is assigned one more thatn twice the number assigned its parent. For e.g.

![image](https://drive.google.com/uc?export=view&id=1tge4BRxXDz5mVjK0r4A57vts0GTIbxNI)

### Construction of Binary Tree:
![image](https://drive.google.com/uc?export=view&id=1hEJC0W7908bk9EzOHSnHbrZ8F-LyTTFH)

### Binary Tree Traversal Techniques:
- A tree traversal is a method of visting every node in the tree. By visit, we mean that some type of operation is performe. For e.g. You may wish to print the content of the nodes. 
- There are following ways to traverse a bianry tree:

		1. Preorder
		2. Inorder
		3. Postorder

- In the first three traversal methods, the left subtre of a node is traversed before the right subtree. The difference among them comes from the difference in the time at which a root node is visted.

### Inorder Traversal:
- In the case of inorder traversal, the root of each subtree is visited after its left subtree has been traversed but before the traversal of its right subtree begins. 
- The steps for traversing a binary tree in inorder traversal are:

		1. Visit the left subtree, using inorder.
		2. Visit the root.
		3. Visit the right subtree, using inorder.

### Preorder Traversal:
- In a preorder traversal, each root node is visited before its left and right subtrees are traversed. Preorder search is also called<strong> backtracking</strong>.
- The steps for traversing a binary tree in preorder traversal are:

		1. Visit the root.
		2. Visit the left subtree, using inorder.
		3. Visit the right subtree, using inorder.

### Postorder Traversal:
- In a postorder traversal, each root is visited after its left and right subtrees have been traversed.
- The steps for traversing a binary treeis postorder traversal are:

		1. Visit the left subtree, using inorder.
		2. Visit the right subtree, using inorder.
		3. Visit the root.

# NOTE: 

		1. Inorder: Left ROOT Right
		2. Preorder: ROOT Left Right
		3. Postorder: Left Right ROOT

- For example:

![image](https://drive.google.com/uc?export=view&id=1UUAIw-9F_AeSCq0lydtj-in08ymrjX2Y)

![image](https://drive.google.com/uc?export=view&id=1gB3A-g9-QWOEQby25GKblaaTcQCK53RU)

![image](https://drive.google.com/uc?export=view&id=1SEb9OIACOQevr1E2uyoicnI6iOxA9HzY)

![image](https://drive.google.com/uc?export=view&id=1oHiGIHSd0bb_fRokqdLjVORGN3jXROdY)

# Binary Search Tree:
- Binary Search tree can be defined as a class of binary trees, in which the nodes are arranged in a specific order. This is also called ordered binary tree.
- In a binary search tree, the value of all the nodes in the left sub-tree is less than the calue of the root. 
- Similarly, value of all the nodes in the righub-tree is greater than or equal to the value of the root.
- This rule will be recursively applied to all the left and right sub-trees of the root.

![image](https://drive.google.com/uc?export=view&id=1T5rbgY5jiPfKPdcnq8N6HpWp3HfCsBeU)

- Create the binary search tree using the following data elements:

		43	10	79	90	12	54	11	9	50
- Solution:

		1. Insert 43 into the tree as the root of the tree.
		2. Read the next element, if its is lesser than the root node element, 
		   insert it as the root of the left sub-tree.
		3. Otherwise, insert it as the root of the right of the right sub-tree.
		4. The process of creating BST by using the given elements, is shown in figure below:
![image](https://drive.google.com/uc?export=view&id=1jWswgdXLq7voFpEO8kMpMA9wNWcTFKj4)
![image](https://drive.google.com/uc?export=view&id=1LiFs4jw6283rTxCNSDoUPsucySHrOFzf)
![image](https://drive.google.com/uc?export=view&id=1ceqluIbPV1nkw2eRmiQ46KgXDPLuxSp4)

## Technique of converting an expression into binary tree:

#### Divide Conquor technique is used to convert an expression into binary tree

1. To convert in a binary tree we should parenthesis on expression according to order of precendence.
2. Parenthesis expression will be evaluated and added to the left expression and go on dividing expressions as follow till we get element operand.

![image](https://drive.google.com/uc?export=view&id=1M3yllNaLH09Mtl4WUlvEtFvSazBYgI4b)
![image](https://drive.google.com/uc?export=view&id=1929LNB9wiDyhtoX0jyI1SJNP9zjTMhbJ)

# Advantages of using BST:
- Searching becomes very efficient in a binary search tree since, we get a hint each step, about which sub-tree contains the desired element.
- The binary search tree is considered as efficient data structure in compare to arrays and linked lists. In searching process, it removes half sub-tree at every step. Searching for an element in a binary tree takes O(log2n) time. In worst case, the time it takes to serach an element is O(n).
- It also speed up the insertion and deletion operations as compare to that in array and linked list.

## Pre-Order Traversal:
- Preorder traversal, the nodes are traversed according to the following sequence from any given node:

	1. It will mark the current node as visited first.
	2. Then, if a left child exists, it will go to the left sub-tree and continue the same process.
	3. After visiting the left sub-tree, it wll then move to its right sub-tree, it will then move to its right sub-tree and continue the same process.

- Since the sequence is node->left->right, it is referred to as a preorder traversal, since the node is visited before the left sub-tree.

	```
	void preorderTraversal(node* root)
	{
		if(root == NULL)
		{
			return;
		}
		printf("%d -> ", root->value);
		preorderTraversal(root->left);
		preorderTraversal(root->right);
	}
	```

## Inorder Traversal:

	```
	void inorderTraversal(node* root)
	{
		if(root == NULL)
		{
			return;
		}
		inorderTraversal(root->left);
		printf("%d -> ", root->value);
		inorderTraversal(root->right);
	}
	```

## PostOrder Traversal:
- Post Order traversal, the nodes are traversed according to the following sequence from any given node:
- If a left child exists, it will always go to it first.
- After visiting the left sub-tree, it will then move to its right sub-tree.
- After it visits the right sub-tree, it will finally visit the currently given node.
- Since the sequence is left -> right -> node, it is referred to a postorder Traversal, since the nodes are visited at the last.
	
	1. If a left child exists, it will always go to it first. 
	2. After visiting the left sub-tree, it will then move to its right sub-tree
	3. After it visit the right sub-tree, it will finally visit the currently given node.

	```
	void postorderTraversal(node* root)
	{
		if(root == NULL)
		{
			return;
		}
		postorderTraversal(root->left);
		postorderTraversal(root->right);
		printf("%d -> ", root->value);
	}
	```

# Types of Binary Tree:

1. Strictly Binary Tree
2. Full Binary Tree
3. Complete Binary Tree
4. Extended Binary Tree

## Strictly Binary Tree:
- If every non-leaf node or non-terminal node in a binary tree has non empty left sub tree and right sub trees.
- In other words, the degree of every non-leaf node will always be 2.
- A strictly binary tree with n leaves always contains (2^n - 1) nodes.
<!-- Image -->

## Full Binary Tree:
- A full binary tree of height h has all its leaves at level h. Alternatively; All non leaf nodes of a full binary tree have twp children, and the leaf nodes have no children.
- A full binary tree with height h has 2^(h+1) - 1 nodes. A full binary tree of height is structly binary tree all of whose leaves are at level h. 
- A full binary tree of height h contains 2^h leaves and 2^h - 1 non-leaf nodes.
- For example, a full binary tree of height 3 contains 2^(3+1) - 1 = 15 nodes.
<!-- Image -->
## Complete Binary Tree:
- A Binary tree is said to be a complete binary tree if all of the leaves are located at the same level d.
- A complete binary tree is a binary tree that contains exactly 2^n nodes at each level between level 0 and d.
- The total number of nodes in a complete binary tree with depth d is 2d+l-l where leaf nodes are 2d while non-leaf nodes are 2d-l
<!-- Image -->
- A binary tree with n nodes is said to be complete if it contains all the first n nodes of the above numbering scheme.
- A complete binary tree of height h looks like a full binary tree down to lvel (h-l), and the level h is filled from left to right.
- A binary tree with n nodes and of depth d is strictly binary tree all of whose terminal node are at level d, in a complex binary tree, there is exactly one node at level 0, two nodes at level l, and four nodes at level 2 and so on.
# Internal & External Nodes:
- An internal node is a tree having atleast one-key and possibly some children. It is some times convenient to ahve another types of nodes, called an external node, and pretend that all null child links point to such a node. An external node doesn't exist, but serves as a conceptual place holder for nodes to be inserted.
- We draw internal nodes using circles, with letters as labels. External nodes are denoted by squares. The square node version is sometimes called an extended binary tree. A binary tree with n internal nodes has (n+1) external nodes.
<!-- Image -->

# AVL Tree:
- AVL Tree is invented by GM Adelson - Velsky and EM Landis in 1962. 
- AVL Tree can be defined as <strong>height balanced binary search tree</strong> in which each node is associated with a balance factor which is calculated by subtracting the height of its right sub-tree from that of its left sub-tree.
- Tree is said to be balanced if balance factor of each node is -1, 0 & 1, otherwise the tree will be unbalanced and need to be balanced.

		Balance Factor = Height(Left Sub tree) - Height(Right Sub tree)

## AVL Rotation:
- We perform rotation in AV:L tree only in caser if Balance Factor is other than -1, 0 & 1.
- There are basically four types of rotations which are as follows:
1. <strong> LL Rotation: </strong>
Inserted node is in the left subtree of left subtree of A
1. <strong> RR Rotation: </strong>
Inserted node is in the right subtree of right subtree of A
1. <strong> LR Rotation: </strong>
Inserted node is in the right subtree of left subtree of A
1. <strong> RL Rotation: </strong>
Inserted node is in the left subtree of right subtree of A

### RR Rotation:
- When BST becomes unbalanced, due to a node is inserted into the right subtree of the right subtree of A, then we perform RR rotation, RR rotation is an anticlockwise rotation, which is applied on the edge below a node having balance factor -2.
<!-- Image -->
- In above e.g, node A has balance factor -2 because a node C is inserted in the right subtree of A right subtree. We perform the RR rotation on the edge below A.
### LL Rotation:
- When BST becomes unbalanced, due to a node is inserted into the left subtree of the left subtree of C, then we perform LL rotation, LL rotation is clockwise rotation, which is applied on the edge below a node having balance factor 2.
<!-- Image -->
- In above e.g, node C has balance factor 2 because a node A is inserted in the left subtree of C left subtree. We perform the LL rotation on the edge below A.
### LR Rotation:
- Double rotations are bit tougher than single rotation which has already explained above.

		LR rotation = RR rotation + LL rotation

- i.e, First RR rotation is performed on subtree and then LL rotation is performed on full tree, by full tree we mean the first node from the node from the path of inserted node whose balance factor is other than -1, 0 & 1.
<!-- Slide -->
<!-- Slide -->
<!-- Slide -->
### RL Rotation:
- Double rotations are bit tougher than single rotation which has already explained above.
	
		RL rotation = LL rotation + RR rotation

- i.e, First LL rotation is performed on subtree and then RR rotation is performed on full tree, by full tree we mean the first node from the path of inserted node whose balance factor is other than -1, 0 & 1.
<!-- Slide -->
<!-- Slide -->
<!-- Slide -->
- Construct an AVL tree by inserting the following elements in the given order.

		Elements: 63, 9, 19, 27, 18, 108, 99, 81
<!-- Slide -->
<!-- Slide -->
<!-- Slide -->

- Construct an AVL tree by inserting the following elements in the given order.

		Elements: 14, 17, 11, 7, 53, 4, 13

<!-- Slide -->
<!-- Slide -->
<!-- Slide -->	

# Graph:
- A graph data structure is a collection of nodes that have dat and are connected to other nodes.
- A collections of vertices V.
- A collection of edges E, represented as ordered pairs of vertices(u, v)
- V = {0,1,2,3}
- V = {(0,1),(0,2),(0,3),(1,2)}
- G = {V, E}

## Graph Terminology:
#### Vertex:
- Each node of the graph is represented as a vertex. In the following example, the labeled circle represents vertices. Thus A to G are vertices. We can represent them using an array as shown in the following image. Here A can be identified by index 0. B can be identified using index 1 and so on.
<!-- Image -->

#### Adjacency:
- A vertex is said to be adjacent to another vertex if there is an edge connecting them. Vertices 2 and 3 are not adjacent because there is no edge between them.

#### Path:
- A sequence of edges that allows you to go from vertex A to vertex B is called a path. 0-1, 1-2 and 0-2 are path from vertex 0 to vertex 2.
<!-- Image -->

#### Directed Graph:
- A graph in which an edge (u,v) doesn't necessarily mean that there is an edge(v, u) as well. The edges in such a graph are represented by arrows to show the direction of the edge.

#### Undirected Graph:
- A graph in which an edge (u, v) mean that there is an edge (v, u) also. The edges in such a graph are represented by line to show the edge.

# Graph Representation:
- Graph are commonly represented in two ways:
1. <strong>Adjacency Matrix</strong>
- An adjacency matrix is a 2D array of V x V vertices. Each row and column represent a vertex.
- If the value of any element a[i][j] is 1, it represents that there is an edge connecting vertex i and vertex j.
<!-- Image  -->

2. <strong>Adjacency List</strong>
- An adjacency list represents a graph as an array of linked lists.
- The index of the array represents a vertex and each element in its linked list represents the other vertices that form an edge with the vertex.
- The adjacency list for the graph we made in the first example is as follows:
<!-- Image -->

# Graph Operations:
- Check if the element is present in the graph Traversal.
- Add elements (vertex, edges) to graph
- Finding the path from one vertex to another.

### Depth First Traversal:
- Depth First Search (DFS) algorithm traverses a graph in a depthward motion and uses a stack to remember to get the next vertex to start a search, when a dead end occurs in any iteration.

1. Visit the adjacent unvisited vertex. Mark it as visited Display it. Push it in a stack.
2. If no adjacent vertex is found, pop up a vertex from the stack.
3. Repeat Rule 1 and Rule 2 until the stack is empty.
<!-- Slide -->
<!-- Slide -->
<!-- Slide -->
<!-- Slide -->
<!-- Slide -->
### Breadth First Traversal
- Breadth First Traversal (BFS) algorithm traverses a graph in a breadthward motion and uses a queue to remember to get the next vertex to start a search, when a dead end occurs in any iteration.
1. Visit the adjacent unvisited vertex. Mark it as visited Display it. Push it in a queue.
2. If no adjacent vertex is found, pop up a vertex from the queue.
3. Repeat Rule 1 and Rule 2 until the queue is empty.
<!-- Slide -->
<!-- Slide -->
<!-- Slide -->
<!-- Slide -->
<!-- Slide -->

<!-- Author - Avinash Kumar || Contact: avinashbest3@gmail.com -->