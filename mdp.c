//Projet personnel ANCLIN 
//Date: 05.02.23
//Generateur de mot de passe robuste

#include <stdio.h>
#include <stdlib.h>

int letteMaJuscule()
{
    int lettreMajuscule;
    lettreMajuscule = rand() % 26 + 65;
    return lettreMajuscule;
}

int lettreMinuscule()
{
    int lettreMinuscule;
    lettreMinuscule = rand() % 26 + 97;
    return lettreMinuscule;
}

int chiffre()
{
    int chiffre;
    chiffre = rand() % 10 + 48;
    return chiffre;
}

int caractereSpecial()
{
    int caractereSpecial;
    caractereSpecial = rand() % 15 + 33;
    return caractereSpecial;
}

int motDePasseAleatoire()
{
    int i;
    int longueur;
    int caractere;
    char motDePasse[100];
    printf("Entrez la longueur du mot de passe: ");
    scanf("%d", &longueur);
    for (i = 0; i < longueur; i++)
    {
        caractere = rand() % 4;
        switch (caractere)
        {
        case 0:
            motDePasse[i] = letteMaJuscule();
            break;
        case 1:
            motDePasse[i] = lettreMinuscule();
            break;
        case 2:
            motDePasse[i] = chiffre();
            break;
        case 3:
            motDePasse[i] = caractereSpecial();
            break;
        }
    }
    motDePasse[longueur] = '\0';
    printf("Votre mot de passe est: %s", motDePasse);
}

int main()
{
    motDePasseAleatoire();
    return 0;
}