//Write a program to store information of 10 students and display them using structure.
#include<stdio.h>
struct info
{
    int id,salary;
    char name[20];
};
void display(struct info in[])
{
    for(int i = 0; i<10;i++)
    {
        printf("\n");
        printf("\nID => %d",in[i].id);
        printf("\nNAME => %s",in[i].name);
        printf("SALARY => %d",in[i].salary);
        printf("\n--------------------");

    }
}
int main()
{
    struct info n[10];
    printf("Enter 10 employee details : ");
    for(int i = 0;i<10;i++)
    {
        printf("\nEnter id : ");
        scanf("%d",&n[i].id);
        printf("\nEnter name : ");
        fflush(stdin);
        fgets(n[i].name,20,stdin);
        printf("\nEnter salary : ");
        scanf("%d",&n[i].salary);
    }
}
