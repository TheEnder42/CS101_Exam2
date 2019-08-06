// CS101-102 Exam 2: Question 15
#include <stdio.h>
#include <math.h>
#define SIZE 20

int main(void) {
	// DO NOT MODIFY
	int num_vals = 0;
	int data[SIZE];
	int target = 0;
	
	// Get user input
	printf("Enter number of values: ");
	scanf("%i", &num_vals);
	
	for (int i = 0; i < num_vals; i++) {
		scanf("%i", &data[i]);
	}
	
	printf("Enter target value: ");
	scanf("%i", &target);
	// DO NOT MODIFY
	
	// TODO: add your code here
	int more, less, is, moreSum, lessSum, isSum;
	for(int i=0; i<num_vals-2; i++){
		if(data[i]+data[i+1]+data[i+2]<target){
			less++;
			lessSum+=data[i]+data[i+1]+data[i+2];
		}
		else if(data[i]+data[i+1]+data[i+2]>target){
			more++;
			moreSum+=data[i]+data[i+1]+data[i+2];
		}
		else{
			is++;
			isSum+=data[i]+data[i+1]+data[i+2];
		}
	}
	printf("There are %i triples greater than %i with total %i\n", more, target, moreSum);
	printf("There are %i triples less than %i with total %i\n", less, target, lessSum);
	printf("There are %i triples equal to %i with total %i\n", is, target, isSum);
	if(more>less && more>is){
		
	}
	else if(){
		
	}
	return 0;
}
