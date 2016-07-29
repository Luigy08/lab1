#include <iostream>
using std::cout;
using std::cin;
int factorial(int);
int divisores(int);
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
				int num1=0,num2=0;

				cout<<"Ingresar primer numero: ";
				cin>>num1;
				cout<<"Ingresar segundo numero: ";
				cin>>num2;
			
				
				int Sdiv2=divisores(num2);
				int Sdiv1=divisores(num1);
				cout<<"Suma de los divisores del PRIMER numero: "<<Sdiv1<<"\n";
				cout<<"Suma de los divisores del SEGUNDO numero: "<<Sdiv2<<"\n";
				if(Sdiv1==num2&&Sdiv2==num1){
					cout<<"Los nuero son amigable...\n";
				}
				break;				
			}
		}
	}
	
}
int divisores(int numero){
	int salida=0;
	for(int i=1;i<numero;i++){
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

