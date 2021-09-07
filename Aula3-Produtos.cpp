#include <iostream>
#include <locale.h>
#define tam 3 //Apresenta uma diretiva à aplicação, que percorre o código substituindo o valor em cada ocorrência.
using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	struct prodCad
	{
		int cod;
		float precoDeCompra, precoDeVenda;
	};

	//Declaração de uma variável dinâmica, constituída conforme a entrada de dados.
	prodCad produtos[tam];
	
	int x, num;
	float margem;
	cout<<"Informe a margem percentual aplicada sobre o preço de compra (não utilize %): ";
	cin>>margem;
	margem = 1+(margem/100);
	
	for (x=0; x<tam ; x++)
	{
		cout<<"\nInforme o Código do Produto: ";
		cin>>num;
		
		//Verificando se o valor inserido corresponde à faixa permitida
		while(num<1 || num > 1000)
		{
			cout<<"\nCódigo Inválido. Fora da faixa permitida, utilize valores na faixa 1-1000!";
			cout<<"\nInforme o Código do Produto: ";
			cin>>num;
		}
		
		//A variável dinâmica é ajustada no loop utilizando a variável x, assim é possível inserir dados 
		//sem uma declaração prévia de um número x de variáveis.
		produtos[x].cod=num;
		cout<<"Preço de Compra: ";
		cin>>produtos[x].precoDeCompra;
		while(produtos[x].precoDeCompra<=0)
		{
			cout<<"\nValor inválido. Informe um preço de compra diferente de zero.";
			cin>>produtos[x].precoDeCompra;
		}
		produtos[x].precoDeVenda = produtos[x].precoDeCompra*margem;
		
	}
//		system("cls");
		cout<<"\nCódigo\tCompra\tVenda";
		cout<<"\n----------------------------------------------";
		for(x=0; x<tam; x++)
		cout<<"\n"<<produtos[x].cod<<"\t"<<produtos[x].precoDeCompra<<"\t"<<produtos[x].precoDeVenda;
		cout<<"\n\nA margem aplicada sobre os preços de compra foi de: "<<(margem-1)*100<<"%"<<endl;
		system("pause");		
		
}
