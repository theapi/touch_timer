EESchema Schematic File Version 2
LIBS:touch_timer
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:timer-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L MTCH6102_SSOP U2
U 1 1 570281AD
P 5200 2400
F 0 "U2" H 5200 2800 60  0000 C CNN
F 1 "MTCH6102_SSOP" H 5200 2650 60  0000 C CNN
F 2 "Housings_SSOP:SSOP-28_5.3x10.2mm_Pitch0.65mm" H 5200 2400 60  0001 C CNN
F 3 "" H 5200 2400 60  0000 C CNN
	1    5200 2400
	1    0    0    -1  
$EndComp
$Comp
L ATMEGA328P-A IC1
U 1 1 5703AB3B
P 8300 3250
F 0 "IC1" H 7550 4500 50  0000 L BNN
F 1 "ATMEGA328P-A" H 8700 1850 50  0000 L BNN
F 2 "Housings_QFP:TQFP-32_7x7mm_Pitch0.8mm" H 8300 3250 50  0000 C CIN
F 3 "" H 8300 3250 50  0000 C CNN
	1    8300 3250
	-1   0    0    -1  
$EndComp
Text Label 6950 3400 0    60   ~ 0
SDA
Text Label 6950 3500 0    60   ~ 0
SCL
Text Label 6950 3950 0    60   ~ 0
INT
Text Label 6100 2600 0    60   ~ 0
SDA
Text Label 6100 2700 0    60   ~ 0
SCL
Text Label 6100 2800 0    60   ~ 0
INT
Wire Wire Line
	7300 3400 6950 3400
Wire Wire Line
	7300 3500 6950 3500
Wire Wire Line
	7300 3950 6950 3950
Wire Wire Line
	5750 2600 6100 2600
Wire Wire Line
	5750 2700 6100 2700
Wire Wire Line
	5750 2800 6100 2800
$Comp
L TOUCH_PAD_15 U1
U 1 1 5703B32D
P 3350 2500
F 0 "U1" H 3350 750 60  0000 C CNN
F 1 "TOUCH_PAD_15" H 3350 2600 60  0000 C CNN
F 2 "touch_timer:touch_pad_rect" H 3350 2500 60  0001 C CNN
F 3 "" H 3350 2500 60  0000 C CNN
	1    3350 2500
	1    0    0    -1  
$EndComp
Wire Wire Line
	3900 2700 4650 2700
Wire Wire Line
	3900 2800 4650 2800
Wire Wire Line
	3900 2900 4650 2900
Wire Wire Line
	3900 3000 4650 3000
Wire Wire Line
	3900 3100 4650 3100
Wire Wire Line
	3900 3200 4650 3200
Wire Wire Line
	3900 3300 4650 3300
Wire Wire Line
	3900 3400 4650 3400
Wire Wire Line
	3900 3500 4650 3500
Wire Wire Line
	3900 3600 4650 3600
Wire Wire Line
	3900 3700 4650 3700
Wire Wire Line
	3900 3800 4650 3800
Wire Wire Line
	3900 3900 4650 3900
Wire Wire Line
	3900 4000 4650 4000
Wire Wire Line
	3900 4100 4650 4100
Text Label 4400 2700 0    60   ~ 0
RX0
Text Label 4400 2800 0    60   ~ 0
RX1
Text Label 4400 2900 0    60   ~ 0
RX2
Text Label 4400 3000 0    60   ~ 0
RX3
Text Label 4400 3100 0    60   ~ 0
RX4
Text Label 4400 3200 0    60   ~ 0
RX5
Text Label 4400 3300 0    60   ~ 0
RX6
Text Label 4400 3400 0    60   ~ 0
RX7
Text Label 4400 3500 0    60   ~ 0
RX8
Text Label 4400 3600 0    60   ~ 0
RX9
Text Label 4400 3700 0    60   ~ 0
RX10
Text Label 4400 3800 0    60   ~ 0
RX11
Text Label 4400 3900 0    60   ~ 0
RX12
Text Label 4400 4000 0    60   ~ 0
RX13
Text Label 4400 4100 0    60   ~ 0
RX14
$EndSCHEMATC
