#ifndef CONFIG_H
#define CONFIG_H

#define MOD Mod1Mask

const char* menu[]    = {"rofi", "-show", "drun", "-show-icons",	 0};
const char* term[]    = {"kitty",             0};
const char* web[]     = {"firefox",	0};
const char* file[]     = {"thunar",	0};
const char* mail[]     = {"thunderbird",	0};
const char* steam[] 	= {"steam",	0};
const char* briup[]   = {"bri", "10", "+", 0};
const char* bridown[] = {"bri", "10", "-", 0};
const char* voldown[] = {"amixer", "sset", "Master", "5%-",         0};
const char* volup[]   = {"amixer", "sset", "Master", "5%+",         0};
const char* volmute[] = {"amixer", "sset", "Master", "toggle",      0};
const char* cmus[] = {"cmus-remote", "-u",	0};
static struct key keys[] = {
    {MOD,      XK_o,   win_kill,   {0}},
    {MOD,      XK_c,   win_center, {0}},
    {MOD,      XK_f,   win_fs,     {0}},

    {MOD,           XK_Tab, win_next,   {0}},
    {MOD|ShiftMask, XK_Tab, win_prev,   {0}},

    {MOD, XK_r,      run, {.com = menu}},
       {MOD, XK_t, run, {.com = term}},
{MOD, XK_b, run, {.com = web}},
{MOD, XK_p, run, {.com = file}},
{MOD, XK_s, run, {.com = steam}},
 {MOD, XK_m, run, {.com = mail}},


    {0,   XF86XK_AudioLowerVolume,  run, {.com = voldown}},
    {0,   XF86XK_AudioRaiseVolume,  run, {.com = volup}},
    {0,   XF86XK_AudioMute,         run, {.com = volmute}},
    {0,   XF86XK_MonBrightnessUp,   run, {.com = briup}},
    {0,   XF86XK_MonBrightnessDown, run, {.com = bridown}},

    {MOD,           XK_1, ws_go,     {.i = 1}},
    {MOD|ShiftMask, XK_1, win_to_ws, {.i = 1}},
    {MOD,           XK_2, ws_go,     {.i = 2}},
    {MOD|ShiftMask, XK_2, win_to_ws, {.i = 2}},
    {MOD,           XK_3, ws_go,     {.i = 3}},
    {MOD|ShiftMask, XK_3, win_to_ws, {.i = 3}},
    {MOD,           XK_4, ws_go,     {.i = 4}},
    {MOD|ShiftMask, XK_4, win_to_ws, {.i = 4}},
    {MOD,           XK_5, ws_go,     {.i = 5}},
    {MOD|ShiftMask, XK_5, win_to_ws, {.i = 5}},
    {MOD,           XK_6, ws_go,     {.i = 6}},
    {MOD|ShiftMask, XK_6, win_to_ws, {.i = 6}},
    {MOD,           XK_7, ws_go,     {.i = 7}},
    {MOD,           XK_9, ws_go,     {.i = 9}},
    {MOD,           XK_8, ws_go,     {.i = 8}},
    {MOD|ShiftMask, XK_8, win_to_ws, {.i = 8}},
    {MOD|ShiftMask, XK_7, win_to_ws, {.i = 7}},
    {MOD|ShiftMask, XK_9, win_to_ws, {.i = 9}},
{MOD,           XK_0, ws_go,     {.i = 0}},
    {MOD|ShiftMask, XK_0, win_to_ws, {.i = 0}},

}

#endif
