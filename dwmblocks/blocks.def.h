//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/			/*Update Interval*/	/*Update Signal*/
	{" 📥 ", "~/.config/Scripts/blocks/Void-Updates",	       3600,		10},

	{" 🌤️ ", "~/.config/Scripts/blocks/weather",			3600,		 0},

	{" 🎧 ", "~/.config/Scripts/blocks/volume-bar",	  	       0,		5},

	{" 🗳️ ", "~/.config/Scripts/blocks/ram-bar",			5,  	  	 0},
	
	{" 💾 ", "~/.config/Scripts/blocks/disk-bar",		       3600,		0},

	{" 🖥️ ", "~/.config/Scripts/blocks/cpu-bar",			5,   	         0},

	{" 🕑 ", "~/.config/Scripts/blocks/clock-bar",		       30,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
