#include<iostream>
using namespace std;

void insertElement(int arr[], int &length, int size, int element, int index){
    if (length >= size) {
        cout<<"Array is full, cannot insert.\n";
        return;
    }
    if (index < 0 || index > length) {
        cout << "invalid index .\n";
        return;
    }

    for (int i = length; i > index; i--){
        arr[i] = arr[i - 1];
    }
    arr[index] = element;
    length++;
}
void displayArray(int arr[], int length) {
    for (int i = 0; i < length; i++){
        cout << arr[i] << " ";
    }
    cout<< endl;
}

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8};
    int length = 8;

    cout<<"static array before insert: ";
    displayArray(arr,length);

    insertElement(arr,length,10,15,4);

    cout<<"STATIC Array after insert: ";
    displayArray(arr,length);

    return 0;
}
