#include <iostream>
using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int idade, cigarros, minutos, dias;
    
    cout << "Informe sua idade: ";
    cin >> idade;
    
    cout << "Informe a quantidade de cigarros que você fuma diariamente: ";
    cin >> cigarros;
    
    minutos = 10;
    dias = (idade * 365) * (cigarros * minutos) / (24 * 60);
    
    cout << "Você perdeu " << dias << " dias de vida devido ao hábito de fumar." << endl;
    
}
