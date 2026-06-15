#include "Produto.h"

// Construtor: apenas guarda os valores recebidos nos atributos.
Produto::Produto(int id, const std::string& nome,
                 double precoCusto, double precoVenda,
                 int quantidade, int estoqueMinimo)
                : id(id), nome(nome), precoCusto(precoCusto), 
                precoVenda(precoVenda), quantidade(quantidade), 
                estoqueMinimo(estoqueMinimo) {}

void Produto::setQuantidade(int qtd){
    quantidade = qtd;
}

// Monta um texto do tipo "Celular Samsung (Eletronico)".
std::string Produto::descricao() const {
        return nome + "(" + getTipo() + ")";
}
