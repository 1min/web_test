package FRAME_EXAM;

import java.awt.Dimension;
import java.awt.Toolkit;

import javax.swing.JFrame;

public class jframe1 extends JFrame {
	public jframe1() {
		Toolkit kit= Toolkit.getDefaultToolkit();//스크린 받아오는용도
		Dimension screen_size = kit.getScreenSize();
		this.setTitle("두번째 윈도우");
		this.setSize(400,400);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);//x눌렸을때 모든프로그램종료
		this.setLocation(screen_size.width/3,screen_size.height/3);
		this.setVisible(true);
	}
public static void main(String[]args) {
	jframe1 f= new jframe1();
}
}
