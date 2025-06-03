//Luis Andre Contreras Alvarado 24040984
#include<iostream>
#include<windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x, c=0;
	float sueldo, total;
	char opcion, nombre[10];
	while(c!=0){
		cout<<"Esto nunca se imprime";
		c=0;
	}
	/*while se puede usar en situaciones en las que se sabe de antemano el numero de vueltas
	que se habrá de ejecutar, y debe de constar de inicialización, condición y modificación*/
	x=1;//inicializacion
	while(x<11){//condicion
		cout<<x<<"\n";//imprime una numeracion 1-10
		x++;
	}
	system("pause");
	
	opcion='s';
	while(opcion=='s' or opcion=='S'){
		system("cls");
		cout<<"Dame tu nombre ";fflush(stdin); gets(nombre);
		cout<<"Dame tu sueldo ";cin>>sueldo;
		total+=sueldo;
		printf("Deseas capturar otro empleado <<s/n>>?");
		cin>>opcion;
		
		
	}
	printf("Total de salarios= $%5.2f\n",total);
	cout<<"Despues de la pausa el programa se cicla\n";
	system("pause");
	
	x=0;
	while(x<10);
	{
		cout<<x<<"\n";
		x++;
	}
	
	return 0;
}