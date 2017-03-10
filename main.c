#include <stdio.h>


int calcul(int a, int b){
	return a+b;
}
void affiche(char* a){
	printf("toujours plus de modifs");
	printf("%s",a);
}
int main(int argc, char** argv){
	printf("a force, %s,c'est chiant!\n",argv[0]);
	affiche argv[0];
	calcul(argv[1],argv[2]);
	printf("toujours plus de modifs!!\n");
	return 1;
}
