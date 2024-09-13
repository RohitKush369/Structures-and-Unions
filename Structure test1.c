#include<stdio.h>
int main()
{
    struct xyz{
     char x;//1 unused byte
    short y; //no unused byte
    char a;//no unused byte
    long z;//3 unused byte
    };
    struct xyz abc;
    printf("%d",sizeof(abc));

}
