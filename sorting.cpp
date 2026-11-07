#include<bits/stdc++.h>
using namespace std;

//----------------------------------Quick Sort----------------------------------
//TC->O(NlogN) SC->O(1)->divide & conquer algo
int partition(vector<int>&arr, int low, int high) {
  int pivot = arr[low];
  int i = low;
  int j = high;
  while (i < j) {
    while (arr[i] <= pivot && i <= high - 1) {
      i++;
    }
    while (arr[j] > pivot && j >= low + 1) {
      j--;
    }
    if (i < j) swap(arr[i], arr[j]);
  }
  swap(arr[low], arr[j]);
  return j;
}
void qs(vector<int>&arr, int low, int high) {
  if (low < high) {
    int pindex = partition(arr, low, high);
    qs(arr, low, pindex - 1);
    qs(arr, pindex + 1, high);
  }
}
vector<int>quicksort(vector<int>&arr, int low, int high) {
  qs(arr, 0, arr.size() - 1);
  return arr;
}

//------------------------Merge sort------------------------
//TC->O(nlogn) (logn)->log base 2 n
//SC->O(n)
// void merge(vector<int>&nums, int low, int mid, int high) {
//   int left = low;//left=0
//   int right = mid + 1;//right=2 mid=1 high=3
//   vector<int>temp;//nums={2,5,3,1}
//   while (left <= mid && right <= high) {//left=0,1 right=2,3
//     if (nums[left] <= nums[right]) {
//       temp.push_back(nums[left]);//temp={2,}
//       left++;
//     }
//     else {
//       temp.push_back(nums[right]);//temp={2,3,}
//       right++;
//     }
//   }
//   while (left <= mid) {
//     temp.push_back(nums[left]);
//     left++;
//   }
//   while (right <= high) {
//     temp.push_back(nums[right]);
//     right++;
//   }
//   for (int i = low; i <= high; i++) {
//     nums[i] = temp[i - low];
//   }
// }
// void mergesort(vector<int>&nums, int low, int high) {
//   if (low >= high) return ;
//   int mid = (low + high) / 2;
//   mergesort(nums, low, mid);
//   mergesort(nums, mid + 1, high);
//   merge(nums, low, mid, high);
// }
// vector<int>sortarray(vector<int>&nums, int low, int mid, int high) {
//   mergesort(nums, 0, nums.size() - 1);
//   return nums;
// }
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  vector<int>a, s = {4, 2, 1, 5, 3};
  a = quicksort(s, 0, s.size() - 1);
  for (auto x : a) cout << x << " ";
  // vector<int>nums = {2, 5, 3, 1};
  // vector<int>ans = sortarray(nums, 0, 2, 3);
  // for (auto x : ans) cout << x << " ";
  //----------------------------------QUICK SORT------------------------------
  // maxProduct(nums);
  //---------------------SELECTION SORT->TC o(N^2)->best/worst/avg----------------------------
  // for (i = 0; i < n - 1; i++) {
  //   int *min = min_element(arr + i, arr + n);
  //   if (arr[i] > *min) swap(arr[i], *min);
  // }
  //OR
  //basically min find karo phir arr[j] se compare krlo
  //{13,46,24,52,20,9}
  //{9,46,24,52,20,13}s1
  //{9,13,24,52,20,46}s2
  //{9,13,20,52,24,46}s3
  //{9,13,20,24,52,46}s4
  //{9,13,20,24,46,52}s5
  // for (i = 0; i < n - 1; i++) {
  //   int min = i;
  //   for (j = i; j <= n - 1; j++) {
  //     if (arr[j] < arr[min]) {
  //       min = j;
  //     }
  //   }
  //   //swap(arr[i], arr[min]);
  //   //if not using swap()
  //   int temp = arr[i];
  //   arr[i] = arr[min];
  //   arr[min] = temp;
  // }
  //-------------------Bubble Sort->pushes the max to last by adjacent swap--------
  //TC->O(N^2)
  //{13,46,24,52,20,9}->before sawpping
  //pass1->i=n-1=5,j=i-1=4
  //{13,46,24,52,20,9}->{13,46,24,52,20,9}j=0
  //{13,46,24,52,20,9}->{13,24,46,52,20,9}j=1
  //{13,24,46,52,20,9}->{13,24,46,52,20,9}j=2
  //{13,24,46,52,20,9}->{13,24,46,20,52,9}j=3
  //{13,24,46,20,52,9}->{13,24,46,20,9,52}j=4
  //pass2->i=n-2=4,j=i-1=3
  //{13,24,46,20,9,52}->{13,24,46,20,9,52}j=0
  //{13,24,46,20,9,52}->{13,24,46,20,9,52}j=1
  //{13,24,46,20,9,52}->{13,24,20,46,9,52}j=2
  //{13,24,20,46,9,52}->{13,24,20,9,46,52}j=3
  //pass3 - >i=n-3=3,j=i-1=2
  //{13,24,20,9,46,52}->{13,20,24,9,46,52}j=0
  //{13,20,24,9,46,52}->{13,20,9,24,46,52}j=1
  //{13,20,9,24,46,52}->{13,20,9,24,46,52}j=2
  //pass4 - >i=n-4=2,j=i-1=1
  //{13,20,9,24,46,52}->{13,9,20,24,46,52}j=0
  //pass5
  //{13,9,20,24,46,52}->{9,13,20,24,46,52}j=0
  // for (i = n - 1; i > 0; i--) {
  //   for (j = 0; j <= i - 1; j++) {
  //     if (arr[j ] > arr[j + 1]) {
  //       int temp = arr[j];
  //       arr[j] = arr[j + 1];
  //       arr[j + 1] = temp;
  //     }
  //   }

  // }
  //Optimal solution
  //TC->best case->O(N)
  // for (i = n - 1; i > 0; i--) {
  //   int didswap = 0;
  //   for (j = 0; j <= i - 1; j++) {
  //     if (arr[j ] > arr[j + 1]) {
  //       int temp = arr[j];
  //       arr[j] = arr[j + 1];
  //       arr[j + 1] = temp;
  //       didswap = 1;
  //     }
  //   }
  //   if (didswap == 0) break;

  // }
  //---------------Insertion Sort--------------------------
  //takes an element and places in its correct order
  //Tc->O(n^2)->worst/avg,best->O(n)
  // for (i = 0; i <= n - 1; i++) {
  //   j = i;
  //   while (j > 0 && arr[j - 1] > arr[j]) {
  //     int temp = arr[j - 1];
  //     arr[j - 1] = arr[j];
  //     arr[j] = temp;
  //     j--;
  //   }
  // }
  // for (i = 0; i < n; i++) cout << arr[i] << " ";
  return 0;
}
