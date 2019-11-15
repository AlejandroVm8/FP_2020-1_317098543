#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argu[]){
	//se crea la lista
	int numeros[argc-1];
	int i=0, j=1,numero;
	while(i<argc-1){
		//Se copia a la nueva lista 
		numero=atoi(argu[j]);
		numeros[i]=numero;
		i++;
		j++;
	}
	//creamos otra variable para no perder datos 
	int temporal;
	for (i=1;i<argc-1;i++){
		for (j=0;j<argc-1-i;j++){
			if(numeros[j]>numeros[j+1]){
				//Se guarda en temporal
				temporal=numeros[j];
				//Se hace retroceder el numero siguiente 
				numero[j]=numeros[j+1];
				//Se cambia el siguiente por el que guardamos en el temporal
				numeros[j+1]=temporal;
			}
		}
	}
	//For para imprimir
	for (int i=0;i<argc-1;i++){
		printf("%i\n",numeros[i]);
	}
}
