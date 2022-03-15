#include<bits/stdc++.h>
using namespace std;

int ** create2darray(int rows,int cols)
{
    int ** arr_of_pointers=new int* [rows];// if we try to create a array of pointers pointing to pointing statically then it will create a segmentation error because it will get deleted after the function ends 
    for(int i=0;i<rows;i++)
    {
        arr_of_pointers[i]=new int[cols];
    }
    int value=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            arr_of_pointers[i][j]=value;
        }
    }

    return arr_of_pointers;

}
int main()
{
    //2d static is easy to create but not a 2d dynamic array
    // not directly like we did in 1d dynamic array, we need to combine multiple 1d arrays

    int **arr=create2darray(10,12);

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<12;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

// how to delete https://stackoverflow.com/questions/30720594/deleting-a-dynamically-allocated-2d-array/30720628
    
    for(int i = 0; i < 10; ++i) {
        delete[] arr[i];   
    }
    //Free the array of pointers
    delete[] arr;



}