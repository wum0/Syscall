	PUBLIC AlloeVirtMem
	PUBLIC WriVirMem
	PUBLIC ProtVirtMem
	PUBLIC CreThreE
	PUBLIC WaiSinObj
	
	_DATA SEGMENT
	_DATA ENDS
	
	_TEXT SEGMENT
	
	AlloeVirtMem PROC
		mov r10, rcx
		mov eax, 18h
		syscall
		ret
	AlloeVirtMem ENDP
	
	WriVirMem PROC
		mov r10, rcx
		mov eax, 3Ah
		syscall
		ret
	WriVirMem ENDP
	
	ProtVirtMem PROC
		mov r10, rcx
		mov eax, 50h
		syscall
		ret
	ProtVirtMem ENDP
	
	CreThreE PROC
		mov r10, rcx
		mov eax, 0C1h
		syscall
		ret
	CreThreE ENDP
	
	
	WaiSinObj PROC
		mov r10, rcx
		mov eax, 4h
		syscall
		ret
	WaiSinObj ENDP
	
	
	_TEXT ENDS
	END
