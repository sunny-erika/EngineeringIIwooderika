// Includes
//=========

#include "cMyGame.h"

#include <Engine/Asserts/Asserts.h>
#include <Engine/UserInput/UserInput.h>
#include <Engine/Logging/Logging.h>

// Inherited Implementation
//=========================

// Run
//----

//void eae6320::cExampleGame::UpdateBasedOnInput()
void eae6320::cMyGame::UpdateBasedOnInput()
{
	// Is the user pressing the ESC key?
	if ( UserInput::IsKeyPressed( UserInput::KeyCodes::Escape ) )
	{
		Logging::OutputMessage("MyGame: The user pressed the ESC key");
		// Exit the application
		const auto result = Exit( EXIT_SUCCESS );
		EAE6320_ASSERT( result );
	}
}

// Initialize / Clean Up
//----------------------

eae6320::cResult eae6320::cMyGame::Initialize()
{
	Logging::OutputMessage("MyGame: starting application initialization");
	auto result = Results::Success;

	if (result)
	{
		Logging::OutputMessage("MyGame: The application was succesfully initialized");
	}
	else 
	{
		Logging::OutputError("MyGame: Application initialization failed!");
	}

	//return Results::Success;
	return result;
}

eae6320::cResult eae6320::cMyGame::CleanUp()
{
	auto result = Results::Success;
	if (result)
	{
		Logging::OutputMessage("MyGame: The application was succesfully cleaned up");
	}
	else
	{
		Logging::OutputError("MyGame: Application CleanUp failed!");
	}
	//return Results::Success;
	return result;
}
