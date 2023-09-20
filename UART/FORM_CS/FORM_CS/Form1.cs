using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO.Ports;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace FORM_CS
{
    public partial class UART_Form : Form
    {
        public UART_Form()
        {
            InitializeComponent();
        }

        private void UART_Form_Load(object sender, EventArgs e)
        {
            portBox.DataSource = SerialPort.GetPortNames();
            /*if (portBox.Items.Count > 0)
                portBox.SelectedIndex = 0;*/
        }

        private void UART_DataReceived(object sender, System.IO.Ports.SerialDataReceivedEventArgs e)
        {
            if (dataBox.IsHandleCreated)
            {
                this.Invoke((MethodInvoker)delegate
                {
                    dataBox.Text += UART.ReadExisting();
                    dataBox.SelectionStart = dataBox.TextLength;
                    dataBox.ScrollToCaret();
                });
            }
        }

        private void connectBtn_Click(object sender, EventArgs e)
        {
            try
            {
                UART.PortName = portBox.Text;
                UART.Open();
                connectBtn.Enabled = false;
                disconnectBtn.Enabled = true;
            }
            catch (Exception Ex)
            {
                MessageBox.Show(Ex.Message);
            }
        }

        private void disconnectBtn_Click(object sender, EventArgs e)
        {
            try
            {
                UART.DiscardInBuffer();
                UART.Close();
                disconnectBtn.Enabled = false;
                connectBtn.Enabled = true;
            }
            catch (Exception Ex)
            {
                MessageBox.Show(Ex.Message);
            }
        }

        private void onBtn_Click(object sender, EventArgs e)
        {
            try
            {
                UART.Write("1");
            }
            catch (Exception Ex)
            {
                MessageBox.Show(Ex.Message);
            }
        }

        private void offBtn_Click(object sender, EventArgs e)
        {
            try
            {
                UART.Write("0");
            }
            catch (Exception Ex)
            {
                MessageBox.Show(Ex.Message);
            }
        }
    }
}