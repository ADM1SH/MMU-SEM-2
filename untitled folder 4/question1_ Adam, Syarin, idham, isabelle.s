            ;       Adam, Syarin, idham, isabelle
            ;       Question1(a): Store data in 8-bit format at address 0x5000
            MOV     R0, #0x5000 ; Base address for storage

            MOV     R1, #2
            STRB    R1, [R0], #1 ; Store 2

            MOV     R1, #14
            STRB    R1, [R0], #1 ; Store E (14 in decimal)

            MOV     R1, #8
            STRB    R1, [R0], #1 ; Store 8

            MOV     R1, #7
            STRB    R1, [R0], #1 ; Store 7

            MOV     R1, #15
            STRB    R1, [R0], #1 ; Store F (15 in decimal)

            MOV     R1, #4
            STRB    R1, [R0], #1 ; Store 4

            ;       Question1(b) - Find sum, max, min from 6 values at 0x5000
            ;       Store to:
            ;       Sum → 0x6000
            ;       Max → 0x6004
            ;       Min → 0x6008

            MOV     R0, #0x5000 ; Start address of data
            MOV     R4, #0 ; R4 = sum

            LDRB    R1, [R0], #1 ; First value
            MOV     R2, R1 ; R2 = max
            MOV     R3, R1 ; R3 = min
            ADD     R4, R4, R1 ; Add to sum

            ;       Value 2
            LDRB    R1, [R0], #1
            ADD     R4, R4, R1
            CMP     R1, R2
            MOVGT   R2, R1 ; If R1 > max → max = R1
            CMP     R1, R3
            MOVLT   R3, R1 ; If R1 < min → min = R1

            ;       Value 3
            LDRB    R1, [R0], #1
            ADD     R4, R4, R1
            CMP     R1, R2
            MOVGT   R2, R1
            CMP     R1, R3
            MOVLT   R3, R1

            ;       Value 4
            LDRB    R1, [R0], #1
            ADD     R4, R4, R1
            CMP     R1, R2
            MOVGT   R2, R1
            CMP     R1, R3
            MOVLT   R3, R1

            ;       Value 5
            LDRB    R1, [R0], #1
            ADD     R4, R4, R1
            CMP     R1, R2
            MOVGT   R2, R1
            CMP     R1, R3
            MOVLT   R3, R1

            ;       Value 6
            LDRB    R1, [R0], #1
            ADD     R4, R4, R1
            CMP     R1, R2
            MOVGT   R2, R1
            CMP     R1, R3
            MOVLT   R3, R1

            ;       Store sum to 0x6000
            MOV     R0, #0x6000
            STR     R4, [R0]

            ;       Store max to 0x6004
            LDR     R0, =0x6004
            STR     R2, [R0]

            ;       Store min to 0x6008
            LDR     R0, =0x6008
            STR     R3, [R0]


            ;       Question1(c) - search for user-input value within data from 0x5000

            MOV     R1, #0x5000 ; Base address of data (from part a)
            MOV     R2, #0 ; Repetition counter (number of comparisons)
            MOV     R3, #6 ; Total elements in array

search_loop 
            CMP     R2, R3 ; Check if all elements processed
            BGE     not_found ; Jump if no match found

            LDRB    R4, [R1], #1 ; Load byte from memory (post-increment address)
            ADD     R2, R2, #1 ; Increment repetition counter
            CMP     R4, R0 ; Compare with user input (assumed in R0)
            BEQ     found ; Jump if match found
            B       search_loop ; Continue searching

found       
            ;       i. Match found case (letak 0xA dalam location 0x700A)
            MOV     R5, #0x0A ; Prepare 0xA for found flag
            LDR     R6, =0x700A ; Load address for found flag
            STRB    R5, [R6] ; Store 0xA at 0x700A
            B       store_count ; Jump to store count

not_found   
            ;       ii. No match found case (letak 0xB dalam location 0x700B)
            MOV     R5, #0x0B ; Prepare 0xB for not-found flag
            LDR     R6, =0x700B ; Load address for not-found flag
            STRB    R5, [R6] ; Store 0xB at 0x700B

store_count 
            ;       iii. Store repetition count on 0x700C
            LDR     R6, =0x700C ; Load address for count storage
            STR     R2, [R6] ; Store count (32-bit word)
