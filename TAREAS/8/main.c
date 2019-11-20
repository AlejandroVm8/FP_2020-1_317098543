#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argu[])
{
	double x, y, z; 
	//Variables
	
	x=atof(argu[1]);
	y=atof(argu[2]);
	//Convirtiendo los argumentos 
	
	if(x==1)
	{
		z=(y-32)/1.8;
		printf("%.2f\n", z);
		return 0;
		//Operacion y resultado
	}
	else if(x==0)
	{
		z=32+(y*1.8);
		printf("%.2f\n", z);
		return 0;
		//Operacion y resultado
}
return 0;
}
