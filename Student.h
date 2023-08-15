#include "lib.h"

class Student
{
private:
    string name;
    string surname;
    string father_name;
    string date_birth;
    string telephone;
    string city;
    string country;
    string name_school;
public:
    Student();
    Student(string name, string surname, string father_name, string date_birth, string telephone, string city, string country, string name_school);

    string get_name();
    string get_surname();
    string get_father_name();
    string get_date_birth();
    string get_telephone();
    string get_city();
    string get_country();
    string get_name_school();

    void set_name(string name);
    void set_surname(string surname);
    void set_father_name(string father_name);
    void set_date_birth(string date_birth);
    void set_telephone(string telephone);
    void set_city(string city);
    void set_country(string country);
    void set_name_school(string name_school);
};