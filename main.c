#include <stdio.h>

int calcul(int a, int b){
	return a+b;
}

int main(int argc, char** argv){
	calcul(argv[1],argv[2]);
	return 1;
}
