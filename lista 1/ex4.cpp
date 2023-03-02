#include <iostream>

using namespace std;

main() {
	setlocale(LC_ALL, "Portuguese");
	
	string nome;
	int idade;
	
	cout<<"Informe o seu nome";
	cin>> nome;
	
	cout<< "Informe sua idade";
	cin>> idade;
	
	if(idade<18){
		cout<< nome << ",você é menor de idade.";
	}else if(idade >= 18 && idade<= 65){
		cout<< nome << ", você é adulto";
	}else if(idade > 65){
		cout<< nome << ", você é idoso";
	}
}
