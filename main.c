#include <stdio.h>

int modifieur(int a, int b){
	return b-a;
}
int calcul(int a, int b){
	printf("on s'en ballec, faut faire des modifs");
	return a+b;
}
void affiche(char* a){
	printf("toujours plus de modifs");
	printf("%s",a);
}
int elaguage(int a, int b){
	return a-b;
}
int main(int argc, char** argv){
	printf("a force, %s,c'est chiant!\n",argv[0]);
	affiche argv[0];
	calcul(argv[1],argv[2]);
	printf("toujours plus de modifs!!\n");
	return 1;
}
