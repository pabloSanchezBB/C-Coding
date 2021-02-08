//Linked Lists, Sorted with InsertionSort

/*
	abstract: make a generic linked list of ints and sort it with InsertionSort
		- The Linked Lists uses the void pointer and the function pointer to implement LL functionality thats like Java or C++
		- The LL will use a struct so I'll get practice with that
		- InsertionSort is a lot like the BubbleSort thing in the last file, we need a swap and a sort method to implement in main()

 */ 


#include<stdio.h>
#include<time.h> //this and the include below are needed for the rand() command
#include<stdlib.h> //this is needed to make the nodes

//define the node struct up here(following BlueFever's guide on YT):
//to make a new Node:
/*
	1. Create new Pointer to the struct: struct intNode *newNode = NULL;
	2. Allocate dynamic memory, using malloc to return a pointer to the beginning of that allocated memory.
		We are pointing the newNode to that allocated returned pointer with this line:
		newNode = malloc(sizeof(struct intNode));
 */
 //How this looks in C:
 struct intNode{
	int num; 					//value stored in the node
	struct intNode *nextInLine; //pointer that points to the next node in the linked list
 };
 
 struct intNode *getNewNode(const int num){
	 struct intNode *newNode = NULL; 				//make Pointer to the Structure
	 newNode = malloc(sizeof(struct intNode));		//Allocate Memory to the Node
	 //you have to check if the pointer after the malloc() is null, ALWAYS!!!, here's how to do it:
	 if(newNode != NULL){
		newNode->nextInLine = NULL;					//assign nextInLine as Null(i.e. not pointing to any new nodes)
		newNode->num = num;							//Assign the int value to the Node, some malloc error is dealt with here
		printf("Created New Node at %p\n", newNode);	//Print the Memory Address
	 } else {
		printf("Allocation Failure!! \n");
	 }

	 return newNode;								//Return the Pointer to the Memory from the malloc() command
 }
 
 //implementation of the list in main(){}:
 /*
	struct intNode *first = NULL;
	struct intNode *added = NULL;
	
	first = getNewNode(12)
	added = getNewNode(100);
	
	first->nextInLine = added; //This is how we point to the next node in the list
	
	//when you delete a node make sure you remove it from memory like this(these should all be at the end by the "return 0;" statement):
	//delete pointers
	free(first); 
	free(added);
	//delete values from memory:
	first = NULL;
	added = NULL;
 */

void swap(struct intNode *start){
	struct intNode *temp = start; //set temp at the start for the sorted node to be inserted
	
	while(tempo !=NULL){
		temp = temp->nextInLine;
	}
}

void insertionSort(struct intNode **head_ref){
	/* Traditional Sort with arrs and input args of int arr[], int size:
	int i, j, key;
	
	for(int i=1;i<size; ++i){
		key = arr[i];
		j=i-1;
		
		while(j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;
	}*/
	//Sort with Singly Linked List:
	struct intNode** currentNode;
}

int main(void){
	
	
	return 0;
}