#include<iostream>

using namespace std;

int main(){
	int max , num,cont = 1;
	int negativo = 0 , cero = 0 , positivo = 0;
	
	cout<<"Digite N cantidades : ";
	cin>>max;
	
	while(cont<=max){
		cout<<cont<<".-Digite un numero : ";
		cin>>num;
		
		if(num<0){
			negativo++;
		}else if(num == 0){
			cero++;
		}else{
			positivo++;
		}	
		cont++;
	}
	
	cout<<"\nLa cantidad de numeros menores a cero es de "<<negativo<<endl;
	cout<<"La cantidad de numeros iguales a cero es de "<<cero<<endl;
	cout<<"La cantidad de numeros mayores a cero es de "<<positivo<<endl;

	system("pause");
	return 0;
}
