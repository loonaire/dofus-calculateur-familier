#include <iostream>
#include <vector>

using namespace std;

int main(){
	int ab = 100;
	vector<int> tab(ab);
	/*
	int i;
	for(i=0;i<10;i++){
		tab.push_back();
	}
	*/
	cout << "taille de tab:" << tab.size() << endl;
	
	return 0;
}
