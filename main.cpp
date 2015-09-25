# include "racional.h"

# include <string>
using std::string;

# include <iostream>
using namespace std;

# include <vector>
using std::vector;

# include <sstream>
using std::stringstream;

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
			cout<<"Por favor ingrese el numerador:";
			cin>>numerador;
			cout<<"Por favor ingrese el denominador, recuerde que no deberia de ser 0";
			cin>>denominador;

			Racional temp(numerador,denominador);
			racionales.push_back(temp);
		}
		else if (seleccion==2){
			int position1, position2;
			for (int i = 0; i < racionales.size(); ++i)	{
				cout << i+1 << ". " << racionales[i] << endl;
			}
			cout << "Elija posicion primer operando: ";
			cin >> position1;
			position1--;
			cout << "Elija posicion segundo operando: ";
			cin >> position2;
			position2--;

			Racional temp;
			temp = racionales[position1] + racionales[position2];
			cout << "Resultado: " << temp << endl;

			stringstream ss;
			ss << racionales[position1] << " + " << racionales[position2] << " = " << temp;
			operaciones.push_back(ss.str());
		}
		else if (seleccion==3){
			int position1, position2;
			for (int i = 0; i < racionales.size(); ++i)	{
				cout << i+1 << ". " << racionales[i] << endl;
			}
			cout << "Elija posicion primer operando: ";
			cin >> position1;
			position1--;
			cout << "Elija posicion segundo operando: ";
			cin >> position2;
			position2--;

			Racional temp;
			temp = racionales[position1] - racionales[position2];
			cout << "Resultado: " << temp << endl;

			stringstream ss;
			ss << racionales[position1] << " - " << racionales[position2] << " = " << temp;
			operaciones.push_back(ss.str());
		}
		else if (seleccion==4){
			int position1, position2;
			for (int i = 0; i < racionales.size(); ++i)	{
				cout << i+1 << ". " << racionales[i] << endl;
			}
			cout << "Elija posicion primer operando: ";
			cin >> position1;
			position1--;
			cout << "Elija posicion segundo operando: ";
			cin >> position2;
			position2--;

			Racional temp;
			temp = racionales[position1] * racionales[position2];
			cout << "Resultado: " << temp << endl;

			stringstream ss;
			ss << racionales[position1] << " * " << racionales[position2] << " = " << temp;
			operaciones.push_back(ss.str());
		}
		else if (seleccion==5){
			int position1, position2;
			for (int i = 0; i < racionales.size(); ++i)	{
				cout << i+1 << ". " << racionales[i] << endl;
			}
			cout << "Elija posicion primer operando: ";
			cin >> position1;
			position1--;
			cout << "Elija posicion segundo operando: ";
			cin >> position2;
			position2--;

			Racional temp;
			temp = racionales[position1] / racionales[position2];
			cout << "Resultado: " << temp << endl;

			stringstream ss;
			ss << racionales[position1] << " / " << racionales[position2] << " = " << temp;
			operaciones.push_back(ss.str());
		}
		else if (seleccion==6){
			for (int i = 0; i < operaciones.size(); ++i){
				cout << i+1 << operaciones[i] << endl;
			}
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


