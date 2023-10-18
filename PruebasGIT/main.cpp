#include <iostream>
#include <string>

using namespace std;
Void FuncionKarla() 
{
    Cout<<"\n\t no\n";
} 
void FuncionDaniella()
{
    cout << "\n\t:p \n";
}

void FuncionAngel()
{
    cout << "\n\tMensaje de Angel Ramirez Castro para GIT\nHola\n";
}

void FuncionAline()
{
    cout << "\n\tMensaje \n";
}

void FuncionJuanPa()
{
    string nombre;
    cout << "Por favor, introduce tu nombre: ";
    cin >> nombre;
    cout << "Hola, " << nombre << "! Este es tu mensaje personalizado:\n";
}

int main()
{
    FuncionJuanPa();
    FuncionAngel();
    FuncionAline();    
    FuncionDaniella();
    FunciónKarla();
    return 0;
}
