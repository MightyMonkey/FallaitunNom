#include <stdio.h>

void affiche(char* a){
	printf("%s",a);
}
int main(int argc, char** argv){
	affiche argv[0];
	return 1;
}
