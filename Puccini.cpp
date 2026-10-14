#include <iostream>
using namespace std;
int main(){
    int N;
    int matriz[n][2];
    int vector[n];
    do{
        cin >> N;
    }while (n<3);
    for (int i=0; i<n; i++){           
        for (int j=0; j<2; j++){
            cin >> mat[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<2; j++){
          vector[i] = mat[i][0]+mat[i][1]; // la suma de los numeros dentro de la matriz
        }
    }
    for (int i=0; i<n; i++){
            cout << vector[i] << " "; 
    }

    if (n=2){
        if (vector[0]>0 && vector[1]>0){
                cout << "pertenece al cuadrante 1" << endl; 
        }else{
            if (vector[0]<0 && vector[1]>0){
                cout << "pertenece al cuadrante 2" << endl;
        }else{
            if (vector[0]<0 && vector[1]<0){
                cout << "pertenece al cuadrante 3" << endl;
        }else{
            if (vector[0]>0 && vector[1]<0){
                cout << "pertenece al cuadrante 4" << endl;
        }else{ 
            if (vector[0]==0 && vector[1]==0){
                cout << "el vector es nulo" << endl;
            }
        }
    }
    }
    }
    }
    return 0;
}
