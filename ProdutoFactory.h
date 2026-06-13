#ifndef PRODUTOFACTORY_H
#define PRODUTOFACTORY_H

#include "Produto.h"

class ProdutoFactory{
    public:
        static Produto* criar(const std::string& tipo, int id, const std::string& nome,
        double precoCusto, double precoVenda, int quantidade, int estoqueMinimo);
};

#endif