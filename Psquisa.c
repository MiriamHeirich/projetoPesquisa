
	/*Em uma avalia��o de um produto, o cliente responde sua opini�o(1- Satisfat�rio, 2- Indiferente, 3- Insatisfat�rio).
	Fa�a um programa que leia a idade e opini�o e apresente: o n�mero de clientes que responderam satisfat�rio, a m�dia de idade dos clientes que opinaram como satisfat�rio
	 e o n�mero de clientes que responderam insatisfat�rio.
	 O programa se encerra quando for digitado o valor 0 para a idade*/

#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
    int idade, nPessoas, nPessoasI, nPessoasS, opiniao;
    float somaI, media;
    nPessoas = 0;
    nPessoasS = 0;
    nPessoasI = 0;
    somaI = 0;
    printf ("Informe a idade :\n");
    scanf ("%d", &idade);
    while (idade != 0){
        do{
            printf("Informe sua Opini�o:\n 1- Satisfat�rio\n 2- Indiferente\n 3- Insatisfat�rio\n");
            scanf("%d", &opiniao);
            }
            while ((opiniao !=1) && (opiniao !=2) && (opiniao !=3));

            nPessoas ++;

            if (opiniao == 1){
                somaI = somaI + idade;
                
                nPessoas++;
                }
               
                else {
                    if(opiniao == 3)
                    nPessoasI++;
                    }
                    
                    printf("informe a Idade: \n");
                    scanf("%d", &idade);
                    }

    media = (somaI/nPessoasS);
    printf("O numero de pessoas insatisfeitas �: %d", nPessoasI);
    printf("O numero de pessoas Satisfeitas �: %d", nPessoasS);
    printf ("A m�dia de idade das pessoas satisfeitas �:%.2f\n", media);
    return(0);
    
}
