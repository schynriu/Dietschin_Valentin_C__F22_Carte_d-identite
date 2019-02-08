#include "TP_fichier.h"
void creation(carte identite){
FILE* fichier;


    printf("Veuillez entrez votre nom\n");
    gets(identite.nom);

    printf("Veuillez entrez votre prenom\n");
    scanf ("%s",identite.prenom);

    printf("Veuillez entrez votre adresse\n");
    scanf ("%s",identite.adresse);

    printf("Veuillez entrez votre ville\n");
    scanf ("%s",identite.ville);

    printf("Veuillez entrez votre code postal\n");
    scanf ("%s",identite.codeP);

                fichier = fopen("Carte d'identiteé.txt", "a");
                fprintf(fichier, "le nom est %s \n",identite.nom);
                fprintf(fichier, " Le prénom est %s \n",identite.prenom);
                fprintf(fichier, " L'adresse est %s \n",identite.adresse);
                fprintf(fichier, " La ville est %s \n",identite.ville);
                fprintf(fichier, " Le code postal est %s \n",identite.codeP);
                fclose(fichier);
}
