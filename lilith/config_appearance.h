/* --- Focus --- */
static const int sloppyfocus                       = 1;  /* 1 = focus follows the mouse pointer */
static const int bypass_surface_visibility         = 0;  /* 1 = idle inhibitors from any surface count, even invisible ones; 0 = only visible surfaces inhibit idle */

/* Background color of the empty canvas (0xRRGGBBAA). */
static const float rootcolor[]                     = COLOR(0x222222ff);

/* --- Wallpaper (leave wallpaper_path empty to disable it) --- */
static const char *wallpaper_path = "";  /* path to the image file; "" = no wallpaper */
static const int wallpaper_mode = 1;  /* 1 = wallpaper follows canvas zoom and pan, 0 = static image fitted to the monitor (see wallpaper_fit) */
static const float wallpaper_bgcolor[] = COLOR(0x222222ff);  /* fill color shown where the image does not cover the monitor */
static const int wallpaper_fit = 0;  /* mode 0 only: 0 = cover (fill and crop), 1 = contain (fit inside), other = stretch */
static const double wallpaper_zoom_strength = 1.0;  /* mode 1 only: exponent applied to the zoom factor; 1.0 = zooms with the windows, 0 = never zooms */
static const double wallpaper_pan_factor = 0.3;  /* mode 1 only: share of the canvas pan applied to the wallpaper; 1.0 = moves with windows, 0 = fixed, in between = parallax */
static const int wallpaper_edge = 1;  /* mode 1 only: 1 = never show the background color at the edges (image always covers the monitor) */

/* --- Window borders: each window has an inner and an outer border --- */

/* Border palette indexes, shared by inner and outer window borders. */
enum { BorderUnfocused, BorderFocused, BorderUrgent };
static const float bordercolor[][4] = {
	[BorderUnfocused] = COLOR(0x29191Eff), /* darker shade of focused burgundy */
	[BorderFocused]   = COLOR(0x40252Cff), /* muted plum-brown */
	[BorderUrgent]    = COLOR(0xC98276ff), /* muted terracotta */
};
static const float borderinnercolor[][4] = {
	[BorderUnfocused] = COLOR(0x00000000),
	[BorderFocused]   = COLOR(0x00000000),
	[BorderUrgent]    = COLOR(0x00000000),
};

/* Inner border width in pixels. */
static const unsigned int innerborderpx = 5;

/* Outer border width in pixels. */
static const unsigned int outerborderpx = 5;


/* Normal toplevels with unusably small initial sizes are raised to these
 * dimensions where the monitor allows it. App-requested aspect ratios remain. */
#define NEW_WINDOW_MIN_WIDTH  640
#define NEW_WINDOW_MIN_HEIGHT 400
#define AUTO_WINDOW_SIZE 1

/* Gap in pixels between windows when they snap to each other while being
 * moved or resized; negative values make neighbouring borders overlap. */
#define WINDOW_GAP 0

/* --- Spawn region: the rectangle drawn while dragging out an area on the
 *     empty canvas to choose where a new window opens --- */

/* Appearance: 0 = invisible, 1 = filled with SPAWNREGION_COLOR,
 * 2 = outlined using the spawnregion_* border settings below. */
#define SPAWNREGION_STYLE 1

/* Fill color for style 1 (0xRRGGBBAA). */
#define SPAWNREGION_COLOR COLOR(0x00557770)

/* Border settings used by style 2: inner border width in pixels. */
static const unsigned int spawnregion_innerborderpx  = 5;
static const unsigned int spawnregion_outerborderpx  = 5;  /* outer border width in pixels */
static const float spawnregion_inner_border_color[]  = COLOR(0x005577ff);  /* inner border color */
static const float spawnregion_outer_border_color[]  = COLOR(0x005577ff);  /* outer border color */

/* Background color (RGBA floats) behind fullscreen windows. */
static const float fullscreen_bg[]         = {0.0f, 0.0f, 0.0f, 1.0f};
