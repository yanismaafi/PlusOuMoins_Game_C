#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _WIN32_WINNT 0x0500



int main()
{
  int Nombre_Cmp,Nombre_Jr,lvl, i,Numero,essais,Mode,adversaire;


    printf("\n \t BIENVENUE \n");
    printf("\n");
    printf(" 1- JOUER \n");
    printf("\n");
    printf(" 2- COMMENT JOUER \n");
    printf("\n");
    printf(" 3- QUITTER LE JEU \n");
    printf("\n");
   scanf("%d",&Numero);


   essais=1;
   srand(time(NULL));


switch (Numero)


{


     case 1:

     printf("\n 1- JOUER CONTRE L'ORDUNATEUR \n");
     printf("\n 2- JOUER CONTRE UNE PERSONNE \n");
     scanf("%d",&Mode);
     printf("\n");

     switch (Mode)
      {
      case 1 :

             printf("\nChoisissez un Niveau : \n");
             printf("\n1-FACILE (*)\n");
             printf("\n2-MOYEN (***)\n");
             printf("\n3-DIFFICILE (****)\n");
             scanf("%d",&lvl);
             printf("\n\n\n\n\n\n\n\n\n\n");
             printf("****************************************");

     switch(lvl)
     {
        case 1:
                srand(time(NULL));
                Nombre_Cmp=rand() % 10;
                printf(" \n...Le jeu commence...\n");
                printf("\n");

                printf("Donner un Nombre : ");


                 do{

                       scanf("%d",&Nombre_Jr);

                       if (Nombre_Jr > Nombre_Cmp )
                          {
                            printf("\n C'EST MOINS ! \n");
                            essais=essais+1;

                          }else if (Nombre_Jr < Nombre_Cmp )
                              {
                                 printf("\n C'EST PLUS ! \n");
                                 essais=essais+1;
                              }else
                                     {
                                         printf("\n BRAVOO VOUS AVEZ GAGNÉ BIEN JOUÉ!!\n Vous avez trouvé la valeur au bout de %d essais!!!\n \n",essais);
                                         printf("\n");
                                     }

                     }while(Nombre_Jr!=Nombre_Cmp);

                    return 0;

                    break;

     case 2:

             srand(time(NULL));
             Nombre_Cmp=rand() % 100;

             printf(" \n Le jeu commence... !!\n");
             printf(" \n ");


             printf("\nDonner un Nombre : ");



             do{

               scanf("%d",&Nombre_Jr);

               if (Nombre_Jr > Nombre_Cmp )
                  {
                    printf("\n C'EST MOINS ! \n");
                    essais=essais+1;
                  }else if (Nombre_Jr < Nombre_Cmp )
                      {
                         printf("\n C'EST PLUS ! \n");
                         essais=essais+1;
                      }else
                             {
                                 printf("\n \nBRAVOO VOUS AVEZ GAGNÉ BIEN JOUE!!\n Vous avez trouve la valeur cachee au bout de %d essais !!!\n \n",essais);
                                 printf("\n");
                             }

            }while(Nombre_Jr!=Nombre_Cmp);

        return 0;
        break;

        case 3:
                srand(time(NULL));
                Nombre_Cmp=rand() % 1000;
                printf(" \n Le jeu commence !!\n");
                printf("\n");


                printf("\nDonner un Nombre : ");


             do{

                   scanf("%d",&Nombre_Jr);

                   if (Nombre_Jr > Nombre_Cmp )
                      {
                        printf("\n C'EST MOINS ! \n");
                        essais=essais+1;
                      }else if (Nombre_Jr < Nombre_Cmp )
                          {
                             printf("\n C'EST PLUS ! \n");
                             essais=essais+1;
                          }else
                                 {
                                     printf("\n \nBRAVOO VOUS AVEZ GAGNÉ BIEN JOUÉ!!\n Vous avez trouvé la valeur caché au bout de %d essais  !!!\n \n",essais);
                                     printf("\n");
                                 }

               }while(Nombre_Jr!=Nombre_Cmp);

        return 0;
        break;

}
break;

   case 2 :
printf("Votre adversaire doit donner un nombre : \n");
scanf("%d",&adversaire);
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
printf("\n****************************************");

 printf(" \nLe jeu commence !!\n");
     printf("\n");


     printf("Donner un Nombre : ");




     do{

       scanf("%d",&Nombre_Jr);

       if (Nombre_Jr > adversaire )
          {
            printf("\n C'EST MOINS ! \n");
            essais=essais+1;
          }else if (Nombre_Jr < adversaire )
              {
                 printf("\n C'EST PLUS ! \n");
                 essais=essais+1;
              }else
                     {
                         printf("\n BRAVOO VOUS AVEZ GAGNÉ BIEN JOUÉ!!\n Vous avez trouvé la valeur au bout de %d essais!!!\n \n",essais);
                         printf("\n");
                     }

    }while(Nombre_Jr!=adversaire);


    return 0;
    break ;

}

    case 2:
           printf("\n Le but du jeu c'est de trouver la valeur aleatoir que votre ordinateur a Caché, a vous de trouver le nombre ou chiffre exacte !! Et plus Vous donnez de mauvais Nombre plus votre score est mauvais ....BONNE CHANCE! \ns \n");
           break;

    case 3:
          break;

    }


    return 0;

exit(0);
}
