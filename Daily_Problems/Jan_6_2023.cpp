int primeFactors(int n){
  int cnt = 0;
  while (n % 2 == 0) {
    cnt++;
    n = n / 2;
  }

  for (int i = 3; i <= sqrt(n); i = i + 2) {
    while (n % i == 0) {
      cnt++;
      n = n / i;
    }
  }

  if (n > 2)
    cnt++;

  return cnt;
}
public:
  int sumOfPowers(int a, int b) {
    // Code here
    int ans = 0;
    for (int i = a; i <= b; i++) {
      ans += primeFactors(i);
    }

    return ans;
  }
