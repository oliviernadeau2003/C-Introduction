#include <stdio.h>
#include <unistd.h> // Sleep Function

/*
    TODO

    - Afficher compte de banque

        - Ajouter de l'argent
        - Retirer de l'argent

            - Transférer de l'argent vers un autre compte ?*

    - Créer un compte

    - Gestion de compte

        - Supprimer un/mon compte
        - Ajouter une carte de crédit

    * - Login / Connection / Autentifier

        - UUID ? || ACCOUNT NUMBER ? || USERNAME & PASSWORD

*/

void displayMenu();

int main()
{
    int choice;
    do
    {
        displayMenu();
        printf("Make a choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;

        case 0:
            printf("Thank you !");
            sleep(3);
            break;

        default:
            printf("Invalid choice");
            sleep(1.5);
            break;
        }
    } while (choice != 0);

    return 0;
}

void displayMenu()
{
    printf("============= Country Bank =============\n");
    printf("\n");
    printf(" 1. ~\n");
    printf(" 2. ~\n");
    printf(" 3. ~\n");
    printf(" 4. ~\n");
    printf(" 5. ~\n");
    printf("\n 0. Quit\n");
    printf("\n");
    printf("========================================\n");
}
