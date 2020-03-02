//
// Created by Filipe Quintal on 2020-03-02.
//
#include "aluno.h"
#include <string>
#include <iostream>
using namespace std;

int posLivre = 0;

void inserirAluno(aluno * alunos, aluno novo){
    alunos[posLivre] =  novo;
    posLivre++;
}

void inserirAluno(aluno ** alunos, aluno * novo){
    alunos[posLivre] =  novo;
    posLivre++;
}

aluno criaNovoAluno(int numero, char nome[100], char curso[100]){
    aluno novo;

    novo.numero = numero;
    strcpy(novo.nome,nome);
    strcpy(novo.curso,curso);

    return novo;
}

void imprimeTurma(aluno * alunos){
    for(int i=0;i<posLivre;i++)
        cout << "Nome: "<<alunos[i].nome<<"  Curso: "<<alunos[i].curso<<" Número: "<<alunos[i].numero<<endl;
}