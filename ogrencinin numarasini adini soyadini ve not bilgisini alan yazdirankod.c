#include <stdio.h>
#include <stdlib.h>
struct student{
	int number;
	char name[20];
	char surname[20];
	float midGrade;
};

int main(){
	int i;
	typedef struct student st;
	st students[10];
	
	for(i=0;i<3;i++){		
	printf("Enter the %d. student number:",i+1);
	scanf("%d",&students[i].number);
	printf("Enter the %d. student name:",i+1);
	scanf("%s",students[i].name);
	printf("Enter the %d. student surname:",i+1);
	scanf("%s",students[i].surname);
	printf("Enter the %d. student midterm grade:",i+1);
	scanf("%f",&students[i].midGrade);
	printf("-----\n");
	}
	
	for(i=0; i<3;i++){		
	printf("Student %d - Number: %d, Name: %s, Surname: %s, Midterm Grade: %.2f\n",i+1,students[i].number,students[i].name,students[i].surname, students[i].midGrade);	}
	
}
