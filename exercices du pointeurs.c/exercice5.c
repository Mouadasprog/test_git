//Ecrire un programme pour entrer et afficher les elements d'un tableau a l'aide d'un pointeur 
#include <stdio.h>
int main(){
	int T[6];
	int *P;
	P = T;
	for(P = T;P < T + 6;P++){
		printf("Veuillez entrer l'element %ld: ",(P + 1) - T);
		scanf("%d",P);
	}
	for(P = T;P < T + 6;P++){
		printf("T[%ld] = %d\n",((P + 1) - T),*P);
	}
	return 0;
}

