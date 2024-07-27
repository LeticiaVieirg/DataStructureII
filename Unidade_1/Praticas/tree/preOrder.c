//code tree.c 
void preOrdem(struct Node* raiz) {
    if (raiz != NULL) {
        printf("Nome: %s, Matricula: %d, Turma: %d, Nota: %.2f\n", raiz->info.nome, raiz->info.mat, raiz->info.turma, raiz->info.nota);
        preOrdem(raiz->esq);
        preOrdem(raiz->dir);
    }
}
