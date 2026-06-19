#include <iostream>
#include <string>
using namespace std;

class Cachorro {
public:
    string nome;
    string raca;


    void latir() {
        cout << "Au Au! O cachorro " << nome << " esta latindo." << endl;
    }
};

int main() {
    // Criando um objeto da classe Cachorro
    Cachorro meuCachorro;
    meuCachorro.nome = "goku";
    meuCachorro.raca = "pitbull";

    // Chamando o método
    meuCachorro.latir();

    return 0;
}