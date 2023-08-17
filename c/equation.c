#include <stdio.h>
int main()
{
    printf("3x + 2y = 10 this is equation ");
    float x, y;
    printf("give me number for x :") + scanf("%f", &x);
    // 3x + 2y = 10;
    y = (10 - 3 * x) / 2;
    x = (10 - 2 * y) / 3;
    printf("value of y : %f\n", y);
    printf("value of x : %f\n", x);
    int main2 = sec();
    int main3 = three();
    return 0;
}

int sec()
{
    printf("2x - 4y = 10 this is equation ");
    float x, y;
    printf("give me number for x :") + scanf("%f", &x);
    // 2x - 4y = 4
    y = (4 - 2 * x) / 4;
    x = (4 - 4 * y) / 2;
    printf("value of y : %f\n", y);
    printf("value of x : %f\n", x);
    return 0;
}

int three()
{
    printf("2x + 3y = 8 this is equation ");
    float x, y;
    printf("give me number for x :") + scanf("%f", &x);
    // 2x - 4y = 4
    y = (8 - 2 * x) / 3;
    x = (8 - 3 * y) / 2;
    printf("value of y : %f\n", y);
    printf("value of x : %f\n", x);
    return 0;
}