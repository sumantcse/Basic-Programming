#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int result = 0,temp;
	tmep = n;
	while(temp != 0){
		result += temp % 10;
		temp = temp / 10;
	}
	cout << result << endl;
}