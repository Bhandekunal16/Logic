#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g,h,i,j,k,l,m;
    printf("Please press 1 if you want to generate a table, press 2 if you want to calculate the square root of a number, and press 3 if you want to find the cube of a number, and press 4 if you want to add two number, and if you want to subtraction of two number then press 5, and if you want to multiply then press 6, and if you want to division then press 7.")+ scanf("%d", &m);
    
    if(m==1){
         printf("give me a number :") + scanf("%d", &a);
    b=a*1;
    c=a*2;
    d=a*3;
    e=a*4;
    f=a*5;
    g=a*6;
    h=a*7;
    i=a*8;
    j=a*9;
    k=a*10;
        printf("table of :%d, %d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",a,b,c,d,e,f,g,h,i,j,k,l);
    }
    
    if(m==2){
        printf("give me a number :") + scanf("%d", &a);
        b=a*a;
        printf("your square is : %d\n",b);
    }
    
    if(m==3){
        printf("give me a number :") + scanf("%d", &a);
        b=a*a*a;
        printf("your cube is : %d\n",b);
    }
    
    if(m==4){
        printf("give me a number :") + scanf("%d", &a);
        printf("give me a number :") + scanf("%d", &b);
        c=a+b;
        printf("your addition is : %d\n",c);
    }
    
    if(m==5){
        printf("give me a number :") + scanf("%d", &a);
        printf("give me a number :") + scanf("%d", &b);
        c=a-b;
        printf("your subtraction is : %d\n",c);
    }
    
    if(m==6){
        printf("give me a number :") + scanf("%d", &a);
        printf("give me a number :") + scanf("%d", &b);
        c=a*b;
        printf("your multiplication is : %d\n",c);
    }
    
    if(m==7){
        printf("give me a number :") + scanf("%d", &a);
        printf("give me a number :") + scanf("%d", &b);
        c=a/b;
        printf("your division is : %d\n",c);
    }
    
    else{
        printf("thank for your time");
    }
    return 0;
}