#include "queue.h"

void procedure();

int main(int argc, char **argv) 
{
    procedure();
    return 0;
}

void procedure() 
{
    Queue myQueue = create();
    char ans = 'n';
    int value = 0;
    int opt = 0;
    while (ans == 'n' || ans == 'N')
    {
        printf("\nEscoge una opcion");
        printf("\n1. Agregar");
        printf("\n2. Quitar el Primero");
        printf("\n3. Ver el primero");
        printf("\nOpcion: ");
        scanf("%d", &opt);
        switch(opt) 
        {
            case 1:
                printf("\nEscriba un valor: ");
                scanf("%d", &value);
                enqueue(&myQueue, value);
                break;
            case 2:
                printf("\nEl valor eliminado es: %d", dequeue(&myQueue));
                break;
            case 3:
                printf("\nEl primer valor es: %d", first(myQueue));
                break;
            default:
                printf("\nOpcion Incorrecta");
        }
        printf("\nDesea salir? [s/n]: ");
        fflush(stdin);
        scanf("%c", &ans);
    }
    
}