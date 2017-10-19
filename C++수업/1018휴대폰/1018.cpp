#include <stdio.h>
#define Basice_rate 10000
#define text_free_num 20

int over_cnt;//전역변수는 초기값을 무조건 0으로 받는다

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


	printf("휴대폰 음성통화시간(분) 입력");
	scanf("%d",&voice);
	printf("휴대폰 문자량 입력");
	scanf("%d",&text);
	
	voice_fee=voice_charge(voice);
	text_fee=text_charge(text);

	sum=Basice_rate+voice_fee+text_fee;
	fee=sum*1.1;
	//출력
	printf("\n\t휴대폰 사용요금 청구서\n");
	printf("============================\n");
	printf("음성통화시간 %3d 분\n",voice);
	printf("============================\n");
	printf("문자 전송 건수 %3d\n",text);
	printf("============================\n");
	printf("기본요금 %6d원 \n", 10000);
	printf("============================\n");
	printf("음성통화료 %3d %6d원 \n", voice, voice_fee);
	printf("============================\n");
	printf("문자전송료초과 %3d건 (20건무료) %4d 원 \n",over_cnt,text_fee);
	printf("============================\n");
	printf("합계 %6d 원\n",sum);
	printf("============================\n");
	printf("부가세(10%%) %7.0lf원\n",(double)sum*0.1);//%하려면 10%% %두개
	printf("============================\n");
	printf("이번달요금 %6d원\n",fee);
}
void main1(){
	int voice,text,fee,text_over,sum;
	int voice_fee,text_fee;
	printf("휴대폰 음성통화시간(분) 입력");
	scanf("%d",&voice);
	printf("휴대폰 문자량 입력");
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
	//출력
	printf("\n\t휴대폰 사용요금 청구서\n");
	printf("============================\n");
	printf("음성통화시간 %3d 분\n",voice);
	printf("============================\n");
	printf("문자 전송 건수 %3d\n",text);
	printf("============================\n");
	printf("기본요금 %6d원 \n", 10000);
	printf("============================\n");
	printf("음성통화료 %3d %6d원 \n", voice, voice_fee);
	printf("============================\n");
	printf("문자전송료초과 %3d건 (20건무료) %4d 원 \n",text_over,text_fee);
	printf("============================\n");
	printf("합계 %6d 원\n",sum);
	printf("============================\n");
	printf("부가세(10%%) %7.0lf원\n",(double)sum*0.1);//%하려면 10%% %두개
	printf("============================\n");
	printf("이번달요금 %6d원\n",fee);
}