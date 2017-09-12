package FRAME_EXAM;

import java.awt.Dimension;
import java.awt.Toolkit;

import javax.swing.JFrame;

public class jframe1 extends JFrame {
	public jframe1() {
		Toolkit kit= Toolkit.getDefaultToolkit();
		Dimension screen_size = kit.getScreenSize();
		this.setTitle("두번째 윈도우");
		this.setSize(400,400);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setLocation(screen_size.width/3,screen_size.height/3);
		this.setVisible(true);
	}
public static void main(String[]args) {
	jframe1 f= new jframe1();
}
}
