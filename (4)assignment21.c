/* 4. Write a function to find the highest salary employee from a given array of 10
employees. [ Refer structure from question 1]*/
#include<stdio.h>
struct structure
{
    int id;
    char name[20];
    int salary;
};
void getHighestSalary(struct structure s[])
{
    int max = s[0].salary;
    for(int i =1; i<=10; i++)
    {
        if(max<s[i].salary)
        {
           max = s[i].salary;
        }
    }
    printf("\nHighest Salary is : %d\n",max);

}
int main()
{
    struct structure s[10];
    printf("Enter 10 employees details : ");
    for(int i = 0; i<10; i++)
    {
        printf("\nEnter name : ");
        fflush(stdin);
        fgets(s[i].name,20,stdin);
        printf("\nEnter id : ");
        scanf("%d",&s[i].id);
        printf("\nEnter salary : ");
        scanf("%d",&s[i].salary);
    }
    getHighestSalary(s);
    return 0;
}
