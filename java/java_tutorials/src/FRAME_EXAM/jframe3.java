package FRAME_EXAM;

import java.awt.FlowLayout;

import javax.swing.JButton;
import javax.swing.JFrame;

public class jframe3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		JFrame frame = new JFrame("ù������");
		JButton button = new JButton("�����ư");
		JButton button2 = new JButton("�����ư2");
		frame.setLayout(new FlowLayout());
		frame.setSize(300,200);
		frame.add(button);
		frame.add(button2);
		frame.setVisible(true);
	}

}
