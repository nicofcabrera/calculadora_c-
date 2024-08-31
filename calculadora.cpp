#include<iostream> 
#include<conio.h>
#include<cstdlib>
#include <locale> //Libreria para acentos
#include <cmath> // Operaciones avanzadas
#include <stdio.h>
#include "membrete.h" // Libreria propia
#include "windows.h" // Colores HANDLE

#define color SetConsoleTextAttribute


using namespace std;

void clean(){
    	getch();
		system("cls");
	}

int sumar(int x ,int y){
	return x + y;
}

int resta(int a, int b){
	return a - b;
}

int multiplicacion(int a, int b){
	return a * b;
}

int raiz(int a){
	return sqrt(a);
}

int potencia(int a, int b){
	return pow(a,b);
}

float division(float a, float b){
	float result = 0;
	if(b != 0){
		result = a/b;
		}else{
			cout<<"ERROR, NO SE PUEDE DIVIDIR EN ";
		}
	return result;
	}
	
int main(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	int opcion;
	int a, b;
	bool bandera = true;
	setlocale(LC_ALL, "");
	
	
	do{
	color(hConsole,2);
	membrete();
	color(hConsole, 3);
	cout<<"\nMenu"<<endl;
	cout<<"[1] Suma"<<endl;
	cout<<"[2] Resta"<<endl;
	cout<<"[3] Multiplicación"<<endl;
	cout<<"[4] Division"<<endl;
	cout<<"[5] Potencia"<<endl;
	cout<<"[6] Raiz"<<endl;
	cout<<"[7] Salir"<<endl;
	cout<<"\nElije una opcion: ";
	cin>>opcion;
	system("cls");

	switch(opcion){
		case 1:
		color(hConsole,5);
		memSumar();
		color(hConsole,3);
			cout<<"\nIngrese el primer digito: ";
			cin>>a;
			cout<<"Ingrese el segundo digito: ";
			cin>>b;
			color(hConsole, 6);
			cout<<"\nEl resultado es: "<<sumar(a,b);
			clean();
			break;
		case 2:
			color(hConsole,5);
			memRestar();
			color(hConsole,3);
            cout<<"\nIngrese el primer digito: ";
			cin>>a;
			cout<<"Ingrese el segundo digito: ";
			cin>>b;
			color(hConsole, 6);
			cout<<"El resultado es: "<<resta(a,b);
			clean();
            break;
            
		case 3:
			color(hConsole,5);
			memMultiplicar();
			color(hConsole,3);
    	    cout<<"\nIngrese el primer digito: ";
			cin>>a;
			cout<<"Ingrese el segundo digito: ";
			cin>>b;
			color(hConsole, 6);
			cout<<"El resultado es: "<<multiplicacion(a,b);
			clean();
			break;	
		case 4:
			color(hConsole,5);
			memDividir();
			color(hConsole,3);
			cout<<"\nIngrese el primer digito: ";
			cin>>a;
			cout<<"Ingrese el segundo digito: ";
			cin>>b;
			color(hConsole, 6);
			cout<<"El resultado es: "<<division(a,b);
			clean();
			break;
		case 5:
			color(hConsole,5);
			memPotencia();
			color(hConsole,3);
			cout<<"\nIngrese la base: ";
			cin>>a;
			cout<<"Ingrese el exponente: ";
			cin>>b;
			color(hConsole, 6);
			cout<<"El resultado es: "<<potencia(a,b);
			clean();
			break;
		case 6:
			color(hConsole,5);
			memRaiz();
			color(hConsole,3);
			cout<<"\nIngrese el número para sacar raiz cuadrada: ";
			cin>>a;
			color(hConsole, 6);
			cout<<"El resultado es "<<raiz(a);
			clean();
			break;
		case 7:
			bandera = false;
		break;

	}
}while (bandera);

color(hConsole,2);
gracias();
getch();
}
