#include <iostream>
using namespace std;

int main()
{
    int t=10,sum=0,bottle;
    while(t&&bottle)
    {
        cin>>bottle;
        sum=0;
        while(bottle>=3)
        {
            sum+=bottle/3;
            bottle=(bottle/3)+(bottle%3);
        }
        if(bottle==2)
            {sum+=1;}
            if(bottle==0)
                break;
        cout<<sum<<endl;
        t--;
    }
    return 0;
}
