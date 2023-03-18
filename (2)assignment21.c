/*2. Write a function to take input employee data from the user. [ Refer structure from
question 1 ]*/

#include<stdio.h>
struct info
{
    int id,salary;
    char name[20];
};
int main()
{
    struct info a1;
    printf("Enter your name : ");
    fgets(a1.name,20,stdin);
    printf("Enter you id : ");
    scanf("%d",&a1.id);
    printf("Enter your salary : ");
    scanf("%d",&a1.salary);

    printf("\n%s",a1.name);
    printf("\n%d",a1.id);
    printf("\n%d",a1.salary);

    return 0;
}
