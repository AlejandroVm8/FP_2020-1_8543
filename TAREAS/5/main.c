#include <stdio.h>
#include <stdlib.h>
//devolvera un numero de un caracter
int valor(char n){
	int z;
	switch(n){
		case 'J':
		z=10;
		break;
		case 'Q':
		z=10;
		break;
		case 'K':
		z=10;
		break;
		case 'A':
		z=11;
		break;
		case 'j':
		z=10;
		case 'q':
		z=10;
		break;
		case 'k':
		z=10;
		break;
		case 'a':
		z=11;
		break;
			
	}
	return z;
}
int main(int argc,char* argu[]){
}
int imprimir;
coi;//significa char o int
for(int i=1;i<argc;i++){
//se recorre la lista en el subindice 1
//coi tendra un valor booleano 
	coi=argu[i][0]=='J'||argu[i][0]=='j'||
	argu[i][0]=='Q'||argu[i][0]=='q'||argu[i][0]=='K'
	||argu[i][0]=='k'||argu[i][0]=='A'||argu[i][0]=='a';
	if (coi==1){
		imprimir=valor(argu[i][0]);
	}
	else{
		imprimir=atoi(argu[i]);
	}
	printf("%i\n",imprimir);
}
return 0;
}