#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student
{
    private:
        int age;
        int scores[5];
        string first_name;
        string last_name;
    public:
        // read scores
        void input()
        {
            for (int i = 0; i < 5; i++)
            {
                cin >> scores[i];
            }
        }
        // sets
        void set_age(int n)
        {
            age = n;
        }
        void set_first_name(string s)
        {
            first_name = s;
        }
        void set_last_name(string s)
        {
            last_name = s;
        }
        // gets
        int get_age()
        {
            return age;
        }
        string get_first_name()
        {
            return first_name;
        }
        string get_last_name()
        {
            return last_name;
        }
        // calculate sum
        int calculateTotalScore()
        {
            int ret = 0;
            for (int i = 0; i < 5; i++)
                ret += scores[i];
            return ret;
        }
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}

