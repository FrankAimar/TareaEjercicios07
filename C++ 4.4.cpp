#include<iostream>

using namespace std;

int main(){
	int max , num,cont = 1;
	int rojo = 0 , verde = 0 , blanco = 0;
	
	cout<<"Digite N focos : ";
	cin>>max;
	
	cout<<"\nLos numeros de los colores son los siguientes....\n";
	cout<<"1.- Verde\n2.- Blanco\n3.- Rojo\n\n";
	
	while(cont<=max){
	
		cout<<cont<<".-Digite numero : ";
		cin>>num;
		
		if(num>=1 && num<=3){
			if(num == 1){
				verde++;
			}else if(num == 2){
				blanco++;
			}else{
				rojo++;
			}
			
			cont++;
		}else{
			cout<<"\nNumero de foco incorrecto.!!\n";
			cout<<"VUELVA A INTENTARLO..!!\n\n";
		}	
		
	}
	
	cout<<"\nLa cantidad de focos de color verde es de "<<verde<<endl;
	cout<<"La cantidad de focos de color blanco es de "<<blanco<<endl;
	cout<<"La cantidad de focos de color rojo es de "<<rojo<<endl;

	system("pause");
	return 0;
}
