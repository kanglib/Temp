namespace ServerChecker
{
    partial class MainForm
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다.
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
        /// </summary>
        private void InitializeComponent()
        {
            this.Hostname = new System.Windows.Forms.TextBox();
            this.Check = new System.Windows.Forms.Button();
            this.PortNumber = new System.Windows.Forms.MaskedTextBox();
            this.Result = new System.Windows.Forms.TextBox();
            this.BugReport = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // Hostname
            // 
            this.Hostname.Location = new System.Drawing.Point(12, 12);
            this.Hostname.Name = "Hostname";
            this.Hostname.Size = new System.Drawing.Size(182, 21);
            this.Hostname.TabIndex = 0;
            this.Hostname.Text = "nogcha1.nogcha.kr";
            // 
            // Check
            // 
            this.Check.Location = new System.Drawing.Point(119, 40);
            this.Check.Name = "Check";
            this.Check.Size = new System.Drawing.Size(75, 23);
            this.Check.TabIndex = 1;
            this.Check.Text = "체크";
            this.Check.UseVisualStyleBackColor = true;
            this.Check.Click += new System.EventHandler(this.Check_Click);
            // 
            // PortNumber
            // 
            this.PortNumber.Location = new System.Drawing.Point(13, 40);
            this.PortNumber.Mask = "99999";
            this.PortNumber.Name = "PortNumber";
            this.PortNumber.Size = new System.Drawing.Size(100, 21);
            this.PortNumber.TabIndex = 2;
            this.PortNumber.Text = "25565";
            this.PortNumber.ValidatingType = typeof(int);
            // 
            // Result
            // 
            this.Result.Location = new System.Drawing.Point(12, 69);
            this.Result.Name = "Result";
            this.Result.ReadOnly = true;
            this.Result.Size = new System.Drawing.Size(182, 21);
            this.Result.TabIndex = 3;
            this.Result.Text = "[Server] ";
            // 
            // BugReport
            // 
            this.BugReport.AutoSize = true;
            this.BugReport.Location = new System.Drawing.Point(11, 93);
            this.BugReport.Name = "BugReport";
            this.BugReport.Size = new System.Drawing.Size(183, 12);
            this.BugReport.TabIndex = 4;
            this.BugReport.Text = "Bug Report: kanglib@nogcha.kr";
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(206, 117);
            this.Controls.Add(this.BugReport);
            this.Controls.Add(this.Result);
            this.Controls.Add(this.PortNumber);
            this.Controls.Add(this.Check);
            this.Controls.Add(this.Hostname);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.Name = "MainForm";
            this.Text = "서버 체크하기";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox Hostname;
        private System.Windows.Forms.Button Check;
        private System.Windows.Forms.MaskedTextBox PortNumber;
        private System.Windows.Forms.TextBox Result;
        private System.Windows.Forms.Label BugReport;
    }
}

