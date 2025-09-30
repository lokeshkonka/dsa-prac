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

void lists(){
    list<int> ls;
    ls.push_back(1);
    ls.emplace_back(2);
    ls.push_front(3);
    ls.emplace_front(4);
    //deletion
    ls.pop_back();
    ls.pop_front();
    //insert
    auto it = ls.begin();
    it++;
    ls.insert(it,5); //{4,5,3,1}
    //deletion
    it++;
    ls.erase(it); //{4,5,1}
    //remove
    ls.remove(5); //removes all the 5s
    //size
    cout << ls.size();
    //swap
    list<int> n(2,100);
    ls.swap(n);
    //sort
    ls.sort();
    //reverse
    ls.reverse();
    //merge
    ls.merge(n); //both should be sorted
}
void explaindeque(){
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);
    dq.emplace_front(4);
    //deletion
    dq.pop_back();
    dq.pop_front();
    //insert
    auto it = dq.begin();
    it++;
    dq.insert(it,5); //{4,5,3,1}
    //deletion
    it++;
    dq.erase(it); //{4,5,1}
    //remove
   // dq.remove(5); //removes all the 5s
    //size
    cout << dq.size();
    //swap
    deque<int> n(2,100);
    dq.swap(n);
    //sort
   // dq.sort();
    //reverse
    dq.reverse();
   //merge
   // dq.merge(n); //both should be sorted

}

void explainstack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.top(); //3
    st.pop();//removes 3
    cout << st.size();//2
    cout << st.empty();//0
    st.swap(st2);
}
void explainqueue(){
    //FIFO- first in first out
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.back();
    cout << q.front();
    q.pop();
    cout << q.size();
    cout << q.empty();
}

void explainpq(){
    //max heap
    priority_queue<int> pq;
    pq.push(1); 
    pq.push(2);
    pq.push(3);
    cout << pq.top(); //3
    pq.pop();//removes 3
    cout << pq.size();//2
    cout << pq.empty();//0
    //min heap
    priority_queue<int,vector<int>,greater<int>> minheap;
    minheap.push(1);
    minheap.push(2);
    minheap.push(3);
    cout << minheap.top(); //1
    minheap.pop();//removes 1
    cout << minheap.size();//2
    cout << minheap.empty();//0

}
void explainset(){
    set<int> s;
    s.insert(1);
    s.emplace(2);// {1,2}
    s.insert(2);// {1,2}
    s.insert(4);
    s.insert(3);
    for(auto i:s){
        cout << i; //1 2 3 4
    }
    auto it = s.find(3); //returns the address where 3 is present
    auto it = s.find(6); //returns the address where 6 is not present ie s.end()
    int cnt = s.count(3); //1
    int cnt = s.count(6); //0
    s.erase(2); //removes 2
    s.erase(s.begin()); //removes the first element in the set
    //s.erase(s.begin(),s.end()); //removes entire set
    cout << s.size();
    cout << s.empty();
    set<int> s2 = {1,2,3};
    s.swap(s2);

}

void explainmultiset(){
    //only sorted not unique

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    for(auto i:ms){
        cout << i; //1 1 1 2 2
    }
    auto it = ms.find(1); //points to the first 1
    ms.erase(1); //erases all the 1s
    int cnt = ms.count(2); //2
}

void explainUset(){
    unordered_set<int> s;
    s.insert(1);
    s.emplace(2);// {1,2}
    s.insert(2);// {1,2}
    s.insert(4);
    s.insert(3);
    for(auto i:s){
        cout << i; //not in sorted order
    }
    auto it = s.find(3); //returns the address where 3 is present
    auto it = s.find(6); //returns the address where 6 is not present ie s.end()
    int cnt = s.count(3); //1
    int cnt = s.count(6); //0
    s.erase(2); //removes 2
    s.erase(s.begin()); //removes the first element in the set
    //s.erase(s.begin(),s.end()); //removes entire set
    cout << s.size();
    cout << s.empty();
    unordered_set<int> s2 = {1,2,3};
    s.swap(s2);
//no lower_bound and upper_bound works only on sorted containers
}
void explainmap(){
    map<int,string> m;
    m[1] = "abc";
    m.emplace({2,"bcd"});
    m[3]; //creates an empty string at 3
    // m = {{1,"abc"},{2,"bcd"},{3,""}}
    for(auto i:m){
        cout << i.first << " " << i.second; 
    }
    auto it = m.find(3); //returns the address where 3 is present
    auto it = m.find(6); //returns the address where 6 is not present ie m.end()
    int cnt = m.count(3); //1
    int cnt = m.count(6); //0
    m.erase(2); //removes key value pair with key 2
   // m.erase(m.begin()); //removes the first element in the map
   // m.erase(m.begin(),m.end()); //removes entire map
    cout << m.size();
    cout << m.empty();
    map<int,string> m2 = {{1,"abc"},{2,"bcd"}};
    m.swap(m2);
    auto it = m.lower_bound(2); //points to 2 or next higher if 2 not present
    auto it = m.upper_bound(2); //points to next higher than 2
//map stores unique keys in sorted order
//similar to set 

}
//lower_bound: returns the first element which is not less than the given key
//upper_bound: returns the first element which is greater than the given key

void explainUmap(){
    unordered_map<int,string> m;
    m[1] = "abc";
    m.emplace({2,"bcd"});
    m[3]; //creates an empty string at 3
    // m = {{1,"abc"},{2,"bcd"},{3,""}}
    for(auto i:m){
        cout << i.first << " " << i.second; 
    }
    auto it = m.find(3); //returns the address where 3 is present
    auto it = m.find(6); //returns the address where 6 is not present ie m.end()
    int cnt = m.count(3); //1
    int cnt = m.count(6); //0
    m.erase(2); //removes key value pair with key 2
   // m.erase(m.begin()); //removes the first element in the map
   // m.erase(m.begin(),m.end()); //removes entire map
    cout << m.size();
    cout << m.empty();
    unordered_map<int,string> m2 = {{1,"abc"},{2,"bcd"}};
    m.swap(m2);
}

    int main(){
    int a;
    std::cin >> a; 
    std::cout << a;  //without namesoace
    cout << a;  //with namespace
    // print();
    // explainpair();
    // vectors();
    // iteratorsvec();
    // lists();            


}

