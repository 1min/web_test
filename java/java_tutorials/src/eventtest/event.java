package eventtest;

import java.awt.Dimension;
import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;

public class event extends JFrame {
	JLabel label;
	JButton button;
	public event() {
		this.setTitle("�̺�Ʈâ2");
		this.setSize(300,400);
		this.setLocation(200,200);
		JPanel panel=new JPanel(new FlowLayout());
			 button = new JButton("��ư����������");//
		
		button.setPreferredSize(new Dimension(300,50));
		 label= new JLabel("������Ŭ��");
		
		button.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				// TODO Auto-generated method stub
				label.setText("��ħ����ư��Ŭ���Ǿ����ϴ�");
			}
			
		});
		panel.add(button);panel.add(label);
		this.add(panel);//this �ڱ��ڽ�
		this.setVisible(true);
}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		event c =new event();
	}

}
