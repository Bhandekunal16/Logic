#include<stdio.h>
#include <stdlib.h>
int main(){
    int a,b;
    printf("if you want to add your num print 1 :") + scanf("%d", &a);
    if(a==1){
        printf("enter your number" ) + scanf("%d", &b);
        int* dynamicArray = (int*)malloc( b* sizeof(int));
        printf("%d",dynamicArray);
    }
    else {
        int* dynamicArray2 = (int*)malloc(1000 * sizeof(int));
        printf("%d",dynamicArray2);
    }
   return 0;
}