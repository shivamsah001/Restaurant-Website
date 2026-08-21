#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    char arr[10]={'a','c','d','i','f','f','s','s','s','l'};
    unordered_map<char,int>mp;
    int i=0,mx=0;
    int j=i;
    while(i<10 && j<10){
        if(mp.size()<3){
            mp[arr[j]]++;
            j++;
        }
        else{
            mp.clear();
            i++;
            j=i;
        }
         mx=max(mx,j-i);
    }
    cout<<mx;
}