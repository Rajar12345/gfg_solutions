bool containsFour(int number) {
    while (number > 0) {
        if (number % 10 == 4) {
            return true;
        }
        number /= 10;
    }
    return false;
}
    int countNumberswith4(int n) {
        // code here
        int count=0;
        for(int i=1;i<=n;i++){
            if(containsFour(i)){
                count++;
            }
        }
        return count;
    }
