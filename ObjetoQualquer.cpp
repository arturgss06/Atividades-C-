#include <iostream>
using namespace std;
//Aula 15/06/2026 - Professora Érica Dilly
class Televisao{
private:
    string tipo;
public:
    Televisao(string tipo){
        this->tipo = tipo;
    }
    void ligar(){
    cout << "\nTelevisão " << tipo <<  " liga \n"; 
    }
    void desligar(){
    cout << "\nTelevisão " << tipo <<  " desliga\n"; 
    }

};

int main(){
    Televisao t1("LED");
    t1.ligar();
    t1.desligar();
    return 0;
}