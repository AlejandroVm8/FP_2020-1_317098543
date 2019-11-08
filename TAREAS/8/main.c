#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
	float x,y,z; 
	//Variables
	
	x=atof(argv[1]);
	y=atof(argv[2]);
	//Convirtiendo los argumentos 
	
	if(x==1){
		z=(y*1.8)+32;
		printf("%.2f\n",z);
		return 0;
		//Operacion y resultado
	}
	else 
	if(x==0){
		z=(y-32)/1.8;
		printf("%.2f\n", z);
		return 0;
		//Operacion y resultado
}
return 0;
}
