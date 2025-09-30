#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
//..precompute 
//all are stored in sorted in map
map<int , int>mpp;
for(int i=0; i<n; i++){
    mpp[arr[i]]++;
}
// for(auto it:mpp){
//     cout << it.first << " " << it.second << endl;
// }
// N+N == N in TC


    int q;
    while(q--){
        int key;
        cin >> key;
       //fetch
cout << mpp[key] << endl;

    }
    
    //storing and fetching in all cases in mapping takes  log(N)
    
    
    






    return 0;

}