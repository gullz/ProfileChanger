/*
 ============================================================================
 Name		: ProfileSwitcher.pan
 Author	  : Bhathiya
 Copyright   : Profile Switcher 0.1b - Symbian application to switch between profiles
 Copyright (C) 2015  Bhathiya Bandara

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.
 Description : This file contains panic codes.
 ============================================================================
 */

#ifndef __PROFILESWITCHER_PAN__
#define __PROFILESWITCHER_PAN__

/** ProfileSwitcher application panic codes */
enum TProfileSwitcherPanics
	{
	EProfileSwitcherUi = 1
	// add further panics here
	};

inline void Panic(TProfileSwitcherPanics aReason)
	{
	_LIT(applicationName, "ProfileSwitcher");
	User::Panic(applicationName, aReason);
	}

#endif // __PROFILESWITCHER_PAN__
