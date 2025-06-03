//Luis Andre Contreras Alvarado 24040984
#include<iostream>
#include<windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int li,ls,p,x;
	
	do{
		cout<<"Dame un limite inferior: ";
		cin>>li;
		cout<<"Dame un limite superior: ";
		cin>>ls;
		
	}while(li>=ls);
	
	do{
		cout<<"Dime el precio (entre "<<li<<" y "<<ls<<"): ";
		cin>>p;
	}while(p<li or p>ls);
	system("cls");
	
	do{
		cout<<"Adivina el precio: ";
		cin>>x;
		
		if(x>p){
			cout<<"Tampoco te pases bro, muy alto\n";
		}else
		     if(x<p){
		     	cout<<"Casi manito, muy bajo\n";
			 }else{
		         cout<<"Webos!, acertaste el precio ["<<p<<"]";
	             }
			 
	}while(x!=p);
	
	return 0;
}