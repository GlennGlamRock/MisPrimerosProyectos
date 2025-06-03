#include<windows.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int x;
	
	string micadena="Hola mundo";
	cout<<"La cadena original es: "<<micadena<<endl;
	char letra1=micadena[0];
	cout<<"-la primera letra es: "<<letra1<<endl;
	micadena="Todos putos menos yo";
	cout<<"La cadena modificada es: "<<micadena<<endl;
	
	for(x=0;x<micadena.length();x++){
		cout<<micadena[x]<<"\n";
	}
	
	
	return 0;
}