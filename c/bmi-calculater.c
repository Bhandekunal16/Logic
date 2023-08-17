#include<stdio.h>
int main(){
    float weight, height, result;
    printf("give me the weight in kg :") + scanf("%f", &weight);
    printf("give me height in the feet :") + scanf("%f", &height);
    result= weight / height* height;
    printf("your bmi is %f\n", result);
    return 0;
}