#include <stdio.h>
#define Basice_rate 10000
#define text_free_num 20

int over_cnt;//���������� �ʱⰪ�� ������ 0���� �޴´�

int voice_charge(int v_time){
	int v_fee;
	if(v_time>100)
		return v_fee=10000+(v_time-100)*80;
	else 
		return v_fee= v_time*100;
}
int text_charge(int text_cnt){
	int text_fee;
	if(text_cnt>20) over_cnt=text_cnt-20;
	else over_cnt=0;
	text_fee=over_cnt*20;
	return text_fee;
}
void main(){
	int voice,text,fee,sum;
	int voice_fee,text_fee;


	printf("�޴��� ������ȭ�ð�(��) �Է�");
	scanf("%d",&voice);
	printf("�޴��� ���ڷ� �Է�");
	scanf("%d",&text);
	
	voice_fee=voice_charge(voice);
	text_fee=text_charge(text);

	sum=Basice_rate+voice_fee+text_fee;
	fee=sum*1.1;
	//���
	printf("\n\t�޴��� ����� û����\n");
	printf("============================\n");
	printf("������ȭ�ð� %3d ��\n",voice);
	printf("============================\n");
	printf("���� ���� �Ǽ� %3d\n",text);
	printf("============================\n");
	printf("�⺻��� %6d�� \n", 10000);
	printf("============================\n");
	printf("������ȭ�� %3d %6d�� \n", voice, voice_fee);
	printf("============================\n");
	printf("�������۷��ʰ� %3d�� (20�ǹ���) %4d �� \n",over_cnt,text_fee);
	printf("============================\n");
	printf("�հ� %6d ��\n",sum);
	printf("============================\n");
	printf("�ΰ���(10%%) %7.0lf��\n",(double)sum*0.1);//%�Ϸ��� 10%% %�ΰ�
	printf("============================\n");
	printf("�̹��޿�� %6d��\n",fee);
}
void main1(){
	int voice,text,fee,text_over,sum;
	int voice_fee,text_fee;
	printf("�޴��� ������ȭ�ð�(��) �Է�");
	scanf("%d",&voice);
	printf("�޴��� ���ڷ� �Է�");
	scanf("%d",&text);
	
	if(voice>100)
		voice_fee=10000+(voice-100)*80;
	else 
		voice_fee= voice*100;

	if(text>20) text_over=text-20;
	else text_over=0;

	text_fee=text_over*20;
	sum=voice_fee+text_fee+10000;
	fee=sum*1.1;
	//���
	printf("\n\t�޴��� ����� û����\n");
	printf("============================\n");
	printf("������ȭ�ð� %3d ��\n",voice);
	printf("============================\n");
	printf("���� ���� �Ǽ� %3d\n",text);
	printf("============================\n");
	printf("�⺻��� %6d�� \n", 10000);
	printf("============================\n");
	printf("������ȭ�� %3d %6d�� \n", voice, voice_fee);
	printf("============================\n");
	printf("�������۷��ʰ� %3d�� (20�ǹ���) %4d �� \n",text_over,text_fee);
	printf("============================\n");
	printf("�հ� %6d ��\n",sum);
	printf("============================\n");
	printf("�ΰ���(10%%) %7.0lf��\n",(double)sum*0.1);//%�Ϸ��� 10%% %�ΰ�
	printf("============================\n");
	printf("�̹��޿�� %6d��\n",fee);
}