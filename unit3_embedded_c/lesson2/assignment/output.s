
app.o:     file format elf32-littlearm


Disassembly of section .text:

00000000 <main>:
   0:	e92d4800 	push	{fp, lr}
   4:	e28db004 	add	fp, sp, #4
   8:	e59f000c 	ldr	r0, [pc, #12]	; 1c <main+0x1c>
   c:	ebfffffe 	bl	0 <UART0_SEND>
  10:	e3a03000 	mov	r3, #0
  14:	e1a00003 	mov	r0, r3
  18:	e8bd8800 	pop	{fp, pc}
  1c:	00000000 	.word	0x00000000

uart.o:     file format elf32-littlearm


Disassembly of section .text:

00000000 <UART0_SEND>:
   0:	e52db004 	push	{fp}		; (str fp, [sp, #-4]!)
   4:	e28db000 	add	fp, sp, #0
   8:	e24dd00c 	sub	sp, sp, #12
   c:	e50b0008 	str	r0, [fp, #-8]
  10:	ea000007 	b	34 <UART0_SEND+0x34>
  14:	e59f3030 	ldr	r3, [pc, #48]	; 4c <UART0_SEND+0x4c>
  18:	e51b2008 	ldr	r2, [fp, #-8]
  1c:	e5d22000 	ldrb	r2, [r2]
  20:	e20220ff 	and	r2, r2, #255	; 0xff
  24:	e5c32000 	strb	r2, [r3]
  28:	e51b3008 	ldr	r3, [fp, #-8]
  2c:	e2833001 	add	r3, r3, #1
  30:	e50b3008 	str	r3, [fp, #-8]
  34:	e51b3008 	ldr	r3, [fp, #-8]
  38:	e3530000 	cmp	r3, #0
  3c:	1afffff4 	bne	14 <UART0_SEND+0x14>
  40:	e28bd000 	add	sp, fp, #0
  44:	e8bd0800 	ldmfd	sp!, {fp}
  48:	e12fff1e 	bx	lr
  4c:	101f1000 	.word	0x101f1000
