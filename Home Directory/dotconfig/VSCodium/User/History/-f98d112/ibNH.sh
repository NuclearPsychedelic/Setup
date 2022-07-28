#!/bin/bash

# default monitor is external (HDMI)
MONITOR=eDP-1

# functions to switch from LVDS1 to VGA and vice versa
function ActivateDualMode {
    echo "Switching to Dual Mode"
    xrandr --output eDP-1 --mode 1920x1080 --refresh 144 --rotate normal --output HDMI-1 --primary --mode 1920x1080 --refresh 144 --rotate normal --left-of eDP-1
    MONITOR=HDMI-1
    }
function DeactivateHDMI {
    echo "Switching to eDP-1"
    xrandr --output HDMI-1 --off --output eDP-1 --auto
    MONITOR=eDP-1
    }

# functions to check if VGA is connected and in use
function HDMIActive {
    [ $MONITOR = "HDMI-1" ]
}
function HDMIConnected {
    ! xrandr | grep "^HDMI-1" | grep disconnected
}

# actual script
while true
do
    if ! HDMIActive && HDMIConnected
    then
        ActivateDualMode
    fi

    if HDMIActive && ! HDMIConnected
    then
        DeactivateHDMI
    fi

    sleep 3s
done