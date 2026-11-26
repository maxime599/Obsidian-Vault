/*
R : permuter deux lignes dans le tableau en supposant que c'est possible
E/S un tableau de tableaux d'entiers
E : 3 entiers, les deux indices de lignes à permuter et la taille de la ligne
S : vide
*/
void Permute_2_Lignes(int matrice[][6], int taille_ligne, int indice_ligne1, int indice_ligne2);

/*
R : permuter deux colonne dans une matrice en supposant que c'est possible
E/S un tableau de tableaux d'entiers
E : 3 entiers, les deux indices de colonnes à permuter et la taille de la colonnes
S : vide
*/
void Permute_2_Colonnes(int matrice[][6], int taille_colonne, int indice_colonne1, int indice_colonne2);

/*
R : permettant d’afficher les ´el´ements d’un tableau `a deux dimensions d'entiers
E : un talbeau de tableaux d'entiers, deux entiers le nb de lignes et de colonnes
S : vide
E/S : vide
*/
void Affiche_Matrice(int matrice[0][6], int nb_lignes, int nb_colonnes);