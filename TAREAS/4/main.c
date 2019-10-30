#include <stdio.h>
#include <stdlib.h>
int main (int argc, char*argv[]){
	//Se declaran variables y asignar valor
	double x=0;
	//Creando la estructura de repeticion
	for(int i=1; i<argc; i++){
		double y=atof(argv[i]);
		x=y+x;
	}
	//La operacion para generar promedio
	double promedio=x/(argc-1);
	printf("%.2lf\n",promedio);
	
	return 0;
}
