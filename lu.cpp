#include<stdio.h>
int main()
{
    union a
    {
        int i;
        char ch[2];
    };
    union a u;
    u.ch[0] = 'A';
    u.ch[1] = 'A';
    //u.ch[2] = 'b';
    
    //printf("%d, %d, %d\n", gh[0], gh[1], u.i);
    printf("%d, %d, %d\n", u.ch[0], u.ch[1], u.i);
    return 0;
}
