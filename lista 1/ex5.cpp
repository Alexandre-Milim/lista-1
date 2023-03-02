#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3;
    float media;

    cout << "Digite o primeiro número inteiro: ";
    cin >> n1;

    cout << "Digite o segundo número inteiro: ";
    cin >> n2;

    cout << "Digite o terceiro número inteiro: ";
    cin >> n3;

    media = (n1 + n2 + n3) / 3.0;

    cout << "A média aritmetica dos números e: " << media << endl;

    if (media >= 7) {
        cout << "Aprovado" << endl;
    } else if (media >= 5) {
        cout << "Recuperacão" << endl;
    } else {
        cout << "Reprovado" << endl;
    }

    return 0;
	
}
