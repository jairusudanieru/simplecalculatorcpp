#include <bits/stdc++.h>
using namespace std;

int main() {
  //variables
  string vn1 = "false";
  string vn2 = "false";
  string op = "false"; 
  string agn = "y";
  string a;
  int n1, n2;

    //loop to try again
    while(agn == "y") {
      
      //loop if invalid 1st number
      while(vn1 == "false") {
        cout << "Enter a 1st valid number: ";
        cin >> n1;

        //checks if the 1st number is valid
        if (!cin) {
          cin.clear();
          string line;
          getline(cin, line);
          cout << "Invalid! Please ";
          vn1 = "false";
        } else {
          vn1 = "true";
        }
      }
      
      //loop if invalid 2nd number
      while(vn2 == "false") {
        cout << "Enter a 2nd valid number: ";
        cin >> n2;

        //checks if the 2nd number is valid
        if (!cin) {
          cin.clear();
          string line;
          getline(cin, line);
          cout << "Invalid! Please ";
          vn2 = "false";
        } else {
          vn2 = "true";
        }
      }
        
        //loop if invalid operation
        while(op == "false") {
          cout << "Enter a Valid Operation: ";
          cin >> a;
          
          //computation
          if (a == "+") {
            double sum = n1 + n2;
            cout << "The answer is: " << sum;
            op = "true";
          } else if (a == "-") {
            double diff = n1 - n2;
            cout << "The answer is: " << diff;
            op = "true";
          } else if (a == "*" || a == "x") {
            double prod = n1 * n2;
            cout << "The answer is: " << prod;
            op = "true";
          } else if (a == "/") {
            double quot = n1 / n2;
            cout << "The answer is: " << quot;
            op = "true";
          } else {
            cout << "Invalid! Please ";
            op = "false";
          }
        }

      //ask if try again
      cout << endl << "Type \"y\" to try again: ";
      cin >> agn;
      op = "false";
      vn1 = "false";
      vn2 = "false";
    }

  //end code
  cout << "Thank You!";
  return 0;
}
