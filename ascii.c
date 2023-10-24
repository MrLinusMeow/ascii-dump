#include <stdio.h>

void main(void) {
	for(int i = 0x00; i != 0x80; ++i) {
		switch(i){
			default:
				printf("%c\t", i);
				break;
			case 0:
				printf("NUL\t");
				break;
			case 1:
				printf("SOH\t");
				break;
			case 2:
				printf("STX\t");
				break;
			case 3:
				printf("ETX\t");
				break;
			case 4:
				printf("EOT\t");
				break;
			case 5:
				printf("ENQ\t");
				break;
			case 6:
				printf("ACK\t");
				break;
			case 7:
				printf("BEL\t");
				break;
			case 8:
				printf("BS\t");
				break;
			case 9:
				printf("HT\t");
				break;
			case 10:
				printf("LF\t");
				break;
			case 11:
				printf("VT\t");
				break;
			case 12:
				printf("FF\t");
				break;
			case 13:
				printf("CR\t");
				break;
			case 14:
				printf("SO\t");
				break;
			case 15:
				printf("SI\t");
				break;
			case 16:
				printf("DLE\t");
				break;
			case 17:
				printf("DC1\t");
				break;
			case 18:
				printf("DC2\t");
				break;
			case 19:
				printf("DC3\t");
				break;
			case 20:
				printf("DC4\t");
				break;
			case 21:
				printf("NAK\t");
				break;
			case 22:
				printf("SYN\t");
				break;
			case 23:
				printf("ETB\t");
				break;
			case 24:
				printf("CAN\t");
				break;
			case 25:
				printf("EM\t");
				break;
			case 26:
				printf("SUB\t");
				break;
			case 27:
				printf("ESC\t");
				break;
			case 28:
				printf("FS\t");
				break;
			case 29:
				printf("GS\t");
				break;
			case 30:
				printf("RS\t");
				break;
			case 31:
				printf("US\t");
				break;
			case 127:
				printf("DEL\t");
				break;
		}
		printf("0x%x\t", i);
		printf("%d\t", i);
		printf("0%o\t", i);
		printf("%bb\n", i);
	}
}
