#include <stdio.h>

int main(){
   
    char Estado1;
    char Estado2;
    char A01[20];
    char A02[20];
    char Cidade1;
    char Cidade2;
    int População1; 
    int População2;
    float Área1;
    float Área2;
    float PIB1;
    float PIB2;
    int Pontos_Turisticos1;
    int Pontos_Turisticos2;


    
    printf("Digite o nome do Estado: \n");
    scanf("%s", &Estado1);

    printf("Digite o Código da Carta: \n");
    scanf("%d", &A01);
    
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &Cidade1);
    printf("Digite o número da População: \n");
    scanf("%d", &População1);

    printf("Digite a Área: \n");
    scanf("%f", &Área1); 

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);
    
    printf("Digite o número de Pontos Tusristicos: \n");
    scanf("%d", &Pontos_Turisticos1); 

    printf("Digite o nome do Estado: \n");
    scanf("%s", &Estado2);

    printf("Digite o Código da Carta: \n");
    scanf("%d", &A02);
    
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &Cidade2);

    printf("Digite o número da População: \n");
    scanf("%d", &População2);

    printf("Digite a Área: \n");
    scanf("%f", &Área2); 

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);
    
    printf("Digite o número de Pontos Tusristicos: \n");
    scanf("%d", &Pontos_Turisticos2);


    printf("Estado: %s\n", Estado1);
    printf("Carta: %s\n", A01);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", População1);
    printf("Área: %f\n", Área1);
    printf("PIB: %f\n", PIB2);
    printf("Pontos Turisticos: %d\n", Pontos_Turisticos1);
    printf("Estado: %s\n", Estado2);
    printf("Carta: %s\n", A02);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", População2);
    printf("Área: %f\n", Área2);
    printf("PIB: %f\n", PIB2);
    printf("Pontos Turisticos: %d\n", Pontos_Turisticos2);

    

}