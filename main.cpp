#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta){
	
	cout << "SALDO Conta é: " << conta.recuperaSaldo() << endl;
}

int main(){
	
	
	Conta conta_b("UNICLASS 013","123.456.123.01","Joana D'arc");
	conta_b.depositar(3100);
	conta_b.sacar(100);
	conta_b.sacar(100);

	Conta conta_c("SATANGOSS 007","321.456.123.03","Zumbi dos Palmares");
	conta_c.depositar(700);
	conta_c.sacar(34);
	
	cout << endl;
	cout << "=================================================" << endl;
	cout << "Banco Louva-Deus dando um Kung Fu nas suas contas"	<< endl;
	cout << "=================================================" << endl;
    cout << endl << endl;
	cout << "	========================================" << endl;
	cout << "	NUMERO: " << conta_b.recuperaNumero() << endl;
	cout << "	========================================" << endl;
	cout << "	CPF: " << conta_b.recuperaCpf() << endl;
	cout << "	========================================"<< endl;
	cout << "	NOME: " << conta_b.recuperaNome() << endl;
	cout << "	========================================"<< endl;
				ExibeSaldo(conta_b);
	cout << "	========================================"<< endl;	
	cout << endl << endl;
	cout << "	========================================"<< endl;
	cout << "	NUMERO: " << conta_c.recuperaNumero() << endl;
	cout << "	========================================"<< endl;
	cout << "	CPF: " << conta_c.recuperaCpf() << endl;
	cout << "	========================================"<< endl;
	cout << "	NOME: " << conta_c.recuperaNome() << endl;
	cout << "	========================================"<< endl;
				ExibeSaldo(conta_c);
	cout << "	========================================"<< endl;
	cout << endl << endl;
	cout << "	========================================"<< endl;	
	cout << "	NUMERO DE CONTAS: " << Conta::recupera_conta_nun_decontas() << endl;
	cout << "	========================================"<< endl;	
    return 0;
}
