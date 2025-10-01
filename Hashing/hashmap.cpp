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
//unordered_map<int , int>mpp;
/// for unordered the avg and best case is O(1) ,Worst Case is O(N) for no of elements ,bcuz of internal collisions
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
/*
Hasing -> Division Method, Folding Method, Mid square Method
-Divison Method -> key%table_size
-Collision -> when two keys are mapped to the same index
-Open Addressing -> Linear Probing, Quadratic Probing, Double Hashing
-Chaining -> Linked List, BST, AVL Tree
-Load Factor -> number of elements / table size

[2,5,28,38]
 2%10 = 2
 5%10 = 5
 28%10 = 8

0
1
2->2
5 ->5
8->28,38

.
.

*/