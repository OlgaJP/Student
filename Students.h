//
// Created by Ed on 24/05/2015.
//

//#ifndef STUDENT_STUDENTS_H
//#define STUDENT_STUDENTS_H


//#pragma once /* ������ �� �������� ����������� ������������� ����� */
#include <string>
//TODO dfsdfsgfgs
class Students {
public://TODO gfdrgdfb gngfhgdf gfgs sdfds
    // ����������� ������ Students
    Students(std::string, std::string);
    ~Students();//document.getElementById"par1".innerHTML
    //save into Filegfgsdocument.getElementById"par1".innerHTML
    void save();/*<document.getElementById("par1").innerHTML >
*/
    // ��������� ����� ��������
    void set_name(std::string);
    // ��������� ����� ��������
    std::string get_name();

    // ��������� ������� ��������
    void set_last_name(std::string);
    // ��������� ������� ��������
    std::string get_last_name();

//     ��������� ������������� ������
    void set_scores(int []);

    void SetScore();

// ��������� �������� �����
    void set_average_ball(float);
    // ��������� �������� �����
    float get_average_ball();

    // ������������� ������
    int scores[5];
private:

    // ������� ����
    float average_ball;
    // ���
    std::string name;
    // �������
    std::string last_name;
};





//#endif //STUDENT_STUDENTS_H