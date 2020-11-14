#include<iostream>
using namespace std;

class student {
private:
	string name;
	int roll_no, semester;
	int course_taking;
	int n;
public:
	student() {
		name = "NULL";
		roll_no = 0;
		semester = 0;
		course_taking = 0;

	}

	void setter1() {
		cout << "Enter name:";
		cin >> name;
		cout << "Enter Roll number:";
		cin >> roll_no;
		cout << "Enter semester:";
		cin >> semester;
		cout << "Enter number of courses:";
		cin >> course_taking;
	}



};

class course {
	int sessional_1, sessional_2, assignments, quizes, final, total_Marks;

	student s;
public:
	course() {
		sessional_1 = 0;
		sessional_2 = 0;
		assignments = 0;
		quizes = 0;
		final = 0;
		total_Marks = 0;


	}
	int setter() {

		s.setter1();
		cout << "Enter marks for sessional 1:";
		cin >> sessional_1;
		cout << "Enter marks for sessional 2:";
		cin >> sessional_2;
		cout << "Enter marks for assignments:";
		cin >> assignments;
		cout << "Enter marks for quizes";
		cin >> quizes;
		cout << "Enter marks for finals:";
		cin >> final;
		total_Marks = sessional_1 + sessional_2 + assignments + quizes + final;

		return final;
	}
	void getter() {
		cout << "Your Total marks is" << total_Marks;
	}

};

int main() {
	course c;
	c.setter();
	c.getter();
	return 0;


}