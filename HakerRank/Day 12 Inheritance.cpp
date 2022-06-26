#include <iostream>
#include <vector>
using namespace std;

// not working

class Student
{
protected:
    string firstName;
    string lastName;
    int id;
public:

    Student(string firstName, string lastName, int identification)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }

    void display()
    {
        cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
    }

};

class Grade :  public Student
{
private:

    int score;
public:

    Grade(string firstName, string lastName, int identification,int scores) :Student(firstName,lastName,identification)
		{
        this-> score = score;
    }
		char calculate(){
        char ch;
        if(this->score < 40) return 'D';
        else if(this->score >= 40 && this->score < 60) ch =  'B';
        else if(this->score >= 60 && this->score  < 75) ch =  'A';
        else if(this->score >= 75 && this->score  < 90) ch =  'E';
        else if(this->score >= 90 && this->score  <= 100) ch =  'O';
        return ch;
    }
};

int main()
{
    string firstName;
    string lastName;
    int id;
    int numScores;

    cin >> firstName >> lastName >> id >> numScores;

    vector<int> scores;

    for(int i = 0; i < numScores; i++)
    for(int i = 0; i < numScores; i++)
    {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    //gold gold;
    Student *stu=new Grade(firstName,lastName,id,numScores);

    stu->display();
    Grade *g=(Grade*)stu;
    cout<< "\nGrade: "<<g->calculate();
    return 0;

    return 0;
}
