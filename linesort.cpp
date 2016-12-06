#include <algorithm>
#include <csignal>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> inputItems;

void interruptHandler(int signal)
{
	if (signal == 2)
	{
		cout << "\n\033[1;7m========== Result ==========\033[0m" << endl;
		sort(inputItems.begin(), inputItems.end());
		for (int index = 0; index < inputItems.size(); index++)
			cout << inputItems[index] << endl;
		exit(0);
	}
}


int main(void)
{
	string input;
	signal(SIGINT, interruptHandler);
	cout << "Press 'Ctrl + C' to view the result." << endl;
	while(1)
	{
		getline(cin, input);
		inputItems.push_back(input);
	}
	return 0;
}
