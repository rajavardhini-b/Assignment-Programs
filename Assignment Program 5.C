#include <stdio.h>
int main()
{
    int age, creditscore;
    float income;
    printf("Enter age,income and creditscore : ");
    scanf("%d%f%d", &age, &income, &creditscore);
    if (age >= 21 && age <= 60)
    {
        if (income >= 25000)
        {
            if (creditscore >= 700)
            {
                printf("Loan approved");
            }
            else
            {
                printf("Loan rejected: creditscore below 700");
            }
        }
        else
        {
            printf("Loan rejected: income below Rs.25,000");
        }
    }
    else
    {
        printf("Loan rejected: age not in 21 to 60");
    }
    return 0;
}
