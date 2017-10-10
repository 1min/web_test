package layout_test;

import java.awt.BorderLayout;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class borderlayout_test extends JFrame {
	
	public borderlayout_test(String title) {
	this.setTitle("플로우레이아웃");
	this.setSize(600,600);
	this.setLocation(200, 200);
	
	JPanel panel = new JPanel();
	panel.setLayout(new BorderLayout(20,20));
	JButton button[]= new JButton[5];
	for(int i=0;i<5;i++)
	{
		button[i]=new JButton( "버튼"+(i+1));
	}
	panel.add(button[0],BorderLayout.PAGE_START);
	panel.add(button[1],BorderLayout.LINE_START);
	panel.add(button[2],BorderLayout.CENTER);
	panel.add(button[3],BorderLayout.EAST);
	panel.add(button[4],BorderLayout.SOUTH);
	this.add(panel);
	this.setVisible(true);
	}
	
	public static void main (String[] args) {
	
		borderlayout_test f = new borderlayout_test("경계레이아웃");
	}
}
