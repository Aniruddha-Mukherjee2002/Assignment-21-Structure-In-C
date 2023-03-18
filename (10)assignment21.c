/*Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student.*/
#include<stdio.h>
struct marks
{
    int roll,chem_marks,math_marks,phy_marks,total,percent;
    char name[20];
};
int setMarks(struct marks m[],int size)
{
    for(int i = 0;i<size; i++)
    {
        printf("\nEnter roll number : ");
        scanf("%d",&m[i].roll);
        printf("Enter name of student : ");
        fflush(stdin);
        fgets(m[i].name,20,stdin);
        printf("\nEnter marks of chemistry : ");
        scanf("%d",&m[i].chem_marks);
        if(m[i].chem_marks<0 || m[i].chem_marks>100)
        {
            printf("Wrong input");
            return 0;
        }
        printf("\nEnter marks of Mathematics : ");
        scanf("%d",&m[i].math_marks);
        if(m[i].math_marks<0 || m[i].math_marks>100)
        {
            printf("Wrong input");
             return 0;
        }
        printf("\nEnter marks of Physics : ");
        scanf("%d",&m[i].phy_marks);
        if(m[i].phy_marks<0 || m[i].phy_marks>100)
        {
            printf("Wrong input");
             return 0;
        }
    }
    return 1;
}
void setPercentage(struct marks m[],int size)
{
    for(int i = 0; i<size; i++)
    {
        m[i].total = (m[i].chem_marks +m[i].math_marks + m[i].phy_marks);
        m[i].percent = m[i].total/3;
    }
}
void display(struct marks m[],int size)
{
    printf("-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,\n");
    printf("Displaying Marks of All Students With Percentage out 100");
    printf("\n-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,-,\n");
    for(int i = 0;i<size; i++)
    {
        printf("ROLL -> %d",m[i].roll);
        printf("\n");
        printf("NAME -> %s",m[i].name);
        printf("CHEMISTRY -> %d",m[i].chem_marks);
        printf("\n");
        printf("MATHEMATICS -> %d",m[i].math_marks);
        printf("\n");
        printf("PHYSICS -> %d",m[i].phy_marks);
        printf("\n");
        printf("PERCENTAGE OUT OF 100 -> %d%%",m[i].percent);
        printf("\n------------------\n");
    }
}
int main()
{
    int N;
    printf("How many number of students you want to enter : ");
    scanf("%d",&N);
    struct marks n[N];
    printf("Enter %d employee details : ",N);
    printf("\n");
    if(setMarks(n,N))
    {
    setPercentage(n,N);
    printf("\n");
    display(n,N);
    printf("\n");
    }
    else
    {
        printf("Visit again");
    }
    return 0;
}

