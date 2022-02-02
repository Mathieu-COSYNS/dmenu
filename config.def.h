/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

typedef enum {
	TOP,
	CENTER,
	BOTTOM
} Position;

static Position position = CENTER;          /* -c option; centers dmenu on screen */
static int centered_height = 60;            /* if > 0: -c option will use centered_height as height value instead off centering on height too*/
static int min_width = 700;                 /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=12",
	"FontAwesome:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *symbol_left = "";
static const char *symbol_right = "";
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#dadada", "#383838" },
	[SchemeSel] = { "#fff", "#4c4c4c" },
	[SchemeNormOut] = { "#fff", "#3f7368" },
	[SchemeSelOut] = { "#fff", "#579c8e" },
	[SchemeNormHighlight] = { "#ffce50", "#383838" },
	[SchemeSelHighlight] = { "#ffce50", "#4c4c4c" },
	[SchemeNormOutHighlight] = { "#ffd06f", "#3f7368" },
	[SchemeSelOutHighlight] = { "#ffd06f", "#579c8e" },
	[SchemeBorder] = { "#fff", "#579c8e" },
	[SchemePrompt] = { "#fff", "#579c8e" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 20;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 22;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 1;

 /* if 0, dmenu doesn't use fuzzy matching. Option -F can set fuzzy to 0 */
static int fuzzy = 1;

/* -r option; if 1, disables shift-return and ctrl-return */
static int restrict_return = 0;

/* print index instead of text */
static int print_index = 0;