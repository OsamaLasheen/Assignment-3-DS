
 void radixSort(std::vector<int>& arr) {
     list<ElementType>* variable = new list<ElementType>[base];
     int basePower = 1;
     ElementType value;
     for (int p = 1; p <= num; p++) {
         while (!x.empty()) {
             value = x.front();
             x.pop_front();
             int digit = value % (base * basePower) / basePower;
             variable[digit].push_back(value);
         }
         for (int i = 0; i < base; i++)
             while (!variable[i].empty()) {
                 value = variable[i].front();
                 x.push_back(value);
                 variable[i].pop_front();
             }
         basePower *= base;
         cout << p << ": ";
         for (list<ElementType>::iterator i = x.begin(); i != x.end(); i++)
             cout << setfill('0') << setw(num) << *i << ", ";
         cout << endl;
     }
 }
