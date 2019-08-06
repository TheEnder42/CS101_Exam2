// CS101-102 Exam 2: Question 14
#include <stdio.h>
#include <math.h>

int main(void) {
	int exams, min, max, sum;

	printf("Enter the number of exams: ");
	scanf("%i", &exams);
	int scores[exams];
	
	for(int i=0; i<exams; i++){
	printf("Enter the next exam score (0-100): ");
	scanf("%i", &scores[i]);
	}
	
	min=scores[0];
	for(int i=0; i<exams; i++){
		if(scores[i]<min){
			min=scores[i];
		}
	}
	
	max=scores[0];
	for(int i=0; i<exams; i++){
		if(scores[i]>max){
			max=scores[i];
		}
	}
	
	for(int i=0; i<exams; i++){
		sum += scores[i];
	}
	
	printf("\nMin: %i, Max: %i, Mean of %i highest exams: %.02lf", min, max, exams-1, (sum-min)/(exams-1.0));
	
	return 0;
}
