#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <cmath>
#include <cstring>
#include <queue>
#include <cstdlib>
#include <string.h>

using namespace std;
stack<char> st;

bool solution(string s){
    
    for(int i = 0 ; i<s.size();i++){
        if(s[i] == '('){
            st.push(s[i]);
        }else{ // 닫는괄호일때
            if(st.empty() || st.top() != '('){//스택이비거나 , top이 )가 아니면!
                return false;
            }else{ // 스택이 정상적으로 빠질 때.
                st.pop();
            }
        }
        
    }
    if(!st.empty()) return false; //스택이 비어있지않으면 ,
    else return true;
}
int main(int argc, const char* argv[]){
    string str;
    getline(cin,str);
    int ret = solution(str);
    cout <<ret;
}
