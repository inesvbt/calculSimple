#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int montantTotal = 0, sommePaye = 0, monnaieRendue = 0;
   int billet20 = 0, billet10 = 0, billet5 =0, piece1 = 0, piece2 = 0;

    printf("Entrez le total des achats: ");
    scanf("%d", &montantTotal);
    printf("Entrez la somme payee: ");
    scanf("%d", &sommePaye);

        if (sommePaye < montantTotal)
        {
            printf("Il manque de l'argent pour pouvoir payer le montant total !!\n");
            return -1;
        }
        else if (sommePaye == montantTotal)
        {
            printf("Aucune monnaie a rendre!");
            return -1;
        }
        else
        {
            monnaieRendue = sommePaye - montantTotal;

            billet20 = monnaieRendue / 20;
            monnaieRendue %= 20;

            billet10 = monnaieRendue / 10;
            monnaieRendue %= 10;

            billet5 = monnaieRendue / 5;
            monnaieRendue %= 5;

            piece1 = monnaieRendue / 1;
            monnaieRendue %= 1;

            piece2 = monnaieRendue / 2;
            monnaieRendue %= 2;

            printf("___MONNAIE A RENDRE___");

                if (billet20 > 0)
                {
                    printf("Billet(s) de 20 euros: %d\n", billet20);
                }
                if (billet10 > 0)
                {
                    printf("Billet(s) de 10 euros: %d\n", billet10);
                }
                if (billet5 > 0)
                {
                    printf("Billet(s) de 5 euros: %d\n", billet5);
                }
                if (piece1 > 0)
                {
                    printf("Piece(s) de 1 euro: %d\n", piece1);
                }
                if (piece2 > 0)
                {
                    printf("Piece(s) de 2 euros: %d\n", piece2);
                }
        }

    return 0;
}
