#include <iostream>
#include <vector>
using namespace std;

struct Student
{
    string Name;
    string GroupId;
    vector<unsigned> Ratings;
    vector<std::string> Subjects;
};

vector<Student> VectorMathExcellent(const vector<Student>& students)
{
    vector<Student> result;
    for (int i = 0; i < students.size(); i++)
    {
        for (int j = 0; j < students[i].Subjects.size(); j++)
        {
            if (students[i].Subjects[j] == "Math")
            {
                if (students[i].Ratings[j] == 5)
                {
                    result.push_back(students[i]);
                }
            }
        }
    }
    return result;
}
