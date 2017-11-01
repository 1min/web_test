package layout_test;

import java.awt.Dimension;
import java.awt.GridLayout;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.SwingConstants;

public class girdlayoutTest extends JFrame{
public girdlayoutTest() {
	this.setTitle("그리드레이아웃");
	this.setSize(300,300);
	this.setLocation(200, 200);
	JPanel panel = new JPanel(new GridLayout(0,1,10,10));
	JButton[] button=new JButton[5];
	for(int i=0;i<5;i++)
	{
		button[i]=new JButton( "button"+(i+1));
	panel.add(button[i]);
	}
	this.add(panel);
	this.setVisible(true);
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		girdlayoutTest f = new girdlayoutTest();
	}

}
