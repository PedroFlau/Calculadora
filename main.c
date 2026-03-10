#include <stdio.h>
#include <math.h>

int main()
{
    float num1;
    char operacao;
    float num2;
    float resultado;


    printf("---------------------------\n");
    printf("        calculadora        \n");
    printf("---------------------------\n");

    scanf("%f%c%f", &num1, &operacao, &num2);

    if(operacao == '+') {
        resultado = num1 + num2;
    }
    else if(operacao == '-') {
        resultado = num1 - num2;
    }
    else if(operacao == '*') {
        resultado = num1 * num2;
    }
    else if(operacao == '/') {
        if(num2 == 0)
        {
            printf("Erro: divisao por zero!\n");
            return 1;
        }
        resultado = num1 / num2;
    }
    else if(operacao == '^') {
        resultado = pow(num1, num2);
    }
    else {
        printf("Erro: operador invalido!\n");
        return 1;
    }
    

        printf("= %.2f\n", resultado);



    return 0;
}