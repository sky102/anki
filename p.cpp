#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
using namespace std;
using namespace std::chrono;
typedef long long int ull;

void run(int count){
	while (count --> 0)
		cout << count << "CppNuts" << endl;
	// std::this_thread::sleep_for(chrono::seconds(3));
	cout << "thread finished" << endl;
}

int main(){
	std::thread t1(run, 10);
	cout << "main()\n" << endl;

	t1.detach();
	if(t1.joinable())
		t1.detach();
	

	cout << "main() after" << endl;
	std::this_thread::sleep_for(chrono::seconds(3));
	return 0;
}
