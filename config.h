//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"sb-pacpackages",	   0,	      8},
	{"",	"sb-forecast",	       18000,	      5},
      /*{"",	"sb-nettraf",              1,         16},*/
      /*{"",    "sb-cpubars",              1,         16},*/
        {"",    "sb-memory",	          10,	      14},
	{"",	"sb-cpu",		  10,	      18},
	{"",	"sb-volume",	           0,         10},
	{"",	"sb-clock",	          60,          1},
	{"",	"sb-internet",	           5,          4},
	{"",	"sb-battery",	           5,          3},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
