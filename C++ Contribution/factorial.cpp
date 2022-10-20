#include <iostream>
using namespace std;

int main() {
    int n;
    long factorial = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;
    while (n < 0)
    { 
      cout << "Error! Factorial of a negative number doesn't exist."<<endl;
      cout<<"again enter the number: "<<endl;
      cin>>n;
    }   
   
    for(int i = 1; i <= n; ++i)
        {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;    
   

    return 0;
}