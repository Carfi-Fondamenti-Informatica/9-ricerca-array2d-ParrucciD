#include "lib.h"
int funzione(char nomi[10][20],char nome[20]){
for(int i=0;i<10;i++){
bool flag=true;
for (int j=0;j<20;j++){
if(nomi[i][j]!=nome[j]) flag=false;
}
if(flag) return i;
}
return -1;

}
