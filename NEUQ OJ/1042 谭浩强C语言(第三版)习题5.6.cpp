    #include<iostream>
    using namespace std;
    int  main()
    {
        int x;//�������xΪ����
        cin>>x;//�������
        if(x>=90){//�Է����ķ�Χ�����жϣ������Ӧ�ĳɼ�dengj
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
