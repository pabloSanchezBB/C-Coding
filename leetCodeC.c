//LeetCode Problems in C: Work on this for 1-2hrs/day

//################################################################################################################################################################################
/*
################################################################################################################################################################################
	GUIDE 1: LEETCODING
	Guide to use: https://leetcode.com/discuss/general-discussion/623011/a-guide-for-dummies-like-me
	
	Task 1: Weapon of Choice
		- Easy, Use Pure C and C++
	
	Task 2: Mastering the Basics(Use Abdul Bari on Youtube or someone else for C)
		- Data Structures you'll need:
			- Arrays
			- Stacks
			- Queues
			- Linked Lists
			- Hash Tables
			- Trees and BST
			- Graphs
			- Disjoint Sets
			
		- Algorithms:
			- Backtracking
			- Branch and Bound
			- Brute Force Search
			- Divide and Conquer
			- Dynamic Programming
			- Greedy Algorithm
			- Prune and Search

	Task 3: Start Practicing
		- Solve Easy Problems on Leetcode, HackerRank, and HackerEarth
		- Roadmap for Solving(Problems that you should focus on):
			Recursion -> Linked List -> Stack -> Queue -> Two Pointers 
			-> Sliding-Window -> Hashing -> Sorting -> Binary Search 
			-> Trees -> BST -> Heaps -> Graph Basics -> BFS -> DFS
			-> Backtracking -> Greedy -> Dynamic Programming
			-> Advanced Graphs -> Union Find -> Bit Manipulation
			
	Task 4: Git Gud
		- GRIND BABY, GRIIIINNNNNNDDDDDD
		- Do Medium and Hard Level Problems once you've mastered the Roadmap
################################################################################################################################################################################

################################################################################################################################################################################
	GUIDE 2: EMBEDDED SOFTWARE
	
	Task 1: Focus on Data Structures and corresponding algorithms
		- Data Structures:
			- Arrays
			- Linked Lists
			- Stack
			- Trees
		- Algorithms:
			- Parenthesis Checker with a Stack
			- Program that creates a ring buffer with an array
			
	Task 2: Linux Stuff(For Companies with High end Processors and Systems, i.e. Self-Driving Cars)
		- Linux Basics: How Device Drivers Function, and how to write one. Start with Kernel Modules
		- Leetcode type questions are expected for these companies since their systems can handle complex algorithms
		
	Task 3: IOT/IIOT
		- Learn Questions on how to interface with modules with the processor and code
		- Learn RTOS fundamentals
		- Whiteboard Driver Code, you'll be given a datasheet, then understand the device, communication interface, 
			and write code to interface with it
		- Basic Data Structures and Algorithms that revolve around those(like BST with BFS and DFS)
		
		
	How to Accomplish these Tasks:
		- Use GeeksForGeeks Data Structures Section and do the practice problems
		- Once that's done, do LeetCode
		
		
################################################################################################################################################################################
*/



/*
	GeeksForGeeks Data Structures:
	
	Overview:
		Set 1: Linear Data Structures
		
			1. Arrays:
			
			2. Linked Lists:
			
			3. Stack:
			
			4. Queue:
	
	1. Arrays:
		a - Introduction:	https://www.geeksforgeeks.org/array-data-structure/#introduction
		
			i. Initializing Arrays in C:
				- int a[3];
				- int a[3] = {1,2,3};
				- int a[3] = {}; -> [0,0,0]
				- int a[3] = {1}; -> [1,0,0]
				- int *a;
				- int* a;
				- int * a;
				- int*a;
				
			ii. Pros/Use Cases of Arrays:
				- Random Access of elements using Array index
				- Less Code
				- Easy to Access all the elements
				- Traversal can be done easily with one loop
				- Sorting can be done with less code
				
			iii. Cons of Arrays/When not to use them:
				- Not dynamic like a linked list
				- Insertion and Deletion of elements is time consuming and costly
			
		
		b - Array Rotations:	https://www.geeksforgeeks.org/array-data-structure/#rotation

			i. Program for Array Rotation:
				-write a function rotate(arr[], d, n) that rotates arr[] of size n by d elements
					this will make array [1,2,3,4,5,6,7] => [3,4,5,6,7,1,2] after rotating with d=2

				Method 1: Moving Indices 1 by 1:
*/
				void rotate(int arr[], int d, int n)
				{
					int i;
					for(i=0;i<d;i++){
						leftRotateByOne(arr, n);
					}
				}
				
				void leftRotateByOne(int arr[], int n)
				{
					int temp = arr[0], i;
					for(i=0; i<n-1; ++i){
						arr[i] = arr[i+1];
					}
					arr[i] = temp;
				}
/*		

				Method 2: Moving Indices with a Juggling Algorithm:(this has the below array and n=12, d=3)
*/
				//	Let arr be {1,2,3,4,5,6,7,8,9,10,11,12}
				//	a) Elements are first moved in the first set by finding the greatest common divisor(GCD) of size(n) and roatation amount(d)and moving sets of indices:
				//
				//		After a): {4,2,3,7,5,6,10,8,9,1,11,12}
				//	
				//	b) Then do the second set(all the indices from the first part + 1)
				//
				//		After b): {4,5,3,7,8,6,10,11,9,1,2,12}
				//
				//	c) Finally do the third set of Numbers so you have...
				//	
				//		After c): {4,5,6,7,8,9,10,11,12,1,2,3}
				
				//	Code:
				
				int gcd(int a, int b) //calculates GCD
				{
					if(b == 0){
						return a;
					} else {
						return gcd(b, a % b); //recursively call til b == 0
					}
				}
				
				void leftRotate(int arr[], int d, int n) //rotates arr[] to the left by d indices
				{
					d = d % n; //handles case if d >= n before calling gcd(d,n);
					int g_c_d = gcd(d, n);
					
					for(int i=0;i<g_c_d;++i){ //move through the array in increments of the gcd
						
						//set up swap
						int temp = arr[i];
						int j = i;
						
						while(1){
							int k = j + d; //change the index to the new, rotated index
							if(k >= n){ //keep everything in the array, this makes sure there isn't an out of bounds error
								k = k-n;
							}
							
							if(k == i){ //once everything's been moved, break the while loop to swap and then loop again through the for loop0
								break;
							}
							
							arr[j] = arr[k]; //do the swaps for the subsequent indices for each multiple of the i-th element
							j = k; //set j == k for the next while loop
						}
						arr[j] = temp; //swap the temps before the next iteration of the for loop
					}
				}
/*
			ii. Reversal Algorithm for Array Rotation
				                                            
															
															
															
															
															
															
															
															
															
															
															
															
															
															
															
															
															
															
															
															
															
															
															
															
															
															
															
															
															
															
															
															
				
			iii. Block Swap Algorithm for Array Rotation
				
				
			iv. Program to cyclically rotate an array by one
				
				
			v. Search an element in a sorted and rotated array
				
				
			vi. Given a sorted and rotated array, find if there is a pair with the given sum
				
				
			vii. Find Maximum value of Sum(i*arr[i]) with only rotations on given array allowed
				
				
 */
/*
		c - Arrangement Rearrangement:	https://www.geeksforgeeks.org/array-data-structure/#rearrange
		
		d - Order Statistics:	https://www.geeksforgeeks.org/array-data-structure/#order
		
		e - Range Queries:	https://www.geeksforgeeks.org/array-data-structure/#range
		
		f - Searching and Sorting:	https://www.geeksforgeeks.org/array-data-structure/#searchSort
		
		g - Optimization Problems:	https://www.geeksforgeeks.org/array-data-structure/#optimization
		
		h - Matrix:	https://www.geeksforgeeks.org/array-data-structure/#Matrix
		
		i - Misc:	https://www.geeksforgeeks.org/array-data-structure/#misc
		
		j - Quick Links:	https://www.geeksforgeeks.org/array-data-structure/#quick		
	
	2. Linked List
	
	3. Stack
	4. Queue
	5. Binary Tree
	6. Binary Search Tree
	7. Heap
	8. Hashing
	9. Graph
	10. Matrix
	11. Misc.
	12. Advanced Data Structure
*/































//################################################################################################################################################################################



//################################################################################################################################################################################
/*
	1. 	Two Sum: 	Given an array of integers, return indices of the 
					two numbers such that they add up to the target
	
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 
 /*
	for nums = [2,7,11,15] and target = 9, result should be [0,1]
  */
	
#include<stdio.h>


int* twoSum(int* nums, int numsSize, int target, int* returnSize){
	*returnSize = 2; //sets up how large the return will be
    int* element = (int*)malloc(2*sizeof(int)); //What is this?
    
    for(int i=0;i<numsSize;++i)
        for(int j=i+1;j<numsSize;++j)
            if(nums[j] == target - nums[i])
            {
                printf("i = %d. j = %d\n", i, j);
                element[0] = i;
                element[1] = j;
                return element;
            }
    //Return [-1,-1] if there is no solution
    printf("No result with specified target\n");
    element[0] = -1;
    element[1] = -1;
    return element;
}

//################################################################################################################################################################################
/*
	7. Reverse Integer: 	Given a 32 bit signed integer, reverse
							digits of an integer
	
 */
 
 #include<stdio.h>
 
 int reverse(int x){

}