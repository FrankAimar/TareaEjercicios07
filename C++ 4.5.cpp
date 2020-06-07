#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int dia = 1;
	double peso = 3 , ahorroDiario , ahorroTotal = 0;

	while(dia<=365){
		ahorroDiario = pow(peso, dia);
		ahorroTotal+= ahorroDiario;
		dia++;
	}
	
	cout<<"\nEl ahorro anual es de "<<ahorroTotal<<" pesos."<<endl;

	system("pause");
	return 0;
}
