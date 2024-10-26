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

size_t CountTwoness(const vector<Student>& students)
{
    size_t count = 0;
    for (int i = 0; i < students.size(); i++)
    {
        for (int j = 0; j < students[i].Ratings.size(); j++)
        {
            if (students[i].Ratings[j] <= 2)
            {
                count++;
                break;
            }
        }
    }
    return count;
}
