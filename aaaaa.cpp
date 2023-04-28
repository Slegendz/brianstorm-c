#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    string s = to_string(a)+'2';
    
    int b = s.length();
    for(int i=0; i<b; i++){
        string str = s.substr(i,1);
        cout << str << endl;
    }
}