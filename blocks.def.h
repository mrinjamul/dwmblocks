//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
//{" 🐧 ", "/opt/dwmblocks-distrotube-git/scripts/kernel",		    360,		        2},

//	{" 🔺 ", "/opt/dwmblocks-distrotube-git/scripts/upt",		        60,		            2},

//	{" 📦 ", "~/.dwm/scripts/pacupdate",		        360,		        9},

//	{" 💻 ", "~/.dwm/scripts/memory",	                6,		            1},
	{" ", "~/.dwm/scripts/nettraffic",	            1,		            1},
	{"", "~/.dwm/scripts/cpu",                      5,                  3},
	{"", "~/.dwm/defaultscripts/cpu_temp.sh",       5,                  3},


//	{" 🔊 ", "~/.dwm/scripts/volume",			        10,		            15},

    {"", "~/.dwm/defaultscripts/battery.sh",        10,                 2},

	{"", "~/.dwm/defaultscripts/calendar.sh",		1,		            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 1;
