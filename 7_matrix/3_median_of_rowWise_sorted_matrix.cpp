//problem:-
//you are given an odd sized matrix with all distinct elements with all the rows sorted .
//you need to find the median element from all the elements of matrix.

// optimised approch:-
//   1) find the min & max values in the matrix
//   2) find the median position
//   3)  do binary search for element b/w min to max.
//             find the element's position (ele_pos)
//             if ele_pos < median position then search in b/w element to max.
//             else search in b/w min to element
              
  #include <bits/stdc++.h>
  using namespace std;
  

  void find_median(vector<vector<int>>&matrix)
  {
      int row= matrix.size();
      int columns=matrix[0].size();

      //finding the min and max values of  matrix
      int min=matrix[0][0],max=matrix[0][columns-1];

      for(int i=1 ;i<row;i++)
      {
           if(min>matrix[i][0])
              min=matrix[i][0];

           if(max<matrix[i][columns-1])   
              max=matrix[i][columns-1] ;  
      }

      int median_pos= (row*columns+1)/2;
    
     //binary search for elements b/w min to max
      while(min<max)  
      {
        int element = (min+max)/2;

        //finding the pos of element
        int pos=0;
       
       for(int i=0; i<row;i++)
       {
           pos+=upper_bound(matrix[i].begin(),matrix[i].end(),element) - matrix[i].begin();
       }

       if (pos<median_pos){
        min=element+1;
       }

       else{
        max=element;
       }

      }

      cout<<"median element is "<<max;
  }
  
  int main() {

     int rows, columns;
     cout<<"enter the  number of rows and columns of matrix"<<endl;
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
     
     find_median(matrix);
  }             