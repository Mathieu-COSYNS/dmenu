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
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeSelHighlight] = { "#ffc978", "#005577" },
	[SchemeNormHighlight] = { "#ffc978", "#222222" },
	[SchemeOut] = { "#000000", "#00ffff" },
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
static unsigned int border_width = 2;

 /* if 0, dmenu doesn't use fuzzy matching. Option -F can set fuzzy to 0 */
static int fuzzy = 1;

/* -r option; if 1, disables shift-return and ctrl-return */
static int restrict_return = 0;