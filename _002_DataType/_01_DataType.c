#include "stdio.h"

void main() {
    int a, b, c;
    a = 10;
    b = 20;
    c = 30;
    /*printf = print format
    * %d ���Ĺ��� : decimal, 10������ ����϶�
    * %x : 16����
    * %#x : 16������ 0x�� �տ� ����
    * %o : 8����
    * ""���� ���Ĺ��ڸ� ������ ������ ������� ġȯ�Ͽ� ����Ѵ�.
    */

    printf("10���� %d %d %d\n", a, b, c);
    printf("16���� %x %x %x\n", a, b, c);
    printf("16���� %#x %#x %#x\n", a, b, c);
    printf("8���� %#o %#o %#o\n", a, b, c);
}