
create schema imobiliaria;

use imobiliaria;

create table proprietario (
	id_proprietario int primary key auto_increment,
    rg_proprietario varchar(20),
    cpf_proprietario varchar(20),
    nome_proprietario varchar(100),
    sexo_proprietario char,
    estado_civil_proprietario varchar(50)
);

create table imovel (
	id_imovel int primary key auto_increment,
    fk_id_proprietario int,
    inscricao varchar(50),
    preco_venda decimal(10,2),
    area_terreno decimal(10,2),
    area_construida decimal(10,2),
    foreign key (fk_id_proprietario)
		references proprietario (id_proprietario)
);

create table comprador (
	id_comprador int primary key auto_increment,
	nome_comprador varchar(100),
    cpf_comprador varchar(20),
    estado_civil_comprador varchar(50),
    profissao_comprador varchar(50)
);

create table corretor (
	id_corretor int primary key auto_increment,
    num_registro varchar(20),
    nome_corretor varchar(100),
    data_admissao date,
    sexo_corretor char,
    estado_civil_corretor varchar(50)
);

create table venda (
	id_venda int primary key auto_increment,
    fk_id_comprador int,
    fk_id_corretor int,
    fk_id_imovel int,
    data_venda date,
    valor_proposto decimal(10,2),
    valor_final decimal(10,2),
    valor_comissao_corretor decimal(10,2),
    tipo_pagamento varchar(50),
    foreign key (fk_id_comprador)
		references comprador (id_comprador),
	foreign key (fk_id_corretor)
		references corretor (id_corretor),
	foreign key (fk_id_imovel)
		references imovel (id_imovel)
);