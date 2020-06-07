#include<iostream>
using namespace std;

int main(){
	int max , cont = 1 , cant1 = 0 , cant2 = 0;
	float venta , total1 = 0 , total2 = 0 , montoTotal = 0;
	
	cout<<"Digite cantidad de N Ventas : ";
	cin>>max;
	
	while(cont<=max){
		cout<<cont<<".-Digite venta : ";
		cin>>venta;
		
		if(venta<=10000){
			cant1++;
			total1+= venta;
		}else if(venta<20000){
			cant2++;
			total2+= venta;
		}
		
		cont++;
		montoTotal+= venta;
	}
	
	cout<<"\nLa cantidad de ventas menor o igual que 10.000 son de "<<cant1<<endl;
    cout<<"La cantidad de ventas mayor igual que 10.000 y menor a 20.000 son de "<<cant2<<endl;
    cout<<"El total de ventas menor o igual que 10.000 son de "<<total1<<endl;
    cout<<"El total de ventas mayor igual que 10.000 y menor a 20.000 son de "<<total2<<endl;
    cout<<"El monto global es de "<<montoTotal<<endl;
    
	system("pause");
	return 0;
}
