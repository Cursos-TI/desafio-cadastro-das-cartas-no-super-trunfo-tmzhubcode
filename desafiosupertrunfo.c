#include <stdio.h>
int main(){
    
    char cidade[50];
    float cep;
    double populacao;
    double area;
    int turistico;

    printf("SUPER TRUMFO .......... PREPARE-SE");

    printf("escreva o nome da sua cidade: \n");
    scanf("%s", &cidade);

    printf("Coloque o CEP: \n");
    scanf("%d", &cep);

    printf("Qual é o numero da população do municipio? \n");
    scanf("%e", &area);

    printf("qual é o numero da população local? \n");
    scanf("%e", &populacao);

    printf("Quantos pontos turisticos tem no municipio? \n");
    scanf("%d", &turistico);

    printf("apresentamos seus dados e informamos esta é uma pesquisa para comparar algumas caracteristicas de municipios e seus beneficios!");

    printf("Nome da cidade: %s \n", cidade);
    printf("CEP: %d", cep);
    printf("Area: %e \n", area);
    printf("quantidade habitacional: %d \n", populacao);
    printf("quantidade de locais turisticos: %d \n", turistico);

    printf("obrigado pela sua participação!");

    return 0

}