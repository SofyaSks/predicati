#include <iostream>
#include <vector>
#include <list>
#include <time.h>
#include <algorithm>
using namespace std;

bool positive(int val) {
	return val >= 0;
}


bool even(int val) {
	return bool(val % 2); // явное приведение на всякий случай 
}

class employee {
	string lastname;
	int age;
public:
	employee(string ln, int a) {
		lastname = ln;
		age = a;
	}

	void print() {
		cout << lastname << " " << age << endl;
	}

	bool operator() (employee& em) {
		return em.age >= 30;
	}
};

int main() {
	srand(time(NULL));
	//cout << positive(-10) << endl;
	/*vector <int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(rand() % 41 - 20);
		cout << v[i] << " ";
	}
	cout << endl;

	int res = count_if(v.begin(), v.end(), positive);
	cout << res << endl;*/

	//list <int> l;
	//list <int>::iterator it;

	//for (int i = 0; i < 10; i++)
	//{
	//	l.push_back(rand() % 20);
	//}
	///*for (auto it = l.begin(); it != l.end(); it++)
	//{
	//	cout << *it <<  " ";
	//}*/

	//cout << endl;
	//copy(l.begin(), l.end(), ostream_iterator<int>(cout, " "));
	//cout << endl;

	//it = remove_if(l.begin(), l.end(), even);
	//copy(l.begin(), it, ostream_iterator<int>(cout, " "));
	//cout << endl;

	vector <employee> em_v{
	employee("ln_1", 23),
	employee("ln_2", 33),
	employee("ln_3", 42),
	employee("ln_4", 19),
	employee("ln_5", 30)
	};

	int res = count_if(em_v.begin(), em_v.end(), em_v.front()); // front обращается к первому элементу вектора
	cout << res << endl;


	return 0;
}