#include <stdio.h>
#include<string.h>
struct student{
    char name[10];
    char branch[5];
    float cgpa;
};
int main()
{
struct student array[5];
int i;
for(i=0;i<5;i++)
{
    printf(" enter the details of student %d\n",i+1);
    printf(" enter name:");
    scanf("%s",array[i].name);
    printf(" enter a branch:");
    scanf("%s",array[i].branch);
    printf(" enter cgpa:");
    scanf(" %f",&array[i].cgpa);
}
printf("\n");
printf("name\tbranch\tcgpa\n");
for(i=0;i<5;i++)
{
    printf("%s\t%s\t%.2f\n",array[i].name,array[i].branch,array[i].cgpa);
}
return 0;
}
