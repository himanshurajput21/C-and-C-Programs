#include <stdio.h>
struct student{
    int rollno;
    char name[25];
    int age;
};
struct student inputdata();
void showdata(struct student);
main()
{
    struct student s2;
    s2=inputdata();
    showdata(s2);
}
struct student inputdata()
{
    struct student s;
    printf("Enter Student Information:\n");
    printf("\nEnter name of student:");
    gets(s.name);
    printf("Enter Roll no. of student:");
    scanf("%d",&s.rollno);
    printf("Enter age of student:");
    scanf("%d",&s.age);
    return(s);
}
void showdata(struct student s1)
{
    printf("\nStudent Information:");
    printf("\n\nName:");
    puts(s1.name);
    printf("Roll no.:%d",s1.rollno);
    printf("\nAge:%d",s1.age);
}
