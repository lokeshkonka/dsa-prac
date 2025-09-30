#include<bits/stdc++.h>
using namespace std;
//hashing function
// int arr[1e7]; // 10^7
// in goballuy 10e7 in main scope 10e6 for array
int main(){
int n;
cin >> n;
int arr[n];
for(int i=0;i<n;i++){
    cin >> arr[i];
}

//precompute

int hash[13] ={0}; // declare the hash array 
for(int i=0;i<n;i++){
    hash[arr[i]]+=1 ;
}
int q;
cin>> q;
while(q--){
    int num;
    cin >> num;
    //fetch
    cout << hash[num] << endl;
}
return 0;
}