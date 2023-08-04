#include<stdio.h>
int main(){
    int a;
    printf("if you want to convert min to hour then press 1 & if you want to convert hour to min then press 2 :") + scanf("%d", &a);
    if(a ==1){
    float min, hour;
    printf("give me value for hour :") + scanf("%f", &min);
    hour= min /60;
    printf("hour : %f\n", hour);
    }
    if(a ==2){
    float min, hour;
    printf("give me value for hour :") + scanf("%f", &hour);
    min = hour * 60;
    printf("hour : %f\n", min);
    }
    else {
        printf("thank you");
    }
    return 0;
}