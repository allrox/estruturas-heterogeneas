#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

int main(){
	
	struct voo
	{
		char nomeDoPassageiro[30], origem[20], destino[20], numeroDaPassagem[15], rg[15], tel[11];
	}	
	passageiro1=("Mr Lopes, João","Brasil","Londres","Gol 1234", "IFP222222222222", "21111111111"),
	passageiro2=("Mrs Lopes, Tereza","Brasil","Paris","Gol 1234", "IFP333333333333", "21222222222"),
	passageiro3=("Mr Lopes, Marcelo","Brasil","Lisboa","Gol 1239", "IFP444444444444", "21333333333"),;
	
	system("cls");
	cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
	cout<<"\nNome do Passageiro: "<<passageiro1.nomeDoPassageiro;
	cout<<"\nOrigem: "<<passageiro1.origem<<"\tDestino"<<passageiro1.destino;
	cout<<"\nNúmero da Passagem: "<<passageiro1.numeroDaPassagem<<"\tRG: "<<passageiro1.rg<<"\tTelefone: "<<passageiro1.tel;
	cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";

	cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
	cout<<"\nNome do Passageiro: "<<passageiro2.nomeDoPassageiro;
	cout<<"\nOrigem: "<<passageiro2.origem<<"\tDestino"<<passageiro2.destino;
	cout<<"\nNúmero da Passagem: "<<passageiro2.numeroDaPassagem<<"\tRG: "<<passageiro2.rg<<"\tTelefone: "<<passageiro2.tel;
	cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
	
	cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
	cout<<"\nNome do Passageiro: "<<passageiro3.nomeDoPassageiro;
	cout<<"\nOrigem: "<<passageiro3.origem<<"\tDestino"<<passageiro3.destino;
	cout<<"\nNúmero da Passagem: "<<passageiro3.numeroDaPassagem<<"\tRG: "<<passageiro3.rg<<"\tTelefone: "<<passageiro3.tel;
	cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
	
	cout<<"\n";
	system("pause");
	
}


