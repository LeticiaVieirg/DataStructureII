#include <stdio.h>
#include <stdlib.h>

typedef struct NO *ArvAVL;

typedef NO{
  int info;
  int alt;
  struct NO *esq;
  struct NO *dir;
};

ArvAVL *raiz;

//Calcular altura de um no
int alt_NO(struct NO *no){
  if(NO==NULL){
    return -1;
  }else{
    return no->alt;
  }
}

//calculalt fator de balanceamento de um no
int fatorBalanceamento(struct NO *no){
  return labs(alt_NO(no->es) - alt_NO(n->dir));
}

//Calcular maior valor
int maior(int x, int y){
  if(x>y){
    return x
  }else{
    return y
  }
}


void rotacaoLL(ArvAVL *raiz){
  struct NO *no;
  no=(*raiz)->esq;
  (*raiz)->esq=no->esq;
  no->dir=*raiz
  (*raiz)->alt=maior(alt_NO((*raiz)->esq),alt_NO((*raiz)->dir))+1;

  no->alt=maior(alt_NO(no->esq), (*raiz)->alt)+1;
  *raiz=no;
}

void rotacaoLR(ArvAVL *raiz){
  rotacaoRR(&(*raiz)->esq);
  rotacaoLL(*raiz);
}
