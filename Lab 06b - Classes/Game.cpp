#include "Game.hpp"

Game::Game()
{
    ptrStart = &locations[0];
    ptrEnd = &locations [8];
    ptrCurrent = ptrStart;
    SetupLocations();
}

void Game::TryToMove( char direction )
{
    if (direction == 'n' && ptrCurrent->GetNeighbor("north") != nullptr)
    {
        ptrCurrent = ptrCurrent->GetNeighbor("north");
        cout << "You move north " << endl << endl;
    }
    else if (direction == 's' && ptrCurrent->GetNeighbor("south") != nullptr)
    {
        ptrCurrent = ptrCurrent->GetNeighbor("south");
        cout << "You move south " << endl << endl;
    }
    else if (direction == 'e' && ptrCurrent->GetNeighbor("east") != nullptr)
    {
        ptrCurrent = ptrCurrent->GetNeighbor("east");
        cout << "You move east " << endl << endl;
    }
    else if (direction == 'w' && ptrCurrent->GetNeighbor("west") != nullptr)
    {
        ptrCurrent = ptrCurrent->GetNeighbor("west");
        cout << "You move west " << endl << endl;
    }
}

void Game::Run()
{
    while( true )
    {
        // DISPLAY THE CURRENT LOCATION'S INFO HERE
        
        ptrCurrent->Display();
        
        if ( ptrCurrent == ptrEnd )
        {
            // End the game
            break;
        }
        
        char choice = GetChoice();
        
        if ( choice == 'q' )
        {
            break;
        }
        
        TryToMove( choice );
    }
    
    cout << endl << "You've reached your destination!" << endl;
    cout << "You win!" << endl;
}

char Game::GetChoice()
{
    cout << endl << "What do you want to do? (N/S/E/W/Q): ";
    char choice;
    cin >> choice;
    return tolower( choice );
}

void Game::SetupLocations()
{
    // Move your array init stuff from the file with main() to here.
    
    locations[0].SetInfo( "Forest", "The forest is cool and dark." );
    locations[1].SetInfo( "Eastern forest edge", "The forest expands to the west." );
    locations[2].SetInfo( "Lake", "The lake has several plants growing around it." );
    locations[3].SetInfo( "Southern forest edge", "The forest expands to the north." );
    locations[4].SetInfo( "Western desert edge", "The desert is barren, but nearby grass is growing." );
    locations[5].SetInfo( "East cave entrance", "The cave leads further in to the south." );
    locations[6].SetInfo( "Northern desert edge", "Dry grass speckle the landscape here." );
    locations[7].SetInfo( "South cave entrance", "The cave leads further in to the east." );
    locations[8].SetInfo( "Cave internal", "The cave is dark and damp." );
    
    locations[0].SetNeighbor( "east",   &locations[1] );
    locations[0].SetNeighbor( "south",  &locations[3] );
    
    locations[1].SetNeighbor( "west",   &locations[0] );
    locations[1].SetNeighbor( "south",  &locations[4] );
    locations[1].SetNeighbor( "east",   &locations[2] );
    
    locations[2].SetNeighbor( "west",   &locations[1] );
    locations[2].SetNeighbor( "south",  &locations[5] );
    
    locations[3].SetNeighbor( "east",   &locations[4] );
    locations[3].SetNeighbor( "south",  &locations[6] );
    locations[3].SetNeighbor( "north",  &locations[0] );
    
    locations[4].SetNeighbor( "west",   &locations[3] );
    locations[4].SetNeighbor( "south",  &locations[7] );
    locations[4].SetNeighbor( "north",  &locations[1] );
    locations[4].SetNeighbor( "east",   &locations[5] );
    
    locations[5].SetNeighbor( "west",   &locations[4] );
    locations[5].SetNeighbor( "south",  &locations[8] );
    locations[5].SetNeighbor( "north",  &locations[2] );
    
    locations[6].SetNeighbor( "east",   &locations[7] );
    locations[6].SetNeighbor( "north",  &locations[3] );
    
    locations[7].SetNeighbor( "west",   &locations[6] );
    locations[7].SetNeighbor( "north",  &locations[4] );
    locations[7].SetNeighbor( "east",   &locations[8] );
    
    locations[8].SetNeighbor( "west",   &locations[7] );
    locations[8].SetNeighbor( "north",  &locations[5] );
}
