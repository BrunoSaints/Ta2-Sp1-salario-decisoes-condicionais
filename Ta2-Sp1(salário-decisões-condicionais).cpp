#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale>
using namespace std;
int main(int argc[], char const *argv[])
{
    setlocale(LC_ALL, "portuguese");
    float salario, inss, ir, sal_liquido;

    printf ("\nDigite seu salário bruto: ");
    scanf ("%f", &salario);

    //Condicionais do Inss
    if (salario <= 1693.72)
    {
        inss = salario * 0.08;
    } else 
    if (salario >= 1693.73 && salario <= 2822.90) {
        inss = salario * 0.09;
    } else 
    if (salario >= 2822.91 && salario <= 5646.80) {
        inss = salario * 0.11;
    }
    
    //Condicionais da Ir
    if (salario >= 1903.99 && salario <= 2826.65) {
        ir = salario * 0.075;
    } else 
    if (salario >= 2826.66 && salario <= 3751.05) {
        ir = salario * 0.150;
    }
    if (salario >= 3751.06 && salario <= 4664.68) {
        ir = salario * 0.225;
    } else 
    if (salario >= 4664.69) {
        ir = salario * 0.275;
    }

    sal_liquido = (salario - inss) - ir;

    printf ("\nO valor do desconto do Inss : R$ %.2f \n", inss);
    printf ("\nO valor do desconto da Alíquota Ir : R$ %.2f \n", ir);
    printf ("\nO valor do Salário Líquido : R$ %.2f \n\n", sal_liquido);
        
    return EXIT_SUCCESS;
}   
