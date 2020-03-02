struct aluno{
    int numero;
    char nome[100];
    char curso[100];
};


void inserirAluno(aluno * alunos, aluno novo);
aluno criaNovoAluno(int numero, char nome[100], char curso[100]);
void imprimeTurma(aluno * t);

void inserirAluno(aluno ** alunos, aluno * novo);
