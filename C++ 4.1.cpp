#include<iostream>

using namespace std;

int main(){
	float salarioInicial,incremento,salarioAnual;
	int cont = 1;
	
	salarioInicial = 1500;
	salarioAnual = salarioInicial;
	incremento = 0.1;
	
	cout<<"Salario inicial S/"<<salarioInicial<<endl;
	
	while(cont<=6){
		salarioAnual = salarioAnual + (salarioAnual * incremento);
		cout<<"Salario en el anio "<<cont<<" es de S/"<<salarioAnual<<endl;
		cont++;
	}
	
	
	cout<<"El salario en el ultimo anio es de S/"<<salarioAnual<<endl;

	system("pause");
	return 0;
}
