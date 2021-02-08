//Data Structures: Arrays and Pointers: This works but the output is a little wack, for some reason it doesn't print a newline after the unsorted array, what matters though is that the array sorts

/*
	abstract: run a file that creates an array, does a quick bubblesort on it and prints it using arrays and pointers:
 */

#include<stdio.h>
//we need the below includes for the random int portion
#include<time.h>
#include<stdlib.h>
 
void bubbleSort(int[] arr, int size);
void swap(int *xp, int *yp);
 
int main(void){
	
	//initiate array
	int numSize = 10;
	
	int nums[numSize];
	
	for(int n=0;n<numSize;++n){
		nums[n] = rand(); //returns pseudorandom int for the array
	}

	printf("Unsorted Array: \n"); //print unsorted array
	for(int a=0;a<numSize;++a){
		printf("%d, ", nums[a]);
	}
	
	bubbleSort(nums, numSize); //sort the array
	
	printf("\b\b\n\nSorted Array: \n"); //print the sorted array
	for(int b=0;b<numSize;++b){
		printf("%d, ", nums[b]);
	}
	
	return 0;
}

//bubbleSort
void bubbleSort(int[] arr, int size){
	int i,j; //initiate arr. indices, used GeeksForGeeks for this
	for(i=0;i<size-1;++i){
		for(j=0;j<size-1-i;++j){
			if(arr[j]>arr[i]){
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}

//swapping mechanism
void swap(int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
