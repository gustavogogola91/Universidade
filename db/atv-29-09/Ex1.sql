create schema controle_produto;

use controle_produto;

CREATE TABLE produto (
    cod_produto INT PRIMARY KEY,
    nome_produto VARCHAR(100),
    categoria VARCHAR(50),
    preco_produto DECIMAL(3 , 2 )
);

CREATE TABLE cliente (
    id_cliente INT PRIMARY KEY AUTO_INCREMENT,
    nome_cliente VARCHAR(100),
    logradouro VARCHAR(100),
    cep VARCHAR(20),
    cidade VARCHAR(50),
    estado VARCHAR(50),
    cpf VARCHAR(15),
    cnpj VARCHAR(50),
    telefone_celular VARCHAR(20),
    status_cliente VARCHAR(50),
    limite_credito DECIMAL(10 , 2 )
);

CREATE TABLE pedido (
    id_pedido INT PRIMARY KEY AUTO_INCREMENT,
    fk_id_cliente INT,
    fk_id_produto INT,
    data_pedido DATE,
    qtd_produto INT,
    FOREIGN KEY (fk_id_cliente)
        REFERENCES cliente (id_cliente),
    FOREIGN KEY (fk_id_produto)
        REFERENCES produto (cod_produto)
);