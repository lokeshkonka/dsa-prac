#include<bits/stdc++.h>
using namespace std;
void print(){
    cout << "Loki";
}
void explainpair(){
    pair<int,int> p ={1,2};
    pair<int,pair<int,int>> j = {1,{1,3}};
    pair<int,int> a[] ={{12,2},{12,12}};
    cout << p.first << p.second;

}
void vectors(){
    // vector is a container is similar to array
    vector<int> v;  
    vector<int> va(5);  
    v.push_back(1);
    v.emplace_back(2); //dynamically increases the size
    vector<pair<int,string>>vec;
 cout << v[0];

}


void iteratorsvec(){
     vector<int> v;  
    vector<int>::iterator abc = v.begin(); // points to the memory address * 
    cout << *(abc) << " ";
    vector<int>::iterator abc = v.end(); // end
    vector<int>::iterator abc = v.rend(); //reverse end
    vector<int>::iterator abc = v.rbegin();
    //shortcut auto == assigns to vector
    for(auto it = v.begin();it<=v.end();it++){
        cout<< *(it);
    }
v.erase(v.begin()+1);
//{10,20,12,30}

//v.erase(starting_addresss, end_address)
v.erase(v.begin()+2,v.begin()+6);

v.insert(v.begin(),300);
v.insert(v.begin()+1,2,5) ;//inserts {5,5} at 10
vector<int>cop(2,50); //{50,50}
cout << c.size();
v.pop_back();
v.swap(cop);
v.clear() //erases te entire vector
}
int main(){
    int a;
    std::cin >> a; 
    std::cout << a;  //without namesoace
    cout << a;  //with namespace
}
