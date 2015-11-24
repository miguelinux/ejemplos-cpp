#include <thread>
 
void func()
{
	//do some work
}

int main()
{
	std::thread t(func);
	t.join();

	return 0;
}
