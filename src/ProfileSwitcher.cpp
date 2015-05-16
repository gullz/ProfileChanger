/*
 ============================================================================
 Name		: ProfileSwitcher.cpp
 Author	  : Bhathiya
 Copyright   : Profile Switcher 0.1b - Symbian application to switch between profiles
 Copyright (C) 2015  Bhathiya Bandara

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.
 Description : Main application class
 ============================================================================
 */

// INCLUDE FILES
#include <eikstart.h>
#include "ProfileSwitcherApplication.h"

static CApaApplication* NewApplication()
{
	return new CProfileSwitcherApplication;
}

TInt E32Main()
{
	return EikStart::RunApplication(NewApplication);
}

