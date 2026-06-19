#include <iostream>
#include <string>

int main() {
    // BLOCO 1: Configuração do Gabarito (Resultados Reais)
    std::string gabarito1 = "certo"; 
    std::string gabarito2 = "errado";
    std::string gabarito3 = "certo"; 

    // Variáveis para guardar os palpites do jogador e os pontos
    std::string palpite1, palpite2, palpite3;
    int pontos = 0;

    // BLOCO 2: Interface e Entrada de Dados (Palpites)
    std::cout << "=== BOLAO DA COPA DO MUNDO ===" << std::endl;
    std::cout << "Digite 'certo' para vitoria do primeiro time ou 'errado' para empate/derrota.\n\n";

    std::cout << "Jogo 1: Brasil x Alemanha -> Seu palpite: ";
    std::cin >> palpite1;

    std::cout << "Jogo 2: Franca x Argentina -> Seu palpite: ";
    std::cin >> palpite2;

    std::cout << "Jogo 3: Brasil x Franca -> Seu palpite: ";
    std::cin >> palpite3;

    // BLOCO 3: Processamento (Verificação dos Acertos)
    if (palpite1 == gabarito1) {
        pontos = pontos + 1;
    }
    if (palpite2 == gabarito2) {
        pontos = pontos + 1;
    }
    if (palpite3 == gabarito3) {
        pontos = pontos + 1;
    }

    // BLOCO 4: Resultado Final
    std::cout << "\n===============================" << std::endl;
    std::cout << "Fim do Bolao! Voce fez " << pontos << " pontos de 3 possiveis." << std::endl;
    
    if (pontos == 3) {
        std::cout << "Mito! Acertou tudo!" << std::endl;
    } else if (pontos == 0) {
        std::cout << "Que fase... Errou todos!" << std::endl;
    } else {
        std::cout << "Bom palpite, valeu a tentativa!" << std::endl;
    }

    return 0;
}