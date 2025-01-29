#include <iostream>
using namespace std;

int main()
{
   int A[5]={2,4,5,6,7};
   int* P= A;
   int *q = &A[4];

   cout<<q-P<<"\n";
   for(int i=0; i<5; i++){
    cout<<*(A+i)<<endl;
   }
   
   cout<<endl;

   cout<<*P<<endl;
   P++;
   cout<<*P<<endl;
   P--;
   cout<<*P<<endl;
   cout<<endl;
   
   cout<<*(P+2)<<endl;
   
   cout<<*(P-2)<<endl;
    
    return 0;
}
