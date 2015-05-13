/*
 ============================================================================
 Name		: ProfileSwitcherApplication.h
 Author	  : Bhathiya
 Copyright   : Profile Switcher 0.1b - Symbian application to switch between profiles
 Copyright (C) 2015  Bhathiya Bandara

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.
 Description : Declares main application class.
 ============================================================================
 */

#ifndef __PROFILESWITCHERAPPLICATION_H__
#define __PROFILESWITCHERAPPLICATION_H__

// INCLUDES
#include <aknapp.h>
#include "ProfileSwitcher.hrh"

// UID for the application;
// this should correspond to the uid defined in the mmp file
const TUid KUidProfileSwitcherApp =
	{
	_UID3
	};

// CLASS DECLARATION

/**
 * CProfileSwitcherApplication application class.
 * Provides factory to create concrete document object.
 * An instance of CProfileSwitcherApplication is the application part of the
 * AVKON application framework for the ProfileSwitcher example application.
 */
class CProfileSwitcherApplication : public CAknApplication
	{
public:
	// Functions from base classes

	/**
	 * From CApaApplication, AppDllUid.
	 * @return Application's UID (KUidProfileSwitcherApp).
	 */
	TUid AppDllUid() const;

protected:
	// Functions from base classes

	/**
	 * From CApaApplication, CreateDocumentL.
	 * Creates CProfileSwitcherDocument document object. The returned
	 * pointer in not owned by the CProfileSwitcherApplication object.
	 * @return A pointer to the created document object.
	 */
	CApaDocument* CreateDocumentL();
	};

#endif // __PROFILESWITCHERAPPLICATION_H__
// End of File
