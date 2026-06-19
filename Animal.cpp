#include <iostream>
#include <string>
using namespace std;

// Classe Animal com os atributos especie e som
class Animal {
public:
    string especie;
    string som;

    // Método emitir_som() que simula o som que o animal faz
    void emitir_som() {
        cout << "O " << especie << " faz: " << som << endl;
    }
};

int main() {
    // Criando alguns objetos da classe Animal
    Animal cachorro;
    cachorro.especie = "cachorro";
    cachorro.som = "Au Au!";

    Animal gato;
    gato.especie = "gato";
    gato.som = "Miau!";

    // Chamando o método para cada animal
    cachorro.emitir_som();
    gato.emitir_som();

    return 0;
}