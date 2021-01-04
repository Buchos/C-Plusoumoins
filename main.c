#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char c_rep;
    int i_nbreMys=0;
    int i_choix=0;
    int i_victoire=0;   /*flag de victoire 0 défaire 1 victoire*/
    int i_essai=0;

    srand(time(NULL));
    do
    {
        i_victoire=0;
        i_essai=1;

        i_nbreMys = (rand() % (100 - 0 + 1)) + 0;
        //printf("\n Le nombre est %d",i_nbreMys);

        do
        {
            do
            {
                printf("\n Essai N %d",i_essai);
                printf("\nVeuillez rentrer un nombre de 0 a 100 :");
                scanf("%d",&i_choix);
            }while(i_choix<0||i_choix>100);

            if (i_choix==i_nbreMys)
            {
                printf("\n Pas mal, vous avez trouve en %d coups",i_essai);
                i_victoire=1;
            }
            else if (i_choix>i_nbreMys)
            {
                printf("\n Votre nombre est trop haut");
            }
            else
            {
                printf("\n Votre nombre est trop bas");
            }
            i_essai++;
        } while (i_victoire==0 && i_essai<11);

        if(i_victoire==0)
        {
            printf("\n Sorry, perdu, le nombre etait : %d ",i_nbreMys);
        }

        fflush(stdin);
        printf("\n Voulez-vous rejouer ? (O/N)");
        scanf("%c",&c_rep);
   }while (c_rep=='O');
}
