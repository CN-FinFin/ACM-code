#include<iostream>
using namespace std;

int main()
{
    string pw;
    while(cin>>pw)
    {
        for(int i=0;i<pw.length();i++)
        {
            if(pw[i]>='A'&&pw[i]<='Y')
            pw[i]=char(pw[i]-'A'+'b');
            else if(pw[i]=='Z')
                pw[i]='a';
            else switch(pw[i])
                {
                    case 'a':
                    case 'b':
                    case 'c':
                    pw[i]='2';
                    break;
                    case 'd':
                    case 'e':
                    case 'f':
                    pw[i]='3';
                    break;
                    case 'g':
                    case 'h':
                    case 'i':
                    pw[i]='4';
                    break;
                    case 'j':
                    case 'k':
                    case 'l':
                    pw[i]='5';
                    break;
                    case 'm':
                    case 'n':
                    case 'o':
                    pw[i]='6';
                    break;
                    case 'p':
                    case 'q':
                    case 'r':
                    case 's':
                    pw[i]='7';
                    break;
                    case 't':
                    case 'u':
                    case 'v':
                    pw[i]='8';
                    break;
                    case 'w':
                    case 'x':
                    case 'y':
                    case 'z':
                    pw[i]='9';
                    break;
                }
            }
          cout<<pw<<endl;
        }
    return 0;
}
