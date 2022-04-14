/*why do we write bits/stdc++.h
instead of just using math.h or string.h , So when we write include for every library it gets tedious 
and time consuming but in an interview never use bits/stdc++.h gives out a bad impression, as it includes a lot of header files it takes a lot time 
because it imports every file, so in industry clean and light code is prefered  */ 

#include <bits/stdc++.h>
#include <iterator>

/* Now why do we write namespace std?
It means that we are using the standard namespace and everthing that we refer to in this program is 
from ' std ' namespace library, by defination a Namespce is a declarative region that provides a scope to the indentifiers and functions inside it, They are used to organize code into logical groups and to prevent 
collison errors that can occur when the code base includes multiple libraries. the better way would be to 
specify each identifier or function with the namespace we intend to but using std is considered ok for interviews  */

using namespace std;

/* we can use namespace like this
   namespace valuess {
       int val=50;
       int getVal(){
           return val*10;
       }
   } */

/* when we want to create a datatype where we store something like this {String, int,double, char}
So when we want to store all that types into a certain datatype , then we have to create are own datatype that we call struct
struct, 
struct node{
    string str;
    int num;
    double doub;
    char x;
}; this semicolon is req.
think this as a structure for your user defined datatype (of grouped data type), like a wrapper for the group 
 
and to define it simply
node variable;
variable.str="nameees";
variable.num="79";
now what would happen if we do not define other variables inside node
We would not be sure of what is inside, empty or just a dummy value might be there 

So the best way to define a struct vari is to create aconstructor kind of thing
struct node{
    string str;
    int num;
    double doub;
    char x;

    node(str_,num_,doub_,x_){
        str=str_;
        num=num_;
        doub=doub_;
        x=x_;
    }
}; 

so our defining becomes better , this is how to do in a interview, don't do that the previous way.
node *raj = new node("striver",79,91.2,'X'); thos way creates a pointer.
node raj = ode("striver",79,91.2,'X');

you can store anything inside a struct , a 2d array, with other types, 
  */

array<int , 5> arr1; // -> {0,0,0,0,0} 

// the maximum size of array we can declare globally is 10^7 , whether it is int ,double , char , and 10^8 for bool

int main()
{
// our first container an Array, usually define it like int arr[100];
    /* So there is an array container in stl as well*/

    // the maximum size of array we can declare in intmain is 10^6 , whether it is int ,double , char , and 10^7 for bool datatype


    array<int, 100> arr; //just an another way of defining arrays of type int and size 100 staic
    //it will have garbage value untill will initializze it but if you define it globally it will have 0 at every place. 

    //so what will happen in this case
    array<int , 5> arr2 = {1,2,5}; // here when we declare the first 3 cells then the other cells automatically becomes zeros.
    // -> {1,2,5,0,0}
    //so to define an array with every cell as zero we simply do
    array<int , 10> zeros= {0}; //the first cell is initialized to zero and the rest is zutomatically tuened to zeros
    //this also works with the normal way as well, int arr[10000] = {0}

    //but to fill with a paticular value we do
    arr.fill(101); //so the array now becomes {101,101,101,...} , for normal array we have memset(arr, 101, sizeof(arr))

    //accessing like arr[i];
    arr.at(12); //12 is the index we want
    
    for(int i=0;i<5;i++){
        cout<<arr.at(i)<<" "; //this will print everything 
    }

    // iterators
    /* begin(), end(), rbegin(), rend() 
    as arrays are continguous in memory therefore as the name suggest begin() means pointing at the begining and rbegin() means pointing at the behindmost element
    while end() points at the memory locatiom right after the last element and rend() will point at right before the first element*/
    
    //so inoreder to iterate
    
    array<int, 5> arr3={1,2,3,4,5};
    for(auto it= arr3.begin(); it!=arr3.end();it++) //auto means ' it ' will autmatically take the iterator datatype of array which is array<int>::iterator
    {
        cout<<*it<<" ";
    }
    //the array is printed wholely

    for(auto it= arr3.rbegin(); it!=arr3.rend();it++) //here reverse iterator prints the array in reverse, here as it is a reverse iterator writing it-- will be wrong because it goes forward in reverse manner
    {
        cout<<*it<<" ";
    }
    //same thing with begin and end
    for(auto it= arr3.end()-1; it>=arr3.begin();it--) //here reverse iterator prints the array in reverse but mind the condition and the updation , it-- here because we are making the forward going iterator traverse backwards
    {
        cout<<*it<<" ";
    }
    for(auto it:arr3){
        cout<<it<<" ";//previously 'it' was a pointer when we used iterators, but here due to auto, 'it' is the element itself 
    }
    // this also known as 'for each loop' it goes only in forward manner
    string s="hihuabfeufbe";
    for(auto c:s)
    {
        cout<<c<<" ";
    }//h i h u a b f e u f b e

    //size
    cout<<arr3.size();//op = 5
    //first element
    cout<<arr3.front();//arr3.at(0);
    //last element
    cout<<arr3.back();//arr3.at(arr3.size()-1)

    //go to cplusplus.com stl to see the reference

// now VECTOR , array needs size to be predefined , but vectors say you don't have to tell me the size
    vector<int> vec; // ->{}, an vector of zero size is created , a empty vector
    vec.push_back(0); // ->{0}, size = 1
    vec.push_back(2); // ->{0,2} size = 2
    // dynamically increases it's size, by 2 times it's previous size
    vec.emplace_back(4);// this is identical to push_back but works faster than that.

    vec.pop_back(); // now 2 goes out ->{0}
    vec.pop_back(); // ->{0}, size = 0
    //dynamically shrinks the size as well


    //clear() , erases all the elements at once
    vec.clear();// vector will be again empty ->{}

    //assign a default fill value and a size initially
    vector<int> vec1(10, 1);// ->{1,1,1,1,1,1,1,1,1,1} size=10
    //we can do push_backs on this accordingly

    //now how to insert all the elements from vec1 into vec2, basically a copy
    vector<int> vec2(vec1.begin(),vec1.end()); // this is like -> [) begin included, end not included 
    //or
    vector<int> vec3(vec1);

    // what if we want to copy till a point we want
    vector<int> source={1,2,3,4,5};
    //so we want to copy till 3 , not 4,5 ; so we go till 4 as [)
    vector<int> desti(source.begin(), source.begin()+3); // so it goes from begin -> 1 to begin +2 -> 3 stopping at begin +3

    //swap functions , swap(vec1,vec2)
    //lower bound , upper bound functions

    cout<<source.size()<<" ";// this prints the size of memory 
    cout<<source.capacity()<<" ";//  this prints the total alloted memory

    //To defining 2d vectors
    //  1st way

    vector<vector<int>> vec2d; // a vector whose datatype is a vector int itself so each element of this vec2d is a vector of integers , 

    vector<int> ele0={1,2};
    vector<int> ele1={10,20,120,210};

    vec2d.emplace_back(ele0);// this goes at the zeroth index
    vec2d.emplace_back(ele1);// this at the 1st index, and due to the dynamic nature each row can have different amount of columns 

    //now if we write a for each loop for vec2d what will ' it ' determine
    for(auto it : vec2d){
        // ' it ' will be a vector itself
        for(auto ele : it)
        {
            cout<<ele<<" ";
        }
        cout<<"\n";
    }

    //So how do you size 10x20 size matrix
    vector<vector <int>> matrix(10, vector<int> (20,0) ); // by 10 ,we ask to declare 10 vectors and veector<int>(20,0) we ask to define and initialize this in every place  

    //array of vectors;
    vector<int> vecarr[4];// it means that this can grow by adding more columns but not any more rows. 

    // 3d vector 10*20*30 like int arr[10][20][30]

    vector<vector<vector <int>>> vec3d(10,vector<vector <int>> (20,vector<int> (30,0)));
    
    //now those functions which we saw for arrays are also used here as well like front , back, resize.

    //passing vectors to a function , it can be done by both pass by value or by reference., while we can only pass a primitive array by reference
    //refer https://www.geeksforgeeks.org/passing-vector-function-cpp/


} 

