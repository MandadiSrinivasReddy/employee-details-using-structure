#include<stdio.h>
struct Employee
{
	char Name[20];
	int Age;
	long long int PhoneNumber;
	double Salary;
};
int main()
{
	int i;
	struct Employee Emp[3];
	for(i=0;i<3;i++)
	{
	    printf("enter employee %d details\n",i+1);
	    printf("enter name\n");
	    scanf("%s",Emp[i].Name);
	     printf("enter Age \n");
	    scanf("%d",&Emp[i].Age);
	    printf("enter Phone Number\n");
	    scanf("%lld",&Emp[i].PhoneNumber);
	     printf("enter Salary\n");
	    scanf("%lf",&Emp[i].Salary);
	}
	printf("Name\t\tAge\t\tPhone Number\t\tSalary");
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("%s\t\t%d\t\t%ld\t\t%lf",Emp[i].Name,Emp[i].Age,Emp[i].PhoneNumber,Emp[i].Salary);
		printf("\n");
	}
	return 0;
}
