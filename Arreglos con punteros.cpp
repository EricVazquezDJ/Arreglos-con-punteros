#include <iostream>
#include <conio.h>

using namespace std;

struct datos{
	char nombre[20];
	int tiempo;
	char revista[20];
	
};
void Menu()
	cout<<"1. Ingresar datos"<<endl;
	cout<<"2. Eliminar datos"<<endl;
	cout<<"3. Mostrar datos"<<endl;
	cout<<"Elige una opcion: "<<endl;

int main(int argc, char** argv){
	
	int opcion;
	datos P1[3];
	datos *apuntador=P1;
	void Menu();
	cin>>opcion;
	while(repetir)
	
	if opcion==1{
		for(int i=0;i<10;i++){
		cout<<"Nombre del suscriptor: ";
		cin.getline(P1[i].nombre,20);
		cout<<"Tiempo de suscripcion: ";
		cin>>P1[i].tiempo;
		cout<<"Nombre de la revista: ";
		cin.getline(P1[i].revista,20);
	}else opcion==2{
		for(;apuntador<=&P1[1];apuntador++){
		cout<<endl<<"Nombre: "<<apuntador->nombre;
		cout<<endl<<"Tiempo: "<<apuntador->tiempo;
		cout<<endl<<"Revista: "<<apuntador->revista;
	}
	cout<<endl;

	}
	getch();
	return 0;
}
