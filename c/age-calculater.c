#include <stdio.h>
#include <time.h>

int main()
{
    int birthYear;
    time_t currentTime;
    struct tm *timeInfo;

    time(&currentTime);
    timeInfo = localtime(&currentTime);
    int currentYear = timeInfo->tm_year + 1900;

    printf("Enter your birth year: ");
    scanf("%d", &birthYear);

    int age = currentYear - birthYear;
    printf("Your age: %d\n", age);

    return 0;
}
