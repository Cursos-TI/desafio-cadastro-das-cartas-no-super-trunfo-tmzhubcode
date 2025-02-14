#include <stdio.h>
int main(){
    
    char cidade[50];
    float cep;
    double populacao;
    int turistico;

    printf("escreva o nome da sua cidade: \n");
    scanf("%s", &cidade);

    printf("Coloque o CEP: \n");
    scanf("%f", &cep);

    printf("qual é o numero da população local? \n");
    scanf("%e", &populacao);

    printf("Quantos pontos turisticos tem no municipio? \n");
    scanf("%d", &turistico);

    return 0
}