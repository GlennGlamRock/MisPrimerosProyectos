#include<iostream>
#include<string>
using namespace std;
struct Persona{
	string name;
	int x;
	float h,p,mc;
};

int main(){
	
	int ans;
	ans=1;
	
	do{

	float mc1=18.5,mc2=24.9;
	
	
	Persona Itzanagi;
	cout<<"Ingrese el nombre: ";
	getline(cin, Itzanagi.name);
	cout<<"Ingrese la edad: ";
	cin>>Itzanagi.x;
	cout<<"Ingrese la altura (en metros): ";
	cin>>Itzanagi.h;
	cout<<"Ingrese su peso (en kg): ";
	cin>>Itzanagi.p;
	
	cout<<"\nDatos de la persona:\n";
	cout<<"Nombre: "<<Itzanagi.name<<"\n";
	cout<<"Edad: "<<Itzanagi.x<<" años "<<endl;
	
	cout<<"Altura: "<<Itzanagi.h<<" m"<<endl;
	cout<<"Peso: "<<Itzanagi.p<<" kg"<<endl;
	
	Itzanagi.mc=(Itzanagi.p/(Itzanagi.h*2));
	
	cout<<"Masa corporal: "<<Itzanagi.mc<<" kg/m^2"<<endl;
	if(Itzanagi.mc>mc1 && Itzanagi.mc<mc2){
		cout<<"Su masa corporal es la ideal :D";
	}else{
		if(Itzanagi.mc<mc1){
			cout<<"Su masa corporal es insuficiente :c, tas flaquito";
		}else{
			if(Itzanagi.mc>mc2){
				cout<<"Su masa corporal indica sobrepeso, pinche gorda";
			}
		}
	}
	
	cout<<"\n                           ¿Desea hacer la prueba de nuevo?\n";
	cout<<"                      1.-Seeehh                           2.-Nel prro\n";
	cin>>ans;
	system("cls");
	
    }while(ans==1);
    
    system("cls");
    cout<<"Gracias por usar este programa :DDD";
    
	return 0;
	
}