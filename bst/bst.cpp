#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct node {
    char letter;
    struct node *left;
    struct node *right;
};

node *CreateNode(char letter){
    node *newNode = (node *) malloc(sizeof(node));
    newNode->letter = letter;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void Insert(node **tree, char letter){
    if (*tree == NULL){
        *tree = CreateNode(letter);
    }
    else {
        char rootLetter = (*tree)->letter;
        if (letter < rootLetter){
            Insert(&(*tree)->left, letter );
        }
        else {
            Insert(&(*tree)->right, letter );
        }
    }
}

int main(){
    node *arbol = NULL;
    Insert(&arbol, 'M');
    Insert(&arbol, 'O');
    Insert(&arbol, 'Q');
    Insert(&arbol, 'Z');
    Insert(&arbol, 'W');
    Insert(&arbol, 'R');
    Insert(&arbol, 'T');
    Insert(&arbol, 'U');
    Insert(&arbol, 'A');
    Insert(&arbol, 'B');
    Insert(&arbol, 'C');
    Insert(&arbol, 'D');
    Insert(&arbol, 'E');
    Insert(&arbol, 'F');
    Insert(&arbol, 'G');
    Insert(&arbol, 'H');
    return 0;
}
