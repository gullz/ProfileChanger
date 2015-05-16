/*
 ============================================================================
 Name		: ProfileSwitcherAppUi.h
 Author	  : Bhathiya
 Copyright   : Profile Switcher 0.1b - Symbian application to switch between profiles
 Copyright (C) 2015  Bhathiya Bandara

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.
 Description : Declares UI class for application.
 ============================================================================
 */

#ifndef __PROFILESWITCHERAPPUI_h__
#define __PROFILESWITCHERAPPUI_h__

// INCLUDES
#include <aknappui.h>

// FORWARD DECLARATIONS
class CProfileSwitcherAppView;

// CLASS DECLARATION
/**
 * CProfileSwitcherAppUi application UI class.
 * Interacts with the user through the UI and request message processing
 * from the handler class
 */
class CProfileSwitcherAppUi : public CAknAppUi
	{
public:
	// Constructors and destructor

	/**
	 * ConstructL.
	 * 2nd phase constructor.
	 */
	void ConstructL();

	/**
	 * CProfileSwitcherAppUi.
	 * C++ default constructor. This needs to be public due to
	 * the way the framework constructs the AppUi
	 */
	CProfileSwitcherAppUi();

	/**
	 * ~CProfileSwitcherAppUi.
	 * Virtual Destructor.
	 */
	virtual ~CProfileSwitcherAppUi();

private:
	// Functions from base classes

	/**
	 * From CEikAppUi, HandleCommandL.
	 * Takes care of command handling.
	 * @param aCommand Command to be handled.
	 */
	void HandleCommandL(TInt aCommand);

	/**
	 *  HandleStatusPaneSizeChange.
	 *  Called by the framework when the application status pane
	 *  size is changed.
	 */
	void HandleStatusPaneSizeChange();

	/**
	 *  From CCoeAppUi, HelpContextL.
	 *  Provides help context for the application.
	 *  size is changed.
	 */

private:
	// Data

	/**
	 * The application view
	 * Owned by CProfileSwitcherAppUi
	 */
	CProfileSwitcherAppView* iAppView;

	};

#endif // __PROFILESWITCHERAPPUI_h__
// End of File
