#include <iostream>
#include <conio.h>
 
using namespace std;
 
struct datos{
    char nombre[22];
    int tiempo=0;
    char revista[22];
     
};
void menu(){
    cout<<"\nMenú de opciones \n"<<endl;
    cout<<"1 Agregar suscriptor \n"<<"2 Eliminar suscriptor \n"<<"3 Mostrar suscriptores \n"<<"4 Salir \n"<<endl;
    cout<<"Elige una opción del menú: \n"<<endl;
}
 
int main(){
    char *locale;
    locale=setlocale(LC_ALL,"");
    int repetir=true;
    datos suscriptor[12];
    datos *apuntador;
    int opcion;
    while(repetir){
        menu();
        cin>>opcion;
        if(opcion==1){
            system("CLS");
            char nombre[22];
            int tiempo;
            char revista[22];
            cout<<"Nombre del suscriptor: ";
            fflush(stdin);
            cin.getline(nombre,20);
            cout<<"Tiempo de suscripcion: ";
            cin>>tiempo;
            fflush(stdin);
            cout<<"Nombre de la revista: ";
            cin.getline(revista,20);
            apuntador=suscriptor;
            while(apuntador->tiempo!=0) apuntador++;
            for(int i=0;i<=20;i++) apuntador->nombre[i]=nombre[i];
            apuntador->tiempo=tiempo;
            for(int i=0;i<=20;i++) apuntador->revista[i]=revista[i];
        system ("CLS");
        }else if(opcion==2){
            char nombre[22];
            cout<<"Nombre de la persona: ";
            fflush(stdin);
            cin.getline(nombre,20);
            apuntador=suscriptor;
            int j,i;
            for(i=0;i<10;i++,apuntador++){
                for(j=0;j<20;j++){
                    if(apuntador->nombre[j]!=nombre[j]) break;
                }
                if(j==20){
                    apuntador++;
                    for(;i<9;i++,apuntador++){
                        if(apuntador->tiempo==0){
                            suscriptor[i].tiempo=0;
                            break;
                        }
                        for(int j=0;j<=20;j++) suscriptor[i].nombre[j]=apuntador->nombre[j];
                        suscriptor[i].tiempo=apuntador->tiempo;
                        for(int j=0;j<=20;i++) suscriptor[i].revista[j]=apuntador->revista[j];
                    }
                }
            }
        system("CLS");
        }else if(opcion==3){
            for(int i=0;suscriptor[i].tiempo!=0;i++){
                cout<<endl<<"Nombre: "<<suscriptor[i].nombre;
                cout<<endl<<"Tiempo: "<<suscriptor[i].tiempo;
                cout<<endl<<"Revista: "<<suscriptor[i].revista<<endl;
            }
        }else cout<<"Opción inválida \n";
        cout<<"\n¿Regresar al menú? (1 Si / 2 No)\n";
        cin>>repetir;
    }
    return 0;
    getch();
}
