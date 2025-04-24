#include  <stdio.h>

int main(){


// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

    int opcao;
    char estado[5];
    char codigo[5];
    char cidade [10];
    int populacao;
    float area;
    int PIB;
    int pontos;

    printf("digite o seu estado.\n");
    scanf("%s", &estado);

    printf("digite o codigo: \n");
    scanf("%s", &codigo);
    
    printf("digite sua cidade: \n");
    scanf("%s", &cidade);
    
    printf("digite populacao: \n");
    scanf("%d", &populacao);
        
    printf("digite area: \n");
    scanf("%f", &area);
    
    printf("digite PIB: \n");
    scanf("%d", &PIB);
    
    printf("digites pontos turisticos: \n");
    scanf("%d", &pontos);
    
    float densidade =(float) populacao/area; //variavel;
    float PIBpercapita =(float) PIB / populacao; //variavel
    
    printf("estado: %s \n",estado);
    printf("codigo: %s \n",codigo);
    printf("cidade: %s \n",cidade);
    printf("populacao: %d \n",populacao);
    printf("area: %.2f Km² \n",area);
    printf("PIB: %d bilhões de reais \n",PIB);
    printf("pontos turisticos: %d \n",pontos);
    printf("desidade popolacional:%.2f hab/Km²\n",densidade);
    printf("PIB per Capita: %.2f reais \n", PIBpercapita);
    
    char estado2[5];
    char codigo2[5];
    char cidade2 [10];
    int populacao2;
    float area2;
    int PIB2;
    int pontos2;
    
    printf("digite o estado: \n");
    scanf("%s",&estado2);
    
    printf("digite o codigo: \n");
    scanf("%s", &codigo2);
    
    printf("digite sua cidade: \n");
    scanf("%s", &cidade2);
    
    printf("digite populacao: \n");
    scanf("%d", &populacao2);
        
    printf("digite area: \n");
    scanf("%f", &area2);
    
    printf("digite PIB: \n");
    scanf("%d", &PIB2);
    
    printf("digites pontos turisticos: \n");
    scanf("%d", &pontos2);
    
    float densidade2 =(float) populacao2/area2; //variavel
    float PIBpercapita2 =(float) PIB2 / populacao2; //variavel
    
    printf("estado: %s \n",estado2);
    printf("codigo: %s \n",codigo2);
    printf("cidade: %s \n",cidade2);
    printf("populacao: %d \n",populacao2);
    printf("area: %f Km² \n",area2);
    printf("PIB: %d bilhões de reais \n",PIB2);
    printf("pontos turisticos: %d \n",pontos2);
    printf("desidade populacional:%.2f hab/Km²\n",densidade2);
    printf("PIB per Capita: %.2f reais \n", PIBpercapita2);
    
    float inverso = 1/densidade;
    float inverso2 =1/densidade2;
    
    float ataque1 =(float) populacao+area+PIB+pontos+PIBpercapita;//variavel super poder carta 1
    float ataque2 =(float) populacao2+area2+PIB2+pontos2+PIBpercapita2;//variavel super poder carta 2

  printf(" escolha um combate\n");
  scanf("%d",&opcao);
switch (opcao)
{
case 1: (populacao>populacao2);

    printf ("você Escolheu combate população\n");
    printf("população carta 1 %d; população carta 2 %d \n",populacao,populacao2); 

if (populacao>populacao2){

  printf ("carta 1 venceu COM: %d de população. \n" ,populacao);
} else if (
  printf ("carta 2 venceucom: %d de população. \n",populacao2));
else {
  printf ("empato\n");}

    break;

case 2:(area>area2);
    printf ("você Escolheu combate àrea\n");
  printf("Àrea carta 1 %2.f;Àrea carta 2 %2.f \n",area,area2);
 if (area>area2){
  printf ("carta 1 venceu\n");
} else if (
  printf ("carta 2 venceu\n"));
else {
  printf ("empato\n");
}
    break;

case 3:(PIB>PIB2);
    printf ("você Escolheu combate PIB\n");
  printf("PIB carta 1 %d;PIB carta 2 %d \n",PIB,PIB2);
 if (PIB>PIB2){
  printf ("carta 1 venceu\n");
} else if (
  printf ("carta 2 venceu\n"));
else {
  printf ("empato\n");
}
    break;

case 4:(pontos>pontos2);
    printf ("você Escolheu combate pontos turisticos\n");
    printf("Pontos turísticos carta 1 %d;Pontos turísticos carta 2 %d \n",pontos,pontos2);
 if (pontos>pontos2){
  printf ("carta 1 venceu\n");
} else if (
  printf ("carta 2 venceu\n"));
else {
  printf ("empato\n");
}
    break;

case 5:(inverso<inverso2);

    printf ("você Escolheu combate densidade\n");
    printf("densidade carta 1 %f; população carta 2 %f \n",inverso,inverso2);
 if (inverso<inverso2){
  printf ("carta 1 venceu\n");
} else if (
  printf ("carta 2 venceu\n"));
else {
  printf ("empato\n");
}
    break;
default: printf("opição invalida\n");
    break;
}


 return 0;
}
    
