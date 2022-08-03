#include<iostream>
using namespace std;
const int maxn=1e6+5;
int prims[maxn];
bool st[maxn];
int n;
int cnt;
void cnt_prims(int n){
    for(int i=2;i<=n;i++){
        if(!st[i]) prims[cnt++]=i;
        for(int j=0;prims[j]<=n/i;j++){
            st[prims[j]*i]=true;
            if(i%prims[j]==0) break;
        }
    }
}
int main(){
    scanf("%d",&n);
    cnt_prims(n);
    printf("%d\n",cnt);
}
