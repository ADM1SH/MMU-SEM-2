       ;       Adam, Syarin, idham, isabelle
       ;((A6H  + 19) / 8) x 4H, Address 1000, 1001, 1002

       LDR     R0, =0x1000 ; Store base address
       MOV     R1, #0xA6 ; R1 = A6H = 166
       ADD     R1, R1, #19 ; R1 = R1 + 19 = 185
       STRB    R1, [R0], #1 ; Store at 0x1000, R0 = 0x1001

       LSR     R1, R1, #3 ; R1 = R1 / 8 = 23
       STRB    R1, [R0], #1 ; Store at 0x1001, R0 = 0x1002

       LSL     R1, R1, #2 ; R1 = R1 × 4 = 92
       STRB    R1, [R0] ; Store at 0x1002