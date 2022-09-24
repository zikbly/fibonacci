#include <iostream>
using namespace std;

int main() {
	int i = 0,fibArray[20];
	while (i < 20) {
        if(i>1){ //Apply Fibonacci logic after 0,1
        	int var1=i-1,var2=i-2;
			fibArray[i]=fibArray[var1] + fibArray[var2];
        }else{
        	fibArray[i]=i;
        }
        cout << fibArray[i];
        if(i<19){//Apply comma and space to all numbers except the last number.
            cout << ", ";
        }
		i++;
  }
  return 0;
}
