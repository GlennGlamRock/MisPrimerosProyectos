#include<iostream>
#include<windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int vector[10];
	int i;
	
	for(i=0;i<10;i++)
	    vector[i]=i*2;
	for(i=0;i<=10;i++)
	    cout<<"vector ["<<i<<"]="<<vector[i]<<"\n";
	vector[0]=100;
	vector[1]=200;
	vector[9]=300;
	
	for(i=0;i<10;i++)
	    cout<<"vector ["<<i<<"]="<<vector[i]<<"\n"; 
	cout<<vector[0]<<endl;
	cout<<vector[1]<<"\n";
	cout<<vector[9];
	
	for(i=0;i<10;i++){
		cout<<"Dame el valor de vector ["<<i<<"]: ";
		cin>>vector[i];
	}
	for(i=0;i<20;i++)
	    cout<<"Vector["<<i<<"]="<<vector[i]<<"\n";
	    
	/*char cadena[15];
	int len, i;
	cout<<"Dame una palabra en minusculas: ";
	gets(cadena);
	len=strlen(cadena);
	for(i=0;i<len;i++)
	   cadena[i]=toupper(cadena[i]);
	cout<<"Impresion de la cadena completa: "<<cadena<<"\n";   
	cout<<"Impresion elemento por elemento\n";
	for(int i=0;i<len;i++)
	   cout<<"cadena["<<i<<"]="<<cadena[i]<<"\n";
	*/
	    
	return 0;
}