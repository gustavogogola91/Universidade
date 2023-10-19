create schema maternidade;
use maternidade;

create table MAE (
	id_mae int primary key auto_increment,
    nome_mae varchar(255),
    cpf_mae varchar(30),
    idade_mae int,
    logradouro_mae varchar(300),
    cep_mae varchar(50),
    cidade_mae varchar(255),
    estado_mae varchar(255),
    telefone_mae varchar(50),
    estado_civil varchar(255),
    data_nasc_mae date
);

create table MEDICO (
	id_medico int primary key auto_increment,
    crm_medico varchar(255),
    nome_medico varchar(255),
    idade_medico int,
	telefone_medico varchar(255),
    especialidade_medico varchar(255)
);

create table BEBE (
	id_bebe int primary key auto_increment,
    nome_bebe varchar(255),
    data_nasc date,
    peso float,
    comprimento int,
    id_mae_fk int,
    id_medico_fk int,
    
    foreign key (id_mae_fk)
    references MAE (id_mae),
    
    foreign key (id_medico_fk)
    references MEDICO (id_medico)
);
