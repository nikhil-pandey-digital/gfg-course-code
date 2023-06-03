#include <bits/stdc++.h>
using namespace std;

void print_spiral(vector<vector<int>>& matrix)
{
    int rows=matrix.size();
    int columns=matrix[0].size();
    
// this conditions can be fitted within the  while loop( for shortning our code)
//    if(rows==1)
//    {
//     for(int i=0;i<columns;i++)
//     {
//         cout<<matrix[0][i]<<" ";
//     }
//    }


//     else if(columns==1){
      
//       for(int i=0;i<rows;i++)
//       {
//         cout<<matrix[i][0]<<" ";
//       }

//     }



    //declare four variables for print control
    int top=0,right=columns-1,bottom=rows-1,left=0;
    
    while(top<=bottom && left<=right)
    {

    //print top from left to right and increment top
        for(int i=left;i<=right;i++){
            cout<<matrix[top][i]<<" ";
        }
        top++;
    //print right from top to bottom and decrement right 
         for(int i=top;i<=bottom ;i++)
         {
            cout<<matrix[i][right]<<" ";
         }
         right--;

    //print bottom from right to left and decrement bottom
        
       if(top<=bottom) 
       {
         for(int i=right;i>=left;i--)
         {
            cout<<matrix[bottom][i]<<" ";
         }
         bottom--;
       }
    //print left from bottom to top and increment laft
        if(left<=right)
        {
           for(int i=bottom;i>=top;i--)
           {
              cout<<matrix[i][left]<<" ";
           }
           left++;

        }
    }

    
}

int main() {
     
 int rows, columns;

 cout<<"enter the rows and columns of matrix"<<endl;
 cin>>rows>>columns;

 int element;

 vector<vector<int>> matrix(rows);

  for(int i=0;i<rows;i++)
  {
    cout<<"enter the row " <<i+1<< " elements of matrix"<<endl;

    for (int j = 0; j < columns; j++)
    {
         cin>>element;
         matrix[i].push_back(element);
    }

  }


 print_spiral(matrix);

}