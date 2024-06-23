//Ecrire un programme qui utilise unr fonction qui echange le contenu de deux entiers s'ils ont le meme signe , sinon il place la somme des de deux dans le premier entier et leur produit dans le deucieme (Pensez a utiliser le passage par adresse
#include <stdio.h>
void saisie(int *a,int *b){
	printf("Veuillez entrer l'element a: ");
	scanf("%d",a);
	printf("Veuillez entrer l'element b: ");
        scanf("%d",b);
}
void echange(int a,int b){
	int tmp;
	int n = a,m = b;
	if(a * b > 0){
		tmp = a;
		a = b;
		b = tmp;
	printf(" %d et %d sont de meme signe donc l'echange vaut: a = %d et b = %d\n",n,m,a,b);
	}
	else{
		int somme,produit;
		somme = a + b;
		produit = a * b;
		printf("%d et %d sont pas de meme signe donc\n",a,b);
		printf("a  = %d\n",somme);
		printf("b  = %d\n",produit);
	}
}
int main(){
	int a,b;
	saisie(&a,&b);
	echange(a,b);
	return 0;
}
