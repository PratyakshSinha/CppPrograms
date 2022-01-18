.code
SomeFunction proc
	mov r11, -1		; R11 is just the 64 bit register
	
	mov r11b, 5		; R11B is 8 bit part of R11
	mov r11w, 17	; R11W is 16 bit part of R11

	mov r11d, 1		; R11D is the 32 bit part of R11 but when we manipulate the value of R11D starting 32 bits of R11 are set to 0 automatically

	ret
SomeFunction endp
end