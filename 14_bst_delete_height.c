#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *left,*right;
};

struct Node* newNode(int v){
    struct Node* n=malloc(sizeof(struct Node));
    n->data=v;n->left=n->right=NULL;
    return n;
}

struct Node* insert(struct Node* r,int v){
    if(!r) return newNode(v);
    if(v<r->data) r->left=insert(r->left,v);
    else r->right=insert(r->right,v);
    return r;
}

int height(struct Node* r){
    if(!r) return 0;
    int l=height(r->left);
    int h=height(r->right);
    return (l>h?l:h)+1;
}

int main(){
    struct Node* root=NULL;
    int n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){scanf("%d",&x);root=insert(root,x);}
    printf("Height=%d\n",height(root));
    return 0;
}