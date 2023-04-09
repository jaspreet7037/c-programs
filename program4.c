#include <stdio.h>

struct student
{
   int rollno[5];
   char name[20], address[50];
   float marks;
};

void main()
{
   struct student s1 ,s2;
   printf("enter data for student 1: ");
   scanf("%d %s %f", &s1.rollno , &s1.name , &s1.address, &s1.marks);
   printf("enter data for student 2: ");
   scanf("%d %s %f", &s2.rollno, &s2.name, &s2.address, &s2.marks);
   printf("data of student 1 rollno = %d\n name = %s\n address = %s\n marks = %f", s1.rollno, s1.name, s1.address, s1.marks);
   printf("data of student 2 rollno = %d\n name = %s\n address = %s\n marks = %f", s2.rollno, s2.name, s2.address, s2.marks);
}