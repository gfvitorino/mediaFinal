#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

float notaExercicios, notaProva, notaPortifolio, mediaFinal;

setlocale(LC_ALL,"portuguese");

printf("Digite a nota dos exercícios: \n");
scanf("%f",&notaExercicios);

printf("Digite a nota da prova: \n");
scanf("%f",&notaProva);

printf("Digite a nota do Portifolio: \n");
scanf("%f",&notaPortifolio);

mediaFinal = ((notaExercicios) * 0.2) + ((notaProva) * 0.3) + ((notaPortifolio) * 0.5) / 3;

printf("Sua média final é: %.2f\n",mediaFinal);

system ("pause");
return 0;
}


