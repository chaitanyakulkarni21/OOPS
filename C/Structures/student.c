/* Student details using Structures */
#include<stdio.h>
int main()
{
	struct Student
	{
		char name[50];
		int rollnum;
		float per;	
	};
	struct Student s1,s2,s3;
	printf("Enter Name rollnum and percentage of three students :\n");
	printf("Enters details of student 1 :\n");
	scanf(" %s %d %f",&s1.name,&s1.rollnum,&s1.per);

	printf("Enters details of student 2 :\n");
	scanf(" %s %d %f",&s2.name,&s2.rollnum,&s2.per);
	
	printf("Enters details of student 3 :\n");
	scanf(" %s %d %f",&s3.name,&s3.rollnum,&s3.per);
		
	printf("You have entered the following details : \n");
	printf("Details of student 1 :\n");
	printf("Name : %s\n",s1.name);
	printf("Roll Number : %d\n",s1.rollnum);
	printf("Percentage : %.2f\n",s1.per);
	
	printf("\nDetails of student 2 :\n");
	printf("Name : %s\n",s2.name);
	printf("Roll Number : %d\n",s2.rollnum);
	printf("Percentage : %.2f\n",s2.per);
	
	printf("\nDetails of student 3 :\n");
	printf("Name : %s\n",s3.name);
	printf("Roll Number : %d\n",s3.rollnum);
	printf("Percentage : %.2f\n",s3.per);
}
