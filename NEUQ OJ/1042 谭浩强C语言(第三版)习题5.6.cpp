    #include<iostream>
    using namespace std;
    int  main()
    {
        int x;//定义变量x为分数
        cin>>x;//输入分数
        if(x>=90){//对分数的范围进行判断，输出相应的成绩dengj
            cout<<"A";
        }
        else if(x>=80){
            cout<<"B";
        }
        else if(x>=70){
            cout<<"C";
        }
        else if(x>=60){
            cout<<"D";
        }
        else{
            cout<<"E";
        }
        cout<<endl;
        return 0;
    }
