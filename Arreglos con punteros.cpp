#include <iostream>
#include <conio.h>

using namespace std;

struct estado{
	char condicion[20];
	char ciudad[20];
};

struct paciente{
	char nombre[20];
	int edad;
	float peso;
	struct estado est;
};
int main(int argc, char** argv){

	paciente P1[5];
	paciente *apuntador=P1;
	
	for(int i=0;i<2;i++){
		
		cout<<"Nombre del paciente: ";
		cin.getline(P1[i].nombre,20);
		cout<<"Edad: ";
		cin>>P1[i].edad;
		cout<<"Peso: ";
		cin>>P1[i].peso;
		cout<<"Condicion: ";
		fflush(stdin);
		cin.getline(P1[i].est.condicion,20);
		cout<<"Cuidad: ";
		cin.getline(P1[i].est.ciudad,20);
		cout<<endl;
	}
	cout<<endl;
	for(;apuntador<=&P1[1];apuntador++){
		cout<<endl<<"Nombre guardado: "<<apuntador->nombre;
		cout<<endl<<"Edad guardada: "<<apuntador->edad;
		cout<<endl<<"Peso guardado: "<<apuntador->peso;
		cout<<endl<<"Condicion: "<<apuntador->est.condicion;
		cout<<endl<<"Ciudad: "<<apuntador->est.ciudad<<endl;
	}
	getch();
	return 0;
}
