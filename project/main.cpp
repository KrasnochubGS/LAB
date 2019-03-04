#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B:\n";
    int a,b;
    cin>>a>>b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n';
    int c;
    if(a>b)
    {
        c=a;
        cout<<"MAX="<<c;
    }
    else
    {
        c=b;
        cout<<"MAX="<<c;
    }
}
