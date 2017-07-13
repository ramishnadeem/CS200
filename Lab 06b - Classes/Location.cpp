#include "Location.hpp"

Location::Location()	// constructor
{
    m_ptrToNorth = nullptr;
    m_ptrToSouth = nullptr;
    m_ptrToEast = nullptr;
    m_ptrToWest = nullptr;
}

void Location::SetInfo( string name, string description )
{
    // Set m_name and m_description
    m_name = name;
    m_description = description;
}

string Location::GetName()
{
    // Return m_name value
    return m_name;
}

void Location::Display()
{
    // Display name, description, and what directions have neighbors
    cout << m_name << endl;
    cout << m_description << endl;
    if (m_ptrToNorth != nullptr)
    {
        cout << "To the NORTH is " << m_ptrToNorth->GetName() << endl;
    }
    if (m_ptrToSouth != nullptr)
    {
        cout << "To the SOUTH is " << m_ptrToSouth->GetName() << endl;
    }
    if (m_ptrToEast != nullptr)
    {
        cout << "To the EAST is " << m_ptrToEast->GetName() << endl;
    }
    if (m_ptrToWest != nullptr)
    {
        cout << "To the WEST is " << m_ptrToWest->GetName() << endl;
    }
}

void Location::SetNeighbor( string direction, Location* ptrLocation )
{
    // Set up neighbor in the given direction.
    if (direction == "north")
    {
        m_ptrToNorth = ptrLocation;
    }
    else if (direction == "south")
    {
        m_ptrToSouth = ptrLocation;
    }
    else if (direction == "east")
    {
        m_ptrToEast = ptrLocation;
    }
    else if (direction == "west")
    {
        m_ptrToWest = ptrLocation;
    }
}

Location* Location::GetNeighbor( string direction )
{
    // Return the corresponding location pointer
    if (direction == "north")
    {
        return m_ptrToNorth;
    }
    else if (direction == "south")
    {
        return m_ptrToSouth;
    }
    else if (direction == "east")
    {
        return m_ptrToEast;
    }
    else if (direction == "west")
    {
        return m_ptrToWest;
    }
    else
    {
        return nullptr;
    }
}
