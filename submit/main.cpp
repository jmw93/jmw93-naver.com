#include <stdio.h>
#include <queue>
#include <string>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;
int s[13];
int n ;
int check[13]; //12 까지
void dfs(int num, int cnt){
    if(cnt == 6){
        for(int i=1;i<=n;i++){
            if(check[i]){
                cout<< s[i]<<" ";
            }
        }
        cout<<endl;
        return;
    } // 갯수만큼 다돌았을때
    
    for(int i =num+1; i<=n;i++){
        if(!check[i]){
            check[i] = true;
            dfs(i,cnt+1);
            check[i] = false; // 백트래킹
        }
    }
}

int main(int argc,const char * argv[]){
    while(1){
        cin>>n;
        if(n==0)
            break;
        for(int i=1;i<=n;i++){
        cin>>s[i];
        }
        dfs(0,0);
        cout<<endl;
        }
    cout <<"중간업로드를 위한 테스트";
    }



