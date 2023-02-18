#include <iostream>
#include <string>

using namespace std;

int main()
{
   string str;
   char a;

    cout <<"Vvedite stroku: ";
    getline(cin,str);
    cout << "Vvedite semvol: ";
    cin >> a;
    str.find(a)!=string::npos ? cout<<"yes" : cout<<"no";

    return 0;
}

