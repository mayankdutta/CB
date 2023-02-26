
int squareRoot(int n) {
  int ans = 1;
  for (int i = 1; i <= n; i++) {
    int square = i * i;

    if (square <= n) {
      ans = i;
    }
  }

  return ans;
}

int max(int a, int b) {
  if (a > b) return a; 
  else       return b;
}
