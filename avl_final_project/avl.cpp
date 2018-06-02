#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

typedef struct avl{
    int number;
    string letter;
    int balanceFactor; 
    struct avl *left, *right;
    bool deleted;
} avl;

void rotateLeftLeft(avl* &tree){
    avl* aux = tree->left->right;
    tree->left->right = tree;
    tree->left->balanceFactor = 0; 
    avl* aux2 = tree->left;
    tree->left = aux;
    tree->balanceFactor = 0;
    tree = aux2;
}

void rotateRightRight(avl* &tree){
    avl* aux = tree->right->left;
    tree->right->left = tree;
    tree->right->balanceFactor = 0; 
    avl* aux2 = tree->right;
    tree->right = aux;
    tree->balanceFactor = 0;
    tree = aux2;
}

void rotateLeftRight(avl* &tree){
    rotateRightRight(tree->left);
    rotateLeftLeft(tree);
}

void rotateRightLeft(avl* &tree){
    rotateLeftLeft(tree->right);
    rotateRightRight(tree);
}

// CM: change int n for string value or whatever
void insert(int n, string letter, bool &increase, avl* &tree){
    if (tree == NULL){
        tree = new avl;
        tree->number = n;
        tree->letter = letter;
        tree->balanceFactor = 0;
        tree->left = NULL;
        tree->right = NULL;
        increase = true;
        tree->deleted = false;
    }
    else {
        if (n < tree->number){           
            insert(n, letter, increase, tree->left);         
            if (increase){
                switch (tree->balanceFactor){
                    case -1:{
                        tree->balanceFactor = 0;
                        increase = false;
                        break;
                    }
                    case 0:{
                        tree->balanceFactor = 1;
                        increase = true;
                        break;
                    }
                    case 1:{
                        if (tree->left->balanceFactor == 1){
                            rotateLeftLeft(tree);
                        }
                        else {
                            rotateLeftRight(tree);
                        }
                        increase = false;
                        break;
                    }
                }
            }
        }
        else {
            insert(n, letter, increase, tree->right);         
            if (increase){
                switch (tree->balanceFactor){
                    case -1:{
                        if (tree->right->balanceFactor == 1){
                            rotateRightLeft(tree);
                        }
                        else {
                            rotateRightRight(tree);
                        }
                            increase = false;                        
                        break;
                    }
                    case 0:{
                        tree->balanceFactor = -1;
                        increase = true;
                        break;
                    }
                    case 1:{
                        tree->balanceFactor = 0;
                        increase = false;
                        break;
                    }
                }
            }
        }
    }
}

string find(avl* tree, int n){
    if (tree == NULL){
        cout << "Nodo no encontrado" << endl;
        return "";
    }
    else {
        if (tree->number == n){
            if (tree->deleted){
                cout << "Nodo no encontrado" << endl;
                return "";
            }
            else {
                cout << "Encontrado el nodo:" << endl;
                return tree->letter;
            }
        }
        else if (n < tree->number){     
            return find(tree->left, n);
        }
        else {
            return find(tree->right, n);
        }       
    }
}

void deleteNode(avl* &tree, int n){
    if (tree->number == n){
        tree->deleted = true;
        cout << "Eliminado el nodo " << tree->letter << endl;
    }
    else if (n < tree->number){     
        deleteNode(tree->left, n);
    }
    else {
        deleteNode(tree->right, n);
    }
}

int main()
{
    int nodeValue = -1;
    string letter = "";
    int option = -1;
    struct avl *AVLptr = NULL;
    while (true) {
        cout << endl << "=========================================" << endl;
        cout << "\tMenú principal" << endl;
        cout << "=========================================" << endl;
        cout << "Elige una opción:" << endl;
        cout << "1. Ingresar nodo" << endl;
        cout << "2. Buscar nodo" << endl;
        cout << "3. Eliminar nodo" << endl;
        cout << "4. Salir" << endl;
        cout << "Opción: ";
        cin >> option;

        if (option == 1) {
            cout << "Ingresa el valor del nodo: " << endl;
            cin >> nodeValue;
            cout << "Ingresa el valor del nodo en letras: " << endl;
            cin >> letter;
            bool increase;
            insert(nodeValue, letter, increase, AVLptr);
        }
        else if (option == 2){
            cout << "Ingresa el valor del nodo a buscar: " << endl;
            cin >> nodeValue;
            cout << find(AVLptr, nodeValue);
        }
        else if (option == 3){
            cout << "Ingresa el valor del nodo a eliminar: " << endl;
            cin >> nodeValue;
            deleteNode(AVLptr, nodeValue);
        }
        else if (option == 4) {
            return 0;
        } else {
            cout << "Opción invalida, intenta de nuevo" << endl;
        }
    }
}
