
void insertionSort(std::vector<int>& arr) {
     int size;
     int index, temp, count = 0;
     for (int i = 1; i < size; i++)
         if (arr[i] < arr[i - 1]) {
             count++;
             temp = arr[i]; index = i;
             do {
                 arr[index] = arr[index - 1];
                 index--;
                 count++;
             } while (index > 0 && arr[index - 1] > temp);

             arr[index] = temp;
         }
 }
