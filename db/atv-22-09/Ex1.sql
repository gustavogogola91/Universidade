create schema cliente_carta;
use cliente_cartao;

create table CARTAO (
	id_cartao int primary key auto_increment,
    num_cartao varchar(20),
    validade_cartao date
);

create table PESSOA (
	id_pessoa int primary key auto_increment,
    id_cartao_fk int,
	nome varchar(255),
    sobrenome varchar(255),
    endereco varchar(255),
    cidade varchar(255),
    estado varchar(255),
    foreign key (id_cartao_fk)
    references CARTAO (id_cartao)
);

