#include <iostream>
using namespace std;
int main()
{

    int * pi = new int;
    *pi = 1001;
    cout << "valor inteiro = " << *pi << endl;
    cout << "localização = " << pi << endl << endl;

    double * pd = new double;
    *pd = 500.35;
    cout << " valor ponto-flutuante = " << *pd << endl;
    cout << " localização = " << pd << endl << endl;

    cout << "tamanho de pi = " << sizeof(pi) << endl;
    cout << "tamanho de pi = " << sizeof(*pi) << endl << endl;
    cout << "tamanho de pd = " << sizeof(pd) << endl;
    cout << "tamanho de pd = " << sizeof(*pd) << endl;
}