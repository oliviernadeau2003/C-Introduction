#include <stdio.h>

// °F = (°C * 9/5) + 32
void celcius_to_farenheit(float celcius, float *result)
{
    *result = ((celcius * 9 / 5) + 32);
}

// °C = (°F - 32) * 5/9
void farenheit_to_celcius(float farenheit, float *result)
{
    *result = ((farenheit - 32) * 5 / 9);
}

int main()
{
    float result;
    float input;

    printf("\nEnter The Farenheit Temperature : ");
    scanf("%f", &input);
    farenheit_to_celcius(input, &result);
    printf("Result: %.2f°F\n", result);

    printf("\nEnter The Celcius Temperature : ");
    scanf("%f", &input);
    celcius_to_farenheit(input, &result);
    printf("Result: %.2f°C\n", result);

    return 0;
}