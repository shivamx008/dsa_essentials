#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
int lowerBound(vector<int> A, int Val) {
    // your code goes her
    // this is mine but it shows tle on the udemy platform, apparently the commented solution works well, 
    // binary search stops at an position which is greater (end pointer) than the number (if not present) and then before terminating goes past mid and stops at an lower bound
    
    int mid,end=A.size()-1,start=0,ans=-1;
    
    while(start<=end)
    {
        mid=(start+end)/2;
        if(A[mid]==Val)
            ans=Val;
        else if(A[mid]<Val)
        {
             if(end==start)
            {
                while(mid>0)
                {
                    if(A[mid]<Val)
                    return A[mid];
                    mid--;
                }
                return -1;
            }
            start=mid+1;
           
        }
        else
        {
             if(end==start)
            {
                while(mid>0)
                {
                    if(A[mid]<Val)
                    return A[mid];
                    mid--;
                }
                return -1;
            }
            
            end=mid-1;
        }
    }
    return ans;

    // int n=A.size();
    // int l = 0, h=n-1, mid;
	// while(l<=h){
	// 	mid = (l+h)/2;
	// 	if(A[mid]==Val)
	// 	return Val; // when Val exists in the array
	// 	else if(A[mid]>Val){
	// 		h = mid-1;
	// 	}
	// 	else if(A[mid]<Val){
	// 		l = mid+1;
	// 	}
	// }
	
	// if(l==0 && A[l]>Val)
	// return -1; // when all elements are greater than Val
	// else
	// return A[h];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v={-1,-1,2,3,5};
    auto start = high_resolution_clock::now();
    int val=4;
    int ans=lowerBound(v,val);
    cout<<"ans  "<<ans<<"\n";
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << duration.count() << endl;
}