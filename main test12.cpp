#include<stdio.h>
#include<string.h>
struct employee
{
    char name[35];
    char ID[10];
    char experience[10];
    int salary[5];
};
int main()
{
    int i=0;
    struct employee e1;
    printf("enter name:");
    gets(e1.name);
    printf("enter ID:");
    gets(e1.ID);
    printf("enter experience:");
    gets(e1.experience);
    for(i=0;i<5;i++)
    {
        printf("\n enter salary of employee %d=",i+1);
        scanf("%d",&e1.salary[i]);
    }
    printf("\n name:%s",e1.name);
    printf("\n ID:%s",e1.ID);
    for(i=0;i<5;i++)
    {
        printf("\n salary of employee %d:%f",i+1,e1.salary[i]);
    }
    return 0;

}
