#include<iostream>
#include<windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	struct Estudiante{
		string name;
		int x;
		int calf[3];
	};
	int ne;
	cout<<"Ingresa la cantidad de estudiantes\n";
	cin>>ne;
	cin.ignore();
	Estudiante est[ne];
	
	for(int i=0;i<ne;i++){
		cout<<"\nIngresa los datos del estudiante #"<<i+1<<":\n";
		cout<<"Nombre: ";
		getline(cin,est[i].name);
		cout<<"Edad: ";
		cin>>est[i].x;
		
		cout<<"Ingresa las calificaciones de 3 materias\n";
		for(int j=0;j<3;j++){
			cout<<"Calificacion #"<<j+1<<": ";
			cin>>est[i].calf[j];
		}
		cin.ignore();
	}
	cout<<"\nInformacion de los estudiantes:\n";
	for(int i=0;i<ne;i++){
		cout<<"\nEstudiante #"<<i+1<<": ";
		cout<<"Nombre: "<<est[i].name<<" ";
		cout<<"Edad: "<<est[i].x;
		cout<<"Calificaciones: ";
		
		for(int j=0;j<3;j++){
			cout<<est[i].calf[j]<<" ";
		}
		cout<<"\n";
	}
	
	
	return 0;
}