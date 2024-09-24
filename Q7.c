#include <stdio.h>
#include <stdlib.h>

int main(){

float salario ;
float salarioNovo;
float valorAumento;

printf("\nCALCULO REAJUSTE\n");
system("pause");

#ifdef _WIN32
system("cls");
#endif

printf("INSIRA SEU SALARIO: ");
scanf("%f",&salario);


    if(salario <= 1280 ){
    salarioNovo = salario * 0.20 + salario;
    valorAumento = salarioNovo - salario;
    printf("O SEU SALARIO ERA %.2f\nO PERCENTUAL DE AUMENTO APLICADO FOI DE 20%%\n O VALOR DO SEU AUMENTO FOI DE R$%.2f\nO SEU NOVO SALARIO APOS O AUMENTO É %.2f"
    ,salario,valorAumento,salarioNovo);

}
else if(salario > 1280 && salario <= 2540 ){
    salarioNovo = salario * 0.15 + salario;
    valorAumento = salarioNovo - salario;
    printf("O SEU SALARIO ERA %.2f\nO PERCENTUAL DE AUMENTO APLICADO FOI DE 15%%\n O VALOR DO SEU AUMENTO FOI DE R$%.2f\nO SEU NOVO SALARIO APOS O AUMENTO É %.2f"
    ,salario,valorAumento,salarioNovo);
}
else if(salario > 2540 && salario <= 4160){
    salarioNovo = salario * 0.10 + salario;
    valorAumento = salarioNovo - salario;
    printf("O SEU SALARIO ERA %.2f\nO PERCENTUAL DE AUMENTO APLICADO FOI DE 10%%\n O VALOR DO SEU AUMENTO FOI DE R$%.2f\nO SEU NOVO SALARIO APOS O AUMENTO É %.2f"
    ,salario,valorAumento,salarioNovo);
}
else if(salario > 4160 ){
    salarioNovo = salario * 0.05 + salario;
    valorAumento = salarioNovo - salario;
    printf("O SEU SALARIO ERA %.2f\nO PERCENTUAL DE AUMENTO APLICADO FOI DE 5%%\nO VALOR DO SEU AUMENTO FOI DE R$%.2f\nO SEU NOVO SALARIO APOS O AUMENTO É %.2f"
    ,salario,valorAumento,salarioNovo);
}
return 1;
}