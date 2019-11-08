#include <stdio.h>
#inlcude <stdlib.h>
int main(int argc, char* argu[]){
	//Variables
	int a;
	int b;
	int c=1;
	a=atof(argu[1]);
	b=atof(argu[2]);
	//Se dice donde se guarda
	for(int i=0; i<b; i++){
		//Donde se guardaran
		c=c*a;
	}
	//Mostramos el resultado
	printf("%.2d\n", c);
	return 0;
}
	
