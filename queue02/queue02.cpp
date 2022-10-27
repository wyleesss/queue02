#include <iostream>
#include <list>
#include <queue>
using namespace std;

int main() {
	srand(time(NULL));
	char arr[]{ 'A', 'B', 'C' };
	list<char> List(arr, arr + 3);
	queue<char, list<char>> Queue(List);
	for (int i = 0; i <= 21; i++)
		Queue.push(rand() % 57 + 65);
	cout << "size -> " << Queue.size() << "\noutput:\n";
	while (!Queue.empty()) {
		cout << Queue.front() << " ";
		Queue.pop();
	}
}