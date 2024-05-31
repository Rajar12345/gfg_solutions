int swapNibbles(int n) {
        // code here
        return (n>>4)+((n&15)*(1<<4));
    }
