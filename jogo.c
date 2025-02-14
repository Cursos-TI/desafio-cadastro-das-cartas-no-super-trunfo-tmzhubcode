#include <stdio.h>
int main(){

    printf("Esta é uma pesquisa baseada no jogo SUPER TRUNFO, siga as instruções para jogar ok!\n");
    printf("                                                                                   \n");
    printf("Vamos coletar algumas informações da sua cidade e comparar com outra cidade, a cidade que mais obtiver pontos ganha!\n");
    printf("                                                                                   \n");
    printf("                                                                                   \n");
    printf(" vamos começar!\n");

    char nome[20];
    printf("Nome da sua cidade:\n");
    scanf("%c", &nome);
    int Nota;
    printf("De 0 á 10 qual a nota para os locais publicos da sua cidade?\n");
    scanf("%d", &Nota);
    int nOta;
    printf("De 0 á 10 qual a nota que voce da para as festividades da sua cidade?\n");
    scanf("%d", &nOta);
    int noTa;
    printf("De 0 á 10 qual a nota que voce da para a saude publica da sua cidade?\n");
    scanf("%d", &noTa);
    int notA;
    printf("De 0 á 10 qual a nota que voce da para a questão comercial e oportunidades de trabalho na sua cidade?\n");
    scanf("%d", &notA);
    printf("                                                                                   \n");
    printf("                                                                                   \n");
    printf("                                                                                   \n");
    printf("Agora vamos comparar com alguma cidade que voce ja tenha visitado ou ouvido falar e gostou!\n");
    printf("                                                                                   \n");
    printf("                                                                                   \n");
    char Nome[40];
    printf("qual o nome da cidade?\n");
    scanf("%c", &Nome);
    int n;
    printf("De 0 á 10 qual a nota para os locais publicos desta cidade?\n");
    scanf("%d", &n);
    int o;
    printf("De 0 á 10 qual a nota que voce da para as festividades desta cidade?\n");
    scanf("%d", &o);
    int t;
    printf("De 0 á 10 qual a nota que voce da para a saude publica desta cidade?\n");
    scanf("%d", &t);
    int a;
    printf("De 0 á 10 qual a nota que voce da para a questão comercial e oportunidades de trabalho nesta cidade?\n");
    scanf("%d", &a);
    printf("                                                                                   \n");
    printf("                                                                                   \n");
    printf("compare as notas e nos fale qual cidade ganhou o jogo!\n");
    printf("                                                                                   \n");
    printf("                                                                                   \n");
    printf("                                                                                   \n");
    printf("Cidade: %d\n", nome);
    printf("Nota para locais publicos: %d\n", Nota);
    printf("Nota para festividades: %d\n", nOta);
    printf("Nota para saude publica: %d\n", noTa);
    printf("Nota para comercial e geração de empregos %d\n", notA);
    printf("                                                                                   \n");
    printf("                                                                                   \n");
    printf("Cidade: %d\n", Nome);
    printf("Nota para locais publicos: %d\n", n);
    printf("Nota para festividades: %d\n", o);
    printf("Nota para saude publica: %d\n", t);
    printf("Nota para comercial e geração de empregos %d\n", a);
    printf("                                                                                   \n");
    printf("                                                                                   \n");
    char nOme[30];
    printf("Iae, qual cidade ganhou no seu conceito?\n");
    scanf("%c", &nOme);
    printf("                                                                                   \n");
    printf("                                                                                   \n");
    printf("obrigado por participar!\n");
    printf("                                                                                   \n");
    printf("                                                                                   \n");
    printf("                                                                                   \n");


return 0;
}