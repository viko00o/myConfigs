//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon - Command - Update - Interval - Update - Signal*/
	{ "󰖩 ", "iwctl station wlan0 show | awk '/AverageRSSI/ {print $2}' | xargs -I {} echo '{} dBm'",	  15, 0 },
	{ "󰁹 ", "echo $(cat /sys/class/power_supply/BAT0/capacity)%", 		    			          60, 0 },
	{ "",   "date '+%b %d %a %I:%M %p'",					    			          5,  0 },
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
