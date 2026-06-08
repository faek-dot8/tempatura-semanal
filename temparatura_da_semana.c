#include <stdio.h>
int main(){
    float temperatura[7];
    float maior, menor;
    float media = 0;
    // Loop para ler as temperaturas dos 7 dias
    for (int i = 0; i < 7; i++){
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", &temperatura[i]);
        media += temperatura[i];
    }
    // Calcula a média, maior e menor temperatura
    media /= 7;
    maior = temperatura[0];
    menor = temperatura[0];
    for (int i = 0; i < 7; i++){
        if (temperatura[i] > maior){
            maior = temperatura[i];
        }
    }
    for (int i = 0; i < 7; i++){
        if (temperatura[i] < menor){
            menor = temperatura[i];
        }
    }
    printf("A maior temperatura é: %.2f\n", maior);
    printf("A menor temperatura é: %.2f\n", menor);
    printf("A temperatura média é: %.2f\n", media);
    
}