
void SelectionSort(std::vector<int>& arr) {
     int size;
     int minimum;
      int minimumIndex, count = 0;
     for (int j = 0; j < size - 1; j++) {
         minimum = arr[j];   
         minimumIndex = j;
         for (int k = j + 1; k < size; k++) {
             count++;
             if (minimum > arr[k]) {
                 minimum = arr[k];
                 minimumIndex = k;
             }
         }
         if (minimumIndex != j) {
             arr[minimumIndex] = arr[j];
             arr[j] =minimum;
         }
     }    
 }

