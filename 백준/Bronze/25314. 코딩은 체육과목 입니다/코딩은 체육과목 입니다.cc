#include <iostream>
using namespace std;

int main()
{
	int sByte;
	cin >> sByte;
	string printByte = "long ";
	
	for(int i =1; i<=sByte/4; i++){
		cout << printByte;	
	}
	cout << "int";
	return 0;
}
