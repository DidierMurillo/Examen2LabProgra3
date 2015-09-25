# include "racional.h"

# include <string>
using std::string;

# include <iostream>
using namespace std;

# include <vector>
using std::vector;


int menu();
int main(int argc, char const *argv[]){
	vector<string> operaciones;
	vector<Racional> racionales;

	int seleccion=0;
	int numerador;
	int denominador;
	while(seleccion!=7){
		seleccion = menu();
		if (seleccion == 1){
			cout<<"porfavor ingrese el numerador:";
			cin>>numerador;
			cout<<"porfavor ingrese el denominador, recuerde que no deberia de ser 0";
			cin>>denominador;

		}else if (seleccion==2){

		}else if (seleccion==3){

		}else if (seleccion==4){

		}else if (seleccion==5){

		}else if (seleccion==6){

		}


	}



	
	return 0;
}

int menu(){
	int seleccion=0;
	while(seleccion <1 || seleccion >7){
		cout<<"1) Crear racionales "<<endl;
		cout<<"2) Suma de racionales "<<endl;
		cout<<"3) Resta de racionales "<<endl;
		cout<<"4) Multiplicacion de racionales "<<endl;
		cout<<"5) División de racionales "<<endl;
		cout<<"6) Ver historial de operaciones "<<endl;
		cout<<"7) Salir"<<endl;
		cin>>seleccion;
	}
	return seleccion;

}


