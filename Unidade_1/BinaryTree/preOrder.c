#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Info{
    char name [100];
    int mat;
    int turma;
    float note;
};

struct Node{
    struct Info info;
    struct Node* left;
    struct Node* rigth;
};

struct Node* createNode(struct Info info);
int compare(struct Info a, struct Info b);
struct Node* insert(struct Node*raiz, struct Info info);
void seeTree(struct Node *raiz);

int main(void){
    struct Info data;
    FILE *datas=fopen("data_tree.txt", "r");

    if (datas==NULL) {
      printf("Open file erro \n");
      exit(1);
    }

    struct Node*raiz=NULL;
    srand(time(NULL)); //Inicialização de numeros aleatorios

    while (fgets(data.name, sizeof(data.name), datas)!=NULL) {
      data.name[strcspn(data.name, "\n")]='0';
      fscanf(datas, "%d", &data.mat);
      fscanf(datas, "%d", &data.turma);
      data.note=rand()%10;
      fgetc(datas);

      raiz=insert(raiz, data);
    }

    fclose(datas);
    
    seeTree(raiz);
  
    return 0;
};

struct Node* createNode(struct Info info){
    struct Node* new=(struct Node*)malloc(sizeof(struct Node));

    if (new==NULL){
        fprintf(stderr, "Memory allocate error.");
        exit(1);
    }

    strcpy(new->info.name, info.name);
    new->info.mat=info.mat;
    new->info.turma=info.turma;
    new->info.note=info.note;

    new->left=NULL;
    new->rigth=NULL;
    return new;
};

struct Node *insert(struct Node *raiz, struct Info info){
    if (raiz==0){ //if null raiz create node
        return createNode(info);
    }
    if (compare(info, raiz->info)<0){  // compare and insert in the left
        raiz->left=insert(raiz->left, info);
    }
    else if(compare(info, raiz->info)>0){ //compare and insert in teh right
        raiz->rigth=insert(raiz->rigth, info);
    }
    return raiz;
};


int compare(struct Info a, struct Info b){
    return strcmp(a.name,b.name);
};

void seeTree(struct Node* raiz){
    if (raiz!=NULL){
        printf("\nName: %s \nMatricule: %d \nTurma: %d \nNote: %.2f \n", raiz->info.name, raiz->info.mat, raiz->info.turma, raiz->info.note);
        seeTree(raiz->left);
        seeTree(raiz->rigth);
    }
};

