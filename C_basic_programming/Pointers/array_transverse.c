#include<stdio.h>
int main(int argc, char const *argv[])
{
    int *p;
    int arr[]={1,2,3,4,5};
    p=arr;
    int length = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        printf("Element at index %d = %d \n",i,*(p+i));
    }
    return 0;
}
// For arrays → traversal means going through each element from start to end (or vice versa).

