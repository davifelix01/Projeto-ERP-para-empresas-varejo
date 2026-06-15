#include "ProdutoFactory.h"

Produto* ProdutoFactory::criarComum(int id, const std::string& nome,
        double precoCusto, double precoVenda, int quantidade, int estoqueMinimo)
        {
            return new ProdutoComum(id, nome, precoCusto, precoVenda, quantidade, estoqueMinimo);
}

Produto* ProdutoFactory::criarEletronico(int id, const std::string& nome, double precoCusto,
            double precoVenda, int quantidade, int estoqueMinimo, int garantiaMeses){
                return new ProdutoEletronico(id, nome, precoCusto, precoVenda, quantidade, estoqueMinimo, garantiaMeses);
}

Produto* ProdutoFactory::criarPerecivel(int id, const std::string& nome, double precoCusto,
            double precoVenda, int quantidade, int estoqueMinimo, const std::string& validade){
                return new ProdutoPerecivel(id, nome, precoCusto, precoVenda, quantidade, estoqueMinimo, validade);
            }

//em andamento