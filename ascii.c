#include <stdio.h>

void main(void) {
	printf("ASCII TABLE\n");
	for(signed short i = 0x00; i != 0x80; ++i) {
		switch(i){
			default:
				printf("\e[97m@%c\e[0m\t", i);
				break;
			case 0:
				printf("\e[96mNUL\t");
				break;
			case 1:
				printf("\e[96mSOH\t");
				break;
			case 2:
				printf("\e[96mSTX\t");
				break;
			case 3:
				printf("\e[96mETX\t");
				break;
			case 4:
				printf("\e[96mEOT\t");
				break;
			case 5:
				printf("\e[96mENQ\t");
				break;
			case 6:
				printf("\e[96mACK\t");
				break;
			case 7:
				printf("\e[96mBEL\t");
				break;
			case 8:
				printf("\e[96mBS\t");
				break;
			case 9:
				printf("\e[96mHT\t");
				break;
			case 10:
				printf("\e[96mLF\t");
				break;
			case 11:
				printf("\e[96mVT\t");
				break;
			case 12:
				printf("\e[96mFF\t");
				break;
			case 13:
				printf("\e[96mCR\t");
				break;
			case 14:
				printf("\e[96mSO\t");
				break;
			case 15:
				printf("\e[96mSI\t");
				break;
			case 16:
				printf("\e[96mDLE\t");
				break;
			case 17:
				printf("\e[96mDC1\t");
				break;
			case 18:
				printf("\e[96mDC2\t");
				break;
			case 19:
				printf("\e[96mDC3\t");
				break;
			case 20:
				printf("\e[96mDC4\t");
				break;
			case 21:
				printf("\e[96mNAK\t");
				break;
			case 22:
				printf("\e[96mSYN\t");
				break;
			case 23:
				printf("\e[96mETB\t");
				break;
			case 24:
				printf("\e[96mCAN\t");
				break;
			case 25:
				printf("\e[96mEM\t");
				break;
			case 26:
				printf("\e[96mSUB\t");
				break;
			case 27:
				printf("\e[96mESC\t");
				break;
			case 28:
				printf("\e[96mFS\t");
				break;
			case 29:
				printf("\e[96mGS\t");
				break;
			case 30:
				printf("\e[96mRS\t");
				break;
			case 31:
				printf("\e[96mUS\t");
				break;
			case 127:
				printf("\e[96mDEL\e[0m\t");
				break; 
		}
		printf("\e[95mx%x\e[0m\t", i);
		printf("\e[32md%d\e[0m\t", i);
		printf("\e[93mo%o\e[0m\t", i);
		printf("\e[91mb%b\e[0m\n", i);
	}
	printf("\e[0m");
}
