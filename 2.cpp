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

void SortByRating(vector<Student>& students)
{
    for (int i = 0; i < students.size(); i++)
    {
        float s1 = 0;
        for (int k = 0; k < students[i].Ratings.size(); k++)
        {
            s1 += students[i].Ratings[k];
        }
        s1 = s1 / students[i].Ratings.size();
        for (int j = 0; j < students.size(); j++)
        {
            float s2 = 0;
            for (int k = 0; k < students[j].Ratings.size(); k++)
            {
                s2 += students[j].Ratings[k];
            }
            s2 = s2 / students[j].Ratings.size();
            if (s1 > s2)
            {
                swap(students[i], students[j]);
            }
        }
    }
}
