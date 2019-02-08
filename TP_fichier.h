#ifndef TP_FICHIER_H_INCLUDED
#define TP_FICHIER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#define TAILLE 40
#endif // TP_FICHIER_H_INCLUDED

typedef struct carte{
    char nom[TAILLE];
    char prenom[TAILLE];
    char adresse[TAILLE];
    char  ville[TAILLE];
    char  codeP[TAILLE];
}carte;

// ------------------------------prototype -------------------------
extern void creation(carte identite);

FILE* fopen(const char* fichier, const char* Ouverture);
