#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    vector<int>arr;
    string temp;
    while(getline(ss,temp,',')){  //cumma seprated value ko read karne ke liye
        int num = stoi(temp);
        arr.push_back(num);
    }
    // while(getline(ss,temp,' ')){  //space seprated value ko read karne ke liye
    //     int num = stoi(temp);
    //     arr.push_back(num);
    // }
    
    
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}