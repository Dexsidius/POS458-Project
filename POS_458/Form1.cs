using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Microsoft.VisualBasic;

namespace POS_458
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            pictureBox1.MouseClick += mouseClick;
            pictureBox2.MouseClick += mouseClick;
            pictureBox3.MouseClick += mouseClick;
            pictureBox4.MouseClick += mouseClick;
            pictureBox5.MouseClick += mouseClick;
            pictureBox6.MouseClick += mouseClick;
            pictureBox7.MouseClick += mouseClick;
            pictureBox8.MouseClick += mouseClick;
            pictureBox9.MouseClick += mouseClick;
            pictureBox10.MouseClick += mouseClick;
            pictureBox11.MouseClick += mouseClick;

        }

        int price;
        int scoops;
        string name;
        int qty1;
        int total;

        private void mouseClick(object sender, MouseEventArgs e)
        {
            

            var clickpic = (PictureBox)sender;

            if(clickpic == pictureBox1)
            {
                name = "Cookies and Cream";
                price = 3;
                scoops = int.Parse(Interaction.InputBox("One, Two, or Three Scoops ?", "Scoops", ""));
                qty1 = int.Parse(Interaction.InputBox("Enter the Qty ?", "Qty", ""));                
            }
            if (clickpic == pictureBox2)
            {
                name = "Chocolate";
                price = 3;
                scoops = int.Parse(Interaction.InputBox("One, Two, or Three Scoops ?", "Scoops", ""));
                qty1 = int.Parse(Interaction.InputBox("Enter the Qty ?", "Qty", ""));                
            }
            if (clickpic == pictureBox3)
            {
                name = "Strawberry";
                price = 3;
                scoops = int.Parse(Interaction.InputBox("One, Two, or Three Scoops ?", "Scoops", ""));
                qty1 = int.Parse(Interaction.InputBox("Enter the Qty ?", "Qty", ""));                
            }
            if (clickpic == pictureBox4)
            {
                name = "Vanilla";
                price = 3;
                scoops = int.Parse(Interaction.InputBox("One, Two, or Three Scoops ?", "Scoops", ""));
                qty1 = int.Parse(Interaction.InputBox("Enter the Qty ?", "Qty", ""));                
            }
            if(clickpic == pictureBox5)
            {
                name = "Waffle Cone";
                price = 2;
                
                qty1 = int.Parse(Interaction.InputBox("Enter the Qty ?", "Qty", ""));                
            }
            if (clickpic == pictureBox6)
            {
                name = "Sugar Cone";
                price = 1;
                
                qty1 = int.Parse(Interaction.InputBox("Enter the Qty ?", "Qty", ""));                
            }
            if (clickpic == pictureBox7)
            {
                name = "Chocolate Milkshake";
                price = 10;
                scoops = int.Parse(Interaction.InputBox("One, Two, or Three Scoops ?", "Scoops", ""));
                qty1 = int.Parse(Interaction.InputBox("Enter the Qty ?", "Qty", ""));                
            }
            if (clickpic == pictureBox8)
            {
                name = "Cookies and Cream Milkshake";
                price = 10;
                scoops = int.Parse(Interaction.InputBox("One, Two, or Three Scoops ?", "Scoops", ""));
                qty1 = int.Parse(Interaction.InputBox("Enter the Qty ?", "Qty", ""));                
            }
            if (clickpic == pictureBox9)
            {
                name = "Strawberry Milkshake";
                price = 10;
                scoops = int.Parse(Interaction.InputBox("One, Two, or Three Scoops ?", "Scoops", ""));
                qty1 = int.Parse(Interaction.InputBox("Enter the Qty ?", "Qty", ""));                
            }
            if (clickpic == pictureBox10)
            {
                name = "Vanilla Milkshake";
                price = 10;
                scoops = int.Parse(Interaction.InputBox("One, Two, or Three Scoops ?", "Scoops", ""));
                qty1 = int.Parse(Interaction.InputBox("Enter the Qty ?", "Qty", ""));                
            }
            if (clickpic == pictureBox11)
            {
                name = "Frappe";
                price = 10;
                qty1 = int.Parse(Interaction.InputBox("Enter the Qty ?", "Qty", ""));                
            }

            total = price * scoops * qty1;
            this.dataGridView1.Rows.Add(name, price,scoops, qty1,total.ToString());

            
            int sum = 0;

            for(int row = 0; row <dataGridView1.Rows.Count; row++)
            {
                sum = sum + Convert.ToInt32(dataGridView1.Rows[row].Cells[4].Value);
            }

            textBox1.Text = sum.ToString();


        }

        

        private void panel3_Paint(object sender, PaintEventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void pictureBox4_Click(object sender, EventArgs e)
        {

        }

        private void dataGridView1_CellContentClick_1(object sender, DataGridViewCellEventArgs e)
        {

        }
    }
}
