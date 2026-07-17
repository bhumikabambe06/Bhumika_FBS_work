#include<stdio.h>
#include<string.h>
struct Admin{
	int id;
	char name[50];
	float salary;
	float allowance;
};
void main()
{
	struct Admin a1,a2;
	a1.id=101;
	strcpy(a1.name,"Bhumika");
	a1.salary=50000.0;
	a1.allowance=4500;
	
	printf("Enter id:");
	scanf("%d",&a2.id);
	printf("Enter name");
	scanf("%s",a2.name);
	printf("Enter salary:");
	scanf("%f",&a2.salary);
	printf("Enter allowance");
	scanf("%f",&a2.allowance);
	
	printf("Id:%d\n",a1.id);
	printf("Name:%s\n",a1.name);
	printf("Salary:%f\n",a1.salary);
	printf("Allowance:%f\n",a1.allowance);
	
	printf("Id:%d\n",a2.id);
	printf("Name:%s\n",a2.name);
	printf("Salary:%f\n",a2.salary);
	printf("Allowance:%f\n",a2.allowance);
	
	
	
}
