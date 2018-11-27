//Christina Hinton
//simple hello world program
#include <iostream>
using namespace std;

int sum(int n);
int product(int n);
int main(){

  int n;
  
  cout << "Please enter number: ";
  cin >> n;

  int s = sum(n);

  int m = product(n);
  
  cout << "The sum is: " << s << endl;

  cout << "Tehe product is: " << m << endl;
  
  return 0;
}


int sum(int n){

  int s = 0;
  for(int i = 1; i <= n; i++)
    s = s + i;

  return s;
}

int product(int n){

  int p = 1;

  for(int i = 1; i <= n; i++)
    p = p * i;

  return p;
}
