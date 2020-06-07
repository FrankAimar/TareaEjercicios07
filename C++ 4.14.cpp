#include<iostream>
using namespace std;

int main(){
	int max , cont = 1;
	float nota;
	int aprobado = 0 , desaprobado = 0;
	
	cout<<"Digite N alumnos : ";
	cin>>max;
	
	while(cont<=max){
		do{
			cout<<"Nota del alumno "<<cont<<" : ";
	    	cin>>nota;
	    	
	    	if(nota<0 || nota>20){
	    		cout<<"\nSolo notas en el rango de 0 y 20\n\n";
			}
	    	
		}while(nota<0 || nota>20);
		
		if(nota<11.5){
			desaprobado++;
		}else{
			aprobado++;
		}
		cont++;
	}
	
	cout<<"\nEl numero de aprobados es de "<<aprobado<<endl;
    cout<<"El numero de desaprobados es de "<<desaprobado<<endl;

	system("pause");
	return 0;
}
