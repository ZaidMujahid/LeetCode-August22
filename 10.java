// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/submissions/

// class Solution {
//     public TreeNode sortedArrayToBST(int[] nums) {
//         return bst(nums, 0, nums.length-1);
//     }
//     public TreeNode bst(int[] nums, int left, int right){
//         if(left>right) return null;
//         int mid = left + (right-left)/2;
//         TreeNode rootNode = new TreeNode(nums[mid]);
//         rootNode.left = bst(nums, left, mid-1);
//         rootNode.right = bst(nums, mid+1, right);
        
//         return rootNode;
//     }
// }