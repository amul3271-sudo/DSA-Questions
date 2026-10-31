#include <bits/stdc++.h>
using namespace std;



// Given an integer array arr[] and an integer k, find and return the kth smallest element in the given array.
class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        priority_queue<int> pq;
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
            if(pq.size()>k){
                pq.pop();
            }
        }
        return pq.top();
    }
};
// Input: arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
// Output: 5
// Explanation: 4th smallest element in the given array is 5.

