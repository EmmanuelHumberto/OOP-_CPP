#include <iostream>
#include <string>
#include "Conta.hpp"
#include "titular.hpp"
#include "cpf.hpp"
#include "funcionarios.hpp"
#include "ContaPoupanca.hpp"
/*------------------------------------------*/

using namespace std;
/*------------------------------------------
 * EXIBE SALDO*/
void ExibeSaldo(const Conta& conta)

{
    cout << "O saldo da conta é: " << conta.recuperaSaldo() << endl;
}
/*------------------------------------------
 * REALIZA SAQUE*/
void RealizaSaque(Conta& conta)

{
	conta.sacar(200);
}
/*------------------------------------------
 * MAIN*/

int main()
{
    Titular titular(Cpf("123.456.789-10"), "Riobaldo");
	ContaPoupanca umaConta("123456", titular);
    umaConta.depositar(500);
    RealizaSaque(umaConta);
    ExibeSaldo(umaConta);

    Titular outro(Cpf("098.765.432-10"),"Demostenes");
    Conta umaOutraConta("654321", titular);
    umaOutraConta.depositar(300);
    umaOutraConta.sacar(50);
    ExibeSaldo(umaOutraConta);

    cout << "Número de contas: " << Conta::recupera_conta_nun_decontas() << endl;
    Funcionarios gerente(Cpf("123.456.789-10"), "Juca Pirama", 15000);
	cout << "Nome do funcionário: " << gerente.recuperaNome() << endl;

    return 0;
}
