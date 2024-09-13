#include<stdio.h>
int main()
{
    union xyz{
    char x;
    short y;
    long z;
    };
    union xyz abc;
    abc.x=10;
    abc.y=20;
    abc.z=40;
    printf("x=%d\ny=%d\nz=%d\n",abc.x,abc.y,abc.z);//Compiler allocates the biggest
    // data type size at all other data types place
     printf("%d\n%d\n%d\n",&abc.x,&abc.y,&abc.z);
}
