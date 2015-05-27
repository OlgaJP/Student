//
// Created by Ed on 24/05/2015.
//

//#ifndef STUDENT_STUDENTS_H
//#define STUDENT_STUDENTS_H


//#pragma once /* Защита от двойного подключения заголовочного файла */
#include <string>
//TODO dfsdfsgfgs
class Students {
public://TODO gfdrgdfb gngfhgdf gfgs sdfds
    // Конструктор класса Students
    Students(std::string, std::string);
    ~Students();//document.getElementById"par1".innerHTML
    //save into Filegfgsdocument.getElementById"par1".innerHTML
    void save();/*<document.getElementById("par1").innerHTML >
*/
    // Установка имени студента
    void set_name(std::string);
    // Получение имени студента
    std::string get_name();

    // Установка фамилии студента
    void set_last_name(std::string);
    // Получение фамилии студента
    std::string get_last_name();

//     Установка промежуточных оценок
    void set_scores(int []);

    void SetScore();

// Установка среднего балла
    void set_average_ball(float);
    // Получение среднего балла
    float get_average_ball();

    // Промежуточные оценки
    int scores[5];
private:

    // Средний балл
    float average_ball;
    // Имя
    std::string name;
    // Фамилия
    std::string last_name;
};





//#endif //STUDENT_STUDENTS_H