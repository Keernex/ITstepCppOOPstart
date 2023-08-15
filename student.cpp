#include "student.h"



Student::Student()
{
    name = "";
    surname = "";
    father_name = "";
    date_birth = "";
    telephone = "";
    city = "";
    country = "";
    name_school = "";
}
Student::Student(string name, string surname, string father_name, string date_birth, string telephone, string city, string country, string name_school)
{
    this->name = name;
    this->surname = surname;
    this->father_name = father_name;
    this->date_birth = date_birth;
    this->telephone = telephone;
    this->city = city;
    this->country = country;
    this->name_school = name_school;
}

string Student::get_name()
{
    return name;
}
string Student::get_surname()
{
    return surname;
}
string Student::get_father_name()
{
    return father_name;
}
string Student::get_date_birth()
{
    return date_birth;
}
string Student::get_telephone()
{
    return telephone;
}
string Student::get_city()
{
    return city;
}
string Student::get_country()
{
    return country;
}
string Student::get_name_school()
{
    return name_school;
}

void Student::set_name(string name)
{
    this->name = name;
}
void Student::set_surname(string surname)
{
    this->surname = surname;
}
void Student::set_father_name(string father_name)
{
    this->father_name = father_name;
}
void Student::set_date_birth(string date_birth)
{
    this->date_birth = date_birth;
}
void Student::set_telephone(string telephone)
{
    this->telephone = telephone;
}
void Student::set_city(string city)
{
    this->city = city;
}
void Student::set_country(string country)
{
    this->country = country;
}
void Student::set_name_school(string name_school)
{
    this->name_school = name_school;
}
