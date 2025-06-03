#include<iostream>
#include<chrono>
#include<thread>
#include<conio.h>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;


int main(){
	int r,y[5],x[ ]={50,30,-1,0,-32768};
	int i=0;
	r=i;
	
	cout<<"Impresion de los arreglos antes de la asignacion de uno a otro\n";
	for(i=0;i<5;i++){
		cout<<"x["<<i<<"]="<<x[i]<<"             y["<<i<<"]="<<y[i]<<"\n";
	}
	system("pause");
	system("cls");
	
	cout<<"Asignacion de los valores de x en y, espere un momento\n";
	sleep_for(seconds(5));
	
	for(i=0;i<5;i++){
		y[i]=x[i];//elemento por elemento
	}
	
	cout<<"Impresion de los arreglos despues de la asignacion\n";
	for(i=0;i<5;i++){
		cout<<"x["<<i<<"]="<<x[i]<<"             y["<<i<<"]="<<y[i]<<"\n";
	}
	
	return 0;
}