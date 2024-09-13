//Create a structure program to store the students id , roll no and class.
#include<stdio.h>
int main()
{
    struct student{
    int id;
    int roll_no;
    int grade;
    };
    struct student s;
    s.id=21146;
    s.roll_no=2107340;
    s.grade=12;
    printf("id=%d\n roll_no=%d\n grade=%d\n",s.id,s.roll_no,s.grade);
}
