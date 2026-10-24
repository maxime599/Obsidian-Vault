#include <iostream>
using namespace std;
#include "fonctions.h"

/*
R : retourne vrai si l'année passé en parametre est bissextile
E : un entier, l'année
S : un bouléen
*/
bool Bissextile(int annee)
{
    if ((annee % 4 == 0) && ((annee % 100 != 0) || (annee % 400 == 0)) && (annee % 4000 != 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*
R : retourne vrai si l'année passé en parametre est bissextile
E : un entier, l'année
S : un bouléen
*/
bool Bissextile2(int annee)
{
    bool bissextile;
    if (annee % 4 == 0)
    {
        if (annee % 100 == 0)
        {
            if (annee % 400 == 0)
            {
                if (annee % 4000 == 0)
                {
                    bissextile = false;
                }
                else
                {
                    bissextile = true;
                }
            }
            else
            {
                bissextile = false;
            }
        }
        else
        {
            bissextile = true;
        }
    }
    else
    {
        bissextile = false;
    }

    return bissextile;
}