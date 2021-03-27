#include <iostream>

/* 	Se consulta cuantos alumnos desea ingresar
	y se solicita el nombre, apellido y del 
	alumno luego se ingresan los datos y por 
	ultimo se imprimen                        */

using namespace std;

struct persona{
	string nombre;
	string apellido;
	int edad;
};

int main(int argc, char** argv) {
	int cant, valor;
	string cadena;
	
	cout<<"¿Cuantos alumnos desea registrar?"<<endl;
	cin>>cant;
	persona alumno[cant]; //asignar la cantidad a un array alumno de tipo persona
	
	// Se ingresan los datos para todos los alumnos
	cout<<"Registrando Datos......."<<endl;
	for(int i=0;i<cant;i++){
		cout<<"------>>>Alumno#"<<i+1<<endl;
		cout<<"Ingrese el nombre:";
		cin>>cadena;
		alumno[i].nombre = cadena;
		cout<<"Ingrese el apellido:";
		cin>>cadena;
		alumno[i].apellido = cadena;
		cout<<"Ingrese la edad:";
		cin>>valor;
		alumno[i].edad = valor;
		cout<<"\n";
	}
	
	// Se imprimen los registros
	cout<<"Imprimiendo Datos......."<<endl;
	for(int i=0;i<cant;i++){
		cout<<"------>>>Alumno#"<<i+1<<endl;
		cout<<"Nombre Completo:"<<alumno[i].nombre<<" "<<alumno[i].apellido<<endl;
		cout<<"Edad:"<<alumno[i].edad;
		cout<<"\n";
	}
	return 0;
}
