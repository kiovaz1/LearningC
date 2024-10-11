#include <stdio.h>

int main (){
int salarios[12] = { 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 11000, 12000};
int resultado = 0;
for (int i = 0; i < 12; i++ ){
resultado += salarios[i];
printf("Salario Mensal do indivíduo %d é %d.\n",i+1, salarios[i]);
}

printf("A soma total anual dos salarios é: %d\n", resultado) ;
return 0;
}
