int main() {
    #include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

    
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
    
        float CARTA1 =(float) populacao+area+PIB+pontos+PIBpercapita;//variavel super poder carta 1
        float CARTA2 =(float) populacao2+area2+PIB2+pontos2+PIBpercapita2;//variavel super poder carta 2
    
        printf ("população carta 1: %d\n",populacao);
        printf ("população carta 2:%d\n",populacao2);
        if (populacao>populacao2){
            printf ("carta 1 é com maior população.\n)");}
        else { printf("carta 2 é com maior população.\n");}

        printf ("área da carta 1: %f\n",area);
        printf ("área da carta 2: %f\n",area2);
        if ( area>area2) {
            printf("carta 1 é com maior área .\n");}
        else { printf("carta 2 é com  maior área.\n");}

        printf("o PIB da carta 1:%d\n",PIB);
        printf ("o PIB da carta 2:%d\n",PIB2);
        if (PIB>PIB2) 
            {printf("carta 1 tem o maior PIB.\n");}
        else {printf("carta 2 tem o maior PIB.\n");}

        printf("pontos turisticos carta 1: %d\n",pontos);
        printf("pontos turisticos carta 2:%d\n",pontos2);
        if (pontos>pontos2){
            printf("carta 1 tem mais pontos túristicos.\n");}
        else{printf("carta 2 tem mais pontos túristicos.\n");}

        printf("densidade carta 1:%2.f\n",densidade);
        printf("desidade carta 2:%2.f\n",densidade2);
         if (inverso<inverso2){
            printf ("carta 1 tem menor densidade.\n");}
        else{printf("carta 2 tem menor densidade.\n");}

        printf("PIB percapita carta 1: %2.f\n", PIBpercapita);
        printf("PIB percpita carta 2: %2.f\n",PIBpercapita2);
        if(PIBpercapita>PIBpercapita2){
            printf("carta 1 tem maior PIB percapita.\n");}
        else{printf("carta 2 tem maior PIB percapita.\n");}    

         
         if (CARTA1>CARTA2){
            printf ("carta 1 é a vencedora");}
         else {printf("carta 2 é a vencedora");}

            return 0;
        }
    

        
        
    
    
        
    
    
    

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    
