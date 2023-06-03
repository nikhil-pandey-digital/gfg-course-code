
/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space
*/

#include<bits/stdc++.h>
using namespace std;

//neive approch :- T.c-> O(nlog(n)) , S.c-> O(1)
//we will sort the array and start iterating from start and when we find arr[i]==arr[i+1] we return the arr[i]
// .
// .
// .

// better approch :- T.c-> O(n) , S.c-> O(n)
// we will use hash table of size n , and treat each element as index of the hashtable and modify its frequency if we encounter that 
// a  particular index has already a frequency that means that element is repeating and we will return i
//   .
//   .
//   .
//   . 

// best approch :- T.c -> O(n) , S.c -> O(1)
/*
    logic -> we will use the fast and slow pointer method of finding the first element of the cycle of the linked list

    algorithm :-
      1. intialise slow and fast variables for traversing the array. slow will move 1 step at a time and fast move 2 step at a time
      2. fast will enter in the loop earlier than slow 
      3. in the first part of algorithm  
             ~ we find the position in the array where they first meet inside the loop
      4. In the second part of algorithm
             ~ we move our fast or slow to the starting of the array and move both of them at same speed i.e 1 step at a time 
                they will automatically meet at the starting of the loop (which is the required ans)        

*/
   

int findRepeatingElement(int arr[],int size)
{
    int fast=arr[0],slow=arr[0];

    do{
        slow=arr[slow];
        fast=arr[arr[fast]];
    } while(slow!=fast);

     slow=arr[0];
        
        while(slow!=fast)
        {
            slow=arr[slow];
            fast=arr[fast];
        }
      return slow;
}