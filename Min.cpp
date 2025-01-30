#include <iostream>
using namespace std;

int main () {
    int arr[]={1,2,3,4,5,75,45,45};
    int min;
    int n=8;
    min = arr[0];

    for (int i=0; i<8; i++){
        if (arr[i] < min)
        {
            min=arr[i];
        }
    }
    cout<<"Minimum number is: "<<min;

    return 0;
}