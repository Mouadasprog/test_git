//Ecrire un programme qui fait le tri par ordre decroissant des elements d'un tableau 

#include <stdio.h>
void remplissage(int T[10]){
        int *P = T;
        for(P = T;P < T + 10;P++){
                printf("Veuilez entrer l'element %ld: ",P+ 1 - T);
                scanf("%d",P);
        }
        int *P2,tmp,*P1;
        for(P1 = T;P1 < T + 10;P1++){
                for(P2 = T;P2 < T + 10;P2++){
                        if(*P2 < *(P2 + 1)){
                                tmp = *P2;
                                *P2 = *(P2 + 1);
                                *(P2 + 1) = tmp;
                        }
                }
        }
        for(P = T;P < T + 10;P++){
                printf("T[%ld] = %d\n",P + 1 - T,*P);
        }
}
int main(){
        int T[10];
        remplissage(T);
        return 0;
}

