//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/			/*Update Interval*/	/*Update Signal*/
	{"  ", "~/.config/Scripts/dwmblocks/Void-Updates",		3600,		10},

	{"  ", "~/.config/Scripts/dwmblocks/weather",		1800,		10},

	{"  ", "~/.config/Scripts/dwmblocks/volume-bar",			1,		0},

	{"  ", "date '+%d %b %Y, %a %H:%M'",			30,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "   ";
static unsigned int delimLen = 5;
