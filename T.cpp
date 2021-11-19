#include <iostream>
#include <string> 
#include <fstream>
#include <vector>
#include <cmath>

int factorial(int n)
{
  if (n == 0){ 
	return 1;
  }
  else{ 
  	return n * factorial(n - 1);
  }
}

using namespace std; 
int main(){
	int a, b;
	cin >> a >> b;
	if (b < a - 1){
		cout << 0;
	}else{
		int k = b - (a - 1);
		int n = a + 1;
		cout << factorial(k + n - 1) / (factorial(n - 1) * factorial(k));
	}
    return 0;
}