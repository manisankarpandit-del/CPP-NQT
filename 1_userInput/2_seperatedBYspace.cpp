#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    vector<int>arr;
    int num;
    while(ss>>num){
        arr.push_back(num);
    }
    
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}