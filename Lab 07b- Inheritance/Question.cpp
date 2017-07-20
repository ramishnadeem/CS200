#include "Question.hpp"

void Question::Display()
{
    cout << m_questionText;
}

void  Question::SetQuestionText(string text)
{
    m_questionText = text;
}

void TrueFalseQuestion::Display()
{
    Question::Display();
    cout << "True or False?: ";
}

void TrueFalseQuestion::SetCorrectAnswer(string correctAnswer)
{
    m_correctAnswer = correctAnswer;
}

bool TrueFalseQuestion::CheckAnswer(string userAnswer)
{
    if (userAnswer == m_correctAnswer)
    {
        return true;
    }
    return false;
}

void MultipleChoiceQuestion:: SetAnswerChoices(string a, string b, string c, string d)
{
    m_answers[0] = a;
    m_answers[1] = b;
    m_answers[2] = c;
    m_answers[3] = d;
}

void MultipleChoiceQuestion::Display()
{
    Question::Display();
    for (int i = 0; i < 4; i++)
    {
        cout << i << ". " << m_answers[i] << endl;
    }
}

void MultipleChoiceQuestion::SetCorrectAnswer(int correct)
{
    m_correctAnswer = correct;
}

bool MultipleChoiceQuestion::CheckAnswer(int userAnswer)
{
    if (userAnswer == m_correctAnswer)
    {
        return true;
    }
    return false;
}
