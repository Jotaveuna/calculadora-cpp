#include <iostream>
using namespace std;

int main()
{
	float n1, n2, resultado;
	int opcao;
	
	while (true)
	{
		cout << "\n--- CALCULADORA ---\n";
		cout << "1 - Soma (+)\n";
		cout << "2 - Subtracao (-)\n";
		cout << "3 - Multiplicacao (x)\n";
		cout << "4 - Divisao (/)\n";
		cout << "5 - Sair\n";
		cout << "Escolha um opcao: ";
		cin >> opcao;
		
		if (opcao == 5){
			cout << "Encerrando programa...\n";
			break;
		}
		
		while (opcao <1 || opcao >5){
			cout << "Opcao invalida! Digite novamente: ";
			cin >> opcao;
				
		}
		
		cout << "Digite o primeiro numero: ";
        cin >> n1;
        cout << "Digite o segundo numero: ";
        cin >> n2;

        if (opcao == 1) {
            cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
        } 
        else if (opcao == 2) {
            cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
        } 
        else if (opcao == 3) {
            cout << n1 << " x " << n2 << " = " << n1 * n2 << endl;
        } 
        else if (opcao == 4) {
            if (n2 == 0) {
                cout << "Erro: divisao por zero!\n";
            } else {
                resultado = n1 / n2;
                cout << n1 << " / " << n2 << " = " << resultado << endl;
            }
        }
    } 
		
		
		
	
	
	return 0;
}

