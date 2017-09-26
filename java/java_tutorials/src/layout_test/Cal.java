package layout_test;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JTextField;

import eventtest.mylistener;

public class Cal extends JFrame implements ActionListener {
	JTextField input;
	JButton[] button = new JButton[25];
    String[] labels = {"backspace","","","CE","C","7","8","9","/","sqrt","4","5",
    		"6","x","%","1","2","3","-","1/x","0","+/-",".","+","=",};
	public Cal() {
		this.setTitle("°è»ê½Ä");
		this.setSize(500,300);
		this.setLocation(200, 200);
		JPanel panel =new JPanel(new BorderLayout());
		
	JPanel panelA= new JPanel(new GridLayout(1,0));
	JPanel panelB= new JPanel(new GridLayout(0,5));
	 input = new JTextField(20);
	panelA.add(input);
	for(int i=0;i<25;i++){
	button[i] = new JButton(labels[i]);
	if(i%5==3 || i%5==4)
		button[i].setForeground(Color.red);
	button[i].addActionListener(this);
	button[i].setBackground(Color.yellow);
	panelB.add(button[i]);
	}

	panel.add(panelA,BorderLayout.NORTH);
	panel.add(panelB,BorderLayout.CENTER);
	this.add(panel);
	this.setVisible(true);
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Cal c = new Cal();
	}
	@Override
	public void actionPerformed(ActionEvent e) {
		// TODO Auto-generated method stub
		JButton b = (JButton)e.getSource();
		input.setText(input.getText()+b.getActionCommand());
	}

}
