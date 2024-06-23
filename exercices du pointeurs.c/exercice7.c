//Ecrire un programme qui range les elements d'un tableau T du type entier dans l'ordre inverse.Le programme utilisera des pointeurs P1 et P2 et une variable numerique TMP pour l'echange des elements
#include <stdio.h>
void Remplissage(int T[10]){
        int *P1;
        P1 = T;
        for(P1 = T;P1 < T + 10;P1++){
                printf("Veuillez entrer l'element %ld: ",P1 + 1 - T);
                scanf("%d",P1);
        }
	int *P2 = T;
	int tmp;
	for(P1 = T,P2 = T + 10;P1 < P2;P1++,P2--){
		tmp = *P1;
		*P1 = *P2;
		*P2 = tmp;
}
for(P1 = T;P1 < T + 10 ;P1++){
	printf("T[%ld] = %d\n",P1 + 1 - T,*P1);
}
}
int main(){
	int T[10];
Remplissage(T);
        return 0;
}
