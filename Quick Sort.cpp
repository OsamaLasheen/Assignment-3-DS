
 void quicksort(std::vector<int>& arr) {
     int variable;
     int first, last, x;
     if (first < last) {                
        split(x, first, last, variable);  
         quicksort(x, first, variable - 1); 
         quicksort(x, variable + 1, last);   
     }
 }
 
 void split(ElementType* x,  int first, int last, int& variable)
 {
     ElementType m = x[first];   
     int left = first,                
         right = last;                
     while (left < right) {
         while (m < x[right])      
             right--;                   
         while (left < right &&       
             (x[left] < m || x[left] == m))
             left++;

         if (left < right)             
             swap(x[left], x[right]);   
     }
     
     variable = right;
     x[first] = x[variable];
     x[variable] = m;
 }
