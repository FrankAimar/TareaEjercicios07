#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int max , cont = 1 , horas;
	float sueldoHora , sBasico,desc , sBruto;
	char nombre[30];
	
	cout<<"Digite N Trabajadores : ";
	cin>>max;
	
	while(cont<=max){
		fflush(stdin);
		cout<<"Trabajador N."<<cont<<endl;
		cout<<"  Digite su nombre : ";
		gets(nombre);
		cout<<"  Horas Trabajadas : ";
		cin>>horas;
		cout<<"  Sueldo Hora : ";
		cin>>sueldoHora;
		
		sBasico = horas * sueldoHora;
		
		if(sBasico>=0 && sBasico<=150){
			desc = 0.05 * sBasico;
		}else if(sBasico>150 && sBasico<300){
			desc = 0.07 * sBasico;
		}else if(sBasico>=300 && sBasico<450){
			desc = 0.05 * sBasico;
		}
		
		sBruto = sBasico - desc;
		
		cout<<"  El sueldo del trabajador es de "<<sBruto<<"\n\n";

		cont++;
	}

	system("pause");
	return 0;
}
