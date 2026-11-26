/*
R : copier les ´elements d’un tableau d’entiers dans un autre.
E : Un tableau d'entier rempli, un entier la taille
E/S : Un tableau d'entier vide
S : vide
*/
void Copie_tab_entier(const int tableau1[], int tableau2[], int taille);


/*
R : afficher les ´el´ements d’un tableau d’entiers sous la forme: {e1,e2,e3,...,en}
E : un tableau d'entiers, un entier la taille
E/S : vide
S : vide
*/
void Afficher_Tableau(const int tableau[], int taille);

/*
R : compare deux tableau et renvoie true si ils sont egaux
E : deux tableau d'entiers, un entier la taille
E/S : vide
S : un booléen
*/
bool Comparer_Tableau(const int tableau1[],const int tableau2[],int taille);


/*
R : calculer la moyenne des ´el´ements d’un tableau de réels
E : un tableau d'entiers, un entier la taille
E/S : vide
S : un réel, la moyenne
*/
float Moyenne_Tableau(const int tableau[], int taille);


/*
R : remplacer les valeurs d’un tableau par sa somme cumul´e
E : un tableau d'entiers, un entier la taille
E/S : vide
S : vide
*/
void Replace_Sum(int tableau[], int taille);