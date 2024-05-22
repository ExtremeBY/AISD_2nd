#include "Macros.h"
#include "123.h"
#include <chrono>

int main()
{
	vi "Enter N"; nl
	int n = 0;
	vv n;
	nl
	if (n >= 0)
	{
		int dig0 = 0, dig1 = 1, ans = 0;

		vi "CYCLE"; nl

		auto start = chrono::high_resolution_clock::now();

		for (int i = 2; i <= n; i++)
		{
			ans = dig1 + dig0;
			dig0 = dig1;
			dig1 = ans;
		}

		auto end = chrono::high_resolution_clock::now();
		chrono::duration <double> diff = end - start;
		int minutes = diff.count() / 60;
		int seconds = int(diff.count()) % 60;

		vi ans; nl
		vi "Time By Cycle: " << minutes << " Minutes " << seconds << " Seconds."; nl
		nl

	}
	// RECURSE

if (n >= 0)
{
	vi "RECURSE"; nl
		auto start = chrono::high_resolution_clock::now();

		int ans = 0;

		ans = fib_recurse(n);

		auto end = chrono::high_resolution_clock::now();
		chrono::duration<double> diff = end - start;
		int minutes = diff.count() / 60;
		int seconds = int(diff.count()) % 60;

		vi ans; nl
		vi "Time By Recurse: " << minutes << " Minutes " << seconds << " Seconds."; nl
		nl
	}
	return 0;
}