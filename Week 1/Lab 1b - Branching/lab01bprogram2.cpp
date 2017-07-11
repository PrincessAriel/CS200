#include <iostream>
using namespace std;

int main()
{
	float student_points, total_points;
	cout << "What was your score?  ";
	cin >> student_points;
	cout << "What was the total points?  ";
	cin >> total_points;
	float percent = (student_points / total_points) * 100;
	cout << "Score:  " << percent << "%";
	if (percent >= 70)
	{
		cout << "      Pass" << endl;
	}
	else
	{
		cout << "      Fail" << endl;
	}

	while ( true ) ;
	return 0;
}