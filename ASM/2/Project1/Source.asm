.586P
.MODEL FLAT, STDCALL
includelib kernel32.lib

ExitProcess PROTO : DWORD
MessageBoxA PROTO : DWORD, : DWORD, : DWORD, : DWORD

.STACK 4096

.DATA 
STR1 DB "Сумма", 0
STR2 DB "Результат сложения = 0", 0
SUM DB 3

.CODE
main PROC 
START :
ADD SUM, 2
MOV bl, SUM
ADD [STR2+21], bl
PUSH 0
PUSH OFFSET STR1
PUSH OFFSET STR2
PUSH 0
CALL MessageBoxA 

push - 1
call ExitProcess 
main ENDP

end main