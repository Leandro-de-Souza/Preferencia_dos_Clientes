#include <bits/stdc++.h>

using namespace std;

int main()
{

    int codigo, soma1, soma2, soma3;

    soma1 = 0;
    soma2 = 0;
    soma3 = 0;

    cout << "Informe um codigo (1, 2, 3) ou 4 para parar: ";
    cin >> codigo;

    while (codigo != 4)
    {
        if (codigo == 1)
        {
            soma1 = soma1 + 1;
        }
        else if (codigo == 2)
        {
            soma2 = soma2 + 1;
        }
        else if (codigo == 3)
        {
            soma3 = soma3 + 1;
        }

        cout << "Informe um codigo (1, 2, 3) ou 4 para parar: ";
        cin >> codigo;
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << soma1 << endl;
    cout << "Gasolina: " << soma2 << endl;
    cout << "Diesel: " << soma3 << endl;


    return 0;
}
