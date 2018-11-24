    //======================
    // HDU 2896
    // 求目标串中出现对应的模式串
    //====================
    #include<bits/stdc++.h>
    using namespace std;
    vector<int>ress;
    struct Trie{
        int next[100010][130],fail[100010],end[100010],blong[100010];
        int root,L;
        int newnode(){
            for(int i = 0;i < 130;i++)
                next[L][i] = -1;
            end[L++] = 0;
            return L-1;
        }
        void init(){
            L = 0;
            root = newnode();
        }
        void insert(char buf[],int ord){
            int len = strlen(buf);
            int now = root;
            for(int i = 0;i < len;i++){
                if(next[now][(int)buf[i]] == -1)
                next[now][(int)buf[i]] = newnode();
            now = next[now][(int)buf[i]];
            }
            end[now]++;
            blong[now]=ord;
        }
        void build(){
            queue<int>Q;
            fail[root] = root;
            for(int i = 0;i < 130;i++)
            if(next[root][i] == -1)
                next[root][i] = root;
            else{
                fail[next[root][i]] = root;
                Q.push(next[root][i]);
            }
            while( !Q.empty() ){
                int now = Q.front();
                Q.pop();
                for(int i = 0;i < 130;i++)
                if(next[now][i] == -1)
                    next[now][i] = next[fail[now]][i];
                else
                {
                    fail[next[now][i]]=next[fail[now]][i];
                    Q.push(next[now][i]);
                }
            }
        }
        int query(char buf[]){
            int len = strlen(buf);
            int now = root;
            int res = 0;
            for(int i = 0;i < len;i++){
                now = next[now][(int)buf[i]];
                int temp = now;
                while( temp != root ){
                    res += end[temp];
                    if(end[temp]>0)ress.push_back(blong[temp]);
                    //end[temp] = 0;
                    temp = fail[temp];
                }
            }
            return res;
        }
        void debug(){
            for(int i = 0;i < L;i++){
                printf("id=%3d,fail=%3d,end=%3d,chi=[",i,fail[i],end[i]);
                for(int j = 0;j < 130;j++)
                printf("%2d",next[i][j]);
                printf("]\n");
            }
        }
    };
    char sss[505][205],buf[10005];
    Trie ac;
    int vrsweb=0;
    int main(){
        int T;
        int n;
        int pr=0;
        ac.init();
        scanf("%d",&n);
        for(int i = 1;i <=n;i++){
            scanf("%s",sss[i]);
            pr+=strlen(sss[i]);
            ac.insert(sss[i],i);
        }
        ac.build();
        //ac.debug();
        scanf("%d",&T);
        for(int i=1;i<=T;i++)
        {
            scanf("%s",buf);
            ress.clear();
            ac.query(buf);
            int sz=ress.size();
            if(sz==0)continue;
            if(sz<=3)
            {
                vrsweb++;
                printf("web %d:",i);
                sort(ress.begin(),ress.end());
                for(int i=0;i<sz;i++)
                    printf(" %d",ress[i]);
                printf("\n");
            }
        }
        printf("total: %d\n",vrsweb);
        return 0;
    }