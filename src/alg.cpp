// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int right = size - 1, left = 0, count = 0, mid;
    bool flag = false;
    while ((left <= right) && (flag != true)) {
        mid = (left + right) / 2;
        if (arr[mid] == value) flag = true; 
        if (arr[mid] > value) right = mid - 1; 
        else left = mid + 1;
    }
    if (flag){
        return mid; 
    } 
    else return 0;
}
