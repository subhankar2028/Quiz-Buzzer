This is a live project for a quiz competition.
The objective is to allow only one competitor out of 6 competitors.
The answering person will be the only one person who will press the button at the very first time.

The project works on a manner that,

Admin has a muster button which is used to reset the controller.
Admin starts each session by pressing the reset button.
When a session starts, Controller checks pulse input to its GPIO pin.
As soon as a competitor press a button, controller sets that particular port to on state and off to remaining all.
Such a way it detects any one among six competitor.

Requirement :
	Atmega16 IC
	Push buttons
	PCB board
	Buzzer
	LED
	
Language	: C
IDE		: Atmal studio
