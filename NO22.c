// ����ƹ����ӽ��б������������ˡ�
// �׶�Ϊa,b,c���ˣ��Ҷ�Ϊx,y,z���ˡ�
// �ѳ�ǩ��������������
// �������Ա����������������
// a˵������x�ȣ�c˵������x,z�ȣ�
// �������ҳ��������ֵ������� 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char a, b, c;
    for(a = 'x'; (a >= 'x' && a <= 'z'); a++){
        for(b = 'x'; (b >= 'x' && b <= 'z'); b++){
            for(c = 'x'; (c >= 'x' && c <= 'z'); c++){
                if(a != 'x' && c != 'x' && c != 'z' && a != b && a != c && b != c){
                    printf("a - %c\nb - %c\nc - %c\n", a, b, c);
                }
            }
        }
    }
}