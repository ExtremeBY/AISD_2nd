#include "Macros.h"
int main()
{
	SCOCP1251
	SCCP1251
	srand(time(0));
	int n;
	vv n;
	vector <int> price(n);
	for (int i = 0; i < n; i++)
	{
		price[i] = rand() % 100 + 1;
		vi price[i]; nw 
	}
	nl
	sort(price.begin(), price.end());
	for (int i = 0; i < n / 2; i++)
	{
		swap(price[i], price[n - i - 1]);
	}
	if (n % 2 == 1)
	{
		for (int i = 0; i < n - 1; i++)
		{
			while (i % 2 == 1 && price[i] > price[i + 1])
			{
				swap(price[i], price[i + 1]);
			}
		}
		for (int i = 1; i < n; i += 2)
		{
			while (price[i] > price[n - i])
			{
				swap(price[i], price[n - i]);
			}
		}
	}
	else
	{
		for (int i = 0; i < n - 1; i++)
		{
			while (i % 2 == 1 && price[i] > price[i + 1])
			{
				swap(price[i], price[i + 1]);
			}
		}
		for (int i = 1; i < n; i += 2)
		{
			while (price[i] > price[n - i - 1])
			{
				swap(price[i], price[n - i - 1]);
			}
		}
	}
	

	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		vi price[i]; nw 
		if (i % 2 == 0)
		{
			ans += price[i];
		}
	}
	vi "- Чек"; nl
	vi ans; nw vi "- Сумма чека"; nl
	nl
	pause
	ret 0;
}