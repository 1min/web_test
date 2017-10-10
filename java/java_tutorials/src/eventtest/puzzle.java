package eventtest;

import java.awt.BorderLayout;import java.awt.Color;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;

class puzzlebutton extends JButton {
	static int count=0;
	int index;
	
	public puzzlebutton(String s) {
		super(s);
		index = count++;
	}
}

public class puzzle extends JFrame
implements ActionListener {

	puzzlebutton[] button= new puzzlebutton[9];
	JButton reset;
	
	public puzzle() {
		this.setSize(500, 500);
		JPanel panel = new JPanel(new BorderLayout());
		JPanel panelA = new JPanel(new GridLayout(3,0));
		JPanel panelB = new JPanel(new GridLayout(1,0));
		
		this.setTitle("퍼즐");
		this.setSize(300,400);
		this.setLocation(200,200);
JButton button[]= new JButton[9];
for(int i=0;i<8;i++)
{
	button[i]=new puzzlebutton( ""+(i+1));
	button[i].addActionListener(this);
	panelA.add(button[i]);
}
puzzlebutton b1=new puzzlebutton("");//수정요함
b1.addActionListener(this);
JButton reset_button=new JButton("reset");
reset_button.setBackground(Color.green);
reset.addActionListener(this);
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
		puzzlebutton event = (puzzlebutton)arg0.getSource();//getsource는 오브젝트타입반환
		if(event.index == 5) {
			if(button[8].getText()=="") {//버튼9
				button[8].setText(event.getText());
				event.setText("");
			}else if (button[4].getText()=="") {
				button[8].setText(event.getText());
				event.setText("");
			}else if (button[5].getText()=="") {
				button[8].setText(event.getText());
				event.setText("");
			}
		}
		else if(event.index == 4) {
			if(button[1].getText()=="") {//버튼9
				button[1].setText(event.getText());
				event.setText("");
			}else if (button[3].getText()=="") {
				button[3].setText(event.getText());
				event.setText("");
			}else if (button[5].getText()=="") {
				button[5].setText(event.getText());
				event.setText("");
			}
			else if (button[7].getText()=="") {
				button[7].setText(event.getText());
				event.setText("");
			}
			else if(event.index == 3) {
				if(button[0].getText()=="") {//버튼9
					button[0].setText(event.getText());
					event.setText("");
				}else if (button[3].getText()=="") {
					button[3].setText(event.getText());
					event.setText("");
				}else if (button[5].getText()=="") {
					button[5].setText(event.getText());
					event.setText("");
				}
				else if (button[7].getText()=="") {
					button[7].setText(event.getText());
					event.setText("");
				}
		}
	}
	}
}

