
//in this we will see how to convert your (implemented data structure) code into a header file, and how to reuse that code
// just copy the ds class and paste it here with saving the file as Vector.h

//templates
template<typename T> // tells the type of the data structur to be used
class Vector{
//let's implement some common operation 
//push back : if we have a vector that contains some data, we want to push a new integer to the last of this vector.
// and if it reaches it's capacity we need to double the capa with the help of a new dyna array
//pop back : removing the last element, isEmpty()
//get element At(i) or v[i] using operator overloading
//front(), back() and size(), capacity() the actual mem allocated

//data members
private:
    // int *arr;
    int current_size;
    int capa;

    T *arr; // replace int with whereever we need to put user specified data type
//constructors, methods
    public:
        Vector(){
            current_size=0;
            capa=1;
            arr=new T(capa);
        }
        Vector(int n){
            current_size=0;
            capa=n;
            arr=new T(n);
        }

    void push_back(const T d){
        if(current_size<capa)
            arr[current_size++]=d;
        else{
            T *arr1=new T(2*capa);
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
        
        
    }

    bool isEmpty() const{
        return current_size==0;
    }

    //front back, At(), []
    // a few good practices, when the values of some parameters are not supposed to change in the method then make them const 
    // and if a function is not supposed to modify the attributes of a class then make it const as well 
    T front() const
    {
        return arr[0];
    }
    T back() const{
        return arr[current_size-1];
    }
    T At(const int i) const{
        return arr[i];
    }
    int size() const{
        return current_size;
    }
    int capacity() const{
        return capa;
    }

    //operator ovrloading
    T operator[](const int i){
        return arr[i];
    }
};
