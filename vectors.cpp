#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> a;
	vector<string> b;
	
	a.push_back(1);
	cout << a[0] << endl;

	a.push_back(2);
	a.push_back(3);
	a.push_back(4);

	for(int i = 0; i < a.size(); i++)
		cout << a[i] << endl;

	b.push_back("Faiz");
	b.push_back("Chandani");
	b.push_back("Chandani has big boobs");

	for(int i = 0; i < b.size(); i++)
		cout << b[i] << endl;

	/*int num;
	cin >> num;

	vector<int> c;
	cout << "Size of c is " << c.size() << endl;
	for(int i = 0; i < num; i++){
		int n;
		cin >> n;
		c.push_back(n);
	}


	vector<int> d(num);
	for(int i = 0; i < num; i++)
		cin >> d[i];*/

	reverse(b[2].begin(), b[2].end());
	for(int i = 0; i < b.size(); i++)
		cout << b[i] << endl;

	reverse(a.begin(), a.end());
	for(int i = 0; i < a.size(); i++)
		cout << a[i] << endl;



	return 0;
}
