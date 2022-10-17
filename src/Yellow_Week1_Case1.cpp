//============================================================================
// Name        : Yellow_Week1_Case1.cpp
// Author      : grec88
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

int main() {
	size_t n = 0;
	cin >> n;
	vector<int> t_values(n);
	double sum = 0;
	for(auto& c : t_values){
		cin >> c;
		sum += c;
	}
	int size = t_values.size();
	double avg = sum/size;
	cout << count_if(begin(t_values), end(t_values), [avg](int x){return x > avg;}) << "\n";
	for(int i = 0; i < size; ++i){
		if(avg < t_values[i] && i == size - 1){
			cout << i;
		}
		else if(avg < t_values[i] && i != size - 1){
			cout << i << " ";
		}
	}
	return 0;
}
