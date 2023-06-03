#include<iostream>
using namespace std;


// ye problem mujse hua nahi tha so try again.
// we have given a rope of length n and three pieces a,b,c we have to cut the rope in length of either(a,b,c) we have to find the max pieces that can
//be cutted from the rope.

int rope_cut(int n,int a,int b,int c){
if(n==0) return 0;
if(n<0) return -1;

 int res= max(rope_cut(n-a, a, b, c),max(rope_cut( n-b,a,b,c),rope_cut( n-c, a, b, c)));
 if(res==-1) return -1;
 else return res+1;
}

int main(){
    int ans=rope_cut(5, 4, 2,6);
    cout<<"largest no. of cuts ="<<ans<<endl;
}