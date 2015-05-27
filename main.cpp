
#include <iostream>
#include <bits/stl_vector.h>
#include "Students.h"


//https://code-live.ru/post/cpp-vector/
int main(int argc, char *argv[])
{
    // ��������� ����������, �������� ��� �������
    std::string name;
    // � ��� �������
    std::string last_name;

    // ���� �����
    std::cout << "Name: ";
    getline(std::cin, name);
    // � �������
    std::cout << "Last name: ";
    getline(std::cin, last_name);

    // �������� ���������� ������������
    Students *student = new Students(name,
                                     last_name);

    // ������
    int scores[5];
    // ����� ���� ������
    int sum = 0;

    // ���� ������������� ������
    for (int i = 0; i < 5; ++i) {
        std::cout << "Score " << i+1 << ": ";
        std::cin >> scores[i];
        // ������������
        sum += scores[i];
    }
    // ��������� ������������� ������ � ������ ������ Student
    student->set_scores(scores);

    // ������� ������� ����
    float average_ball = sum / 5.0;
    // ��������� ������� ����
    student->set_average_ball(average_ball);

    // ������� ������ �� ��������
    std::cout << "Average ball for " << student->get_name() << " "
    << student->get_last_name() << " is "
    << student->get_average_ball() << std::endl;

    student->save();

    std::vector<std::string> students1;
    students1.push_back("sda");

    // �������� ������� student �� ������
    delete student;
    return 0;
}