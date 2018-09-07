using System;
using System.Net.Sockets;
using System.Windows.Forms;

namespace ServerChecker
{
    public partial class MainForm : Form
    {
        public MainForm()
        {
            InitializeComponent();
        }

        private void Check_Click(object sender, EventArgs e)
        {
            Result.Text = "[Server] Checking...";
            bool isDown = false;

            using (TcpClient client = new TcpClient())
            {
                try
                {
                    client.Connect(Hostname.Text, int.Parse(PortNumber.Text));
                    client.Client.Disconnect(true);
                }
                catch
                {
                    isDown = true;
                }
            }

            if (isDown)
                Result.Text = "[Server] Down";
            else
                Result.Text = "[Server] OK";
        }
    }
}
