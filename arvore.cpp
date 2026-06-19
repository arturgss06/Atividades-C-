#include <iostream>
#include <vector>
#include <memory>
#include <optional>

using namespace std;

//Classe Nó
class No {
public:
    int valor ;
    optional<int> indice_esquerda; //
    optional<int> indice_direita; //

    // construtor 
    No(int valor, optional<int> esquerda = nullopt, optional<int> direita = nullopt)
      : valor(valor), indice_esquerda(esquerda), indice_direita(direita){}
    
};

//classe arvore binaria 
class ArvoereBinaria {
private:
    vector<No> nos; //lista de nós

public:
   
   void adiciona_no(int valor, optional<int> indice_esquerda = nullopt,
                    optional<int> indice_direita = nullopt){
        No no(valor, indice_esquerda, indice_direita);
        nos.push_back(no);
    } 

     void exibir () const{
        for(size_t i = 0; i< nos.size(); i++){
            cout << "Nó " << i << ": valor=" << nos[i].valor;

            if (nos[i].indice_esquerda.has_value()){
                cout << ", esquerda=" << nos[i].indice_esquerda.value();
            } else {
                cout << ", esquerda=None";
            }

            if (nos[i].indice_direita.has_value()){
                cout << ", direita=" << nos[i].indice_direita.value();
            } else {
                cout << ", direita=None";
            }
            cout << endl;
        }
     }

     void percorrer_em_ordem (optional<int> indice = 0 ){
        if (!indice.has_value()){
            return;
    }
      int idx = indice.value();

      if (idx < 0 || idx >= static_cast<int>(nos.size())){
        return;
      }

      percorrer_em_ordem(nos[idx].indice_esquerda);

      cout << nos[idx].valor << " ";

      percorrer_em_ordem(nos[idx].indice_direita);
    }
};