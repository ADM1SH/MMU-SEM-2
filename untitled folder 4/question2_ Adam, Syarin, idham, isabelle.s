            ;       Adam, Syarin, idham, isabelle
GroupN_Q2 
          MOV     R0, #5        ; Load value to check (user input)
          ANDS    R1, R0, #1    ; Check LSB to determine even or odd
          BEQ     EVEN          ; If zero, it's even
          BNE     ODD           ; Otherwise, it's odd

EVEN      
          ; R0 is even
          BEQ     EXIT

ODD       
          ; R0 is odd
          BNE     EXIT

EXIT      
          MOV     R0, #0
          MOV     R1, #0        ; Clean exit