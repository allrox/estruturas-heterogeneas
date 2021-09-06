#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	//Definição da estrutura
	struct cadastro {
		char nomeDoPaciente[30],classificacao[20],tel[11];
		float altura, peso, imc;
	};
	
	//Declaração das variáveis estruturadas
	cadastro paciente1, paciente2;
	
	//Primeira estrutura 
	cout<<"\nNome do Paciente: ";cin.getline(paciente1.nomeDoPaciente, 30);
	cout<<"\nDigite Peso, Altura e IMC, pressionando enter após cada informação\n";
	cin>>paciente1.peso>>paciente1.altura>>paciente1.imc;
	cin.get(); //Remove o avanço que resulta no skip do próximo campo, "Classificação"
	cout<<"\nDigite a classificação: ";cin.getline(paciente1.classificacao, 20);
	cout<<"\nDigite o telefone: ";cin.getline(paciente1.tel,11);
	
	//Segunda estrutura
	cout<<"\nNome do Paciente: ";cin.getline(paciente2.nomeDoPaciente,30);
	cout<<"\nDigite Peso, Altura e IMC, pressionando enter após cada informação\n";
	cin>>paciente2.peso>>paciente2.altura>>paciente2.imc;
	cin.get();
	cout<<"\nDigite a classificação: ";cin.getline(paciente2.classificacao,20);
	cout<<"\nDigite o telefone: ";cin.getline(paciente2.tel,11);
	
	//Exibição das estruturas 
	system("cls");
	cout<<"\nNome do Paciente: "<<paciente1.nomeDoPaciente;
	cout<<"\nPeso\tAltura\tIMC\tClassificação";
	cout<<"\n"<<paciente1.peso<<"\t"<<paciente1.altura<<"\t"<<paciente1.imc<<"\t"<<paciente1.classificacao<<"\n";
	cout<<"\nNome do Paciente: "<<paciente2.nomeDoPaciente;
	cout<<"\nPeso\tAltura\tIMC\tClassificação";
	cout<<"\n"<<paciente2.peso<<"\t"<<paciente2.altura<<"\t"<<paciente2.imc<<"\t"<<paciente2.classificacao<<"\n";
	system("pause");
	
	
}
