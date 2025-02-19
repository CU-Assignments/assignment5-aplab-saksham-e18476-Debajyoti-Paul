#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap; // Min-Heap

        for (int num : nums) {
            minHeap.push(num);
            if (minHeap.size() > k) {
                minHeap.pop(); // Keep only k largest elements
            }
        }

        return minHeap.top(); // Top element is the kth largest
    }
};

int main() {
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;

    Solution sol;
    cout << "Kth largest element: " << sol.findKthLargest(nums, k) << endl;

    return 0;
}
