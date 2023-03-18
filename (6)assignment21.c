/*5. Write a function to sort employees according to their salaries [ refer structure from
question 1]*/

#include<stdio.h>
#include<string.h>
struct info
{
    int id,salary;
    char name[20];
};
void sortByName(struct info t[])
{
    struct info t2;
    for(int i = 0;i<10;i++)
    {
        for(int j = 0; j<10-i-1; j++)
        {
            if(strcmp(t[i].name,t[i+1].name) > 0)
            {
                t2 = t[j];
                t[j] = t[j+1];
                t[j+1] = t2;
            }
        }
    }
}
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
    printf("Enter 2 employee details : ");
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
   sortByName(n);
    printf("\nAfter sorted by name :-\n");
    display(n);
    return 0;
}

