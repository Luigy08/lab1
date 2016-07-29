#include <iostream>
#include <stdio.h>
#include <stdlib.h>
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
				int respuesta=0;
				int con=4;
				int tem;
				while(numero>0){
					tem=numero;
					do{
						respuesta+=factorial(tem%10);
						tem=(tem%10)/10;	
					}while(tem%10!=0);

					if(numero==respuesta){
						cout<<"El numero: "<<numero<<" Cumple";
						
					}
					numero--;
										
				}
				break;	
			}
			case 2:{
				
			}
		}
	}
	
}
int factorial(int n){
	if(n==0){
		return 1;	
	}else{
	return n*factorial(n-1);
	}
}

