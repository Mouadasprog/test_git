//a l'aide des pointeurs , ecrivez un programme qui calcule la somme ,le produit,la difference et la division de deux nombres reels
#include <stdio.h>
void saisie(float *a,float *b){
	printf("Veuillez entrez le nombre a: ");
	scanf("%f",a);
	printf("Veuillez entrez le nombre b: ");
        scanf("%f",b);
}
float Produit(float a,float b){;
return a * b;
}
float Somme(float a,float b){
return a + b;
}
float Division(float a,float b){
if(b != 0){
return a / b ;
}
else{
	printf("Erreur : La division par %.0f est impossible\n",b);
	return 0;

}
}
float Difference(float a,float b){
return a - b;
}
int main(){
	float a,b;
	saisie(&a,&b);
	printf("La division de %.2f sur %.2f donne: %.2f\n",a,b,Division(a,b));
        printf("La Produit de %.2f avec %.2f donne: %.2f\n",a,b,Produit(a,b));
	printf("La difference de %.2f avec %.2f donne: %.2f\n",a,b,Difference(a,b));
        printf("La somme de %.2f avec %.2f donne: %.2f\n",a,b,Somme(a,b));
		return 0;
		}



