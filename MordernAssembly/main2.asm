.code
SomeFunction proc
	mov ax, -1		; sets all the bits in register AX to 1 cause of negative 1
	mov al, 0		; sets all the bits of lower byte of register AX to 0
	push rbx		; push is used so that after all the manipulations are done pop is called to set register rbx to original value
				; register rbx is just 64 bit version of register bx
	mov rbx, 29
	mov rbh, 67

	pop rbx			; pops the value in register rbx
	ret
SomeFunction endp
end
