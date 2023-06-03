
// given an text string and a pattern string  you need to search if ther is any anagram of pattern string present in the text string

#include <bits/stdc++.h>
using namespace std;

bool is_equal(int*txt,int*pat)
{
    for(int i=0;i<256;i++)
    {
        if(txt[i]!=pat[i])
          return false;
    }

    return true;

}

void find_anagram(string& str, string& p)
{
    int n=str.length();
    int m=p.length();

    int txt[256]={0},pat[256]={0};

    for(int i=0;i<m;i++)
    {
        txt[str[i]]++;
        pat[p[i]]++;
    }

    for( int i=m;i<n;i++)
    {
        if(is_equal(txt,pat))
        {
            cout<<"anagram is present"<<endl;
            return;
        }

        else{

            txt[str[i]]++;
            txt[str[i-m]]--;
        }
    }

    cout<<"anagram is not present"<<endl;
}


int main() {
 
  string str;
  cout<<"enter the string "<<endl;
  cin>>str;

 string p;
  cout<<"enter the pattern"<<endl;
  cin>>p;

  find_anagram(str,p);

}