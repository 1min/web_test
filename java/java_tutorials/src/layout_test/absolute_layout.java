package layout_test;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class absolute_layout extends JFrame{

	public absolute_layout() {
		this.setTitle("������ǥ�׽�Ʈ");
		this.setSize(300,400);
		this.setLocation(200,200);
		JPanel panel = new JPanel(null);
		//panel.setLayout(null);
		JButton b1 = new JButton("ù��° ��ư");
		JButton b2 = new JButton("�ι�° ��ư");
		JButton b3 = new JButton("����° ��ư");
		
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
