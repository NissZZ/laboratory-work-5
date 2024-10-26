#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student
{
    string Name;
    string GroupId;
    vector<unsigned> Ratings;
    vector<string> Subjects;
};

vector<string> GroupsId(const vector<Student>& students)
{
    vector<string> groups;
    groups.push_back(students[0].GroupId);
    for (int i = 1; i < students.size(); i++)
    {
        if (count(groups.begin(), groups.end(), students[i].GroupId) == 0)
        {
            groups.push_back(students[i].GroupId);
        }
    }
    return groups;
}
