
void bubbleSort(std::vector<int>& arr) {
    int temp;
    int size;
    int count = 0;
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++) {
            count++;
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            } 
        }
}
