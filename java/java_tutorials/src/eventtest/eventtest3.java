package eventtest;

import java.awt.Dimension;
import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;

public class eventtest3 extends JFrame implements ActionListener{//이벤트중 가장편한방법
	JLabel label;
	JButton button;
public eventtest3() {
	this.setTitle("이벤트창2");
	this.setSize(300,400);
	this.setLocation(200,200);
	JPanel panel=new JPanel(new FlowLayout());
		 button = new JButton("버튼을누르세요");//
	 label= new JLabel("아직안클릭");
	button.setPreferredSize(new Dimension(300,50));
	panel.add(button);
	button.addActionListener(this);
	panel.add(label);
	this.add(panel);//this 자기자신
	this.setVisible(true);
}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		eventtest3 b = new eventtest3();
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		// TODO Auto-generated method stub
		label.setText("마침내버튼이클릭되었습니다");
		button.setText("클릭완료");
	}

}
