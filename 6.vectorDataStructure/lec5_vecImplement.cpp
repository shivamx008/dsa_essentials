#include<iostream>
using namespace std;

//for implementing we need a new kind of data structure so we create a class
class Vector{
//let's implement some common operation 
//push back : if we have a vector that contains some data, we want to push a new integer to the last of this vector.
// and if it reaches it's capacity we need to double the capa with the help of a new dyna array
//pop back : removing the last element, isEmpty()
//get element At(i) or v[i] using operator overloading
//front(), back() and size(), capacity() the actual mem allocated

//data members
private:
    int *arr;
    int current_size;
    int capa;

//constructors, methods
    public:
        Vector(){
            current_size=0;
            capa=1;
            arr=new int(capa);
        }
        Vector(int n){
            current_size=0;
            capa=n;
            arr=new int(n);
        }

    void push_back(const int d){
        if(current_size<capa)
            arr[current_size++]=d;
        else{
            int *arr1=new int(2*capa);
            for(int i=0;i<capa;i++)
                arr1[i]=arr[i];

            delete []arr;

            arr=arr1;
            capa*=2;

            arr[current_size++]=d;
        }
    }

    void pop_back(){
        if(current_size>0)
            current_size--;
        else
            cout<<"can't pop from empty array";
        
    }

    bool isEmpty() const{
        return current_size==0;
    }

    //front back, At(), []
    // a few good practices, when the values of some parameters are not supposed to change in the method then make them const 
    // and if a function is not supposed to modify the attributes of a class then make it const as well 
    int front() const
    {
        return arr[0];
    }
    int back() const{
        return arr[current_size-1];
    }
    int At(const int i) const{
        return arr[i];
    }
    int size() const{
        return current_size;
    }
    int capacity() const{
        return capa;
    }

    //operator ovrloading
    int operator[](const int i){
        return arr[i];
    }
};

int main(){

//obj of that class will be made here
Vector v(100);
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);

for(int i=0;i<v.size();i++)
    cout<<v.At(i)<<v[i]<<" ";

cout<<v.size();
cout<<" "<<v.capacity();
}