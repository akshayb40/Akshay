#include <iostream>
#include <string>
using namespace std;

int main()
{
int jellybeans = 39;

for (int g = 0; g < jellybeans; g++)
		{
			cout << "Your sibling ate a jellybean" << endl;
			cout<< "Jellybeans Left:" << jellybeans-g<< endl;
		}
}
