#include<stdio.h>
int main(){
    int result = number();
    if(result > 1 && result < 10){
         printf("this is result %d\n", result );
    }
    else{
         printf("condition not meat %d\n", result );
    }
   return 0;
}

int number(){
    int a, b, c, conform;
    printf("if you want to guess a random number :") + scanf("%d", &conform);
    if(conform==1){
        printf("give me any number :") + scanf("%d", &a);
        printf("give me another number :") + scanf("%d", &b);
        c= a + b;
        return c;
    }
    else{
        printf("thank you !");
        return 0;
    }
}

int array(){
    int num= number();
    int Array[10]={1,2,3,4,5,6,7,8,9,10};
    if(num >1 && num < 10){
        return Array[num];
    }
    else{
        return 0;
    }
}