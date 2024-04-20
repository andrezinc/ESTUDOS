#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
int main(){
	int numero,transmacao;
	

	std::string romanos[20] = {"M","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
	int numeros[20]=          {1000,500,400,100,90,  50,  40 , 10 , 9 , 5  , 4  , 1};
	std::cin>>numero;
	int i=0;
	while(numero){
		if(numero>=numeros[i]){
			std::cout<<romanos[i];
			numero=numero-numeros[i];
		}
		else{
			i++;
		}

	}
			
}
