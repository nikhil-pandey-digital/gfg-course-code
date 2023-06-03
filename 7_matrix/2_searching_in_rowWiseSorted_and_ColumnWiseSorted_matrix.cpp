#include <bits/stdc++.h>
using namespace std;

void search(vector<vector<int>>& matrix,int target)
{

//Algorithm for searching in a row wise sorted and column wise sorted matrix:-

     //start from top-right corner
     // if target found print the index
     //if target less than current element move left
     //if target greater than current element move down
     //if reach at bottom-left and element not found then print element not found 

      int i=0,j= matrix[0].size()-1,size=matrix.size();

 while(j>=0 && i<size)
    {
        if(matrix[i][j]==target)
        {
           cout<<"element found at "<<i<<","<<j<<endl;
           return;
        }

        if(target< matrix[i][j])
        {
            //move left
            j--;
        }

        else if(target> matrix[i][j])
        {
          //move down
          i++;
        }
    }

    cout<<"element not found"<<endl;
}

int main() {

int rows, columns;
cout<<"enter the rows and columns of matrix"<<endl;
 cin>>rows>>columns;
 
 int element;
 vector<vector<int>> matrix(rows);
 
for(int i=0;i<rows;i++) {
 
   cout<<"enter the row " <<i+1<< " elements of matrix"<<endl;
 
  for (int j = 0; j < columns; j++) {
 
     cin>>element;
 
     matrix[i].push_back(element);
   }
}

int target;
cout<<"enter the element to be searched"<<endl;
cin>>target;
search(matrix,target);






}