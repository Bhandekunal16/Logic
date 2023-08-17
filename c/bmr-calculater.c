#include <stdio.h>
int main()
{
    float weight, height, age, result;
    printf("give me the weight in kg :") + scanf("%f", &weight);
    printf("give me height in the feet :") + scanf("%f", &height);
    printf("give me age :") + scanf("%f", &age);
    result = 13.397 * weight + 4.799 * height - 5.677 * age + 88.362;
    printf("your bmi is %f\n", result);
    return 0;
}