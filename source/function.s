  AREA    FUNC, CODE, READONLY
strcopy PROC 
    EXPORT strcopy
	
	 LDRB R2, [R1],#1  ; Load byte and update address.
    STRB R2, [R0],#1  ; Store byte and update address.
    CMP  R2, #0       ; Check for null terminator.
    BNE  strcopy      ; Keep going if not.
	
;    LDR R6, 
    BX   lr           ; Return.
	
	ENDP
	END
   
   
   