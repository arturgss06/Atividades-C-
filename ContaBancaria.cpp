// ATIVIDADE DIA 15/06/2026
//THAUAN DOS SANTOS MACHADO

#include <iostream> 
#include <string>
#include <string> 

class ContaBancaria {
private:
    std::string titular;
    double saldo = 0.0;

public:
    ContaBancaria(std::string titular) {
        this->titular = titular;
    }
    
    double getSaldo() {
        return this->saldo;
    }
    
    void depositar(double valor) {
        this->saldo += valor;
    }
    
    void sacar(double valor) {
         this->saldo -= valor;
    }
};

int main() {
    ContaBancaria conta("Thauan");
    conta.depositar(500.00);
    conta.sacar(150.00);

    std::cout << "Saldo atual: " << conta.getSaldo() << "\n";

    return 0;
}