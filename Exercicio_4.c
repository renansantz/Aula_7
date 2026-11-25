#include <stdio.h>

float celsiusParaFahrenheit(float celsius) {
    return (9 * celsius) / 5 + 32;
}

int main() {
    float c, f;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &c);

    f = celsiusParaFahrenheit(c);

    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit\n", c, f);

    return 0;
}
