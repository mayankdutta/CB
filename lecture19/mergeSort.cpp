#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int left, int mid, int right) {
  vector<int> ans;

  int starting_of_array1 = left;
  int ending_of_array1 = mid;

  int starting_of_array2 = mid + 1;
  int ending_of_array2 = right;

  int i = starting_of_array1;
  int j = starting_of_array2;

  while (i <= ending_of_array1 && j <= ending_of_array2) {
    if (arr[i] < arr[j]) {
      ans.push_back(arr[i]);
      i++;
    } else {
      ans.push_back(arr[j]);
      j++;
    }
  }

  /*
  while (i <= ending_of_array1) {
    ans.push_back(arr[i]);
    i ++;
  }
  */

  while (i <= ending_of_array1)
    ans.push_back(arr[i++]);

  while (j <= ending_of_array2)
    ans.push_back(arr[j++]);

  int k = 0;
  for (int i = left; i <= right; i++) {
    arr[i] = ans[k++];
  }
}

void mergeSort(vector<int> &arr, int left, int right) {
  if (left < right) {

    int mid = (left + right) / 2;

    mergeSort(arr, left, mid);      // left
    mergeSort(arr, mid + 1, right); // right

    // I am getting leaves only here.

    merge(arr, left, mid, right);
  }
}

int main() {
  vector<int> arr = {12, 1, 4, 100, -1};

  mergeSort(arr, 0, arr.size() - 1);

  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << ' ';
  }
  cout << '\n';
}
