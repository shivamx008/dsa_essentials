// the inspiration is from sorting cards in your hands
/*we have one hand to hold the sorted part and one hand hold the unsorted part
 in the other hand, then we insert the card in it's correct position in the sorted part*/
#include<bits/stdc++.h>
using namespace std;

//eg 5| 4,1,3,2 , we pick 4 and start at the sorted part from behind , we see 5 and push back and as there is no other left so we put 4 there
// 4,5|1,3,2 we pick 1 and search the sorted part from the behind we look at 5 and push, 4 and push, then put 1 

int* inserti_sort(int arr[],int n){
    int j,i,moved;
    for(  i=1;i<n;i++){
        int temp=arr[i];
        moved=i;// to keep record of till which element has been moved
        for( j=i-1;j>=0;j--)
        {
            
            if(arr[j]>temp)// we move as much as possible and keep record of till where moved
            {
                arr[j+1]=arr[j];
                moved=j;
            }
            
            
        }
        arr[moved]=temp; // we then put the card in question to the place which was made for it.   

    }
    return arr;
}

//time complexity is O(n^2) ,even if the array is sort it will n^2 operations, so we will need to implement a while loop or put the smaller or greater condition ,look in the video
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[]={2,3,4,6,7,4,5,53,5,3,2,1,368,98};
    int n=sizeof(arr)/sizeof(int);
    int* ptr=inserti_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        //cout<<*(ptr+i)<<", ";
        cout<<ptr[i]<<", "; 
    }
} 