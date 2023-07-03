/**
 * File: 101-hello_holberton.asm
 * Auth: Victorinox2
 */

     global    main
          extern    printf
main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
	  ret
format: db `Hello, Holberton\n`,0
