//2nd day

#include<bits/stdc++.h>
using namespace std;

int main()
{

/* now today's agenda 
set and map
 
first let's look at
set 

gived n elements {2,5,2,1,5},tell me the number of unique elements which are -> 3 unique elements {1,2,5}*/
//int arr[]={2,5,2,1,5};
set<int> st; //int of set , it can take any dataypes , it can take containers , This is ordered set
set<int> st1={3,4,6,7,2};//other ways of declaring
set<int> st2(st1.begin(),st1.end());//copying from an existing container like vector
int n;
cin>>n;//size of the input
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.insert(x);
    }
    // now the set will contain -> {1,2,5}, Remember that it will only store in acsending order.
    // and we can't access set elements by st[0],we have to use iterators *st.begin() will give first element

    //st.insert take n time , where n is the size of the set

    //Now you want delete an element so .erase(iterator) or .erase(startIter, enditerator) -> [) 
st.erase(st.begin());
//now st-> {2,5} 
st.erase(st.begin(),st.begin()+2);// now the set is empty
// time complexity is log(n)

st.erase(5);//st.erase(key)
//everything we saw in vectors can be implicated in this as well.


// Now let's find where an key is.
auto it=st1.find(7);//finds 7 and returns a pointer pointing at it.
//works in log(n) if key exists, 
//if key dosen't exists then it will carry the st1.end() iterator

// like vector , emplace is faster than insert
st.emplace(76);

//size
cout<<st.size();

//set of anything can be defined, and it will make sure that it stores unique of that anything
//set<node> sst, a set of a structure

//printing
for(auto it=st.begin(); it!=st.end();it++)
cout<<*it<<endl;

for(auto it:st){
    cout<<it<<endl;
}
//delete the entire set
st1.erase(st1.begin(),st1.end());

//so use set when there is question to find somthing unique and in set everything is logarithmic in time

//Now Unordered set , THIS is also unique element storing

unordered_set<int> ust;

ust.insert(2);
ust.insert(3);
ust.insert(1);

//it's stored any order, there is no specific order just some hash is followed , unlike set 
//all the functions we saw with set is applicable here and the average time complexity is 
// O(1)
//but the worst case is O(n) the size.

/* If the problem doesn't need ascending order then use this
but if get TLE then switch to set*/

//MUlTISET , when we want to store all the elements then we use this
// It stores in a sorted order as well
multiset<int>ms;
ms.insert(1);
ms.insert(1);
ms.insert(2);
ms.insert(2);
ms.insert(3);//can use emplace

//ms-> {1,1,2,2,3}

ms.erase(2); //all the instances of 2 are erased
ms.erase(ms.begin(),ms.begin()+2);// erases just the first 2 elements

auto it=ms.find(2); // returns an iterator pointing the first element of 2

//finding how many times an element occurs
ms.count(2);

ms.clear();// deletes the entire multiset
// O(log(n)) in time
//let's say you want to delete two instances of 3
ms.erase(ms.find(3),ms.find(3)+2);

//Now let's say we have a key value concept
/* for eg roll no of students*/

//we have MAP for this; map only stores unique keys

map<string, int> mpp;

mpp["raj"]=27;
mpp["hima"]=31;
mpp["sandeep"]=67;
mpp["tank"]=89;

// this sorts in the ascending order acording to the key value

mpp["raj"]=99;// mmp at raj will now have 99, it overwrites
// values maynot be unique, raj can have 31 , which is same as hima
mpp.emplace("manvi",54);

//delete using key
mpp.erase("raj");
mpp.erase(mpp.begin(),mpp.begin()+3);//deleting first 3, cleans a given range
mpp.clear();//delete all

auto it=mpp.find("manvi");

//checking if the map is empty
if(mpp.empty()){
    cout<<"empty";
}
mpp.count("manvi");//this will work and will always give 1 if exist as, uniquely stored

//everything is O(log(n))

//Now printing a Map
for(auto it:mpp){
    //so as the there is a key value pair, this 'it' will become a pair of string and an int
    cout<<it.first<<" "<<it.second<<endl;//will print in key and value order like raj 99
}
for(auto it=mpp.begin();it!=mpp.end();it++)
{
    cout<< it->first<<" "<< it->second<< endl; //here 'it' is a pointer
}

// Pairs , it's not best to call this a container, because it's a single suy, like a defined data type
pair<int,int> pr={1,3};
// we can nest as well
pair<pair<int,int>, int> npr={{1,3},4};
//to access 3
cout<<npr.first.second<<endl;
//pairs in both positions
pair<pair<int,int>,pair<int,int>> dpr={{1,2},{3,4}};
cout<<dpr.first.first<<" "<<dpr.second.second;

vector<pair<int,int>> vec;
set<pair<int,int>>st;
map<pair<int,int>,int> mpp;

// Unordered map, all functions for map works here, just it's not is ascending order, stores in any order
// and O(1) is almost all cases, n in worst size
unordered_map<int, int> umpp;
//it can't store pairs in the keys unlike maps, beware of that

//multimap, sorted and multiple keys
multimap<string, int> mmpp;
mmpp["rajj"]=2;
mmpp["rajj"]=4;
mmpp.emplace("rajj",22);
//the functions will be same as map

// Stack and Queue

//stack, LIFO ds
//pop,top,size,empty, push/emplace
stack<int> stt;
stt.push(2);
stt.push(4);
stt.push(3); // stt  -> 3,4,2]
stt.push(1);

cout<<stt.top() ;// prints 1
stt.pop();// deletes the last entered slement

//now
cout<<stt.top();//prints 3

bool flag = stt.empty(); //returns true if stack is empty
//no clear function
while(!stt.empty()){
    stt.pop();
}//deletes the entire stack

cout<<stt.size()<< "prints the number of elements";

// if you de stack.top when it is empty , it will give an error so always check
if(!stt.empty())
{
    cout<<stt.top()<<endl;
}

//Queue, FIFO operation
// push/emplace, front, pop, size, empty;

queue<int> q;
q.push(1);
q.emplace(3);
q.push(4);
q.push(5);
// q-> front [5,4,3,1]
cout<<q.front();//gives 5
q.pop(); // doesn't return just deletes

// again no clear function 
while(!q.empty())
{
    q.pop();
}

// All opertions of stack and queue is O(1), and there is no iterator concept in stack and queue

// Now let's see priority_queue, imp
// we have set with sorting, logn complexity but stores only unique, and unordered set which has worst case of N and unique only,
// so priority queue stores in sorted and log n and can store duplicates
//push, size, top, pop, empty
priority_queue<int> pq;// max priority queue
pq.push(9);
pq.push(2);
pq.push(4);
pq.push(6);
//it uses heapsort, heapify
// it will have all the elements in descending order
//pq -> 9,6,4,2]

cout<<pq.top();//prints 9
pq.pop();
cout<<pq.top();//prints 6

priority_queue<pair<int,int>> ppq;
ppq.push(1,3);
ppq.push(4,2);
ppq.push(1,1);
//ppq -> (4,2),(1,3),(1,1)]
//no iterators

// what if we want to make this ascending, min priority queue using max priority
pq.push(-9);
pq.push(-2);
pq.push(-4);
pq.push(-6);
// now when ever you print or use for calculations use -1 multiplication
cout<<-1* pq.top();// prints 2 // this negation techniqe wont work if negative numbers are there

//Minimum priority queue

priority_queue<int , vector<int>, greater<int>> mpq;
pq.push(9);
pq.push(2);
pq.push(4);
pq.push(6);
cout<<mpq.top()<<endl;// prints 2;
// want to store pairs then
priority_queue<pair<int,int> , vector<int>, greater<int>> mpq;

//Dequeue, doubly ended queue 
deque<int> dp; // this is a fully fledged container
//push_front(), its better than vector because of this
//push_back()
//pop_back()
//pop_front()
//begin, end, rbegin,rend
//size
//clear
//empty
//at (for access)

//List, better than vector becouse of remove function of O(1) complexity

list<int> ls;
// remove(value);
//push_front()
//push_back()
//pop_back()
//pop_front()
//begin, end, rbegin,rend
//size
//clear
//empty
//at (for access)
// we use list usually if we need more fuctionality than vector




}