#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

int main(){
	
    Conta contaa;
	 contaa.defineNome("Emmanuel");
	 contaa.defineCpf("321.456741-45");
     contaa.defineNumero("123-3");
	 contaa.depositar(700);
	 contaa.sacar(100);
	 contaa.sacar(100);
	 

	cout << "NOME Conta a: " << contaa.recuperaNome() << endl;
	cout << "NUMERO Conta a: " << contaa.recuperaNumero() << endl;
	cout << "CPF Conta a: " << contaa.recuperaCpf() << endl;
	cout << "SALDO Conta a: " << contaa.recuperaSaldo() << endl;
	
    return 0;
}
