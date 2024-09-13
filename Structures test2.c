#include<stdio.h>
int main()
{
    struct xyz{
    char x;
    short y;
    char a;
    long z;
    };
    struct xyz abc;
    abc.x=10;
    abc.y=20;
    abc.a=30;
    abc.z=40;
    printf("x=%d\ny=%d\na=%d\nz=%d\n",abc.x,abc.y,abc.a,abc.z);
    printf("%d\n%d\n%d\n%d\n",&abc.x,&abc.y,&abc.a,&abc.z);
}
