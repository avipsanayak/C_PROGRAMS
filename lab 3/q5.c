//Q5.WAP to store n employee’s data such as employee name, gender, designation, department, basic pay. Calculate the gross pay of each employees as follows: Gross pay = basic pay + HR + DA HR=25% of basic and DA=75% of basic by passing structure to a function.

#include<stdio.h>
struct employee
{
    char name[10];
    char gender[5];
    char desig[10];
    char dept[10];
    int basic;
}emp[100];
void result(struct employee * emp,int a);
int main()
{
    int num;
    printf("No. of employees:");
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        printf("Enter name of employee %d:",i+1);
        scanf("%s",&emp[i].name);
        printf("Enter gender of employee %d:",i+1);
        scanf("%s",&emp[i].gender);
        printf("Enter designation of employee %d:",i+1);
        scanf("%s",&emp[i].desig);
        printf("Enter department of employee %d:",i+1);
        scanf("%s",&emp[i].dept);
        printf("Enter basic salary of employee %d:",i+1);
        scanf("%d",&emp[i].basic);
    }
    result(emp,num);   
    return 0;
}
void result(struct employee* emp,int a)
{
    float da,hr,gross;
    for (int i = 0; i < a; i++)
    {
        da=0.75*emp[i].basic;
        hr=0.25*emp[i].basic;
        gross=emp[i].basic+da+hr;
        printf("Name:%s | Gender:%s | Designation:%s | Department:%s | Basic Salary:%d | Gross Salary:%f\n",emp[i].name,emp[i].gender,emp[i].desig,emp[i].dept,emp[i].basic,gross);
    }
}