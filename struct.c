#include <stdio.h>
struct student{
    char name[20];
    int rollno;
    float marks;
};
int main()
{
    int i;
    struct student a[10];
    for(i=0;i<10;i++)
    {
        printf(" enter the name  rollno marks\n");
        scanf("%s %d %.2f",a[i].name,&a[i].rollno,&a[i].marks);
    }
    for(i=0;i<10;i++)
    printf(" %s\t%d\t%f\n",a[i].name,a[i].rollno,a[i].marks);
    return 0;
}
