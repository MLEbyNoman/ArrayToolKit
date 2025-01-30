#include <iostream>
using namespace std;

int getElement(int arr[], int size, int index){
    if (index >= 0 && index < size)
    return arr[index];

   return-1;
}

int main (){
    int arr[6]={1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = 2;
    int value = getElement(arr,size,index);

    if (value != -1)
    cout<<"Element at index: "<<index<<": "<<value<<endl;
    else
    cout<<"invalide index: " <<endl;
     
    return 0;
}