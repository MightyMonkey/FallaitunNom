#include <stdio.h>


int calcul(int a, int b){
	return a+b;
}
void affiche(char* a){
	printf("%s",a);
}
int main(int argc, char** argv){
	affiche argv[0];
	calcul(argv[1],argv[2]);
	printf("toujours plus de modifs!!\n");
	return 1;
}
