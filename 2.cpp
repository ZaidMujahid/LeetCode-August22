#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/


//Brute force approach -> Using max heap
int kthSmallest(vector<vector<int>>& matrix, int k) {
    priority_queue<int> q;//max heap
    
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            q.push(matrix[i][j]);
            if(q.size() > k)
                q.pop();
        }
    }
    return q.top();
}


//Optimal Solution -> Binary Search
int kthSmallest(vector<vector<int>>& matrix, int k) {
    int n = matrix.size();
    int low = matrix[0][0], high = matrix[n-1][n-1];
    
    while(low < high){
        int mid = low+(high-low)/2;
        int count = 0;
        
        for(int i=0; i<n; i++){
            count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
        }
        if(count < k){
            low = mid+1;
        }else{
            high = mid;
        }
    }
    return low;
}