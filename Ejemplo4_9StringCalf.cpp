#include<iostream>
#include<windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	struct Estudiante{
		string name;
		int x;
		int calf[5];
		int p;
	};
	Estudiante est1;
	int suma=0;
	
	cout<<"Ingresa el nombre del estudiante: ";
	getline(cin, est1.name);
	cout<<"Ingresa la edad del estudiante: ";
	cin>>est1.x;
	
	cout<<"Ingresa las calificaciones de 5 materias:\n";
	for(int i=0;i<5;i++){
		cout<<"Calificacion de la unidad "<<i+1<<": ";
		cin>>est1.calf[i];
		suma=suma+est1.calf[i];
	}
	est1.p=suma/5;
	
	cout<<"\nInformacion del estudiante:\n";
	cout<<"Nombre: "<<est1.name<<"\n";
	cout<<"Edad: "<<est1.x<<"\n";
	cout<<"Calificaciones: ";
	for(int i=0;i<5;i++){
		cout<<est1.calf[i]<<" ";
	}
	if(est1.p>90 && est1.p<101){
		cout<<"\nPromedio: "<<est1.p<<" A ";
	}else if(est1.p>80 && est1.p<90){
		cout<<"\nPromedio: "<<est1.p<<" B ";
		
	}else if(est1.p>70 && est1.p<80){
		cout<<"\nPromedio: "<<est1.p<<" C ";
	}else if(est1.p>60 && est1.p<70){
		cout<<"\nPromedio: "<<est1.p<<" D ";

	}else if(est1.p<60){
		cout<<"\nPromedio: "<<est1.p<<" F ";
	}



	
	
	
	return 0;
}