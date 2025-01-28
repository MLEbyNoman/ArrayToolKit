#include <iostream>
using namespace std;

int main() {
    int A[7] = {2,4,5,6,7,8,9};
    int n = 7;
    int sum=0;
    for(int i=0; i<7; i++)
    {
      sum+=A[i];
    }
    cout<<"Sum is :"<<sum;
    
    return 0;
}