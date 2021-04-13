#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

int main(){
	
    Conta contaa;
	 contaa.defineNome("Darci Ribeiro");
	 contaa.depositar(700);
	 contaa.sacar(100);
	 
    Conta contab;
    contab.depositar(500);
    contab.sacar(200);

	cout << "Saldo - Conta - a: " << contaa.recuperaSaldo() << endl;
	cout << "Saldo - Conta - a: " << contaa.recuperaNome() << endl;
	
	
	
    return 0;
}
