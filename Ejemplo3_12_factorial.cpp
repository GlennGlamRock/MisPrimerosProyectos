//Luis Andre Contreras Alvarado 24040984
#include<iostream>
#include<windows.h>
#include<time.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int precio,x;
	srand(time(0));
	precio=rand()%1001;
	
	do{
		cout<<"Dime el precio (entre 0 y 1000): ";
		cin>>x;
		if(x>precio){
			cout<<"Muy alto manito\n";
		}
		else{
			if(x<precio){
				cout<<"Nao naoo, te falta más mi compa\n";
			}
			else{
				cout<<"Acertaste mamon, bien hecho, el precio es: "<<precio;
			}
		}
		
		}while(x!=precio);
	/*int x,factorial;
	
	cin>>factorial;
	cout<<factorial;
	for(x=factorial-1;x>=1;x--){
		cout<<"X"<<x;
		factorial=factorial*x;
	}
	cout<<"="<<factorial;*/
	
	
	
	return 0;
}