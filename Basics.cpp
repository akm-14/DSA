#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin>>A[i][j];
        }
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(i<j){
                int temp = A[i][j];
                A[i][j] = A[j][i];
                A[j][i] = temp;
            }
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<A[i][j]<<'\t';
        }
        cout<<'\n';
    }

    return 0;
}