#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    add code for struct here.
*/
typedef struct{
    char *first_name;
    char *last_name;
    int age;
    int standard; 
}Student;

int main() {
    Student *st = (Student*)malloc(sizeof(Student));

    st->first_name = (char*)calloc(128,sizeof(char));
    st->last_name = (char*)calloc(128,sizeof(char));
    cin >> st->age >> st->first_name >> st->last_name >> st->standard;
    cout << st->age << " " << st->first_name << " " << st->last_name << " " << st->standard;

    free(st->last_name);
    free(st->first_name);
    free(st);
    
    return 0;
}
