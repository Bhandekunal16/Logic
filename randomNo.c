#include<stdio.h>
#include <stdlib.h>
int main(){
    int* dynamicArray = (int*)malloc(1000 * sizeof(int));
    printf("%d",dynamicArray);
    return 0;
}