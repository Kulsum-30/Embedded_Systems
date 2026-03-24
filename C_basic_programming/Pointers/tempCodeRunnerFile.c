// pointer basics 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int *p; //declaration
    int x=10;
    p=&x; //definition
    printf("reference = %d \n",p); //give the address
    printf("deference = %d ",*p); // give the value
    return 0;
}