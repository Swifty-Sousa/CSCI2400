
farm.o:     file format elf64-x86-64


Disassembly of section .text:

0000000000000000 <start_farm>:
   0:	55                   	push   %rbp
   1:	48 89 e5             	mov    %rsp,%rbp
   4:	b8 01 00 00 00       	mov    $0x1,%eax
   9:	5d                   	pop    %rbp
   a:	c3                   	retq   

000000000000000b <setval_465>:
   b:	55                   	push   %rbp
   c:	48 89 e5             	mov    %rsp,%rbp
   f:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  13:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  17:	c7 00 4a 89 c7 c3    	movl   $0xc3c7894a,(%rax)
  1d:	90                   	nop
  1e:	5d                   	pop    %rbp
  1f:	c3                   	retq   

0000000000000020 <setval_336>:
  20:	55                   	push   %rbp
  21:	48 89 e5             	mov    %rsp,%rbp
  24:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  28:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  2c:	c7 00 a1 48 58 c2    	movl   $0xc25848a1,(%rax)
  32:	90                   	nop
  33:	5d                   	pop    %rbp
  34:	c3                   	retq   

0000000000000035 <setval_499>:
  35:	55                   	push   %rbp
  36:	48 89 e5             	mov    %rsp,%rbp
  39:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  3d:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  41:	c7 00 d7 e3 58 c1    	movl   $0xc158e3d7,(%rax)
  47:	90                   	nop
  48:	5d                   	pop    %rbp
  49:	c3                   	retq   

000000000000004a <getval_188>:
  4a:	55                   	push   %rbp
  4b:	48 89 e5             	mov    %rsp,%rbp
  4e:	b8 3c cd 58 c3       	mov    $0xc358cd3c,%eax
  53:	5d                   	pop    %rbp
  54:	c3                   	retq   

0000000000000055 <addval_423>:
  55:	55                   	push   %rbp
  56:	48 89 e5             	mov    %rsp,%rbp
  59:	89 7d fc             	mov    %edi,-0x4(%rbp)
  5c:	8b 45 fc             	mov    -0x4(%rbp),%eax
  5f:	2d 59 fb a7 3c       	sub    $0x3ca7fb59,%eax
  64:	5d                   	pop    %rbp
  65:	c3                   	retq   

0000000000000066 <setval_279>:
  66:	55                   	push   %rbp
  67:	48 89 e5             	mov    %rsp,%rbp
  6a:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  6e:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  72:	c7 00 48 89 c7 c3    	movl   $0xc3c78948,(%rax)
  78:	90                   	nop
  79:	5d                   	pop    %rbp
  7a:	c3                   	retq   

000000000000007b <getval_166>:
  7b:	55                   	push   %rbp
  7c:	48 89 e5             	mov    %rsp,%rbp
  7f:	b8 4a 89 c7 c3       	mov    $0xc3c7894a,%eax
  84:	5d                   	pop    %rbp
  85:	c3                   	retq   

0000000000000086 <addval_346>:
  86:	55                   	push   %rbp
  87:	48 89 e5             	mov    %rsp,%rbp
  8a:	89 7d fc             	mov    %edi,-0x4(%rbp)
  8d:	8b 45 fc             	mov    -0x4(%rbp),%eax
  90:	2d b8 76 38 3c       	sub    $0x3c3876b8,%eax
  95:	5d                   	pop    %rbp
  96:	c3                   	retq   

0000000000000097 <mid_farm>:
  97:	55                   	push   %rbp
  98:	48 89 e5             	mov    %rsp,%rbp
  9b:	b8 01 00 00 00       	mov    $0x1,%eax
  a0:	5d                   	pop    %rbp
  a1:	c3                   	retq   

00000000000000a2 <add_xy>:
  a2:	55                   	push   %rbp
  a3:	48 89 e5             	mov    %rsp,%rbp
  a6:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  aa:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  ae:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  b2:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  b6:	48 01 d0             	add    %rdx,%rax
  b9:	5d                   	pop    %rbp
  ba:	c3                   	retq   

00000000000000bb <getval_252>:
  bb:	55                   	push   %rbp
  bc:	48 89 e5             	mov    %rsp,%rbp
  bf:	b8 88 c1 08 d2       	mov    $0xd208c188,%eax
  c4:	5d                   	pop    %rbp
  c5:	c3                   	retq   

00000000000000c6 <getval_304>:
  c6:	55                   	push   %rbp
  c7:	48 89 e5             	mov    %rsp,%rbp
  ca:	b8 99 c1 08 c9       	mov    $0xc908c199,%eax
  cf:	5d                   	pop    %rbp
  d0:	c3                   	retq   

00000000000000d1 <getval_170>:
  d1:	55                   	push   %rbp
  d2:	48 89 e5             	mov    %rsp,%rbp
  d5:	b8 63 9a 8d ca       	mov    $0xca8d9a63,%eax
  da:	5d                   	pop    %rbp
  db:	c3                   	retq   

00000000000000dc <setval_464>:
  dc:	55                   	push   %rbp
  dd:	48 89 e5             	mov    %rsp,%rbp
  e0:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  e4:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  e8:	c7 00 89 d6 08 db    	movl   $0xdb08d689,(%rax)
  ee:	90                   	nop
  ef:	5d                   	pop    %rbp
  f0:	c3                   	retq   

00000000000000f1 <getval_409>:
  f1:	55                   	push   %rbp
  f2:	48 89 e5             	mov    %rsp,%rbp
  f5:	b8 c9 d6 38 db       	mov    $0xdb38d6c9,%eax
  fa:	5d                   	pop    %rbp
  fb:	c3                   	retq   

00000000000000fc <getval_125>:
  fc:	55                   	push   %rbp
  fd:	48 89 e5             	mov    %rsp,%rbp
 100:	b8 89 c1 c4 db       	mov    $0xdbc4c189,%eax
 105:	5d                   	pop    %rbp
 106:	c3                   	retq   

0000000000000107 <getval_353>:
 107:	55                   	push   %rbp
 108:	48 89 e5             	mov    %rsp,%rbp
 10b:	b8 48 89 e0 90       	mov    $0x90e08948,%eax
 110:	5d                   	pop    %rbp
 111:	c3                   	retq   

0000000000000112 <getval_189>:
 112:	55                   	push   %rbp
 113:	48 89 e5             	mov    %rsp,%rbp
 116:	b8 89 c1 38 c9       	mov    $0xc938c189,%eax
 11b:	5d                   	pop    %rbp
 11c:	c3                   	retq   

000000000000011d <addval_276>:
 11d:	55                   	push   %rbp
 11e:	48 89 e5             	mov    %rsp,%rbp
 121:	89 7d fc             	mov    %edi,-0x4(%rbp)
 124:	8b 45 fc             	mov    -0x4(%rbp),%eax
 127:	2d b8 76 1f 6e       	sub    $0x6e1f76b8,%eax
 12c:	5d                   	pop    %rbp
 12d:	c3                   	retq   

000000000000012e <getval_360>:
 12e:	55                   	push   %rbp
 12f:	48 89 e5             	mov    %rsp,%rbp
 132:	b8 20 48 89 e0       	mov    $0xe0894820,%eax
 137:	5d                   	pop    %rbp
 138:	c3                   	retq   

0000000000000139 <addval_172>:
 139:	55                   	push   %rbp
 13a:	48 89 e5             	mov    %rsp,%rbp
 13d:	89 7d fc             	mov    %edi,-0x4(%rbp)
 140:	8b 45 fc             	mov    -0x4(%rbp),%eax
 143:	2d b8 76 1f 6e       	sub    $0x6e1f76b8,%eax
 148:	5d                   	pop    %rbp
 149:	c3                   	retq   

000000000000014a <getval_492>:
 14a:	55                   	push   %rbp
 14b:	48 89 e5             	mov    %rsp,%rbp
 14e:	b8 4a 89 e0 c3       	mov    $0xc3e0894a,%eax
 153:	5d                   	pop    %rbp
 154:	c3                   	retq   

0000000000000155 <setval_169>:
 155:	55                   	push   %rbp
 156:	48 89 e5             	mov    %rsp,%rbp
 159:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 15d:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 161:	c7 00 09 c1 38 c0    	movl   $0xc038c109,(%rax)
 167:	90                   	nop
 168:	5d                   	pop    %rbp
 169:	c3                   	retq   

000000000000016a <getval_380>:
 16a:	55                   	push   %rbp
 16b:	48 89 e5             	mov    %rsp,%rbp
 16e:	b8 c9 d6 90 90       	mov    $0x9090d6c9,%eax
 173:	5d                   	pop    %rbp
 174:	c3                   	retq   

0000000000000175 <addval_217>:
 175:	55                   	push   %rbp
 176:	48 89 e5             	mov    %rsp,%rbp
 179:	89 7d fc             	mov    %edi,-0x4(%rbp)
 17c:	8b 45 fc             	mov    -0x4(%rbp),%eax
 17f:	2d 77 29 6f 3e       	sub    $0x3e6f2977,%eax
 184:	5d                   	pop    %rbp
 185:	c3                   	retq   

0000000000000186 <getval_301>:
 186:	55                   	push   %rbp
 187:	48 89 e5             	mov    %rsp,%rbp
 18a:	b8 89 c1 78 d2       	mov    $0xd278c189,%eax
 18f:	5d                   	pop    %rbp
 190:	c3                   	retq   

0000000000000191 <addval_433>:
 191:	55                   	push   %rbp
 192:	48 89 e5             	mov    %rsp,%rbp
 195:	89 7d fc             	mov    %edi,-0x4(%rbp)
 198:	8b 45 fc             	mov    -0x4(%rbp),%eax
 19b:	2d b8 7e 1f 3c       	sub    $0x3c1f7eb8,%eax
 1a0:	5d                   	pop    %rbp
 1a1:	c3                   	retq   

00000000000001a2 <addval_368>:
 1a2:	55                   	push   %rbp
 1a3:	48 89 e5             	mov    %rsp,%rbp
 1a6:	89 7d fc             	mov    %edi,-0x4(%rbp)
 1a9:	8b 45 fc             	mov    -0x4(%rbp),%eax
 1ac:	2d b8 76 1f 3e       	sub    $0x3e1f76b8,%eax
 1b1:	5d                   	pop    %rbp
 1b2:	c3                   	retq   

00000000000001b3 <addval_102>:
 1b3:	55                   	push   %rbp
 1b4:	48 89 e5             	mov    %rsp,%rbp
 1b7:	89 7d fc             	mov    %edi,-0x4(%rbp)
 1ba:	8b 45 fc             	mov    -0x4(%rbp),%eax
 1bd:	2d 84 15 f6 29       	sub    $0x29f61584,%eax
 1c2:	5d                   	pop    %rbp
 1c3:	c3                   	retq   

00000000000001c4 <addval_487>:
 1c4:	55                   	push   %rbp
 1c5:	48 89 e5             	mov    %rsp,%rbp
 1c8:	89 7d fc             	mov    %edi,-0x4(%rbp)
 1cb:	8b 45 fc             	mov    -0x4(%rbp),%eax
 1ce:	2d 77 35 6b 6f       	sub    $0x6f6b3577,%eax
 1d3:	5d                   	pop    %rbp
 1d4:	c3                   	retq   

00000000000001d5 <getval_358>:
 1d5:	55                   	push   %rbp
 1d6:	48 89 e5             	mov    %rsp,%rbp
 1d9:	b8 89 ca 90 90       	mov    $0x9090ca89,%eax
 1de:	5d                   	pop    %rbp
 1df:	c3                   	retq   

00000000000001e0 <setval_385>:
 1e0:	55                   	push   %rbp
 1e1:	48 89 e5             	mov    %rsp,%rbp
 1e4:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 1e8:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 1ec:	c7 00 89 d6 91 c3    	movl   $0xc391d689,(%rax)
 1f2:	90                   	nop
 1f3:	5d                   	pop    %rbp
 1f4:	c3                   	retq   

00000000000001f5 <addval_420>:
 1f5:	55                   	push   %rbp
 1f6:	48 89 e5             	mov    %rsp,%rbp
 1f9:	89 7d fc             	mov    %edi,-0x4(%rbp)
 1fc:	8b 45 fc             	mov    -0x4(%rbp),%eax
 1ff:	2d 57 3e 6f 6f       	sub    $0x6f6f3e57,%eax
 204:	5d                   	pop    %rbp
 205:	c3                   	retq   

0000000000000206 <addval_311>:
 206:	55                   	push   %rbp
 207:	48 89 e5             	mov    %rsp,%rbp
 20a:	89 7d fc             	mov    %edi,-0x4(%rbp)
 20d:	8b 45 fc             	mov    -0x4(%rbp),%eax
 210:	2d 77 35 b7 24       	sub    $0x24b73577,%eax
 215:	5d                   	pop    %rbp
 216:	c3                   	retq   

0000000000000217 <getval_377>:
 217:	55                   	push   %rbp
 218:	48 89 e5             	mov    %rsp,%rbp
 21b:	b8 81 ca 38 c9       	mov    $0xc938ca81,%eax
 220:	5d                   	pop    %rbp
 221:	c3                   	retq   

0000000000000222 <setval_246>:
 222:	55                   	push   %rbp
 223:	48 89 e5             	mov    %rsp,%rbp
 226:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 22a:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 22e:	c7 00 48 c9 e0 c3    	movl   $0xc3e0c948,(%rax)
 234:	90                   	nop
 235:	5d                   	pop    %rbp
 236:	c3                   	retq   

0000000000000237 <addval_339>:
 237:	55                   	push   %rbp
 238:	48 89 e5             	mov    %rsp,%rbp
 23b:	89 7d fc             	mov    %edi,-0x4(%rbp)
 23e:	8b 45 fc             	mov    -0x4(%rbp),%eax
 241:	2d 77 35 ff 36       	sub    $0x36ff3577,%eax
 246:	5d                   	pop    %rbp
 247:	c3                   	retq   

0000000000000248 <getval_140>:
 248:	55                   	push   %rbp
 249:	48 89 e5             	mov    %rsp,%rbp
 24c:	b8 89 c1 38 db       	mov    $0xdb38c189,%eax
 251:	5d                   	pop    %rbp
 252:	c3                   	retq   

0000000000000253 <addval_128>:
 253:	55                   	push   %rbp
 254:	48 89 e5             	mov    %rsp,%rbp
 257:	89 7d fc             	mov    %edi,-0x4(%rbp)
 25a:	8b 45 fc             	mov    -0x4(%rbp),%eax
 25d:	2d f7 29 c7 2d       	sub    $0x2dc729f7,%eax
 262:	5d                   	pop    %rbp
 263:	c3                   	retq   

0000000000000264 <getval_231>:
 264:	55                   	push   %rbp
 265:	48 89 e5             	mov    %rsp,%rbp
 268:	b8 89 d6 38 d2       	mov    $0xd238d689,%eax
 26d:	5d                   	pop    %rbp
 26e:	c3                   	retq   

000000000000026f <setval_234>:
 26f:	55                   	push   %rbp
 270:	48 89 e5             	mov    %rsp,%rbp
 273:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 277:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 27b:	c7 00 89 ca 20 db    	movl   $0xdb20ca89,(%rax)
 281:	90                   	nop
 282:	5d                   	pop    %rbp
 283:	c3                   	retq   

0000000000000284 <setval_101>:
 284:	55                   	push   %rbp
 285:	48 89 e5             	mov    %rsp,%rbp
 288:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 28c:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 290:	c7 00 89 ca 78 c9    	movl   $0xc978ca89,(%rax)
 296:	90                   	nop
 297:	5d                   	pop    %rbp
 298:	c3                   	retq   

0000000000000299 <end_farm>:
 299:	55                   	push   %rbp
 29a:	48 89 e5             	mov    %rsp,%rbp
 29d:	b8 01 00 00 00       	mov    $0x1,%eax
 2a2:	5d                   	pop    %rbp
 2a3:	c3                   	retq   
