#include <iostream>
using namespace std;

bool setElement(int arr[], int size, int index, int newvalue){
    if (index >= 0 && index < size){
       arr[index]=newvalue;
       return true;
    }

   return false;
}

int main (){
    int arr[]={1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = 2;
    int newvalue= 95;

    if (setElement(arr,size,index,newvalue))
    cout<<"Update Element at index: "<<index<<"  to: "<<arr[index]<<endl;
    else
    cout<<"Failed to update: invalide index: " <<endl;

    return 0;
}