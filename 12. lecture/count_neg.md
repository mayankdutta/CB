### With 2 loops

```cpp
#include <iostream>
using namespace std;

int main() {

  int size = 7;
  int arr[] = {-1, 1, +2, -2, -3, +3, 10};
  int count_neg = 0;

  for (int i = 0; i < size; i++) {
    if (arr[i] < 0) {
      count_neg++;
    }
  }

  for (int i = 0; i < size; i++) {
    if (arr[i] < 0) {
      arr[i] *= -1;
    }
  }

  cout << "Total negative elements: " << count_neg << '\n';
}
```

### with one loop

```cpp
#include <iostream>
using namespace std;

int main() {

  int size = 7;
  int arr[] = {-1, 1, +2, -2, -3, +3, 10};
  int count_neg = 0;

  for (int i = 0; i < size; i++) {
    if (arr[i] < 0) {
      count_neg++;
      arr[i] *= -1;
    }
  }


  cout << "Total negative elements: " << count_neg << '\n';
}
```
