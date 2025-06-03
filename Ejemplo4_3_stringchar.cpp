#include<iostream>
using namespace std;

int main(){
	char c[4]={' ',' ',' ',' '};
	int i=0;
	puts("Captura de una cadena");
	for(i=0;i<4;i++){
		cout<<"Dame el elemento No. "<<i<<" ";
		fflush(stdin);
		c[i]=getchar();
		
	}
	puts("Impresion de la cadena");
	for(i=0;i<4;i++){
		printf("%c",c[i]);
		
	}
	cout<<"\n";
	system("pause");
	system("cls");
	puts("Conversion a mayusculas");
	for(i=0;i<4;i++){
		
		c[i]=toupper(c[i]);
		printf("%c",c[i]);
	}
	puts("\nConversion a minusculas");
	for(i=0;i<4;i++){
		
		c[i]=tolower(c[i]);
		//printf("%c",c[i]);
		cout<<c[i];
	}
	cout<<"\n";
	cout<<"Completado: "<<c;
	
	return 0;
}