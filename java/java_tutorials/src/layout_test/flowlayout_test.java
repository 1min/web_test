package layout_test;

import java.awt.ComponentOrientation;
import java.awt.Dimension;
import java.awt.FlowLayout;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.SwingConstants;

public class flowlayout_test extends JFrame {
public flowlayout_test() {
	this.setTitle("플로우레이아웃");
	this.setSize(600,600);
	this.setLocation(200, 200);
	JPanel panel = new JPanel(new FlowLayout(FlowLayout.TRAILING,20,20));//trailing 창의 오른쪽
	panel.applyComponentOrientation(ComponentOrientation.RIGHT_TO_LEFT);
	JButton[] button=new JButton[5];
	for(int i=0;i<5;i++)
	{
		button[i]=new JButton( "button"+(i+1));
		button[i].setPreferredSize(new Dimension(100, 80));
		button[i].setHorizontalAlignment(SwingConstants.RIGHT);
		button[i].setVerticalAlignment(SwingConstants.BOTTOM);
	panel.add(button[i]);	
	}
	
	this.add(panel);
	this.setVisible(true);
}
public static void main(String[] args) {
	flowlayout_test f = new flowlayout_test();
}
}
