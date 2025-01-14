#include <stdio.h>

int main() {
    float area;
    float PIB;
    float habitantes;
    char Pais[50];

    
    printf("Digite sua área (em km²): \n");
    scanf("%f", &area); 

    
    printf("Digite o número de habitantes (em milhões): \n");
    scanf("%f", &habitantes);

    
    printf("Digite o nome do país: \n");
    scanf(" %[^\n]", Pais); 
    
    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &PIB);

    
    printf("\n--- Dados do País ---\n");
    printf("Nome do País: %s\n", Pais);
    printf("Área: %.2f km²\n", area);
    printf("População: %.2f milhões\n", habitantes);
    printf("PIB: %.2f bilhões\n", PIB);

    return 0;

}
