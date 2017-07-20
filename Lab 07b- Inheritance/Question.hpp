#ifndef _QUESTION_HPP
#define _QUESTION_HPP
#include <iostream>
#include <string>
using namespace std;

class Question
{
public:
    
    void Display();
    void SetQuestionText (string text);
    
private:
    
    string m_questionText;
};

class TrueFalseQuestion : public Question
{
public:
    void Display();
    void SetCorrectAnswer(string correctAnswer);
    bool CheckAnswer (string userAnswer);
private:
    string m_correctAnswer;
};

class MultipleChoiceQuestion : public Question
{
public:
    void Display();
    void SetAnswerChoices(string a, string b, string c, string d);
    void SetCorrectAnswer(int CorrectAnswer);
    bool CheckAnswer (int UserAnswer);
    
    
    
private:
    string m_answers [4];
    int m_correctAnswer;
    
};
#endif
