#include <iostream>
#include <vector>

using namespace std;

struct Student
{
    string Name;
    string GroupId;
    vector<unsigned> Ratings;
    vector<string> Subjects;
};

void SortByName(vector<Student>& students)
{
    for (int i = 0; i < students.size(); i++)
    {
        for (int j = 0; j < students.size(); j++)
        {
            if (students[i].Name < students[j].Name)
            {
                swap(students[i], students[j]);
            }
        }
    }
}
