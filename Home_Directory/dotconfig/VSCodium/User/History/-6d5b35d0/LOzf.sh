#!/bin/bash

# default monitor is external ()
MONITOR=eDP-1-1

# functions to switch from LVDS1 to VGA and vice versa
function ActivateDualMode {
    echo "Switching to Dual Mode"
    xrandr --output eDP-1-1 --mode 1920x1080 --refresh 144 --rotate normal --output DP-0 --mode 1920x1080 --refresh 144 --rotate normal --left-of eDP-1-1
    MONITOR=DP-0
}
function DeactivateDP {
    echo "Switching to laptop display (eDP-1-1)"
    xrandr --output DP-0 --off --output eDP-1-1 --auto
    MONITOR=eDP-1-1
}

# functions to check if VGA is connected and in use
function DPActive {
    [ $MONITOR = "DP-0" ]
}
function DPConnected {
    ! xrandr | grep "^DP-0" | grep disconnected
}

# actual script
while true
do
    if ! DPActive && DPConnected
    then
        ActivateDualMode
    fi

    if DPActive && ! DPConnected
    then
        DeactivateDP
    fi

    sleep 3s
done
