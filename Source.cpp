#include<iostream>
#include<queue>
using namespace std;
int main() {
	queue<int> Q ,q;
	int size;
	cin >> size;
	for (int i = 1; i <= size; i++)	
	{
		if (i % 2 == 1) Q.push(i);
		else q.push(i);
		if (!Q.empty()) {
			cout << Q.front() ;

			Q.pop();
		}
	}
	for (int i=size; i >1; --i)
	{
		if (!q.empty()) {
			cout << q.front();

			q.pop();
		}
	}
	q.back();
}