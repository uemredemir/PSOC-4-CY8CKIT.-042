# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\uemre\Documents\PSoC Creator\8x8 dotmatrix example\Design01.cydsn\Design01.cyprj
# Date: Mon, 08 Apr 2024 14:54:56 GMT
#set_units -time ns
create_clock -name {CyRouted1} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/dsi_in_0}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFClk} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFClk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySysClk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/sysclk}]]


# Component constraints for C:\Users\uemre\Documents\PSoC Creator\8x8 dotmatrix example\Design01.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\uemre\Documents\PSoC Creator\8x8 dotmatrix example\Design01.cydsn\Design01.cyprj
# Date: Mon, 08 Apr 2024 14:54:54 GMT