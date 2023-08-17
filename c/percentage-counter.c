#include <stdio.h>
int main()
{
    float number, totalNumber, percentage;
    printf("give the number :") + scanf("%f", &number);
    printf("give the total number :") + scanf("%f", &totalNumber);
    percentage = number / totalNumber * 100;
    printf(" this is your percentage : %f\n", percentage);
    return 0;
}