#include "Button.hpp"

void Button::SetText(string text)
{
	m_text = text;
}

void Button::Draw() const
{
	
	for (int i = 0; i < m_text.size() + 4; i++)
	{
		cout << "*";
	}
	cout << endl;
	cout << "* " << m_text << " *" << endl;
	for (int i = 0; i < m_text.size() + 4; i++)
	{
		cout << "*";
	}
	cout << endl;
}