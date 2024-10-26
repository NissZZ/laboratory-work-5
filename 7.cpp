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

struct Group
{
    string Id;
    vector<Student> Students;
};

vector<Group> Groups(const vector<Student>& students)
{
    vector<Group> groups;
    vector<string> groups_razl;
    groups_razl.push_back(students[0].GroupId);
    Group first{
        groups_razl[0],
        {students[0]},
    };
    groups.push_back(first);

    for (int i = 1; i < students.size(); i++)
    {
        if (count(groups_razl.begin(), groups_razl.end(), students[i].GroupId) == 0)
        {
            groups_razl.push_back(students[i].GroupId);
            groups.push_back(Group {
                groups_razl[i],
                {students[i]},
                });
        }
        else
        {
            for (int j = 0; j < groups.size(); j++)
            {
                if (groups[j].Id == students[i].GroupId)
                {
                    groups[j].Students.push_back(students[i]);
                }
            }
        }
    }
    return groups;
}
