#include <iostream>
#include "lib.h"
using namespace std;
int funzione(char nomi[10][20],char nome[]);
int main() {
    char nomi[10][20]={0};
    char nome[20]={0};

    for(size_t i=0;i<10;i++) cin >> nomi[i];

    for(int j=0;j<20;j++) nome[j];
    cin >> nome;

    int posizione = funzione(nomi,nome);
    if(posizione>=0){
        cout<< posizione << endl;
    }else{
        cout <<"non presente"<< endl;
    }
}

