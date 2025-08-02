#include "../include/header.h"
#include <stdio.h>
#include <stdlib.h> 

int main()
{
	int choix;
  do {
   	printf("\n--- MENU DE LA CALCULATRICE ---\n");
    printf("1. FAIRE UNE ADDITION\n");
    printf("2. FAIRE UNE SOUSTRACTION\n");
    printf("3. FAIS UNE MULTIPLICATION\n");
    printf("4. FAIS UNE DIVISION\n");
    printf("5. FAIS UN MODULO\n");
    printf("6. Quitter\n");
    printf("Choisissez une option : ");

    scanf("%d", &choix);
    while (getchar() != '\n' && getchar() != EOF)
      ;

    switch (choix) {
    case 1:
		ft_addition();
      break;
    case 2:
		ft_sous();
      break;
    case 3:
		ft_mul();
      break;
    case 4:
		ft_div();
      break;
	case 5: 
		ft_mod();
		break;
	case 6:
		printf("bye !\n");
		break;
    default:
      printf("Option invalide bouffon\n");
    }
  } while (choix != 6);
  return 0;
}
