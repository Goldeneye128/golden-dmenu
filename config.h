/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"MesloLGS Nerd Font-12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#F0C674", "#000000" },
	[SchemeSel] = { "#000000", "#F0C674" },
	[SchemeSelHighlight] = { "#A54242", "#F0C674" },
  [SchemeNormHighlight] = { "#A54242", "#000000" },
	[SchemeOut] = { "#000000", "#767368" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* -h option; minimum height of a menu line */
static unsigned int lineheight = 34;
static unsigned int min_lineheight = 8;
