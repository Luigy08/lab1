#include <iostream>
using std::cout;
using std::cin;
int factorial(int);
int main(int argc, char const *argv[])
{
	int op=0;
	while(op!=3){
		cout<<"1.-Factorial\n"<<"2.-Divisor\n...";
		cin>>op;
		cout<<"\n";
		switch(op){
			case 1:{
				int numero=100000;
			
				int con=4;
				int tem;
				while(numero>0){
					tem=numero;
					int respuesta=0;
					do{
						respuesta+=factorial(tem%10);
						tem=(tem/10);	
					}while(tem!=0);
					
					if(numero==respuesta){
						cout<<"El numero: "<<numero<<" Cumple\n";
						
					}
					numero--;
										
				}
				break;	
			}
			case 2:{
				int num1,num2;

				cout<<"Ingresar primer numero: ";
				cin>>num1;
				cout<<"Ingresar segundo numero: ";
				cin>>num2;
					
			}
		}
	}
	
}
int divisores(int numero){
	int salida=0;
	for(int i=0;i<numero;i++){
		if(numero%i==0){
			salida+=i;
		}
	}
	return salida;
}
int factorial(int n){
	if(n==0){
		return 1;	
	}else{
	return n*factorial(n-1);
	}
}

