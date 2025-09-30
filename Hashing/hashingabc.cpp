#include<bits/stdc++.h>
using namespace std;
//array can store 256 , so hashing in the character is easy
int6 main(){
string s;
sin >> s;
int hash[26] = {0}; // declare the hash array
for(int i=0;i<s.size();i++){
    hash[s[i]-'a']+=1 ; // a - a = 0, b-a = 1
}
int q;
while(q--){
    char c;
    cin >> c;
    //fetch
    cout << hash[c-'a'] << endl;
}


    return 0;
}