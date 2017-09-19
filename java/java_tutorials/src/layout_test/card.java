package layout_test;

import java.awt.BorderLayout;
import java.awt.CardLayout;
import java.awt.GridLayout;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class card extends JFrame{
	String label[]= {"<<","<",">",">>","종료"};
	JButton[] button = new JButton[5];
public card() {
	this.setTitle("카드레이아웃");
	this.setSize(600,600);
	this.setLocation(200, 200);
	JPanel panel =new JPanel(new BorderLayout());
	JPanel panelA= new JPanel(new GridLayout(1,0,5,0));
	JPanel panelB= new JPanel(new GridLayout(0,5));
	for(int i=0;i<5;i++){
	button[i]=new JButton(label[i]);
			panelA.add(button[i]);	
	}
	
	
	Cards cardss = new Cards();
	panel.add(panelA,BorderLayout.NORTH);
	panel.add(panelB,BorderLayout.CENTER);
	panel.add(cardss);
	this.add(panel);
	this.setVisible(true);
}

private class Cards extends JPanel{
	JButton[]b=new JButton[10];
	public Cards()
	{
		this.setLayout(new CardLayout());
		for(int i=0;i<10;i++) {
			b[i] = new JButton((i+1)+"번째 현재버튼.");
		this.add(b[i]);
		}
	}
}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		card c = new card();
	}

}
