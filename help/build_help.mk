# ============================================================================
#  Name	 : build_help.mk
#  Part of  : ProfileSwitcher
# ============================================================================
#  Name	 : build_help.mk
#  Part of  : ProfileSwitcher
#
#  Description: This make file will build the application help file (.hlp)
# 
# ============================================================================

do_nothing :
	@rem do_nothing

# build the help from the MAKMAKE step so the header file generated
# will be found by cpp.exe when calculating the dependency information
# in the mmp makefiles.

MAKMAKE : ProfileSwitcher.hlp
ProfileSwitcher.hlp : ProfileSwitcher.xml ProfileSwitcher.cshlp Custom.xml
	cshlpcmp ProfileSwitcher.cshlp
ifeq (WINSCW,$(findstring WINSCW, $(PLATFORM)))
	md $(EPOCROOT)epoc32\$(PLATFORM)\c\resource\help
	copy ProfileSwitcher_0xE6DC77AC.hlp $(EPOCROOT)epoc32\$(PLATFORM)\c\resource\help
endif

BLD : do_nothing

CLEAN :
	del ProfileSwitcher.hlp
	del ProfileSwitcher.hlp.hrh

LIB : do_nothing

CLEANLIB : do_nothing

RESOURCE : do_nothing
		
FREEZE : do_nothing

SAVESPACE : do_nothing

RELEASABLES :
	@echo ProfileSwitcher_0xE6DC77AC.hlp

FINAL : do_nothing
