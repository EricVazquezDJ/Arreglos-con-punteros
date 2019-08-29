#include <iostream>
#include <conio.h>

using namespace std;
	
int main(int argc, char** argv){
	int *puntero, arreglo[10], mayor=INT_MIN;
	puntero=&arreglo[0];

	for(int i=0;i<=9;i++){
		cout<<"Ingresa el numero "<<i+1<<": ";
		cin>>arreglo[i];
	}
	
	for(;puntero<=&arreglo[9];puntero++){
		if(*puntero>mayor){
			mayor=*puntero;
		}
	}
	cout<<endl<<"El numero mayor es: "<<mayor<<endl;
	
	getch();
	return 0;
}
