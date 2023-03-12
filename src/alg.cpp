// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int left, right = size - 1, cnt = 0, middle, i = 1;
  while (left <= right) {
    middle = (left + right) / 2;
    if (value < arr[middle]) {
            right = middle - 1;
        } else if (value > arr[middle]) {
            left = middle + 1;
        } else {
            cnt++;
            while (arr[i] == arr[middle - i]) {
                cnt++;
                i++;
            }
            i = 1;
            while (arr[i] == arr[middle + i]) {
                cnt++;
                i++;
            }
            return cnt;
        }
    }
  return 0; // если ничего не найдено
}
