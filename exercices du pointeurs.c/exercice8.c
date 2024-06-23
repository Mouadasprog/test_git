//Ecrire un programme qui lit deux tableaux A et B et leurs dimensions N et M au clavier et qui ajoute les elements du B a la fin de A.
//Utiliser deux pointeurs Pa et Pb pour transfrer et afficher le tableau resultant A
#include <stdio.h>
void insertion(int TA[10],int TB[10]){
	int *PA;
	PA = TA;
	printf("************Insertion du premier tableau***********\n");
	for(PA = TA;PA < TA + 5;PA++){
		printf("Veuillez entrer l'element %ld: ",(PA + 1) - TA);
		scanf("%d",PA);
	}
	int *PB;
	PB = TB;
	printf("************Insertion du deuxieme tableau***********\n");
	  for(PB = TB;PB < TB + 5;PB++){
                printf("Veuillez entrer l'element %ld: ",(PB + 1) - TB);
                scanf("%d",PB);
        }
	  for(PA = TA,PB = TB;PA < TA + 5,PB < TB + 5;PA++,PB++){
		  printf("TA[%ld] = %d\n",(PA + 1) - TA,*PA);
		  printf("TB[%ld] = %d\n",(PB + 1) - TB,*PB);
}
}

int main(){
	int TA[10],TB[10];
	insertion(TA,TB);
	return 0;
}

