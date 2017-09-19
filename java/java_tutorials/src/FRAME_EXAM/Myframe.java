package FRAME_EXAM;

import java.awt.Dimension;
import java.awt.Toolkit;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class Myframe extends JFrame {
	public Myframe() {
		Toolkit kit = Toolkit.getDefaultToolkit();
		Dimension screen_size = kit.getScreenSize();
		this.setTitle("¿Âµµº¯È¯±â");
		this.setSize(600,600);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setLocation(screen_size.width/3,screen_size.height/3);
		JPanel panel = new JPanel();
		JLabel label1 = new JLabel("È­¾¾¿Âµµ");
		JTextField input = new JTextField(20);
		JLabel label2 = new JLabel();
		label2.setText("¼·¾¾¿Âµµ");
		JTextField input2 = new JTextField(20);
		JButton button = new JButton("º¯È¯");
		this.add(panel);
		panel.add(label1);
		panel.add(input);
		panel.add(label2);
		panel.add(input2);
		panel.add(button);
		this.setVisible(true);
		this.setResizable(false);
	}
public static void main(String[]args) {
	Myframe f = new Myframe();
}
}
