
#include<stdio.h>
int main()
{
    struct xyz{
    char x;
    short y;
    long z;
    };
  struct xyz abc;
    abc.x=10;
    abc.y=20;
    abc.z=40;
    printf("x=%d\ny=%d\nz=%d\n",abc.x,abc.y,abc.z);
    printf("%d\n",sizeof(abc));// here is a wasted byte thats why the size is 8 byte.//
     printf("%d\n%d\n%d\n",&abc.x,&abc.y,&abc.z);
}
