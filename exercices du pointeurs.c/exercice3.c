//a l'aide des pointeurs , ecrivez un programme qui affiche les diviseurs d'un entier positif non nul
#include <stdio.h>
void saisie(int *a){
	printf("Veuillez entrer l'entier que vous voulez savoir ses diviseurs: ");
	scanf("%d",a);
	while(*a < 0 || *a == 0){
	printf("Erreur , Veuillez entrer un entier positif et non nul:  ");
        scanf("%d",a);
}
}
void Diviseurs(int a){
	int i,compteur = 0;
	printf("Les diviseurs de %d sont:\n",a);
	for(i = 1;i <= a;i++){
		if(a % i == 0){
			compteur++;
			printf("D%d = %d\n",compteur,i);
		}
	}
}

int main(){
	int a;
	saisie(&a);
	Diviseurs(a);
	return 0;
}
