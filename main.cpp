// Comparar 3 numeros

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float a, b, c;
    char d;
    inicio:
    system("cls");
    cout << "Insira 3 numeros:\n";
    cin >> a >> b >> c;
    while (cin.fail()) // se o cin der falha é aqui que faz a verificação dos numeros 
    {
    	system("cls");
        cin.clear(); // limpa o buffer de entrada para que o cin se torne utilizavel de novo
        cin.ignore(INT_MAX, '\n'); // ignora a ultima entrada ou seja a do erro.
        cout << "Erro. So pode inserir numeros inteiros ou decimais.\n";
        cout << "Insira 3 numeros:\n";
        cin >> a >> b >> c;
    }
    if (a == b && b == c) { cout << "\nn1, n2 e n3 sao todos iguais\n" << a << " = " << b << " = " << c << endl;  goto fim; } // Se o n1 = n2 e n2 = n3 diz que sao todos iguais e sai para o fim com o goto fim;
    if (a==b) { // se n1=n2 diz  em baixo que n1 igual a n2
	cout << "\nn1 igual n2\n";
	if (a>c) { cout << "n1 e n2 maior que n3\n" << a << " = " << b << " > " << c << endl; } // dentro da condição acima se o n1 > n3 logo n1 e n2 são maiores que n3
        else { cout << "n3 maior que n1 e n2\n" << c << " > " << a << " = " << b << endl; } // se a condição em cima n for verdadeira logo n3 é maior que n1 e n2
    }
    if (a==c) { // se n1=n3 diz em baixo n1 igual n3
	cout << "\nn1 igual n3\n";
	if (a>b) { cout << "n1 e n3 maior que n2\n" << a << " = " << c << " > " << b << endl; } // Se n1 for maior que n2, mostra n1 e n3 são maiores que n2
        else { cout << "n2 maior que n1 e n3\n" << b << " > " << a << " = " << c << endl; } // caso no if em cima nao seja verdade logo n2 maior que n1 e n3
    }
    if (b==c) { // aqui é o mesmo processo, se n2 = n3 diz em baixo se for verdade
	cout << "\nn2 igual n3\n";
	if (b>a) { cout << "n2 e n3 maior que n1\n" << b << " = " << c << " > " << a << endl; } // aqui visto q n2 é igual a n3 vamos comparar se são maiores que n1 e se forem mostra n2 e n3 maior que n1
	else { cout << "n1 maior que n2 e n3\n" << a << " > " << b << " = " << c << endl; } // caso o if em cima seja falso então n1 é maior que n2 e n3
    }
    if (a != b && a !=c && b != c) { // aqui tive que  meter este if pq se os numeros fossem todos diferentes nao mostrava nada então fiz um se para todos fossem !=
	if(a > b && a > c) { cout << "\nn1 maior que n2 e n3\n" << a << " > " << fmax(b,c) << " > " << fmin(b,c) << endl; } // se os numeros sao tds diferentes vi se o n1 maior que n2 e n3 se sim mostra a mensagem
	if(b > a && b > c) { cout << "\nn2 maior que n1 e n3\n" << b << " > " << fmax(a,c) << " > " << fmin(a,c) << endl; } // se o n2 é maior que o n1 e n3 mostra a mensagem
	if(c > a && c > b) { cout << "\nn3 maior que n1 e n2\n" << c << " > " << fmax(a,b) << " > " << fmin(a,b) << endl; } // e se o n3 é maior que n1 e n2 mostra a mensagem
    }
    fim:
	cout << "\nDeseja sair do programa? (S/N)\n";
	cin >> d;
	if (d == 'N' || d == 'n') { goto inicio; }
	else cout << "\nHasta la vista, baby!\n";    	
    return 0;
}
// este fim: é para onde o programa vem quando executo o goto fim; la em cima se são todos iguais o programa não pode correr todos os outros se's senão é assustador
