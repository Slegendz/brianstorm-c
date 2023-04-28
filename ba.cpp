#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int b = num.size();
        string s;

        long long unsigned int v = 0;
        for(int i=0; i<b; i++){
            v = v*10 + num[i];
        }

        long long unsigned int a = v;
        a = a + k;

        s = to_string(a);
        int c = s.length();
vector<int>vec;
       for(int i=0; i<c; i++){
         string str = s.substr(i,1);
         vec.push_back(stoi(str));
    }
    return vec;
    }
};