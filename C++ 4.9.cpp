#include<iostream>
using namespace std;

int main(){
	int anio = 1 ,mes, max;
	float monto,totalMonto = 0, totalAnual = 0 , interes = 0;
	
	cout<<"Digite cantidad de N anios : ";
	cin>>max;
	
	while(anio<=max){
		cout<<"Anio "<<anio<<"\n";
		mes = 1;
		totalMonto = 0;
		
		while(mes<=12){
			cout<<"  Mes "<<mes<<" .- Digite monto a depositar : ";
			cin>>monto;
			mes++;
			totalMonto+= monto;
		}
		
		interes = totalMonto * 0.1;
		totalMonto+= interes;
		totalAnual+= totalMonto;
		anio++;
		
		cout<<"\nEl valor anual con el 10% de interes es de "<<totalMonto<<"\n\n";
	}
	
	cout<<"\nEl total de inversion de los "<<max<<" anios es de "<<totalAnual<<endl;

	system("pause");
	return 0;
}
