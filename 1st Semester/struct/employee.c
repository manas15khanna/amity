#include <stdio.h>
struct employee
{
    char    name[100];
    int     empId;
    float   salary;
    char    dep[100];
    int     age;
};
int main()
{
  int x;
  int i=0;
  printf("Enter the number of employees:");
  scanf("%d", &x);
  struct employee emp[x];
  emp[0].empId=0;
  for(int i=0;i<x;i++){
    printf("\nEnter details :\n");
    printf("Name ?:");          scanf("%s",emp[i].name);
    printf("ID ?:");            scanf("%d",&emp[i].empId);
    printf("Salary ?:");        scanf("%f",&emp[i].salary);
    printf("Department ?:");    scanf("%s",emp[i].dep);
    printf("Age ?:");           scanf("%d",&emp[i].age);
  }
  float maxSalary = emp[0].salary;
  int maxSalaryIndex = 0;
  printf("ID\tName\tDepartment\tAge\tSalary\n");
  for (int i=0;i<x ; i++) {
    printf("%d\t%s\t%s\t\t%d\t%f\n", emp[i].empId, emp[i].name, emp[i].dep, emp[i].age, emp[i].salary);
  }
  for (int i = 1; i < x; i++)
    {
        if (emp[i].salary > maxSalary)
        {
            maxSalary = emp[i].salary;
            maxSalaryIndex = i;
        }
    }
    // Print details of the person with the maximum salary
    printf("\nPerson with the maximum salary:\n");
    printf("ID: %d\nName: %s\nDepartment: %s\nAge: %d\nSalary: %f\n", 
           emp[maxSalaryIndex].empId, emp[maxSalaryIndex].name, 
           emp[maxSalaryIndex].dep, emp[maxSalaryIndex].age, emp[maxSalaryIndex].salary);
}
