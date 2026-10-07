/*
R : calcule et renvoie un jour de l'année en déclinaison du soleil
E : un entier, le jour de l'année
S : un réel, la déclinaison du soleil
*/
float Dec(int j);

/*
R : calcul et renvoie la durée d'insolation en heure
E : un entier, le jour de l'année
un réel, la latitude en degré
S : un réel, la durée d'insolation
*/
float Di(int j, float lat);


float deg_to_rad(float degree);