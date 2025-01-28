#include <iostream>
using namespace std;

int main() {
    int A[10] = {1,2,34,5,67,87,65,54,4,33,};
    int l=0, h=9, key, mid;

    cout<<"Enter Key: ";
    cin>>key;
    while (l <= h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
        {
            cout<<"Found at " <<mid;
            return 0;
        }
        else if (key<A[mid])
        {
            h=mid -1;
        }
        else {
            l+mid+1;
        }
    }
}
  cout<<"Not Found :";