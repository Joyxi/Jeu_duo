#include <stdio.h>

int main () {
	
	int pdv;
	pdv = 150;
	
	int pdvMoi;
	pdvMoi = 150;
	
	int choix;
	
	printf ("Niveau de vie de l'ennemi: %d\n",pdv);
	printf ("Mon niveau de vie: %d\n",pdvMoi);
	
	printf("Debut du combat\n");
	
	printf("Vous lancez une attaque contre le monstre\n");
	printf("Vous avez touche le monstre! -10p\n");
	pdv = pdv-10;
	printf("Niveau de vie de l'ennemi: %d\n",pdv);
	
	printf("Le monstre vous attaque. Attaquer (1) ou se defendre (2) ?
	scanf("%d",&
	
	
	while (pdv>0 || pdvMoi>0){
	
		
		printf("Vous avez touche le monstre! -10p\n");
		pdv = pdv-10;
		printf("Niveau de vie de l'ennemi: %d\n",pdv);
	
	
		printf("Le monstre vous a touche! -10p\n");
		pdvMoi = pdvMoi-10;
		printf("Mon niveau de vie: %d\n",pdvMoi);
		
	}
	
	return 0;
	
}