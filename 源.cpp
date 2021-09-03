//#include "head.h"
#include <iostream>
#include<string>

using namespace std;
class student
{
public:
	int No;
	const char* Name;
	float Score;
	void input(int no,char* name,float score);
	void output(void);

};
void student::input(int no,char* name, float score)
{
	No = no;
	Name = name;
	Score = score;
}
void student::output(void)
{
	cout << No << endl;
	cout << Name << endl;
	cout << Score << endl;
}
int main()
{
	student S1;
	int no;
	char* name;
	char text[] = "nihao";
	float score;
	no = 1;
	name = text;
	score = 78;
	S1.input(no,name,score);
	S1.output();
	return 0;


}