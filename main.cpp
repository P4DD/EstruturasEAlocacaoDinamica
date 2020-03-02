#include <iostream>
#include "aluno.h"
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    int num_alunos = 0;
    cout << "Insira o numero de alunos:";
    cin>>num_alunos;

    aluno * turma = new aluno[num_alunos];

    for(int i = 0;i<num_alunos;i++){
        char nome[100];
        char curso[100];
        int numero;
        cout << "Insira o numero de aluno:";
        cin>>numero;
        cout << "Insira o nome do aluno:";
        cin>>nome;
        cout << "Insira o curso do aluno:";
        cin>>curso;

        aluno novo = criaNovoAluno(numero,nome,curso);
        inserirAluno(turma,novo);
    }

    aluno ** turmaD = new aluno*[num_alunos];

    for(int i = 0;i<num_alunos;i++){
        char nome[100];
        char curso[100];
        int numero;
        cout << "Insira o numero de aluno:";
        cin>>numero;
        cout << "Insira o nome do aluno:";
        cin>>nome;
        cout << "Insira o curso do aluno:";
        cin>>curso;

        aluno * novo = new aluno;
        novo->numero = numero;
        strcpy(novo->curso,curso);
        strcpy(novo->nome,nome);
        inserirAluno(turmaD,novo);
    }

    imprimeTurma(turma);

    return 0;
}