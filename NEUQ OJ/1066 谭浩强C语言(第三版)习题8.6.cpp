#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int len=a.size();
    a.insert(len,b);
    cout<<a;
    return 0;
}
