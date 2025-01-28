#include <iostream>
using namespace std;

int main() {

    int A[2][2]={{1,2}, {2,4}};
    int B[2][2]={{1,3}, {2,7}};
    int C[2][2];

    for(int i=0; i<2; i++)
    {
        for (int j=0; j<2; j++)
        {
            C[i][j]=A[i][j] * B[i][j];
        }
    }
    for (int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<C[i][j] <<" ";
        }
        cout<<endl;
    }
      
}