#include <stdio.h>
#include<string.h>
struct student{
    char name[10];
    int rollno;
    int marks;
};
void print(char *,int,int);
int main()
{
struct student s1={"anu",1,44};
struct student s2;
strcpy(s2.name,"abhi");
s2.rollno=2;
s2.marks=48;

struct student s3;
strcpy(s3.name,"manu");
s3.rollno=4;
s3.marks=40;
print(s1.name,s1.rollno,s1.marks);
print(s2.name,s2.rollno,s2.marks);
print(s3.name,s3.rollno,s3.marks);
}
void print(char *name,int rollno,int marks)
{
    printf("name-%s\t",name);
    printf("rollno-%d\t",rollno);
    printf(" marks-%d\t",marks);
}
