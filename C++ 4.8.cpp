#include<iostream>
using namespace std;

int main(){
	int max , cont = 1;
	float precio , desc , precioFinal,total = 0;
	
	cout<<"Digite cantidad de N articulos : ";
	cin>>max;
	
	while(cont<=max){
		cout<<cont<<".-Digite precio del articulo : ";
		cin>>precio;
		
		if(precio>=200){
			desc = 0.15 * precio;
		}else if(precio>100 && precio<200){
			desc = 0.12 * precio;
		}else{
			desc = 0.10 * precio;
		}
		
		precioFinal = precio - desc;
		total+= precioFinal;
		
		cout<<"   El descuento por el articulo es de "<<desc;
		cout<<"\n   El costo por el articulo es de "<<precioFinal<<"\n\n";
		
		cont++;
	}
	
	cout<<"El costo a pagar por los "<<max<<" articulos es de "<<total<<endl;

	system("pause");
	return 0;
}
