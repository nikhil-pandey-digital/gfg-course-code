#include <iostream>
#include <vector>

using namespace std;
//t.c->O(n!*n)
//s.c->O(n)+O(n)
void permut_all(string &s,string &temp,bool map[])
{
    if(temp.length()==s.length()){
        cout<<temp<<endl;
        return;
    }

    for(int i=0;i<s.length();i++){
        
        if(!map[i])
        {
            temp=temp+s[i];
            map[i]=true;
            permut_all(s,temp, map);
            map[i]=false;
            temp.pop_back();
            
        }
    }

}

//another  better approch 
//T.C o(N!*N)
//s.c O(1)

void print_permu(string &s,int iter=0){

    if(iter==s.size()){
       cout<<s<<endl;
       return;
    }

    for(int i=iter;i<s.size();i++){
        swap(s[iter],s[i]);
        print_permu(s, iter+1);
         swap(s[iter],s[i]);
    }
}

int main(){

    string s;
    cout<<"enter the string"<<endl;
    cin>>s;
    //bool map[s.length()]={0};
    //string temp;
    //permut_all(s,temp,map);
    print_permu(s);
}