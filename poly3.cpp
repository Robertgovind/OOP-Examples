// to illustrate the use virtual base class
#include <iostream>
using namespace std;
class Student
{
    int roll;

public:
    void getroll()
    {
        cout << "Enter roll no: ";
        cin >> roll;
    }
    void putroll()
    {
        cout << "\n Roll no: " << roll;
    }
};
class Exam : virtual public Student
{
public:
    int part1, part2;
    void getmarks()
    {
        cout << "Enter marks in part1&part2 : ";
        cin >> part1 >> part2;
    }
    void putmarks()
    {
        cout << "\n Part1 : " << part1 << "\nPart2 : " << part2;
    };
};
class Sports : virtual public Student
{
protected:
    int score;

public:
    void getscore()
    {
        cout << "Enter score : ";
        cin >> score;
    }
    void putscore()
    {
        cout << "\nScore: " << score;
    }
};
class result : public Exam, public Sports
{
    int total;

public:
    void display()
    {
        total = part1 + part2 + score;
        putroll();
        putmarks();
        putscore();
        cout << "\nTotal Score: " << total;
    }
};
int main()
{

    result r;
    r.getroll();
    r.getmarks();
    r.getscore();
    r.display();

    return 0;
}