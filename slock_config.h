/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#bd93f9",     /* after initialization */
	[INPUT] =  "#50fa7b",     /* during input */
	[FAILED] = "#ff5555",     /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
