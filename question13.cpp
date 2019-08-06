// CS101-102 Exam 2: Question 13
#include <stdio.h>
#include <math.h>

int main(void) {
	int day, numDays;
	printf("Enter the day number: ");
	scanf("%i", &day);
	printf("Enter the number of days in this month: ");
	scanf("%i", &numDays);
	
	for(int i=0; i<7; i++){
		if(day>numDays){
			day=1;
		}
		printf("%i ", day);
		day++;
	}

	return 0;
}
