#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int n=5;
    for(int i =0; i<n; i++){
        v.push_back(i*i);
    }
    for(int i =0; i<n; i++){
        cout<<v[i]<<" ";
    }
}