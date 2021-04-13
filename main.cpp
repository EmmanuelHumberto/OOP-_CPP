#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta){
	
	cout << "SALDO Conta é: " << conta.recuperaSaldo() << endl;
}

int main(){
	
	
	Conta conta_b("0001","123.456.123.01","Joana D'arc");
	conta_b.depositar(700);
	conta_b.sacar(100);
	conta_b.sacar(100);

	Conta conta_c("0002","321.456.123.03","Zumbi dos Palmares");
	conta_c.depositar(700);
	conta_c.sacar(100);

	cout << "CPF: " << conta_b.recuperaCpf() << endl;
	cout << "NOME: " << conta_b.recuperaNome() << endl;
	cout << "SALDO: " << conta_b.recuperaSaldo() << endl;
	cout << endl;
	cout << "CPF: " << conta_c.recuperaCpf() << endl;
	cout << "NOME: " << conta_c.recuperaNome() << endl;
	cout << "SALDO: " << conta_c.recuperaSaldo() << endl;

    return 0;
}
