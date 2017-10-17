package eventtest;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class puzzle extends JFrame 
	implements ActionListener
{
	PuzzleButton[] button = new PuzzleButton[9];
	JButton reset;
	
	public puzzle()
	{
		this.setSize(500, 500);
		JPanel panel = new JPanel( new BorderLayout());
		JPanel panelA = new JPanel( new GridLayout(3,0));
		JPanel panelB = new JPanel(new GridLayout(1,0)); 
		
		for(int i=0; i < 8; i++ ){
			button[i] = new PuzzleButton(""+(i+1));
			button[i].addActionListener(this);
			panelA.add( button[i]);
		}
		button[8] = new PuzzleButton("");
		button[8].addActionListener(this);
		panelA.add(button[8]);
		
		JButton reset = new JButton("reset");
		reset.setBackground(Color.green);
		reset.addActionListener(this);
		panelB.add(reset);
		
		
		panel.add(panelA, BorderLayout.CENTER); 
		panel.add(panelB, BorderLayout.SOUTH);
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
		PuzzleButton event = (PuzzleButton)arg0.getSource();
		if( event.index == 5){
			if(button[8].getText()==""){
				button[8].setText(event.getText());
				event.setText("");				
			} else if( button[4].getText()=="" ){
				button[4].setText(event.getText());
				event.setText("");	
			}else if( button[5].getText()==""){
				button[5].setText(event.getText());
				event.setText("");	
			}
		}
		else if(event.index == 4 ){
			if(button[1].getText()==""){
				button[1].setText(event.getText());
				event.setText("");				
			} else if( button[3].getText()=="" ){
				button[3].setText(event.getText());
				event.setText("");	
			}else if( button[5].getText()==""){
				button[5].setText(event.getText());
				event.setText("");	
			}else if( button[7].getText()==""){
				button[7].setText(event.getText());
				event.setText("");	
			}
		}
		
	}

}

class PuzzleButton extends JButton {
	static int count=0;
	int index;
	
	public PuzzleButton( String s )
	{
		super(s);
		index = count++;
	}
}
