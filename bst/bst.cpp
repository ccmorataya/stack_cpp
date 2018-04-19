#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct node {
    char letter;
    struct node *left;
    struct node *right;
} Node;

struct node Tree;

node *CreateNode(char letter){
    node *newNode = (node *) malloc(sizeof(node));
    newNode->letter = letter;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int main(){
    printf("test");
    return 0;
}
