namespace FORM_CS
{
    partial class UART_Form
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.UART = new System.IO.Ports.SerialPort(this.components);
            this.connectBtn = new System.Windows.Forms.Button();
            this.portBox = new System.Windows.Forms.ComboBox();
            this.label1 = new System.Windows.Forms.Label();
            this.dataBox = new System.Windows.Forms.TextBox();
            this.disconnectBtn = new System.Windows.Forms.Button();
            this.onBtn = new System.Windows.Forms.Button();
            this.offBtn = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // UART
            // 
            this.UART.DataReceived += new System.IO.Ports.SerialDataReceivedEventHandler(this.UART_DataReceived);
            // 
            // connectBtn
            // 
            this.connectBtn.BackColor = System.Drawing.SystemColors.ControlLight;
            this.connectBtn.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Center;
            this.connectBtn.Cursor = System.Windows.Forms.Cursors.Hand;
            this.connectBtn.FlatAppearance.BorderSize = 10;
            this.connectBtn.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.connectBtn.Location = new System.Drawing.Point(67, 111);
            this.connectBtn.Name = "connectBtn";
            this.connectBtn.Size = new System.Drawing.Size(189, 50);
            this.connectBtn.TabIndex = 0;
            this.connectBtn.Text = "Connect";
            this.connectBtn.UseVisualStyleBackColor = false;
            this.connectBtn.Click += new System.EventHandler(this.connectBtn_Click);
            // 
            // portBox
            // 
            this.portBox.FormattingEnabled = true;
            this.portBox.Location = new System.Drawing.Point(131, 62);
            this.portBox.Name = "portBox";
            this.portBox.Size = new System.Drawing.Size(125, 31);
            this.portBox.TabIndex = 1;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(63, 65);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(53, 23);
            this.label1.TabIndex = 2;
            this.label1.Text = "Port:";
            // 
            // dataBox
            // 
            this.dataBox.Location = new System.Drawing.Point(284, 62);
            this.dataBox.Multiline = true;
            this.dataBox.Name = "dataBox";
            this.dataBox.ScrollBars = System.Windows.Forms.ScrollBars.Both;
            this.dataBox.Size = new System.Drawing.Size(500, 230);
            this.dataBox.TabIndex = 3;
            // 
            // disconnectBtn
            // 
            this.disconnectBtn.BackColor = System.Drawing.SystemColors.ControlLight;
            this.disconnectBtn.Cursor = System.Windows.Forms.Cursors.Hand;
            this.disconnectBtn.Enabled = false;
            this.disconnectBtn.FlatAppearance.BorderSize = 10;
            this.disconnectBtn.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.disconnectBtn.Location = new System.Drawing.Point(67, 178);
            this.disconnectBtn.Name = "disconnectBtn";
            this.disconnectBtn.Size = new System.Drawing.Size(189, 50);
            this.disconnectBtn.TabIndex = 4;
            this.disconnectBtn.Text = "Disconnect";
            this.disconnectBtn.UseVisualStyleBackColor = false;
            this.disconnectBtn.Click += new System.EventHandler(this.disconnectBtn_Click);
            // 
            // onBtn
            // 
            this.onBtn.BackColor = System.Drawing.Color.Blue;
            this.onBtn.Cursor = System.Windows.Forms.Cursors.Hand;
            this.onBtn.FlatAppearance.BorderSize = 0;
            this.onBtn.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.onBtn.ForeColor = System.Drawing.Color.White;
            this.onBtn.Location = new System.Drawing.Point(67, 248);
            this.onBtn.Name = "onBtn";
            this.onBtn.Size = new System.Drawing.Size(82, 44);
            this.onBtn.TabIndex = 5;
            this.onBtn.Text = "ON";
            this.onBtn.UseVisualStyleBackColor = false;
            this.onBtn.Click += new System.EventHandler(this.onBtn_Click);
            // 
            // offBtn
            // 
            this.offBtn.BackColor = System.Drawing.Color.Blue;
            this.offBtn.Cursor = System.Windows.Forms.Cursors.Hand;
            this.offBtn.FlatAppearance.BorderSize = 0;
            this.offBtn.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.offBtn.ForeColor = System.Drawing.Color.White;
            this.offBtn.Location = new System.Drawing.Point(174, 248);
            this.offBtn.Name = "offBtn";
            this.offBtn.Size = new System.Drawing.Size(82, 44);
            this.offBtn.TabIndex = 6;
            this.offBtn.Text = "OFF";
            this.offBtn.UseVisualStyleBackColor = false;
            this.offBtn.Click += new System.EventHandler(this.offBtn_Click);
            // 
            // UART_Form
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(11F, 23F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(846, 345);
            this.Controls.Add(this.offBtn);
            this.Controls.Add(this.onBtn);
            this.Controls.Add(this.disconnectBtn);
            this.Controls.Add(this.dataBox);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.portBox);
            this.Controls.Add(this.connectBtn);
            this.Font = new System.Drawing.Font("Arial", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Margin = new System.Windows.Forms.Padding(4);
            this.Name = "UART_Form";
            this.Text = "HTerm By Danh";
            this.Load += new System.EventHandler(this.UART_Form_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.IO.Ports.SerialPort UART;
        private System.Windows.Forms.Button connectBtn;
        private System.Windows.Forms.ComboBox portBox;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox dataBox;
        private System.Windows.Forms.Button disconnectBtn;
        private System.Windows.Forms.Button onBtn;
        private System.Windows.Forms.Button offBtn;
    }
}

