﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Entrance
{
    public partial class Form1 : Form
    {
        private MiddleWare.ImageLoader _imageLoader = new MiddleWare.ImageLoader();

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            MessageBox.Show(_imageLoader.Test().ToString());
        }
    }
}
