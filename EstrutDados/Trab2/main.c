// Trabalho 02 - Listas encadeadas
/* Felipe Barreto Druzian - felipedruzian.aluno@unipampa.edu.br */

#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

int main()
{
    _aluno *head = NULL;
    int opc = 0, tecla = 0;
    
    while (opc!=4)
    {
        system("cls"); // "clear" p/ linux
        printf("------// MENU //------\n");
        printf("1 - Cadastrar aluno\n");
        printf("2 - Exibir alunos\n");
        printf("3 - Deletar aluno\n");
        printf("4 - Sair\n");
        printf("Escolha um opcao: ");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            while (tecla != 10)
            {
                system("cls");
                head = scanList(head);
                printf("\nPressione ENTER para voltar ao menu...");
                fflush(stdin);
                tecla = getchar();
            }
            tecla = 0;
            break;
        
        case 2:
            while (tecla != 10)
            {
                system("cls");
                printList(head);
                printf("\nPressione ENTER para voltar ao menu...");
                fflush(stdin);
                tecla = getchar();
            }
            tecla = 0;
            break;

        case 3:
            while (tecla != 10)
            {
                system("cls");
                head = delList(head);
                printf("\nPressione ENTER para voltar ao menu...");
                fflush(stdin);
                tecla = getchar();
            }
            tecla = 0;
            break;

        case 4:
            head = freeList(head);
            break;

        case 5: //opcao secreta para teste de limpar a lista toda
            head = freeList(head);
            break;

        default:
            printf("Digite uma opcao valida!");
            break;
        }
    }
    
    return 0;
}
