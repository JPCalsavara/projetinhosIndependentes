#include <stdio.h>

// Função para converter Celsius para Fahrenheit
float celsius_para_fahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}

// Função para converter Celsius para Kelvin
float celsius_para_kelvin(float celsius)
{
    return (celsius + 273.15);
}

// Função para converter Fahrenheit para Celsius
float fahrenheit_para_celsius(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

// Função para converter Fahrenheit para Kelvin
float fahrenheit_para_kelvin(float fahrenheit)
{
    return (fahrenheit + 459.67) * (5 / 9);
}

// Função para converter Kelvin para Celsius
float kelvin_para_celsius(float kelvin)
{
    return (kelvin - 273.15);
}

// Função para converter Kelvin para Celsius
float kelvin_para_fahrenheit(float kelvin)
{
    return (kelvin * (9 / 5) - 459.67);
}
// Função para converter Quilometros para Milhas
float quilometros_para_milhas(float quilometros)
{
    return (quilometros / 1.609344);
}
// Função para converter Milhas para Quilometros
float milhas_para_quilometros(float milhas)
{
    return (milhas * 1.609344);
}
int main()
{
    int escolha, escolhaTemperatura, escolhaMedida;
    float temperatura, medida;
    // for(; <0;)
    printf("Bem-vindo ao conversor de unidades\nDigite o tipo desejado:\n");
    printf("1. Temperatura\n");
    printf("2. Medida\n");
    scanf("%d", &escolha);

    switch (escolha){
    case 1:
    {
        printf("Escolha a unidade de temperatura:\n");
        printf("1. Celsius para Fahrenheit\n");
        printf("2. Celsius para Kelvin\n");
        printf("3. Fahrenheit para Celsius\n");
        printf("4. Fahrenheit para Kelvin\n");
        printf("5. Kelvin para Celsius\n");
        printf("6. Kelvin para Fahrenheit\n");
        scanf("%d", &escolhaTemperatura);

        switch (escolhaTemperatura)
        {
        case 1:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            printf("%.2f Celsius = %.2f Fahrenheit\n", temperatura, celsius_para_fahrenheit(temperatura));
            break;
        case 2:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            printf("%.2f Celsius = %.2f Kelvin\n", temperatura, celsius_para_kelvin(temperatura));
            break;
        case 3:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temperatura);
            printf("%.2f Fahrenheit = %.2f Celsius\n", temperatura, fahrenheit_para_celsius(temperatura));
            break;
        case 4:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temperatura);
            printf("%.2f Fahrenheit = %.2f Kelvin\n", temperatura, fahrenheit_para_kelvin(temperatura));
            break;
        case 5:
            printf("Digite a temperatura em Kelvin: ");
            scanf("%f", &temperatura);
            printf("%.2f Kelvin = %.2f Celsius\n", temperatura, kelvin_para_celsius(temperatura));
            break;
        case 6:
            printf("Digite a temperatura em Kelvin: ");
            scanf("%f", &temperatura);
            printf("%.2f Kelvin = %.2f Fahrenheit\n", temperatura, kelvin_para_fahrenheit(temperatura));
            break;
        default:
            printf("Temperatura inválida.\n");
            break;
        }
        break;
    }
    case 2:
        printf("Escolha a unidade de comprimento:\n");
        printf("1. Quilometros para Milhas");
        printf("2. Milhas para Quilometros");
        scanf("%d", &escolhaMedida);
        switch (escolhaMedida)
        {
        case 1:
            printf("Digite a medida em Quilometros: ");
            scanf("%f", &medida);
            printf("%.2f Quilometros = %.2f Milhas\n", medida, quilometros_para_milhas(medida));
            break;
        case 2:
            printf("Digite a medida em Milhas: ");
            scanf("%f", &medida);
            printf("%.2f Milhas = %.2f Quilometros\n", medida, milhas_para_quilometros(medida));
            break;
        default:
            printf("Medida inválida.\n");
            break;
        }
        break;
    } 
        return 0;
}
