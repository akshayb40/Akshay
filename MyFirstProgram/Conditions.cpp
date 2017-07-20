#include <iostream>
#include <string>
using namespace std;

int main()
{
	int pointsUser = 0;
	int pointsRobot = 0;
	int userInput;
	
	cout << "Who would win in a fight, you or a Robot?" << endl;
    cout << "Answer the following questions, and this program will tell you!" << endl;
	cout<< "On a scale of one to ten how strong are you?" << endl;
	cin >> userInput;
	if (userInput > 7)
	{
		pointsUser ++;
	}
	else if (userInput <=7) {
		pointsRobot ++;
	}
	cout<< "On a scalre of one to ten how tactical of a planner are you?" << endl;
	
	cin >> userInput;
	if (userInput <= 8)
	{
		pointsRobot++;
	}
	else if (userInput > 8)
	{
		pointsUser ++;
	}
	
	char userYN;
    cout << "Would you be scared of a robot speeding at you? (y/n)" << endl;
    cin >> userYN;
    if (userYN != 'n')
    {
        pointsRobot += 1;
    }
    else
    {
        pointsUser += 1;
    }
	
	cout << "The program predicts that you will..." << endl;
	if (pointsUser > pointsRobot)
	{ cout << "Win! Good Job!" << endl;
	}
	else{
		cout << "Lose! Boohoo... " << endl; 
	}
		
	
}
