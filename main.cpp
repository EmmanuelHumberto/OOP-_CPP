#include <iostream>
#include <string>
#include "Conta.hpp"
#include "titular.hpp"
#include "cpf.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta){
	
	cout << "O saldo da conta é: " << conta.recuperaSaldo() << endl;
}

int main(){
	
	
	Titular titular("Joana D'arc");
	Cpf cpf("177.123.178-55");
	Conta conta_c(cpf, "UNICLAS 013",titular);
	conta_c.depositar(700);
	conta_c.sacar(34);

    
	
	cout << endl;
	cout << "=============================================" << endl;
	cout << " ** Banco Louva-Deus um Kung Fu de contas **"	<< endl;
	cout << "=============================================" << endl;
    cout << endl << endl;
	cout << "----------------------------------------" << endl;
	cout << "NUMERO: " << conta_c.recuperaNumero() << endl;
	cout << "----------------------------------------" << endl;
	cout << "NOME: " << titular.recuperaTitular() << endl;
	cout << "----------------------------------------" << endl;
	cout << "CPF: " << cpf.recuperaCpf() << endl;
	cout << "----------------------------------------" << endl;
	
		
	ExibeSaldo(conta_c);
   	cout << "-----------------------------------------"<< endl;	
	cout << endl << endl;
		
	cout << "========================================"<< endl;	
	cout << "NUMERO DE CONTAS: " << Conta::recupera_conta_nun_decontas() << endl;
	cout << "========================================"<< endl;	
    
	return 0;
}
