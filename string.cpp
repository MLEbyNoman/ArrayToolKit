#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char *s;
    s = new char[100];

    cout<<"Enter a String: ";
    cin.getline(s,100);

    cout<<"Length "<<strlen(s)<<endl;

    delete [] s;

    return 0;
}