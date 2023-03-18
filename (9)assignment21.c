/*Write a program to store information of n students and display them using structure*/
#include<stdio.h>
struct info
{
    int id,salary;
    char name[20];
};
void display(struct info in[],int size)
{
    for(int i = 0; i<size;i++)
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
    int N;
    printf("How many number of students you want to enter : ");
    scanf("%d",&N);
    struct info n[N];
    printf("Enter %d employee details : ",N);
    for(int i = 0;i<N;i++)
    {
        printf("\nEnter id : ");
        scanf("%d",&n[i].id);
        printf("\nEnter name : ");
        fflush(stdin);
        fgets(n[i].name,20,stdin);
        printf("\nEnter salary : ");
        scanf("%d",&n[i].salary);
    }
    display(n,N);
}

