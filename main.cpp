// #include <iostream>

// using namespace std;

// int main() {
//   int n;
//   cin >> n;

// int row = 1;
//   while (row <= n){
//     int col = 1;
//     while( col < row){
//       cout <<col + row -2 <<" ";
//       col = col +1;
//     }
//     cout << endl;
// //     row = row + 1;
// //   }
// //   return 0;
// // }

// #include <iostream>

// using namespace std;

// int main() {
//   int n;
//   cin >> n;

//   for (int row = 1; row <= n; row++) {
//     // Print the row number at the start of each row
//     cout << row << " ";

//     // Print the remaining numbers in the row
//     for (int col = row + 1; col <= n; col++) {
//       cout << col << " ";
//     }

//     cout << endl;
//   }

//   return 0;
// }

#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  // Iterate through each row of the pattern
  for (int row = 1; row <= n; row++) {
    // Print the numbers in reverse order, starting from the current row number
    for (int col = row; col >= 1; col--) {
      cout << col << " ";
    }
    cout << endl;
  }

  return 0;
}
