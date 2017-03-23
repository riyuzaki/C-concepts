#include <iostream>
#include <vector>

using namespace std; // Without this error at "cout"

template<class T, class U>

class Map{

private:
	vector<T> keys;
	vector<U> values; 

public: 
	void insert(T key, U value){
		keys.push_back(key);
		values.push_back(value);
	}

	void get (int n){
		cout << keys[n] << ": " << values[n];
	}

};


int main(){

	Map<string, int> grades; // I don't understant this! 
	grades.insert("Rick", 100);
	grades.insert("Morty", 10);
	grades.get(0);
	cout << endl;
	grades.get(1);
	cout << endl;

	return 0;
}