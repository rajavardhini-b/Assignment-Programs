#include <stdio.h>
int main() 
{
    float weight, height, BMI;
    printf("Enter the weight and height:");
    scanf("%f%f", &weight, &height);
    if (weight <= 0 || height <= 0) 
    {
       printf("Invalid input");
       return 0;
    }
    BMI = weight / (height * height);
    printf("BMI = %.2f\n", BMI);
    if (BMI < 18.5)
        printf("Underweight");
    else if (BMI < 25)
        printf("Normal");
    else if (BMI < 30)
        printf("Overweight");
    else
        printf("Obese");
}
