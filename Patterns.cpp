// ****
// ****
// ****
// ****
//  Outer Loops   count the number of lines in the pattern
//  Inner Loops   focus on the columns and connect them somehow to rows
// print them in the inner looops 
// observer symmetry 

#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for ( int i = 0; i < n; i++)
    {
       for ( int j = 0; j < n; j++)
       {
        cout << "*";
       }
       cout << endl;

       
    }
    
}
void print2(int n){
    for ( int i = 0; i < n; i++)
    {
       for ( int j = 0; j <= i; j++)
       {
        cout << "*";
       }
       cout << endl;

       
    }
    
}
void print3(int n){
    for ( int i = 0; i <=n; i++)
    {
       for ( int j = 1; j <= i; j++)
       {
        cout << j << " ";
       }
       cout << endl;

       
    }
    
}
void print4(int n){
    for ( int i = 0; i <=n; i++)
    {
       for ( int j = 1; j <= i; j++)
       {
        cout << i << " ";
       }
       cout << endl;

       
    }
    
}
void print5(int n){
   for (int  i = 0; i < n; i++)
   {
    for ( int j = 0; j < n-i+1; j++)
    {
        cout << "* ";
        
        /* code */
    }
    cout << endl;
    
   }
}
   void print6(int n){

    /// spaces n - i - 1
    // stars 2 * i + 1

   for ( int i = 0; i < n; i++)
   {
    //spaces
   for( int j = 0 ; j < n-i-1 ; j++){
    cout << " ";
   }
   //stars
   for( int j = 0 ; j < 2*i+1 ; j++){
    cout << "*";

   }
   //spaces
   for( int j ; j < n-i-1 ; j++){
    cout << " ";
   }
    cout << endl;
   }
    
}
 void print7(int n){
    for(int i ; i <n ; i++){
        //spaces
        for(int j ; j<i  ; j++){
            cout << "*";
        } 
        for(int j ; j< 2*n-(2*i +1)  ; j++){
            cout << "*";
        } 
        for(int j ; j <i  ; j++){
            cout << " ";
        }
        cout << endl;
    }
 }




 int main(){
    int n;
    cin>>n;
    // print1(n);
    // print2(n);
    print6(n);
}