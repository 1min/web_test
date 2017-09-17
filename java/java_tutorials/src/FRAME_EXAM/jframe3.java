package FRAME_EXAM;

import java.awt.FlowLayout;

import javax.swing.JButton;
import javax.swing.JFrame;

public class jframe3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		JFrame frame = new JFrame("첫윈도우");
		JButton button = new JButton("몰라버튼");
		JButton button2 = new JButton("몰라버튼2");
		frame.setLayout(new FlowLayout());
		frame.setSize(300,200);
		frame.add(button);
		frame.add(button2);
		frame.setVisible(true);
	}

}
