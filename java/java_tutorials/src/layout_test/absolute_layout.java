package layout_test;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class absolute_layout extends JFrame{

	public absolute_layout() {
		this.setTitle("절대좌표테스트");
		this.setSize(300,400);
		this.setLocation(200,200);
		JPanel panel = new JPanel(null);
		//panel.setLayout(null);
		JButton b1 = new JButton("첫번째 버튼");
		JButton b2 = new JButton("두번째 버튼");
		JButton b3 = new JButton("세번째 버튼");
		
		panel.add(b1);
		panel.add(b2);
		panel.add(b3);
		b1.setBounds(10,10,100,50);
		b2.setBounds(100,50,100,70);
		b3.setBounds(200,150,120,30);
		this.add(panel);
		this.setVisible(true);
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		absolute_layout f = new absolute_layout();
	}

}
