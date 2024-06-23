//Ecrire un programme qui lit un entier X et les elemetns d'un tableau T du type entier au clavier et elimine toutes les occurences de X dans T en tassant les elements restnts. Le programme utilisera les pointeurs P1 et P2 pour parcourir le tableau
#include <stdio.h>
int main(){
int T[10];
int *P1;
P1 = T;
for(P1 = T;P1 < T + 10;P1++){
	printf("Veuillez entrer l'element %ld: ",(P1 + 1) - T);
	scanf("%d",P1);
}
int x;
printf("Veuillez saisir l'element que vous voulez supprimer meme avec ses occurences: ");
scanf("%d",&x);
int *P2;
P2 = T;
int *new_end = P2;
for(P2 = T;P2 < T + 10;P2++){
	if(*P2 == x){
		continue;
	}
	else{
	*new_end = *P2;
        new_end++;
	}
}
printf("Le tableau vaut\n");
for(P1 = T;P1 < new_end;P1++){
	printf("T[%ld] = %d\n",(P1 + 1) - T,*P1);
}
}


