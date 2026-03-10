
#include <iostream>
using namespace std;

int main() {
	float n1, n2, resultado;
	int opcao;
	
	printf("CALCULADORA\n");
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	printf("\nescolha uma opcao:\n 1-soma(+)\n 2-subtracao(-)\n 3-multiplicacao(x)\n 4-divisao(/)\n");
	cin >> opcao;
	
	if(opcao == 1)
	{
		opcao = (n1 + n2);
		cout << n1 << " + " << n2 << " = " << n1 + n2;
		
	}
	
	else if(opcao == 2)
	{
		opcao = (n1 - n2);
		cout << n1 << " - " << n2 << " = " << n1 - n2;	

	}
	
	else if(opcao == 3)
	{
			opcao = (n1 * n2);
		cout << n1 << " x " << n2 << " = " << n1 * n2;
	
	}
	
	else if(opcao == 4)
	{
			opcao = (n1 / n2);
		cout << n1 << " / " << n2 << " = " << n1 / n2;
	}
}
