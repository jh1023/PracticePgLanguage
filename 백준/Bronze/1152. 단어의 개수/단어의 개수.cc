#include <iostream>
#include <string>
#include <sstream>

using namespace std;
 
int main()
{
    string str = "";
	getline(cin, str);
	int n =0;
    stringstream ss(str);
    ss.str(str);

    string word;
    while(ss >> word) {
		n++;
    }
	cout<<n<<endl;

    return 0;
}
 