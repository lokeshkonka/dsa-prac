// #include<iostream>
// #include <bits/stdc++.h>
// int main(){
//     std::cout << "HEllO WORLD" << "\n";
//     std::cout << "HEllO WORLD";

//     return 0;
// }
// cin to take input from the terminal

// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//     cout << "Using namespace";
    
//     //integer
//     int x =0;
//     //long
//     long y ;
    
//     cin>>y;
//     cout<<"The value of y is :"<< y;
    
//     //very long integer
//     long long y;b
    
// }

//float for float
#include<bits/stdc++.h>
using namespace std;
int sum(int num1 , int num2){
    int num3 = num1+num2;
    return num3;
}
//pass by value the org wiill send the copy not the org so 
void dosome(int num){
    cout << num << endl;
    num+=5;
    cout << num<< endl;
}

/// pass by reference: but arr are pass by refence only whether in pass by value
 void dosome2(int &num){
    cout << num << endl;
    num+=5;
    cout << num<< endl;
}

int main(){
    //string
    // string s1;
    // string s2;
    // //input hey loki
    // cin >> s1 >> s2;
    // cout<< s1 << " " << s2;
    /// Totake Entire Line
    // string str;
    // getline(cin,str)
    // cout<< "  "<< str; 
    // return 0;

    /// char 
    // char c;
    //cin >> c;
    //cout<<c;
////// ---------------------------------------//////


    // int age;
    // cin>> age;
    // if(age >=18){
    // cout << "ADult";
    // }else{
    //     cout << "not an adult";
    // }
/////----------------------------------------/////

// int arr[69];
// char arrr[96];
// cin >> arr [69];
// cout<< arr[69];

////----------    2D Arry--------------------/////
int arr[3][3];

sum(4,6);


dosome(5);
return 0;

}