/* user and group to drop privileges to */
static const char *user  = "anon";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Suckless: Software that sucks less.";

/* text color */
static const char * text_color = "#212121";

/* text size (must be a valid size) */
static const char * font_name = "-bitstream-terminal-medium-r-normal--0-0-100-100-c-0-dec-dectech";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "colornbg",     STRING,  &colorname[INIT] },
		{ "colornfg",     STRING,  &colorname[INPUT] },
		{ "colorselbord", STRING,  &colorname[FAILED] },
		{ "user",         STRING,  &user },
		{ "group",        STRING,  &group },
		{ "message",      STRING,  &message },
		{ "colornbg",     STRING,  &text_color },
		{ "sfont",        STRING,  &font_name },
};

