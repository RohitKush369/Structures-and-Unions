//Write a program to define a structure student that contains the following details for 2 students:
//int id
//char name[50]
//int maths
//int science
//int english
#include<stdio.h>
#include<string.h>
int main()
{
    struct student{
    int id;
    char name[50];
    int maths;
    int science;
    int english;
    };
    struct student s1;
    struct student s2;
    s1.id=10;
 strcpy(s1.name,"Rohit");
    s1.maths=89;
    s1.science=98;
    s1.english=90;
    printf("id=%d\n",s1.id);
    printf("name=%s\n",s1.name);
    printf("maths=%d\n",s1.maths);
    printf("science=%d\n",s1.science);
    printf("english=%d\n",s1.english);
     s2.id=20;
strcpy(s2.name,"Ronit");
    s2.maths=99;
    s2.science=78;
    s2.english=86;
    printf("id=%d\n",s2.id);
    printf("name=%s\n",s2.name);
    printf("maths=%d\n",s2.maths);
    printf("science=%d\n",s2.science);
    printf("english=%d\n",s2.english);
}
