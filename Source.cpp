#include<iostream>
#include<fstream>
#include<vector>
int main()
{
	std::ifstream fin("in.txt");
	std::vector <int> numbs;
	while (!fin.eof())
	{
		int i;
		fin >> i;
		numbs.push_back(i);
	}
	for (int i = 0; i < 5; i++)
	{
		int n;
		std::cin >> n;
		std::cout << std::endl;
		bool is = false;
		for (int j = 0; j < numbs.size(); j++)
		{
			if (numbs[j] == n)
			{
				is = true;
				break;
			}
		}
		if (is)
			std::cout << "The number is found" << std::endl;
		else
			std::cout << "The number is NOT found" << std::endl;
	}
	return 0;
}