//a l'aide des pointeurs , ecrivez un nombre qui verifier si un nombre est pair ou impair
#include <stdio.h>
void saisie(int *a){
	printf("Veuillez entrer le nombre que vous voulez savoir si il est pair ou impair: ");
	scanf("%d",a);
}
void Parite(int a){
	if(a % 2 == 0){
		printf("%d est pair\n",a);
	}
	else{
		printf("%d est impair\n",a);
	}
}
int main(){
	int a;
	saisie(&a);
	Parite(a);
	return 0;
}
