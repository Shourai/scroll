/*
 * Define ESC sequences to use for scroll events.
 * Use "cat -v" to figure out favorite key combination.
 *
 * lines is the number of lines scrolled up or down.
 * If lines is negative, it's the fraction of the terminal size.
 */

struct rule rules[] = {
	/* sequence     event        lines */
	{"\033[5;2~",   SCROLL_UP,   10},       /* [Shift] + [PageUP] */
	{"\033[6;2~",   SCROLL_DOWN, 10},       /* [Shift] + [PageDown] */
	/* mouse binding shadows ^E and ^Y, so it's disabled by default */
	{"\031",        SCROLL_UP,    5},       /* mouse wheel up */
	{"\005",        SCROLL_DOWN,  5},       /* mouse wheel Down */
};
