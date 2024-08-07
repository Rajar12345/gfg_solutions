int search(int[] arr, int key) {
    int l = 0;
    int h = arr.length - 1;

    while (l <= h) {
        int mid = l + (h - l) / 2;

        if (arr[mid] == key) {
            return mid;
        }

        if (arr[l] <= arr[mid]) { // left half sorted
            if (key >= arr[l] && key < arr[mid]) {
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        } else { // right half sorted
            if (key <= arr[h] && key > arr[mid]) {
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
    }

    return -1;
}
