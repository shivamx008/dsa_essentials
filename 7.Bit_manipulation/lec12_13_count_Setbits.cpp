#include<algorithm>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
//write a function to count set bits in a number , the ones

//one way could be to check the rightmost bit and then right shift he number in order to check the next bit

int count_set(int n){
    int c=0;
    while(n>0){
        c+=n&1;
        n=n>>1;
    }
    return c;
}
int faster_count(int m){
    int ans=0;
    while(m>0){
        //removes the last set bit from the current number
        m=m &(m-1);
        ans++;
    }
    /*eg 9 has 1001 and when we do 1001 &1000 we get 1000, one set bit is removed , 
    then in the next iter 1000 & 0111 gives 0 so the loop ran 2 times, which is the ans*/
    return ans;
}
// the loop is going to run at most log(n) times (of base 2)
int main(){
    int n=9;//1001
    int count=count_set(n);

    cout<<"the number of set bits here are: "<<count;

    //now let's see a hack for counting bits, this will only take number of operations equal to the number of bits in the number, instead of logbase2 (n)
    int count1 =faster_count(n);
    cout<<"\n(faster) the number of set bits here are: "<<count1;

}