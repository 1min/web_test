package eventtest;

import java.awt.BorderLayout;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class puzzle extends JFrame
implements ActionListener {

	puzzlebutton[] button= new puzzlebutton[9];
	JButton reset;
	public puzzle() {
		this.setSize(500, 500);
		JPanel panel = new JPanel(new BorderLayout());
		JPanel panelA = new JPanel(new GridLayout(3,0));
		JPanel panelB = new JPanel();
		
		this.setTitle("∆€¡Ò");
		this.setSize(300,400);
		this.setLocation(200,200);
JButton button[]= new JButton[9];
for(int i=0;i<8;i++)
{
	button[i]=new puzzlebutton( ""+(i+1));
	panelA.add(button[i]);
}
puzzlebutton b1=new puzzlebutton("");
puzzlebutton reset_button=new puzzlebutton("reset");
panel.add(panelA, BorderLayout.CENTER);
panel.add(panelB, BorderLayout.SOUTH);
panelA.add(b1);
panelB.add(reset_button);
this.add(panel);
this.setVisible(true);
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		puzzle f = new puzzle();
	}

	@Override
	public void actionPerformed(ActionEvent arg0) {
		// TODO Auto-generated method stub
		
	}

	}
class puzzlebutton extends JButton {
	static int count=0;
	int index;
	
	public puzzlebutton(String s) {
		super(s);
		index = count++;
	}
}
