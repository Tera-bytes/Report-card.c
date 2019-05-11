#include <stdio.h>
#include <stdlib.h>
#define n1 4
#define n2 10
#define et 2 //NB: toute les variiables definient au niveau de "define" sont considérés comme des entiers
main()
{
    char M[30][30],T[n1][n2]; //n1=nombre de matiere
    int i,j,k,h,choix,N[n1],m,t; //c1=coefficient;nt=note
    float s,c,d,g,P[et],L[et][n1],B[n1],max,min; //NB:exemple;tu ne peut pas déclarer B[j] et en même temps déclarer j(comme float,entier,etc) .la seul façon est de déclarer j en utilisant l'instruction "#define"
    printf("1-Bulletin de note\n2-Quitter\n\nfaites votre choix!\t");
    scanf("%d",&choix);
    system("cls");
    switch(choix)
   do
    {
        case 1:printf("Cette option consiste a vous aidez a produire un bulletin type!  suivez juste les instructions.\n\n\n\n\n\n\n\t\t\tMERCI POUR VOTRE CONFIANCE!!!!!!!!!\n\n\n\n\n\n");
               system("pause");
               system("cls");
               for(i=0;i<n1;i++)
               {
                printf("Entrer le nom de la matiere numero %d\n",i+1);
                scanf("%s",&T[i]);
                do
                {printf("Entrer son coefficient ");
                scanf("%d",&N[i]);
               }while(N[i]<0||N[i]>20);
               }
               printf("\n\n");
               for(i=0;i<et;i++) //et=nombre d'étudiant-1
               {
                   printf("Entrer le nom(a huit lettres) de l'etudiant numero %d\n",i+1);
                    scanf("%s",M[i]);
                   for(k=0;k<n1;k++) //n1=nombres de matières
                     {
                         do{
                     printf("Entrer sa note en %s ",T[k]);
                       scanf("%f",&L[i][k]);
                   }while(L[i][k]<0||L[i][k]>20);
                     }
                     printf("\n");
               }
               system("pause");
               system("cls");
               for(i=0;i<et;i++)
                {s=0;c=0;
                   for(j=0;j<n1;j++)
                   {
                       s=s+(N[j]*L[i][j]);
                       c=c+N[j];
                   }
                   P[i]=s/c;
                }//N[j]=coefficient  L[j]=note   P[i]=moyenne de chaque eleve
                printf("**************************************************************************************************************************************************************************************************************************************************************************************************************\n");
               printf("\n\n\t\t\t\t\t\t\tBULLETIN DE NOTE DE LA CLASSE\n\n\n");
               printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
               printf("MATIERES      |\t\t");
               for(k=0;k<n1;k++)
                  {
                   printf("\t%s   |\t",T[k]);//T[k]=matière
                  }
                  printf("\tMOYENNES   |");
                  printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                  printf("\nCOEFFICIENTS  |\t\t");
                  for(i=0;i<n1;i++)
                  {
                      printf("\t%d\t\t",N[i]);
                  }
                  printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                  printf("\nNOMS          |\n");
                  printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

                  i=0;
               for(i=0;i<et;i++)
               {
                      printf("%10s\t\t",M[i]); //M[i]=noms des eleves  ; le "10S" me permets de regler les problèmes de décalage(du à la variation de la longueur des noms des élèves.
                  for(h=0;h<n1;h++)
                  {
                      printf("\t%.2f\t\t  ",L[i][h]);
                  }
                  printf("\t%.2f\n",P[i]);
                  printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
               }
               printf("\n");
               for(j=0;j<n1;j++)
               { d=0;
               for(i=0;i<et;i++)
               {
                     d=L[i][j]+d;
               }
               B[j]=d/et;
               }
               printf("MOYENNES\t\t");
               for(j=0;j<n1;j++)
               {
                   printf("\t%.2f\t\t  ",B[j]);
               }
                printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\n");

               max=P[0];
               min=P[0];
               g=0;
               for(i=0;i<et;i++)
               {
                   if(P[i]>=max)
                   {
                       max=P[i];
                       m=i;
                   }
                   if(P[i]<=min)
                   {
                       min=P[i];
                       t=i;
                   }
                   g=g+P[i];  //g=la somme des moyennes de tout les eleves
               }
               printf("Le/la premier(e) est |%s| avec une moyenne de |%.2f|\n",M[m],P[m]);
               printf("le/la dernier(e) est |%s| avec une moyenne de |%.2f|\n",M[t],P[t]);
               printf("La moyenne generale de la classe est %.2f\n\n\n",g/et);
               printf("**************************************************************************************************************************************************************************************************************************************************************************************************************\n\n\n\t\t\t\t");
               break;
        case 2:printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t*******\t\tA BIENTOT\t\t*******\n\n\n\n\n\n\n\n\t\t");
               break;
}while(choix!=2);

}
