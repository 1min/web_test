package FRAME_EXAM;

import java.awt.Color;
import java.awt.Dimension;
import java.awt.Toolkit;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class pizza_man extends JFrame {
	public pizza_man() {
		Toolkit kit = Toolkit.getDefaultToolkit();//��ũ��������������
		Dimension screen_size = kit.getScreenSize();
		this.setTitle("pizza_man");
		this.setSize(500,500);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setLocation(screen_size.width/3,screen_size.height/3);
		JPanel panel = new JPanel();
		JPanel pane2 = new JPanel();
		JPanel pane3 = new JPanel();
		JLabel label1 = new JLabel("�ڹ� ���ڿ� �� ���� ȯ���մϴ�");
		JLabel label2 = new JLabel();
		label2.setText("����");
		JTextField input = new JTextField(20);
		JTextField input2 = new JTextField(20);
		label2.setText("����");
		JButton button = new JButton("�Ұ������");
		JButton button2 = new JButton("������������");
		JButton button3 = new JButton("��������");
		pane2.add(label1);
		panel.add(pane2);
		panel.add(pane3);
		pane3.add(button);
		pane3.add(button2);
		pane3.add(button3);
		pane3.add(label2);
		pane3.add(input2);
		panel.setBackground(Color.blue);
		pane2.setBackground(Color.CYAN);
		pane3.setBackground(Color.green);
		this.add(panel);
		this.setVisible(true);
		this.setResizable(false);
	}
public static void main(String[]args) {
	pizza_man f= new pizza_man();
}
}