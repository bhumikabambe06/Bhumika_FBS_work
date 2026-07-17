#include<stdio.h>
#include<string.h>
struct Employee{
	int id;
	char name[50];
	float salary;
};
void main()
{
	struct Employee e1,e2;
	e1.id=101;
	strcpy(e1.name,"vaishnavi");
	e1.salary=5000.00;
	printf("Enter id");
	scanf("%d",&e2.id);
	printf("Enter Name:\n");
	scanf("%s",e2.name);
	printf("Enter salary:\n");
	scanf("%f",&e2.salary);
	

	printf("Id:%d\n",e1.id);
	printf("Name:%s\n",e1.name);
	printf("Salary:%f\n",e1.salary);

   
	printf("Id:%d\n",e2.id);
	 printf("Name:%s\n",e2.name);
	printf("Salary:%f\n",e2.salary);
	
	}
