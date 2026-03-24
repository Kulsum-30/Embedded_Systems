#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x=10;
    int *p;
    p=&x;
    *p=4;
    printf("%d",*p);
    return 0;
}
