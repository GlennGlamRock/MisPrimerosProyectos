#include<iostream>
using namespace std;
void captura(void);
int max(int i, int j);
int main(void){
	int mayor=0;
	captura();
	mayor=max(1,-1);
	cout<<"El mayor es "<<mayor;
	return 0;
}

void captura(void){
	int x,y;
	
	cout<<"Dame un numero\n";
	cin>>x;
	cout<<"Ahora otro\n";
	cin>>y;
	cout<<"El mayor es: "<<max(x,y)<<"\n";
	
	return 0;
}
int max(int i, int j){
	if(i>j){
		return i;
	}else{
		return j;
	}
}