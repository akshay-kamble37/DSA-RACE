#include<bits/stdc++.h>
using namespace std;

int calculate(string &s, int pointer){
    int num=0;
    for(int i=pointer;i<s.size();i++){
        char ch = s[i];
        if(ch >= '0' && ch <= '9'){
            num = num*10 + (ch - '0');
            if(num >= INT_MAX) return INT_MAX;
        }
        else return num;
    }
    return num;
}

int main(){
    int minus=0;
    int plus=0;
    string s = "23djgju";
    for(int i=0;i<s.size();i++){
        char ch = s[i];
        if(ch == ' ') continue;
        else if(ch == '-'){
            minus++;
            if(minus > 1) cout<<'0';
        }
        else if(ch=='+'){
            plus++;
            if(plus > 1) cout<<'0';
        }
        else if(ch>='0' && ch<='9'){
            int num = calculate(s,i);
            if(minus == 1) cout<<"-"<<num;
            else cout<<num;
        }
        else cout<<0;
    }
    cout<<0;

}