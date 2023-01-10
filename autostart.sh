#!/bin/bash
lxpolkit &

compton --backend glx --paint-on-overlay --vsync opengl-swc &

feh --bg-fill /home/lain/Pictures/Wallpapers/nord_scenary.png &
