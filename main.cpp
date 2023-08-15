#include "lib.h"
#include "student.h"


int main()
{
    class Student student_funk;
    vector<Student> student;
    int size_students = 0;

    do
    {
        system("cls");
        cout << "1 - input student" << endl;
        cout << "2 - print student" << endl;
        cout << "3 - end" << endl;

        int select;
        cout << "input number: ";
        while (!(std::cin >> select) || select < 1 || select > 7)
        {
            cout << "input number: ";
            cin.clear();
            while (cin.get() != '\n')
                continue;
        }

        if (select == 1)
        {
            size_students++;
            student.resize(size_students);
            
            string name;
            cout << "input name: ";
            getline(cin, name);

            string surname;
            cout << "input surname: ";
            getline(cin, surname);

            string father_name;
            cout << "input father name: ";
            getline(cin, father_name);

            string date_birth;
            cout << "input date birth: ";
            getline(cin, date_birth);

            string telephone;
            cout << "input telephone: ";
            getline(cin, telephone);

            string city;
            cout << "input city: ";
            getline(cin, city);

            string country;
            cout << "input country: ";
            getline(cin, country);

            string name_school;
            cout << "input name school: ";
            getline(cin, name_school);

            student[size_students - 1].set_name(name);
            student[size_students - 1].set_surname(surname);
            student[size_students - 1].set_father_name(father_name);
            student[size_students - 1].set_date_birth(date_birth);
            student[size_students - 1].set_telephone(telephone);
            student[size_students - 1].set_city(city);
            student[size_students - 1].set_country(country);
            student[size_students - 1].set_name_school(name_school);
        }
        if (select == 2)
        {
            for (int i = 0; i < size_students; i++)
            {
                cout << "Student " << i+1 << endl;
                cout << "name: " << student[i].get_name() << endl;
                cout << "surname: " << student[i].get_surname() << endl;
                cout << "father name: " << student[i].get_father_name() << endl;
                cout << "date birth: " << student[i].get_date_birth() << endl;
                cout << "telephone: " << student[i].get_telephone() << endl;
                cout << "city: " << student[i].get_city() << endl;
                cout << "country: " << student[i].get_country() << endl;
                cout << "name school: " << student[i].get_name_school() << endl;
            }
        }
        if (select == 3)
        {
            break;
        }
        getchar();
        _getch();
    } while (true);
    return 0;
}