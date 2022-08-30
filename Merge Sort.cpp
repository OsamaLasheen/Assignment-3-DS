
template <typename ElementType>
 void mergesort(std::vector<int>& arr) {
     int mid;
     int low,high,a,b;
     if (low < high) {
         mid = (low + high) / 2;
         mergesort(a, b, low, mid);
         mergesort(a, b, mid + 1, high);
         merge(a, b, low, mid, high);
     }
 }
 void merge(int* m, int* n, int low, int  mid, int high) {
     int h, i, j, k;
     h = low;
     i = low;
     j = mid + 1;

     while ((h <= mid) && (j <= high)) {
         if (m[h] <= m[j]) {
             n[i] = m[h];
             h++;
         }
         else {
             n[i] = m[j];
             j++;
         }
         i++;
     }
     if (h > mid) {
         for (k = j; k <= high; k++) {
            n[i] = m[k];
             i++;
         }
     }
     else {
         for (k = h; k <= mid; k++) {
             n[i] = m[k];
             i++;
         }
     }
     for (k = low; k <= high; k++)
         m[k] = n[k];
 }
