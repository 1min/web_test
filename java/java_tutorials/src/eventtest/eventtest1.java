package eventtest;

import java.awt.Dimension;
import java.awt.FlowLayout;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;

public class eventtest1 extends JFrame {

	public eventtest1() {
		this.setTitle("�̺�Ʈâ");
		this.setSize(300,400);
		this.setLocation(200,200);
		JPanel panel=new JPanel(new FlowLayout());
			JButton button = new JButton("��ư����������");
		JLabel label= new JLabel("������Ŭ��");
		button.setPreferredSize(new Dimension(300,50));
		panel.add(button);
		button.addActionListener(new mylistener());
		panel.add(label);
		this.add(panel);
		this.setVisible(true);
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
eventtest1 f= new eventtest1();
	}

}
