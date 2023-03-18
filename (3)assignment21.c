/*Write a function to display employee data. [ Refer structure from question 1 ]*/

#include<stdio.h>
struct info
{
    int id,salary;
    char name[20];
};
void display(struct info a)
{
    printf("ALL DETAILS OF THE PERSON :-");
    printf("%s",a.name);
    printf("%d",a.id);
    printf("%d",a.salary);
}
int main()
{
    struct info a1;
    printf("Enter your name : ");
    fgets(a1.name,20,stdin);
    printf("Enter you id : ");
    scanf("%d",&a1.id);
    printf("Enter your salary : ");
    scanf("%d",&a1.salary);
    display(a1);
    return 0;
}
