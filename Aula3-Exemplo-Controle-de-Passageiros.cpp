//Exemplo apresentado na aula 3 de Estrutura de Dados, curso de Engenharia de Software Estácio.

#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

	
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	struct aviao
	{
		char 	nomeDoPassageiro[30], 
				origem[20],
				destino[20], 
				numeroDaPassagem[15], 
				identidade[15], 
				tel[15];
	}
	//Declaração direta do conteúdo nas variáveis. 
	//Variáveis separadas por vírgula, exceto a última que encerra o Struct com ;
	passageiro1={"Mr Lopes, João","Brasil","Londres","Gol 1234", "IFP2222222222", "21111111111"},
	passageiro2={"Mrs Lopes, Tereza","Brasil","Paris","Gol 1234", "IFP3333333333", "21222222222"},
	passageiro3={"Mr Ferreira, Marcelo","Brasil","Lisboa","Gol 1239", "IFP4444444444", "21333333333"};
	
	system("cls");
	cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
	cout<<"\nNome do Passageiro: "<<passageiro1.nomeDoPassageiro;
	cout<<"\nOrigem: "<<passageiro1.origem<<"\tDestino"<<passageiro1.destino;
	cout<<"\nNúmero da Passagem: "<<passageiro1.numeroDaPassagem<<"\tIdentidade: "<<passageiro1.identidade<<"\tTelefone: "<<passageiro1.tel;
	cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";

	cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
	cout<<"\nNome do Passageiro: "<<passageiro2.nomeDoPassageiro;
	cout<<"\nOrigem: "<<passageiro2.origem<<"\tDestino"<<passageiro2.destino;
	cout<<"\nNúmero da Passagem: "<<passageiro2.numeroDaPassagem<<"\tIdentidade: "<<passageiro2.identidade<<"\tTelefone: "<<passageiro2.tel;
	cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
	
	cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
	cout<<"\nNome do Passageiro: "<<passageiro3.nomeDoPassageiro;
	cout<<"\nOrigem: "<<passageiro3.origem<<"\tDestino"<<passageiro3.destino;
	cout<<"\nNúmero da Passagem: "<<passageiro3.numeroDaPassagem<<"\tIdentidade: "<<passageiro3.identidade<<"\tTelefone: "<<passageiro3.tel;
	cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
	
	cout<<"\n";
	system("pause");
	
}


