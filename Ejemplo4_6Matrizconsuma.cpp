#include<iostream>
#include<windows.h>
#include<time.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int matriz[10][10];
	int sumaH[10],sumaV[10];
	int i,j,k,n;
	
	do{

	cout<<"Dame un numero para hacer la matriz (2-10)";
	cin>>n;
	srand(time(0));
    }while(n>10 or n<2);
    
   for(i=0;i<n;i++){
    	sumaH[10]=0;
    	sumaV[10]=0;
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			matriz[i][j]=rand()%10;
		}
	}
	cout<<"Matriz\n";
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%3d",matriz[i][j]);
		}
		cout<<"\n";
	}
	cout<<"Suma horizontal";
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		sumaH[i]=sumaH[i]+matriz[i][j];
		printf("%3d",sumaH[i]);
		}
		cout<<"\n";
	}
	
	cout<<"Suma Vertical";
	for(i=0;i<n;i++)
	
	return 0;
}