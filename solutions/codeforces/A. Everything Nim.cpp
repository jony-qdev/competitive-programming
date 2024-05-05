#include <iostream>
#include <set>

int main() {
  int t, n, aux;
  std::cin >> t;
  std::set<int> tests[t];
  std::string solutions[t];
  
  for (int i = 0; i < t; i++) {
    std::cin >> n;
    for (int j = 0; j < n; j++) {
      std::cin >> aux;
      tests[i].insert(aux);
    }
  
    int size = tests[i].size();
    bool isbreak = false;
    if (size != 1) {
      for (int k = 1; k <= size; k++) {
      
        if (tests[i].find(k) == tests[i].end()) {
          
          if (k % 2 == 0) {
            solutions[i] = "Bob";
          } else {
            solutions[i] = "Alice";
          }
          isbreak = true;
          break;
        }
      }
      
      if (!isbreak) {
        if (size % 2 == 0) {
          solutions[i] = "Bob";
        } else {
          solutions[i] = "Alice";
        }
      }
    } else {
      solutions[i] = "Alice";
    }
  }
  
  for(int i = 0; i < t; i++) {
    std::cout << solutions[i] << std::endl;
  }
  return 0;
} 
