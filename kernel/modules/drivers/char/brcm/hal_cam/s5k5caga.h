
#if 0

/*
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

V00_0815

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/

void Poppy_5CA_Ini_V00_110815(void)
{

// ARM GO
// Direct mode 
//s5k5caga_i2c_write(0xFCFC, 0xD000);
//------------------------------------------------s5k5caga_i2c_write(0x0010, 0x0001); 
// Reset-------------------------------------------
//s5k5caga_i2c_write(0x1030, 0x0000); // Clear host interrupt so main will wait
s5k5caga_i2c_write(0xfcfc, 0xD000);
s5k5caga_i2c_write(0x0010, 0x0001);
s5k5caga_i2c_write(0x1030, 0x0000);//disable_irq(81); /* Is it needed ??*/
s5k5caga_i2c_write(0x0014, 0x0001); // ARM go
mdelay(20);//FFFF 0014 // Min.10ms delay is required       

mdelay(100);//FFFF 0064   //Delay 100ms	

s5k5caga_i2c_write(0x0028, 0x7000); 

s5k5caga_i2c_write(0x002A, 0x2CF8); 

s5k5caga_i2c_write(0x0F12, 0xB510); 
s5k5caga_i2c_write(0x0F12, 0x4827); 
s5k5caga_i2c_write(0x0F12, 0x21C0); 
s5k5caga_i2c_write(0x0F12, 0x8041); 
s5k5caga_i2c_write(0x0F12, 0x4825); 
s5k5caga_i2c_write(0x0F12, 0x4A26); 
s5k5caga_i2c_write(0x0F12, 0x3020); 
s5k5caga_i2c_write(0x0F12, 0x8382); 
s5k5caga_i2c_write(0x0F12, 0x1D12); 
s5k5caga_i2c_write(0x0F12, 0x83C2); 
s5k5caga_i2c_write(0x0F12, 0x4822); 
s5k5caga_i2c_write(0x0F12, 0x3040); 
s5k5caga_i2c_write(0x0F12, 0x8041); 
s5k5caga_i2c_write(0x0F12, 0x4821); 
s5k5caga_i2c_write(0x0F12, 0x4922); 
s5k5caga_i2c_write(0x0F12, 0x3060); 
s5k5caga_i2c_write(0x0F12, 0x8381); 
s5k5caga_i2c_write(0x0F12, 0x1D09); 
s5k5caga_i2c_write(0x0F12, 0x83C1); 
s5k5caga_i2c_write(0x0F12, 0x4821); 
s5k5caga_i2c_write(0x0F12, 0x491D); 
s5k5caga_i2c_write(0x0F12, 0x8802); 
s5k5caga_i2c_write(0x0F12, 0x3980); 
s5k5caga_i2c_write(0x0F12, 0x804A); 
s5k5caga_i2c_write(0x0F12, 0x8842); 
s5k5caga_i2c_write(0x0F12, 0x808A); 
s5k5caga_i2c_write(0x0F12, 0x8882); 
s5k5caga_i2c_write(0x0F12, 0x80CA); 
s5k5caga_i2c_write(0x0F12, 0x88C2); 
s5k5caga_i2c_write(0x0F12, 0x810A); 
s5k5caga_i2c_write(0x0F12, 0x8902); 
s5k5caga_i2c_write(0x0F12, 0x491C); 
s5k5caga_i2c_write(0x0F12, 0x80CA); 
s5k5caga_i2c_write(0x0F12, 0x8942); 
s5k5caga_i2c_write(0x0F12, 0x814A); 
s5k5caga_i2c_write(0x0F12, 0x8982); 
s5k5caga_i2c_write(0x0F12, 0x830A); 
s5k5caga_i2c_write(0x0F12, 0x89C2); 
s5k5caga_i2c_write(0x0F12, 0x834A); 
s5k5caga_i2c_write(0x0F12, 0x8A00); 
s5k5caga_i2c_write(0x0F12, 0x4918); 
s5k5caga_i2c_write(0x0F12, 0x8188); 
s5k5caga_i2c_write(0x0F12, 0x4918); 
s5k5caga_i2c_write(0x0F12, 0x4819); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xFA0E); 
s5k5caga_i2c_write(0x0F12, 0x4918); 
s5k5caga_i2c_write(0x0F12, 0x4819); 
s5k5caga_i2c_write(0x0F12, 0x6341); 
s5k5caga_i2c_write(0x0F12, 0x4919); 
s5k5caga_i2c_write(0x0F12, 0x4819); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xFA07); 
s5k5caga_i2c_write(0x0F12, 0x4816); 
s5k5caga_i2c_write(0x0F12, 0x4918); 
s5k5caga_i2c_write(0x0F12, 0x3840); 
s5k5caga_i2c_write(0x0F12, 0x62C1); 
s5k5caga_i2c_write(0x0F12, 0x4918); 
s5k5caga_i2c_write(0x0F12, 0x3880); 
s5k5caga_i2c_write(0x0F12, 0x63C1); 
s5k5caga_i2c_write(0x0F12, 0x4917); 
s5k5caga_i2c_write(0x0F12, 0x6301); 
s5k5caga_i2c_write(0x0F12, 0x4917); 
s5k5caga_i2c_write(0x0F12, 0x3040); 
s5k5caga_i2c_write(0x0F12, 0x6181); 
s5k5caga_i2c_write(0x0F12, 0x4917); 
s5k5caga_i2c_write(0x0F12, 0x4817); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF9F7); 
s5k5caga_i2c_write(0x0F12, 0x4917); 
s5k5caga_i2c_write(0x0F12, 0x4817); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF9F3); 
s5k5caga_i2c_write(0x0F12, 0x4917); 
s5k5caga_i2c_write(0x0F12, 0x4817); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF9EF); 
s5k5caga_i2c_write(0x0F12, 0xBC10); 
s5k5caga_i2c_write(0x0F12, 0xBC08); 
s5k5caga_i2c_write(0x0F12, 0x4718); 
s5k5caga_i2c_write(0x0F12, 0x1100); 
s5k5caga_i2c_write(0x0F12, 0xD000); 
s5k5caga_i2c_write(0x0F12, 0x267C); 
s5k5caga_i2c_write(0x0F12, 0x0000); 
s5k5caga_i2c_write(0x0F12, 0x2CE8); 
s5k5caga_i2c_write(0x0F12, 0x0000); 
s5k5caga_i2c_write(0x0F12, 0x3274); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0xF400); 
s5k5caga_i2c_write(0x0F12, 0xD000); 
s5k5caga_i2c_write(0x0F12, 0xF520); 
s5k5caga_i2c_write(0x0F12, 0xD000); 
s5k5caga_i2c_write(0x0F12, 0x2DF1); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0x89A9); 
s5k5caga_i2c_write(0x0F12, 0x0000); 
s5k5caga_i2c_write(0x0F12, 0x2E43); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0x0140); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0x2E7D); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0xB4F7); 
s5k5caga_i2c_write(0x0F12, 0x0000); 
s5k5caga_i2c_write(0x0F12, 0x2F07); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0x2F2B); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0x2FD1); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0x2FE5); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0x2FB9); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0x013D); 
s5k5caga_i2c_write(0x0F12, 0x0001); 
s5k5caga_i2c_write(0x0F12, 0x306B); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0x5823); 
s5k5caga_i2c_write(0x0F12, 0x0000); 
s5k5caga_i2c_write(0x0F12, 0x30B9); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0xD789); 
s5k5caga_i2c_write(0x0F12, 0x0000); 
s5k5caga_i2c_write(0x0F12, 0xB570); 
s5k5caga_i2c_write(0x0F12, 0x6804); 
s5k5caga_i2c_write(0x0F12, 0x6845); 
s5k5caga_i2c_write(0x0F12, 0x6881); 
s5k5caga_i2c_write(0x0F12, 0x6840); 
s5k5caga_i2c_write(0x0F12, 0x2900); 
s5k5caga_i2c_write(0x0F12, 0x6880); 
s5k5caga_i2c_write(0x0F12, 0xD007); 
s5k5caga_i2c_write(0x0F12, 0x49C3); 
s5k5caga_i2c_write(0x0F12, 0x8949); 
s5k5caga_i2c_write(0x0F12, 0x084A); 
s5k5caga_i2c_write(0x0F12, 0x1880); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF9BA); 
s5k5caga_i2c_write(0x0F12, 0x80A0); 
s5k5caga_i2c_write(0x0F12, 0xE000); 
s5k5caga_i2c_write(0x0F12, 0x80A0); 
s5k5caga_i2c_write(0x0F12, 0x88A0); 
s5k5caga_i2c_write(0x0F12, 0x2800); 
s5k5caga_i2c_write(0x0F12, 0xD010); 
s5k5caga_i2c_write(0x0F12, 0x68A9); 
s5k5caga_i2c_write(0x0F12, 0x6828); 
s5k5caga_i2c_write(0x0F12, 0x084A); 
s5k5caga_i2c_write(0x0F12, 0x1880); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF9AE); 
s5k5caga_i2c_write(0x0F12, 0x8020); 
s5k5caga_i2c_write(0x0F12, 0x1D2D); 
s5k5caga_i2c_write(0x0F12, 0xCD03); 
s5k5caga_i2c_write(0x0F12, 0x084A); 
s5k5caga_i2c_write(0x0F12, 0x1880); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF9A7); 
s5k5caga_i2c_write(0x0F12, 0x8060); 
s5k5caga_i2c_write(0x0F12, 0xBC70); 
s5k5caga_i2c_write(0x0F12, 0xBC08); 
s5k5caga_i2c_write(0x0F12, 0x4718); 
s5k5caga_i2c_write(0x0F12, 0x2000); 
s5k5caga_i2c_write(0x0F12, 0x8060); 
s5k5caga_i2c_write(0x0F12, 0x8020); 
s5k5caga_i2c_write(0x0F12, 0xE7F8); 
s5k5caga_i2c_write(0x0F12, 0xB510); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF9A2); 
s5k5caga_i2c_write(0x0F12, 0x48B2); 
s5k5caga_i2c_write(0x0F12, 0x8A40); 
s5k5caga_i2c_write(0x0F12, 0x2800); 
s5k5caga_i2c_write(0x0F12, 0xD00C); 
s5k5caga_i2c_write(0x0F12, 0x48B1); 
s5k5caga_i2c_write(0x0F12, 0x49B2); 
s5k5caga_i2c_write(0x0F12, 0x8800); 
s5k5caga_i2c_write(0x0F12, 0x4AB2); 
s5k5caga_i2c_write(0x0F12, 0x2805); 
s5k5caga_i2c_write(0x0F12, 0xD003); 
s5k5caga_i2c_write(0x0F12, 0x4BB1); 
s5k5caga_i2c_write(0x0F12, 0x795B); 
s5k5caga_i2c_write(0x0F12, 0x2B00); 
s5k5caga_i2c_write(0x0F12, 0xD005); 
s5k5caga_i2c_write(0x0F12, 0x2001); 
s5k5caga_i2c_write(0x0F12, 0x8008); 
s5k5caga_i2c_write(0x0F12, 0x8010); 
s5k5caga_i2c_write(0x0F12, 0xBC10); 
s5k5caga_i2c_write(0x0F12, 0xBC08); 
s5k5caga_i2c_write(0x0F12, 0x4718); 
s5k5caga_i2c_write(0x0F12, 0x2800); 
s5k5caga_i2c_write(0x0F12, 0xD1FA); 
s5k5caga_i2c_write(0x0F12, 0x2000); 
s5k5caga_i2c_write(0x0F12, 0x8008); 
s5k5caga_i2c_write(0x0F12, 0x8010); 
s5k5caga_i2c_write(0x0F12, 0xE7F6); 
s5k5caga_i2c_write(0x0F12, 0xB5F8); 
s5k5caga_i2c_write(0x0F12, 0x2407); 
s5k5caga_i2c_write(0x0F12, 0x2C06); 
s5k5caga_i2c_write(0x0F12, 0xD035); 
s5k5caga_i2c_write(0x0F12, 0x2C07); 
s5k5caga_i2c_write(0x0F12, 0xD033); 
s5k5caga_i2c_write(0x0F12, 0x48A3); 
s5k5caga_i2c_write(0x0F12, 0x8BC1); 
s5k5caga_i2c_write(0x0F12, 0x2900); 
s5k5caga_i2c_write(0x0F12, 0xD02A); 
s5k5caga_i2c_write(0x0F12, 0x00A2); 
s5k5caga_i2c_write(0x0F12, 0x1815); 
s5k5caga_i2c_write(0x0F12, 0x4AA4); 
s5k5caga_i2c_write(0x0F12, 0x6DEE); 
s5k5caga_i2c_write(0x0F12, 0x8A92); 
s5k5caga_i2c_write(0x0F12, 0x4296); 
s5k5caga_i2c_write(0x0F12, 0xD923); 
s5k5caga_i2c_write(0x0F12, 0x0028); 
s5k5caga_i2c_write(0x0F12, 0x3080); 
s5k5caga_i2c_write(0x0F12, 0x0007); 
s5k5caga_i2c_write(0x0F12, 0x69C0); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF96B); 
s5k5caga_i2c_write(0x0F12, 0x1C71); 
s5k5caga_i2c_write(0x0F12, 0x0280); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF967); 
s5k5caga_i2c_write(0x0F12, 0x0006); 
s5k5caga_i2c_write(0x0F12, 0x4898); 
s5k5caga_i2c_write(0x0F12, 0x0061); 
s5k5caga_i2c_write(0x0F12, 0x1808); 
s5k5caga_i2c_write(0x0F12, 0x8D80); 
s5k5caga_i2c_write(0x0F12, 0x0A01); 
s5k5caga_i2c_write(0x0F12, 0x0600); 
s5k5caga_i2c_write(0x0F12, 0x0E00); 
s5k5caga_i2c_write(0x0F12, 0x1A08); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF96A); 
s5k5caga_i2c_write(0x0F12, 0x0002); 
s5k5caga_i2c_write(0x0F12, 0x6DE9); 
s5k5caga_i2c_write(0x0F12, 0x6FE8); 
s5k5caga_i2c_write(0x0F12, 0x1A08); 
s5k5caga_i2c_write(0x0F12, 0x4351); 
s5k5caga_i2c_write(0x0F12, 0x0300); 
s5k5caga_i2c_write(0x0F12, 0x1C49); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF953); 
s5k5caga_i2c_write(0x0F12, 0x0401); 
s5k5caga_i2c_write(0x0F12, 0x0430); 
s5k5caga_i2c_write(0x0F12, 0x0C00); 
s5k5caga_i2c_write(0x0F12, 0x4301); 
s5k5caga_i2c_write(0x0F12, 0x61F9); 
s5k5caga_i2c_write(0x0F12, 0xE004); 
s5k5caga_i2c_write(0x0F12, 0x00A2); 
s5k5caga_i2c_write(0x0F12, 0x4990); 
s5k5caga_i2c_write(0x0F12, 0x1810); 
s5k5caga_i2c_write(0x0F12, 0x3080); 
s5k5caga_i2c_write(0x0F12, 0x61C1); 
s5k5caga_i2c_write(0x0F12, 0x1E64); 
s5k5caga_i2c_write(0x0F12, 0xD2C5); 
s5k5caga_i2c_write(0x0F12, 0x2006); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF959); 
s5k5caga_i2c_write(0x0F12, 0x2007); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF956); 
s5k5caga_i2c_write(0x0F12, 0xBCF8); 
s5k5caga_i2c_write(0x0F12, 0xBC08); 
s5k5caga_i2c_write(0x0F12, 0x4718); 
s5k5caga_i2c_write(0x0F12, 0xB510); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF958); 
s5k5caga_i2c_write(0x0F12, 0x2800); 
s5k5caga_i2c_write(0x0F12, 0xD00A); 
s5k5caga_i2c_write(0x0F12, 0x4881); 
s5k5caga_i2c_write(0x0F12, 0x8B81); 
s5k5caga_i2c_write(0x0F12, 0x0089); 
s5k5caga_i2c_write(0x0F12, 0x1808); 
s5k5caga_i2c_write(0x0F12, 0x6DC1); 
s5k5caga_i2c_write(0x0F12, 0x4883); 
s5k5caga_i2c_write(0x0F12, 0x8A80); 
s5k5caga_i2c_write(0x0F12, 0x4281); 
s5k5caga_i2c_write(0x0F12, 0xD901); 
s5k5caga_i2c_write(0x0F12, 0x2001); 
s5k5caga_i2c_write(0x0F12, 0xE7A1); 
s5k5caga_i2c_write(0x0F12, 0x2000); 
s5k5caga_i2c_write(0x0F12, 0xE79F); 
s5k5caga_i2c_write(0x0F12, 0xB5F8); 
s5k5caga_i2c_write(0x0F12, 0x0004); 
s5k5caga_i2c_write(0x0F12, 0x4F80); 
s5k5caga_i2c_write(0x0F12, 0x227D); 
s5k5caga_i2c_write(0x0F12, 0x8938); 
s5k5caga_i2c_write(0x0F12, 0x0152); 
s5k5caga_i2c_write(0x0F12, 0x4342); 
s5k5caga_i2c_write(0x0F12, 0x487E); 
s5k5caga_i2c_write(0x0F12, 0x9000); 
s5k5caga_i2c_write(0x0F12, 0x8A01); 
s5k5caga_i2c_write(0x0F12, 0x0848); 
s5k5caga_i2c_write(0x0F12, 0x1810); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF91D); 
s5k5caga_i2c_write(0x0F12, 0x210F); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF940); 
s5k5caga_i2c_write(0x0F12, 0x497A); 
s5k5caga_i2c_write(0x0F12, 0x8C49); 
s5k5caga_i2c_write(0x0F12, 0x090E); 
s5k5caga_i2c_write(0x0F12, 0x0136); 
s5k5caga_i2c_write(0x0F12, 0x4306); 
s5k5caga_i2c_write(0x0F12, 0x4979); 
s5k5caga_i2c_write(0x0F12, 0x2C00); 
s5k5caga_i2c_write(0x0F12, 0xD003); 
s5k5caga_i2c_write(0x0F12, 0x2001); 
s5k5caga_i2c_write(0x0F12, 0x0240); 
s5k5caga_i2c_write(0x0F12, 0x4330); 
s5k5caga_i2c_write(0x0F12, 0x8108); 
s5k5caga_i2c_write(0x0F12, 0x4876); 
s5k5caga_i2c_write(0x0F12, 0x2C00); 
s5k5caga_i2c_write(0x0F12, 0x8D00); 
s5k5caga_i2c_write(0x0F12, 0xD001); 
s5k5caga_i2c_write(0x0F12, 0x2501); 
s5k5caga_i2c_write(0x0F12, 0xE000); 
s5k5caga_i2c_write(0x0F12, 0x2500); 
s5k5caga_i2c_write(0x0F12, 0x4972); 
s5k5caga_i2c_write(0x0F12, 0x4328); 
s5k5caga_i2c_write(0x0F12, 0x8008); 
s5k5caga_i2c_write(0x0F12, 0x207D); 
s5k5caga_i2c_write(0x0F12, 0x00C0); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF92E); 
s5k5caga_i2c_write(0x0F12, 0x2C00); 
s5k5caga_i2c_write(0x0F12, 0x496E); 
s5k5caga_i2c_write(0x0F12, 0x0328); 
s5k5caga_i2c_write(0x0F12, 0x4330); 
s5k5caga_i2c_write(0x0F12, 0x8108); 
s5k5caga_i2c_write(0x0F12, 0x88F8); 
s5k5caga_i2c_write(0x0F12, 0x2C00); 
s5k5caga_i2c_write(0x0F12, 0x01AA); 
s5k5caga_i2c_write(0x0F12, 0x4310); 
s5k5caga_i2c_write(0x0F12, 0x8088); 
s5k5caga_i2c_write(0x0F12, 0x9800); 
s5k5caga_i2c_write(0x0F12, 0x8A01); 
s5k5caga_i2c_write(0x0F12, 0x486A); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF8F1); 
s5k5caga_i2c_write(0x0F12, 0x496A); 
s5k5caga_i2c_write(0x0F12, 0x8809); 
s5k5caga_i2c_write(0x0F12, 0x4348); 
s5k5caga_i2c_write(0x0F12, 0x0400); 
s5k5caga_i2c_write(0x0F12, 0x0C00); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF918); 
s5k5caga_i2c_write(0x0F12, 0x0020); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF91D); 
s5k5caga_i2c_write(0x0F12, 0x4866); 
s5k5caga_i2c_write(0x0F12, 0x7004); 
s5k5caga_i2c_write(0x0F12, 0xE7A3); 
s5k5caga_i2c_write(0x0F12, 0xB510); 
s5k5caga_i2c_write(0x0F12, 0x0004); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF91E); 
s5k5caga_i2c_write(0x0F12, 0x6020); 
s5k5caga_i2c_write(0x0F12, 0x4963); 
s5k5caga_i2c_write(0x0F12, 0x8B49); 
s5k5caga_i2c_write(0x0F12, 0x0789); 
s5k5caga_i2c_write(0x0F12, 0xD001); 
s5k5caga_i2c_write(0x0F12, 0x0040); 
s5k5caga_i2c_write(0x0F12, 0x6020); 
s5k5caga_i2c_write(0x0F12, 0xE74C); 
s5k5caga_i2c_write(0x0F12, 0xB510); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF91B); 
s5k5caga_i2c_write(0x0F12, 0x485F); 
s5k5caga_i2c_write(0x0F12, 0x8880); 
s5k5caga_i2c_write(0x0F12, 0x0601); 
s5k5caga_i2c_write(0x0F12, 0x4854); 
s5k5caga_i2c_write(0x0F12, 0x1609); 
s5k5caga_i2c_write(0x0F12, 0x8141); 
s5k5caga_i2c_write(0x0F12, 0xE742); 
s5k5caga_i2c_write(0x0F12, 0xB5F8); 
s5k5caga_i2c_write(0x0F12, 0x000F); 
s5k5caga_i2c_write(0x0F12, 0x4C55); 
s5k5caga_i2c_write(0x0F12, 0x3420); 
s5k5caga_i2c_write(0x0F12, 0x2500); 
s5k5caga_i2c_write(0x0F12, 0x5765); 
s5k5caga_i2c_write(0x0F12, 0x0039); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF913); 
s5k5caga_i2c_write(0x0F12, 0x9000); 
s5k5caga_i2c_write(0x0F12, 0x2600); 
s5k5caga_i2c_write(0x0F12, 0x57A6); 
s5k5caga_i2c_write(0x0F12, 0x4C4C); 
s5k5caga_i2c_write(0x0F12, 0x42AE); 
s5k5caga_i2c_write(0x0F12, 0xD01B); 
s5k5caga_i2c_write(0x0F12, 0x4D54); 
s5k5caga_i2c_write(0x0F12, 0x8AE8); 
s5k5caga_i2c_write(0x0F12, 0x2800); 
s5k5caga_i2c_write(0x0F12, 0xD013); 
s5k5caga_i2c_write(0x0F12, 0x484D); 
s5k5caga_i2c_write(0x0F12, 0x8A01); 
s5k5caga_i2c_write(0x0F12, 0x8B80); 
s5k5caga_i2c_write(0x0F12, 0x4378); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF8B5); 
s5k5caga_i2c_write(0x0F12, 0x89A9); 
s5k5caga_i2c_write(0x0F12, 0x1A41); 
s5k5caga_i2c_write(0x0F12, 0x484E); 
s5k5caga_i2c_write(0x0F12, 0x3820); 
s5k5caga_i2c_write(0x0F12, 0x8AC0); 
s5k5caga_i2c_write(0x0F12, 0x4348); 
s5k5caga_i2c_write(0x0F12, 0x17C1); 
s5k5caga_i2c_write(0x0F12, 0x0D89); 
s5k5caga_i2c_write(0x0F12, 0x1808); 
s5k5caga_i2c_write(0x0F12, 0x1280); 
s5k5caga_i2c_write(0x0F12, 0x8961); 
s5k5caga_i2c_write(0x0F12, 0x1A08); 
s5k5caga_i2c_write(0x0F12, 0x8160); 
s5k5caga_i2c_write(0x0F12, 0xE003); 
s5k5caga_i2c_write(0x0F12, 0x88A8); 
s5k5caga_i2c_write(0x0F12, 0x0600); 
s5k5caga_i2c_write(0x0F12, 0x1600); 
s5k5caga_i2c_write(0x0F12, 0x8160); 
s5k5caga_i2c_write(0x0F12, 0x200A); 
s5k5caga_i2c_write(0x0F12, 0x5E20); 
s5k5caga_i2c_write(0x0F12, 0x42B0); 
s5k5caga_i2c_write(0x0F12, 0xD011); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF8AB); 
s5k5caga_i2c_write(0x0F12, 0x1D40); 
s5k5caga_i2c_write(0x0F12, 0x00C3); 
s5k5caga_i2c_write(0x0F12, 0x1A18); 
s5k5caga_i2c_write(0x0F12, 0x214B); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF897); 
s5k5caga_i2c_write(0x0F12, 0x211F); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF8BA); 
s5k5caga_i2c_write(0x0F12, 0x210A); 
s5k5caga_i2c_write(0x0F12, 0x5E61); 
s5k5caga_i2c_write(0x0F12, 0x0FC9); 
s5k5caga_i2c_write(0x0F12, 0x0149); 
s5k5caga_i2c_write(0x0F12, 0x4301); 
s5k5caga_i2c_write(0x0F12, 0x483D); 
s5k5caga_i2c_write(0x0F12, 0x81C1); 
s5k5caga_i2c_write(0x0F12, 0x9800); 
s5k5caga_i2c_write(0x0F12, 0xE74A); 
s5k5caga_i2c_write(0x0F12, 0xB5F1); 
s5k5caga_i2c_write(0x0F12, 0xB082); 
s5k5caga_i2c_write(0x0F12, 0x2500); 
s5k5caga_i2c_write(0x0F12, 0x483A); 
s5k5caga_i2c_write(0x0F12, 0x9001); 
s5k5caga_i2c_write(0x0F12, 0x2400); 
s5k5caga_i2c_write(0x0F12, 0x2028); 
s5k5caga_i2c_write(0x0F12, 0x4368); 
s5k5caga_i2c_write(0x0F12, 0x4A39); 
s5k5caga_i2c_write(0x0F12, 0x4925); 
s5k5caga_i2c_write(0x0F12, 0x1887); 
s5k5caga_i2c_write(0x0F12, 0x1840); 
s5k5caga_i2c_write(0x0F12, 0x9000); 
s5k5caga_i2c_write(0x0F12, 0x9800); 
s5k5caga_i2c_write(0x0F12, 0x0066); 
s5k5caga_i2c_write(0x0F12, 0x9A01); 
s5k5caga_i2c_write(0x0F12, 0x1980); 
s5k5caga_i2c_write(0x0F12, 0x218C); 
s5k5caga_i2c_write(0x0F12, 0x5A09); 
s5k5caga_i2c_write(0x0F12, 0x8A80); 
s5k5caga_i2c_write(0x0F12, 0x8812); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF8CA); 
s5k5caga_i2c_write(0x0F12, 0x53B8); 
s5k5caga_i2c_write(0x0F12, 0x1C64); 
s5k5caga_i2c_write(0x0F12, 0x2C14); 
s5k5caga_i2c_write(0x0F12, 0xDBF1); 
s5k5caga_i2c_write(0x0F12, 0x1C6D); 
s5k5caga_i2c_write(0x0F12, 0x2D03); 
s5k5caga_i2c_write(0x0F12, 0xDBE6); 
s5k5caga_i2c_write(0x0F12, 0x9802); 
s5k5caga_i2c_write(0x0F12, 0x6800); 
s5k5caga_i2c_write(0x0F12, 0x0600); 
s5k5caga_i2c_write(0x0F12, 0x0E00); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF8C5); 
s5k5caga_i2c_write(0x0F12, 0xBCFE); 
s5k5caga_i2c_write(0x0F12, 0xBC08); 
s5k5caga_i2c_write(0x0F12, 0x4718); 
s5k5caga_i2c_write(0x0F12, 0xB570); 
s5k5caga_i2c_write(0x0F12, 0x6805); 
s5k5caga_i2c_write(0x0F12, 0x2404); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF8C5); 
s5k5caga_i2c_write(0x0F12, 0x2800); 
s5k5caga_i2c_write(0x0F12, 0xD103); 
s5k5caga_i2c_write(0x0F12, 0xF000); 
s5k5caga_i2c_write(0x0F12, 0xF8C9); 
s5k5caga_i2c_write(0x0F12, 0x2800); 
s5k5caga_i2c_write(0x0F12, 0xD000); 
s5k5caga_i2c_write(0x0F12, 0x2400); 
s5k5caga_i2c_write(0x0F12, 0x3540); 
s5k5caga_i2c_write(0x0F12, 0x88E8); 
s5k5caga_i2c_write(0x0F12, 0x0500); 
s5k5caga_i2c_write(0x0F12, 0xD403); 
s5k5caga_i2c_write(0x0F12, 0x4822); 
s5k5caga_i2c_write(0x0F12, 0x89C0); 
s5k5caga_i2c_write(0x0F12, 0x2800); 
s5k5caga_i2c_write(0x0F12, 0xD002); 
s5k5caga_i2c_write(0x0F12, 0x2008); 
s5k5caga_i2c_write(0x0F12, 0x4304); 
s5k5caga_i2c_write(0x0F12, 0xE001); 
s5k5caga_i2c_write(0x0F12, 0x2010); 
s5k5caga_i2c_write(0x0F12, 0x4304); 
s5k5caga_i2c_write(0x0F12, 0x481F); 
s5k5caga_i2c_write(0x0F12, 0x8B80); 
s5k5caga_i2c_write(0x0F12, 0x0700); 
s5k5caga_i2c_write(0x0F12, 0x0F81); 
s5k5caga_i2c_write(0x0F12, 0x2001); 
s5k5caga_i2c_write(0x0F12, 0x2900); 
s5k5caga_i2c_write(0x0F12, 0xD000); 
s5k5caga_i2c_write(0x0F12, 0x4304); 
s5k5caga_i2c_write(0x0F12, 0x491C); 
s5k5caga_i2c_write(0x0F12, 0x8B0A); 
s5k5caga_i2c_write(0x0F12, 0x42A2); 
s5k5caga_i2c_write(0x0F12, 0xD004); 
s5k5caga_i2c_write(0x0F12, 0x0762); 
s5k5caga_i2c_write(0x0F12, 0xD502); 
s5k5caga_i2c_write(0x0F12, 0x4A19); 
s5k5caga_i2c_write(0x0F12, 0x3220); 
s5k5caga_i2c_write(0x0F12, 0x8110); 
s5k5caga_i2c_write(0x0F12, 0x830C); 
s5k5caga_i2c_write(0x0F12, 0xE691); 
s5k5caga_i2c_write(0x0F12, 0x0C3C); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0x3274); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0x26E8); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0x6100); 
s5k5caga_i2c_write(0x0F12, 0xD000); 
s5k5caga_i2c_write(0x0F12, 0x6500); 
s5k5caga_i2c_write(0x0F12, 0xD000); 
s5k5caga_i2c_write(0x0F12, 0x1A7C); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0x1120); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0xFFFF); 
s5k5caga_i2c_write(0x0F12, 0x0000); 
s5k5caga_i2c_write(0x0F12, 0x3374); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0x1D6C); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0x167C); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0xF400); 
s5k5caga_i2c_write(0x0F12, 0xD000); 
s5k5caga_i2c_write(0x0F12, 0x2C2C); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0x40A0); 
s5k5caga_i2c_write(0x0F12, 0x00DD); 
s5k5caga_i2c_write(0x0F12, 0xF520); 
s5k5caga_i2c_write(0x0F12, 0xD000); 
s5k5caga_i2c_write(0x0F12, 0x2C29); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0x1A54); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0x1564); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0xF2A0); 
s5k5caga_i2c_write(0x0F12, 0xD000); 
s5k5caga_i2c_write(0x0F12, 0x2440); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0x05A0); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0x2894); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0x1224); 
s5k5caga_i2c_write(0x0F12, 0x7000); 
s5k5caga_i2c_write(0x0F12, 0xB000); 
s5k5caga_i2c_write(0x0F12, 0xD000); 
s5k5caga_i2c_write(0x0F12, 0x4778); 
s5k5caga_i2c_write(0x0F12, 0x46C0); 
s5k5caga_i2c_write(0x0F12, 0xC000); 
s5k5caga_i2c_write(0x0F12, 0xE59F); 
s5k5caga_i2c_write(0x0F12, 0xFF1C); 
s5k5caga_i2c_write(0x0F12, 0xE12F); 
s5k5caga_i2c_write(0x0F12, 0x1A3F); 
s5k5caga_i2c_write(0x0F12, 0x0001); 
s5k5caga_i2c_write(0x0F12, 0x4778); 
s5k5caga_i2c_write(0x0F12, 0x46C0); 
s5k5caga_i2c_write(0x0F12, 0xF004); 
s5k5caga_i2c_write(0x0F12, 0xE51F); 
s5k5caga_i2c_write(0x0F12, 0x1F48); 
s5k5caga_i2c_write(0x0F12, 0x0001); 
s5k5caga_i2c_write(0x0F12, 0x4778); 
s5k5caga_i2c_write(0x0F12, 0x46C0); 
s5k5caga_i2c_write(0x0F12, 0xC000); 
s5k5caga_i2c_write(0x0F12, 0xE59F); 
s5k5caga_i2c_write(0x0F12, 0xFF1C); 
s5k5caga_i2c_write(0x0F12, 0xE12F); 
s5k5caga_i2c_write(0x0F12, 0x24BD); 
s5k5caga_i2c_write(0x0F12, 0x0000); 
s5k5caga_i2c_write(0x0F12, 0x4778); 
s5k5caga_i2c_write(0x0F12, 0x46C0); 
s5k5caga_i2c_write(0x0F12, 0xC000); 
s5k5caga_i2c_write(0x0F12, 0xE59F); 
s5k5caga_i2c_write(0x0F12, 0xFF1C); 
s5k5caga_i2c_write(0x0F12, 0xE12F); 
s5k5caga_i2c_write(0x0F12, 0x36DD); 
s5k5caga_i2c_write(0x0F12, 0x0000); 
s5k5caga_i2c_write(0x0F12, 0x4778); 
s5k5caga_i2c_write(0x0F12, 0x46C0); 
s5k5caga_i2c_write(0x0F12, 0xC000); 
s5k5caga_i2c_write(0x0F12, 0xE59F); 
s5k5caga_i2c_write(0x0F12, 0xFF1C); 
s5k5caga_i2c_write(0x0F12, 0xE12F); 
s5k5caga_i2c_write(0x0F12, 0xB4CF); 
s5k5caga_i2c_write(0x0F12, 0x0000); 
s5k5caga_i2c_write(0x0F12, 0x4778); 
s5k5caga_i2c_write(0x0F12, 0x46C0); 
s5k5caga_i2c_write(0x0F12, 0xC000); 
s5k5caga_i2c_write(0x0F12, 0xE59F); 
s5k5caga_i2c_write(0x0F12, 0xFF1C); 
s5k5caga_i2c_write(0x0F12, 0xE12F); 
s5k5caga_i2c_write(0x0F12, 0xB5D7); 
s5k5caga_i2c_write(0x0F12, 0x0000); 
s5k5caga_i2c_write(0x0F12, 0x4778); 
s5k5caga_i2c_write(0x0F12, 0x46C0); 
s5k5caga_i2c_write(0x0F12, 0xC000); 
s5k5caga_i2c_write(0x0F12, 0xE59F); 
s5k5caga_i2c_write(0x0F12, 0xFF1C); 
s5k5caga_i2c_write(0x0F12, 0xE12F); 
s5k5caga_i2c_write(0x0F12, 0x36ED); 
s5k5caga_i2c_write(0x0F12, 0x0000); 
s5k5caga_i2c_write(0x0F12, 0x4778); 
s5k5caga_i2c_write(0x0F12, 0x46C0); 
s5k5caga_i2c_write(0x0F12, 0xC000); 
s5k5caga_i2c_write(0x0F12, 0xE59F); 
s5k5caga_i2c_write(0x0F12, 0xFF1C); 
s5k5caga_i2c_write(0x0F12, 0xE12F); 
s5k5caga_i2c_write(0x0F12, 0xF53F); 
s5k5caga_i2c_write(0x0F12, 0x0000); 
s5k5caga_i2c_write(0x0F12, 0x4778); 
s5k5caga_i2c_write(0x0F12, 0x46C0); 
s5k5caga_i2c_write(0x0F12, 0xC000); 
s5k5caga_i2c_write(0x0F12, 0xE59F); 
s5k5caga_i2c_write(0x0F12, 0xFF1C); 
s5k5caga_i2c_write(0x0F12, 0xE12F); 
s5k5caga_i2c_write(0x0F12, 0xF5D9); 
s5k5caga_i2c_write(0x0F12, 0x0000); 
s5k5caga_i2c_write(0x0F12, 0x4778); 
s5k5caga_i2c_write(0x0F12, 0x46C0); 
s5k5caga_i2c_write(0x0F12, 0xC000); 
s5k5caga_i2c_write(0x0F12, 0xE59F); 
s5k5caga_i2c_write(0x0F12, 0xFF1C); 
s5k5caga_i2c_write(0x0F12, 0xE12F); 
s5k5caga_i2c_write(0x0F12, 0x013D); 
s5k5caga_i2c_write(0x0F12, 0x0001); 
s5k5caga_i2c_write(0x0F12, 0x4778); 
s5k5caga_i2c_write(0x0F12, 0x46C0); 
s5k5caga_i2c_write(0x0F12, 0xC000); 
s5k5caga_i2c_write(0x0F12, 0xE59F); 
s5k5caga_i2c_write(0x0F12, 0xFF1C); 
s5k5caga_i2c_write(0x0F12, 0xE12F); 
s5k5caga_i2c_write(0x0F12, 0xF5C9); 
s5k5caga_i2c_write(0x0F12, 0x0000); 
s5k5caga_i2c_write(0x0F12, 0x4778); 
s5k5caga_i2c_write(0x0F12, 0x46C0); 
s5k5caga_i2c_write(0x0F12, 0xC000); 
s5k5caga_i2c_write(0x0F12, 0xE59F); 
s5k5caga_i2c_write(0x0F12, 0xFF1C); 
s5k5caga_i2c_write(0x0F12, 0xE12F); 
s5k5caga_i2c_write(0x0F12, 0xFAA9); 
s5k5caga_i2c_write(0x0F12, 0x0000); 
s5k5caga_i2c_write(0x0F12, 0x4778); 
s5k5caga_i2c_write(0x0F12, 0x46C0); 
s5k5caga_i2c_write(0x0F12, 0xC000); 
s5k5caga_i2c_write(0x0F12, 0xE59F); 
s5k5caga_i2c_write(0x0F12, 0xFF1C); 
s5k5caga_i2c_write(0x0F12, 0xE12F); 
s5k5caga_i2c_write(0x0F12, 0x3723); 
s5k5caga_i2c_write(0x0F12, 0x0000); 
s5k5caga_i2c_write(0x0F12, 0x4778); 
s5k5caga_i2c_write(0x0F12, 0x46C0); 
s5k5caga_i2c_write(0x0F12, 0xC000); 
s5k5caga_i2c_write(0x0F12, 0xE59F); 
s5k5caga_i2c_write(0x0F12, 0xFF1C); 
s5k5caga_i2c_write(0x0F12, 0xE12F); 
s5k5caga_i2c_write(0x0F12, 0x5823); 
s5k5caga_i2c_write(0x0F12, 0x0000); 
s5k5caga_i2c_write(0x0F12, 0x4778); 
s5k5caga_i2c_write(0x0F12, 0x46C0); 
s5k5caga_i2c_write(0x0F12, 0xC000); 
s5k5caga_i2c_write(0x0F12, 0xE59F); 
s5k5caga_i2c_write(0x0F12, 0xFF1C); 
s5k5caga_i2c_write(0x0F12, 0xE12F); 
s5k5caga_i2c_write(0x0F12, 0xD771); 
s5k5caga_i2c_write(0x0F12, 0x0000); 
s5k5caga_i2c_write(0x0F12, 0x4778); 
s5k5caga_i2c_write(0x0F12, 0x46C0); 
s5k5caga_i2c_write(0x0F12, 0xC000); 
s5k5caga_i2c_write(0x0F12, 0xE59F); 
s5k5caga_i2c_write(0x0F12, 0xFF1C); 
s5k5caga_i2c_write(0x0F12, 0xE12F); 
s5k5caga_i2c_write(0x0F12, 0xD75B); 
s5k5caga_i2c_write(0x0F12, 0x0000); 
s5k5caga_i2c_write(0x0F12, 0x8117); 
s5k5caga_i2c_write(0x0F12, 0x0000); 
// End T&P part

//========================================================                      
// CIs/APs/An setting        - 400LsB  sYsCLK 32MHz                             
//========================================================                      
// This regis are for FACTORY ONLY. If you change it without prior notification,
// YOU are REsIBLE for the FAILURE that will happen in the future.              
//========================================================                      


s5k5caga_i2c_write(0x002A, 0x157A); 
s5k5caga_i2c_write(0x0F12, 0x0001); 
s5k5caga_i2c_write(0x002A, 0x1578); 
s5k5caga_i2c_write(0x0F12, 0x0001); 
s5k5caga_i2c_write(0x002A, 0x1576); 
s5k5caga_i2c_write(0x0F12, 0x0020); 
s5k5caga_i2c_write(0x002A, 0x1574); 
s5k5caga_i2c_write(0x0F12, 0x0006); 
s5k5caga_i2c_write(0x002A, 0x156E); 
s5k5caga_i2c_write(0x0F12, 0x0001); 	// slope calibration tolerance in units of 1/256	
s5k5caga_i2c_write(0x002A, 0x1568); 
s5k5caga_i2c_write(0x0F12, 0x00FC); 
      
//ADC control 
s5k5caga_i2c_write(0x002A, 0x155A); 
s5k5caga_i2c_write(0x0F12, 0x01CC); 	//ADC sAT of 450mV for 10bit default in EVT1                         	
s5k5caga_i2c_write(0x002A, 0x157E);                                                                         
s5k5caga_i2c_write(0x0F12, 0x0C80); 	// 3200 Max. Reset ramp DCLK counts (default 2048 0x800)             
s5k5caga_i2c_write(0x0F12, 0x0578); 	// 1400 Max. Reset ramp DCLK counts for x3.5                         
s5k5caga_i2c_write(0x002A, 0x157C);                                                                         
s5k5caga_i2c_write(0x0F12, 0x0190); 	// 400 Reset ramp for x1 in DCLK counts                              
s5k5caga_i2c_write(0x002A, 0x1570);                                                                         
s5k5caga_i2c_write(0x0F12, 0x00A0); 	// 160 LsB                                                           
s5k5caga_i2c_write(0x0F12, 0x0010); 	// reset threshold                                                   
s5k5caga_i2c_write(0x002A, 0x12C4);                                                                         
s5k5caga_i2c_write(0x0F12, 0x006A); 	// 106 additional timing columns.                                    
s5k5caga_i2c_write(0x002A, 0x12C8);                                                                         
s5k5caga_i2c_write(0x0F12, 0x08AC); 	// 2220 ADC columns in normal mode including Hold & Latch            
s5k5caga_i2c_write(0x0F12, 0x0050); 	// 80 addition of ADC columns in Y-ave mode (default 244 0x74)
      
s5k5caga_i2c_write(0x002A, 0x1696); 	// based on APs guidelines                        
s5k5caga_i2c_write(0x0F12, 0x0000);    // based on APs guidelines                        
s5k5caga_i2c_write(0x0F12, 0x0000);    // default. 1492 used for ADC dark characteristics
s5k5caga_i2c_write(0x0F12, 0x00C6);    // default. 1492 used for ADC dark characteristics
s5k5caga_i2c_write(0x0F12, 0x00C6);                                                                                                        
                                                                   
s5k5caga_i2c_write(0x002A, 0x1690);    // when set double sampling is activated - requires different set of pointers                                                 
s5k5caga_i2c_write(0x0F12, 0x0001);                                                      
                                                                   
s5k5caga_i2c_write(0x002A, 0x12B0);    // comp and pixel bias control 0xF40E - default for EVT1                                                                      
s5k5caga_i2c_write(0x0F12, 0x0055);    // comp and pixel bias control 0xF40E for binning mode                                                                        
s5k5caga_i2c_write(0x0F12, 0x005A);                                                      
                                                                   
s5k5caga_i2c_write(0x002A, 0x337A);    // [7] - is used for rest-only mode (EVT0 value is 0xD and HW 0x6)                                                            
s5k5caga_i2c_write(0x0F12, 0x0006); 
s5k5caga_i2c_write(0x0F12, 0x0068); 
s5k5caga_i2c_write(0x002A, 0x169E); 
s5k5caga_i2c_write(0x0F12, 0x0007); 
s5k5caga_i2c_write(0x002A, 0x0BF6); 
s5k5caga_i2c_write(0x0F12, 0x0000); 
	           
                 
s5k5caga_i2c_write(0x002A, 0x327C); 
s5k5caga_i2c_write(0x0F12, 0x1000); 
s5k5caga_i2c_write(0x0F12, 0x6998); 
s5k5caga_i2c_write(0x0F12, 0x0078); 
s5k5caga_i2c_write(0x0F12, 0x04FE); 
s5k5caga_i2c_write(0x0F12, 0x8800); 
                 
s5k5caga_i2c_write(0x002A, 0x3274); 
s5k5caga_i2c_write(0x0F12, 0x0155);    //set IO driving current 2mA for Gs500
s5k5caga_i2c_write(0x0F12, 0x0155);    //set IO driving current              
s5k5caga_i2c_write(0x0F12, 0x1555);    //set IO driving current              
s5k5caga_i2c_write(0x0F12, 0x05D5);    //set IO driving current              

s5k5caga_i2c_write(0x0028, 0x7000); 
s5k5caga_i2c_write(0x002A, 0x0572); 
s5k5caga_i2c_write(0x0F12, 0x0007); 	//#skl_usConfigStbySettings // Enable T&P code after HW stby + skip ZI part on HW wakeup.
                  
s5k5caga_i2c_write(0x0028, 0x7000); 	
s5k5caga_i2c_write(0x002A, 0x12D2); 	   
s5k5caga_i2c_write(0x0F12, 0x0003); 	//senHal_pContSenModesRegsArray[0][0]2 700012D2     
s5k5caga_i2c_write(0x0F12, 0x0003);    //senHal_pContSenModesRegsArray[0][1]2 700012D4  
s5k5caga_i2c_write(0x0F12, 0x0003);    //senHal_pContSenModesRegsArray[0][2]2 700012D6  
s5k5caga_i2c_write(0x0F12, 0x0003);    //senHal_pContSenModesRegsArray[0][3]2 700012D8  
s5k5caga_i2c_write(0x0F12, 0x0884);    //senHal_pContSenModesRegsArray[1][0]2 700012DA  
s5k5caga_i2c_write(0x0F12, 0x08CF);    //senHal_pContSenModesRegsArray[1][1]2 700012DC  
s5k5caga_i2c_write(0x0F12, 0x0500);    //senHal_pContSenModesRegsArray[1][2]2 700012DE  
s5k5caga_i2c_write(0x0F12, 0x054B);    //senHal_pContSenModesRegsArray[1][3]2 700012E0  
s5k5caga_i2c_write(0x0F12, 0x0001);    //senHal_pContSenModesRegsArray[2][0]2 700012E2  
s5k5caga_i2c_write(0x0F12, 0x0001);    //senHal_pContSenModesRegsArray[2][1]2 700012E4  
s5k5caga_i2c_write(0x0F12, 0x0001);    //senHal_pContSenModesRegsArray[2][2]2 700012E6  
s5k5caga_i2c_write(0x0F12, 0x0001);    //senHal_pContSenModesRegsArray[2][3]2 700012E8  
s5k5caga_i2c_write(0x0F12, 0x0885);    //senHal_pContSenModesRegsArray[3][0]2 700012EA  
s5k5caga_i2c_write(0x0F12, 0x0467);    //senHal_pContSenModesRegsArray[3][1]2 700012EC  
s5k5caga_i2c_write(0x0F12, 0x0501);    //senHal_pContSenModesRegsArray[3][2]2 700012EE  
s5k5caga_i2c_write(0x0F12, 0x02A5);    //senHal_pContSenModesRegsArray[3][3]2 700012F0  
s5k5caga_i2c_write(0x0F12, 0x0001);    //senHal_pContSenModesRegsArray[4][0]2 700012F2  
s5k5caga_i2c_write(0x0F12, 0x046A);    //senHal_pContSenModesRegsArray[4][1]2 700012F4  
s5k5caga_i2c_write(0x0F12, 0x0001);    //senHal_pContSenModesRegsArray[4][2]2 700012F6  
s5k5caga_i2c_write(0x0F12, 0x02A8);    //senHal_pContSenModesRegsArray[4][3]2 700012F8  
s5k5caga_i2c_write(0x0F12, 0x0885);    //senHal_pContSenModesRegsArray[5][0]2 700012FA  
s5k5caga_i2c_write(0x0F12, 0x08D0);    //senHal_pContSenModesRegsArray[5][1]2 700012FC  
s5k5caga_i2c_write(0x0F12, 0x0501);    //senHal_pContSenModesRegsArray[5][2]2 700012FE  
s5k5caga_i2c_write(0x0F12, 0x054C);    //senHal_pContSenModesRegsArray[5][3]2 70001300  
s5k5caga_i2c_write(0x0F12, 0x0006);    //senHal_pContSenModesRegsArray[6][0]2 70001302  
s5k5caga_i2c_write(0x0F12, 0x0020);    //senHal_pContSenModesRegsArray[6][1]2 70001304  
s5k5caga_i2c_write(0x0F12, 0x0006);    //senHal_pContSenModesRegsArray[6][2]2 70001306  
s5k5caga_i2c_write(0x0F12, 0x0020);    //senHal_pContSenModesRegsArray[6][3]2 70001308  
s5k5caga_i2c_write(0x0F12, 0x0881);    //senHal_pContSenModesRegsArray[7][0]2 7000130A  
s5k5caga_i2c_write(0x0F12, 0x0463);    //senHal_pContSenModesRegsArray[7][1]2 7000130C  
s5k5caga_i2c_write(0x0F12, 0x04FD);    //senHal_pContSenModesRegsArray[7][2]2 7000130E  
s5k5caga_i2c_write(0x0F12, 0x02A1);    //senHal_pContSenModesRegsArray[7][3]2 70001310  
s5k5caga_i2c_write(0x0F12, 0x0006);    //senHal_pContSenModesRegsArray[8][0]2 70001312  
s5k5caga_i2c_write(0x0F12, 0x0489);    //senHal_pContSenModesRegsArray[8][1]2 70001314  
s5k5caga_i2c_write(0x0F12, 0x0006);    //senHal_pContSenModesRegsArray[8][2]2 70001316  
s5k5caga_i2c_write(0x0F12, 0x02C7);    //senHal_pContSenModesRegsArray[8][3]2 70001318  
s5k5caga_i2c_write(0x0F12, 0x0881);    //senHal_pContSenModesRegsArray[9][0]2 7000131A  
s5k5caga_i2c_write(0x0F12, 0x08CC);    //senHal_pContSenModesRegsArray[9][1]2 7000131C  
s5k5caga_i2c_write(0x0F12, 0x04FD);    //senHal_pContSenModesRegsArray[9][2]2 7000131E  
s5k5caga_i2c_write(0x0F12, 0x0548);    //senHal_pContSenModesRegsArray[9][3]2 70001320  
s5k5caga_i2c_write(0x0F12, 0x03A2);    //senHal_pContSenModesRegsArray[10][0] 2 70001322
s5k5caga_i2c_write(0x0F12, 0x01D3);    //senHal_pContSenModesRegsArray[10][1] 2 70001324
s5k5caga_i2c_write(0x0F12, 0x01E0);    //senHal_pContSenModesRegsArray[10][2] 2 70001326
s5k5caga_i2c_write(0x0F12, 0x00F2);    //senHal_pContSenModesRegsArray[10][3] 2 70001328
s5k5caga_i2c_write(0x0F12, 0x03F2);    //senHal_pContSenModesRegsArray[11][0] 2 7000132A
s5k5caga_i2c_write(0x0F12, 0x0223);    //senHal_pContSenModesRegsArray[11][1] 2 7000132C
s5k5caga_i2c_write(0x0F12, 0x0230);    //senHal_pContSenModesRegsArray[11][2] 2 7000132E
s5k5caga_i2c_write(0x0F12, 0x0142);    //senHal_pContSenModesRegsArray[11][3] 2 70001330
s5k5caga_i2c_write(0x0F12, 0x03A2);    //senHal_pContSenModesRegsArray[12][0] 2 70001332
s5k5caga_i2c_write(0x0F12, 0x063C);    //senHal_pContSenModesRegsArray[12][1] 2 70001334
s5k5caga_i2c_write(0x0F12, 0x01E0);    //senHal_pContSenModesRegsArray[12][2] 2 70001336
s5k5caga_i2c_write(0x0F12, 0x0399);    //senHal_pContSenModesRegsArray[12][3] 2 70001338
s5k5caga_i2c_write(0x0F12, 0x03F2);    //senHal_pContSenModesRegsArray[13][0] 2 7000133A
s5k5caga_i2c_write(0x0F12, 0x068C);    //senHal_pContSenModesRegsArray[13][1] 2 7000133C
s5k5caga_i2c_write(0x0F12, 0x0230);    //senHal_pContSenModesRegsArray[13][2] 2 7000133E
s5k5caga_i2c_write(0x0F12, 0x03E9);    //senHal_pContSenModesRegsArray[13][3] 2 70001340
s5k5caga_i2c_write(0x0F12, 0x0002);    //senHal_pContSenModesRegsArray[14][0] 2 70001342
s5k5caga_i2c_write(0x0F12, 0x0002);    //senHal_pContSenModesRegsArray[14][1] 2 70001344
s5k5caga_i2c_write(0x0F12, 0x0002);    //senHal_pContSenModesRegsArray[14][2] 2 70001346
s5k5caga_i2c_write(0x0F12, 0x0002);    //senHal_pContSenModesRegsArray[14][3] 2 70001348
s5k5caga_i2c_write(0x0F12, 0x003C);    //senHal_pContSenModesRegsArray[15][0] 2 7000134A
s5k5caga_i2c_write(0x0F12, 0x003C);    //senHal_pContSenModesRegsArray[15][1] 2 7000134C
s5k5caga_i2c_write(0x0F12, 0x003C);    //senHal_pContSenModesRegsArray[15][2] 2 7000134E
s5k5caga_i2c_write(0x0F12, 0x003C);    //senHal_pContSenModesRegsArray[15][3] 2 70001350
s5k5caga_i2c_write(0x0F12, 0x01D3);    //senHal_pContSenModesRegsArray[16][0] 2 70001352
s5k5caga_i2c_write(0x0F12, 0x01D3);    //senHal_pContSenModesRegsArray[16][1] 2 70001354
s5k5caga_i2c_write(0x0F12, 0x00F2);    //senHal_pContSenModesRegsArray[16][2] 2 70001356
s5k5caga_i2c_write(0x0F12, 0x00F2);    //senHal_pContSenModesRegsArray[16][3] 2 70001358
s5k5caga_i2c_write(0x0F12, 0x020B);    //senHal_pContSenModesRegsArray[17][0] 2 7000135A
s5k5caga_i2c_write(0x0F12, 0x024A);    //senHal_pContSenModesRegsArray[17][1] 2 7000135C
s5k5caga_i2c_write(0x0F12, 0x012A);    //senHal_pContSenModesRegsArray[17][2] 2 7000135E
s5k5caga_i2c_write(0x0F12, 0x0169);    //senHal_pContSenModesRegsArray[17][3] 2 70001360
s5k5caga_i2c_write(0x0F12, 0x0002);    //senHal_pContSenModesRegsArray[18][0] 2 70001362
s5k5caga_i2c_write(0x0F12, 0x046B);    //senHal_pContSenModesRegsArray[18][1] 2 70001364
s5k5caga_i2c_write(0x0F12, 0x0002);    //senHal_pContSenModesRegsArray[18][2] 2 70001366
s5k5caga_i2c_write(0x0F12, 0x02A9);    //senHal_pContSenModesRegsArray[18][3] 2 70001368
s5k5caga_i2c_write(0x0F12, 0x0419);    //senHal_pContSenModesRegsArray[19][0] 2 7000136A
s5k5caga_i2c_write(0x0F12, 0x04A5);    //senHal_pContSenModesRegsArray[19][1] 2 7000136C
s5k5caga_i2c_write(0x0F12, 0x0257);    //senHal_pContSenModesRegsArray[19][2] 2 7000136E
s5k5caga_i2c_write(0x0F12, 0x02E3);    //senHal_pContSenModesRegsArray[19][3] 2 70001370
s5k5caga_i2c_write(0x0F12, 0x0630);    //senHal_pContSenModesRegsArray[20][0] 2 70001372
s5k5caga_i2c_write(0x0F12, 0x063C);    //senHal_pContSenModesRegsArray[20][1] 2 70001374
s5k5caga_i2c_write(0x0F12, 0x038D);    //senHal_pContSenModesRegsArray[20][2] 2 70001376
s5k5caga_i2c_write(0x0F12, 0x0399);    //senHal_pContSenModesRegsArray[20][3] 2 70001378
s5k5caga_i2c_write(0x0F12, 0x0668);    //senHal_pContSenModesRegsArray[21][0] 2 7000137A
s5k5caga_i2c_write(0x0F12, 0x06B3);    //senHal_pContSenModesRegsArray[21][1] 2 7000137C
s5k5caga_i2c_write(0x0F12, 0x03C5);    //senHal_pContSenModesRegsArray[21][2] 2 7000137E
s5k5caga_i2c_write(0x0F12, 0x0410);    //senHal_pContSenModesRegsArray[21][3] 2 70001380
s5k5caga_i2c_write(0x0F12, 0x0001);    //senHal_pContSenModesRegsArray[22][0] 2 70001382
s5k5caga_i2c_write(0x0F12, 0x0001);    //senHal_pContSenModesRegsArray[22][1] 2 70001384
s5k5caga_i2c_write(0x0F12, 0x0001);    //senHal_pContSenModesRegsArray[22][2] 2 70001386
s5k5caga_i2c_write(0x0F12, 0x0001);    //senHal_pContSenModesRegsArray[22][3] 2 70001388
s5k5caga_i2c_write(0x0F12, 0x03A2);    //senHal_pContSenModesRegsArray[23][0] 2 7000138A
s5k5caga_i2c_write(0x0F12, 0x01D3);    //senHal_pContSenModesRegsArray[23][1] 2 7000138C
s5k5caga_i2c_write(0x0F12, 0x01E0);    //senHal_pContSenModesRegsArray[23][2] 2 7000138E
s5k5caga_i2c_write(0x0F12, 0x00F2);    //senHal_pContSenModesRegsArray[23][3] 2 70001390
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[24][0] 2 70001392
s5k5caga_i2c_write(0x0F12, 0x0461);    //senHal_pContSenModesRegsArray[24][1] 2 70001394
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[24][2] 2 70001396
s5k5caga_i2c_write(0x0F12, 0x029F);    //senHal_pContSenModesRegsArray[24][3] 2 70001398
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[25][0] 2 7000139A
s5k5caga_i2c_write(0x0F12, 0x063C);    //senHal_pContSenModesRegsArray[25][1] 2 7000139C
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[25][2] 2 7000139E
s5k5caga_i2c_write(0x0F12, 0x0399);    //senHal_pContSenModesRegsArray[25][3] 2 700013A0
s5k5caga_i2c_write(0x0F12, 0x003D);    //senHal_pContSenModesRegsArray[26][0] 2 700013A2
s5k5caga_i2c_write(0x0F12, 0x003D);    //senHal_pContSenModesRegsArray[26][1] 2 700013A4
s5k5caga_i2c_write(0x0F12, 0x003D);    //senHal_pContSenModesRegsArray[26][2] 2 700013A6
s5k5caga_i2c_write(0x0F12, 0x003D);    //senHal_pContSenModesRegsArray[26][3] 2 700013A8
s5k5caga_i2c_write(0x0F12, 0x01D0);    //senHal_pContSenModesRegsArray[27][0] 2 700013AA
s5k5caga_i2c_write(0x0F12, 0x01D0);    //senHal_pContSenModesRegsArray[27][1] 2 700013AC
s5k5caga_i2c_write(0x0F12, 0x00EF);    //senHal_pContSenModesRegsArray[27][2] 2 700013AE
s5k5caga_i2c_write(0x0F12, 0x00EF);    //senHal_pContSenModesRegsArray[27][3] 2 700013B0
s5k5caga_i2c_write(0x0F12, 0x020C);    //senHal_pContSenModesRegsArray[28][0] 2 700013B2
s5k5caga_i2c_write(0x0F12, 0x024B);    //senHal_pContSenModesRegsArray[28][1] 2 700013B4
s5k5caga_i2c_write(0x0F12, 0x012B);    //senHal_pContSenModesRegsArray[28][2] 2 700013B6
s5k5caga_i2c_write(0x0F12, 0x016A);    //senHal_pContSenModesRegsArray[28][3] 2 700013B8
s5k5caga_i2c_write(0x0F12, 0x039F);    //senHal_pContSenModesRegsArray[29][0] 2 700013BA
s5k5caga_i2c_write(0x0F12, 0x045E);    //senHal_pContSenModesRegsArray[29][1] 2 700013BC
s5k5caga_i2c_write(0x0F12, 0x01DD);    //senHal_pContSenModesRegsArray[29][2] 2 700013BE
s5k5caga_i2c_write(0x0F12, 0x029C);    //senHal_pContSenModesRegsArray[29][3] 2 700013C0
s5k5caga_i2c_write(0x0F12, 0x041A);    //senHal_pContSenModesRegsArray[30][0] 2 700013C2
s5k5caga_i2c_write(0x0F12, 0x04A6);    //senHal_pContSenModesRegsArray[30][1] 2 700013C4
s5k5caga_i2c_write(0x0F12, 0x0258);    //senHal_pContSenModesRegsArray[30][2] 2 700013C6
s5k5caga_i2c_write(0x0F12, 0x02E4);    //senHal_pContSenModesRegsArray[30][3] 2 700013C8
s5k5caga_i2c_write(0x0F12, 0x062D);    //senHal_pContSenModesRegsArray[31][0] 2 700013CA
s5k5caga_i2c_write(0x0F12, 0x0639);    //senHal_pContSenModesRegsArray[31][1] 2 700013CC
s5k5caga_i2c_write(0x0F12, 0x038A);    //senHal_pContSenModesRegsArray[31][2] 2 700013CE
s5k5caga_i2c_write(0x0F12, 0x0396);    //senHal_pContSenModesRegsArray[31][3] 2 700013D0
s5k5caga_i2c_write(0x0F12, 0x0669);    //senHal_pContSenModesRegsArray[32][0] 2 700013D2
s5k5caga_i2c_write(0x0F12, 0x06B4);    //senHal_pContSenModesRegsArray[32][1] 2 700013D4
s5k5caga_i2c_write(0x0F12, 0x03C6);    //senHal_pContSenModesRegsArray[32][2] 2 700013D6
s5k5caga_i2c_write(0x0F12, 0x0411);    //senHal_pContSenModesRegsArray[32][3] 2 700013D8
s5k5caga_i2c_write(0x0F12, 0x087C);    //senHal_pContSenModesRegsArray[33][0] 2 700013DA
s5k5caga_i2c_write(0x0F12, 0x08C7);    //senHal_pContSenModesRegsArray[33][1] 2 700013DC
s5k5caga_i2c_write(0x0F12, 0x04F8);    //senHal_pContSenModesRegsArray[33][2] 2 700013DE
s5k5caga_i2c_write(0x0F12, 0x0543);    //senHal_pContSenModesRegsArray[33][3] 2 700013E0
s5k5caga_i2c_write(0x0F12, 0x0040);    //senHal_pContSenModesRegsArray[34][0] 2 700013E2
s5k5caga_i2c_write(0x0F12, 0x0040);    //senHal_pContSenModesRegsArray[34][1] 2 700013E4
s5k5caga_i2c_write(0x0F12, 0x0040);    //senHal_pContSenModesRegsArray[34][2] 2 700013E6
s5k5caga_i2c_write(0x0F12, 0x0040);    //senHal_pContSenModesRegsArray[34][3] 2 700013E8
s5k5caga_i2c_write(0x0F12, 0x01D0);    //senHal_pContSenModesRegsArray[35][0] 2 700013EA
s5k5caga_i2c_write(0x0F12, 0x01D0);    //senHal_pContSenModesRegsArray[35][1] 2 700013EC
s5k5caga_i2c_write(0x0F12, 0x00EF);    //senHal_pContSenModesRegsArray[35][2] 2 700013EE
s5k5caga_i2c_write(0x0F12, 0x00EF);    //senHal_pContSenModesRegsArray[35][3] 2 700013F0
s5k5caga_i2c_write(0x0F12, 0x020F);    //senHal_pContSenModesRegsArray[36][0] 2 700013F2
s5k5caga_i2c_write(0x0F12, 0x024E);    //senHal_pContSenModesRegsArray[36][1] 2 700013F4
s5k5caga_i2c_write(0x0F12, 0x012E);    //senHal_pContSenModesRegsArray[36][2] 2 700013F6
s5k5caga_i2c_write(0x0F12, 0x016D);    //senHal_pContSenModesRegsArray[36][3] 2 700013F8
s5k5caga_i2c_write(0x0F12, 0x039F);    //senHal_pContSenModesRegsArray[37][0] 2 700013FA
s5k5caga_i2c_write(0x0F12, 0x045E);    //senHal_pContSenModesRegsArray[37][1] 2 700013FC
s5k5caga_i2c_write(0x0F12, 0x01DD);    //senHal_pContSenModesRegsArray[37][2] 2 700013FE
s5k5caga_i2c_write(0x0F12, 0x029C);    //senHal_pContSenModesRegsArray[37][3] 2 70001400
s5k5caga_i2c_write(0x0F12, 0x041D);    //senHal_pContSenModesRegsArray[38][0] 2 70001402
s5k5caga_i2c_write(0x0F12, 0x04A9);    //senHal_pContSenModesRegsArray[38][1] 2 70001404
s5k5caga_i2c_write(0x0F12, 0x025B);    //senHal_pContSenModesRegsArray[38][2] 2 70001406
s5k5caga_i2c_write(0x0F12, 0x02E7);    //senHal_pContSenModesRegsArray[38][3] 2 70001408
s5k5caga_i2c_write(0x0F12, 0x062D);    //senHal_pContSenModesRegsArray[39][0] 2 7000140A
s5k5caga_i2c_write(0x0F12, 0x0639);    //senHal_pContSenModesRegsArray[39][1] 2 7000140C
s5k5caga_i2c_write(0x0F12, 0x038A);    //senHal_pContSenModesRegsArray[39][2] 2 7000140E
s5k5caga_i2c_write(0x0F12, 0x0396);    //senHal_pContSenModesRegsArray[39][3] 2 70001410
s5k5caga_i2c_write(0x0F12, 0x066C);    //senHal_pContSenModesRegsArray[40][0] 2 70001412
s5k5caga_i2c_write(0x0F12, 0x06B7);    //senHal_pContSenModesRegsArray[40][1] 2 70001414
s5k5caga_i2c_write(0x0F12, 0x03C9);    //senHal_pContSenModesRegsArray[40][2] 2 70001416
s5k5caga_i2c_write(0x0F12, 0x0414);    //senHal_pContSenModesRegsArray[40][3] 2 70001418
s5k5caga_i2c_write(0x0F12, 0x087C);    //senHal_pContSenModesRegsArray[41][0] 2 7000141A
s5k5caga_i2c_write(0x0F12, 0x08C7);    //senHal_pContSenModesRegsArray[41][1] 2 7000141C
s5k5caga_i2c_write(0x0F12, 0x04F8);    //senHal_pContSenModesRegsArray[41][2] 2 7000141E
s5k5caga_i2c_write(0x0F12, 0x0543);    //senHal_pContSenModesRegsArray[41][3] 2 70001420
s5k5caga_i2c_write(0x0F12, 0x0040);    //senHal_pContSenModesRegsArray[42][0] 2 70001422
s5k5caga_i2c_write(0x0F12, 0x0040);    //senHal_pContSenModesRegsArray[42][1] 2 70001424
s5k5caga_i2c_write(0x0F12, 0x0040);    //senHal_pContSenModesRegsArray[42][2] 2 70001426
s5k5caga_i2c_write(0x0F12, 0x0040);    //senHal_pContSenModesRegsArray[42][3] 2 70001428
s5k5caga_i2c_write(0x0F12, 0x01D0);    //senHal_pContSenModesRegsArray[43][0] 2 7000142A
s5k5caga_i2c_write(0x0F12, 0x01D0);    //senHal_pContSenModesRegsArray[43][1] 2 7000142C
s5k5caga_i2c_write(0x0F12, 0x00EF);    //senHal_pContSenModesRegsArray[43][2] 2 7000142E
s5k5caga_i2c_write(0x0F12, 0x00EF);    //senHal_pContSenModesRegsArray[43][3] 2 70001430
s5k5caga_i2c_write(0x0F12, 0x020F);    //senHal_pContSenModesRegsArray[44][0] 2 70001432
s5k5caga_i2c_write(0x0F12, 0x024E);    //senHal_pContSenModesRegsArray[44][1] 2 70001434
s5k5caga_i2c_write(0x0F12, 0x012E);    //senHal_pContSenModesRegsArray[44][2] 2 70001436
s5k5caga_i2c_write(0x0F12, 0x016D);    //senHal_pContSenModesRegsArray[44][3] 2 70001438
s5k5caga_i2c_write(0x0F12, 0x039F);    //senHal_pContSenModesRegsArray[45][0] 2 7000143A
s5k5caga_i2c_write(0x0F12, 0x045E);    //senHal_pContSenModesRegsArray[45][1] 2 7000143C
s5k5caga_i2c_write(0x0F12, 0x01DD);    //senHal_pContSenModesRegsArray[45][2] 2 7000143E
s5k5caga_i2c_write(0x0F12, 0x029C);    //senHal_pContSenModesRegsArray[45][3] 2 70001440
s5k5caga_i2c_write(0x0F12, 0x041D);    //senHal_pContSenModesRegsArray[46][0] 2 70001442
s5k5caga_i2c_write(0x0F12, 0x04A9);    //senHal_pContSenModesRegsArray[46][1] 2 70001444
s5k5caga_i2c_write(0x0F12, 0x025B);    //senHal_pContSenModesRegsArray[46][2] 2 70001446
s5k5caga_i2c_write(0x0F12, 0x02E7);    //senHal_pContSenModesRegsArray[46][3] 2 70001448
s5k5caga_i2c_write(0x0F12, 0x062D);    //senHal_pContSenModesRegsArray[47][0] 2 7000144A
s5k5caga_i2c_write(0x0F12, 0x0639);    //senHal_pContSenModesRegsArray[47][1] 2 7000144C
s5k5caga_i2c_write(0x0F12, 0x038A);    //senHal_pContSenModesRegsArray[47][2] 2 7000144E
s5k5caga_i2c_write(0x0F12, 0x0396);    //senHal_pContSenModesRegsArray[47][3] 2 70001450
s5k5caga_i2c_write(0x0F12, 0x066C);    //senHal_pContSenModesRegsArray[48][0] 2 70001452
s5k5caga_i2c_write(0x0F12, 0x06B7);    //senHal_pContSenModesRegsArray[48][1] 2 70001454
s5k5caga_i2c_write(0x0F12, 0x03C9);    //senHal_pContSenModesRegsArray[48][2] 2 70001456
s5k5caga_i2c_write(0x0F12, 0x0414);    //senHal_pContSenModesRegsArray[48][3] 2 70001458
s5k5caga_i2c_write(0x0F12, 0x087C);    //senHal_pContSenModesRegsArray[49][0] 2 7000145A
s5k5caga_i2c_write(0x0F12, 0x08C7);    //senHal_pContSenModesRegsArray[49][1] 2 7000145C
s5k5caga_i2c_write(0x0F12, 0x04F8);    //senHal_pContSenModesRegsArray[49][2] 2 7000145E
s5k5caga_i2c_write(0x0F12, 0x0543);    //senHal_pContSenModesRegsArray[49][3] 2 70001460
s5k5caga_i2c_write(0x0F12, 0x003D);    //senHal_pContSenModesRegsArray[50][0] 2 70001462
s5k5caga_i2c_write(0x0F12, 0x003D);    //senHal_pContSenModesRegsArray[50][1] 2 70001464
s5k5caga_i2c_write(0x0F12, 0x003D);    //senHal_pContSenModesRegsArray[50][2] 2 70001466
s5k5caga_i2c_write(0x0F12, 0x003D);    //senHal_pContSenModesRegsArray[50][3] 2 70001468
s5k5caga_i2c_write(0x0F12, 0x01D2);    //senHal_pContSenModesRegsArray[51][0] 2 7000146A
s5k5caga_i2c_write(0x0F12, 0x01D2);    //senHal_pContSenModesRegsArray[51][1] 2 7000146C
s5k5caga_i2c_write(0x0F12, 0x00F1);    //senHal_pContSenModesRegsArray[51][2] 2 7000146E
s5k5caga_i2c_write(0x0F12, 0x00F1);    //senHal_pContSenModesRegsArray[51][3] 2 70001470
s5k5caga_i2c_write(0x0F12, 0x020C);    //senHal_pContSenModesRegsArray[52][0] 2 70001472
s5k5caga_i2c_write(0x0F12, 0x024B);    //senHal_pContSenModesRegsArray[52][1] 2 70001474
s5k5caga_i2c_write(0x0F12, 0x012B);    //senHal_pContSenModesRegsArray[52][2] 2 70001476
s5k5caga_i2c_write(0x0F12, 0x016A);    //senHal_pContSenModesRegsArray[52][3] 2 70001478
s5k5caga_i2c_write(0x0F12, 0x03A1);    //senHal_pContSenModesRegsArray[53][0] 2 7000147A
s5k5caga_i2c_write(0x0F12, 0x0460);    //senHal_pContSenModesRegsArray[53][1] 2 7000147C
s5k5caga_i2c_write(0x0F12, 0x01DF);    //senHal_pContSenModesRegsArray[53][2] 2 7000147E
s5k5caga_i2c_write(0x0F12, 0x029E);    //senHal_pContSenModesRegsArray[53][3] 2 70001480
s5k5caga_i2c_write(0x0F12, 0x041A);    //senHal_pContSenModesRegsArray[54][0] 2 70001482
s5k5caga_i2c_write(0x0F12, 0x04A6);    //senHal_pContSenModesRegsArray[54][1] 2 70001484
s5k5caga_i2c_write(0x0F12, 0x0258);    //senHal_pContSenModesRegsArray[54][2] 2 70001486
s5k5caga_i2c_write(0x0F12, 0x02E4);    //senHal_pContSenModesRegsArray[54][3] 2 70001488
s5k5caga_i2c_write(0x0F12, 0x062F);    //senHal_pContSenModesRegsArray[55][0] 2 7000148A
s5k5caga_i2c_write(0x0F12, 0x063B);    //senHal_pContSenModesRegsArray[55][1] 2 7000148C
s5k5caga_i2c_write(0x0F12, 0x038C);    //senHal_pContSenModesRegsArray[55][2] 2 7000148E
s5k5caga_i2c_write(0x0F12, 0x0398);    //senHal_pContSenModesRegsArray[55][3] 2 70001490
s5k5caga_i2c_write(0x0F12, 0x0669);    //senHal_pContSenModesRegsArray[56][0] 2 70001492
s5k5caga_i2c_write(0x0F12, 0x06B4);    //senHal_pContSenModesRegsArray[56][1] 2 70001494
s5k5caga_i2c_write(0x0F12, 0x03C6);    //senHal_pContSenModesRegsArray[56][2] 2 70001496
s5k5caga_i2c_write(0x0F12, 0x0411);    //senHal_pContSenModesRegsArray[56][3] 2 70001498
s5k5caga_i2c_write(0x0F12, 0x087E);    //senHal_pContSenModesRegsArray[57][0] 2 7000149A
s5k5caga_i2c_write(0x0F12, 0x08C9);    //senHal_pContSenModesRegsArray[57][1] 2 7000149C
s5k5caga_i2c_write(0x0F12, 0x04FA);    //senHal_pContSenModesRegsArray[57][2] 2 7000149E
s5k5caga_i2c_write(0x0F12, 0x0545);    //senHal_pContSenModesRegsArray[57][3] 2 700014A0
s5k5caga_i2c_write(0x0F12, 0x03A2);    //senHal_pContSenModesRegsArray[58][0] 2 700014A2
s5k5caga_i2c_write(0x0F12, 0x01D3);    //senHal_pContSenModesRegsArray[58][1] 2 700014A4
s5k5caga_i2c_write(0x0F12, 0x01E0);    //senHal_pContSenModesRegsArray[58][2] 2 700014A6
s5k5caga_i2c_write(0x0F12, 0x00F2);    //senHal_pContSenModesRegsArray[58][3] 2 700014A8
s5k5caga_i2c_write(0x0F12, 0x03AF);    //senHal_pContSenModesRegsArray[59][0] 2 700014AA
s5k5caga_i2c_write(0x0F12, 0x01E0);    //senHal_pContSenModesRegsArray[59][1] 2 700014AC
s5k5caga_i2c_write(0x0F12, 0x01ED);    //senHal_pContSenModesRegsArray[59][2] 2 700014AE
s5k5caga_i2c_write(0x0F12, 0x00FF);    //senHal_pContSenModesRegsArray[59][3] 2 700014B0
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[60][0] 2 700014B2
s5k5caga_i2c_write(0x0F12, 0x0461);    //senHal_pContSenModesRegsArray[60][1] 2 700014B4
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[60][2] 2 700014B6
s5k5caga_i2c_write(0x0F12, 0x029F);    //senHal_pContSenModesRegsArray[60][3] 2 700014B8
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[61][0] 2 700014BA
s5k5caga_i2c_write(0x0F12, 0x046E);    //senHal_pContSenModesRegsArray[61][1] 2 700014BC
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[61][2] 2 700014BE
s5k5caga_i2c_write(0x0F12, 0x02AC);    //senHal_pContSenModesRegsArray[61][3] 2 700014C0
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[62][0] 2 700014C2
s5k5caga_i2c_write(0x0F12, 0x063C);    //senHal_pContSenModesRegsArray[62][1] 2 700014C4
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[62][2] 2 700014C6
s5k5caga_i2c_write(0x0F12, 0x0399);    //senHal_pContSenModesRegsArray[62][3] 2 700014C8
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[63][0] 2 700014CA
s5k5caga_i2c_write(0x0F12, 0x0649);    //senHal_pContSenModesRegsArray[63][1] 2 700014CC
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[63][2] 2 700014CE
s5k5caga_i2c_write(0x0F12, 0x03A6);    //senHal_pContSenModesRegsArray[63][3] 2 700014D0
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[64][0] 2 700014D2
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[64][1] 2 700014D4
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[64][2] 2 700014D6
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[64][3] 2 700014D8
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[65][0] 2 700014DA
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[65][1] 2 700014DC
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[65][2] 2 700014DE
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[65][3] 2 700014E0
s5k5caga_i2c_write(0x0F12, 0x03AA);    //senHal_pContSenModesRegsArray[66][0] 2 700014E2
s5k5caga_i2c_write(0x0F12, 0x01DB);    //senHal_pContSenModesRegsArray[66][1] 2 700014E4
s5k5caga_i2c_write(0x0F12, 0x01E8);    //senHal_pContSenModesRegsArray[66][2] 2 700014E6
s5k5caga_i2c_write(0x0F12, 0x00FA);    //senHal_pContSenModesRegsArray[66][3] 2 700014E8
s5k5caga_i2c_write(0x0F12, 0x03B7);    //senHal_pContSenModesRegsArray[67][0] 2 700014EA
s5k5caga_i2c_write(0x0F12, 0x01E8);    //senHal_pContSenModesRegsArray[67][1] 2 700014EC
s5k5caga_i2c_write(0x0F12, 0x01F5);    //senHal_pContSenModesRegsArray[67][2] 2 700014EE
s5k5caga_i2c_write(0x0F12, 0x0107);    //senHal_pContSenModesRegsArray[67][3] 2 700014F0
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[68][0] 2 700014F2
s5k5caga_i2c_write(0x0F12, 0x0469);    //senHal_pContSenModesRegsArray[68][1] 2 700014F4
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[68][2] 2 700014F6
s5k5caga_i2c_write(0x0F12, 0x02A7);    //senHal_pContSenModesRegsArray[68][3] 2 700014F8
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[69][0] 2 700014FA
s5k5caga_i2c_write(0x0F12, 0x0476);    //senHal_pContSenModesRegsArray[69][1] 2 700014FC
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[69][2] 2 700014FE
s5k5caga_i2c_write(0x0F12, 0x02B4);    //senHal_pContSenModesRegsArray[69][3] 2 70001500
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[70][0] 2 70001502
s5k5caga_i2c_write(0x0F12, 0x0644);    //senHal_pContSenModesRegsArray[70][1] 2 70001504
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[70][2] 2 70001506
s5k5caga_i2c_write(0x0F12, 0x03A1);    //senHal_pContSenModesRegsArray[70][3] 2 70001508
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[71][0] 2 7000150A
s5k5caga_i2c_write(0x0F12, 0x0651);    //senHal_pContSenModesRegsArray[71][1] 2 7000150C
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[71][2] 2 7000150E
s5k5caga_i2c_write(0x0F12, 0x03AE);    //senHal_pContSenModesRegsArray[71][3] 2 70001510
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[72][0] 2 70001512
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[72][1] 2 70001514
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[72][2] 2 70001516
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[72][3] 2 70001518
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[73][0] 2 7000151A
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[73][1] 2 7000151C
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[73][2] 2 7000151E
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[73][3] 2 70001520
s5k5caga_i2c_write(0x0F12, 0x0001);    //senHal_pContSenModesRegsArray[74][0] 2 70001522
s5k5caga_i2c_write(0x0F12, 0x0001);    //senHal_pContSenModesRegsArray[74][1] 2 70001524
s5k5caga_i2c_write(0x0F12, 0x0001);    //senHal_pContSenModesRegsArray[74][2] 2 70001526
s5k5caga_i2c_write(0x0F12, 0x0001);    //senHal_pContSenModesRegsArray[74][3] 2 70001528
s5k5caga_i2c_write(0x0F12, 0x000F);    //senHal_pContSenModesRegsArray[75][0] 2 7000152A
s5k5caga_i2c_write(0x0F12, 0x000F);    //senHal_pContSenModesRegsArray[75][1] 2 7000152C
s5k5caga_i2c_write(0x0F12, 0x000F);    //senHal_pContSenModesRegsArray[75][2] 2 7000152E
s5k5caga_i2c_write(0x0F12, 0x000F);    //senHal_pContSenModesRegsArray[75][3] 2 70001530
s5k5caga_i2c_write(0x0F12, 0x05AD);    //senHal_pContSenModesRegsArray[76][0] 2 70001532
s5k5caga_i2c_write(0x0F12, 0x03DE);    //senHal_pContSenModesRegsArray[76][1] 2 70001534
s5k5caga_i2c_write(0x0F12, 0x030A);    //senHal_pContSenModesRegsArray[76][2] 2 70001536
s5k5caga_i2c_write(0x0F12, 0x021C);    //senHal_pContSenModesRegsArray[76][3] 2 70001538
s5k5caga_i2c_write(0x0F12, 0x062F);    //senHal_pContSenModesRegsArray[77][0] 2 7000153A
s5k5caga_i2c_write(0x0F12, 0x0460);    //senHal_pContSenModesRegsArray[77][1] 2 7000153C
s5k5caga_i2c_write(0x0F12, 0x038C);    //senHal_pContSenModesRegsArray[77][2] 2 7000153E
s5k5caga_i2c_write(0x0F12, 0x029E);    //senHal_pContSenModesRegsArray[77][3] 2 70001540
s5k5caga_i2c_write(0x0F12, 0x07FC);    //senHal_pContSenModesRegsArray[78][0] 2 70001542
s5k5caga_i2c_write(0x0F12, 0x0847);    //senHal_pContSenModesRegsArray[78][1] 2 70001544
s5k5caga_i2c_write(0x0F12, 0x0478);    //senHal_pContSenModesRegsArray[78][2] 2 70001546
s5k5caga_i2c_write(0x0F12, 0x04C3);    //senHal_pContSenModesRegsArray[78][3] 2 70001548
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[79][0] 2 7000154A
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[79][1] 2 7000154C
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[79][2] 2 7000154E
s5k5caga_i2c_write(0x0F12, 0x0000);    //senHal_pContSenModesRegsArray[79][3] 2 70001550

//============================================================
// ISP-FE Setting
//============================================================                    
s5k5caga_i2c_write(0x002A, 0x158A);    
s5k5caga_i2c_write(0x0F12, 0xEAF0);    
s5k5caga_i2c_write(0x002A, 0x15C6);    
s5k5caga_i2c_write(0x0F12, 0x0020);    
s5k5caga_i2c_write(0x0F12, 0x0060);    
s5k5caga_i2c_write(0x002A, 0x15BC);    
s5k5caga_i2c_write(0x0F12, 0x0200);    
                    
s5k5caga_i2c_write(0x002A, 0x1608);    
s5k5caga_i2c_write(0x0F12, 0x0100);    
s5k5caga_i2c_write(0x0F12, 0x0100);    
s5k5caga_i2c_write(0x0F12, 0x0100);    
s5k5caga_i2c_write(0x0F12, 0x0100);    
                    
s5k5caga_i2c_write(0x002A, 0x0F70);    
s5k5caga_i2c_write(0x0F12, 0x0040); 	 //36 //TVAR_ae_BrAve  //ae Target//
s5k5caga_i2c_write(0x002A, 0x0530);    	                                                    
s5k5caga_i2c_write(0x0F12, 0x3415);    //3A98 //3A98////lt_uMaxExp1	32 30ms  9~10ea// 15fps  // 
s5k5caga_i2c_write(0x002A, 0x0534);                                                                
s5k5caga_i2c_write(0x0F12, 0x682A);    //68b0 //7EF4////lt_uMaxExp2	67 65ms	18~20ea // 7.5fps //
s5k5caga_i2c_write(0x002A, 0x167C);                                                                
s5k5caga_i2c_write(0x0F12, 0x8235);    //8340 //9C40//MaxExp3  83 80ms  24~25ea //                 
s5k5caga_i2c_write(0x002A, 0x1680);                                                                
s5k5caga_i2c_write(0x0F12, 0xc350);     //F424//MaxExp4   125ms  38ea //                           
        
s5k5caga_i2c_write(0x002A, 0x0538);                                                                
s5k5caga_i2c_write(0x0F12, 0x3415);    // 15fps //                                                 
s5k5caga_i2c_write(0x002A, 0x053C);                                                                
s5k5caga_i2c_write(0x0F12, 0x682A);    // 7.5fps //                                                
s5k5caga_i2c_write(0x002A, 0x1684);                                                                
s5k5caga_i2c_write(0x0F12, 0x8235);    //CapMaxExp3 //                                             
s5k5caga_i2c_write(0x002A, 0x1688);                                                                
s5k5caga_i2c_write(0x0F12, 0xC350);    //CapMaxExp4 //                                             

//Shutter tunpoint//        //gain * 256 = value//
s5k5caga_i2c_write(0x002A, 0x0540);                                                                
s5k5caga_i2c_write(0x0F12, 0x01B3);     //0170//0150//lt_uMaxAnGain1_700lux//                                              
s5k5caga_i2c_write(0x0F12, 0x01B3);    //0200//0400//lt_uMaxAnGain2_400lux//                              
s5k5caga_i2c_write(0x002A, 0x168C);                                                                
s5k5caga_i2c_write(0x0F12, 0x02A0);    //0300//MaxAnGain3_200lux//                                       
s5k5caga_i2c_write(0x0F12, 0x0710);    //MaxAnGain4 //                                             
//Shutter tunend//
        
s5k5caga_i2c_write(0x002A, 0x0544);                                                                
s5k5caga_i2c_write(0x0F12, 0x0100);    	                                                    
s5k5caga_i2c_write(0x0F12, 0x8000);    //Max Gain 8 //                                             
        
        
s5k5caga_i2c_write(0x002A, 0x1694);                                                                
s5k5caga_i2c_write(0x0F12, 0x0001);    //expand forbidde zone //                                   

s5k5caga_i2c_write(0x002A, 0x021A);                                                                
s5k5caga_i2c_write(0x0F12, 0x0000);   //MBR off// 	                                                    


//==============================================//
//AFC                                          //
//==============================================//
s5k5caga_i2c_write(0x002A, 0x04d2); 
s5k5caga_i2c_write(0x0F12, 0x065f);      //065f : Manual AFC on   067f : Manual AFC off //
s5k5caga_i2c_write(0x002A, 0x04ba);      
s5k5caga_i2c_write(0x0F12, 0x0001);      // 0002: 60hz  0001 : 50hz //
s5k5caga_i2c_write(0x0F12, 0x0001);      // afc update command //
                         
                    
                    
s5k5caga_i2c_write(0x002A, 0x06CE);    
s5k5caga_i2c_write(0x0F12, 0x0100); 	//TVAR_ash_GAsalpha[0] // 	   
s5k5caga_i2c_write(0x0F12, 0x0100);    //TVAR_ash_GAsalpha[1] // 
s5k5caga_i2c_write(0x0F12, 0x0100);    //TVAR_ash_GAsalpha[2] // 
s5k5caga_i2c_write(0x0F12, 0x0100);    //TVAR_ash_GAsalpha[3] // 
s5k5caga_i2c_write(0x0F12, 0x0100);    //TVAR_ash_GAsalpha[4] // 
s5k5caga_i2c_write(0x0F12, 0x0100);    //TVAR_ash_GAsalpha[5] // 
s5k5caga_i2c_write(0x0F12, 0x0100);    //TVAR_ash_GAsalpha[6] // 
s5k5caga_i2c_write(0x0F12, 0x0100);    //TVAR_ash_GAsalpha[7] // 
s5k5caga_i2c_write(0x0F12, 0x0100);    //TVAR_ash_GAsalpha[8] // 
s5k5caga_i2c_write(0x0F12, 0x0100);    //TVAR_ash_GAsalpha[9] // 
s5k5caga_i2c_write(0x0F12, 0x0100);    //TVAR_ash_GAsalpha[10] //
s5k5caga_i2c_write(0x0F12, 0x0100);    //TVAR_ash_GAsalpha[11] //
s5k5caga_i2c_write(0x0F12, 0x00e0);    //TVAR_ash_GAsalpha[12] //
s5k5caga_i2c_write(0x0F12, 0x00f8);    //TVAR_ash_GAsalpha[13] //
s5k5caga_i2c_write(0x0F12, 0x00f8);    //TVAR_ash_GAsalpha[14] //
s5k5caga_i2c_write(0x0F12, 0x0100);    //TVAR_ash_GAsalpha[15] //
s5k5caga_i2c_write(0x0F12, 0x00e8);    //TVAR_ash_GAsalpha[16] //
s5k5caga_i2c_write(0x0F12, 0x00f8);    //TVAR_ash_GAsalpha[17] //
s5k5caga_i2c_write(0x0F12, 0x00f8);    //TVAR_ash_GAsalpha[18] //
s5k5caga_i2c_write(0x0F12, 0x0100);    //TVAR_ash_GAsalpha[19] //
s5k5caga_i2c_write(0x0F12, 0x00f0);    //TVAR_ash_GAsalpha[20] //
s5k5caga_i2c_write(0x0F12, 0x0100);    //TVAR_ash_GAsalpha[21] //
s5k5caga_i2c_write(0x0F12, 0x0100);    //TVAR_ash_GAsalpha[22] //
s5k5caga_i2c_write(0x0F12, 0x0100);    //TVAR_ash_GAsalpha[23] //
s5k5caga_i2c_write(0x0F12, 0x00f0);    //TVAR_ash_GAsalpha[24] //
s5k5caga_i2c_write(0x0F12, 0x0100);    //TVAR_ash_GAsalpha[25] //
s5k5caga_i2c_write(0x0F12, 0x0100);    //TVAR_ash_GAsalpha[26] //
s5k5caga_i2c_write(0x0F12, 0x0100);    //TVAR_ash_GAsalpha[27] //
                    
s5k5caga_i2c_write(0x0F12, 0x00f8); 	//TVAR_ash_GAS OutdoorAlpha[0] //   
s5k5caga_i2c_write(0x0F12, 0x0100);    //TVAR_ash_GAS OutdoorAlpha[1] //
s5k5caga_i2c_write(0x0F12, 0x0100);    //TVAR_ash_GAS OutdoorAlpha[2] //
s5k5caga_i2c_write(0x0F12, 0x0100);    //TVAR_ash_GAS OutdoorAlpha[3] //
                    
                    
s5k5caga_i2c_write(0x0F12, 0x0036); 	//ash_GASBeta[0] // 	   
s5k5caga_i2c_write(0x0F12, 0x001F); 	//ash_GASBeta[1] //    
s5k5caga_i2c_write(0x0F12, 0x0020);    //ash_GASBeta[2] // 
s5k5caga_i2c_write(0x0F12, 0x0000);    //ash_GASBeta[3] // 
s5k5caga_i2c_write(0x0F12, 0x0036);    //ash_GASBeta[4] // 
s5k5caga_i2c_write(0x0F12, 0x001F);    //ash_GASBeta[5] // 
s5k5caga_i2c_write(0x0F12, 0x0020);    //ash_GASBeta[6] // 
s5k5caga_i2c_write(0x0F12, 0x0000);    //ash_GASBeta[7] // 
s5k5caga_i2c_write(0x0F12, 0x0036);    //ash_GASBeta[8] // 
s5k5caga_i2c_write(0x0F12, 0x001F);    //ash_GASBeta[9] // 
s5k5caga_i2c_write(0x0F12, 0x0020);    //ash_GASBeta[10] //
s5k5caga_i2c_write(0x0F12, 0x0000);    //ash_GASBeta[11] //
s5k5caga_i2c_write(0x0F12, 0x0010);    //ash_GASBeta[12] //
s5k5caga_i2c_write(0x0F12, 0x001F);    //ash_GASBeta[13] //
s5k5caga_i2c_write(0x0F12, 0x0020);    //ash_GASBeta[14] //
s5k5caga_i2c_write(0x0F12, 0x0000);    //ash_GASBeta[15] //
s5k5caga_i2c_write(0x0F12, 0x0020);    //ash_GASBeta[16] //
s5k5caga_i2c_write(0x0F12, 0x001F);    //ash_GASBeta[17] //
s5k5caga_i2c_write(0x0F12, 0x0020);    //ash_GASBeta[18] //
s5k5caga_i2c_write(0x0F12, 0x0000);    //ash_GASBeta[19] //
s5k5caga_i2c_write(0x0F12, 0x0036);    //ash_GASBeta[20] //
s5k5caga_i2c_write(0x0F12, 0x001F);    //ash_GASBeta[21] //
s5k5caga_i2c_write(0x0F12, 0x0020);    //ash_GASBeta[22] //
s5k5caga_i2c_write(0x0F12, 0x0000);    //ash_GASBeta[23] //
s5k5caga_i2c_write(0x0F12, 0x0036);    //ash_GASBeta[24] //
s5k5caga_i2c_write(0x0F12, 0x001F);    //ash_GASBeta[25] //
s5k5caga_i2c_write(0x0F12, 0x0020);    //ash_GASBeta[26] //
s5k5caga_i2c_write(0x0F12, 0x0000);    //ash_GASBeta[27] //
                    
s5k5caga_i2c_write(0x0F12, 0x0036); 	//ash_GAS OutdoorBeta[0] //   
s5k5caga_i2c_write(0x0F12, 0x001F);    //ash_GAS OutdoorBeta[1] //
s5k5caga_i2c_write(0x0F12, 0x0020);    //ash_GAS OutdoorBeta[2] //
s5k5caga_i2c_write(0x0F12, 0x0000);    //ash_GAS OutdoorBeta[3] //
                    
s5k5caga_i2c_write(0x002A, 0x075A); 	//ash_bParabolicEstimation//   
s5k5caga_i2c_write(0x0F12, 0x0000);    //ash_uParabolicCenterX   //
s5k5caga_i2c_write(0x0F12, 0x0400);    //ash_uParabolicCenterY   //
s5k5caga_i2c_write(0x0F12, 0x0300);    //ash_uParabolicscalingA  //
s5k5caga_i2c_write(0x0F12, 0x0010);    //ash_uParabolicscalingB  //
s5k5caga_i2c_write(0x0F12, 0x0011);    
                    
s5k5caga_i2c_write(0x002A, 0x347C);    
s5k5caga_i2c_write(0x0F12, 0x01D9); 	//TVAR_ash_pGAS[0] //     
s5k5caga_i2c_write(0x0F12, 0x019D);    //TVAR_ash_pGAS[1] //  
s5k5caga_i2c_write(0x0F12, 0x015C);    //TVAR_ash_pGAS[2] //  
s5k5caga_i2c_write(0x0F12, 0x0125);    //TVAR_ash_pGAS[3] //  
s5k5caga_i2c_write(0x0F12, 0x00FE);    //TVAR_ash_pGAS[4] //  
s5k5caga_i2c_write(0x0F12, 0x00E5);    //TVAR_ash_pGAS[5] //  
s5k5caga_i2c_write(0x0F12, 0x00DA);    //TVAR_ash_pGAS[6] //  
s5k5caga_i2c_write(0x0F12, 0x00E5);    //TVAR_ash_pGAS[7] //  
s5k5caga_i2c_write(0x0F12, 0x0100);    //TVAR_ash_pGAS[8] //  
s5k5caga_i2c_write(0x0F12, 0x012D);    //TVAR_ash_pGAS[9] //  
s5k5caga_i2c_write(0x0F12, 0x016B);    //TVAR_ash_pGAS[10] // 
s5k5caga_i2c_write(0x0F12, 0x01B3);    //TVAR_ash_pGAS[11] // 
s5k5caga_i2c_write(0x0F12, 0x01F2);    //TVAR_ash_pGAS[12] // 
s5k5caga_i2c_write(0x0F12, 0x01A7);    //TVAR_ash_pGAS[13] // 
s5k5caga_i2c_write(0x0F12, 0x0165);    //TVAR_ash_pGAS[14] // 
s5k5caga_i2c_write(0x0F12, 0x011E);    //TVAR_ash_pGAS[15] // 
s5k5caga_i2c_write(0x0F12, 0x00E3);    //TVAR_ash_pGAS[16] // 
s5k5caga_i2c_write(0x0F12, 0x00B6);    //TVAR_ash_pGAS[17] // 
s5k5caga_i2c_write(0x0F12, 0x009C);    //TVAR_ash_pGAS[18] // 
s5k5caga_i2c_write(0x0F12, 0x0092);    //TVAR_ash_pGAS[19] // 
s5k5caga_i2c_write(0x0F12, 0x009D);    //TVAR_ash_pGAS[20] // 
s5k5caga_i2c_write(0x0F12, 0x00BB);    //TVAR_ash_pGAS[21] // 
s5k5caga_i2c_write(0x0F12, 0x00F0);    //TVAR_ash_pGAS[22] // 
s5k5caga_i2c_write(0x0F12, 0x0133);    //TVAR_ash_pGAS[23] // 
s5k5caga_i2c_write(0x0F12, 0x0182);    //TVAR_ash_pGAS[24] // 
s5k5caga_i2c_write(0x0F12, 0x01CD);    //TVAR_ash_pGAS[25] // 
s5k5caga_i2c_write(0x0F12, 0x0170);    //TVAR_ash_pGAS[26] // 
s5k5caga_i2c_write(0x0F12, 0x012A);    //TVAR_ash_pGAS[27] // 
s5k5caga_i2c_write(0x0F12, 0x00DC);    //TVAR_ash_pGAS[28] // 
s5k5caga_i2c_write(0x0F12, 0x009A);    //TVAR_ash_pGAS[29] // 
s5k5caga_i2c_write(0x0F12, 0x006E);    //TVAR_ash_pGAS[30] // 
s5k5caga_i2c_write(0x0F12, 0x0053);    //TVAR_ash_pGAS[31] // 
s5k5caga_i2c_write(0x0F12, 0x004A);    //TVAR_ash_pGAS[32] // 
s5k5caga_i2c_write(0x0F12, 0x0055);    //TVAR_ash_pGAS[33] // 
s5k5caga_i2c_write(0x0F12, 0x0076);    //TVAR_ash_pGAS[34] // 
s5k5caga_i2c_write(0x0F12, 0x00AC);    //TVAR_ash_pGAS[35] // 
s5k5caga_i2c_write(0x0F12, 0x00F5);    //TVAR_ash_pGAS[36] // 
s5k5caga_i2c_write(0x0F12, 0x0147);    //TVAR_ash_pGAS[37] // 
s5k5caga_i2c_write(0x0F12, 0x0196);    //TVAR_ash_pGAS[38] // 
s5k5caga_i2c_write(0x0F12, 0x014C);    //TVAR_ash_pGAS[39] // 
s5k5caga_i2c_write(0x0F12, 0x0102);    //TVAR_ash_pGAS[40] // 
s5k5caga_i2c_write(0x0F12, 0x00B1);    //TVAR_ash_pGAS[41] // 
s5k5caga_i2c_write(0x0F12, 0x006F);    //TVAR_ash_pGAS[42] // 
s5k5caga_i2c_write(0x0F12, 0x0041);    //TVAR_ash_pGAS[43] // 
s5k5caga_i2c_write(0x0F12, 0x0027);    //TVAR_ash_pGAS[44] // 
s5k5caga_i2c_write(0x0F12, 0x001F);    //TVAR_ash_pGAS[45] // 
s5k5caga_i2c_write(0x0F12, 0x002A);    //TVAR_ash_pGAS[46] // 
s5k5caga_i2c_write(0x0F12, 0x004B);    //TVAR_ash_pGAS[47] // 
s5k5caga_i2c_write(0x0F12, 0x0083);    //TVAR_ash_pGAS[48] // 
s5k5caga_i2c_write(0x0F12, 0x00CE);    //TVAR_ash_pGAS[49] // 
s5k5caga_i2c_write(0x0F12, 0x0128);    //TVAR_ash_pGAS[50] // 
s5k5caga_i2c_write(0x0F12, 0x0177);    //TVAR_ash_pGAS[51] // 
s5k5caga_i2c_write(0x0F12, 0x0133);    //TVAR_ash_pGAS[52] // 
s5k5caga_i2c_write(0x0F12, 0x00E6);    //TVAR_ash_pGAS[53] // 
s5k5caga_i2c_write(0x0F12, 0x0094);    //TVAR_ash_pGAS[54] // 
s5k5caga_i2c_write(0x0F12, 0x0052);    //TVAR_ash_pGAS[55] // 
s5k5caga_i2c_write(0x0F12, 0x0025);    //TVAR_ash_pGAS[56] // 
s5k5caga_i2c_write(0x0F12, 0x000C);    //TVAR_ash_pGAS[57] // 
s5k5caga_i2c_write(0x0F12, 0x0004);    //TVAR_ash_pGAS[58] // 
s5k5caga_i2c_write(0x0F12, 0x0010);    //TVAR_ash_pGAS[59] // 
s5k5caga_i2c_write(0x0F12, 0x0030);    //TVAR_ash_pGAS[60] // 
s5k5caga_i2c_write(0x0F12, 0x0069);    //TVAR_ash_pGAS[61] // 
s5k5caga_i2c_write(0x0F12, 0x00B6);    //TVAR_ash_pGAS[62] // 
s5k5caga_i2c_write(0x0F12, 0x0112);    //TVAR_ash_pGAS[63] // 
s5k5caga_i2c_write(0x0F12, 0x0168);    //TVAR_ash_pGAS[64] // 
s5k5caga_i2c_write(0x0F12, 0x012F);    //TVAR_ash_pGAS[65] // 
s5k5caga_i2c_write(0x0F12, 0x00E3);    //TVAR_ash_pGAS[66] // 
s5k5caga_i2c_write(0x0F12, 0x008E);    //TVAR_ash_pGAS[67] // 
s5k5caga_i2c_write(0x0F12, 0x004C);    //TVAR_ash_pGAS[68] // 
s5k5caga_i2c_write(0x0F12, 0x0020);    //TVAR_ash_pGAS[69] // 
s5k5caga_i2c_write(0x0F12, 0x0007);    //TVAR_ash_pGAS[70] // 
s5k5caga_i2c_write(0x0F12, 0x0000);    //TVAR_ash_pGAS[71] // 
s5k5caga_i2c_write(0x0F12, 0x000B);    //TVAR_ash_pGAS[72] // 
s5k5caga_i2c_write(0x0F12, 0x002D);    //TVAR_ash_pGAS[73] // 
s5k5caga_i2c_write(0x0F12, 0x0065);    //TVAR_ash_pGAS[74] // 
s5k5caga_i2c_write(0x0F12, 0x00B4);    //TVAR_ash_pGAS[75] // 
s5k5caga_i2c_write(0x0F12, 0x0114);    //TVAR_ash_pGAS[76] // 
s5k5caga_i2c_write(0x0F12, 0x016B);    //TVAR_ash_pGAS[77] // 
s5k5caga_i2c_write(0x0F12, 0x0138);    //TVAR_ash_pGAS[78] // 
s5k5caga_i2c_write(0x0F12, 0x00EB);    //TVAR_ash_pGAS[79] // 
s5k5caga_i2c_write(0x0F12, 0x0099);    //TVAR_ash_pGAS[80] // 
s5k5caga_i2c_write(0x0F12, 0x0058);    //TVAR_ash_pGAS[81] // 
s5k5caga_i2c_write(0x0F12, 0x002B);    //TVAR_ash_pGAS[82] // 
s5k5caga_i2c_write(0x0F12, 0x0012);    //TVAR_ash_pGAS[83] // 
s5k5caga_i2c_write(0x0F12, 0x000B);    //TVAR_ash_pGAS[84] // 
s5k5caga_i2c_write(0x0F12, 0x0017);    //TVAR_ash_pGAS[85] // 
s5k5caga_i2c_write(0x0F12, 0x0039);    //TVAR_ash_pGAS[86] // 
s5k5caga_i2c_write(0x0F12, 0x0074);    //TVAR_ash_pGAS[87] // 
s5k5caga_i2c_write(0x0F12, 0x00C2);    //TVAR_ash_pGAS[88] // 
s5k5caga_i2c_write(0x0F12, 0x0121);    //TVAR_ash_pGAS[89] // 
s5k5caga_i2c_write(0x0F12, 0x0177);    //TVAR_ash_pGAS[90] // 
s5k5caga_i2c_write(0x0F12, 0x0158);    //TVAR_ash_pGAS[91] // 
s5k5caga_i2c_write(0x0F12, 0x010C);    //TVAR_ash_pGAS[92] // 
s5k5caga_i2c_write(0x0F12, 0x00BC);    //TVAR_ash_pGAS[93] // 
s5k5caga_i2c_write(0x0F12, 0x007B);    //TVAR_ash_pGAS[94] // 
s5k5caga_i2c_write(0x0F12, 0x004E);    //TVAR_ash_pGAS[95] // 
s5k5caga_i2c_write(0x0F12, 0x0034);    //TVAR_ash_pGAS[96] // 
s5k5caga_i2c_write(0x0F12, 0x002D);    //TVAR_ash_pGAS[97] // 
s5k5caga_i2c_write(0x0F12, 0x003B);    //TVAR_ash_pGAS[98] // 
s5k5caga_i2c_write(0x0F12, 0x005E);    //TVAR_ash_pGAS[99] // 
s5k5caga_i2c_write(0x0F12, 0x0099);    //TVAR_ash_pGAS[100] //
s5k5caga_i2c_write(0x0F12, 0x00E7);    //TVAR_ash_pGAS[101] //
s5k5caga_i2c_write(0x0F12, 0x0145);    //TVAR_ash_pGAS[102] //
s5k5caga_i2c_write(0x0F12, 0x0197);    //TVAR_ash_pGAS[103] //
s5k5caga_i2c_write(0x0F12, 0x017E);    //TVAR_ash_pGAS[104] //
s5k5caga_i2c_write(0x0F12, 0x0138);    //TVAR_ash_pGAS[105] //
s5k5caga_i2c_write(0x0F12, 0x00EB);    //TVAR_ash_pGAS[106] //
s5k5caga_i2c_write(0x0F12, 0x00AC);    //TVAR_ash_pGAS[107] //
s5k5caga_i2c_write(0x0F12, 0x0080);    //TVAR_ash_pGAS[108] //
s5k5caga_i2c_write(0x0F12, 0x0067);    //TVAR_ash_pGAS[109] //
s5k5caga_i2c_write(0x0F12, 0x0061);    //TVAR_ash_pGAS[110] //
s5k5caga_i2c_write(0x0F12, 0x006E);    //TVAR_ash_pGAS[111] //
s5k5caga_i2c_write(0x0F12, 0x0091);    //TVAR_ash_pGAS[112] //
s5k5caga_i2c_write(0x0F12, 0x00CA);    //TVAR_ash_pGAS[113] //
s5k5caga_i2c_write(0x0F12, 0x0116);    //TVAR_ash_pGAS[114] //
s5k5caga_i2c_write(0x0F12, 0x016E);    //TVAR_ash_pGAS[115] //
s5k5caga_i2c_write(0x0F12, 0x01C0);    //TVAR_ash_pGAS[116] //
s5k5caga_i2c_write(0x0F12, 0x01BB);    //TVAR_ash_pGAS[117] //
s5k5caga_i2c_write(0x0F12, 0x0177);    //TVAR_ash_pGAS[118] //
s5k5caga_i2c_write(0x0F12, 0x0131);    //TVAR_ash_pGAS[119] //
s5k5caga_i2c_write(0x0F12, 0x00F7);    //TVAR_ash_pGAS[120] //
s5k5caga_i2c_write(0x0F12, 0x00CE);    //TVAR_ash_pGAS[121] //
s5k5caga_i2c_write(0x0F12, 0x00B6);    //TVAR_ash_pGAS[122] //
s5k5caga_i2c_write(0x0F12, 0x00AF);    //TVAR_ash_pGAS[123] //
s5k5caga_i2c_write(0x0F12, 0x00BD);    //TVAR_ash_pGAS[124] //
s5k5caga_i2c_write(0x0F12, 0x00DF);    //TVAR_ash_pGAS[125] //
s5k5caga_i2c_write(0x0F12, 0x0113);    //TVAR_ash_pGAS[126] //
s5k5caga_i2c_write(0x0F12, 0x0156);    //TVAR_ash_pGAS[127] //
s5k5caga_i2c_write(0x0F12, 0x01AA);    //TVAR_ash_pGAS[128] //
s5k5caga_i2c_write(0x0F12, 0x01F7);    //TVAR_ash_pGAS[129] //
s5k5caga_i2c_write(0x0F12, 0x01EF);    //TVAR_ash_pGAS[130] //
s5k5caga_i2c_write(0x0F12, 0x01B2);    //TVAR_ash_pGAS[131] //
s5k5caga_i2c_write(0x0F12, 0x0170);    //TVAR_ash_pGAS[132] //
s5k5caga_i2c_write(0x0F12, 0x013E);    //TVAR_ash_pGAS[133] //
s5k5caga_i2c_write(0x0F12, 0x0119);    //TVAR_ash_pGAS[134] //
s5k5caga_i2c_write(0x0F12, 0x0103);    //TVAR_ash_pGAS[135] //
s5k5caga_i2c_write(0x0F12, 0x00FF);    //TVAR_ash_pGAS[136] //
s5k5caga_i2c_write(0x0F12, 0x010D);    //TVAR_ash_pGAS[137] //
s5k5caga_i2c_write(0x0F12, 0x012B);    //TVAR_ash_pGAS[138] //
s5k5caga_i2c_write(0x0F12, 0x0158);    //TVAR_ash_pGAS[139] //
s5k5caga_i2c_write(0x0F12, 0x0194);    //TVAR_ash_pGAS[140] //
s5k5caga_i2c_write(0x0F12, 0x01DA);    //TVAR_ash_pGAS[141] //
s5k5caga_i2c_write(0x0F12, 0x0207);    //TVAR_ash_pGAS[142] //
s5k5caga_i2c_write(0x0F12, 0x0198);    //TVAR_ash_pGAS[143] //
s5k5caga_i2c_write(0x0F12, 0x0156);    //TVAR_ash_pGAS[144] //
s5k5caga_i2c_write(0x0F12, 0x011D);    //TVAR_ash_pGAS[145] //
s5k5caga_i2c_write(0x0F12, 0x00EF);    //TVAR_ash_pGAS[146] //
s5k5caga_i2c_write(0x0F12, 0x00C9);    //TVAR_ash_pGAS[147] //
s5k5caga_i2c_write(0x0F12, 0x00B2);    //TVAR_ash_pGAS[148] //
s5k5caga_i2c_write(0x0F12, 0x00A9);    //TVAR_ash_pGAS[149] //
s5k5caga_i2c_write(0x0F12, 0x00B1);    //TVAR_ash_pGAS[150] //
s5k5caga_i2c_write(0x0F12, 0x00C5);    //TVAR_ash_pGAS[151] //
s5k5caga_i2c_write(0x0F12, 0x00E7);    //TVAR_ash_pGAS[152] //
s5k5caga_i2c_write(0x0F12, 0x0113);    //TVAR_ash_pGAS[153] //
s5k5caga_i2c_write(0x0F12, 0x0152);    //TVAR_ash_pGAS[154] //
s5k5caga_i2c_write(0x0F12, 0x018C);    //TVAR_ash_pGAS[155] //
s5k5caga_i2c_write(0x0F12, 0x016E);    //TVAR_ash_pGAS[156] //
s5k5caga_i2c_write(0x0F12, 0x0127);    //TVAR_ash_pGAS[157] //
s5k5caga_i2c_write(0x0F12, 0x00E8);    //TVAR_ash_pGAS[158] //
s5k5caga_i2c_write(0x0F12, 0x00B6);    //TVAR_ash_pGAS[159] //
s5k5caga_i2c_write(0x0F12, 0x0090);    //TVAR_ash_pGAS[160] //
s5k5caga_i2c_write(0x0F12, 0x0078);    //TVAR_ash_pGAS[161] //
s5k5caga_i2c_write(0x0F12, 0x0070);    //TVAR_ash_pGAS[162] //
s5k5caga_i2c_write(0x0F12, 0x0078);    //TVAR_ash_pGAS[163] //
s5k5caga_i2c_write(0x0F12, 0x008F);    //TVAR_ash_pGAS[164] //
s5k5caga_i2c_write(0x0F12, 0x00B5);    //TVAR_ash_pGAS[165] //
s5k5caga_i2c_write(0x0F12, 0x00E7);    //TVAR_ash_pGAS[166] //
s5k5caga_i2c_write(0x0F12, 0x0126);    //TVAR_ash_pGAS[167] //
s5k5caga_i2c_write(0x0F12, 0x016C);    //TVAR_ash_pGAS[168] //
s5k5caga_i2c_write(0x0F12, 0x013D);    //TVAR_ash_pGAS[169] //
s5k5caga_i2c_write(0x0F12, 0x00F6);    //TVAR_ash_pGAS[170] //
s5k5caga_i2c_write(0x0F12, 0x00B5);    //TVAR_ash_pGAS[171] //
s5k5caga_i2c_write(0x0F12, 0x0080);    //TVAR_ash_pGAS[172] //
s5k5caga_i2c_write(0x0F12, 0x0058);    //TVAR_ash_pGAS[173] //
s5k5caga_i2c_write(0x0F12, 0x0040);    //TVAR_ash_pGAS[174] //
s5k5caga_i2c_write(0x0F12, 0x0038);    //TVAR_ash_pGAS[175] //
s5k5caga_i2c_write(0x0F12, 0x0042);    //TVAR_ash_pGAS[176] //
s5k5caga_i2c_write(0x0F12, 0x005B);    //TVAR_ash_pGAS[177] //
s5k5caga_i2c_write(0x0F12, 0x0083);    //TVAR_ash_pGAS[178] //
s5k5caga_i2c_write(0x0F12, 0x00B9);    //TVAR_ash_pGAS[179] //
s5k5caga_i2c_write(0x0F12, 0x00F9);    //TVAR_ash_pGAS[180] //
s5k5caga_i2c_write(0x0F12, 0x0141);    //TVAR_ash_pGAS[181] //
s5k5caga_i2c_write(0x0F12, 0x011E);    //TVAR_ash_pGAS[182] //
s5k5caga_i2c_write(0x0F12, 0x00D7);    //TVAR_ash_pGAS[183] //
s5k5caga_i2c_write(0x0F12, 0x0094);    //TVAR_ash_pGAS[184] //
s5k5caga_i2c_write(0x0F12, 0x005E);    //TVAR_ash_pGAS[185] //
s5k5caga_i2c_write(0x0F12, 0x0035);    //TVAR_ash_pGAS[186] //
s5k5caga_i2c_write(0x0F12, 0x001E);    //TVAR_ash_pGAS[187] //
s5k5caga_i2c_write(0x0F12, 0x0017);    //TVAR_ash_pGAS[188] //
s5k5caga_i2c_write(0x0F12, 0x0021);    //TVAR_ash_pGAS[189] //
s5k5caga_i2c_write(0x0F12, 0x003C);    //TVAR_ash_pGAS[190] //
s5k5caga_i2c_write(0x0F12, 0x0066);    //TVAR_ash_pGAS[191] //
s5k5caga_i2c_write(0x0F12, 0x009F);    //TVAR_ash_pGAS[192] //
s5k5caga_i2c_write(0x0F12, 0x00E2);    //TVAR_ash_pGAS[193] //
s5k5caga_i2c_write(0x0F12, 0x012A);    //TVAR_ash_pGAS[194] //
s5k5caga_i2c_write(0x0F12, 0x010A);    //TVAR_ash_pGAS[195] //
s5k5caga_i2c_write(0x0F12, 0x00C0);    //TVAR_ash_pGAS[196] //
s5k5caga_i2c_write(0x0F12, 0x007B);    //TVAR_ash_pGAS[197] //
s5k5caga_i2c_write(0x0F12, 0x0045);    //TVAR_ash_pGAS[198] //
s5k5caga_i2c_write(0x0F12, 0x001F);    //TVAR_ash_pGAS[199] //
s5k5caga_i2c_write(0x0F12, 0x0008);    //TVAR_ash_pGAS[200] //
s5k5caga_i2c_write(0x0F12, 0x0002);    //TVAR_ash_pGAS[201] //
s5k5caga_i2c_write(0x0F12, 0x000C);    //TVAR_ash_pGAS[202] //
s5k5caga_i2c_write(0x0F12, 0x0027);    //TVAR_ash_pGAS[203] //
s5k5caga_i2c_write(0x0F12, 0x0052);    //TVAR_ash_pGAS[204] //
s5k5caga_i2c_write(0x0F12, 0x008C);    //TVAR_ash_pGAS[205] //
s5k5caga_i2c_write(0x0F12, 0x00D2);    //TVAR_ash_pGAS[206] //
s5k5caga_i2c_write(0x0F12, 0x011E);    //TVAR_ash_pGAS[207] //
s5k5caga_i2c_write(0x0F12, 0x0106);    //TVAR_ash_pGAS[208] //
s5k5caga_i2c_write(0x0F12, 0x00BC);    //TVAR_ash_pGAS[209] //
s5k5caga_i2c_write(0x0F12, 0x0077);    //TVAR_ash_pGAS[210] //
s5k5caga_i2c_write(0x0F12, 0x0040);    //TVAR_ash_pGAS[211] //
s5k5caga_i2c_write(0x0F12, 0x001A);    //TVAR_ash_pGAS[212] //
s5k5caga_i2c_write(0x0F12, 0x0005);    //TVAR_ash_pGAS[213] //
s5k5caga_i2c_write(0x0F12, 0x0000);    //TVAR_ash_pGAS[214] //
s5k5caga_i2c_write(0x0F12, 0x000A);    //TVAR_ash_pGAS[215] //
s5k5caga_i2c_write(0x0F12, 0x0026);    //TVAR_ash_pGAS[216] //
s5k5caga_i2c_write(0x0F12, 0x0052);    //TVAR_ash_pGAS[217] //
s5k5caga_i2c_write(0x0F12, 0x008D);    //TVAR_ash_pGAS[218] //
s5k5caga_i2c_write(0x0F12, 0x00D5);    //TVAR_ash_pGAS[219] //
s5k5caga_i2c_write(0x0F12, 0x0121);    //TVAR_ash_pGAS[220] //
s5k5caga_i2c_write(0x0F12, 0x010A);    //TVAR_ash_pGAS[221] //
s5k5caga_i2c_write(0x0F12, 0x00C1);    //TVAR_ash_pGAS[222] //
s5k5caga_i2c_write(0x0F12, 0x007E);    //TVAR_ash_pGAS[223] //
s5k5caga_i2c_write(0x0F12, 0x0049);    //TVAR_ash_pGAS[224] //
s5k5caga_i2c_write(0x0F12, 0x0023);    //TVAR_ash_pGAS[225] //
s5k5caga_i2c_write(0x0F12, 0x000E);    //TVAR_ash_pGAS[226] //
s5k5caga_i2c_write(0x0F12, 0x0009);    //TVAR_ash_pGAS[227] //
s5k5caga_i2c_write(0x0F12, 0x0015);    //TVAR_ash_pGAS[228] //
s5k5caga_i2c_write(0x0F12, 0x0031);    //TVAR_ash_pGAS[229] //
s5k5caga_i2c_write(0x0F12, 0x005D);    //TVAR_ash_pGAS[230] //
s5k5caga_i2c_write(0x0F12, 0x0097);    //TVAR_ash_pGAS[231] //
s5k5caga_i2c_write(0x0F12, 0x00DF);    //TVAR_ash_pGAS[232] //
s5k5caga_i2c_write(0x0F12, 0x0129);    //TVAR_ash_pGAS[233] //
s5k5caga_i2c_write(0x0F12, 0x0121);    //TVAR_ash_pGAS[234] //
s5k5caga_i2c_write(0x0F12, 0x00DA);    //TVAR_ash_pGAS[235] //
s5k5caga_i2c_write(0x0F12, 0x009A);    //TVAR_ash_pGAS[236] //
s5k5caga_i2c_write(0x0F12, 0x0065);    //TVAR_ash_pGAS[237] //
s5k5caga_i2c_write(0x0F12, 0x0040);    //TVAR_ash_pGAS[238] //
s5k5caga_i2c_write(0x0F12, 0x002B);    //TVAR_ash_pGAS[239] //
s5k5caga_i2c_write(0x0F12, 0x0026);    //TVAR_ash_pGAS[240] //
s5k5caga_i2c_write(0x0F12, 0x0031);    //TVAR_ash_pGAS[241] //
s5k5caga_i2c_write(0x0F12, 0x004E);    //TVAR_ash_pGAS[242] //
s5k5caga_i2c_write(0x0F12, 0x007C);    //TVAR_ash_pGAS[243] //
s5k5caga_i2c_write(0x0F12, 0x00B6);    //TVAR_ash_pGAS[244] //
s5k5caga_i2c_write(0x0F12, 0x00FB);    //TVAR_ash_pGAS[245] //
s5k5caga_i2c_write(0x0F12, 0x0143);    //TVAR_ash_pGAS[246] //
s5k5caga_i2c_write(0x0F12, 0x0140);    //TVAR_ash_pGAS[247] //
s5k5caga_i2c_write(0x0F12, 0x00FB);    //TVAR_ash_pGAS[248] //
s5k5caga_i2c_write(0x0F12, 0x00BD);    //TVAR_ash_pGAS[249] //
s5k5caga_i2c_write(0x0F12, 0x008C);    //TVAR_ash_pGAS[250] //
s5k5caga_i2c_write(0x0F12, 0x0068);    //TVAR_ash_pGAS[251] //
s5k5caga_i2c_write(0x0F12, 0x0054);    //TVAR_ash_pGAS[252] //
s5k5caga_i2c_write(0x0F12, 0x004F);    //TVAR_ash_pGAS[253] //
s5k5caga_i2c_write(0x0F12, 0x005B);    //TVAR_ash_pGAS[254] //
s5k5caga_i2c_write(0x0F12, 0x0077);    //TVAR_ash_pGAS[255] //
s5k5caga_i2c_write(0x0F12, 0x00A2);    //TVAR_ash_pGAS[256] //
s5k5caga_i2c_write(0x0F12, 0x00DA);    //TVAR_ash_pGAS[257] //
s5k5caga_i2c_write(0x0F12, 0x011C);    //TVAR_ash_pGAS[258] //
s5k5caga_i2c_write(0x0F12, 0x0163);    //TVAR_ash_pGAS[259] //
s5k5caga_i2c_write(0x0F12, 0x0173);    //TVAR_ash_pGAS[260] //
s5k5caga_i2c_write(0x0F12, 0x012D);    //TVAR_ash_pGAS[261] //
s5k5caga_i2c_write(0x0F12, 0x00F5);    //TVAR_ash_pGAS[262] //
s5k5caga_i2c_write(0x0F12, 0x00C6);    //TVAR_ash_pGAS[263] //
s5k5caga_i2c_write(0x0F12, 0x00A5);    //TVAR_ash_pGAS[264] //
s5k5caga_i2c_write(0x0F12, 0x0092);    //TVAR_ash_pGAS[265] //
s5k5caga_i2c_write(0x0F12, 0x008F);    //TVAR_ash_pGAS[266] //
s5k5caga_i2c_write(0x0F12, 0x009B);    //TVAR_ash_pGAS[267] //
s5k5caga_i2c_write(0x0F12, 0x00B5);    //TVAR_ash_pGAS[268] //
s5k5caga_i2c_write(0x0F12, 0x00DC);    //TVAR_ash_pGAS[269] //
s5k5caga_i2c_write(0x0F12, 0x010C);    //TVAR_ash_pGAS[270] //
s5k5caga_i2c_write(0x0F12, 0x014C);    //TVAR_ash_pGAS[271] //
s5k5caga_i2c_write(0x0F12, 0x0197);    //TVAR_ash_pGAS[272] //
s5k5caga_i2c_write(0x0F12, 0x019F);    //TVAR_ash_pGAS[273] //
s5k5caga_i2c_write(0x0F12, 0x015F);    //TVAR_ash_pGAS[274] //
s5k5caga_i2c_write(0x0F12, 0x0128);    //TVAR_ash_pGAS[275] //
s5k5caga_i2c_write(0x0F12, 0x00FF);    //TVAR_ash_pGAS[276] //
s5k5caga_i2c_write(0x0F12, 0x00E1);    //TVAR_ash_pGAS[277] //
s5k5caga_i2c_write(0x0F12, 0x00D0);    //TVAR_ash_pGAS[278] //
s5k5caga_i2c_write(0x0F12, 0x00CF);    //TVAR_ash_pGAS[279] //
s5k5caga_i2c_write(0x0F12, 0x00DA);    //TVAR_ash_pGAS[280] //
s5k5caga_i2c_write(0x0F12, 0x00F4);    //TVAR_ash_pGAS[281] //
s5k5caga_i2c_write(0x0F12, 0x0116);    //TVAR_ash_pGAS[282] //
s5k5caga_i2c_write(0x0F12, 0x0142);    //TVAR_ash_pGAS[283] //
s5k5caga_i2c_write(0x0F12, 0x017A);    //TVAR_ash_pGAS[284] //
s5k5caga_i2c_write(0x0F12, 0x01A8);    //TVAR_ash_pGAS[285] //
s5k5caga_i2c_write(0x0F12, 0x0191);    //TVAR_ash_pGAS[286] //
s5k5caga_i2c_write(0x0F12, 0x0152);    //TVAR_ash_pGAS[287] //
s5k5caga_i2c_write(0x0F12, 0x0118);    //TVAR_ash_pGAS[288] //
s5k5caga_i2c_write(0x0F12, 0x00EB);    //TVAR_ash_pGAS[289] //
s5k5caga_i2c_write(0x0F12, 0x00C8);    //TVAR_ash_pGAS[290] //
s5k5caga_i2c_write(0x0F12, 0x00B4);    //TVAR_ash_pGAS[291] //
s5k5caga_i2c_write(0x0F12, 0x00AF);    //TVAR_ash_pGAS[292] //
s5k5caga_i2c_write(0x0F12, 0x00BB);    //TVAR_ash_pGAS[293] //
s5k5caga_i2c_write(0x0F12, 0x00D5);    //TVAR_ash_pGAS[294] //
s5k5caga_i2c_write(0x0F12, 0x00FE);    //TVAR_ash_pGAS[295] //
s5k5caga_i2c_write(0x0F12, 0x012E);    //TVAR_ash_pGAS[296] //
s5k5caga_i2c_write(0x0F12, 0x016E);    //TVAR_ash_pGAS[297] //
s5k5caga_i2c_write(0x0F12, 0x01AC);    //TVAR_ash_pGAS[298] //
s5k5caga_i2c_write(0x0F12, 0x0166);    //TVAR_ash_pGAS[299] //
s5k5caga_i2c_write(0x0F12, 0x0121);    //TVAR_ash_pGAS[300] //
s5k5caga_i2c_write(0x0F12, 0x00E3);    //TVAR_ash_pGAS[301] //
s5k5caga_i2c_write(0x0F12, 0x00B3);    //TVAR_ash_pGAS[302] //
s5k5caga_i2c_write(0x0F12, 0x008E);    //TVAR_ash_pGAS[303] //
s5k5caga_i2c_write(0x0F12, 0x0079);    //TVAR_ash_pGAS[304] //
s5k5caga_i2c_write(0x0F12, 0x0074);    //TVAR_ash_pGAS[305] //
s5k5caga_i2c_write(0x0F12, 0x0081);    //TVAR_ash_pGAS[306] //
s5k5caga_i2c_write(0x0F12, 0x009D);    //TVAR_ash_pGAS[307] //
s5k5caga_i2c_write(0x0F12, 0x00C7);    //TVAR_ash_pGAS[308] //
s5k5caga_i2c_write(0x0F12, 0x00FF);    //TVAR_ash_pGAS[309] //
s5k5caga_i2c_write(0x0F12, 0x013F);    //TVAR_ash_pGAS[310] //
s5k5caga_i2c_write(0x0F12, 0x0188);    //TVAR_ash_pGAS[311] //
s5k5caga_i2c_write(0x0F12, 0x0134);    //TVAR_ash_pGAS[312] //
s5k5caga_i2c_write(0x0F12, 0x00F1);    //TVAR_ash_pGAS[313] //
s5k5caga_i2c_write(0x0F12, 0x00B1);    //TVAR_ash_pGAS[314] //
s5k5caga_i2c_write(0x0F12, 0x007C);    //TVAR_ash_pGAS[315] //
s5k5caga_i2c_write(0x0F12, 0x0057);    //TVAR_ash_pGAS[316] //
s5k5caga_i2c_write(0x0F12, 0x0041);    //TVAR_ash_pGAS[317] //
s5k5caga_i2c_write(0x0F12, 0x003C);    //TVAR_ash_pGAS[318] //
s5k5caga_i2c_write(0x0F12, 0x0048);    //TVAR_ash_pGAS[319] //
s5k5caga_i2c_write(0x0F12, 0x0065);    //TVAR_ash_pGAS[320] //
s5k5caga_i2c_write(0x0F12, 0x0091);    //TVAR_ash_pGAS[321] //
s5k5caga_i2c_write(0x0F12, 0x00CA);    //TVAR_ash_pGAS[322] //
s5k5caga_i2c_write(0x0F12, 0x010C);    //TVAR_ash_pGAS[323] //
s5k5caga_i2c_write(0x0F12, 0x0157);    //TVAR_ash_pGAS[324] //
s5k5caga_i2c_write(0x0F12, 0x0118);    //TVAR_ash_pGAS[325] //
s5k5caga_i2c_write(0x0F12, 0x00D2);    //TVAR_ash_pGAS[326] //
s5k5caga_i2c_write(0x0F12, 0x0091);    //TVAR_ash_pGAS[327] //
s5k5caga_i2c_write(0x0F12, 0x005C);    //TVAR_ash_pGAS[328] //
s5k5caga_i2c_write(0x0F12, 0x0035);    //TVAR_ash_pGAS[329] //
s5k5caga_i2c_write(0x0F12, 0x001E);    //TVAR_ash_pGAS[330] //
s5k5caga_i2c_write(0x0F12, 0x0019);    //TVAR_ash_pGAS[331] //
s5k5caga_i2c_write(0x0F12, 0x0025);    //TVAR_ash_pGAS[332] //
s5k5caga_i2c_write(0x0F12, 0x0043);    //TVAR_ash_pGAS[333] //
s5k5caga_i2c_write(0x0F12, 0x0070);    //TVAR_ash_pGAS[334] //
s5k5caga_i2c_write(0x0F12, 0x00A9);    //TVAR_ash_pGAS[335] //
s5k5caga_i2c_write(0x0F12, 0x00EE);    //TVAR_ash_pGAS[336] //
s5k5caga_i2c_write(0x0F12, 0x0136);    //TVAR_ash_pGAS[337] //
s5k5caga_i2c_write(0x0F12, 0x0105);    //TVAR_ash_pGAS[338] //
s5k5caga_i2c_write(0x0F12, 0x00BD);    //TVAR_ash_pGAS[339] //
s5k5caga_i2c_write(0x0F12, 0x007B);    //TVAR_ash_pGAS[340] //
s5k5caga_i2c_write(0x0F12, 0x0046);    //TVAR_ash_pGAS[341] //
s5k5caga_i2c_write(0x0F12, 0x001F);    //TVAR_ash_pGAS[342] //
s5k5caga_i2c_write(0x0F12, 0x0009);    //TVAR_ash_pGAS[343] //
s5k5caga_i2c_write(0x0F12, 0x0003);    //TVAR_ash_pGAS[344] //
s5k5caga_i2c_write(0x0F12, 0x000E);    //TVAR_ash_pGAS[345] //
s5k5caga_i2c_write(0x0F12, 0x002B);    //TVAR_ash_pGAS[346] //
s5k5caga_i2c_write(0x0F12, 0x0057);    //TVAR_ash_pGAS[347] //
s5k5caga_i2c_write(0x0F12, 0x0091);    //TVAR_ash_pGAS[348] //
s5k5caga_i2c_write(0x0F12, 0x00D7);    //TVAR_ash_pGAS[349] //
s5k5caga_i2c_write(0x0F12, 0x0121);    //TVAR_ash_pGAS[350] //
s5k5caga_i2c_write(0x0F12, 0x0105);    //TVAR_ash_pGAS[351] //
s5k5caga_i2c_write(0x0F12, 0x00BC);    //TVAR_ash_pGAS[352] //
s5k5caga_i2c_write(0x0F12, 0x0078);    //TVAR_ash_pGAS[353] //
s5k5caga_i2c_write(0x0F12, 0x0043);    //TVAR_ash_pGAS[354] //
s5k5caga_i2c_write(0x0F12, 0x001D);    //TVAR_ash_pGAS[355] //
s5k5caga_i2c_write(0x0F12, 0x0006);    //TVAR_ash_pGAS[356] //
s5k5caga_i2c_write(0x0F12, 0x0000);    //TVAR_ash_pGAS[357] //
s5k5caga_i2c_write(0x0F12, 0x000B);    //TVAR_ash_pGAS[358] //
s5k5caga_i2c_write(0x0F12, 0x0026);    //TVAR_ash_pGAS[359] //
s5k5caga_i2c_write(0x0F12, 0x0052);    //TVAR_ash_pGAS[360] //
s5k5caga_i2c_write(0x0F12, 0x008C);    //TVAR_ash_pGAS[361] //
s5k5caga_i2c_write(0x0F12, 0x00D3);    //TVAR_ash_pGAS[362] //
s5k5caga_i2c_write(0x0F12, 0x011E);    //TVAR_ash_pGAS[363] //
s5k5caga_i2c_write(0x0F12, 0x010D);    //TVAR_ash_pGAS[364] //
s5k5caga_i2c_write(0x0F12, 0x00C5);    //TVAR_ash_pGAS[365] //
s5k5caga_i2c_write(0x0F12, 0x0083);    //TVAR_ash_pGAS[366] //
s5k5caga_i2c_write(0x0F12, 0x004E);    //TVAR_ash_pGAS[367] //
s5k5caga_i2c_write(0x0F12, 0x0027);    //TVAR_ash_pGAS[368] //
s5k5caga_i2c_write(0x0F12, 0x000F);    //TVAR_ash_pGAS[369] //
s5k5caga_i2c_write(0x0F12, 0x0008);    //TVAR_ash_pGAS[370] //
s5k5caga_i2c_write(0x0F12, 0x0012);    //TVAR_ash_pGAS[371] //
s5k5caga_i2c_write(0x0F12, 0x002E);    //TVAR_ash_pGAS[372] //
s5k5caga_i2c_write(0x0F12, 0x0059);    //TVAR_ash_pGAS[373] //
s5k5caga_i2c_write(0x0F12, 0x0091);    //TVAR_ash_pGAS[374] //
s5k5caga_i2c_write(0x0F12, 0x00D6);    //TVAR_ash_pGAS[375] //
s5k5caga_i2c_write(0x0F12, 0x0120);    //TVAR_ash_pGAS[376] //
s5k5caga_i2c_write(0x0F12, 0x012A);    //TVAR_ash_pGAS[377] //
s5k5caga_i2c_write(0x0F12, 0x00E2);    //TVAR_ash_pGAS[378] //
s5k5caga_i2c_write(0x0F12, 0x00A2);    //TVAR_ash_pGAS[379] //
s5k5caga_i2c_write(0x0F12, 0x006D);    //TVAR_ash_pGAS[380] //
s5k5caga_i2c_write(0x0F12, 0x0045);    //TVAR_ash_pGAS[381] //
s5k5caga_i2c_write(0x0F12, 0x002D);    //TVAR_ash_pGAS[382] //
s5k5caga_i2c_write(0x0F12, 0x0025);    //TVAR_ash_pGAS[383] //
s5k5caga_i2c_write(0x0F12, 0x002E);    //TVAR_ash_pGAS[384] //
s5k5caga_i2c_write(0x0F12, 0x0049);    //TVAR_ash_pGAS[385] //
s5k5caga_i2c_write(0x0F12, 0x0073);    //TVAR_ash_pGAS[386] //
s5k5caga_i2c_write(0x0F12, 0x00AA);    //TVAR_ash_pGAS[387] //
s5k5caga_i2c_write(0x0F12, 0x00EC);    //TVAR_ash_pGAS[388] //
s5k5caga_i2c_write(0x0F12, 0x0135);    //TVAR_ash_pGAS[389] //
s5k5caga_i2c_write(0x0F12, 0x0149);    //TVAR_ash_pGAS[390] //
s5k5caga_i2c_write(0x0F12, 0x0105);    //TVAR_ash_pGAS[391] //
s5k5caga_i2c_write(0x0F12, 0x00C9);    //TVAR_ash_pGAS[392] //
s5k5caga_i2c_write(0x0F12, 0x0096);    //TVAR_ash_pGAS[393] //
s5k5caga_i2c_write(0x0F12, 0x006F);    //TVAR_ash_pGAS[394] //
s5k5caga_i2c_write(0x0F12, 0x0056);    //TVAR_ash_pGAS[395] //
s5k5caga_i2c_write(0x0F12, 0x004E);    //TVAR_ash_pGAS[396] //
s5k5caga_i2c_write(0x0F12, 0x0056);    //TVAR_ash_pGAS[397] //
s5k5caga_i2c_write(0x0F12, 0x006F);    //TVAR_ash_pGAS[398] //
s5k5caga_i2c_write(0x0F12, 0x0096);    //TVAR_ash_pGAS[399] //
s5k5caga_i2c_write(0x0F12, 0x00CA);    //TVAR_ash_pGAS[400] //
s5k5caga_i2c_write(0x0F12, 0x0109);    //TVAR_ash_pGAS[401] //
s5k5caga_i2c_write(0x0F12, 0x0153);    //TVAR_ash_pGAS[402] //
s5k5caga_i2c_write(0x0F12, 0x0181);    //TVAR_ash_pGAS[403] //
s5k5caga_i2c_write(0x0F12, 0x013B);    //TVAR_ash_pGAS[404] //
s5k5caga_i2c_write(0x0F12, 0x0102);    //TVAR_ash_pGAS[405] //
s5k5caga_i2c_write(0x0F12, 0x00D2);    //TVAR_ash_pGAS[406] //
s5k5caga_i2c_write(0x0F12, 0x00AE);    //TVAR_ash_pGAS[407] //
s5k5caga_i2c_write(0x0F12, 0x0096);    //TVAR_ash_pGAS[408] //
s5k5caga_i2c_write(0x0F12, 0x008D);    //TVAR_ash_pGAS[409] //
s5k5caga_i2c_write(0x0F12, 0x0094);    //TVAR_ash_pGAS[410] //
s5k5caga_i2c_write(0x0F12, 0x00AA);    //TVAR_ash_pGAS[411] //
s5k5caga_i2c_write(0x0F12, 0x00CC);    //TVAR_ash_pGAS[412] //
s5k5caga_i2c_write(0x0F12, 0x00F8);    //TVAR_ash_pGAS[413] //
s5k5caga_i2c_write(0x0F12, 0x0135);    //TVAR_ash_pGAS[414] //
s5k5caga_i2c_write(0x0F12, 0x0183);    //TVAR_ash_pGAS[415] //
s5k5caga_i2c_write(0x0F12, 0x01B0);    //TVAR_ash_pGAS[416] //
s5k5caga_i2c_write(0x0F12, 0x016F);    //TVAR_ash_pGAS[417] //
s5k5caga_i2c_write(0x0F12, 0x0139);    //TVAR_ash_pGAS[418] //
s5k5caga_i2c_write(0x0F12, 0x010E);    //TVAR_ash_pGAS[419] //
s5k5caga_i2c_write(0x0F12, 0x00ED);    //TVAR_ash_pGAS[420] //
s5k5caga_i2c_write(0x0F12, 0x00D6);    //TVAR_ash_pGAS[421] //
s5k5caga_i2c_write(0x0F12, 0x00CD);    //TVAR_ash_pGAS[422] //
s5k5caga_i2c_write(0x0F12, 0x00D3);    //TVAR_ash_pGAS[423] //
s5k5caga_i2c_write(0x0F12, 0x00E8);    //TVAR_ash_pGAS[424] //
s5k5caga_i2c_write(0x0F12, 0x0106);    //TVAR_ash_pGAS[425] //
s5k5caga_i2c_write(0x0F12, 0x012D);    //TVAR_ash_pGAS[426] //
s5k5caga_i2c_write(0x0F12, 0x0163);    //TVAR_ash_pGAS[427] //
s5k5caga_i2c_write(0x0F12, 0x0195);    //TVAR_ash_pGAS[428] //
s5k5caga_i2c_write(0x0F12, 0x0146);    //TVAR_ash_pGAS[429] //
s5k5caga_i2c_write(0x0F12, 0x011B);    //TVAR_ash_pGAS[430] //
s5k5caga_i2c_write(0x0F12, 0x00EC);    //TVAR_ash_pGAS[431] //
s5k5caga_i2c_write(0x0F12, 0x00C6);    //TVAR_ash_pGAS[432] //
s5k5caga_i2c_write(0x0F12, 0x00AD);    //TVAR_ash_pGAS[433] //
s5k5caga_i2c_write(0x0F12, 0x009F);    //TVAR_ash_pGAS[434] //
s5k5caga_i2c_write(0x0F12, 0x009C);    //TVAR_ash_pGAS[435] //
s5k5caga_i2c_write(0x0F12, 0x00A6);    //TVAR_ash_pGAS[436] //
s5k5caga_i2c_write(0x0F12, 0x00BC);    //TVAR_ash_pGAS[437] //
s5k5caga_i2c_write(0x0F12, 0x00DF);    //TVAR_ash_pGAS[438] //
s5k5caga_i2c_write(0x0F12, 0x010B);    //TVAR_ash_pGAS[439] //
s5k5caga_i2c_write(0x0F12, 0x0146);    //TVAR_ash_pGAS[440] //
s5k5caga_i2c_write(0x0F12, 0x0176);    //TVAR_ash_pGAS[441] //
s5k5caga_i2c_write(0x0F12, 0x0120);    //TVAR_ash_pGAS[442] //
s5k5caga_i2c_write(0x0F12, 0x00EC);    //TVAR_ash_pGAS[443] //
s5k5caga_i2c_write(0x0F12, 0x00BA);    //TVAR_ash_pGAS[444] //
s5k5caga_i2c_write(0x0F12, 0x0093);    //TVAR_ash_pGAS[445] //
s5k5caga_i2c_write(0x0F12, 0x007A);    //TVAR_ash_pGAS[446] //
s5k5caga_i2c_write(0x0F12, 0x006C);    //TVAR_ash_pGAS[447] //
s5k5caga_i2c_write(0x0F12, 0x0069);    //TVAR_ash_pGAS[448] //
s5k5caga_i2c_write(0x0F12, 0x0073);    //TVAR_ash_pGAS[449] //
s5k5caga_i2c_write(0x0F12, 0x008B);    //TVAR_ash_pGAS[450] //
s5k5caga_i2c_write(0x0F12, 0x00AD);    //TVAR_ash_pGAS[451] //
s5k5caga_i2c_write(0x0F12, 0x00DD);    //TVAR_ash_pGAS[452] //
s5k5caga_i2c_write(0x0F12, 0x0118);    //TVAR_ash_pGAS[453] //
s5k5caga_i2c_write(0x0F12, 0x0156);    //TVAR_ash_pGAS[454] //
s5k5caga_i2c_write(0x0F12, 0x00F0);    //TVAR_ash_pGAS[455] //
s5k5caga_i2c_write(0x0F12, 0x00BF);    //TVAR_ash_pGAS[456] //
s5k5caga_i2c_write(0x0F12, 0x0089);    //TVAR_ash_pGAS[457] //
s5k5caga_i2c_write(0x0F12, 0x0062);    //TVAR_ash_pGAS[458] //
s5k5caga_i2c_write(0x0F12, 0x0047);    //TVAR_ash_pGAS[459] //
s5k5caga_i2c_write(0x0F12, 0x003A);    //TVAR_ash_pGAS[460] //
s5k5caga_i2c_write(0x0F12, 0x0038);    //TVAR_ash_pGAS[461] //
s5k5caga_i2c_write(0x0F12, 0x0041);    //TVAR_ash_pGAS[462] //
s5k5caga_i2c_write(0x0F12, 0x0058);    //TVAR_ash_pGAS[463] //
s5k5caga_i2c_write(0x0F12, 0x007C);    //TVAR_ash_pGAS[464] //
s5k5caga_i2c_write(0x0F12, 0x00AC);    //TVAR_ash_pGAS[465] //
s5k5caga_i2c_write(0x0F12, 0x00E7);    //TVAR_ash_pGAS[466] //
s5k5caga_i2c_write(0x0F12, 0x0123);    //TVAR_ash_pGAS[467] //
s5k5caga_i2c_write(0x0F12, 0x00D5);    //TVAR_ash_pGAS[468] //
s5k5caga_i2c_write(0x0F12, 0x00A1);    //TVAR_ash_pGAS[469] //
s5k5caga_i2c_write(0x0F12, 0x006C);    //TVAR_ash_pGAS[470] //
s5k5caga_i2c_write(0x0F12, 0x0044);    //TVAR_ash_pGAS[471] //
s5k5caga_i2c_write(0x0F12, 0x0029);    //TVAR_ash_pGAS[472] //
s5k5caga_i2c_write(0x0F12, 0x001B);    //TVAR_ash_pGAS[473] //
s5k5caga_i2c_write(0x0F12, 0x0018);    //TVAR_ash_pGAS[474] //
s5k5caga_i2c_write(0x0F12, 0x0022);    //TVAR_ash_pGAS[475] //
s5k5caga_i2c_write(0x0F12, 0x0039);    //TVAR_ash_pGAS[476] //
s5k5caga_i2c_write(0x0F12, 0x005D);    //TVAR_ash_pGAS[477] //
s5k5caga_i2c_write(0x0F12, 0x008E);    //TVAR_ash_pGAS[478] //
s5k5caga_i2c_write(0x0F12, 0x00CA);    //TVAR_ash_pGAS[479] //
s5k5caga_i2c_write(0x0F12, 0x0105);    //TVAR_ash_pGAS[480] //
s5k5caga_i2c_write(0x0F12, 0x00C1);    //TVAR_ash_pGAS[481] //
s5k5caga_i2c_write(0x0F12, 0x008C);    //TVAR_ash_pGAS[482] //
s5k5caga_i2c_write(0x0F12, 0x0057); 	//TVAR_ash_pGAS[483] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x002F); 	//TVAR_ash_pGAS[484] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0014); 	//TVAR_ash_pGAS[485] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0006); 	//TVAR_ash_pGAS[486] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0003); 	//TVAR_ash_pGAS[487] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x000B); 	//TVAR_ash_pGAS[488] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0022); 	//TVAR_ash_pGAS[489] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0046); 	//TVAR_ash_pGAS[490] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0076); 	//TVAR_ash_pGAS[491] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00B4); 	//TVAR_ash_pGAS[492] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00F0); 	//TVAR_ash_pGAS[493] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00C1); 	//TVAR_ash_pGAS[494] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x008B); 	//TVAR_ash_pGAS[495] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0055); 	//TVAR_ash_pGAS[496] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x002C); 	//TVAR_ash_pGAS[497] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0011); 	//TVAR_ash_pGAS[498] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0003); 	//TVAR_ash_pGAS[499] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0000); 	//TVAR_ash_pGAS[500] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0007); 	//TVAR_ash_pGAS[501] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x001D); 	//TVAR_ash_pGAS[502] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0040); 	//TVAR_ash_pGAS[503] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0070); 	//TVAR_ash_pGAS[504] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00AF); 	//TVAR_ash_pGAS[505] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00EC); 	//TVAR_ash_pGAS[506] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00C6); 	//TVAR_ash_pGAS[507] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0092); 	//TVAR_ash_pGAS[508] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x005D); 	//TVAR_ash_pGAS[509] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0035); 	//TVAR_ash_pGAS[510] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0019); 	//TVAR_ash_pGAS[511] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x000A); 	//TVAR_ash_pGAS[512] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0006); 	//TVAR_ash_pGAS[513] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x000E); 	//TVAR_ash_pGAS[514] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0024); 	//TVAR_ash_pGAS[515] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0046); 	//TVAR_ash_pGAS[516] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0074); 	//TVAR_ash_pGAS[517] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00B0); 	//TVAR_ash_pGAS[518] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00ED); 	//TVAR_ash_pGAS[519] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00E0); 	//TVAR_ash_pGAS[520] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00AA); 	//TVAR_ash_pGAS[521] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0078); 	//TVAR_ash_pGAS[522] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0050); 	//TVAR_ash_pGAS[523] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0034); 	//TVAR_ash_pGAS[524] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0024); 	//TVAR_ash_pGAS[525] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x001F); 	//TVAR_ash_pGAS[526] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0026); 	//TVAR_ash_pGAS[527] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x003A); 	//TVAR_ash_pGAS[528] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x005D); 	//TVAR_ash_pGAS[529] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x008B); 	//TVAR_ash_pGAS[530] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00C4); 	//TVAR_ash_pGAS[531] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00FE); 	//TVAR_ash_pGAS[532] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00FE); 	//TVAR_ash_pGAS[533] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00CB); 	//TVAR_ash_pGAS[534] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0099); 	//TVAR_ash_pGAS[535] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0074); 	//TVAR_ash_pGAS[536] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x005A); 	//TVAR_ash_pGAS[537] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x004B); 	//TVAR_ash_pGAS[538] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0046); 	//TVAR_ash_pGAS[539] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x004A); 	//TVAR_ash_pGAS[540] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x005C); 	//TVAR_ash_pGAS[541] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x007A); 	//TVAR_ash_pGAS[542] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00A7); 	//TVAR_ash_pGAS[543] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00E0); 	//TVAR_ash_pGAS[544] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0119); 	//TVAR_ash_pGAS[545] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0131); 	//TVAR_ash_pGAS[546] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00FD); 	//TVAR_ash_pGAS[547] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00CF); 	//TVAR_ash_pGAS[548] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00AC); 	//TVAR_ash_pGAS[549] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0092); 	//TVAR_ash_pGAS[550] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0084); 	//TVAR_ash_pGAS[551] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x007F); 	//TVAR_ash_pGAS[552] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0085); 	//TVAR_ash_pGAS[553] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0094); 	//TVAR_ash_pGAS[554] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00AE); 	//TVAR_ash_pGAS[555] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00CF); 	//TVAR_ash_pGAS[556] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0107); 	//TVAR_ash_pGAS[557] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0148); 	//TVAR_ash_pGAS[558] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x015F); 	//TVAR_ash_pGAS[559] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x012F); 	//TVAR_ash_pGAS[560] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0102); 	//TVAR_ash_pGAS[561] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00E3); 	//TVAR_ash_pGAS[562] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00CA); 	//TVAR_ash_pGAS[563] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00BD); 	//TVAR_ash_pGAS[564] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00B8); 	//TVAR_ash_pGAS[565] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00BC); 	//TVAR_ash_pGAS[566] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00CB); 	//TVAR_ash_pGAS[567] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00E4); 	//TVAR_ash_pGAS[568] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0104); 	//TVAR_ash_pGAS[569] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x012E); 	//TVAR_ash_pGAS[570] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0148); 	//TVAR_ash_pGAS[571] //                                                                        
                     
s5k5caga_i2c_write(0x002A, 0x074E); 	    
s5k5caga_i2c_write(0x0F12, 0x0001); 	//ash_bLumaMode //         	                                                                        
s5k5caga_i2c_write(0x002A, 0x0D30);                                
s5k5caga_i2c_write(0x0F12, 0x02A8); 	//awbb_GLocu //        
s5k5caga_i2c_write(0x0F12, 0x0347); 	//awbb_GLocuSB //      
                                                
s5k5caga_i2c_write(0x002A, 0x06B8);                                
s5k5caga_i2c_write(0x0F12, 0x00C0); 	//TVAR_ash_AwbashCord[0] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x00E0); 	//TVAR_ash_AwbashCord[1] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0120); 	//TVAR_ash_AwbashCord[2] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0124); 	//TVAR_ash_AwbashCord[3] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0156); 	//TVAR_ash_AwbashCord[4] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x017F); 	//TVAR_ash_AwbashCord[5] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x018F); 	//TVAR_ash_AwbashCord[6] //                                                                        
                                                
                                                
s5k5caga_i2c_write(0x002A, 0x0664);                                
s5k5caga_i2c_write(0x0F12, 0x013E); 	//seti_uContrastCenter //                                                                          
                                                
                                                
s5k5caga_i2c_write(0x002A, 0x06C6);                                
s5k5caga_i2c_write(0x0F12, 0x010B); 	//ash_CGrasalphaS[0] //
s5k5caga_i2c_write(0x0F12, 0x0103); 	//ash_CGrasalphaS[1] //
s5k5caga_i2c_write(0x0F12, 0x00FC); 	//ash_CGrasalphaS[2] //
s5k5caga_i2c_write(0x0F12, 0x010C); 	//ash_CGrasalphaS[3] //
                     
s5k5caga_i2c_write(0x002A, 0x0C48);     
s5k5caga_i2c_write(0x0F12, 0x03C8);  //03C9	//awbb_IndoorGrZones_m_BGrid[0] // 		                                                                        
s5k5caga_i2c_write(0x0F12, 0x03DE);  //03DE	//awbb_IndoorGrZones_m_BGrid[1] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x0372);  //0372	//awbb_IndoorGrZones_m_BGrid[2] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x03EA);  //03EA	//awbb_IndoorGrZones_m_BGrid[3] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x0336);  //0336	//awbb_IndoorGrZones_m_BGrid[4] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x03DE);  //03DE	//awbb_IndoorGrZones_m_BGrid[5] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x0302);  //0302	//awbb_IndoorGrZones_m_BGrid[6] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x03A2);  //03A2	//awbb_IndoorGrZones_m_BGrid[7] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x02C8);  //02c8	//awbb_IndoorGrZones_m_BGrid[8] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x0368);  //0368	//awbb_IndoorGrZones_m_BGrid[9] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x0292);  //0292	//awbb_IndoorGrZones_m_BGrid[10] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x033A);  //033A	//awbb_IndoorGrZones_m_BGrid[11] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0276);  //0262	//awbb_IndoorGrZones_m_BGrid[12] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0306);  //0306	//awbb_IndoorGrZones_m_BGrid[13] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x025A);  //0250	//awbb_IndoorGrZones_m_BGrid[14] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x02C2);  //02C2	//awbb_IndoorGrZones_m_BGrid[15] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0246);  //023A	//awbb_IndoorGrZones_m_BGrid[16] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x02A2);  //02A2	//awbb_IndoorGrZones_m_BGrid[17] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0232);  //0228	//awbb_IndoorGrZones_m_BGrid[18] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0298);  //0298	//awbb_IndoorGrZones_m_BGrid[19] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x021E);  //0210	//awbb_IndoorGrZones_m_BGrid[20] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x027E);  //029C	//awbb_IndoorGrZones_m_BGrid[21] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0208);  //01FE	//awbb_IndoorGrZones_m_BGrid[22] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x026C);  //0292	//awbb_IndoorGrZones_m_BGrid[23] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x01EE);  //01EE	//awbb_IndoorGrZones_m_BGrid[24] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x025C);  //0278	//awbb_IndoorGrZones_m_BGrid[25] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x01F0);  //01F2	//awbb_IndoorGrZones_m_BGrid[26] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0248);  //0268	//awbb_IndoorGrZones_m_BGrid[27] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0000);  //0200	//awbb_IndoorGrZones_m_BGrid[28] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0000);  //0246	//awbb_IndoorGrZones_m_BGrid[29] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_IndoorGrZones_m_BGrid[30] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_IndoorGrZones_m_BGrid[31] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_IndoorGrZones_m_BGrid[32] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_IndoorGrZones_m_BGrid[33] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_IndoorGrZones_m_BGrid[34] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_IndoorGrZones_m_BGrid[35] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_IndoorGrZones_m_BGrid[36] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_IndoorGrZones_m_BGrid[37] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_IndoorGrZones_m_BGrid[38] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_IndoorGrZones_m_BGrid[39] //                                                                        
                                                        
s5k5caga_i2c_write(0x0F12, 0x0005);    //awbb_IndoorGrZones_m_Gridstep //  

s5k5caga_i2c_write(0x002A, 0x0C9C); 
s5k5caga_i2c_write(0x0F12, 0x000E); 
s5k5caga_i2c_write(0x002A, 0x0CA0);                                        
s5k5caga_i2c_write(0x0F12, 0x0108); 	//awbb_IndoorGrZones_m_Boffs //
                                                        
s5k5caga_i2c_write(0x002A, 0x0CE0);                                        
s5k5caga_i2c_write(0x0F12, 0x03D4); 	//awbb_LowBrGrZones_m_BGrid[0] //                                                                          
s5k5caga_i2c_write(0x0F12, 0x043E); 	//awbb_LowBrGrZones_m_BGrid[1] //                                                                          
s5k5caga_i2c_write(0x0F12, 0x035C); 	//awbb_LowBrGrZones_m_BGrid[2] //                                                                          
s5k5caga_i2c_write(0x0F12, 0x0438); 	//awbb_LowBrGrZones_m_BGrid[3] //                                                                          
s5k5caga_i2c_write(0x0F12, 0x02F0); 	//awbb_LowBrGrZones_m_BGrid[4] //                                                                          
s5k5caga_i2c_write(0x0F12, 0x042D); 	//awbb_LowBrGrZones_m_BGrid[5] //                                                                          
s5k5caga_i2c_write(0x0F12, 0x029A); 	//awbb_LowBrGrZones_m_BGrid[6] //                                                                          
s5k5caga_i2c_write(0x0F12, 0x03EF); 	//awbb_LowBrGrZones_m_BGrid[7] //                                                                          
s5k5caga_i2c_write(0x0F12, 0x025E); 	//awbb_LowBrGrZones_m_BGrid[8] //                                                                          
s5k5caga_i2c_write(0x0F12, 0x0395); 	//awbb_LowBrGrZones_m_BGrid[9] //                                                                          
s5k5caga_i2c_write(0x0F12, 0x022E); 	//awbb_LowBrGrZones_m_BGrid[10] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x0346); 	//awbb_LowBrGrZones_m_BGrid[11] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x0200); 	//awbb_LowBrGrZones_m_BGrid[12] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x02F6); 	//awbb_LowBrGrZones_m_BGrid[13] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x01CE); 	//awbb_LowBrGrZones_m_BGrid[14] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x02C8); 	//awbb_LowBrGrZones_m_BGrid[15] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x01BB); 	//awbb_LowBrGrZones_m_BGrid[16] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x0287); 	//awbb_LowBrGrZones_m_BGrid[17] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x01E2); 	//awbb_LowBrGrZones_m_BGrid[18] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x0239); 	//awbb_LowBrGrZones_m_BGrid[19] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_LowBrGrZones_m_BGrid[20] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_LowBrGrZones_m_BGrid[21] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_LowBrGrZones_m_BGrid[22] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_LowBrGrZones_m_BGrid[23] //                                                                         
                     
s5k5caga_i2c_write(0x0F12, 0x0006); 	//awbb_LowBrGrZones_m_Gridstep //	                                                                        
s5k5caga_i2c_write(0x002A, 0x0D18);                                      
s5k5caga_i2c_write(0x0F12, 0x00AE); 	//awbb_LowBrGrZones_m_Boff //

s5k5caga_i2c_write(0x002A, 0x0CA4);     
s5k5caga_i2c_write(0x0F12, 0x026E); 	//0294//0286//02C2//awbb_OutdoorGrZones_m_BGrid[0] // 		                                                                        
s5k5caga_i2c_write(0x0F12, 0x02A4); 	//02CB//02BD//02E0//awbb_OutdoorGrZones_m_BGrid[1] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x0262); 	//027A//026C//0278//awbb_OutdoorGrZones_m_BGrid[2] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x02A8); 	//02D7//02C9//02BC//awbb_OutdoorGrZones_m_BGrid[3] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x0256); 	//0266//0258//025A//awbb_OutdoorGrZones_m_BGrid[4] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x02AE); 	//02BF//02B1//02A2//awbb_OutdoorGrZones_m_BGrid[5] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x0248); 	//0252//0244//024A//awbb_OutdoorGrZones_m_BGrid[6] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x02A4); 	//02A8//029A//0288//awbb_OutdoorGrZones_m_BGrid[7] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x023E); 	//023E//0230//0240//awbb_OutdoorGrZones_m_BGrid[8] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x029A); 	//028F//0281//0278//awbb_OutdoorGrZones_m_BGrid[9] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x023A); 	//0239//022B//023E//awbb_OutdoorGrZones_m_BGrid[10] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0290); 	//027A//026C//0254//awbb_OutdoorGrZones_m_BGrid[11] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x023A); 	//024A//023C//0000//awbb_OutdoorGrZones_m_BGrid[12] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x027E); 	//0260//0252//0000//awbb_OutdoorGrZones_m_BGrid[13] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0244); 	//0000//0000//0000//awbb_OutdoorGrZones_m_BGrid[14] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0266); 	//0000//0000//0000//awbb_OutdoorGrZones_m_BGrid[15] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0000); 	//0000//0000//0000//awbb_OutdoorGrZones_m_BGrid[16] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0000); 	//0000//0000//0000//awbb_OutdoorGrZones_m_BGrid[17] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0000); 	//0000//0000//0000//awbb_OutdoorGrZones_m_BGrid[18] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0000); 	//0000//0000//0000//awbb_OutdoorGrZones_m_BGrid[19] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0000); 	//0000//0000//0000//awbb_OutdoorGrZones_m_BGrid[20] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0000); 	//0000//0000//0000//awbb_OutdoorGrZones_m_BGrid[21] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0000); 	//0000//0000//0000//awbb_OutdoorGrZones_m_BGrid[22] //                                                                        
s5k5caga_i2c_write(0x0F12, 0x0000); 	//0000//0000//0000//awbb_OutdoorGrZones_m_BGrid[23] //                                                                        

s5k5caga_i2c_write(0x0F12, 0x0004); 	//awbb_OutdoorGrZones_m_Gridstep //       
s5k5caga_i2c_write(0x002A, 0x0CD8);                                                           
s5k5caga_i2c_write(0x0F12, 0x0008);                
s5k5caga_i2c_write(0x002A, 0x0CDC);                                                           
s5k5caga_i2c_write(0x0F12, 0x0204); 	//awbb_OutdoorGrZones_m_Boff //                   
s5k5caga_i2c_write(0x002A, 0x0D1C);                                                           
s5k5caga_i2c_write(0x0F12, 0x037C); 	//awbb_CrclLowT_R_c //                            
s5k5caga_i2c_write(0x002A, 0x0D20);                                                           
s5k5caga_i2c_write(0x0F12, 0x0157); 	//awbb_CrclLowT_B_c //                            
s5k5caga_i2c_write(0x002A, 0x0D24);                                                           
s5k5caga_i2c_write(0x0F12, 0x3EB8); 	//awbb_CrclLowT_Rad_c // 

s5k5caga_i2c_write(0x002A, 0x0D2C);     
s5k5caga_i2c_write(0x0F12, 0x013D); 	//awbb_IntcR //	                                                                        
s5k5caga_i2c_write(0x0F12, 0x011E); 	//awbb_IntcB //                                                                        
s5k5caga_i2c_write(0x002A, 0x0D46);     
s5k5caga_i2c_write(0x0F12, 0x04C0); 	//0554//055D//0396//04A2//awbb_MvEq_RBthresh //	                                                                        
                     
                     
                     
s5k5caga_i2c_write(0x002A, 0x0D28);     //wp outdoor
s5k5caga_i2c_write(0x0F12, 0x0270); 	                                                                        
s5k5caga_i2c_write(0x0F12, 0x0240); 	                                                                        
                                                                    
                                        
s5k5caga_i2c_write(0x002A, 0x0D5C);     
s5k5caga_i2c_write(0x0F12, 0x7FFF); 	                                                                        
s5k5caga_i2c_write(0x0F12, 0x0050); 	                                                                        
                     
s5k5caga_i2c_write(0x002A, 0x2316);     
s5k5caga_i2c_write(0x0F12, 0x0006); 	                                                                        
                     
s5k5caga_i2c_write(0x002A, 0x0E44);     
s5k5caga_i2c_write(0x0F12, 0x059A); //0525 	                                                                        
s5k5caga_i2c_write(0x0F12, 0x0400); 	                                                                        
s5k5caga_i2c_write(0x0F12, 0x059A); //078C 	                                                                        
                     
s5k5caga_i2c_write(0x002A, 0x0E36);     
s5k5caga_i2c_write(0x0F12, 0x0028); 	 //R OFFSET                                                                       
s5k5caga_i2c_write(0x0F12, 0xFFD8); 	 //B OFFSET                                                                       
s5k5caga_i2c_write(0x0F12, 0x0000); 	 //G OFFSET                                                                       

s5k5caga_i2c_write(0x002A, 0x0DD4);     
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_GridCorr_R[0] //        	                                                                        
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_GridCorr_R[1] //    
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_GridCorr_R[2] //    
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_GridCorr_R[3] //    
s5k5caga_i2c_write(0x0F12, 0xFFF0); 	//awbb_GridCorr_R[4] //    
s5k5caga_i2c_write(0x0F12, 0x0080); 	//awbb_GridCorr_R[5] //    
               
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_GridCorr_R[6] //    
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_GridCorr_R[7] //    
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_GridCorr_R[8] //    
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_GridCorr_R[9] //    
s5k5caga_i2c_write(0x0F12, 0xFFF0); 	//awbb_GridCorr_R[10] //   
s5k5caga_i2c_write(0x0F12, 0x0080); 	//awbb_GridCorr_R[11] //   
               
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_GridCorr_R[12] //   
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_GridCorr_R[13] //   
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_GridCorr_R[14] //   
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_GridCorr_R[15] //   
s5k5caga_i2c_write(0x0F12, 0xFFF0); 	//awbb_GridCorr_R[16] //   
s5k5caga_i2c_write(0x0F12, 0x0080); 	//awbb_GridCorr_R[17] //   
               
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_GridCorr_B[0] ////                                                                        
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_GridCorr_B[1] //                                                                          
s5k5caga_i2c_write(0x0F12, 0x0032); 	//awbb_GridCorr_B[2] //                                                                          
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_GridCorr_B[3] //                                                                          
s5k5caga_i2c_write(0x0F12, 0x0020); 	//awbb_GridCorr_B[4] //                                                                          
s5k5caga_i2c_write(0x0F12, 0xFFC0); 	//awbb_GridCorr_B[5] //                                                                          
           
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_GridCorr_B[6] //                                                                          
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_GridCorr_B[7] //                                                                          
s5k5caga_i2c_write(0x0F12, 0x0032); 	//awbb_GridCorr_B[8] //                                                                          
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_GridCorr_B[9] //                                                                          
s5k5caga_i2c_write(0x0F12, 0x0020); 	//awbb_GridCorr_B[10] //                                                                         
s5k5caga_i2c_write(0x0F12, 0xFFC0); 	//awbb_GridCorr_B[11] //                                                                         
           
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_GridCorr_B[12] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_GridCorr_B[13] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x0032); 	//awbb_GridCorr_B[14] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x0000); 	//awbb_GridCorr_B[15] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x0020); 	//awbb_GridCorr_B[16] //   
s5k5caga_i2c_write(0x0F12, 0xFFC0); 	//awbb_GridCorr_B[17] //                 
                
s5k5caga_i2c_write(0x0F12, 0x02D9); 	//awbb_GridConst_1[0] //                                                                     
s5k5caga_i2c_write(0x0F12, 0x0357); 	//awbb_GridConst_1[1] //                                                                     
s5k5caga_i2c_write(0x0F12, 0x03D1); 	//awbb_GridConst_1[2] //                                                                     
                
                
s5k5caga_i2c_write(0x0F12, 0x0DF6); 	//0E4F//0DE9//0DE9//awbb_GridConst_2[0] //                                                   
s5k5caga_i2c_write(0x0F12, 0x0ED8); 	//0EDD//0EDD//0EDD//awbb_GridConst_2[1] //                                                   
s5k5caga_i2c_write(0x0F12, 0x0F51); 	//0F42//0F42//0F42//awbb_GridConst_2[2] //                                                   
s5k5caga_i2c_write(0x0F12, 0x0F5C); 	//0F4E//0F4E//0F54//awbb_GridConst_2[3] //                                                   
s5k5caga_i2c_write(0x0F12, 0x0F8F); 	//0F99//0F99//0FAE//awbb_GridConst_2[4] //                                                   
s5k5caga_i2c_write(0x0F12, 0x1006); 	//1006//1006//1011//awbb_GridConst_2[5] //                                                   
                
s5k5caga_i2c_write(0x0F12, 0x00AC); 	//00BA//awbb_GridCoeff_R_1                                                                   
s5k5caga_i2c_write(0x0F12, 0x00BD); 	//00AF//awbb_GridCoeff_B_1                                                                   
s5k5caga_i2c_write(0x0F12, 0x0049); 	//0049//awbb_GridCoeff_R_2                                                                   
s5k5caga_i2c_write(0x0F12, 0x00F5); 	//00F5//awbb_GridCoeff_B_2                                                                   
                
s5k5caga_i2c_write(0x002A, 0x0E4A);                          
s5k5caga_i2c_write(0x0F12, 0x0002); 	//awbb_GridEnable//                                                                          
                
s5k5caga_i2c_write(0x002A, 0x051A);                          
s5k5caga_i2c_write(0x0F12, 0x010E); 	//lt_uLimitHigh//
s5k5caga_i2c_write(0x0F12, 0x00F5); 	//lt_uLimitLow// 
                
                
s5k5caga_i2c_write(0x002A, 0x0F76);                          
s5k5caga_i2c_write(0x0F12, 0x0007); 	//ae_statmode BLC off : 0x0F, 0xon : 0x0D//  illumType On : 07 , Off : 0F
                
s5k5caga_i2c_write(0x002A, 0x1034);                          
s5k5caga_i2c_write(0x0F12, 0x00C0); 	//saRR_IllumType[0] //                                                                       
s5k5caga_i2c_write(0x0F12, 0x00E0); 	//saRR_IllumType[1] //                                                                       
s5k5caga_i2c_write(0x0F12, 0x0104); 	//saRR_IllumType[2] //                                                                       
s5k5caga_i2c_write(0x0F12, 0x0129); 	//saRR_IllumType[3] //                                                                       
s5k5caga_i2c_write(0x0F12, 0x0156); 	//saRR_IllumType[4] //                                                                       
s5k5caga_i2c_write(0x0F12, 0x017F); 	//saRR_IllumType[5] //                                                                       
s5k5caga_i2c_write(0x0F12, 0x018F); 	//saRR_IllumType[6] //                                                                       
                
                
s5k5caga_i2c_write(0x0F12, 0x0120); 	//saRR_IllumTypeF[0] //                                                                      
s5k5caga_i2c_write(0x0F12, 0x0120); 	//saRR_IllumTypeF[1] //                                                                      
s5k5caga_i2c_write(0x0F12, 0x0120); 	//saRR_IllumTypeF[2] //                                                                      
s5k5caga_i2c_write(0x0F12, 0x0100); 	//saRR_IllumTypeF[3] //                                                                      
s5k5caga_i2c_write(0x0F12, 0x0100); 	//saRR_IllumTypeF[4] //                                                                      
s5k5caga_i2c_write(0x0F12, 0x0100); 	//saRR_IllumTypeF[5] //                                                                      
s5k5caga_i2c_write(0x0F12, 0x0100); 	//saRR_IllumTypeF[6] //                                                                      
                     
                     
                     
s5k5caga_i2c_write(0x002A, 0x3288); 	//saRR_usDualGammaLutRGBIndoor  //               	                                                                        
s5k5caga_i2c_write(0x0F12, 0x0000);  //	saRR_usDualGammaLutRGBIndoor[0] //[0] //                                                 
s5k5caga_i2c_write(0x0F12, 0x0008);  //  saRR_usDualGammaLutRGBIndoor[0] //[1] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0013);  //  saRR_usDualGammaLutRGBIndoor[0] //[2] //                                                       
s5k5caga_i2c_write(0x0F12, 0x002C);  //  saRR_usDualGammaLutRGBIndoor[0] //[3] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0062);  //  saRR_usDualGammaLutRGBIndoor[0] //[4] //                                                       
s5k5caga_i2c_write(0x0F12, 0x00CD);  //  saRR_usDualGammaLutRGBIndoor[0] //[5] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0129);  //  saRR_usDualGammaLutRGBIndoor[0] //[6] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0151);  //  saRR_usDualGammaLutRGBIndoor[0] //[7] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0174);  //  saRR_usDualGammaLutRGBIndoor[0] //[8] //                                                       
s5k5caga_i2c_write(0x0F12, 0x01AA);  //  saRR_usDualGammaLutRGBIndoor[0] //[9] //                                                       
s5k5caga_i2c_write(0x0F12, 0x01D7);  //  saRR_usDualGammaLutRGBIndoor[0] //[10] //                                                      
s5k5caga_i2c_write(0x0F12, 0x01FE);  //  saRR_usDualGammaLutRGBIndoor[0] //[11] //                                                      
s5k5caga_i2c_write(0x0F12, 0x0221);  //  saRR_usDualGammaLutRGBIndoor[0] //[12] //                                                      
s5k5caga_i2c_write(0x0F12, 0x025D);  //  saRR_usDualGammaLutRGBIndoor[0] //[13] //                                                      
s5k5caga_i2c_write(0x0F12, 0x0291);  //  saRR_usDualGammaLutRGBIndoor[0] //[14] //                                                      
s5k5caga_i2c_write(0x0F12, 0x02EB);  //  saRR_usDualGammaLutRGBIndoor[0] //[15] //                                                      
s5k5caga_i2c_write(0x0F12, 0x033A);  //  saRR_usDualGammaLutRGBIndoor[0] //[16] //                                                      
s5k5caga_i2c_write(0x0F12, 0x0380);  //  saRR_usDualGammaLutRGBIndoor[0] //[17] //                                                      
s5k5caga_i2c_write(0x0F12, 0x03C2);  //  saRR_usDualGammaLutRGBIndoor[0] //[18] //                                                      
s5k5caga_i2c_write(0x0F12, 0x03FF);  //  saRR_usDualGammaLutRGBIndoor[0] //[19] //                                                      
s5k5caga_i2c_write(0x0F12, 0x0000);  //  saRR_usDualGammaLutRGBIndoor[1] //[0] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0008);  //  saRR_usDualGammaLutRGBIndoor[1] //[1] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0013);  //  saRR_usDualGammaLutRGBIndoor[1] //[2] //                                                       
s5k5caga_i2c_write(0x0F12, 0x002C);  //  saRR_usDualGammaLutRGBIndoor[1] //[3] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0062);  //  saRR_usDualGammaLutRGBIndoor[1] //[4] //                                                       
s5k5caga_i2c_write(0x0F12, 0x00CD);  //  saRR_usDualGammaLutRGBIndoor[1] //[5] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0129);  //  saRR_usDualGammaLutRGBIndoor[1] //[6] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0151);  //  saRR_usDualGammaLutRGBIndoor[1] //[7] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0174);  //  saRR_usDualGammaLutRGBIndoor[1] //[8] //                                                       
s5k5caga_i2c_write(0x0F12, 0x01AA);  //  saRR_usDualGammaLutRGBIndoor[1] //[9] //                                                       
s5k5caga_i2c_write(0x0F12, 0x01D7);  //  saRR_usDualGammaLutRGBIndoor[1] //[10] //                                                      
s5k5caga_i2c_write(0x0F12, 0x01FE);  //  saRR_usDualGammaLutRGBIndoor[1] //[11] //                                                      
s5k5caga_i2c_write(0x0F12, 0x0221);  //  saRR_usDualGammaLutRGBIndoor[1] //[12] //                                                      
s5k5caga_i2c_write(0x0F12, 0x025D);  //  saRR_usDualGammaLutRGBIndoor[1] //[13] //                                                      
s5k5caga_i2c_write(0x0F12, 0x0291);  //  saRR_usDualGammaLutRGBIndoor[1] //[14] //                                                      
s5k5caga_i2c_write(0x0F12, 0x02EB);  //  saRR_usDualGammaLutRGBIndoor[1] //[15] //                                                      
s5k5caga_i2c_write(0x0F12, 0x033A);  //  saRR_usDualGammaLutRGBIndoor[1] //[16] //                                                      
s5k5caga_i2c_write(0x0F12, 0x0380);  //  saRR_usDualGammaLutRGBIndoor[1] //[17] //                                                      
s5k5caga_i2c_write(0x0F12, 0x03C2);  //  saRR_usDualGammaLutRGBIndoor[1] //[18] //                                                      
s5k5caga_i2c_write(0x0F12, 0x03FF);  //  saRR_usDualGammaLutRGBIndoor[1] //[19] //                                                      
s5k5caga_i2c_write(0x0F12, 0x0000);  //  saRR_usDualGammaLutRGBIndoor[2] //[0] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0008);  //  saRR_usDualGammaLutRGBIndoor[2] //[1] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0013);  //  saRR_usDualGammaLutRGBIndoor[2] //[2] //                                                       
s5k5caga_i2c_write(0x0F12, 0x002C);  //  saRR_usDualGammaLutRGBIndoor[2] //[3] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0062);  //  saRR_usDualGammaLutRGBIndoor[2] //[4] //                                                       
s5k5caga_i2c_write(0x0F12, 0x00CD);  //  saRR_usDualGammaLutRGBIndoor[2] //[5] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0129);  //  saRR_usDualGammaLutRGBIndoor[2] //[6] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0151);  //  saRR_usDualGammaLutRGBIndoor[2] //[7] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0174);  //  saRR_usDualGammaLutRGBIndoor[2] //[8] //                                                       
s5k5caga_i2c_write(0x0F12, 0x01AA);  //  saRR_usDualGammaLutRGBIndoor[2] //[9] //                                                       
s5k5caga_i2c_write(0x0F12, 0x01D7);  //  saRR_usDualGammaLutRGBIndoor[2] //[10] //                                                      
s5k5caga_i2c_write(0x0F12, 0x01FE);  //  saRR_usDualGammaLutRGBIndoor[2] //[11] //                                                      
s5k5caga_i2c_write(0x0F12, 0x0221);  //  saRR_usDualGammaLutRGBIndoor[2] //[12] //                                                      
s5k5caga_i2c_write(0x0F12, 0x025D);  //  saRR_usDualGammaLutRGBIndoor[2] //[13] //                                                      
s5k5caga_i2c_write(0x0F12, 0x0291);  //  saRR_usDualGammaLutRGBIndoor[2] //[14] //                                                      
s5k5caga_i2c_write(0x0F12, 0x02EB);  //  saRR_usDualGammaLutRGBIndoor[2] //[15] //                                                      
s5k5caga_i2c_write(0x0F12, 0x033A);  //  saRR_usDualGammaLutRGBIndoor[2] //[16] //                                                      
s5k5caga_i2c_write(0x0F12, 0x0380);  //  saRR_usDualGammaLutRGBIndoor[2] //[17] //                                                      
s5k5caga_i2c_write(0x0F12, 0x03C2);  //  saRR_usDualGammaLutRGBIndoor[2] //[18] //                                                      
s5k5caga_i2c_write(0x0F12, 0x03FF);  //  saRR_usDualGammaLutRGBIndoor[2] //[19] //                                                      
                                            
                                            
s5k5caga_i2c_write(0x0F12, 0x0000); 	//			saRR_usDualGammaLutRGBOutdoor[0] //[0] //
s5k5caga_i2c_write(0x0F12, 0x0008); 	//  saRR_usDualGammaLutRGBOutdoor[0] //[1] //                                                
s5k5caga_i2c_write(0x0F12, 0x0013); 	//  saRR_usDualGammaLutRGBOutdoor[0] //[2] //                                                
s5k5caga_i2c_write(0x0F12, 0x002C); 	//  saRR_usDualGammaLutRGBOutdoor[0] //[3] //                                                
s5k5caga_i2c_write(0x0F12, 0x0062); 	//  saRR_usDualGammaLutRGBOutdoor[0] //[4] //                                                
s5k5caga_i2c_write(0x0F12, 0x00CD); 	//  saRR_usDualGammaLutRGBOutdoor[0] //[5] //                                                
s5k5caga_i2c_write(0x0F12, 0x0129); 	//  saRR_usDualGammaLutRGBOutdoor[0] //[6] //                                                
s5k5caga_i2c_write(0x0F12, 0x0151); 	//  saRR_usDualGammaLutRGBOutdoor[0] //[7] //                                                
s5k5caga_i2c_write(0x0F12, 0x0174); 	//  saRR_usDualGammaLutRGBOutdoor[0] //[8] //                                                
s5k5caga_i2c_write(0x0F12, 0x01AA); 	//  saRR_usDualGammaLutRGBOutdoor[0] //[9] //                                                
s5k5caga_i2c_write(0x0F12, 0x01D7); 	//  saRR_usDualGammaLutRGBOutdoor[0] //[10] //                                               
s5k5caga_i2c_write(0x0F12, 0x01FE); 	//  saRR_usDualGammaLutRGBOutdoor[0] //[11] //                                               
s5k5caga_i2c_write(0x0F12, 0x0221); 	//  saRR_usDualGammaLutRGBOutdoor[0] //[12] //                                               
s5k5caga_i2c_write(0x0F12, 0x025D); 	//  saRR_usDualGammaLutRGBOutdoor[0] //[13] //                                               
s5k5caga_i2c_write(0x0F12, 0x0291); 	//  saRR_usDualGammaLutRGBOutdoor[0] //[14] //                                               
s5k5caga_i2c_write(0x0F12, 0x02EB); 	//  saRR_usDualGammaLutRGBOutdoor[0] //[15] //                                               
s5k5caga_i2c_write(0x0F12, 0x033A); 	//  saRR_usDualGammaLutRGBOutdoor[0] //[16] //                                               
s5k5caga_i2c_write(0x0F12, 0x0380); 	//  saRR_usDualGammaLutRGBOutdoor[0] //[17] //                                               
s5k5caga_i2c_write(0x0F12, 0x03C2); 	//  saRR_usDualGammaLutRGBOutdoor[0] //[18] //                                               
s5k5caga_i2c_write(0x0F12, 0x03FF); 	//  saRR_usDualGammaLutRGBOutdoor[0] //[19] //                                               
s5k5caga_i2c_write(0x0F12, 0x0000); 	//  saRR_usDualGammaLutRGBOutdoor[1] //[0] //                                                
s5k5caga_i2c_write(0x0F12, 0x0008); 	//  saRR_usDualGammaLutRGBOutdoor[1] //[1] //                                                
s5k5caga_i2c_write(0x0F12, 0x0013); 	//  saRR_usDualGammaLutRGBOutdoor[1] //[2] //                                                
s5k5caga_i2c_write(0x0F12, 0x002C); 	//  saRR_usDualGammaLutRGBOutdoor[1] //[3] //                                                
s5k5caga_i2c_write(0x0F12, 0x0062); 	//  saRR_usDualGammaLutRGBOutdoor[1] //[4] //                                                
s5k5caga_i2c_write(0x0F12, 0x00CD); 	//  saRR_usDualGammaLutRGBOutdoor[1] //[5] //                                                
s5k5caga_i2c_write(0x0F12, 0x0129); 	//  saRR_usDualGammaLutRGBOutdoor[1] //[6] //                                                
s5k5caga_i2c_write(0x0F12, 0x0151); 	//  saRR_usDualGammaLutRGBOutdoor[1] //[7] //                                                
s5k5caga_i2c_write(0x0F12, 0x0174); 	//  saRR_usDualGammaLutRGBOutdoor[1] //[8] //                                                
s5k5caga_i2c_write(0x0F12, 0x01AA); 	//  saRR_usDualGammaLutRGBOutdoor[1] //[9] //                                                
s5k5caga_i2c_write(0x0F12, 0x01D7); 	//  saRR_usDualGammaLutRGBOutdoor[1] //[10] //                                               
s5k5caga_i2c_write(0x0F12, 0x01FE); 	//  saRR_usDualGammaLutRGBOutdoor[1] //[11] //                                               
s5k5caga_i2c_write(0x0F12, 0x0221); 	//  saRR_usDualGammaLutRGBOutdoor[1] //[12] //                                               
s5k5caga_i2c_write(0x0F12, 0x025D); 	//  saRR_usDualGammaLutRGBOutdoor[1] //[13] //                                               
s5k5caga_i2c_write(0x0F12, 0x0291); 	//  saRR_usDualGammaLutRGBOutdoor[1] //[14] //                                               
s5k5caga_i2c_write(0x0F12, 0x02EB); 	//  saRR_usDualGammaLutRGBOutdoor[1] //[15] //                                               
s5k5caga_i2c_write(0x0F12, 0x033A); 	//  saRR_usDualGammaLutRGBOutdoor[1] //[16] //                                               
s5k5caga_i2c_write(0x0F12, 0x0380); 	//  saRR_usDualGammaLutRGBOutdoor[1] //[17] //                                               
s5k5caga_i2c_write(0x0F12, 0x03C2); 	//  saRR_usDualGammaLutRGBOutdoor[1] //[18] //                                               
s5k5caga_i2c_write(0x0F12, 0x03FF); 	//  saRR_usDualGammaLutRGBOutdoor[1] //[19] //                                               
s5k5caga_i2c_write(0x0F12, 0x0000); 	//  saRR_usDualGammaLutRGBOutdoor[2] //[0] //                                                
s5k5caga_i2c_write(0x0F12, 0x0008); 	//  saRR_usDualGammaLutRGBOutdoor[2] //[1] //                                                
s5k5caga_i2c_write(0x0F12, 0x0013); 	//  saRR_usDualGammaLutRGBOutdoor[2] //[2] //                                                
s5k5caga_i2c_write(0x0F12, 0x002C); 	//  saRR_usDualGammaLutRGBOutdoor[2] //[3] //                                                
s5k5caga_i2c_write(0x0F12, 0x0062); 	//  saRR_usDualGammaLutRGBOutdoor[2] //[4] //                                                
s5k5caga_i2c_write(0x0F12, 0x00CD); 	//  saRR_usDualGammaLutRGBOutdoor[2] //[5] //                                                
s5k5caga_i2c_write(0x0F12, 0x0129); 	//  saRR_usDualGammaLutRGBOutdoor[2] //[6] //                                                
s5k5caga_i2c_write(0x0F12, 0x0151); 	//  saRR_usDualGammaLutRGBOutdoor[2] //[7] //                                                
s5k5caga_i2c_write(0x0F12, 0x0174); 	//  saRR_usDualGammaLutRGBOutdoor[2] //[8] //                                                
s5k5caga_i2c_write(0x0F12, 0x01AA); 	//  saRR_usDualGammaLutRGBOutdoor[2] //[9] //                                                
s5k5caga_i2c_write(0x0F12, 0x01D7); 	//  saRR_usDualGammaLutRGBOutdoor[2] //[10] //                                               
s5k5caga_i2c_write(0x0F12, 0x01FE); 	//  saRR_usDualGammaLutRGBOutdoor[2] //[11] //                                               
s5k5caga_i2c_write(0x0F12, 0x0221); 	//  saRR_usDualGammaLutRGBOutdoor[2] //[12] //                                               
s5k5caga_i2c_write(0x0F12, 0x025D); 	//  saRR_usDualGammaLutRGBOutdoor[2] //[13] //                                               
s5k5caga_i2c_write(0x0F12, 0x0291); 	//  saRR_usDualGammaLutRGBOutdoor[2] //[14] //                                               
s5k5caga_i2c_write(0x0F12, 0x02EB); 	//  saRR_usDualGammaLutRGBOutdoor[2] //[15] //                                               
s5k5caga_i2c_write(0x0F12, 0x033A); 	//  saRR_usDualGammaLutRGBOutdoor[2] //[16] //                                               
s5k5caga_i2c_write(0x0F12, 0x0380); 	//  saRR_usDualGammaLutRGBOutdoor[2] //[17] //                                               
s5k5caga_i2c_write(0x0F12, 0x03C2); 	//  saRR_usDualGammaLutRGBOutdoor[2] //[18] //                                               
s5k5caga_i2c_write(0x0F12, 0x03FF); 	//  saRR_usDualGammaLutRGBOutdoor[2] //[19] //                                               
                                            
                                            
s5k5caga_i2c_write(0x002A, 0x06A6);                            
s5k5caga_i2c_write(0x0F12, 0x00C0); 	//saRR_AwbCcmCord[0] //                      
s5k5caga_i2c_write(0x0F12, 0x00E0); 	//saRR_AwbCcmCord[1] //                      
s5k5caga_i2c_write(0x0F12, 0x0110); 	//saRR_AwbCcmCord[2] //                      
s5k5caga_i2c_write(0x0F12, 0x0139); 	//saRR_AwbCcmCord[3] //                      
s5k5caga_i2c_write(0x0F12, 0x0166); 	//saRR_AwbCcmCord[4] //                      
s5k5caga_i2c_write(0x0F12, 0x019F); 	//saRR_AwbCcmCord[5] //                      
                     
s5k5caga_i2c_write(0x002A, 0x33A4);     
s5k5caga_i2c_write(0x0F12, 0x0181); 	  //TVAR_wbt_pBaseCcmS[0] //                                                           
s5k5caga_i2c_write(0x0F12, 0xFF88);    //TVAR_wbt_pBaseCcmS[1] //                                                        
s5k5caga_i2c_write(0x0F12, 0xFF90);    //TVAR_wbt_pBaseCcmS[2] //                                                        
s5k5caga_i2c_write(0x0F12, 0xFE6B);    //TVAR_wbt_pBaseCcmS[3] //                                                        
s5k5caga_i2c_write(0x0F12, 0x0106);    //TVAR_wbt_pBaseCcmS[4] //                                                        
s5k5caga_i2c_write(0x0F12, 0xFF0B);    //TVAR_wbt_pBaseCcmS[5] //                                                        
s5k5caga_i2c_write(0x0F12, 0xFFDD);    //TVAR_wbt_pBaseCcmS[6] //                                                        
s5k5caga_i2c_write(0x0F12, 0xFFEE);    //TVAR_wbt_pBaseCcmS[7] //                                                        
s5k5caga_i2c_write(0x0F12, 0x01CB);    //TVAR_wbt_pBaseCcmS[8] //                                                        
s5k5caga_i2c_write(0x0F12, 0x0187);    //TVAR_wbt_pBaseCcmS[9] //                                                        
s5k5caga_i2c_write(0x0F12, 0x00A6);    //TVAR_wbt_pBaseCcmS[10] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFEBE);    //TVAR_wbt_pBaseCcmS[11] //                                                       
s5k5caga_i2c_write(0x0F12, 0x021C);    //TVAR_wbt_pBaseCcmS[12] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFF5F);    //TVAR_wbt_pBaseCcmS[13] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0175);    //TVAR_wbt_pBaseCcmS[14] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFEE7);    //TVAR_wbt_pBaseCcmS[15] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0106);    //TVAR_wbt_pBaseCcmS[16] //                                                       
s5k5caga_i2c_write(0x0F12, 0x00F3);    //TVAR_wbt_pBaseCcmS[17] //                                                       
     
s5k5caga_i2c_write(0x0F12, 0x0181);    //TVAR_wbt_pBaseCcmS[18] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFF88);    //TVAR_wbt_pBaseCcmS[19] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFF90);    //TVAR_wbt_pBaseCcmS[20] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFE6B);    //TVAR_wbt_pBaseCcmS[21] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0106);    //TVAR_wbt_pBaseCcmS[22] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFF0B);    //TVAR_wbt_pBaseCcmS[23] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFFDD);    //TVAR_wbt_pBaseCcmS[24] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFFEE);    //TVAR_wbt_pBaseCcmS[25] //                                                       
s5k5caga_i2c_write(0x0F12, 0x01CB);    //TVAR_wbt_pBaseCcmS[26] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0187);    //TVAR_wbt_pBaseCcmS[27] //                                                       
s5k5caga_i2c_write(0x0F12, 0x00A6);    //TVAR_wbt_pBaseCcmS[28] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFEBE);    //TVAR_wbt_pBaseCcmS[29] //                                                       
s5k5caga_i2c_write(0x0F12, 0x021C);    //TVAR_wbt_pBaseCcmS[30] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFF5F);    //TVAR_wbt_pBaseCcmS[31] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0175);    //TVAR_wbt_pBaseCcmS[32] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFEE7);    //TVAR_wbt_pBaseCcmS[33] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0106);    //TVAR_wbt_pBaseCcmS[34] //                                                       
s5k5caga_i2c_write(0x0F12, 0x00F3);    //TVAR_wbt_pBaseCcmS[35] //                                                       
    
s5k5caga_i2c_write(0x0F12, 0x0181);    //TVAR_wbt_pBaseCcmS[36] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFF88);    //TVAR_wbt_pBaseCcmS[37] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFF90);    //TVAR_wbt_pBaseCcmS[38] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFE6B);    //TVAR_wbt_pBaseCcmS[39] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0106);    //TVAR_wbt_pBaseCcmS[40] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFF0B);    //TVAR_wbt_pBaseCcmS[41] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFFDD);    //TVAR_wbt_pBaseCcmS[42] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFFEE);    //TVAR_wbt_pBaseCcmS[43] //                                                       
s5k5caga_i2c_write(0x0F12, 0x01CB);    //TVAR_wbt_pBaseCcmS[44] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0187);    //TVAR_wbt_pBaseCcmS[45] //                                                       
s5k5caga_i2c_write(0x0F12, 0x00A6);    //TVAR_wbt_pBaseCcmS[46] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFEBE);    //TVAR_wbt_pBaseCcmS[47] //                                                       
s5k5caga_i2c_write(0x0F12, 0x021C);    //TVAR_wbt_pBaseCcmS[48] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFF5F);    //TVAR_wbt_pBaseCcmS[49] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0175);    //TVAR_wbt_pBaseCcmS[50] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFEE7);    //TVAR_wbt_pBaseCcmS[51] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0106);    //TVAR_wbt_pBaseCcmS[52] //                                                       
s5k5caga_i2c_write(0x0F12, 0x00F3);    //TVAR_wbt_pBaseCcmS[53] //                                                                        
   
s5k5caga_i2c_write(0x0F12, 0x01FD);   //01FA   //TVAR_wbt_pBaseCcmS[54] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFFAB);   //FF9B   //TVAR_wbt_pBaseCcmS[55] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFFED);   //FFFF   //TVAR_wbt_pBaseCcmS[56] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFEB5);   //FE9F   //TVAR_wbt_pBaseCcmS[57] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0112);   //010F   //TVAR_wbt_pBaseCcmS[58] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFEDC);   //FEF5   //TVAR_wbt_pBaseCcmS[59] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFFD2);   //FFD2   //TVAR_wbt_pBaseCcmS[60] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0015);   //0015   //TVAR_wbt_pBaseCcmS[61] //                                                       
s5k5caga_i2c_write(0x0F12, 0x01A1);   //01A1   //TVAR_wbt_pBaseCcmS[62] //                                                       
s5k5caga_i2c_write(0x0F12, 0x0111);   //0111   //TVAR_wbt_pBaseCcmS[63] //                                                       
s5k5caga_i2c_write(0x0F12, 0x009D);   //009D   //TVAR_wbt_pBaseCcmS[64] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFECB);   //FECB   //TVAR_wbt_pBaseCcmS[65] //                                                       
s5k5caga_i2c_write(0x0F12, 0x01FC);   //01FC   //TVAR_wbt_pBaseCcmS[66] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFF99);   //FF99   //TVAR_wbt_pBaseCcmS[67] //                                                       
s5k5caga_i2c_write(0x0F12, 0x01A9);   //01A9   //TVAR_wbt_pBaseCcmS[68] //                                                       
s5k5caga_i2c_write(0x0F12, 0xFF26);   //FF26   //TVAR_wbt_pBaseCcmS[69] //                                                       
s5k5caga_i2c_write(0x0F12, 0x012B);   //012B   //TVAR_wbt_pBaseCcmS[70] //                                                       
s5k5caga_i2c_write(0x0F12, 0x00DF);   //00DF   //TVAR_wbt_pBaseCcmS[71] //    
      
s5k5caga_i2c_write(0x0F12, 0x01E3);   //01E2   //TVAR_wbt_pBaseCcmS[72] //                                                 
s5k5caga_i2c_write(0x0F12, 0xFFA4);   //FF9A   //TVAR_wbt_pBaseCcmS[73] //                                                 
s5k5caga_i2c_write(0x0F12, 0xFFDB);   //FFE7   //TVAR_wbt_pBaseCcmS[74] //                                                 
s5k5caga_i2c_write(0x0F12, 0xFEB5);   //FE9F   //TVAR_wbt_pBaseCcmS[75] //                                                 
s5k5caga_i2c_write(0x0F12, 0x0112);   //010F   //TVAR_wbt_pBaseCcmS[76] //                                                 
s5k5caga_i2c_write(0x0F12, 0xFEDC);   //FEF5   //TVAR_wbt_pBaseCcmS[77] //                                                 
s5k5caga_i2c_write(0x0F12, 0xFFD2);   //FFD2   //TVAR_wbt_pBaseCcmS[78] //                                                 
s5k5caga_i2c_write(0x0F12, 0xFFFE);   //FFFE   //TVAR_wbt_pBaseCcmS[79] //                                                 
s5k5caga_i2c_write(0x0F12, 0x01B7);   //01B7   //TVAR_wbt_pBaseCcmS[80] //                                                 
s5k5caga_i2c_write(0x0F12, 0x00E8);   //00E8   //TVAR_wbt_pBaseCcmS[81] //                                                 
s5k5caga_i2c_write(0x0F12, 0x0095);   //0095   //TVAR_wbt_pBaseCcmS[82] //                                                 
s5k5caga_i2c_write(0x0F12, 0xFF0D);   //FF0D   //TVAR_wbt_pBaseCcmS[83] //                                                 
s5k5caga_i2c_write(0x0F12, 0x0182);   //0182   //TVAR_wbt_pBaseCcmS[84] //                                                 
s5k5caga_i2c_write(0x0F12, 0xFF29);   //FF29   //TVAR_wbt_pBaseCcmS[85] //                                                 
s5k5caga_i2c_write(0x0F12, 0x0146);   //0146   //TVAR_wbt_pBaseCcmS[86] //                                                 
s5k5caga_i2c_write(0x0F12, 0xFF26);   //FF26   //TVAR_wbt_pBaseCcmS[87] //                                                 
s5k5caga_i2c_write(0x0F12, 0x012B);   //012B   //TVAR_wbt_pBaseCcmS[88] //                                                 
s5k5caga_i2c_write(0x0F12, 0x00DF);   //00DF   //TVAR_wbt_pBaseCcmS[89] //                                                                         

s5k5caga_i2c_write(0x0F12, 0x01E3);   //01E2   //TVAR_wbt_pBaseCcmS[90] //                                                 
s5k5caga_i2c_write(0x0F12, 0xFFA4);   //FF9A   //TVAR_wbt_pBaseCcmS[91] //                                                 
s5k5caga_i2c_write(0x0F12, 0xFFDB);   //FFE7   //TVAR_wbt_pBaseCcmS[92] //                                                 
s5k5caga_i2c_write(0x0F12, 0xFEB5);   //FE9F   //TVAR_wbt_pBaseCcmS[93] //                                                 
s5k5caga_i2c_write(0x0F12, 0x0112);   //010F   //TVAR_wbt_pBaseCcmS[94] //                                                 
s5k5caga_i2c_write(0x0F12, 0xFEDC);   //FEF5   //TVAR_wbt_pBaseCcmS[95] //                                                 
s5k5caga_i2c_write(0x0F12, 0xFFD2);   //FFD2   //TVAR_wbt_pBaseCcmS[96] //                                                 
s5k5caga_i2c_write(0x0F12, 0xFFFE);   //FFFE   //TVAR_wbt_pBaseCcmS[97] //                                                 
s5k5caga_i2c_write(0x0F12, 0x01B7);   //01B7   //TVAR_wbt_pBaseCcmS[98] //                                                 
s5k5caga_i2c_write(0x0F12, 0x00E8);   //00E8   //TVAR_wbt_pBaseCcmS[99] //                                                 
s5k5caga_i2c_write(0x0F12, 0x0095);   //0095   //TVAR_wbt_pBaseCcmS[100] //                                                
s5k5caga_i2c_write(0x0F12, 0xFF0D);   //FF0D   //TVAR_wbt_pBaseCcmS[101] //                                                
s5k5caga_i2c_write(0x0F12, 0x0182);   //0182   //TVAR_wbt_pBaseCcmS[102] //                                                
s5k5caga_i2c_write(0x0F12, 0xFF29);   //FF29   //TVAR_wbt_pBaseCcmS[103] //                                                
s5k5caga_i2c_write(0x0F12, 0x0146);   //0146   //TVAR_wbt_pBaseCcmS[104] //                                                
s5k5caga_i2c_write(0x0F12, 0xFF26);   //FF26   //TVAR_wbt_pBaseCcmS[105] //                                                
s5k5caga_i2c_write(0x0F12, 0x012B);   //012B   //TVAR_wbt_pBaseCcmS[106] //                                                
s5k5caga_i2c_write(0x0F12, 0x00DF);   //00DF   //TVAR_wbt_pBaseCcmS[107] //                                                
                                       
s5k5caga_i2c_write(0x002A, 0x3380);     
s5k5caga_i2c_write(0x0F12, 0x020E);   //0223   //0223  //01F3  //01F3  //TVAR_wbt_pOutdoorCcm[0] //  
s5k5caga_i2c_write(0x0F12, 0xFF88);   //FF7C   //FF7C  //FFA4  //FFA4  //TVAR_wbt_pOutdoorCcm[1] //  
s5k5caga_i2c_write(0x0F12, 0xFFCE);   //FFC5   //FFC5  //FFE4  //FFE4  //TVAR_wbt_pOutdoorCcm[2] //  
s5k5caga_i2c_write(0x0F12, 0xFE3D);   //FE3D   //FE3D  //FE3D  //FE23  //TVAR_wbt_pOutdoorCcm[3] //  
s5k5caga_i2c_write(0x0F12, 0x0158);   //0158   //0158  //0158  //017D  //TVAR_wbt_pOutdoorCcm[4] //  
s5k5caga_i2c_write(0x0F12, 0xFF03);   //FF03   //FF03  //FF03  //FEF9  //TVAR_wbt_pOutdoorCcm[5] //  
s5k5caga_i2c_write(0x0F12, 0xFF99);   //FF9F   //FF9F  //FF9F  //FF9F  //TVAR_wbt_pOutdoorCcm[6] //  
s5k5caga_i2c_write(0x0F12, 0x0018);   //0011   //0011  //0011  //0011  //TVAR_wbt_pOutdoorCcm[7] //  
s5k5caga_i2c_write(0x0F12, 0x0235);   //0237   //0237  //0237  //0237  //TVAR_wbt_pOutdoorCcm[8] //  
s5k5caga_i2c_write(0x0F12, 0x0101);   //00EB   //00D1  //012A  //0143  //TVAR_wbt_pOutdoorCcm[9] //  
s5k5caga_i2c_write(0x0F12, 0x0116);   //012A   //0125  //00CA  //00F6  //TVAR_wbt_pOutdoorCcm[10] // 
s5k5caga_i2c_write(0x0F12, 0xFF00);   //FF02   //FEF5  //FEF6  //FEB1  //TVAR_wbt_pOutdoorCcm[11] // 
s5k5caga_i2c_write(0x0F12, 0x01C5);   //01C5   //01C5  //01C5  //01C5  //TVAR_wbt_pOutdoorCcm[12] // 
s5k5caga_i2c_write(0x0F12, 0xFF80);   //FF80   //FF80  //FF80  //FF80  //TVAR_wbt_pOutdoorCcm[13] // 
s5k5caga_i2c_write(0x0F12, 0x019D);   //019D   //019D  //019D  //019D  //TVAR_wbt_pOutdoorCcm[14] // 
s5k5caga_i2c_write(0x0F12, 0xFE7A);   //FE7A   //FE7A  //FE7A  //FE7A  //TVAR_wbt_pOutdoorCcm[15] // 
s5k5caga_i2c_write(0x0F12, 0x0179);   //0179   //0179  //0179  //0179  //TVAR_wbt_pOutdoorCcm[16] // 
s5k5caga_i2c_write(0x0F12, 0x0179);   //0179   //0179  //0179  //0179  //TVAR_wbt_pOutdoorCcm[17] // 
                   
                        
                        
s5k5caga_i2c_write(0x002A, 0x0764);        
s5k5caga_i2c_write(0x0F12, 0x0049); 	//afit_uNoiseIndInDoor[0] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x005F); 	//afit_uNoiseIndInDoor[1] //                                                                         
s5k5caga_i2c_write(0x0F12, 0x00CB); 	//afit_uNoiseIndInDoor[2] // 203//                                                                   
s5k5caga_i2c_write(0x0F12, 0x01E0); 	//afit_uNoiseIndInDoor[3] // Indoor_NB below 1500 _Noise index 300-400d //                           
s5k5caga_i2c_write(0x0F12, 0x0220); 	//afit_uNoiseIndInDoor[4] // DNP NB 4600 _ Noisenidex :560d-230h //                                  
                        
                        
s5k5caga_i2c_write(0x002A, 0x07C4);        
s5k5caga_i2c_write(0x0F12, 0x0014); 	//700007C4 //TVAR_afit_pBaseValS[0] // AFIT16_BRIGHTNESS                                                                                  
s5k5caga_i2c_write(0x0F12, 0x0000); 	//700007C6 //TVAR_afit_pBaseValS[1] // AFIT16_CONTRAST                                                                                    
s5k5caga_i2c_write(0x0F12, 0x0014); 	//700007C8 //TVAR_afit_pBaseValS[2] // AFIT16_SATURATION                                                                                  
s5k5caga_i2c_write(0x0F12, 0x0000); 	//700007CA //TVAR_afit_pBaseValS[3] // AFIT16_SHARP_BLUR                                                                                  
s5k5caga_i2c_write(0x0F12, 0x0000); 	//700007CC //TVAR_afit_pBaseValS[4] // AFIT16_GLAMOUR                                                                                     
s5k5caga_i2c_write(0x0F12, 0x00C1); 	//700007CE //TVAR_afit_pBaseValS[5] // AFIT16_sddd8a_edge_high                                                                            
s5k5caga_i2c_write(0x0F12, 0x03FF); 	//700007D0 //TVAR_afit_pBaseValS[6] // AFIT16_Demosaicing_iSatVal                                                                         
s5k5caga_i2c_write(0x0F12, 0x009C); 	//700007D2 //TVAR_afit_pBaseValS[7] // AFIT16_Sharpening_iReduceEdgeThresh                                                                
s5k5caga_i2c_write(0x0F12, 0x0251); 	//700007D4 //TVAR_afit_pBaseValS[8] // AFIT16_demsharpmix1_iRGBOffset                                                                     
s5k5caga_i2c_write(0x0F12, 0x03FF); 	//700007D6 //TVAR_afit_pBaseValS[9] // AFIT16_demsharpmix1_iDemClamp                                                                      
s5k5caga_i2c_write(0x0F12, 0x000C); 	//700007D8 //TVAR_afit_pBaseValS[10] //AFIT16_demsharpmix1_iLowThreshold                                                                  
s5k5caga_i2c_write(0x0F12, 0x0010); 	//700007DA //TVAR_afit_pBaseValS[11] //AFIT16_demsharpmix1_iHighThreshold                                                                 
s5k5caga_i2c_write(0x0F12, 0x012C); 	//700007DC //TVAR_afit_pBaseValS[12] //AFIT16_demsharpmix1_iLowBright                                                                     
s5k5caga_i2c_write(0x0F12, 0x03E8); 	//700007DE //TVAR_afit_pBaseValS[13] //AFIT16_demsharpmix1_iHighBright                                                                    
s5k5caga_i2c_write(0x0F12, 0x0046); 	//700007E0 //TVAR_afit_pBaseValS[14] //AFIT16_demsharpmix1_iLowSat                                                                        
s5k5caga_i2c_write(0x0F12, 0x005A); 	//700007E2 //TVAR_afit_pBaseValS[15] //AFIT16_demsharpmix1_iHighSat                                                                       
s5k5caga_i2c_write(0x0F12, 0x0070); 	//700007E4 //TVAR_afit_pBaseValS[16] //AFIT16_demsharpmix1_iTune                                                                          
s5k5caga_i2c_write(0x0F12, 0x0000); 	//700007E6 //TVAR_afit_pBaseValS[17] //AFIT16_demsharpmix1_iHystThLow                                                                     
s5k5caga_i2c_write(0x0F12, 0x0000); 	//700007E8 //TVAR_afit_pBaseValS[18] //AFIT16_demsharpmix1_iHystThHigh                                                                    
s5k5caga_i2c_write(0x0F12, 0x01AA); 	//700007EA //TVAR_afit_pBaseValS[19] //AFIT16_demsharpmix1_iHystCenter                                                                    
s5k5caga_i2c_write(0x0F12, 0x003C); 	//700007EC //TVAR_afit_pBaseValS[20] //AFIT16_YUV422_DENOISE_iUVLowThresh                                                                 
s5k5caga_i2c_write(0x0F12, 0x003C); 	//700007EE //TVAR_afit_pBaseValS[21] //AFIT16_YUV422_DENOISE_iUVHighThresh                                                                
s5k5caga_i2c_write(0x0F12, 0x0000); 	//700007F0 //TVAR_afit_pBaseValS[22] //AFIT16_YUV422_DENOISE_iYLowThresh                                                                  
s5k5caga_i2c_write(0x0F12, 0x0000); 	//700007F2 //TVAR_afit_pBaseValS[23] //AFIT16_YUV422_DENOISE_iYHighThresh                                                                 
s5k5caga_i2c_write(0x0F12, 0x003E); 	//700007F4 //TVAR_afit_pBaseValS[24] //AFIT16_Sharpening_iLowSharpClamp                                                                   
s5k5caga_i2c_write(0x0F12, 0x0008); 	//700007F6 //TVAR_afit_pBaseValS[25] //AFIT16_Sharpening_iHighSharpClamp                                                                  
s5k5caga_i2c_write(0x0F12, 0x003C); 	//700007F8 //TVAR_afit_pBaseValS[26] //AFIT16_Sharpening_iLowSharpClamp_Bin                                                               
s5k5caga_i2c_write(0x0F12, 0x001E); 	//700007FA //TVAR_afit_pBaseValS[27] //AFIT16_Sharpening_iHighSharpClamp_Bin                                                              
s5k5caga_i2c_write(0x0F12, 0x003C); 	//700007FC //TVAR_afit_pBaseValS[28] //AFIT16_Sharpening_iLowSharpClamp_sBin                                                              
s5k5caga_i2c_write(0x0F12, 0x001E); 	//700007FE //TVAR_afit_pBaseValS[29] //AFIT16_Sharpening_iHighSharpClamp_sBin                                                             
s5k5caga_i2c_write(0x0F12, 0x0A24); 	//70000800 //TVAR_afit_pBaseValS[30] //AFIT8_sddd8a_edge_low [7:0],   AFIT8_sddd8a_repl_thresh [15:8]                                     
s5k5caga_i2c_write(0x0F12, 0x1701); 	//70000802 //TVAR_afit_pBaseValS[31] //AFIT8_sddd8a_repl_force [7:0],  AFIT8_sddd8a_sat_level [15:8]                                      
s5k5caga_i2c_write(0x0F12, 0x0229); 	//70000804 //TVAR_afit_pBaseValS[32] //AFIT8_sddd8a_sat_thr[7:0],  AFIT8_sddd8a_sat_mpl [15:8]                                            
s5k5caga_i2c_write(0x0F12, 0x1403); 	//70000806 //TVAR_afit_pBaseValS[33] //AFIT8_sddd8a_sat_noise[7:0],  AFIT8_sddd8a_iMaxSlopeAllowed [15:8]                                 
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000808 //TVAR_afit_pBaseValS[34] //AFIT8_sddd8a_iHotThreshHigh[7:0],  AFIT8_sddd8a_iHotThreshLow [15:8]                               
s5k5caga_i2c_write(0x0F12, 0x0000); 	//7000080A //TVAR_afit_pBaseValS[35] //AFIT8_sddd8a_iColdThreshHigh[7:0],  AFIT8_sddd8a_iColdThreshLow [15:8]                             
s5k5caga_i2c_write(0x0F12, 0x0000); 	//7000080C //TVAR_afit_pBaseValS[36] //AFIT8_sddd8a_AddNoisePower1[7:0],  AFIT8_sddd8a_AddNoisePower2 [15:8]                              
s5k5caga_i2c_write(0x0F12, 0x00FF); 	//7000080E //TVAR_afit_pBaseValS[37] //AFIT8_sddd8a_iSatSat[7:0],   AFIT8_sddd8a_iRadialTune [15:8]                                       
s5k5caga_i2c_write(0x0F12, 0x045A); 	//70000810 //TVAR_afit_pBaseValS[38] //AFIT8_sddd8a_iRadialLimit [7:0],   AFIT8_sddd8a_iRadialPower [15:8]                                
s5k5caga_i2c_write(0x0F12, 0x1414); 	//70000812 //TVAR_afit_pBaseValS[39] //AFIT8_sddd8a_iLowMaxSlopeAllowed [7:0],  AFIT8_sddd8a_iHighMaxSlopeAllowed [15:8]                  
s5k5caga_i2c_write(0x0F12, 0x0301); 	//70000814 //TVAR_afit_pBaseValS[40] //AFIT8_sddd8a_iLowSlopeThresh[7:0],   AFIT8_sddd8a_iHighSlopeThresh [15:8]                          
s5k5caga_i2c_write(0x0F12, 0xFF07); 	//70000816 //TVAR_afit_pBaseValS[41] //AFIT8_sddd8a_iSquaresRounding [7:0],   AFIT8_Demosaicing_iCentGrad [15:8]                          
s5k5caga_i2c_write(0x0F12, 0x081E); 	//70000818 //TVAR_afit_pBaseValS[42] //AFIT8_Demosaicing_iMonochrom [7:0],   AFIT8_Demosaicing_iDecisionThresh [15:8]                     
s5k5caga_i2c_write(0x0F12, 0x0A14); 	//7000081A //TVAR_afit_pBaseValS[43] //AFIT8_Demosaicing_iDesatThresh [7:0],   AFIT8_Demosaicing_iEnhThresh [15:8]                        
s5k5caga_i2c_write(0x0F12, 0x0F0F); 	//7000081C //TVAR_afit_pBaseValS[44] //AFIT8_Demosaicing_iGRDenoiseVal [7:0],   AFIT8_Demosaicing_iGBDenoiseVal [15:8]                    
s5k5caga_i2c_write(0x0F12, 0x0A00); 	//7000081E //TVAR_afit_pBaseValS[45] //AFIT8_Demosaicing_iNearGrayDesat[7:0],   AFIT8_Demosaicing_iDFD_ReduceCoeff [15:8]                 
s5k5caga_i2c_write(0x0F12, 0x0032); 	//70000820 //TVAR_afit_pBaseValS[46] //AFIT8_Sharpening_iMSharpen [7:0],   AFIT8_Sharpening_iMShThresh [15:8]                             
s5k5caga_i2c_write(0x0F12, 0x000E); 	//70000822 //TVAR_afit_pBaseValS[47] //AFIT8_Sharpening_iWSharpen [7:0],   AFIT8_Sharpening_iWShThresh [15:8]                             
s5k5caga_i2c_write(0x0F12, 0x0002); 	//70000824 //TVAR_afit_pBaseValS[48] //AFIT8_Sharpening_nSharpWidth [7:0],   AFIT8_Sharpening_iReduceNegative [15:8]                      
s5k5caga_i2c_write(0x0F12, 0x00FF); 	//70000826 //TVAR_afit_pBaseValS[49] //AFIT8_Sharpening_iShDespeckle [7:0],  AFIT8_demsharpmix1_iRGBMultiplier [15:8]                     
s5k5caga_i2c_write(0x0F12, 0x1102); 	//70000828 //TVAR_afit_pBaseValS[50] //AFIT8_demsharpmix1_iFilterPower [7:0],  AFIT8_demsharpmix1_iBCoeff [15:8]                          
s5k5caga_i2c_write(0x0F12, 0x001B); 	//7000082A //TVAR_afit_pBaseValS[51] //AFIT8_demsharpmix1_iGCoeff [7:0],   AFIT8_demsharpmix1_iWideMult [15:8]                            
s5k5caga_i2c_write(0x0F12, 0x0900); 	//7000082C //TVAR_afit_pBaseValS[52] //AFIT8_demsharpmix1_iNarrMult [7:0],   AFIT8_demsharpmix1_iHystFalloff [15:8]                       
s5k5caga_i2c_write(0x0F12, 0x0600); 	//7000082E //TVAR_afit_pBaseValS[53] //AFIT8_demsharpmix1_iHystMinMult [7:0],   AFIT8_demsharpmix1_iHystWidth [15:8]                      
s5k5caga_i2c_write(0x0F12, 0x0504); 	//70000830 //TVAR_afit_pBaseValS[54] //AFIT8_demsharpmix1_iHystFallLow [7:0],   AFIT8_demsharpmix1_iHystFallHigh [15:8]                   
s5k5caga_i2c_write(0x0F12, 0x0306); 	//70000832 //TVAR_afit_pBaseValS[55] //AFIT8_demsharpmix1_iHystTune [7:0],  * AFIT8_YUV422_DENOISE_iUVSupport [15:8]                      
s5k5caga_i2c_write(0x0F12, 0x4603); 	//70000834 //TVAR_afit_pBaseValS[56] //AFIT8_YUV422_DENOISE_iYSupport [7:0],   AFIT8_byr_cgras_iShadingPower [15:8]                       
s5k5caga_i2c_write(0x0F12, 0x0480); 	//70000836 //TVAR_afit_pBaseValS[57] //AFIT8_RGBGamma2_iLinearity [7:0],  AFIT8_RGBGamma2_iDarkReduce [15:8]                              
s5k5caga_i2c_write(0x0F12, 0x003C); 	//70000838 //TVAR_afit_pBaseValS[58] //AFIT8_ccm_oscar_iSaturation[7:0],   AFIT8_RGB2YUV_iYOffset [15:8]                                  
s5k5caga_i2c_write(0x0F12, 0x0080); 	//7000083A //TVAR_afit_pBaseValS[59] //AFIT8_RGB2YUV_iRGBGain [7:0],   AFIT8_RGB2YUV_iSaturation [15:8]                                   
s5k5caga_i2c_write(0x0F12, 0x0101); 	//7000083C //TVAR_afit_pBaseValS[60] //AFIT8_sddd8a_iClustThresh_H [7:0],  AFIT8_sddd8a_iClustThresh_C [15:8]                             
s5k5caga_i2c_write(0x0F12, 0x0707); 	//7000083E //TVAR_afit_pBaseValS[61] //AFIT8_sddd8a_iClustMulT_H [7:0],   AFIT8_sddd8a_iClustMulT_C [15:8]                                
s5k5caga_i2c_write(0x0F12, 0x4601); 	//70000840 //TVAR_afit_pBaseValS[62] //AFIT8_sddd8a_nClustLevel_H [7:0],   AFIT8_sddd8a_DispTH_Low [15:8]                                 
s5k5caga_i2c_write(0x0F12, 0x4944); 	//70000842 //TVAR_afit_pBaseValS[63] //AFIT8_sddd8a_DispTH_High [7:0],   AFIT8_sddd8a_iDenThreshLow [15:8]                                
s5k5caga_i2c_write(0x0F12, 0x5044); 	//70000844 //TVAR_afit_pBaseValS[64] //AFIT8_sddd8a_iDenThreshHigh[7:0],   AFIT8_Demosaicing_iEdgeDesat [15:8]                            
s5k5caga_i2c_write(0x0F12, 0x0500); 	//70000846 //TVAR_afit_pBaseValS[65] //AFIT8_Demosaicing_iEdgeDesatThrLow [7:0],   AFIT8_Demosaicing_iEdgeDesatThrHigh [15:8]             
s5k5caga_i2c_write(0x0F12, 0x0003); 	//70000848 //TVAR_afit_pBaseValS[66] //AFIT8_Demosaicing_iEdgeDesatLimit[7:0],  AFIT8_Demosaicing_iDemSharpenLow [15:8]                   
s5k5caga_i2c_write(0x0F12, 0x5400); 	//7000084A //TVAR_afit_pBaseValS[67] //AFIT8_Demosaicing_iDemSharpenHigh[7:0],   AFIT8_Demosaicing_iDemSharpThresh [15:8]                 
s5k5caga_i2c_write(0x0F12, 0x0714); 	//7000084C //TVAR_afit_pBaseValS[68] //AFIT8_Demosaicing_iDemShLowLimit [7:0],   AFIT8_Demosaicing_iDespeckleForDemsharp [15:8]           
s5k5caga_i2c_write(0x0F12, 0x32FF); 	//7000084E //TVAR_afit_pBaseValS[69] //AFIT8_Demosaicing_iDemBlurLow[7:0],   AFIT8_Demosaicing_iDemBlurHigh [15:8]                        
s5k5caga_i2c_write(0x0F12, 0x5A04); 	//70000850 //TVAR_afit_pBaseValS[70] //AFIT8_Demosaicing_iDemBlurRange[7:0],   AFIT8_Sharpening_iLowSharpPower [15:8]                     
s5k5caga_i2c_write(0x0F12, 0x201E); 	//70000852 //TVAR_afit_pBaseValS[71] //AFIT8_Sharpening_iHighSharpPower[7:0],   AFIT8_Sharpening_iLowShDenoise [15:8]                     
s5k5caga_i2c_write(0x0F12, 0x4012); 	//70000854 //TVAR_afit_pBaseValS[72] //AFIT8_Sharpening_iHighShDenoise [7:0],   AFIT8_Sharpening_iReduceEdgeMinMult [15:8]                
s5k5caga_i2c_write(0x0F12, 0x0204); 	//70000856 //TVAR_afit_pBaseValS[73] //AFIT8_Sharpening_iReduceEdgeSlope [7:0],  AFIT8_demsharpmix1_iWideFiltReduce [15:8]                
s5k5caga_i2c_write(0x0F12, 0x1403); 	//70000858 //TVAR_afit_pBaseValS[74] //AFIT8_demsharpmix1_iNarrFiltReduce [7:0],  AFIT8_sddd8a_iClustThresh_H_Bin [15:8]                  
s5k5caga_i2c_write(0x0F12, 0x0114); 	//7000085A //TVAR_afit_pBaseValS[75] //AFIT8_sddd8a_iClustThresh_C_Bin [7:0],   AFIT8_sddd8a_iClustMulT_H_Bin [15:8]                      
s5k5caga_i2c_write(0x0F12, 0x0101); 	//7000085C //TVAR_afit_pBaseValS[76] //AFIT8_sddd8a_iClustMulT_C_Bin [7:0],   AFIT8_sddd8a_nClustLevel_H_Bin [15:8]                       
s5k5caga_i2c_write(0x0F12, 0x4446); 	//7000085E //TVAR_afit_pBaseValS[77] //AFIT8_sddd8a_DispTH_Low_Bin [7:0],   AFIT8_sddd8a_DispTH_High_Bin [15:8]                           
s5k5caga_i2c_write(0x0F12, 0x646E); 	//70000860 //TVAR_afit_pBaseValS[78] //AFIT8_sddd8a_iDenThreshLow_Bin [7:0],   AFIT8_sddd8a_iDenThreshHigh_Bin [15:8]                     
s5k5caga_i2c_write(0x0F12, 0x0028); 	//70000862 //TVAR_afit_pBaseValS[79] //AFIT8_Demosaicing_iEdgeDesat_Bin[7:0],   AFIT8_Demosaicing_iEdgeDesatThrLow_Bin [15:8]             
s5k5caga_i2c_write(0x0F12, 0x030A); 	//70000864 //TVAR_afit_pBaseValS[80] //AFIT8_Demosaicing_iEdgeDesatThrHigh_Bin [7:0],  AFIT8_Demosaicing_iEdgeDesatLimit_Bin [15:8]       
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000866 //TVAR_afit_pBaseValS[81] //AFIT8_Demosaicing_iDemSharpenLow_Bin [7:0],  AFIT8_Demosaicing_iDemSharpenHigh_Bin [15:8]          
s5k5caga_i2c_write(0x0F12, 0x141E); 	//70000868 //TVAR_afit_pBaseValS[82] //AFIT8_Demosaicing_iDemSharpThresh_Bin [7:0],  AFIT8_Demosaicing_iDemShLowLimit_Bin [15:8]          
s5k5caga_i2c_write(0x0F12, 0xFF07); 	//7000086A //TVAR_afit_pBaseValS[83] //AFIT8_Demosaicing_iDespeckleForDemsharp_Bin [7:0],  AFIT8_Demosaicing_iDemBlurLow_Bin [15:8]       
s5k5caga_i2c_write(0x0F12, 0x0432); 	//7000086C //TVAR_afit_pBaseValS[84] //AFIT8_Demosaicing_iDemBlurHigh_Bin [7:0],  AFIT8_Demosaicing_iDemBlurRange_Bin [15:8]              
s5k5caga_i2c_write(0x0F12, 0x0000); 	//7000086E //TVAR_afit_pBaseValS[85] //AFIT8_Sharpening_iLowSharpPower_Bin [7:0],  AFIT8_Sharpening_iHighSharpPower_Bin [15:8]            
s5k5caga_i2c_write(0x0F12, 0x0F0F); 	//70000870 //TVAR_afit_pBaseValS[86] //AFIT8_Sharpening_iLowShDenoise_Bin [7:0],  AFIT8_Sharpening_iHighShDenoise_Bin [15:8]              
s5k5caga_i2c_write(0x0F12, 0x0440); 	//70000872 //TVAR_afit_pBaseValS[87] //AFIT8_Sharpening_iReduceEdgeMinMult_Bin [7:0],  AFIT8_Sharpening_iReduceEdgeSlope_Bin [15:8]       
s5k5caga_i2c_write(0x0F12, 0x0302); 	//70000874 //TVAR_afit_pBaseValS[88] //AFIT8_demsharpmix1_iWideFiltReduce_Bin [7:0],  AFIT8_demsharpmix1_iNarrFiltReduce_Bin [15:8]       
s5k5caga_i2c_write(0x0F12, 0x1414); 	//70000876 //TVAR_afit_pBaseValS[89] //AFIT8_sddd8a_iClustThresh_H_sBin[7:0],   AFIT8_sddd8a_iClustThresh_C_sBin [15:8]                   
s5k5caga_i2c_write(0x0F12, 0x0101); 	//70000878 //TVAR_afit_pBaseValS[90] //AFIT8_sddd8a_iClustMulT_H_sBin [7:0],   AFIT8_sddd8a_iClustMulT_C_sBin [15:8]                      
s5k5caga_i2c_write(0x0F12, 0x4601); 	//7000087A //TVAR_afit_pBaseValS[91] //AFIT8_sddd8a_nClustLevel_H_sBin [7:0],   AFIT8_sddd8a_DispTH_Low_sBin [15:8]                       
s5k5caga_i2c_write(0x0F12, 0x6E44); 	//7000087C //TVAR_afit_pBaseValS[92] //AFIT8_sddd8a_DispTH_High_sBin [7:0],   AFIT8_sddd8a_iDenThreshLow_sBin [15:8]                      
s5k5caga_i2c_write(0x0F12, 0x2864); 	//7000087E //TVAR_afit_pBaseValS[93] //AFIT8_sddd8a_iDenThreshHigh_sBin[7:0],   AFIT8_Demosaicing_iEdgeDesat_sBin [15:8]                  
s5k5caga_i2c_write(0x0F12, 0x0A00); 	//70000880 //TVAR_afit_pBaseValS[94] //AFIT8_Demosaicing_iEdgeDesatThrLow_sBin [7:0],  AFIT8_Demosaicing_iEdgeDesatThrHigh_sBin [15:8]    
s5k5caga_i2c_write(0x0F12, 0x0003); 	//70000882 //TVAR_afit_pBaseValS[95] //AFIT8_Demosaicing_iEdgeDesatLimit_sBin [7:0],  AFIT8_Demosaicing_iDemSharpenLow_sBin [15:8]        
s5k5caga_i2c_write(0x0F12, 0x1E00); 	//70000884 //TVAR_afit_pBaseValS[96] //AFIT8_Demosaicing_iDemSharpenHigh_sBin [7:0],  AFIT8_Demosaicing_iDemSharpThresh_sBin [15:8]       
s5k5caga_i2c_write(0x0F12, 0x0714); 	//70000886 //TVAR_afit_pBaseValS[97] //AFIT8_Demosaicing_iDemShLowLimit_sBin [7:0],  AFIT8_Demosaicing_iDespeckleForDemsharp_sBin [15:8]  
s5k5caga_i2c_write(0x0F12, 0x32FF); 	//70000888 //TVAR_afit_pBaseValS[98] //AFIT8_Demosaicing_iDemBlurLow_sBin [7:0],  AFIT8_Demosaicing_iDemBlurHigh_sBin [15:8]              
s5k5caga_i2c_write(0x0F12, 0x0004); 	//7000088A //TVAR_afit_pBaseValS[99] //AFIT8_Demosaicing_iDemBlurRange_sBin [7:0],  AFIT8_Sharpening_iLowSharpPower_sBin [15:8]           
s5k5caga_i2c_write(0x0F12, 0x0F00); 	//7000088C //TVAR_afit_pBaseValS[100] /AFIT8_Sharpening_iHighSharpPower_sBin [7:0],  AFIT8_Sharpening_iLowShDenoise_sBin [15:8]          /
s5k5caga_i2c_write(0x0F12, 0x400F); 	//7000088E //TVAR_afit_pBaseValS[101] /AFIT8_Sharpening_iHighShDenoise_sBin [7:0],  AFIT8_Sharpening_iReduceEdgeMinMult_sBin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x0204); 	//70000890 //TVAR_afit_pBaseValS[102] /AFIT8_Sharpening_iReduceEdgeSlope_sBin [7:0],  AFIT8_demsharpmix1_iWideFiltReduce_sBin [15:8]     /
s5k5caga_i2c_write(0x0F12, 0x0003); 	//70000892 //TVAR_afit_pBaseValS[103] /AFIT8_demsharpmix1_iNarrFiltReduce_sBin [7:0]                                                     /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000894 //TVAR_afit_pBaseValS[104] /AFIT16_BRIGHTNESS                                                                                 /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000896 //TVAR_afit_pBaseValS[105] /AFIT16_CONTRAST                                                                                   /
s5k5caga_i2c_write(0x0F12, 0x0014); 	//70000898 //TVAR_afit_pBaseValS[106] /AFIT16_SATURATION                                                                                 /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//7000089A //TVAR_afit_pBaseValS[107] /AFIT16_SHARP_BLUR                                                                                 /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//7000089C //TVAR_afit_pBaseValS[108] /AFIT16_GLAMOUR                                                                                    /
s5k5caga_i2c_write(0x0F12, 0x00C1); 	//7000089E //TVAR_afit_pBaseValS[109] /AFIT16_sddd8a_edge_high                                                                           /
s5k5caga_i2c_write(0x0F12, 0x03FF); 	//700008A0 //TVAR_afit_pBaseValS[110] /AFIT16_Demosaicing_iSatVal                                                                        /
s5k5caga_i2c_write(0x0F12, 0x009C); 	//700008A2 //TVAR_afit_pBaseValS[111] /AFIT16_Sharpening_iReduceEdgeThresh                                                               /
s5k5caga_i2c_write(0x0F12, 0x0251); 	//700008A4 //TVAR_afit_pBaseValS[112] /AFIT16_demsharpmix1_iRGBOffset                                                                    /
s5k5caga_i2c_write(0x0F12, 0x03FF); 	//700008A6 //TVAR_afit_pBaseValS[113] /AFIT16_demsharpmix1_iDemClamp                                                                     /
s5k5caga_i2c_write(0x0F12, 0x000C); 	//700008A8 //TVAR_afit_pBaseValS[114] /AFIT16_demsharpmix1_iLowThreshold                                                                 /
s5k5caga_i2c_write(0x0F12, 0x0010); 	//700008AA //TVAR_afit_pBaseValS[115] /AFIT16_demsharpmix1_iHighThreshold                                                                /
s5k5caga_i2c_write(0x0F12, 0x012C); 	//700008AC //TVAR_afit_pBaseValS[116] /AFIT16_demsharpmix1_iLowBright                                                                    /
s5k5caga_i2c_write(0x0F12, 0x03E8); 	//700008AE //TVAR_afit_pBaseValS[117] /AFIT16_demsharpmix1_iHighBright                                                                   /
s5k5caga_i2c_write(0x0F12, 0x0046); 	//700008B0 //TVAR_afit_pBaseValS[118] /AFIT16_demsharpmix1_iLowSat                                                                       /
s5k5caga_i2c_write(0x0F12, 0x005A); 	//700008B2 //TVAR_afit_pBaseValS[119] /AFIT16_demsharpmix1_iHighSat                                                                      /
s5k5caga_i2c_write(0x0F12, 0x0070); 	//700008B4 //TVAR_afit_pBaseValS[120] /AFIT16_demsharpmix1_iTune                                                                         /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//700008B6 //TVAR_afit_pBaseValS[121] /AFIT16_demsharpmix1_iHystThLow                                                                    /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//700008B8 //TVAR_afit_pBaseValS[122] /AFIT16_demsharpmix1_iHystThHigh                                                                   /
s5k5caga_i2c_write(0x0F12, 0x01AE); 	//700008BA //TVAR_afit_pBaseValS[123] /AFIT16_demsharpmix1_iHystCenter                                                                   /
s5k5caga_i2c_write(0x0F12, 0x001E); 	//700008BC //TVAR_afit_pBaseValS[124] /AFIT16_YUV422_DENOISE_iUVLowThresh                                                                /
s5k5caga_i2c_write(0x0F12, 0x001E); 	//700008BE //TVAR_afit_pBaseValS[125] /AFIT16_YUV422_DENOISE_iUVHighThresh                                                               /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//700008C0 //TVAR_afit_pBaseValS[126] /AFIT16_YUV422_DENOISE_iYLowThresh                                                                 /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//700008C2 //TVAR_afit_pBaseValS[127] /AFIT16_YUV422_DENOISE_iYHighThresh                                                                /
s5k5caga_i2c_write(0x0F12, 0x003E); 	//700008C4 //TVAR_afit_pBaseValS[128] /AFIT16_Sharpening_iLowSharpClamp                                                                  /
s5k5caga_i2c_write(0x0F12, 0x0008); 	//700008C6 //TVAR_afit_pBaseValS[129] /AFIT16_Sharpening_iHighSharpClamp                                                                 /
s5k5caga_i2c_write(0x0F12, 0x003C); 	//700008C8 //TVAR_afit_pBaseValS[130] /AFIT16_Sharpening_iLowSharpClamp_Bin                                                              /
s5k5caga_i2c_write(0x0F12, 0x001E); 	//700008CA //TVAR_afit_pBaseValS[131] /AFIT16_Sharpening_iHighSharpClamp_Bin                                                             /
s5k5caga_i2c_write(0x0F12, 0x003C); 	//700008CC //TVAR_afit_pBaseValS[132] /AFIT16_Sharpening_iLowSharpClamp_sBin                                                             /
s5k5caga_i2c_write(0x0F12, 0x001E); 	//700008CE //TVAR_afit_pBaseValS[133] /AFIT16_Sharpening_iHighSharpClamp_sBin                                                            /
s5k5caga_i2c_write(0x0F12, 0x0A24); 	//700008D0 //TVAR_afit_pBaseValS[134] /AFIT8_sddd8a_edge_low [7:0],   AFIT8_sddd8a_repl_thresh [15:8]                                    /
s5k5caga_i2c_write(0x0F12, 0x1701); 	//700008D2 //TVAR_afit_pBaseValS[135] /AFIT8_sddd8a_repl_force [7:0],  AFIT8_sddd8a_sat_level [15:8]                                     /
s5k5caga_i2c_write(0x0F12, 0x0229); 	//700008D4 //TVAR_afit_pBaseValS[136] /AFIT8_sddd8a_sat_thr[7:0],  AFIT8_sddd8a_sat_mpl [15:8]                                           /
s5k5caga_i2c_write(0x0F12, 0x1403); 	//700008D6 //TVAR_afit_pBaseValS[137] /AFIT8_sddd8a_sat_noise[7:0],  AFIT8_sddd8a_iMaxSlopeAllowed [15:8]                                /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//700008D8 //TVAR_afit_pBaseValS[138] /AFIT8_sddd8a_iHotThreshHigh[7:0],  AFIT8_sddd8a_iHotThreshLow [15:8]                              /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//700008DA //TVAR_afit_pBaseValS[139] /AFIT8_sddd8a_iColdThreshHigh[7:0],  AFIT8_sddd8a_iColdThreshLow [15:8]                            /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//700008DC //TVAR_afit_pBaseValS[140] /AFIT8_sddd8a_AddNoisePower1[7:0],  AFIT8_sddd8a_AddNoisePower2 [15:8]                             /
s5k5caga_i2c_write(0x0F12, 0x00FF); 	//700008DE //TVAR_afit_pBaseValS[141] /AFIT8_sddd8a_iSatSat[7:0],   AFIT8_sddd8a_iRadialTune [15:8]                                      /
s5k5caga_i2c_write(0x0F12, 0x045A); 	//700008E0 //TVAR_afit_pBaseValS[142] /AFIT8_sddd8a_iRadialLimit [7:0],   AFIT8_sddd8a_iRadialPower [15:8]                               /
s5k5caga_i2c_write(0x0F12, 0x1414); 	//700008E2 //TVAR_afit_pBaseValS[143] /AFIT8_sddd8a_iLowMaxSlopeAllowed [7:0],  AFIT8_sddd8a_iHighMaxSlopeAllowed [15:8]                 /
s5k5caga_i2c_write(0x0F12, 0x0301); 	//700008E4 //TVAR_afit_pBaseValS[144] /AFIT8_sddd8a_iLowSlopeThresh[7:0],   AFIT8_sddd8a_iHighSlopeThresh [15:8]                         /
s5k5caga_i2c_write(0x0F12, 0xFF07); 	//700008E6 //TVAR_afit_pBaseValS[145] /AFIT8_sddd8a_iSquaresRounding [7:0],   AFIT8_Demosaicing_iCentGrad [15:8]                         /
s5k5caga_i2c_write(0x0F12, 0x081E); 	//700008E8 //TVAR_afit_pBaseValS[146] /AFIT8_Demosaicing_iMonochrom [7:0],   AFIT8_Demosaicing_iDecisionThresh [15:8]                    /
s5k5caga_i2c_write(0x0F12, 0x0A14); 	//700008EA //TVAR_afit_pBaseValS[147] /AFIT8_Demosaicing_iDesatThresh [7:0],   AFIT8_Demosaicing_iEnhThresh [15:8]                       /
s5k5caga_i2c_write(0x0F12, 0x0F0F); 	//700008EC //TVAR_afit_pBaseValS[148] /AFIT8_Demosaicing_iGRDenoiseVal [7:0],   AFIT8_Demosaicing_iGBDenoiseVal [15:8]                   /
s5k5caga_i2c_write(0x0F12, 0x0A00); 	//700008EE //TVAR_afit_pBaseValS[149] /AFIT8_Demosaicing_iNearGrayDesat[7:0],   AFIT8_Demosaicing_iDFD_ReduceCoeff [15:8]                /
s5k5caga_i2c_write(0x0F12, 0x0032); 	//700008F0 //TVAR_afit_pBaseValS[150] /AFIT8_Sharpening_iMSharpen [7:0],   AFIT8_Sharpening_iMShThresh [15:8]                            /
s5k5caga_i2c_write(0x0F12, 0x000E); 	//700008F2 //TVAR_afit_pBaseValS[151] /AFIT8_Sharpening_iWSharpen [7:0],   AFIT8_Sharpening_iWShThresh [15:8]                            /
s5k5caga_i2c_write(0x0F12, 0x0002); 	//700008F4 //TVAR_afit_pBaseValS[152] /AFIT8_Sharpening_nSharpWidth [7:0],   AFIT8_Sharpening_iReduceNegative [15:8]                     /
s5k5caga_i2c_write(0x0F12, 0x00FF); 	//700008F6 //TVAR_afit_pBaseValS[153] /AFIT8_Sharpening_iShDespeckle [7:0],  AFIT8_demsharpmix1_iRGBMultiplier [15:8]                    /
s5k5caga_i2c_write(0x0F12, 0x1102); 	//700008F8 //TVAR_afit_pBaseValS[154] /AFIT8_demsharpmix1_iFilterPower [7:0],  AFIT8_demsharpmix1_iBCoeff [15:8]                         /
s5k5caga_i2c_write(0x0F12, 0x001B); 	//700008FA //TVAR_afit_pBaseValS[155] /AFIT8_demsharpmix1_iGCoeff [7:0],   AFIT8_demsharpmix1_iWideMult [15:8]                           /
s5k5caga_i2c_write(0x0F12, 0x0900); 	//700008FC //TVAR_afit_pBaseValS[156] /AFIT8_demsharpmix1_iNarrMult [7:0],   AFIT8_demsharpmix1_iHystFalloff [15:8]                      /
s5k5caga_i2c_write(0x0F12, 0x0600); 	//700008FE //TVAR_afit_pBaseValS[157] /AFIT8_demsharpmix1_iHystMinMult [7:0],   AFIT8_demsharpmix1_iHystWidth [15:8]                     /
s5k5caga_i2c_write(0x0F12, 0x0504); 	//70000900 //TVAR_afit_pBaseValS[158] /AFIT8_demsharpmix1_iHystFallLow [7:0],   AFIT8_demsharpmix1_iHystFallHigh [15:8]                  /
s5k5caga_i2c_write(0x0F12, 0x0306); 	//70000902 //TVAR_afit_pBaseValS[159] /AFIT8_demsharpmix1_iHystTune [7:0],  * AFIT8_YUV422_DENOISE_iUVSupport [15:8]                     /
s5k5caga_i2c_write(0x0F12, 0x4603); 	//70000904 //TVAR_afit_pBaseValS[160] /AFIT8_YUV422_DENOISE_iYSupport [7:0],   AFIT8_byr_cgras_iShadingPower [15:8]                      /
s5k5caga_i2c_write(0x0F12, 0x0480); 	//70000906 //TVAR_afit_pBaseValS[161] /AFIT8_RGBGamma2_iLinearity [7:0],  AFIT8_RGBGamma2_iDarkReduce [15:8]                             /
s5k5caga_i2c_write(0x0F12, 0x0046); 	//70000908 //TVAR_afit_pBaseValS[162] /AFIT8_ccm_oscar_iSaturation[7:0],   AFIT8_RGB2YUV_iYOffset [15:8]                                 /
s5k5caga_i2c_write(0x0F12, 0x0080); 	//7000090A //TVAR_afit_pBaseValS[163] /AFIT8_RGB2YUV_iRGBGain [7:0],   AFIT8_RGB2YUV_iSaturation [15:8]                                  /
s5k5caga_i2c_write(0x0F12, 0x0101); 	//7000090C //TVAR_afit_pBaseValS[164] /AFIT8_sddd8a_iClustThresh_H [7:0],  AFIT8_sddd8a_iClustThresh_C [15:8]                            /
s5k5caga_i2c_write(0x0F12, 0x0707); 	//7000090E //TVAR_afit_pBaseValS[165] /AFIT8_sddd8a_iClustMulT_H [7:0],   AFIT8_sddd8a_iClustMulT_C [15:8]                               /
s5k5caga_i2c_write(0x0F12, 0x1E01); 	//70000910 //TVAR_afit_pBaseValS[166] /AFIT8_sddd8a_nClustLevel_H [7:0],   AFIT8_sddd8a_DispTH_Low [15:8]                                /
s5k5caga_i2c_write(0x0F12, 0x491E); 	//70000912 //TVAR_afit_pBaseValS[167] /AFIT8_sddd8a_DispTH_High [7:0],   AFIT8_sddd8a_iDenThreshLow [15:8]                               /
s5k5caga_i2c_write(0x0F12, 0x5044); 	//70000914 //TVAR_afit_pBaseValS[168] /AFIT8_sddd8a_iDenThreshHigh[7:0],   AFIT8_Demosaicing_iEdgeDesat [15:8]                           /
s5k5caga_i2c_write(0x0F12, 0x0500); 	//70000916 //TVAR_afit_pBaseValS[169] /AFIT8_Demosaicing_iEdgeDesatThrLow [7:0],   AFIT8_Demosaicing_iEdgeDesatThrHigh [15:8]            /
s5k5caga_i2c_write(0x0F12, 0x0004); 	//70000918 //TVAR_afit_pBaseValS[170] /AFIT8_Demosaicing_iEdgeDesatLimit[7:0],  AFIT8_Demosaicing_iDemSharpenLow [15:8]                  /
s5k5caga_i2c_write(0x0F12, 0x3C0A); 	//7000091A //TVAR_afit_pBaseValS[171] /AFIT8_Demosaicing_iDemSharpenHigh[7:0],   AFIT8_Demosaicing_iDemSharpThresh [15:8]                /
s5k5caga_i2c_write(0x0F12, 0x0714); 	//7000091C //TVAR_afit_pBaseValS[172] /AFIT8_Demosaicing_iDemShLowLimit [7:0],   AFIT8_Demosaicing_iDespeckleForDemsharp [15:8]          /
s5k5caga_i2c_write(0x0F12, 0x3214); 	//7000091E //TVAR_afit_pBaseValS[173] /AFIT8_Demosaicing_iDemBlurLow[7:0],   AFIT8_Demosaicing_iDemBlurHigh [15:8]                       /
s5k5caga_i2c_write(0x0F12, 0x5A03); 	//70000920 //TVAR_afit_pBaseValS[174] /AFIT8_Demosaicing_iDemBlurRange[7:0],   AFIT8_Sharpening_iLowSharpPower [15:8]                    /
s5k5caga_i2c_write(0x0F12, 0x121E); 	//70000922 //TVAR_afit_pBaseValS[175] /AFIT8_Sharpening_iHighSharpPower[7:0],   AFIT8_Sharpening_iLowShDenoise [15:8]                    /
s5k5caga_i2c_write(0x0F12, 0x4012); 	//70000924 //TVAR_afit_pBaseValS[176] /AFIT8_Sharpening_iHighShDenoise [7:0],   AFIT8_Sharpening_iReduceEdgeMinMult [15:8]               /
s5k5caga_i2c_write(0x0F12, 0x0604); 	//70000926 //TVAR_afit_pBaseValS[177] /AFIT8_Sharpening_iReduceEdgeSlope [7:0],  AFIT8_demsharpmix1_iWideFiltReduce [15:8]               /
s5k5caga_i2c_write(0x0F12, 0x1E06); 	//70000928 //TVAR_afit_pBaseValS[178] /AFIT8_demsharpmix1_iNarrFiltReduce [7:0],  AFIT8_sddd8a_iClustThresh_H_Bin [15:8]                 /
s5k5caga_i2c_write(0x0F12, 0x011E); 	//7000092A //TVAR_afit_pBaseValS[179] /AFIT8_sddd8a_iClustThresh_C_Bin [7:0],   AFIT8_sddd8a_iClustMulT_H_Bin [15:8]                     /
s5k5caga_i2c_write(0x0F12, 0x0101); 	//7000092C //TVAR_afit_pBaseValS[180] /AFIT8_sddd8a_iClustMulT_C_Bin [7:0],   AFIT8_sddd8a_nClustLevel_H_Bin [15:8]                      /
s5k5caga_i2c_write(0x0F12, 0x3A3C); 	//7000092E //TVAR_afit_pBaseValS[181] /AFIT8_sddd8a_DispTH_Low_Bin [7:0],   AFIT8_sddd8a_DispTH_High_Bin [15:8]                          /
s5k5caga_i2c_write(0x0F12, 0x585A); 	//70000930 //TVAR_afit_pBaseValS[182] /AFIT8_sddd8a_iDenThreshLow_Bin [7:0],   AFIT8_sddd8a_iDenThreshHigh_Bin [15:8]                    /
s5k5caga_i2c_write(0x0F12, 0x0028); 	//70000932 //TVAR_afit_pBaseValS[183] /AFIT8_Demosaicing_iEdgeDesat_Bin[7:0],   AFIT8_Demosaicing_iEdgeDesatThrLow_Bin [15:8]            /
s5k5caga_i2c_write(0x0F12, 0x030A); 	//70000934 //TVAR_afit_pBaseValS[184] /AFIT8_Demosaicing_iEdgeDesatThrHigh_Bin [7:0],  AFIT8_Demosaicing_iEdgeDesatLimit_Bin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000936 //TVAR_afit_pBaseValS[185] /AFIT8_Demosaicing_iDemSharpenLow_Bin [7:0],  AFIT8_Demosaicing_iDemSharpenHigh_Bin [15:8]         /
s5k5caga_i2c_write(0x0F12, 0x141E); 	//70000938 //TVAR_afit_pBaseValS[186] /AFIT8_Demosaicing_iDemSharpThresh_Bin [7:0],  AFIT8_Demosaicing_iDemShLowLimit_Bin [15:8]         /
s5k5caga_i2c_write(0x0F12, 0xFF07); 	//7000093A //TVAR_afit_pBaseValS[187] /AFIT8_Demosaicing_iDespeckleForDemsharp_Bin [7:0],  AFIT8_Demosaicing_iDemBlurLow_Bin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x0432); 	//7000093C //TVAR_afit_pBaseValS[188] /AFIT8_Demosaicing_iDemBlurHigh_Bin [7:0],  AFIT8_Demosaicing_iDemBlurRange_Bin [15:8]             /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//7000093E //TVAR_afit_pBaseValS[189] /AFIT8_Sharpening_iLowSharpPower_Bin [7:0],  AFIT8_Sharpening_iHighSharpPower_Bin [15:8]           /
s5k5caga_i2c_write(0x0F12, 0x0F0F); 	//70000940 //TVAR_afit_pBaseValS[190] /AFIT8_Sharpening_iLowShDenoise_Bin [7:0],  AFIT8_Sharpening_iHighShDenoise_Bin [15:8]             /
s5k5caga_i2c_write(0x0F12, 0x0440); 	//70000942 //TVAR_afit_pBaseValS[191] /AFIT8_Sharpening_iReduceEdgeMinMult_Bin [7:0],  AFIT8_Sharpening_iReduceEdgeSlope_Bin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x0302); 	//70000944 //TVAR_afit_pBaseValS[192] /AFIT8_demsharpmix1_iWideFiltReduce_Bin [7:0],  AFIT8_demsharpmix1_iNarrFiltReduce_Bin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x1E1E); 	//70000946 //TVAR_afit_pBaseValS[193] /AFIT8_sddd8a_iClustThresh_H_sBin[7:0],   AFIT8_sddd8a_iClustThresh_C_sBin [15:8]                  /
s5k5caga_i2c_write(0x0F12, 0x0101); 	//70000948 //TVAR_afit_pBaseValS[194] /AFIT8_sddd8a_iClustMulT_H_sBin [7:0],   AFIT8_sddd8a_iClustMulT_C_sBin [15:8]                     /
s5k5caga_i2c_write(0x0F12, 0x3C01); 	//7000094A //TVAR_afit_pBaseValS[195] /AFIT8_sddd8a_nClustLevel_H_sBin [7:0],   AFIT8_sddd8a_DispTH_Low_sBin [15:8]                      /
s5k5caga_i2c_write(0x0F12, 0x5A3A); 	//7000094C //TVAR_afit_pBaseValS[196] /AFIT8_sddd8a_DispTH_High_sBin [7:0],   AFIT8_sddd8a_iDenThreshLow_sBin [15:8]                     /
s5k5caga_i2c_write(0x0F12, 0x2858); 	//7000094E //TVAR_afit_pBaseValS[197] /AFIT8_sddd8a_iDenThreshHigh_sBin[7:0],   AFIT8_Demosaicing_iEdgeDesat_sBin [15:8]                 /
s5k5caga_i2c_write(0x0F12, 0x0A00); 	//70000950 //TVAR_afit_pBaseValS[198] /AFIT8_Demosaicing_iEdgeDesatThrLow_sBin [7:0],  AFIT8_Demosaicing_iEdgeDesatThrHigh_sBin [15:8]   /
s5k5caga_i2c_write(0x0F12, 0x0003); 	//70000952 //TVAR_afit_pBaseValS[199] /AFIT8_Demosaicing_iEdgeDesatLimit_sBin [7:0],  AFIT8_Demosaicing_iDemSharpenLow_sBin [15:8]       /
s5k5caga_i2c_write(0x0F12, 0x1E00); 	//70000954 //TVAR_afit_pBaseValS[200] /AFIT8_Demosaicing_iDemSharpenHigh_sBin [7:0],  AFIT8_Demosaicing_iDemSharpThresh_sBin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x0714); 	//70000956 //TVAR_afit_pBaseValS[201] /AFIT8_Demosaicing_iDemShLowLimit_sBin [7:0],  AFIT8_Demosaicing_iDespeckleForDemsharp_sBin [15:8] /
s5k5caga_i2c_write(0x0F12, 0x32FF); 	//70000958 //TVAR_afit_pBaseValS[202] /AFIT8_Demosaicing_iDemBlurLow_sBin [7:0],  AFIT8_Demosaicing_iDemBlurHigh_sBin [15:8]             /
s5k5caga_i2c_write(0x0F12, 0x0004); 	//7000095A //TVAR_afit_pBaseValS[203] /AFIT8_Demosaicing_iDemBlurRange_sBin [7:0],  AFIT8_Sharpening_iLowSharpPower_sBin [15:8]          /
s5k5caga_i2c_write(0x0F12, 0x0F00); 	//7000095C //TVAR_afit_pBaseValS[204] /AFIT8_Sharpening_iHighSharpPower_sBin [7:0],  AFIT8_Sharpening_iLowShDenoise_sBin [15:8]          /
s5k5caga_i2c_write(0x0F12, 0x400F); 	//7000095E //TVAR_afit_pBaseValS[205] /AFIT8_Sharpening_iHighShDenoise_sBin [7:0],  AFIT8_Sharpening_iReduceEdgeMinMult_sBin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x0204); 	//70000960 //TVAR_afit_pBaseValS[206] /AFIT8_Sharpening_iReduceEdgeSlope_sBin [7:0],  AFIT8_demsharpmix1_iWideFiltReduce_sBin [15:8]     /
s5k5caga_i2c_write(0x0F12, 0x0003); 	//70000962 //TVAR_afit_pBaseValS[207] /AFIT8_demsharpmix1_iNarrFiltReduce_sBin [7:0]                                                     /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000964 //TVAR_afit_pBaseValS[208] /AFIT16_BRIGHTNESS                                                                                 /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000966 //TVAR_afit_pBaseValS[209] /AFIT16_CONTRAST                                                                                   /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000968 //TVAR_afit_pBaseValS[210] /AFIT16_SATURATION                                                                                 /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//7000096A //TVAR_afit_pBaseValS[211] /AFIT16_SHARP_BLUR                                                                                 /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//7000096C //TVAR_afit_pBaseValS[212] /AFIT16_GLAMOUR                                                                                    /
s5k5caga_i2c_write(0x0F12, 0x00C1); 	//7000096E //TVAR_afit_pBaseValS[213] /AFIT16_sddd8a_edge_high                                                                           /
s5k5caga_i2c_write(0x0F12, 0x03FF); 	//70000970 //TVAR_afit_pBaseValS[214] /AFIT16_Demosaicing_iSatVal                                                                        /
s5k5caga_i2c_write(0x0F12, 0x009C); 	//70000972 //TVAR_afit_pBaseValS[215] /AFIT16_Sharpening_iReduceEdgeThresh                                                               /
s5k5caga_i2c_write(0x0F12, 0x0251); 	//70000974 //TVAR_afit_pBaseValS[216] /AFIT16_demsharpmix1_iRGBOffset                                                                    /
s5k5caga_i2c_write(0x0F12, 0x03FF); 	//70000976 //TVAR_afit_pBaseValS[217] /AFIT16_demsharpmix1_iDemClamp                                                                     /
s5k5caga_i2c_write(0x0F12, 0x000C); 	//70000978 //TVAR_afit_pBaseValS[218] /AFIT16_demsharpmix1_iLowThreshold                                                                 /
s5k5caga_i2c_write(0x0F12, 0x0010); 	//7000097A //TVAR_afit_pBaseValS[219] /AFIT16_demsharpmix1_iHighThreshold                                                                /
s5k5caga_i2c_write(0x0F12, 0x012C); 	//7000097C //TVAR_afit_pBaseValS[220] /AFIT16_demsharpmix1_iLowBright                                                                    /
s5k5caga_i2c_write(0x0F12, 0x03E8); 	//7000097E //TVAR_afit_pBaseValS[221] /AFIT16_demsharpmix1_iHighBright                                                                   /
s5k5caga_i2c_write(0x0F12, 0x0046); 	//70000980 //TVAR_afit_pBaseValS[222] /AFIT16_demsharpmix1_iLowSat                                                                       /
s5k5caga_i2c_write(0x0F12, 0x005A); 	//70000982 //TVAR_afit_pBaseValS[223] /AFIT16_demsharpmix1_iHighSat                                                                      /
s5k5caga_i2c_write(0x0F12, 0x0070); 	//70000984 //TVAR_afit_pBaseValS[224] /AFIT16_demsharpmix1_iTune                                                                         /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000986 //TVAR_afit_pBaseValS[225] /AFIT16_demsharpmix1_iHystThLow                                                                    /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000988 //TVAR_afit_pBaseValS[226] /AFIT16_demsharpmix1_iHystThHigh                                                                   /
s5k5caga_i2c_write(0x0F12, 0x0226); 	//7000098A //TVAR_afit_pBaseValS[227] /AFIT16_demsharpmix1_iHystCenter                                                                   /
s5k5caga_i2c_write(0x0F12, 0x001E); 	//7000098C //TVAR_afit_pBaseValS[228] /AFIT16_YUV422_DENOISE_iUVLowThresh                                                                /
s5k5caga_i2c_write(0x0F12, 0x001E); 	//7000098E //TVAR_afit_pBaseValS[229] /AFIT16_YUV422_DENOISE_iUVHighThresh                                                               /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000990 //TVAR_afit_pBaseValS[230] /AFIT16_YUV422_DENOISE_iYLowThresh                                                                 /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000992 //TVAR_afit_pBaseValS[231] /AFIT16_YUV422_DENOISE_iYHighThresh                                                                /
s5k5caga_i2c_write(0x0F12, 0x004E); 	//70000994 //TVAR_afit_pBaseValS[232] /AFIT16_Sharpening_iLowSharpClamp                                                                  /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000996 //TVAR_afit_pBaseValS[233] /AFIT16_Sharpening_iHighSharpClamp                                                                 /
s5k5caga_i2c_write(0x0F12, 0x003C); 	//70000998 //TVAR_afit_pBaseValS[234] /AFIT16_Sharpening_iLowSharpClamp_Bin                                                              /
s5k5caga_i2c_write(0x0F12, 0x001E); 	//7000099A //TVAR_afit_pBaseValS[235] /AFIT16_Sharpening_iHighSharpClamp_Bin                                                             /
s5k5caga_i2c_write(0x0F12, 0x003C); 	//7000099C //TVAR_afit_pBaseValS[236] /AFIT16_Sharpening_iLowSharpClamp_sBin                                                             /
s5k5caga_i2c_write(0x0F12, 0x001E); 	//7000099E //TVAR_afit_pBaseValS[237] /AFIT16_Sharpening_iHighSharpClamp_sBin                                                            /
s5k5caga_i2c_write(0x0F12, 0x0A24); 	//700009A0 //TVAR_afit_pBaseValS[238] /AFIT8_sddd8a_edge_low [7:0],   AFIT8_sddd8a_repl_thresh [15:8]                                    /
s5k5caga_i2c_write(0x0F12, 0x1701); 	//700009A2 //TVAR_afit_pBaseValS[239] /AFIT8_sddd8a_repl_force [7:0],  AFIT8_sddd8a_sat_level [15:8]                                     /
s5k5caga_i2c_write(0x0F12, 0x0229); 	//700009A4 //TVAR_afit_pBaseValS[240] /AFIT8_sddd8a_sat_thr[7:0],  AFIT8_sddd8a_sat_mpl [15:8]                                           /
s5k5caga_i2c_write(0x0F12, 0x1403); 	//700009A6 //TVAR_afit_pBaseValS[241] /AFIT8_sddd8a_sat_noise[7:0],  AFIT8_sddd8a_iMaxSlopeAllowed [15:8]                                /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//700009A8 //TVAR_afit_pBaseValS[242] /AFIT8_sddd8a_iHotThreshHigh[7:0],  AFIT8_sddd8a_iHotThreshLow [15:8]                              /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//700009AA //TVAR_afit_pBaseValS[243] /AFIT8_sddd8a_iColdThreshHigh[7:0],  AFIT8_sddd8a_iColdThreshLow [15:8]                            /
s5k5caga_i2c_write(0x0F12, 0x0906); 	//700009AC //TVAR_afit_pBaseValS[244] /AFIT8_sddd8a_AddNoisePower1[7:0],  AFIT8_sddd8a_AddNoisePower2 [15:8]                             /
s5k5caga_i2c_write(0x0F12, 0x00FF); 	//700009AE //TVAR_afit_pBaseValS[245] /AFIT8_sddd8a_iSatSat[7:0],   AFIT8_sddd8a_iRadialTune [15:8]                                      /
s5k5caga_i2c_write(0x0F12, 0x045A); 	//700009B0 //TVAR_afit_pBaseValS[246] /AFIT8_sddd8a_iRadialLimit [7:0],   AFIT8_sddd8a_iRadialPower [15:8]                               /
s5k5caga_i2c_write(0x0F12, 0x1414); 	//700009B2 //TVAR_afit_pBaseValS[247] /AFIT8_sddd8a_iLowMaxSlopeAllowed [7:0],  AFIT8_sddd8a_iHighMaxSlopeAllowed [15:8]                 /
s5k5caga_i2c_write(0x0F12, 0x0301); 	//700009B4 //TVAR_afit_pBaseValS[248] /AFIT8_sddd8a_iLowSlopeThresh[7:0],   AFIT8_sddd8a_iHighSlopeThresh [15:8]                         /
s5k5caga_i2c_write(0x0F12, 0xFF07); 	//700009B6 //TVAR_afit_pBaseValS[249] /AFIT8_sddd8a_iSquaresRounding [7:0],   AFIT8_Demosaicing_iCentGrad [15:8]                         /
s5k5caga_i2c_write(0x0F12, 0x081E); 	//700009B8 //TVAR_afit_pBaseValS[250] /AFIT8_Demosaicing_iMonochrom [7:0],   AFIT8_Demosaicing_iDecisionThresh [15:8]                    /
s5k5caga_i2c_write(0x0F12, 0x0A14); 	//700009BA //TVAR_afit_pBaseValS[251] /AFIT8_Demosaicing_iDesatThresh [7:0],   AFIT8_Demosaicing_iEnhThresh [15:8]                       /
s5k5caga_i2c_write(0x0F12, 0x0F0F); 	//700009BC //TVAR_afit_pBaseValS[252] /AFIT8_Demosaicing_iGRDenoiseVal [7:0],   AFIT8_Demosaicing_iGBDenoiseVal [15:8]                   /
s5k5caga_i2c_write(0x0F12, 0x0A00); 	//700009BE //TVAR_afit_pBaseValS[253] /AFIT8_Demosaicing_iNearGrayDesat[7:0],   AFIT8_Demosaicing_iDFD_ReduceCoeff [15:8]                /
s5k5caga_i2c_write(0x0F12, 0x0090); 	//700009C0 //TVAR_afit_pBaseValS[254] /AFIT8_Sharpening_iMSharpen [7:0],   AFIT8_Sharpening_iMShThresh [15:8]                            /
s5k5caga_i2c_write(0x0F12, 0x000A); 	//700009C2 //TVAR_afit_pBaseValS[255] /AFIT8_Sharpening_iWSharpen [7:0],   AFIT8_Sharpening_iWShThresh [15:8]                            /
s5k5caga_i2c_write(0x0F12, 0x0002); 	//700009C4 //TVAR_afit_pBaseValS[256] /AFIT8_Sharpening_nSharpWidth [7:0],   AFIT8_Sharpening_iReduceNegative [15:8]                     /
s5k5caga_i2c_write(0x0F12, 0x00FF); 	//700009C6 //TVAR_afit_pBaseValS[257] /AFIT8_Sharpening_iShDespeckle [7:0],  AFIT8_demsharpmix1_iRGBMultiplier [15:8]                    /
s5k5caga_i2c_write(0x0F12, 0x1102); 	//700009C8 //TVAR_afit_pBaseValS[258] /AFIT8_demsharpmix1_iFilterPower [7:0],  AFIT8_demsharpmix1_iBCoeff [15:8]                         /
s5k5caga_i2c_write(0x0F12, 0x001B); 	//700009CA //TVAR_afit_pBaseValS[259] /AFIT8_demsharpmix1_iGCoeff [7:0],   AFIT8_demsharpmix1_iWideMult [15:8]                           /
s5k5caga_i2c_write(0x0F12, 0x0900); 	//700009CC //TVAR_afit_pBaseValS[260] /AFIT8_demsharpmix1_iNarrMult [7:0],   AFIT8_demsharpmix1_iHystFalloff [15:8]                      /
s5k5caga_i2c_write(0x0F12, 0x0600); 	//700009CE //TVAR_afit_pBaseValS[261] /AFIT8_demsharpmix1_iHystMinMult [7:0],   AFIT8_demsharpmix1_iHystWidth [15:8]                     /
s5k5caga_i2c_write(0x0F12, 0x0504); 	//700009D0 //TVAR_afit_pBaseValS[262] /AFIT8_demsharpmix1_iHystFallLow [7:0],   AFIT8_demsharpmix1_iHystFallHigh [15:8]                  /
s5k5caga_i2c_write(0x0F12, 0x0306); 	//700009D2 //TVAR_afit_pBaseValS[263] /AFIT8_demsharpmix1_iHystTune [7:0],  * AFIT8_YUV422_DENOISE_iUVSupport [15:8]                     /
s5k5caga_i2c_write(0x0F12, 0x4602); 	//700009D4 //TVAR_afit_pBaseValS[264] /AFIT8_YUV422_DENOISE_iYSupport [7:0],   AFIT8_byr_cgras_iShadingPower [15:8]                      /
s5k5caga_i2c_write(0x0F12, 0x0880); 	//700009D6 //TVAR_afit_pBaseValS[265] /AFIT8_RGBGamma2_iLinearity [7:0],  AFIT8_RGBGamma2_iDarkReduce [15:8]                             /
s5k5caga_i2c_write(0x0F12, 0x0080); 	//700009D8 //TVAR_afit_pBaseValS[266] /AFIT8_ccm_oscar_iSaturation[7:0],   AFIT8_RGB2YUV_iYOffset [15:8]                                 /
s5k5caga_i2c_write(0x0F12, 0x0080); 	//700009DA //TVAR_afit_pBaseValS[267] /AFIT8_RGB2YUV_iRGBGain [7:0],   AFIT8_RGB2YUV_iSaturation [15:8]                                  /
s5k5caga_i2c_write(0x0F12, 0x0101); 	//700009DC //TVAR_afit_pBaseValS[268] /AFIT8_sddd8a_iClustThresh_H [7:0],  AFIT8_sddd8a_iClustThresh_C [15:8]                            /
s5k5caga_i2c_write(0x0F12, 0x0707); 	//700009DE //TVAR_afit_pBaseValS[269] /AFIT8_sddd8a_iClustMulT_H [7:0],   AFIT8_sddd8a_iClustMulT_C [15:8]                               /
s5k5caga_i2c_write(0x0F12, 0x1E01); 	//700009E0 //TVAR_afit_pBaseValS[270] /AFIT8_sddd8a_nClustLevel_H [7:0],   AFIT8_sddd8a_DispTH_Low [15:8]                                /
s5k5caga_i2c_write(0x0F12, 0x3C1E); 	//700009E2 //TVAR_afit_pBaseValS[271] /AFIT8_sddd8a_DispTH_High [7:0],   AFIT8_sddd8a_iDenThreshLow [15:8]                               /
s5k5caga_i2c_write(0x0F12, 0x5028); 	//700009E4 //TVAR_afit_pBaseValS[272] /AFIT8_sddd8a_iDenThreshHigh[7:0],   AFIT8_Demosaicing_iEdgeDesat [15:8]                           /
s5k5caga_i2c_write(0x0F12, 0x0500); 	//700009E6 //TVAR_afit_pBaseValS[273] /AFIT8_Demosaicing_iEdgeDesatThrLow [7:0],   AFIT8_Demosaicing_iEdgeDesatThrHigh [15:8]            /
s5k5caga_i2c_write(0x0F12, 0x1A04); 	//700009E8 //TVAR_afit_pBaseValS[274] /AFIT8_Demosaicing_iEdgeDesatLimit[7:0],  AFIT8_Demosaicing_iDemSharpenLow [15:8]                  /
s5k5caga_i2c_write(0x0F12, 0x280A); 	//700009EA //TVAR_afit_pBaseValS[275] /AFIT8_Demosaicing_iDemSharpenHigh[7:0],   AFIT8_Demosaicing_iDemSharpThresh [15:8]                /
s5k5caga_i2c_write(0x0F12, 0x080C); 	//700009EC //TVAR_afit_pBaseValS[276] /AFIT8_Demosaicing_iDemShLowLimit [7:0],   AFIT8_Demosaicing_iDespeckleForDemsharp [15:8]          /
s5k5caga_i2c_write(0x0F12, 0x1414); 	//700009EE //TVAR_afit_pBaseValS[277] /AFIT8_Demosaicing_iDemBlurLow[7:0],   AFIT8_Demosaicing_iDemBlurHigh [15:8]                       /
s5k5caga_i2c_write(0x0F12, 0x6A03); 	//700009F0 //TVAR_afit_pBaseValS[278] /AFIT8_Demosaicing_iDemBlurRange[7:0],   AFIT8_Sharpening_iLowSharpPower [15:8]                    /
s5k5caga_i2c_write(0x0F12, 0x121E); 	//700009F2 //TVAR_afit_pBaseValS[279] /AFIT8_Sharpening_iHighSharpPower[7:0],   AFIT8_Sharpening_iLowShDenoise [15:8]                    /
s5k5caga_i2c_write(0x0F12, 0x4012); 	//700009F4 //TVAR_afit_pBaseValS[280] /AFIT8_Sharpening_iHighShDenoise [7:0],   AFIT8_Sharpening_iReduceEdgeMinMult [15:8]               /
s5k5caga_i2c_write(0x0F12, 0x0604); 	//700009F6 //TVAR_afit_pBaseValS[281] /AFIT8_Sharpening_iReduceEdgeSlope [7:0],  AFIT8_demsharpmix1_iWideFiltReduce [15:8]               /
s5k5caga_i2c_write(0x0F12, 0x2806); 	//700009F8 //TVAR_afit_pBaseValS[282] /AFIT8_demsharpmix1_iNarrFiltReduce [7:0],  AFIT8_sddd8a_iClustThresh_H_Bin [15:8]                 /
s5k5caga_i2c_write(0x0F12, 0x0128); 	//700009FA //TVAR_afit_pBaseValS[283] /AFIT8_sddd8a_iClustThresh_C_Bin [7:0],   AFIT8_sddd8a_iClustMulT_H_Bin [15:8]                     /
s5k5caga_i2c_write(0x0F12, 0x0101); 	//700009FC //TVAR_afit_pBaseValS[284] /AFIT8_sddd8a_iClustMulT_C_Bin [7:0],   AFIT8_sddd8a_nClustLevel_H_Bin [15:8]                      /
s5k5caga_i2c_write(0x0F12, 0x2224); 	//700009FE //TVAR_afit_pBaseValS[285] /AFIT8_sddd8a_DispTH_Low_Bin [7:0],   AFIT8_sddd8a_DispTH_High_Bin [15:8]                          /
s5k5caga_i2c_write(0x0F12, 0x3236); 	//70000A00 //TVAR_afit_pBaseValS[286] /AFIT8_sddd8a_iDenThreshLow_Bin [7:0],   AFIT8_sddd8a_iDenThreshHigh_Bin [15:8]                    /
s5k5caga_i2c_write(0x0F12, 0x0028); 	//70000A02 //TVAR_afit_pBaseValS[287] /AFIT8_Demosaicing_iEdgeDesat_Bin[7:0],   AFIT8_Demosaicing_iEdgeDesatThrLow_Bin [15:8]            /
s5k5caga_i2c_write(0x0F12, 0x030A); 	//70000A04 //TVAR_afit_pBaseValS[288] /AFIT8_Demosaicing_iEdgeDesatThrHigh_Bin [7:0],  AFIT8_Demosaicing_iEdgeDesatLimit_Bin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x0410); 	//70000A06 //TVAR_afit_pBaseValS[289] /AFIT8_Demosaicing_iDemSharpenLow_Bin [7:0],  AFIT8_Demosaicing_iDemSharpenHigh_Bin [15:8]         /
s5k5caga_i2c_write(0x0F12, 0x141E); 	//70000A08 //TVAR_afit_pBaseValS[290] /AFIT8_Demosaicing_iDemSharpThresh_Bin [7:0],  AFIT8_Demosaicing_iDemShLowLimit_Bin [15:8]         /
s5k5caga_i2c_write(0x0F12, 0xFF07); 	//70000A0A //TVAR_afit_pBaseValS[291] /AFIT8_Demosaicing_iDespeckleForDemsharp_Bin [7:0],  AFIT8_Demosaicing_iDemBlurLow_Bin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x0432); 	//70000A0C //TVAR_afit_pBaseValS[292] /AFIT8_Demosaicing_iDemBlurHigh_Bin [7:0],  AFIT8_Demosaicing_iDemBlurRange_Bin [15:8]             /
s5k5caga_i2c_write(0x0F12, 0x4050); 	//70000A0E //TVAR_afit_pBaseValS[293] /AFIT8_Sharpening_iLowSharpPower_Bin [7:0],  AFIT8_Sharpening_iHighSharpPower_Bin [15:8]           /
s5k5caga_i2c_write(0x0F12, 0x0F0F); 	//70000A10 //TVAR_afit_pBaseValS[294] /AFIT8_Sharpening_iLowShDenoise_Bin [7:0],  AFIT8_Sharpening_iHighShDenoise_Bin [15:8]             /
s5k5caga_i2c_write(0x0F12, 0x0440); 	//70000A12 //TVAR_afit_pBaseValS[295] /AFIT8_Sharpening_iReduceEdgeMinMult_Bin [7:0],  AFIT8_Sharpening_iReduceEdgeSlope_Bin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x0302); 	//70000A14 //TVAR_afit_pBaseValS[296] /AFIT8_demsharpmix1_iWideFiltReduce_Bin [7:0],  AFIT8_demsharpmix1_iNarrFiltReduce_Bin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x2828); 	//70000A16 //TVAR_afit_pBaseValS[297] /AFIT8_sddd8a_iClustThresh_H_sBin[7:0],   AFIT8_sddd8a_iClustThresh_C_sBin [15:8]                  /
s5k5caga_i2c_write(0x0F12, 0x0101); 	//70000A18 //TVAR_afit_pBaseValS[298] /AFIT8_sddd8a_iClustMulT_H_sBin [7:0],   AFIT8_sddd8a_iClustMulT_C_sBin [15:8]                     /
s5k5caga_i2c_write(0x0F12, 0x2401); 	//70000A1A //TVAR_afit_pBaseValS[299] /AFIT8_sddd8a_nClustLevel_H_sBin [7:0],   AFIT8_sddd8a_DispTH_Low_sBin [15:8]                      /
s5k5caga_i2c_write(0x0F12, 0x3622); 	//70000A1C //TVAR_afit_pBaseValS[300] /AFIT8_sddd8a_DispTH_High_sBin [7:0],   AFIT8_sddd8a_iDenThreshLow_sBin [15:8]                     /
s5k5caga_i2c_write(0x0F12, 0x2832); 	//70000A1E //TVAR_afit_pBaseValS[301] /AFIT8_sddd8a_iDenThreshHigh_sBin[7:0],   AFIT8_Demosaicing_iEdgeDesat_sBin [15:8]                 /
s5k5caga_i2c_write(0x0F12, 0x0A00); 	//70000A20 //TVAR_afit_pBaseValS[302] /AFIT8_Demosaicing_iEdgeDesatThrLow_sBin [7:0],  AFIT8_Demosaicing_iEdgeDesatThrHigh_sBin [15:8]   /
s5k5caga_i2c_write(0x0F12, 0x1003); 	//70000A22 //TVAR_afit_pBaseValS[303] /AFIT8_Demosaicing_iEdgeDesatLimit_sBin [7:0],  AFIT8_Demosaicing_iDemSharpenLow_sBin [15:8]       /
s5k5caga_i2c_write(0x0F12, 0x1E04); 	//70000A24 //TVAR_afit_pBaseValS[304] /AFIT8_Demosaicing_iDemSharpenHigh_sBin [7:0],  AFIT8_Demosaicing_iDemSharpThresh_sBin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x0714); 	//70000A26 //TVAR_afit_pBaseValS[305] /AFIT8_Demosaicing_iDemShLowLimit_sBin [7:0],  AFIT8_Demosaicing_iDespeckleForDemsharp_sBin [15:8] /
s5k5caga_i2c_write(0x0F12, 0x32FF); 	//70000A28 //TVAR_afit_pBaseValS[306] /AFIT8_Demosaicing_iDemBlurLow_sBin [7:0],  AFIT8_Demosaicing_iDemBlurHigh_sBin [15:8]             /
s5k5caga_i2c_write(0x0F12, 0x5004); 	//70000A2A //TVAR_afit_pBaseValS[307] /AFIT8_Demosaicing_iDemBlurRange_sBin [7:0],  AFIT8_Sharpening_iLowSharpPower_sBin [15:8]          /
s5k5caga_i2c_write(0x0F12, 0x0F40); 	//70000A2C //TVAR_afit_pBaseValS[308] /AFIT8_Sharpening_iHighSharpPower_sBin [7:0],  AFIT8_Sharpening_iLowShDenoise_sBin [15:8]          /
s5k5caga_i2c_write(0x0F12, 0x400F); 	//70000A2E //TVAR_afit_pBaseValS[309] /AFIT8_Sharpening_iHighShDenoise_sBin [7:0],  AFIT8_Sharpening_iReduceEdgeMinMult_sBin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x0204); 	//70000A30 //TVAR_afit_pBaseValS[310] /AFIT8_Sharpening_iReduceEdgeSlope_sBin [7:0],  AFIT8_demsharpmix1_iWideFiltReduce_sBin [15:8]     /
s5k5caga_i2c_write(0x0F12, 0x0003); 	//70000A32 //TVAR_afit_pBaseValS[311] /AFIT8_demsharpmix1_iNarrFiltReduce_sBin [7:0]                                                     /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000A34 //TVAR_afit_pBaseValS[312] /AFIT16_BRIGHTNESS                                                                                 /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000A36 //TVAR_afit_pBaseValS[313] /AFIT16_CONTRAST                                                                                   /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000A38 //TVAR_afit_pBaseValS[314] /AFIT16_SATURATION                                                                                 /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000A3A //TVAR_afit_pBaseValS[315] /AFIT16_SHARP_BLUR                                                                                 /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000A3C //TVAR_afit_pBaseValS[316] /AFIT16_GLAMOUR                                                                                    /
s5k5caga_i2c_write(0x0F12, 0x00C1); 	//70000A3E //TVAR_afit_pBaseValS[317] /AFIT16_sddd8a_edge_high                                                                           /
s5k5caga_i2c_write(0x0F12, 0x03FF); 	//70000A40 //TVAR_afit_pBaseValS[318] /AFIT16_Demosaicing_iSatVal                                                                        /
s5k5caga_i2c_write(0x0F12, 0x009C); 	//70000A42 //TVAR_afit_pBaseValS[319] /AFIT16_Sharpening_iReduceEdgeThresh                                                               /
s5k5caga_i2c_write(0x0F12, 0x0251); 	//70000A44 //TVAR_afit_pBaseValS[320] /AFIT16_demsharpmix1_iRGBOffset                                                                    /
s5k5caga_i2c_write(0x0F12, 0x03FF); 	//70000A46 //TVAR_afit_pBaseValS[321] /AFIT16_demsharpmix1_iDemClamp                                                                     /
s5k5caga_i2c_write(0x0F12, 0x000C); 	//70000A48 //TVAR_afit_pBaseValS[322] /AFIT16_demsharpmix1_iLowThreshold                                                                 /
s5k5caga_i2c_write(0x0F12, 0x0010); 	//70000A4A //TVAR_afit_pBaseValS[323] /AFIT16_demsharpmix1_iHighThreshold                                                                /
s5k5caga_i2c_write(0x0F12, 0x00C8); 	//70000A4C //TVAR_afit_pBaseValS[324] /AFIT16_demsharpmix1_iLowBright                                                                    /
s5k5caga_i2c_write(0x0F12, 0x03E8); 	//70000A4E //TVAR_afit_pBaseValS[325] /AFIT16_demsharpmix1_iHighBright                                                                   /
s5k5caga_i2c_write(0x0F12, 0x0046); 	//70000A50 //TVAR_afit_pBaseValS[326] /AFIT16_demsharpmix1_iLowSat                                                                       /
s5k5caga_i2c_write(0x0F12, 0x0050); 	//70000A52 //TVAR_afit_pBaseValS[327] /AFIT16_demsharpmix1_iHighSat                                                                      /
s5k5caga_i2c_write(0x0F12, 0x0070); 	//70000A54 //TVAR_afit_pBaseValS[328] /AFIT16_demsharpmix1_iTune                                                                         /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000A56 //TVAR_afit_pBaseValS[329] /AFIT16_demsharpmix1_iHystThLow                                                                    /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000A58 //TVAR_afit_pBaseValS[330] /AFIT16_demsharpmix1_iHystThHigh                                                                   /
s5k5caga_i2c_write(0x0F12, 0x0226); 	//70000A5A //TVAR_afit_pBaseValS[331] /AFIT16_demsharpmix1_iHystCenter                                                                   /
s5k5caga_i2c_write(0x0F12, 0x0014); 	//70000A5C //TVAR_afit_pBaseValS[332] /AFIT16_YUV422_DENOISE_iUVLowThresh                                                                /
s5k5caga_i2c_write(0x0F12, 0x0014); 	//70000A5E //TVAR_afit_pBaseValS[333] /AFIT16_YUV422_DENOISE_iUVHighThresh                                                               /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000A60 //TVAR_afit_pBaseValS[334] /AFIT16_YUV422_DENOISE_iYLowThresh                                                                 /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000A62 //TVAR_afit_pBaseValS[335] /AFIT16_YUV422_DENOISE_iYHighThresh                                                                /
s5k5caga_i2c_write(0x0F12, 0x004E); 	//70000A64 //TVAR_afit_pBaseValS[336] /AFIT16_Sharpening_iLowSharpClamp                                                                  /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000A66 //TVAR_afit_pBaseValS[337] /AFIT16_Sharpening_iHighSharpClamp                                                                 /
s5k5caga_i2c_write(0x0F12, 0x002D); 	//70000A68 //TVAR_afit_pBaseValS[338] /AFIT16_Sharpening_iLowSharpClamp_Bin                                                              /
s5k5caga_i2c_write(0x0F12, 0x0019); 	//70000A6A //TVAR_afit_pBaseValS[339] /AFIT16_Sharpening_iHighSharpClamp_Bin                                                             /
s5k5caga_i2c_write(0x0F12, 0x002D); 	//70000A6C //TVAR_afit_pBaseValS[340] /AFIT16_Sharpening_iLowSharpClamp_sBin                                                             /
s5k5caga_i2c_write(0x0F12, 0x0019); 	//70000A6E //TVAR_afit_pBaseValS[341] /AFIT16_Sharpening_iHighSharpClamp_sBin                                                            /
s5k5caga_i2c_write(0x0F12, 0x0A24); 	//70000A70 //TVAR_afit_pBaseValS[342] /AFIT8_sddd8a_edge_low [7:0],   AFIT8_sddd8a_repl_thresh [15:8]                                    /
s5k5caga_i2c_write(0x0F12, 0x1701); 	//70000A72 //TVAR_afit_pBaseValS[343] /AFIT8_sddd8a_repl_force [7:0],  AFIT8_sddd8a_sat_level [15:8]                                     /
s5k5caga_i2c_write(0x0F12, 0x0229); 	//70000A74 //TVAR_afit_pBaseValS[344] /AFIT8_sddd8a_sat_thr[7:0],  AFIT8_sddd8a_sat_mpl [15:8]                                           /
s5k5caga_i2c_write(0x0F12, 0x1403); 	//70000A76 //TVAR_afit_pBaseValS[345] /AFIT8_sddd8a_sat_noise[7:0],  AFIT8_sddd8a_iMaxSlopeAllowed [15:8]                                /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000A78 //TVAR_afit_pBaseValS[346] /AFIT8_sddd8a_iHotThreshHigh[7:0],  AFIT8_sddd8a_iHotThreshLow [15:8]                              /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000A7A //TVAR_afit_pBaseValS[347] /AFIT8_sddd8a_iColdThreshHigh[7:0],  AFIT8_sddd8a_iColdThreshLow [15:8]                            /
s5k5caga_i2c_write(0x0F12, 0x0906); 	//70000A7C //TVAR_afit_pBaseValS[348] /AFIT8_sddd8a_AddNoisePower1[7:0],  AFIT8_sddd8a_AddNoisePower2 [15:8]                             /
s5k5caga_i2c_write(0x0F12, 0x00FF); 	//70000A7E //TVAR_afit_pBaseValS[349] /AFIT8_sddd8a_iSatSat[7:0],   AFIT8_sddd8a_iRadialTune [15:8]                                      /
s5k5caga_i2c_write(0x0F12, 0x045A); 	//70000A80 //TVAR_afit_pBaseValS[350] /AFIT8_sddd8a_iRadialLimit [7:0],   AFIT8_sddd8a_iRadialPower [15:8]                               /
s5k5caga_i2c_write(0x0F12, 0x1414); 	//70000A82 //TVAR_afit_pBaseValS[351] /AFIT8_sddd8a_iLowMaxSlopeAllowed [7:0],  AFIT8_sddd8a_iHighMaxSlopeAllowed [15:8]                 /
s5k5caga_i2c_write(0x0F12, 0x0301); 	//70000A84 //TVAR_afit_pBaseValS[352] /AFIT8_sddd8a_iLowSlopeThresh[7:0],   AFIT8_sddd8a_iHighSlopeThresh [15:8]                         /
s5k5caga_i2c_write(0x0F12, 0xFF07); 	//70000A86 //TVAR_afit_pBaseValS[353] /AFIT8_sddd8a_iSquaresRounding [7:0],   AFIT8_Demosaicing_iCentGrad [15:8]                         /
s5k5caga_i2c_write(0x0F12, 0x081E); 	//70000A88 //TVAR_afit_pBaseValS[354] /AFIT8_Demosaicing_iMonochrom [7:0],   AFIT8_Demosaicing_iDecisionThresh [15:8]                    /
s5k5caga_i2c_write(0x0F12, 0x0A14); 	//70000A8A //TVAR_afit_pBaseValS[355] /AFIT8_Demosaicing_iDesatThresh [7:0],   AFIT8_Demosaicing_iEnhThresh [15:8]                       /
s5k5caga_i2c_write(0x0F12, 0x0F0F); 	//70000A8C //TVAR_afit_pBaseValS[356] /AFIT8_Demosaicing_iGRDenoiseVal [7:0],   AFIT8_Demosaicing_iGBDenoiseVal [15:8]                   /
s5k5caga_i2c_write(0x0F12, 0x0A00); 	//70000A8E //TVAR_afit_pBaseValS[357] /AFIT8_Demosaicing_iNearGrayDesat[7:0],   AFIT8_Demosaicing_iDFD_ReduceCoeff [15:8]                /
s5k5caga_i2c_write(0x0F12, 0x0090); 	//70000A90 //TVAR_afit_pBaseValS[358] /AFIT8_Sharpening_iMSharpen [7:0],   AFIT8_Sharpening_iMShThresh [15:8]                            /
s5k5caga_i2c_write(0x0F12, 0x000A); 	//70000A92 //TVAR_afit_pBaseValS[359] /AFIT8_Sharpening_iWSharpen [7:0],   AFIT8_Sharpening_iWShThresh [15:8]                            /
s5k5caga_i2c_write(0x0F12, 0x0001); 	//70000A94 //TVAR_afit_pBaseValS[360] /AFIT8_Sharpening_nSharpWidth [7:0],   AFIT8_Sharpening_iReduceNegative [15:8]                     /
s5k5caga_i2c_write(0x0F12, 0x00FF); 	//70000A96 //TVAR_afit_pBaseValS[361] /AFIT8_Sharpening_iShDespeckle [7:0],  AFIT8_demsharpmix1_iRGBMultiplier [15:8]                    /
s5k5caga_i2c_write(0x0F12, 0x1002); 	//70000A98 //TVAR_afit_pBaseValS[362] /AFIT8_demsharpmix1_iFilterPower [7:0],  AFIT8_demsharpmix1_iBCoeff [15:8]                         /
s5k5caga_i2c_write(0x0F12, 0x001E); 	//70000A9A //TVAR_afit_pBaseValS[363] /AFIT8_demsharpmix1_iGCoeff [7:0],   AFIT8_demsharpmix1_iWideMult [15:8]                           /
s5k5caga_i2c_write(0x0F12, 0x0900); 	//70000A9C //TVAR_afit_pBaseValS[364] /AFIT8_demsharpmix1_iNarrMult [7:0],   AFIT8_demsharpmix1_iHystFalloff [15:8]                      /
s5k5caga_i2c_write(0x0F12, 0x0600); 	//70000A9E //TVAR_afit_pBaseValS[365] /AFIT8_demsharpmix1_iHystMinMult [7:0],   AFIT8_demsharpmix1_iHystWidth [15:8]                     /
s5k5caga_i2c_write(0x0F12, 0x0504); 	//70000AA0 //TVAR_afit_pBaseValS[366] /AFIT8_demsharpmix1_iHystFallLow [7:0],   AFIT8_demsharpmix1_iHystFallHigh [15:8]                  /
s5k5caga_i2c_write(0x0F12, 0x0307); 	//70000AA2 //TVAR_afit_pBaseValS[367] /AFIT8_demsharpmix1_iHystTune [7:0],  * AFIT8_YUV422_DENOISE_iUVSupport [15:8]                     /
s5k5caga_i2c_write(0x0F12, 0x5002); 	//70000AA4 //TVAR_afit_pBaseValS[368] /AFIT8_YUV422_DENOISE_iYSupport [7:0],   AFIT8_byr_cgras_iShadingPower [15:8]                      /
s5k5caga_i2c_write(0x0F12, 0x0080); 	//70000AA6 //TVAR_afit_pBaseValS[369] /AFIT8_RGBGamma2_iLinearity [7:0],  AFIT8_RGBGamma2_iDarkReduce [15:8]                             /
s5k5caga_i2c_write(0x0F12, 0x0080); 	//70000AA8 //TVAR_afit_pBaseValS[370] /AFIT8_ccm_oscar_iSaturation[7:0],   AFIT8_RGB2YUV_iYOffset [15:8]                                 /
s5k5caga_i2c_write(0x0F12, 0x0080); 	//70000AAA //TVAR_afit_pBaseValS[371] /AFIT8_RGB2YUV_iRGBGain [7:0],   AFIT8_RGB2YUV_iSaturation [15:8]                                  /
s5k5caga_i2c_write(0x0F12, 0x0101); 	//70000AAC //TVAR_afit_pBaseValS[372] /AFIT8_sddd8a_iClustThresh_H [7:0],  AFIT8_sddd8a_iClustThresh_C [15:8]                            /
s5k5caga_i2c_write(0x0F12, 0x0707); 	//70000AAE //TVAR_afit_pBaseValS[373] /AFIT8_sddd8a_iClustMulT_H [7:0],   AFIT8_sddd8a_iClustMulT_C [15:8]                               /
s5k5caga_i2c_write(0x0F12, 0x1E01); 	//70000AB0 //TVAR_afit_pBaseValS[374] /AFIT8_sddd8a_nClustLevel_H [7:0],   AFIT8_sddd8a_DispTH_Low [15:8]                                /
s5k5caga_i2c_write(0x0F12, 0x2A1E); 	//70000AB2 //TVAR_afit_pBaseValS[375] /AFIT8_sddd8a_DispTH_High [7:0],   AFIT8_sddd8a_iDenThreshLow [15:8]                               /
s5k5caga_i2c_write(0x0F12, 0x5020); 	//70000AB4 //TVAR_afit_pBaseValS[376] /AFIT8_sddd8a_iDenThreshHigh[7:0],   AFIT8_Demosaicing_iEdgeDesat [15:8]                           /
s5k5caga_i2c_write(0x0F12, 0x0500); 	//70000AB6 //TVAR_afit_pBaseValS[377] /AFIT8_Demosaicing_iEdgeDesatThrLow [7:0],   AFIT8_Demosaicing_iEdgeDesatThrHigh [15:8]            /
s5k5caga_i2c_write(0x0F12, 0x1A04); 	//70000AB8 //TVAR_afit_pBaseValS[378] /AFIT8_Demosaicing_iEdgeDesatLimit[7:0],  AFIT8_Demosaicing_iDemSharpenLow [15:8]                  /
s5k5caga_i2c_write(0x0F12, 0x280A); 	//70000ABA //TVAR_afit_pBaseValS[379] /AFIT8_Demosaicing_iDemSharpenHigh[7:0],   AFIT8_Demosaicing_iDemSharpThresh [15:8]                /
s5k5caga_i2c_write(0x0F12, 0x080C); 	//70000ABC //TVAR_afit_pBaseValS[380] /AFIT8_Demosaicing_iDemShLowLimit [7:0],   AFIT8_Demosaicing_iDespeckleForDemsharp [15:8]          /
s5k5caga_i2c_write(0x0F12, 0x1414); 	//70000ABE //TVAR_afit_pBaseValS[381] /AFIT8_Demosaicing_iDemBlurLow[7:0],   AFIT8_Demosaicing_iDemBlurHigh [15:8]                       /
s5k5caga_i2c_write(0x0F12, 0x6A03); 	//70000AC0 //TVAR_afit_pBaseValS[382] /AFIT8_Demosaicing_iDemBlurRange[7:0],   AFIT8_Sharpening_iLowSharpPower [15:8]                    /
s5k5caga_i2c_write(0x0F12, 0x121E); 	//70000AC2 //TVAR_afit_pBaseValS[383] /AFIT8_Sharpening_iHighSharpPower[7:0],   AFIT8_Sharpening_iLowShDenoise [15:8]                    /
s5k5caga_i2c_write(0x0F12, 0x4012); 	//70000AC4 //TVAR_afit_pBaseValS[384] /AFIT8_Sharpening_iHighShDenoise [7:0],   AFIT8_Sharpening_iReduceEdgeMinMult [15:8]               /
s5k5caga_i2c_write(0x0F12, 0x0604); 	//70000AC6 //TVAR_afit_pBaseValS[385] /AFIT8_Sharpening_iReduceEdgeSlope [7:0],  AFIT8_demsharpmix1_iWideFiltReduce [15:8]               /
s5k5caga_i2c_write(0x0F12, 0x3C06); 	//70000AC8 //TVAR_afit_pBaseValS[386] /AFIT8_demsharpmix1_iNarrFiltReduce [7:0],  AFIT8_sddd8a_iClustThresh_H_Bin [15:8]                 /
s5k5caga_i2c_write(0x0F12, 0x013C); 	//70000ACA //TVAR_afit_pBaseValS[387] /AFIT8_sddd8a_iClustThresh_C_Bin [7:0],   AFIT8_sddd8a_iClustMulT_H_Bin [15:8]                     /
s5k5caga_i2c_write(0x0F12, 0x0101); 	//70000ACC //TVAR_afit_pBaseValS[388] /AFIT8_sddd8a_iClustMulT_C_Bin [7:0],   AFIT8_sddd8a_nClustLevel_H_Bin [15:8]                      /
s5k5caga_i2c_write(0x0F12, 0x1C1E); 	//70000ACE //TVAR_afit_pBaseValS[389] /AFIT8_sddd8a_DispTH_Low_Bin [7:0],   AFIT8_sddd8a_DispTH_High_Bin [15:8]                          /
s5k5caga_i2c_write(0x0F12, 0x1E22); 	//70000AD0 //TVAR_afit_pBaseValS[390] /AFIT8_sddd8a_iDenThreshLow_Bin [7:0],   AFIT8_sddd8a_iDenThreshHigh_Bin [15:8]                    /
s5k5caga_i2c_write(0x0F12, 0x0028); 	//70000AD2 //TVAR_afit_pBaseValS[391] /AFIT8_Demosaicing_iEdgeDesat_Bin[7:0],   AFIT8_Demosaicing_iEdgeDesatThrLow_Bin [15:8]            /
s5k5caga_i2c_write(0x0F12, 0x030A); 	//70000AD4 //TVAR_afit_pBaseValS[392] /AFIT8_Demosaicing_iEdgeDesatThrHigh_Bin [7:0],  AFIT8_Demosaicing_iEdgeDesatLimit_Bin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x0214); 	//70000AD6 //TVAR_afit_pBaseValS[393] /AFIT8_Demosaicing_iDemSharpenLow_Bin [7:0],  AFIT8_Demosaicing_iDemSharpenHigh_Bin [15:8]         /
s5k5caga_i2c_write(0x0F12, 0x0E14); 	//70000AD8 //TVAR_afit_pBaseValS[394] /AFIT8_Demosaicing_iDemSharpThresh_Bin [7:0],  AFIT8_Demosaicing_iDemShLowLimit_Bin [15:8]         /
s5k5caga_i2c_write(0x0F12, 0xFF06); 	//70000ADA //TVAR_afit_pBaseValS[395] /AFIT8_Demosaicing_iDespeckleForDemsharp_Bin [7:0],  AFIT8_Demosaicing_iDemBlurLow_Bin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x0432); 	//70000ADC //TVAR_afit_pBaseValS[396] /AFIT8_Demosaicing_iDemBlurHigh_Bin [7:0],  AFIT8_Demosaicing_iDemBlurRange_Bin [15:8]             /
s5k5caga_i2c_write(0x0F12, 0x4052); 	//70000ADE //TVAR_afit_pBaseValS[397] /AFIT8_Sharpening_iLowSharpPower_Bin [7:0],  AFIT8_Sharpening_iHighSharpPower_Bin [15:8]           /
s5k5caga_i2c_write(0x0F12, 0x150C); 	//70000AE0 //TVAR_afit_pBaseValS[398] /AFIT8_Sharpening_iLowShDenoise_Bin [7:0],  AFIT8_Sharpening_iHighShDenoise_Bin [15:8]             /
s5k5caga_i2c_write(0x0F12, 0x0440); 	//70000AE2 //TVAR_afit_pBaseValS[399] /AFIT8_Sharpening_iReduceEdgeMinMult_Bin [7:0],  AFIT8_Sharpening_iReduceEdgeSlope_Bin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x0302); 	//70000AE4 //TVAR_afit_pBaseValS[400] /AFIT8_demsharpmix1_iWideFiltReduce_Bin [7:0],  AFIT8_demsharpmix1_iNarrFiltReduce_Bin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x3C3C); 	//70000AE6 //TVAR_afit_pBaseValS[401] /AFIT8_sddd8a_iClustThresh_H_sBin[7:0],   AFIT8_sddd8a_iClustThresh_C_sBin [15:8]                  /
s5k5caga_i2c_write(0x0F12, 0x0101); 	//70000AE8 //TVAR_afit_pBaseValS[402] /AFIT8_sddd8a_iClustMulT_H_sBin [7:0],   AFIT8_sddd8a_iClustMulT_C_sBin [15:8]                     /
s5k5caga_i2c_write(0x0F12, 0x1E01); 	//70000AEA //TVAR_afit_pBaseValS[403] /AFIT8_sddd8a_nClustLevel_H_sBin [7:0],   AFIT8_sddd8a_DispTH_Low_sBin [15:8]                      /
s5k5caga_i2c_write(0x0F12, 0x221C); 	//70000AEC //TVAR_afit_pBaseValS[404] /AFIT8_sddd8a_DispTH_High_sBin [7:0],   AFIT8_sddd8a_iDenThreshLow_sBin [15:8]                     /
s5k5caga_i2c_write(0x0F12, 0x281E); 	//70000AEE //TVAR_afit_pBaseValS[405] /AFIT8_sddd8a_iDenThreshHigh_sBin[7:0],   AFIT8_Demosaicing_iEdgeDesat_sBin [15:8]                 /
s5k5caga_i2c_write(0x0F12, 0x0A00); 	//70000AF0 //TVAR_afit_pBaseValS[406] /AFIT8_Demosaicing_iEdgeDesatThrLow_sBin [7:0],  AFIT8_Demosaicing_iEdgeDesatThrHigh_sBin [15:8]   /
s5k5caga_i2c_write(0x0F12, 0x1403); 	//70000AF2 //TVAR_afit_pBaseValS[407] /AFIT8_Demosaicing_iEdgeDesatLimit_sBin [7:0],  AFIT8_Demosaicing_iDemSharpenLow_sBin [15:8]       /
s5k5caga_i2c_write(0x0F12, 0x1402); 	//70000AF4 //TVAR_afit_pBaseValS[408] /AFIT8_Demosaicing_iDemSharpenHigh_sBin [7:0],  AFIT8_Demosaicing_iDemSharpThresh_sBin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x060E); 	//70000AF6 //TVAR_afit_pBaseValS[409] /AFIT8_Demosaicing_iDemShLowLimit_sBin [7:0],  AFIT8_Demosaicing_iDespeckleForDemsharp_sBin [15:8] /
s5k5caga_i2c_write(0x0F12, 0x32FF); 	//70000AF8 //TVAR_afit_pBaseValS[410] /AFIT8_Demosaicing_iDemBlurLow_sBin [7:0],  AFIT8_Demosaicing_iDemBlurHigh_sBin [15:8]             /
s5k5caga_i2c_write(0x0F12, 0x5204); 	//70000AFA //TVAR_afit_pBaseValS[411] /AFIT8_Demosaicing_iDemBlurRange_sBin [7:0],  AFIT8_Sharpening_iLowSharpPower_sBin [15:8]          /
s5k5caga_i2c_write(0x0F12, 0x0C40); 	//70000AFC //TVAR_afit_pBaseValS[412] /AFIT8_Sharpening_iHighSharpPower_sBin [7:0],  AFIT8_Sharpening_iLowShDenoise_sBin [15:8]          /
s5k5caga_i2c_write(0x0F12, 0x4015); 	//70000AFE //TVAR_afit_pBaseValS[413] /AFIT8_Sharpening_iHighShDenoise_sBin [7:0],  AFIT8_Sharpening_iReduceEdgeMinMult_sBin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x0204); 	//70000B00 //TVAR_afit_pBaseValS[414] /AFIT8_Sharpening_iReduceEdgeSlope_sBin [7:0],  AFIT8_demsharpmix1_iWideFiltReduce_sBin [15:8]     /
s5k5caga_i2c_write(0x0F12, 0x0003); 	//70000B02 //TVAR_afit_pBaseValS[415] /AFIT8_demsharpmix1_iNarrFiltReduce_sBin [7:0]                                                     /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000B04 //TVAR_afit_pBaseValS[416] /AFIT16_BRIGHTNESS                                                                                 /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000B06 //TVAR_afit_pBaseValS[417] /AFIT16_CONTRAST                                                                                   /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000B08 //TVAR_afit_pBaseValS[418] /AFIT16_SATURATION                                                                                 /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000B0A //TVAR_afit_pBaseValS[419] /AFIT16_SHARP_BLUR                                                                                 /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000B0C //TVAR_afit_pBaseValS[420] /AFIT16_GLAMOUR                                                                                    /
s5k5caga_i2c_write(0x0F12, 0x00C1); 	//70000B0E //TVAR_afit_pBaseValS[421] /AFIT16_sddd8a_edge_high                                                                           /
s5k5caga_i2c_write(0x0F12, 0x03FF); 	//70000B10 //TVAR_afit_pBaseValS[422] /AFIT16_Demosaicing_iSatVal                                                                        /
s5k5caga_i2c_write(0x0F12, 0x009C); 	//70000B12 //TVAR_afit_pBaseValS[423] /AFIT16_Sharpening_iReduceEdgeThresh                                                               /
s5k5caga_i2c_write(0x0F12, 0x0251); 	//70000B14 //TVAR_afit_pBaseValS[424] /AFIT16_demsharpmix1_iRGBOffset                                                                    /
s5k5caga_i2c_write(0x0F12, 0x03FF); 	//70000B16 //TVAR_afit_pBaseValS[425] /AFIT16_demsharpmix1_iDemClamp                                                                     /
s5k5caga_i2c_write(0x0F12, 0x000C); 	//70000B18 //TVAR_afit_pBaseValS[426] /AFIT16_demsharpmix1_iLowThreshold                                                                 /
s5k5caga_i2c_write(0x0F12, 0x0010); 	//70000B1A //TVAR_afit_pBaseValS[427] /AFIT16_demsharpmix1_iHighThreshold                                                                /
s5k5caga_i2c_write(0x0F12, 0x0032); 	//70000B1C //TVAR_afit_pBaseValS[428] /AFIT16_demsharpmix1_iLowBright                                                                    /
s5k5caga_i2c_write(0x0F12, 0x028A); 	//70000B1E //TVAR_afit_pBaseValS[429] /AFIT16_demsharpmix1_iHighBright                                                                   /
s5k5caga_i2c_write(0x0F12, 0x0032); 	//70000B20 //TVAR_afit_pBaseValS[430] /AFIT16_demsharpmix1_iLowSat                                                                       /
s5k5caga_i2c_write(0x0F12, 0x01F4); 	//70000B22 //TVAR_afit_pBaseValS[431] /AFIT16_demsharpmix1_iHighSat                                                                      /
s5k5caga_i2c_write(0x0F12, 0x0070); 	//70000B24 //TVAR_afit_pBaseValS[432] /AFIT16_demsharpmix1_iTune                                                                         /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000B26 //TVAR_afit_pBaseValS[433] /AFIT16_demsharpmix1_iHystThLow                                                                    /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000B28 //TVAR_afit_pBaseValS[434] /AFIT16_demsharpmix1_iHystThHigh                                                                   /
s5k5caga_i2c_write(0x0F12, 0x01AA); 	//70000B2A //TVAR_afit_pBaseValS[435] /AFIT16_demsharpmix1_iHystCenter                                                                   /
s5k5caga_i2c_write(0x0F12, 0x003C); 	//70000B2C //TVAR_afit_pBaseValS[436] /AFIT16_YUV422_DENOISE_iUVLowThresh                                                                /
s5k5caga_i2c_write(0x0F12, 0x0050); 	//70000B2E //TVAR_afit_pBaseValS[437] /AFIT16_YUV422_DENOISE_iUVHighThresh                                                               /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000B30 //TVAR_afit_pBaseValS[438] /AFIT16_YUV422_DENOISE_iYLowThresh                                                                 /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000B32 //TVAR_afit_pBaseValS[439] /AFIT16_YUV422_DENOISE_iYHighThresh                                                                /
s5k5caga_i2c_write(0x0F12, 0x0044); 	//70000B34 //TVAR_afit_pBaseValS[440] /AFIT16_Sharpening_iLowSharpClamp                                                                  /
s5k5caga_i2c_write(0x0F12, 0x0014); 	//70000B36 //TVAR_afit_pBaseValS[441] /AFIT16_Sharpening_iHighSharpClamp                                                                 /
s5k5caga_i2c_write(0x0F12, 0x0046); 	//70000B38 //TVAR_afit_pBaseValS[442] /AFIT16_Sharpening_iLowSharpClamp_Bin                                                              /
s5k5caga_i2c_write(0x0F12, 0x0019); 	//70000B3A //TVAR_afit_pBaseValS[443] /AFIT16_Sharpening_iHighSharpClamp_Bin                                                             /
s5k5caga_i2c_write(0x0F12, 0x0046); 	//70000B3C //TVAR_afit_pBaseValS[444] /AFIT16_Sharpening_iLowSharpClamp_sBin                                                             /
s5k5caga_i2c_write(0x0F12, 0x0019); 	//70000B3E //TVAR_afit_pBaseValS[445] /AFIT16_Sharpening_iHighSharpClamp_sBin                                                            /
s5k5caga_i2c_write(0x0F12, 0x0A24); 	//70000B40 //TVAR_afit_pBaseValS[446] /AFIT8_sddd8a_edge_low [7:0],   AFIT8_sddd8a_repl_thresh [15:8]                                    /
s5k5caga_i2c_write(0x0F12, 0x1701); 	//70000B42 //TVAR_afit_pBaseValS[447] /AFIT8_sddd8a_repl_force [7:0],  AFIT8_sddd8a_sat_level [15:8]                                     /
s5k5caga_i2c_write(0x0F12, 0x0229); 	//70000B44 //TVAR_afit_pBaseValS[448] /AFIT8_sddd8a_sat_thr[7:0],  AFIT8_sddd8a_sat_mpl [15:8]                                           /
s5k5caga_i2c_write(0x0F12, 0x0503); 	//70000B46 //TVAR_afit_pBaseValS[449] /AFIT8_sddd8a_sat_noise[7:0],  AFIT8_sddd8a_iMaxSlopeAllowed [15:8]                                /
s5k5caga_i2c_write(0x0F12, 0x080F); 	//70000B48 //TVAR_afit_pBaseValS[450] /AFIT8_sddd8a_iHotThreshHigh[7:0],  AFIT8_sddd8a_iHotThreshLow [15:8]                              /
s5k5caga_i2c_write(0x0F12, 0x0808); 	//70000B4A //TVAR_afit_pBaseValS[451] /AFIT8_sddd8a_iColdThreshHigh[7:0],  AFIT8_sddd8a_iColdThreshLow [15:8]                            /
s5k5caga_i2c_write(0x0F12, 0x0000); 	//70000B4C //TVAR_afit_pBaseValS[452] /AFIT8_sddd8a_AddNoisePower1[7:0],  AFIT8_sddd8a_AddNoisePower2 [15:8]                             /
s5k5caga_i2c_write(0x0F12, 0x00FF); 	//70000B4E //TVAR_afit_pBaseValS[453] /AFIT8_sddd8a_iSatSat[7:0],   AFIT8_sddd8a_iRadialTune [15:8]                                      /
s5k5caga_i2c_write(0x0F12, 0x012D); 	//70000B50 //TVAR_afit_pBaseValS[454] /AFIT8_sddd8a_iRadialLimit [7:0],   AFIT8_sddd8a_iRadialPower [15:8]                               /
s5k5caga_i2c_write(0x0F12, 0x1414); 	//70000B52 //TVAR_afit_pBaseValS[455] /AFIT8_sddd8a_iLowMaxSlopeAllowed [7:0],  AFIT8_sddd8a_iHighMaxSlopeAllowed [15:8]                 /
s5k5caga_i2c_write(0x0F12, 0x0301); 	//70000B54 //TVAR_afit_pBaseValS[456] /AFIT8_sddd8a_iLowSlopeThresh[7:0],   AFIT8_sddd8a_iHighSlopeThresh [15:8]                         /
s5k5caga_i2c_write(0x0F12, 0xFF07); 	//70000B56 //TVAR_afit_pBaseValS[457] /AFIT8_sddd8a_iSquaresRounding [7:0],   AFIT8_Demosaicing_iCentGrad [15:8]                         /
s5k5caga_i2c_write(0x0F12, 0x061E); 	//70000B58 //TVAR_afit_pBaseValS[458] /AFIT8_Demosaicing_iMonochrom [7:0],   AFIT8_Demosaicing_iDecisionThresh [15:8]                    /
s5k5caga_i2c_write(0x0F12, 0x0A1E); 	//70000B5A //TVAR_afit_pBaseValS[459] /AFIT8_Demosaicing_iDesatThresh [7:0],   AFIT8_Demosaicing_iEnhThresh [15:8]                       /
s5k5caga_i2c_write(0x0F12, 0x0606); 	//70000B5C //TVAR_afit_pBaseValS[460] /AFIT8_Demosaicing_iGRDenoiseVal [7:0],   AFIT8_Demosaicing_iGBDenoiseVal [15:8]                   /
s5k5caga_i2c_write(0x0F12, 0x0A03); 	//70000B5E //TVAR_afit_pBaseValS[461] /AFIT8_Demosaicing_iNearGrayDesat[7:0],   AFIT8_Demosaicing_iDFD_ReduceCoeff [15:8]                /
s5k5caga_i2c_write(0x0F12, 0x378B); 	//70000B60 //TVAR_afit_pBaseValS[462] /AFIT8_Sharpening_iMSharpen [7:0],   AFIT8_Sharpening_iMShThresh [15:8]                            /
s5k5caga_i2c_write(0x0F12, 0x1028); 	//70000B62 //TVAR_afit_pBaseValS[463] /AFIT8_Sharpening_iWSharpen [7:0],   AFIT8_Sharpening_iWShThresh [15:8]                            /
s5k5caga_i2c_write(0x0F12, 0x0001); 	//70000B64 //TVAR_afit_pBaseValS[464] /AFIT8_Sharpening_nSharpWidth [7:0],   AFIT8_Sharpening_iReduceNegative [15:8]                     /
s5k5caga_i2c_write(0x0F12, 0x00FF); 	//70000B66 //TVAR_afit_pBaseValS[465] /AFIT8_Sharpening_iShDespeckle [7:0],  AFIT8_demsharpmix1_iRGBMultiplier [15:8]                    /
s5k5caga_i2c_write(0x0F12, 0x1002); 	//70000B68 //TVAR_afit_pBaseValS[466] /AFIT8_demsharpmix1_iFilterPower [7:0],  AFIT8_demsharpmix1_iBCoeff [15:8]                         /
s5k5caga_i2c_write(0x0F12, 0x001E); 	//70000B6A //TVAR_afit_pBaseValS[467] /AFIT8_demsharpmix1_iGCoeff [7:0],   AFIT8_demsharpmix1_iWideMult [15:8]                           /
s5k5caga_i2c_write(0x0F12, 0x0900); 	//70000B6C //TVAR_afit_pBaseValS[468] /AFIT8_demsharpmix1_iNarrMult [7:0],   AFIT8_demsharpmix1_iHystFalloff [15:8]                      /
s5k5caga_i2c_write(0x0F12, 0x0600); 	//70000B6E //TVAR_afit_pBaseValS[469] /AFIT8_demsharpmix1_iHystMinMult [7:0],   AFIT8_demsharpmix1_iHystWidth [15:8]                     /
s5k5caga_i2c_write(0x0F12, 0x0504); 	//70000B70 //TVAR_afit_pBaseValS[470] /AFIT8_demsharpmix1_iHystFallLow [7:0],   AFIT8_demsharpmix1_iHystFallHigh [15:8]                  /
s5k5caga_i2c_write(0x0F12, 0x0307); 	//70000B72 //TVAR_afit_pBaseValS[471] /AFIT8_demsharpmix1_iHystTune [7:0],  * AFIT8_YUV422_DENOISE_iUVSupport [15:8]                     /
s5k5caga_i2c_write(0x0F12, 0x5001); 	//70000B74 //TVAR_afit_pBaseValS[472] /AFIT8_YUV422_DENOISE_iYSupport [7:0],   AFIT8_byr_cgras_iShadingPower [15:8]                      /
s5k5caga_i2c_write(0x0F12, 0x0080); 	//70000B76 //TVAR_afit_pBaseValS[473] /AFIT8_RGBGamma2_iLinearity [7:0],  AFIT8_RGBGamma2_iDarkReduce [15:8]                             /
s5k5caga_i2c_write(0x0F12, 0x0080); 	//70000B78 //TVAR_afit_pBaseValS[474] /AFIT8_ccm_oscar_iSaturation[7:0],   AFIT8_RGB2YUV_iYOffset [15:8]                                 /
s5k5caga_i2c_write(0x0F12, 0x0080); 	//70000B7A //TVAR_afit_pBaseValS[475] /AFIT8_RGB2YUV_iRGBGain [7:0],   AFIT8_RGB2YUV_iSaturation [15:8]                                  /
s5k5caga_i2c_write(0x0F12, 0x5050); 	//70000B7C //TVAR_afit_pBaseValS[476] /AFIT8_sddd8a_iClustThresh_H [7:0],  AFIT8_sddd8a_iClustThresh_C [15:8]                            /
s5k5caga_i2c_write(0x0F12, 0x0101); 	//70000B7E //TVAR_afit_pBaseValS[477] /AFIT8_sddd8a_iClustMulT_H [7:0],   AFIT8_sddd8a_iClustMulT_C [15:8]                               /
s5k5caga_i2c_write(0x0F12, 0x3201); 	//70000B80 //TVAR_afit_pBaseValS[478] /AFIT8_sddd8a_nClustLevel_H [7:0],   AFIT8_sddd8a_DispTH_Low [15:8]                                /
s5k5caga_i2c_write(0x0F12, 0x1832); 	//70000B82 //TVAR_afit_pBaseValS[479] /AFIT8_sddd8a_DispTH_High [7:0],   AFIT8_sddd8a_iDenThreshLow [15:8]                               /        iden 12
s5k5caga_i2c_write(0x0F12, 0x210C); 	//70000B84 //TVAR_afit_pBaseValS[480] /AFIT8_sddd8a_iDenThreshHigh[7:0],   AFIT8_Demosaicing_iEdgeDesat [15:8]                           /
s5k5caga_i2c_write(0x0F12, 0x0A00); 	//70000B86 //TVAR_afit_pBaseValS[481] /AFIT8_Demosaicing_iEdgeDesatThrLow [7:0],   AFIT8_Demosaicing_iEdgeDesatThrHigh [15:8]            /
s5k5caga_i2c_write(0x0F12, 0x1E04); 	//70000B88 //TVAR_afit_pBaseValS[482] /AFIT8_Demosaicing_iEdgeDesatLimit[7:0],  AFIT8_Demosaicing_iDemSharpenLow [15:8]                  /    1E demhsharplow
s5k5caga_i2c_write(0x0F12, 0x0A08); 	//70000B8A //TVAR_afit_pBaseValS[483] /AFIT8_Demosaicing_iDemSharpenHigh[7:0],   AFIT8_Demosaicing_iDemSharpThresh [15:8]                /
s5k5caga_i2c_write(0x0F12, 0x070C); 	//70000B8C //TVAR_afit_pBaseValS[484] /AFIT8_Demosaicing_iDemShLowLimit [7:0],   AFIT8_Demosaicing_iDespeckleForDemsharp [15:8]          /    c8 clamp
s5k5caga_i2c_write(0x0F12, 0x3264); 	//70000B8E //TVAR_afit_pBaseValS[485] /AFIT8_Demosaicing_iDemBlurLow[7:0],   AFIT8_Demosaicing_iDemBlurHigh [15:8]                       /
s5k5caga_i2c_write(0x0F12, 0x5A02); 	//70000B90 //TVAR_afit_pBaseValS[486] /AFIT8_Demosaicing_iDemBlurRange[7:0],   AFIT8_Sharpening_iLowSharpPower [15:8]                    /
s5k5caga_i2c_write(0x0F12, 0x1040); 	//70000B92 //TVAR_afit_pBaseValS[487] /AFIT8_Sharpening_iHighSharpPower[7:0],   AFIT8_Sharpening_iLowShDenoise [15:8]                    /
s5k5caga_i2c_write(0x0F12, 0x4012); 	//70000B94 //TVAR_afit_pBaseValS[488] /AFIT8_Sharpening_iHighShDenoise [7:0],   AFIT8_Sharpening_iReduceEdgeMinMult [15:8]               /
s5k5caga_i2c_write(0x0F12, 0x0604); 	//70000B96 //TVAR_afit_pBaseValS[489] /AFIT8_Sharpening_iReduceEdgeSlope [7:0],  AFIT8_demsharpmix1_iWideFiltReduce [15:8]               /
s5k5caga_i2c_write(0x0F12, 0x4606); 	//70000B98 //TVAR_afit_pBaseValS[490] /AFIT8_demsharpmix1_iNarrFiltReduce [7:0],  AFIT8_sddd8a_iClustThresh_H_Bin [15:8]                 /
s5k5caga_i2c_write(0x0F12, 0x0146); 	//70000B9A //TVAR_afit_pBaseValS[491] /AFIT8_sddd8a_iClustThresh_C_Bin [7:0],   AFIT8_sddd8a_iClustMulT_H_Bin [15:8]                     /
s5k5caga_i2c_write(0x0F12, 0x0101); 	//70000B9C //TVAR_afit_pBaseValS[492] /AFIT8_sddd8a_iClustMulT_C_Bin [7:0],   AFIT8_sddd8a_nClustLevel_H_Bin [15:8]                      /
s5k5caga_i2c_write(0x0F12, 0x1C18); 	//70000B9E //TVAR_afit_pBaseValS[493] /AFIT8_sddd8a_DispTH_Low_Bin [7:0],   AFIT8_sddd8a_DispTH_High_Bin [15:8]                          /
s5k5caga_i2c_write(0x0F12, 0x1819); 	//70000BA0 //TVAR_afit_pBaseValS[494] /AFIT8_sddd8a_iDenThreshLow_Bin [7:0],   AFIT8_sddd8a_iDenThreshHigh_Bin [15:8]                    /
s5k5caga_i2c_write(0x0F12, 0x0028); 	//70000BA2 //TVAR_afit_pBaseValS[495] /AFIT8_Demosaicing_iEdgeDesat_Bin[7:0],   AFIT8_Demosaicing_iEdgeDesatThrLow_Bin [15:8]            /
s5k5caga_i2c_write(0x0F12, 0x030A); 	//70000BA4 //TVAR_afit_pBaseValS[496] /AFIT8_Demosaicing_iEdgeDesatThrHigh_Bin [7:0],  AFIT8_Demosaicing_iEdgeDesatLimit_Bin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x0514); 	//70000BA6 //TVAR_afit_pBaseValS[497] /AFIT8_Demosaicing_iDemSharpenLow_Bin [7:0],  AFIT8_Demosaicing_iDemSharpenHigh_Bin [15:8]         /
s5k5caga_i2c_write(0x0F12, 0x0C14); 	//70000BA8 //TVAR_afit_pBaseValS[498] /AFIT8_Demosaicing_iDemSharpThresh_Bin [7:0],  AFIT8_Demosaicing_iDemShLowLimit_Bin [15:8]         /
s5k5caga_i2c_write(0x0F12, 0xFF05); 	//70000BAA //TVAR_afit_pBaseValS[499] /AFIT8_Demosaicing_iDespeckleForDemsharp_Bin [7:0],  AFIT8_Demosaicing_iDemBlurLow_Bin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x0432); 	//70000BAC //TVAR_afit_pBaseValS[500] /AFIT8_Demosaicing_iDemBlurHigh_Bin [7:0],  AFIT8_Demosaicing_iDemBlurRange_Bin [15:8]             /
s5k5caga_i2c_write(0x0F12, 0x4052); 	//70000BAE //TVAR_afit_pBaseValS[501] /AFIT8_Sharpening_iLowSharpPower_Bin [7:0],  AFIT8_Sharpening_iHighSharpPower_Bin [15:8]           /
s5k5caga_i2c_write(0x0F12, 0x1514); 	//70000BB0 //TVAR_afit_pBaseValS[502] /AFIT8_Sharpening_iLowShDenoise_Bin [7:0],  AFIT8_Sharpening_iHighShDenoise_Bin [15:8]             /
s5k5caga_i2c_write(0x0F12, 0x0440); 	//70000BB2 //TVAR_afit_pBaseValS[503] /AFIT8_Sharpening_iReduceEdgeMinMult_Bin [7:0],  AFIT8_Sharpening_iReduceEdgeSlope_Bin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x0302); 	//70000BB4 //TVAR_afit_pBaseValS[504] /AFIT8_demsharpmix1_iWideFiltReduce_Bin [7:0],  AFIT8_demsharpmix1_iNarrFiltReduce_Bin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x4646); 	//70000BB6 //TVAR_afit_pBaseValS[505] /AFIT8_sddd8a_iClustThresh_H_sBin[7:0],   AFIT8_sddd8a_iClustThresh_C_sBin [15:8]                  /
s5k5caga_i2c_write(0x0F12, 0x0101); 	//70000BB8 //TVAR_afit_pBaseValS[506] /AFIT8_sddd8a_iClustMulT_H_sBin [7:0],   AFIT8_sddd8a_iClustMulT_C_sBin [15:8]                     /
s5k5caga_i2c_write(0x0F12, 0x1801); 	//70000BBA //TVAR_afit_pBaseValS[507] /AFIT8_sddd8a_nClustLevel_H_sBin [7:0],   AFIT8_sddd8a_DispTH_Low_sBin [15:8]                      /
s5k5caga_i2c_write(0x0F12, 0x191C); 	//70000BBC //TVAR_afit_pBaseValS[508] /AFIT8_sddd8a_DispTH_High_sBin [7:0],   AFIT8_sddd8a_iDenThreshLow_sBin [15:8]                     /
s5k5caga_i2c_write(0x0F12, 0x2818); 	//70000BBE //TVAR_afit_pBaseValS[509] /AFIT8_sddd8a_iDenThreshHigh_sBin[7:0],   AFIT8_Demosaicing_iEdgeDesat_sBin [15:8]                 /
s5k5caga_i2c_write(0x0F12, 0x0A00); 	//70000BC0 //TVAR_afit_pBaseValS[510] /AFIT8_Demosaicing_iEdgeDesatThrLow_sBin [7:0],  AFIT8_Demosaicing_iEdgeDesatThrHigh_sBin [15:8]   /
s5k5caga_i2c_write(0x0F12, 0x1403); 	//70000BC2 //TVAR_afit_pBaseValS[511] /AFIT8_Demosaicing_iEdgeDesatLimit_sBin [7:0],  AFIT8_Demosaicing_iDemSharpenLow_sBin [15:8]       /
s5k5caga_i2c_write(0x0F12, 0x1405); 	//70000BC4 //TVAR_afit_pBaseValS[512] /AFIT8_Demosaicing_iDemSharpenHigh_sBin [7:0],  AFIT8_Demosaicing_iDemSharpThresh_sBin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x050C); 	//70000BC6 //TVAR_afit_pBaseValS[513] /AFIT8_Demosaicing_iDemShLowLimit_sBin [7:0],  AFIT8_Demosaicing_iDespeckleForDemsharp_sBin [15:8] /
s5k5caga_i2c_write(0x0F12, 0x32FF); 	//70000BC8 //TVAR_afit_pBaseValS[514] /AFIT8_Demosaicing_iDemBlurLow_sBin [7:0],  AFIT8_Demosaicing_iDemBlurHigh_sBin [15:8]             /
s5k5caga_i2c_write(0x0F12, 0x5204); 	//70000BCA //TVAR_afit_pBaseValS[515] /AFIT8_Demosaicing_iDemBlurRange_sBin [7:0],  AFIT8_Sharpening_iLowSharpPower_sBin [15:8]          /
s5k5caga_i2c_write(0x0F12, 0x1440); 	//70000BCC //TVAR_afit_pBaseValS[516] /AFIT8_Sharpening_iHighSharpPower_sBin [7:0],  AFIT8_Sharpening_iLowShDenoise_sBin [15:8]          /
s5k5caga_i2c_write(0x0F12, 0x4015); 	//70000BCE //TVAR_afit_pBaseValS[517] /AFIT8_Sharpening_iHighShDenoise_sBin [7:0],  AFIT8_Sharpening_iReduceEdgeMinMult_sBin [15:8]      /
s5k5caga_i2c_write(0x0F12, 0x0204); 	//70000BD0 //TVAR_afit_pBaseValS[518] /AFIT8_Sharpening_iReduceEdgeSlope_sBin [7:0],  AFIT8_demsharpmix1_iWideFiltReduce_sBin [15:8]     /
s5k5caga_i2c_write(0x0F12, 0x0003); 	//70000BD2 //TVAR_afit_pBaseValS[519] /AFIT8_demsharpmix1_iNarrFiltReduce_sBin [7:0]                                                     /
                        
s5k5caga_i2c_write(0x0F12, 0x7DFA); 	//afit_pConstBaseValS[0] //                                                                          
s5k5caga_i2c_write(0x0F12, 0xFFBD); 	//afit_pConstBaseValS[1] //                                                                          
s5k5caga_i2c_write(0x0F12, 0x26FE); 	//afit_pConstBaseValS[2] //                                                                          
s5k5caga_i2c_write(0x0F12, 0xF7BC); 	//afit_pConstBaseValS[3] //                                                                          
s5k5caga_i2c_write(0x0F12, 0x7E06); 	//afit_pConstBaseValS[4] //                                                                          
s5k5caga_i2c_write(0x0F12, 0x00D3); 	//afit_pConstBaseValS[5] //                                                                          

                     
s5k5caga_i2c_write(0x002A, 0x2CE8);     
s5k5caga_i2c_write(0x0F12, 0x0007); 	// Modify LSB to control AWBB_YThreshLow //    	                                                                        
s5k5caga_i2c_write(0x0F12, 0x00E2); 	//                                         
s5k5caga_i2c_write(0x0F12, 0x0005); 	// Modify LSB to control AWBB_YThreshLowBrLow//                                                                        
s5k5caga_i2c_write(0x0F12, 0x00E2); 	//                                         
                                                                    
                                                                                  
s5k5caga_i2c_write(0x002A, 0x0F7E);     //ae weight    //                                
s5k5caga_i2c_write(0x0F12, 0x0000);   //0000  //0000
s5k5caga_i2c_write(0x0F12, 0x0000);   //0000  //0000
s5k5caga_i2c_write(0x0F12, 0x0000);   //0000  //0000
s5k5caga_i2c_write(0x0F12, 0x0000);   //0000  //0000                     
s5k5caga_i2c_write(0x0F12, 0x0101);   //0101  //0101
s5k5caga_i2c_write(0x0F12, 0x0101);   //0101  //0101
s5k5caga_i2c_write(0x0F12, 0x0101);   //0101  //0101
s5k5caga_i2c_write(0x0F12, 0x0101);   //0101  //0101                     
s5k5caga_i2c_write(0x0F12, 0x0101);   //0101  //0101
s5k5caga_i2c_write(0x0F12, 0x0201);   //0201  //0201
s5k5caga_i2c_write(0x0F12, 0x0102);   //0102  //0102
s5k5caga_i2c_write(0x0F12, 0x0101);   //0101  //0101                     
s5k5caga_i2c_write(0x0F12, 0x0101);   //0101  //0101
s5k5caga_i2c_write(0x0F12, 0x0202);   //0202  //0202
s5k5caga_i2c_write(0x0F12, 0x0202);   //0202  //0202
s5k5caga_i2c_write(0x0F12, 0x0101);   //0101  //0101                     
s5k5caga_i2c_write(0x0F12, 0x0101);   //0101  //0101
s5k5caga_i2c_write(0x0F12, 0x0202);   //0202  //0202
s5k5caga_i2c_write(0x0F12, 0x0202);   //0202  //0202
s5k5caga_i2c_write(0x0F12, 0x0101);   //0101  //0101                     
s5k5caga_i2c_write(0x0F12, 0x0201);   //0101  //0101
s5k5caga_i2c_write(0x0F12, 0x0202);   //0202  //0202
s5k5caga_i2c_write(0x0F12, 0x0202);   //0202  //0202
s5k5caga_i2c_write(0x0F12, 0x0102);   //0101  //0101                     
s5k5caga_i2c_write(0x0F12, 0x0201);   //0101  //0201
s5k5caga_i2c_write(0x0F12, 0x0202);   //0202  //0202
s5k5caga_i2c_write(0x0F12, 0x0202);   //0202  //0202
s5k5caga_i2c_write(0x0F12, 0x0102);   //0101  //0102                     
s5k5caga_i2c_write(0x0F12, 0x0101);   //0101  //0201
s5k5caga_i2c_write(0x0F12, 0x0101);   //0101  //0202
s5k5caga_i2c_write(0x0F12, 0x0101);   //0101  //0202
s5k5caga_i2c_write(0x0F12, 0x0101);   //0101  //0102
                                                
//================================================================================================
// SET PLL
//================================================================================================
// How to set
// 1. MCLK
// 2. System CLK
// 3. PCLK
//================================================================================================
//clk Settings
s5k5caga_i2c_write(0x002A, 0x01CC);    	
s5k5caga_i2c_write(0x0F12, 0x2EE0); //5DC0    //REG_TC_IPRM_InClockLSBs//input clock=24MHz                        
s5k5caga_i2c_write(0x0F12, 0x0000);    //REG_TC_IPRM_InClockMSBs                                           	
s5k5caga_i2c_write(0x002A, 0x01EE);                                                                        	
s5k5caga_i2c_write(0x0F12, 0x0003);    //REG_TC_IPRM_UseNPviClocks                                     
              	
s5k5caga_i2c_write(0x002A, 0x01F6);                                                                        	
s5k5caga_i2c_write(0x0F12, 0x30d4);    //REG_TC_IPRM_OpClk4KHz_0                   	2   700001F6         
s5k5caga_i2c_write(0x0F12, 0x32A8);    //REG_TC_IPRM_MinOutRate4KHz_0              
s5k5caga_i2c_write(0x0F12, 0x32E8);    //REG_TC_IPRM_MaxOutRate4KHz_0                        
                      	
s5k5caga_i2c_write(0x0F12, 0x1F40);    //REG_TC_IPRM_OpClk4KHz_1                   
s5k5caga_i2c_write(0x0F12, 0x2ea0);    //REG_TC_IPRM_MinOutRate4KHz_1              	2   700001FE 
s5k5caga_i2c_write(0x0F12, 0x2f00);    //REG_TC_IPRM_MaxOutRate4KHz_1              	2   70000200 
          	
s5k5caga_i2c_write(0x0F12, 0x30d4);    //REG_TC_IPRM_OpClk4KHz_2                   	2   70000202 
s5k5caga_i2c_write(0x0F12, 0x16f0);    //REG_TC_IPRM_MinOutRate4KHz_2              	2   70000204 
s5k5caga_i2c_write(0x0F12, 0x17f0);    //REG_TC_IPRM_MaxOutRate4KHz_2              	2   70000206 
          	
s5k5caga_i2c_write(0x002A, 0x0208);                                                                	
s5k5caga_i2c_write(0x0F12, 0x0001);      //REG_TC_IPRM_InitParamsUpdated                           			
		               
//============================================================
// Frame rate setting
//============================================================
// How to set
// 1. Exposure value
// dec2hex((1 / (frame rate you want(ms))) * 100d * 4d)
// 2. Analog Digital gain
// dec2hex((Analog gain you want) * 256d)
//============================================================
s5k5caga_i2c_write(0x0028, 0x7000); 
s5k5caga_i2c_write(0x002A, 0x12B8);   
s5k5caga_i2c_write(0x0F12, 0x1000);  
 
s5k5caga_i2c_write(0x002A, 0x0530);    	                                                    
s5k5caga_i2c_write(0x0F12, 0x3415);    //lt_uMaxExp1	32 30ms  9~10ea// 15fps  // 
s5k5caga_i2c_write(0x002A, 0x0534);                                                                
s5k5caga_i2c_write(0x0F12, 0x682A);    //lt_uMaxExp2	67 65ms	18~20ea // 7.5fps //
s5k5caga_i2c_write(0x002A, 0x167C);                                                                
s5k5caga_i2c_write(0x0F12, 0x8235);    //9C40//MaxExp3  83 80ms  24~25ea //                 
s5k5caga_i2c_write(0x002A, 0x1680);                                                                
s5k5caga_i2c_write(0x0F12, 0xc350);    //MaxExp4   125ms  38ea //                           
        
s5k5caga_i2c_write(0x002A, 0x0538);                                                                
s5k5caga_i2c_write(0x0F12, 0x3415);    // 15fps //                                                 
s5k5caga_i2c_write(0x002A, 0x053C);                                                                
s5k5caga_i2c_write(0x0F12, 0x682A);    // 7.5fps //                                                
s5k5caga_i2c_write(0x002A, 0x1684);                                                                
s5k5caga_i2c_write(0x0F12, 0x8235);    //CapMaxExp3 //                                             
s5k5caga_i2c_write(0x002A, 0x1688);                                                                
s5k5caga_i2c_write(0x0F12, 0xC350);    //CapMaxExp4 //                                             

s5k5caga_i2c_write(0x002A, 0x0540);                                                                
s5k5caga_i2c_write(0x0F12, 0x01B3);     //0170//0150//lt_uMaxAnGain1_700lux//                                              
s5k5caga_i2c_write(0x0F12, 0x01B3);    //0200//0400//lt_uMaxAnGain2_400lux//                              
s5k5caga_i2c_write(0x002A, 0x168C);                                                                
s5k5caga_i2c_write(0x0F12, 0x02A0);    //0300//MaxAnGain3_200lux//                                       
s5k5caga_i2c_write(0x0F12, 0x0710);    //MaxAnGain4 //    

s5k5caga_i2c_write(0x002A, 0x0544);   
s5k5caga_i2c_write(0x0F12, 0x0100); 
s5k5caga_i2c_write(0x0F12, 0x8000); 

s5k5caga_i2c_write(0x002A, 0x04B4);   
s5k5caga_i2c_write(0x0F12, 0x0001); 
s5k5caga_i2c_write(0x0F12, 0x0064); 
s5k5caga_i2c_write(0x0F12, 0x0001); 

//================================================================================================
// SET PREVIEW CONFIGURATION_0
// # Foramt: YUV422
// # Size:   640*480
// # FPS:   10-30fps(using normal_mode preview)
//================================================================================================
s5k5caga_i2c_write(0x002A, 0x026C);
s5k5caga_i2c_write(0x0F12, 0x0280);   //REG_0TC_PCFG_usWidth                      
s5k5caga_i2c_write(0x0F12, 0x01E0);   //REG_0TC_PCFG_usHeight                     	2   7000026E    //                                         
s5k5caga_i2c_write(0x0F12, 0x0005);   //REG_0TC_PCFG_Format                       	2   70000270    //                                         
s5k5caga_i2c_write(0x0F12, 0x32E8);   //REG_0TC_PCFG_usMaxOut4KHzRate             
s5k5caga_i2c_write(0x0F12, 0x32a8);   //REG_0TC_PCFG_usMinOut4KHzRate             
s5k5caga_i2c_write(0x0F12, 0x0100);   //REG_0TC_PCFG_OutClkPerPix88               	2   70000276    //                                         
s5k5caga_i2c_write(0x0F12, 0x0800);   //REG_0TC_PCFGew_uMaxBpp88                    2   70000278    //                                         
s5k5caga_i2c_write(0x0F12, 0x0052);   //REG_0TC_PCFG_PVIMask                      	2   7000027A    //92  (1) PCLK inversion  (4)1b_C first (5) UV First                                       
s5k5caga_i2c_write(0x0F12, 0x0010);   //REG_0TC_PCFG_OIFMask                      	2   7000027C    //                                         
s5k5caga_i2c_write(0x0F12, 0x01E0);   //REG_0TC_PCFG_usJpegPacketSize             	2   7000027E    //                                         
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_PCFG_usJpegTotalPackets           	2   70000280    //                                         
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_PCFG_uClockInd                    	2   70000282    //                                         
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_PCFG_usFrTimeType                 	2   70000284    //                                         
s5k5caga_i2c_write(0x0F12, 0x0001);   //REG_0TC_PCFG_FrRateQualityType            	2   70000286    //                                         
s5k5caga_i2c_write(0x0F12, 0x03E8);   //REG_0TC_PCFG_usMaxFrTimeMsecMult10        	2   70000288    //                                         
s5k5caga_i2c_write(0x0F12, 0x014D);   //REG_0TC_PCFG_usMinFrTimeMsecMult10        	2   7000028A    //                                         
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_PCFG_bSmearOutput                 	2   7000028C    //                                         
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_PCFG_sSaturation                  	2   7000028E    //                                         
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_PCFG_sSharpBlur                   	2   70000290    //                                         
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_PCFG_sColorTemp                   	2   70000292    //                                         
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_PCFG_uDeviceGammaIndex            	2   70000294    //                                         
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_PCFG_uPrevMirror                  	2   70000296    //                                         
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_PCFG_uCaptureMirror               	2   70000298    //                                         
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_PCFG_uRotation                    	2   7000029A    //          

 
//================================================================================================
// APPLY PREVIEW CONFIGURATION & RUN PREVIEW
//================================================================================================
s5k5caga_i2c_write(0x002A, 0x023C); 
s5k5caga_i2c_write(0x0F12, 0x0000);  // #REG_TC_GP_ActivePrevConfig // Select preview configuration_0
s5k5caga_i2c_write(0x002A, 0x0240); 
s5k5caga_i2c_write(0x0F12, 0x0001);  // #REG_TC_GP_PrevOpenAfterChange
s5k5caga_i2c_write(0x002A, 0x0230); 
s5k5caga_i2c_write(0x0F12, 0x0001);  // #REG_TC_GP_NewConfigSync // Update preview configuration
s5k5caga_i2c_write(0x002A, 0x023E); 
s5k5caga_i2c_write(0x0F12, 0x0001);  // #REG_TC_GP_PrevConfigChanged
s5k5caga_i2c_write(0x002A, 0x0220); 
s5k5caga_i2c_write(0x0F12, 0x0001);  // #REG_TC_GP_EnablePreview // Start preview
s5k5caga_i2c_write(0x0F12, 0x0001);  // #REG_TC_GP_EnablePreviewChanged
                                                                               
//================================================================================================                                                                                          
// SET Capture CONFIGURATION_0                                                                                                                                                              
// # Foramt : JPEG                                                                                                                                                                       
// # Size: 3M                                         
// # FPS :7.5fps                                                
//================================================================================================  
s5k5caga_i2c_write(0x002A, 0x035C);   //Normal capture //    	
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_CCFG_uCaptureMode                 	2   7000035C
s5k5caga_i2c_write(0x0F12, 0x0800);   //REG_0TC_CCFG_usWidth                      	2   7000035E          //                                   
s5k5caga_i2c_write(0x0F12, 0x0600);   //REG_0TC_CCFG_usHeight                     	2   70000360          //        

//                                      0x0009 JPEG
//                                      0x0005 YUV
s5k5caga_i2c_write(0x0F12, 0x0005);   //REG_0TC_CCFG_Format                       	2   70000362          //  


s5k5caga_i2c_write(0x0F12, 0x32E8);   //REG_0TC_CCFG_usMaxOut4KHzRate             
s5k5caga_i2c_write(0x0F12, 0x32a8);   //REG_0TC_CCFG_usMinOut4KHzRate             
s5k5caga_i2c_write(0x0F12, 0x0100);   //REG_0TC_CCFG_OutClkPerPix88               	2   70000368          //                                   
s5k5caga_i2c_write(0x0F12, 0x0800);   //REG_0TC_CCFG_uMaxBpp88                    	2   7000036A          //                                   
s5k5caga_i2c_write(0x0F12, 0x0092);   //REG_0TC_CCFG_PVIMask                      	2   7000036C          //                                   
s5k5caga_i2c_write(0x0F12, 0x0010);   //REG_0TC_CCFG_OIFMask                      	2   7000036E          //                                   
s5k5caga_i2c_write(0x0F12, 0x01E0);   //REG_0TC_CCFG_usJpegPacketSize             	2   70000370          //                                   
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_CCFG_usJpegTotalPackets           	2   70000372          //                                   
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_CCFG_uClockInd                    	2   70000374          //                                   
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_CCFG_usFrTimeType                 	2   70000376          //                                   
s5k5caga_i2c_write(0x0F12, 0x0002);   //REG_0TC_CCFG_FrRateQualityType            	2   70000378          //                                   
s5k5caga_i2c_write(0x0F12, 0x0535);   //REG_0TC_CCFG_usMaxFrTimeMsecMult10        	2   7000037A          //                                   
s5k5caga_i2c_write(0x0F12, 0x0535);   //REG_0TC_CCFG_usMinFrTimeMsecMult10        	2   7000037C          //                                   
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_CCFG_bSmearOutput                 	2   7000037E          //                                   
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_CCFG_sSaturation                  	2   70000380          //                                   
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_CCFG_sSharpBlur                   	2   70000382          //                                   
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_CCFG_sColorTemp                   	2   70000384          //                                   
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_CCFG_uDeviceGammaIndex            	2   70000386          //            
                	

s5k5caga_i2c_write(0x0028, 0xD000);
s5k5caga_i2c_write(0x002A, 0x1000);
s5k5caga_i2c_write(0x0F12, 0x0001);
s5k5caga_i2c_write(0x0028, 0x7000);

CAMERADBG( " ======V00 : Poppy_5CA_Ini_V00_110815 is OK====== \n" );

}



void preview_mode_change_toCapture_config(void)
{

s5k5caga_i2c_write(0x0028,   0x7000);

s5k5caga_i2c_write(0x002a,   0x0244); //#REG_TC_GP_ActiveCapConfig
s5k5caga_i2c_write(0x0f12,   0x0000); //num 
s5k5caga_i2c_write(0x0f12,   0x0001); //#REG_TC_GP_CapConfigChanged 
s5k5caga_i2c_write(0x002a,   0x0230);
s5k5caga_i2c_write(0x0f12,   0x0001); //#REG_TC_GP_NewConfigSync
s5k5caga_i2c_write(0x002a,   0x0224);
s5k5caga_i2c_write(0x0f12,   0x0001); //#REG_TC_GP_EnableCapture 
s5k5caga_i2c_write(0x0f12,   0x0001); //#REG_TC_GP_EnableCaptureChanged

CAMERADBG( " ======V00 :  preview_mode_change_toCapture_config is OK====== \n" );

}


void capture_mode_change_to_Preview_config(void)
{

s5k5caga_i2c_write(0x0028,   0x7000);

s5k5caga_i2c_write(0x002A,   0x023C); //#REG_TC_GP_ActivePrevConfig                                       
s5k5caga_i2c_write(0x0F12,   0x0000);//,num
s5k5caga_i2c_write(0x002A,   0x0240); //#REG_TC_GP_PrevOpenAfterChange   
s5k5caga_i2c_write(0x0F12,   0x0001);     
s5k5caga_i2c_write(0x002A,   0x0230); //#REG_TC_GP_NewConfigSync                                       
s5k5caga_i2c_write(0x0F12,   0x0001);        
s5k5caga_i2c_write(0x002A,   0x023E); //#REG_TC_GP_PrevConfigChanged                                        
s5k5caga_i2c_write(0x0F12,   0x0001); 

CAMERADBG( " ======V00 :  capture_mode_change_to_Preview_config is OK====== \n" );

}


/*
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

V01_0915

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/

void Poppy_5CA_Ini_V01_110913(void)
{
//REV00 for Poppy\uff1aMclk 12M, preview size VGA YUV 422, capture mode 3M Jpeg without thumbnail 
//REV01 for Poppy\uff1aMclk 12M, Pclk:91Mhz ,preview size VGA YUV 422, capture mode YUV data format,qualified on demo,noise performance improved.


// ARM GO
// Direct mode 
s5k5caga_i2c_write(0xFCFC, 0xD000); //Reset            //
s5k5caga_i2c_write(0x0010, 0x0001); //Clear host interrupt so main will wait //
s5k5caga_i2c_write(0x1030, 0x0000); //ARM go           //
s5k5caga_i2c_write(0x0014, 0x0001); //Wait100mSec          //

     //Delay 100ms 
mdelay(100);//FFFF 0064   //Delay 100ms	p100  //ffff 0064  //Delay 100ms 

// Start T&P part
// DO NOT DELETE T&P SECTION COMMENTS! They are required to debug T&P related issues.

s5k5caga_i2c_write(0x0028, 0x7000);
s5k5caga_i2c_write(0x002A, 0x2CF8);
s5k5caga_i2c_write(0x0F12, 0xB510);
s5k5caga_i2c_write(0x0F12, 0x4827);
s5k5caga_i2c_write(0x0F12, 0x21C0);
s5k5caga_i2c_write(0x0F12, 0x8041);
s5k5caga_i2c_write(0x0F12, 0x4825);
s5k5caga_i2c_write(0x0F12, 0x4A26);
s5k5caga_i2c_write(0x0F12, 0x3020);
s5k5caga_i2c_write(0x0F12, 0x8382);
s5k5caga_i2c_write(0x0F12, 0x1D12);
s5k5caga_i2c_write(0x0F12, 0x83C2);
s5k5caga_i2c_write(0x0F12, 0x4822);
s5k5caga_i2c_write(0x0F12, 0x3040);
s5k5caga_i2c_write(0x0F12, 0x8041);
s5k5caga_i2c_write(0x0F12, 0x4821);
s5k5caga_i2c_write(0x0F12, 0x4922);
s5k5caga_i2c_write(0x0F12, 0x3060);
s5k5caga_i2c_write(0x0F12, 0x8381);
s5k5caga_i2c_write(0x0F12, 0x1D09);
s5k5caga_i2c_write(0x0F12, 0x83C1);
s5k5caga_i2c_write(0x0F12, 0x4821);
s5k5caga_i2c_write(0x0F12, 0x491D);
s5k5caga_i2c_write(0x0F12, 0x8802);
s5k5caga_i2c_write(0x0F12, 0x3980);
s5k5caga_i2c_write(0x0F12, 0x804A);
s5k5caga_i2c_write(0x0F12, 0x8842);
s5k5caga_i2c_write(0x0F12, 0x808A);
s5k5caga_i2c_write(0x0F12, 0x8882);
s5k5caga_i2c_write(0x0F12, 0x80CA);
s5k5caga_i2c_write(0x0F12, 0x88C2);
s5k5caga_i2c_write(0x0F12, 0x810A);
s5k5caga_i2c_write(0x0F12, 0x8902);
s5k5caga_i2c_write(0x0F12, 0x491C);
s5k5caga_i2c_write(0x0F12, 0x80CA);
s5k5caga_i2c_write(0x0F12, 0x8942);
s5k5caga_i2c_write(0x0F12, 0x814A);
s5k5caga_i2c_write(0x0F12, 0x8982);
s5k5caga_i2c_write(0x0F12, 0x830A);
s5k5caga_i2c_write(0x0F12, 0x89C2);
s5k5caga_i2c_write(0x0F12, 0x834A);
s5k5caga_i2c_write(0x0F12, 0x8A00);
s5k5caga_i2c_write(0x0F12, 0x4918);
s5k5caga_i2c_write(0x0F12, 0x8188);
s5k5caga_i2c_write(0x0F12, 0x4918);
s5k5caga_i2c_write(0x0F12, 0x4819);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xFA0E);
s5k5caga_i2c_write(0x0F12, 0x4918);
s5k5caga_i2c_write(0x0F12, 0x4819);
s5k5caga_i2c_write(0x0F12, 0x6341);
s5k5caga_i2c_write(0x0F12, 0x4919);
s5k5caga_i2c_write(0x0F12, 0x4819);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xFA07);
s5k5caga_i2c_write(0x0F12, 0x4816);
s5k5caga_i2c_write(0x0F12, 0x4918);
s5k5caga_i2c_write(0x0F12, 0x3840);
s5k5caga_i2c_write(0x0F12, 0x62C1);
s5k5caga_i2c_write(0x0F12, 0x4918);
s5k5caga_i2c_write(0x0F12, 0x3880);
s5k5caga_i2c_write(0x0F12, 0x63C1);
s5k5caga_i2c_write(0x0F12, 0x4917);
s5k5caga_i2c_write(0x0F12, 0x6301);
s5k5caga_i2c_write(0x0F12, 0x4917);
s5k5caga_i2c_write(0x0F12, 0x3040);
s5k5caga_i2c_write(0x0F12, 0x6181);
s5k5caga_i2c_write(0x0F12, 0x4917);
s5k5caga_i2c_write(0x0F12, 0x4817);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF9F7);
s5k5caga_i2c_write(0x0F12, 0x4917);
s5k5caga_i2c_write(0x0F12, 0x4817);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF9F3);
s5k5caga_i2c_write(0x0F12, 0x4917);
s5k5caga_i2c_write(0x0F12, 0x4817);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF9EF);
s5k5caga_i2c_write(0x0F12, 0xBC10);
s5k5caga_i2c_write(0x0F12, 0xBC08);
s5k5caga_i2c_write(0x0F12, 0x4718);
s5k5caga_i2c_write(0x0F12, 0x1100);
s5k5caga_i2c_write(0x0F12, 0xD000);
s5k5caga_i2c_write(0x0F12, 0x267C);
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x0F12, 0x2CE8);
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x0F12, 0x3274);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0xF400);
s5k5caga_i2c_write(0x0F12, 0xD000);
s5k5caga_i2c_write(0x0F12, 0xF520);
s5k5caga_i2c_write(0x0F12, 0xD000);
s5k5caga_i2c_write(0x0F12, 0x2DF1);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0x89A9);
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x0F12, 0x2E43);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0x0140);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0x2E7D);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0xB4F7);
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x0F12, 0x2F07);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0x2F2B);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0x2FD1);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0x2FE5);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0x2FB9);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0x013D);
s5k5caga_i2c_write(0x0F12, 0x0001);
s5k5caga_i2c_write(0x0F12, 0x306B);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0x5823);
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x0F12, 0x30B9);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0xD789);
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x0F12, 0xB570);
s5k5caga_i2c_write(0x0F12, 0x6804);
s5k5caga_i2c_write(0x0F12, 0x6845);
s5k5caga_i2c_write(0x0F12, 0x6881);
s5k5caga_i2c_write(0x0F12, 0x6840);
s5k5caga_i2c_write(0x0F12, 0x2900);
s5k5caga_i2c_write(0x0F12, 0x6880);
s5k5caga_i2c_write(0x0F12, 0xD007);
s5k5caga_i2c_write(0x0F12, 0x49C3);
s5k5caga_i2c_write(0x0F12, 0x8949);
s5k5caga_i2c_write(0x0F12, 0x084A);
s5k5caga_i2c_write(0x0F12, 0x1880);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF9BA);
s5k5caga_i2c_write(0x0F12, 0x80A0);
s5k5caga_i2c_write(0x0F12, 0xE000);
s5k5caga_i2c_write(0x0F12, 0x80A0);
s5k5caga_i2c_write(0x0F12, 0x88A0);
s5k5caga_i2c_write(0x0F12, 0x2800);
s5k5caga_i2c_write(0x0F12, 0xD010);
s5k5caga_i2c_write(0x0F12, 0x68A9);
s5k5caga_i2c_write(0x0F12, 0x6828);
s5k5caga_i2c_write(0x0F12, 0x084A);
s5k5caga_i2c_write(0x0F12, 0x1880);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF9AE);
s5k5caga_i2c_write(0x0F12, 0x8020);
s5k5caga_i2c_write(0x0F12, 0x1D2D);
s5k5caga_i2c_write(0x0F12, 0xCD03);
s5k5caga_i2c_write(0x0F12, 0x084A);
s5k5caga_i2c_write(0x0F12, 0x1880);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF9A7);
s5k5caga_i2c_write(0x0F12, 0x8060);
s5k5caga_i2c_write(0x0F12, 0xBC70);
s5k5caga_i2c_write(0x0F12, 0xBC08);
s5k5caga_i2c_write(0x0F12, 0x4718);
s5k5caga_i2c_write(0x0F12, 0x2000);
s5k5caga_i2c_write(0x0F12, 0x8060);
s5k5caga_i2c_write(0x0F12, 0x8020);
s5k5caga_i2c_write(0x0F12, 0xE7F8);
s5k5caga_i2c_write(0x0F12, 0xB510);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF9A2);
s5k5caga_i2c_write(0x0F12, 0x48B2);
s5k5caga_i2c_write(0x0F12, 0x8A40);
s5k5caga_i2c_write(0x0F12, 0x2800);
s5k5caga_i2c_write(0x0F12, 0xD00C);
s5k5caga_i2c_write(0x0F12, 0x48B1);
s5k5caga_i2c_write(0x0F12, 0x49B2);
s5k5caga_i2c_write(0x0F12, 0x8800);
s5k5caga_i2c_write(0x0F12, 0x4AB2);
s5k5caga_i2c_write(0x0F12, 0x2805);
s5k5caga_i2c_write(0x0F12, 0xD003);
s5k5caga_i2c_write(0x0F12, 0x4BB1);
s5k5caga_i2c_write(0x0F12, 0x795B);
s5k5caga_i2c_write(0x0F12, 0x2B00);
s5k5caga_i2c_write(0x0F12, 0xD005);
s5k5caga_i2c_write(0x0F12, 0x2001);
s5k5caga_i2c_write(0x0F12, 0x8008);
s5k5caga_i2c_write(0x0F12, 0x8010);
s5k5caga_i2c_write(0x0F12, 0xBC10);
s5k5caga_i2c_write(0x0F12, 0xBC08);
s5k5caga_i2c_write(0x0F12, 0x4718);
s5k5caga_i2c_write(0x0F12, 0x2800);
s5k5caga_i2c_write(0x0F12, 0xD1FA);
s5k5caga_i2c_write(0x0F12, 0x2000);
s5k5caga_i2c_write(0x0F12, 0x8008);
s5k5caga_i2c_write(0x0F12, 0x8010);
s5k5caga_i2c_write(0x0F12, 0xE7F6);
s5k5caga_i2c_write(0x0F12, 0xB5F8);
s5k5caga_i2c_write(0x0F12, 0x2407);
s5k5caga_i2c_write(0x0F12, 0x2C06);
s5k5caga_i2c_write(0x0F12, 0xD035);
s5k5caga_i2c_write(0x0F12, 0x2C07);
s5k5caga_i2c_write(0x0F12, 0xD033);
s5k5caga_i2c_write(0x0F12, 0x48A3);
s5k5caga_i2c_write(0x0F12, 0x8BC1);
s5k5caga_i2c_write(0x0F12, 0x2900);
s5k5caga_i2c_write(0x0F12, 0xD02A);
s5k5caga_i2c_write(0x0F12, 0x00A2);
s5k5caga_i2c_write(0x0F12, 0x1815);
s5k5caga_i2c_write(0x0F12, 0x4AA4);
s5k5caga_i2c_write(0x0F12, 0x6DEE);
s5k5caga_i2c_write(0x0F12, 0x8A92);
s5k5caga_i2c_write(0x0F12, 0x4296);
s5k5caga_i2c_write(0x0F12, 0xD923);
s5k5caga_i2c_write(0x0F12, 0x0028);
s5k5caga_i2c_write(0x0F12, 0x3080);
s5k5caga_i2c_write(0x0F12, 0x0007);
s5k5caga_i2c_write(0x0F12, 0x69C0);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF96B);
s5k5caga_i2c_write(0x0F12, 0x1C71);
s5k5caga_i2c_write(0x0F12, 0x0280);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF967);
s5k5caga_i2c_write(0x0F12, 0x0006);
s5k5caga_i2c_write(0x0F12, 0x4898);
s5k5caga_i2c_write(0x0F12, 0x0061);
s5k5caga_i2c_write(0x0F12, 0x1808);
s5k5caga_i2c_write(0x0F12, 0x8D80);
s5k5caga_i2c_write(0x0F12, 0x0A01);
s5k5caga_i2c_write(0x0F12, 0x0600);
s5k5caga_i2c_write(0x0F12, 0x0E00);
s5k5caga_i2c_write(0x0F12, 0x1A08);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF96A);
s5k5caga_i2c_write(0x0F12, 0x0002);
s5k5caga_i2c_write(0x0F12, 0x6DE9);
s5k5caga_i2c_write(0x0F12, 0x6FE8);
s5k5caga_i2c_write(0x0F12, 0x1A08);
s5k5caga_i2c_write(0x0F12, 0x4351);
s5k5caga_i2c_write(0x0F12, 0x0300);
s5k5caga_i2c_write(0x0F12, 0x1C49);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF953);
s5k5caga_i2c_write(0x0F12, 0x0401);
s5k5caga_i2c_write(0x0F12, 0x0430);
s5k5caga_i2c_write(0x0F12, 0x0C00);
s5k5caga_i2c_write(0x0F12, 0x4301);
s5k5caga_i2c_write(0x0F12, 0x61F9);
s5k5caga_i2c_write(0x0F12, 0xE004);
s5k5caga_i2c_write(0x0F12, 0x00A2);
s5k5caga_i2c_write(0x0F12, 0x4990);
s5k5caga_i2c_write(0x0F12, 0x1810);
s5k5caga_i2c_write(0x0F12, 0x3080);
s5k5caga_i2c_write(0x0F12, 0x61C1);
s5k5caga_i2c_write(0x0F12, 0x1E64);
s5k5caga_i2c_write(0x0F12, 0xD2C5);
s5k5caga_i2c_write(0x0F12, 0x2006);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF959);
s5k5caga_i2c_write(0x0F12, 0x2007);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF956);
s5k5caga_i2c_write(0x0F12, 0xBCF8);
s5k5caga_i2c_write(0x0F12, 0xBC08);
s5k5caga_i2c_write(0x0F12, 0x4718);
s5k5caga_i2c_write(0x0F12, 0xB510);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF958);
s5k5caga_i2c_write(0x0F12, 0x2800);
s5k5caga_i2c_write(0x0F12, 0xD00A);
s5k5caga_i2c_write(0x0F12, 0x4881);
s5k5caga_i2c_write(0x0F12, 0x8B81);
s5k5caga_i2c_write(0x0F12, 0x0089);
s5k5caga_i2c_write(0x0F12, 0x1808);
s5k5caga_i2c_write(0x0F12, 0x6DC1);
s5k5caga_i2c_write(0x0F12, 0x4883);
s5k5caga_i2c_write(0x0F12, 0x8A80);
s5k5caga_i2c_write(0x0F12, 0x4281);
s5k5caga_i2c_write(0x0F12, 0xD901);
s5k5caga_i2c_write(0x0F12, 0x2001);
s5k5caga_i2c_write(0x0F12, 0xE7A1);
s5k5caga_i2c_write(0x0F12, 0x2000);
s5k5caga_i2c_write(0x0F12, 0xE79F);
s5k5caga_i2c_write(0x0F12, 0xB5F8);
s5k5caga_i2c_write(0x0F12, 0x0004);
s5k5caga_i2c_write(0x0F12, 0x4F80);
s5k5caga_i2c_write(0x0F12, 0x227D);
s5k5caga_i2c_write(0x0F12, 0x8938);
s5k5caga_i2c_write(0x0F12, 0x0152);
s5k5caga_i2c_write(0x0F12, 0x4342);
s5k5caga_i2c_write(0x0F12, 0x487E);
s5k5caga_i2c_write(0x0F12, 0x9000);
s5k5caga_i2c_write(0x0F12, 0x8A01);
s5k5caga_i2c_write(0x0F12, 0x0848);
s5k5caga_i2c_write(0x0F12, 0x1810);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF91D);
s5k5caga_i2c_write(0x0F12, 0x210F);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF940);
s5k5caga_i2c_write(0x0F12, 0x497A);
s5k5caga_i2c_write(0x0F12, 0x8C49);
s5k5caga_i2c_write(0x0F12, 0x090E);
s5k5caga_i2c_write(0x0F12, 0x0136);
s5k5caga_i2c_write(0x0F12, 0x4306);
s5k5caga_i2c_write(0x0F12, 0x4979);
s5k5caga_i2c_write(0x0F12, 0x2C00);
s5k5caga_i2c_write(0x0F12, 0xD003);
s5k5caga_i2c_write(0x0F12, 0x2001);
s5k5caga_i2c_write(0x0F12, 0x0240);
s5k5caga_i2c_write(0x0F12, 0x4330);
s5k5caga_i2c_write(0x0F12, 0x8108);
s5k5caga_i2c_write(0x0F12, 0x4876);
s5k5caga_i2c_write(0x0F12, 0x2C00);
s5k5caga_i2c_write(0x0F12, 0x8D00);
s5k5caga_i2c_write(0x0F12, 0xD001);
s5k5caga_i2c_write(0x0F12, 0x2501);
s5k5caga_i2c_write(0x0F12, 0xE000);
s5k5caga_i2c_write(0x0F12, 0x2500);
s5k5caga_i2c_write(0x0F12, 0x4972);
s5k5caga_i2c_write(0x0F12, 0x4328);
s5k5caga_i2c_write(0x0F12, 0x8008);
s5k5caga_i2c_write(0x0F12, 0x207D);
s5k5caga_i2c_write(0x0F12, 0x00C0);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF92E);
s5k5caga_i2c_write(0x0F12, 0x2C00);
s5k5caga_i2c_write(0x0F12, 0x496E);
s5k5caga_i2c_write(0x0F12, 0x0328);
s5k5caga_i2c_write(0x0F12, 0x4330);
s5k5caga_i2c_write(0x0F12, 0x8108);
s5k5caga_i2c_write(0x0F12, 0x88F8);
s5k5caga_i2c_write(0x0F12, 0x2C00);
s5k5caga_i2c_write(0x0F12, 0x01AA);
s5k5caga_i2c_write(0x0F12, 0x4310);
s5k5caga_i2c_write(0x0F12, 0x8088);
s5k5caga_i2c_write(0x0F12, 0x9800);
s5k5caga_i2c_write(0x0F12, 0x8A01);
s5k5caga_i2c_write(0x0F12, 0x486A);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF8F1);
s5k5caga_i2c_write(0x0F12, 0x496A);
s5k5caga_i2c_write(0x0F12, 0x8809);
s5k5caga_i2c_write(0x0F12, 0x4348);
s5k5caga_i2c_write(0x0F12, 0x0400);
s5k5caga_i2c_write(0x0F12, 0x0C00);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF918);
s5k5caga_i2c_write(0x0F12, 0x0020);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF91D);
s5k5caga_i2c_write(0x0F12, 0x4866);
s5k5caga_i2c_write(0x0F12, 0x7004);
s5k5caga_i2c_write(0x0F12, 0xE7A3);
s5k5caga_i2c_write(0x0F12, 0xB510);
s5k5caga_i2c_write(0x0F12, 0x0004);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF91E);
s5k5caga_i2c_write(0x0F12, 0x6020);
s5k5caga_i2c_write(0x0F12, 0x4963);
s5k5caga_i2c_write(0x0F12, 0x8B49);
s5k5caga_i2c_write(0x0F12, 0x0789);
s5k5caga_i2c_write(0x0F12, 0xD001);
s5k5caga_i2c_write(0x0F12, 0x0040);
s5k5caga_i2c_write(0x0F12, 0x6020);
s5k5caga_i2c_write(0x0F12, 0xE74C);
s5k5caga_i2c_write(0x0F12, 0xB510);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF91B);
s5k5caga_i2c_write(0x0F12, 0x485F);
s5k5caga_i2c_write(0x0F12, 0x8880);
s5k5caga_i2c_write(0x0F12, 0x0601);
s5k5caga_i2c_write(0x0F12, 0x4854);
s5k5caga_i2c_write(0x0F12, 0x1609);
s5k5caga_i2c_write(0x0F12, 0x8141);
s5k5caga_i2c_write(0x0F12, 0xE742);
s5k5caga_i2c_write(0x0F12, 0xB5F8);
s5k5caga_i2c_write(0x0F12, 0x000F);
s5k5caga_i2c_write(0x0F12, 0x4C55);
s5k5caga_i2c_write(0x0F12, 0x3420);
s5k5caga_i2c_write(0x0F12, 0x2500);
s5k5caga_i2c_write(0x0F12, 0x5765);
s5k5caga_i2c_write(0x0F12, 0x0039);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF913);
s5k5caga_i2c_write(0x0F12, 0x9000);
s5k5caga_i2c_write(0x0F12, 0x2600);
s5k5caga_i2c_write(0x0F12, 0x57A6);
s5k5caga_i2c_write(0x0F12, 0x4C4C);
s5k5caga_i2c_write(0x0F12, 0x42AE);
s5k5caga_i2c_write(0x0F12, 0xD01B);
s5k5caga_i2c_write(0x0F12, 0x4D54);
s5k5caga_i2c_write(0x0F12, 0x8AE8);
s5k5caga_i2c_write(0x0F12, 0x2800);
s5k5caga_i2c_write(0x0F12, 0xD013);
s5k5caga_i2c_write(0x0F12, 0x484D);
s5k5caga_i2c_write(0x0F12, 0x8A01);
s5k5caga_i2c_write(0x0F12, 0x8B80);
s5k5caga_i2c_write(0x0F12, 0x4378);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF8B5);
s5k5caga_i2c_write(0x0F12, 0x89A9);
s5k5caga_i2c_write(0x0F12, 0x1A41);
s5k5caga_i2c_write(0x0F12, 0x484E);
s5k5caga_i2c_write(0x0F12, 0x3820);
s5k5caga_i2c_write(0x0F12, 0x8AC0);
s5k5caga_i2c_write(0x0F12, 0x4348);
s5k5caga_i2c_write(0x0F12, 0x17C1);
s5k5caga_i2c_write(0x0F12, 0x0D89);
s5k5caga_i2c_write(0x0F12, 0x1808);
s5k5caga_i2c_write(0x0F12, 0x1280);
s5k5caga_i2c_write(0x0F12, 0x8961);
s5k5caga_i2c_write(0x0F12, 0x1A08);
s5k5caga_i2c_write(0x0F12, 0x8160);
s5k5caga_i2c_write(0x0F12, 0xE003);
s5k5caga_i2c_write(0x0F12, 0x88A8);
s5k5caga_i2c_write(0x0F12, 0x0600);
s5k5caga_i2c_write(0x0F12, 0x1600);
s5k5caga_i2c_write(0x0F12, 0x8160);
s5k5caga_i2c_write(0x0F12, 0x200A);
s5k5caga_i2c_write(0x0F12, 0x5E20);
s5k5caga_i2c_write(0x0F12, 0x42B0);
s5k5caga_i2c_write(0x0F12, 0xD011);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF8AB);
s5k5caga_i2c_write(0x0F12, 0x1D40);
s5k5caga_i2c_write(0x0F12, 0x00C3);
s5k5caga_i2c_write(0x0F12, 0x1A18);
s5k5caga_i2c_write(0x0F12, 0x214B);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF897);
s5k5caga_i2c_write(0x0F12, 0x211F);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF8BA);
s5k5caga_i2c_write(0x0F12, 0x210A);
s5k5caga_i2c_write(0x0F12, 0x5E61);
s5k5caga_i2c_write(0x0F12, 0x0FC9);
s5k5caga_i2c_write(0x0F12, 0x0149);
s5k5caga_i2c_write(0x0F12, 0x4301);
s5k5caga_i2c_write(0x0F12, 0x483D);
s5k5caga_i2c_write(0x0F12, 0x81C1);
s5k5caga_i2c_write(0x0F12, 0x9800);
s5k5caga_i2c_write(0x0F12, 0xE74A);
s5k5caga_i2c_write(0x0F12, 0xB5F1);
s5k5caga_i2c_write(0x0F12, 0xB082);
s5k5caga_i2c_write(0x0F12, 0x2500);
s5k5caga_i2c_write(0x0F12, 0x483A);
s5k5caga_i2c_write(0x0F12, 0x9001);
s5k5caga_i2c_write(0x0F12, 0x2400);
s5k5caga_i2c_write(0x0F12, 0x2028);
s5k5caga_i2c_write(0x0F12, 0x4368);
s5k5caga_i2c_write(0x0F12, 0x4A39);
s5k5caga_i2c_write(0x0F12, 0x4925);
s5k5caga_i2c_write(0x0F12, 0x1887);
s5k5caga_i2c_write(0x0F12, 0x1840);
s5k5caga_i2c_write(0x0F12, 0x9000);
s5k5caga_i2c_write(0x0F12, 0x9800);
s5k5caga_i2c_write(0x0F12, 0x0066);
s5k5caga_i2c_write(0x0F12, 0x9A01);
s5k5caga_i2c_write(0x0F12, 0x1980);
s5k5caga_i2c_write(0x0F12, 0x218C);
s5k5caga_i2c_write(0x0F12, 0x5A09);
s5k5caga_i2c_write(0x0F12, 0x8A80);
s5k5caga_i2c_write(0x0F12, 0x8812);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF8CA);
s5k5caga_i2c_write(0x0F12, 0x53B8);
s5k5caga_i2c_write(0x0F12, 0x1C64);
s5k5caga_i2c_write(0x0F12, 0x2C14);
s5k5caga_i2c_write(0x0F12, 0xDBF1);
s5k5caga_i2c_write(0x0F12, 0x1C6D);
s5k5caga_i2c_write(0x0F12, 0x2D03);
s5k5caga_i2c_write(0x0F12, 0xDBE6);
s5k5caga_i2c_write(0x0F12, 0x9802);
s5k5caga_i2c_write(0x0F12, 0x6800);
s5k5caga_i2c_write(0x0F12, 0x0600);
s5k5caga_i2c_write(0x0F12, 0x0E00);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF8C5);
s5k5caga_i2c_write(0x0F12, 0xBCFE);
s5k5caga_i2c_write(0x0F12, 0xBC08);
s5k5caga_i2c_write(0x0F12, 0x4718);
s5k5caga_i2c_write(0x0F12, 0xB570);
s5k5caga_i2c_write(0x0F12, 0x6805);
s5k5caga_i2c_write(0x0F12, 0x2404);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF8C5);
s5k5caga_i2c_write(0x0F12, 0x2800);
s5k5caga_i2c_write(0x0F12, 0xD103);
s5k5caga_i2c_write(0x0F12, 0xF000);
s5k5caga_i2c_write(0x0F12, 0xF8C9);
s5k5caga_i2c_write(0x0F12, 0x2800);
s5k5caga_i2c_write(0x0F12, 0xD000);
s5k5caga_i2c_write(0x0F12, 0x2400);
s5k5caga_i2c_write(0x0F12, 0x3540);
s5k5caga_i2c_write(0x0F12, 0x88E8);
s5k5caga_i2c_write(0x0F12, 0x0500);
s5k5caga_i2c_write(0x0F12, 0xD403);
s5k5caga_i2c_write(0x0F12, 0x4822);
s5k5caga_i2c_write(0x0F12, 0x89C0);
s5k5caga_i2c_write(0x0F12, 0x2800);
s5k5caga_i2c_write(0x0F12, 0xD002);
s5k5caga_i2c_write(0x0F12, 0x2008);
s5k5caga_i2c_write(0x0F12, 0x4304);
s5k5caga_i2c_write(0x0F12, 0xE001);
s5k5caga_i2c_write(0x0F12, 0x2010);
s5k5caga_i2c_write(0x0F12, 0x4304);
s5k5caga_i2c_write(0x0F12, 0x481F);
s5k5caga_i2c_write(0x0F12, 0x8B80);
s5k5caga_i2c_write(0x0F12, 0x0700);
s5k5caga_i2c_write(0x0F12, 0x0F81);
s5k5caga_i2c_write(0x0F12, 0x2001);
s5k5caga_i2c_write(0x0F12, 0x2900);
s5k5caga_i2c_write(0x0F12, 0xD000);
s5k5caga_i2c_write(0x0F12, 0x4304);
s5k5caga_i2c_write(0x0F12, 0x491C);
s5k5caga_i2c_write(0x0F12, 0x8B0A);
s5k5caga_i2c_write(0x0F12, 0x42A2);
s5k5caga_i2c_write(0x0F12, 0xD004);
s5k5caga_i2c_write(0x0F12, 0x0762);
s5k5caga_i2c_write(0x0F12, 0xD502);
s5k5caga_i2c_write(0x0F12, 0x4A19);
s5k5caga_i2c_write(0x0F12, 0x3220);
s5k5caga_i2c_write(0x0F12, 0x8110);
s5k5caga_i2c_write(0x0F12, 0x830C);
s5k5caga_i2c_write(0x0F12, 0xE691);
s5k5caga_i2c_write(0x0F12, 0x0C3C);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0x3274);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0x26E8);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0x6100);
s5k5caga_i2c_write(0x0F12, 0xD000);
s5k5caga_i2c_write(0x0F12, 0x6500);
s5k5caga_i2c_write(0x0F12, 0xD000);
s5k5caga_i2c_write(0x0F12, 0x1A7C);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0x1120);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0xFFFF);
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x0F12, 0x3374);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0x1D6C);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0x167C);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0xF400);
s5k5caga_i2c_write(0x0F12, 0xD000);
s5k5caga_i2c_write(0x0F12, 0x2C2C);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0x40A0);
s5k5caga_i2c_write(0x0F12, 0x00DD);
s5k5caga_i2c_write(0x0F12, 0xF520);
s5k5caga_i2c_write(0x0F12, 0xD000);
s5k5caga_i2c_write(0x0F12, 0x2C29);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0x1A54);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0x1564);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0xF2A0);
s5k5caga_i2c_write(0x0F12, 0xD000);
s5k5caga_i2c_write(0x0F12, 0x2440);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0x05A0);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0x2894);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0x1224);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x0F12, 0xB000);
s5k5caga_i2c_write(0x0F12, 0xD000);
s5k5caga_i2c_write(0x0F12, 0x4778);
s5k5caga_i2c_write(0x0F12, 0x46C0);
s5k5caga_i2c_write(0x0F12, 0xC000);
s5k5caga_i2c_write(0x0F12, 0xE59F);
s5k5caga_i2c_write(0x0F12, 0xFF1C);
s5k5caga_i2c_write(0x0F12, 0xE12F);
s5k5caga_i2c_write(0x0F12, 0x1A3F);
s5k5caga_i2c_write(0x0F12, 0x0001);
s5k5caga_i2c_write(0x0F12, 0x4778);
s5k5caga_i2c_write(0x0F12, 0x46C0);
s5k5caga_i2c_write(0x0F12, 0xF004);
s5k5caga_i2c_write(0x0F12, 0xE51F);
s5k5caga_i2c_write(0x0F12, 0x1F48);
s5k5caga_i2c_write(0x0F12, 0x0001);
s5k5caga_i2c_write(0x0F12, 0x4778);
s5k5caga_i2c_write(0x0F12, 0x46C0);
s5k5caga_i2c_write(0x0F12, 0xC000);
s5k5caga_i2c_write(0x0F12, 0xE59F);
s5k5caga_i2c_write(0x0F12, 0xFF1C);
s5k5caga_i2c_write(0x0F12, 0xE12F);
s5k5caga_i2c_write(0x0F12, 0x24BD);
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x0F12, 0x4778);
s5k5caga_i2c_write(0x0F12, 0x46C0);
s5k5caga_i2c_write(0x0F12, 0xC000);
s5k5caga_i2c_write(0x0F12, 0xE59F);
s5k5caga_i2c_write(0x0F12, 0xFF1C);
s5k5caga_i2c_write(0x0F12, 0xE12F);
s5k5caga_i2c_write(0x0F12, 0x36DD);
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x0F12, 0x4778);
s5k5caga_i2c_write(0x0F12, 0x46C0);
s5k5caga_i2c_write(0x0F12, 0xC000);
s5k5caga_i2c_write(0x0F12, 0xE59F);
s5k5caga_i2c_write(0x0F12, 0xFF1C);
s5k5caga_i2c_write(0x0F12, 0xE12F);
s5k5caga_i2c_write(0x0F12, 0xB4CF);
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x0F12, 0x4778);
s5k5caga_i2c_write(0x0F12, 0x46C0);
s5k5caga_i2c_write(0x0F12, 0xC000);
s5k5caga_i2c_write(0x0F12, 0xE59F);
s5k5caga_i2c_write(0x0F12, 0xFF1C);
s5k5caga_i2c_write(0x0F12, 0xE12F);
s5k5caga_i2c_write(0x0F12, 0xB5D7);
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x0F12, 0x4778);
s5k5caga_i2c_write(0x0F12, 0x46C0);
s5k5caga_i2c_write(0x0F12, 0xC000);
s5k5caga_i2c_write(0x0F12, 0xE59F);
s5k5caga_i2c_write(0x0F12, 0xFF1C);
s5k5caga_i2c_write(0x0F12, 0xE12F);
s5k5caga_i2c_write(0x0F12, 0x36ED);
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x0F12, 0x4778);
s5k5caga_i2c_write(0x0F12, 0x46C0);
s5k5caga_i2c_write(0x0F12, 0xC000);
s5k5caga_i2c_write(0x0F12, 0xE59F);
s5k5caga_i2c_write(0x0F12, 0xFF1C);
s5k5caga_i2c_write(0x0F12, 0xE12F);
s5k5caga_i2c_write(0x0F12, 0xF53F);
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x0F12, 0x4778);
s5k5caga_i2c_write(0x0F12, 0x46C0);
s5k5caga_i2c_write(0x0F12, 0xC000);
s5k5caga_i2c_write(0x0F12, 0xE59F);
s5k5caga_i2c_write(0x0F12, 0xFF1C);
s5k5caga_i2c_write(0x0F12, 0xE12F);
s5k5caga_i2c_write(0x0F12, 0xF5D9);
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x0F12, 0x4778);
s5k5caga_i2c_write(0x0F12, 0x46C0);
s5k5caga_i2c_write(0x0F12, 0xC000);
s5k5caga_i2c_write(0x0F12, 0xE59F);
s5k5caga_i2c_write(0x0F12, 0xFF1C);
s5k5caga_i2c_write(0x0F12, 0xE12F);
s5k5caga_i2c_write(0x0F12, 0x013D);
s5k5caga_i2c_write(0x0F12, 0x0001);
s5k5caga_i2c_write(0x0F12, 0x4778);
s5k5caga_i2c_write(0x0F12, 0x46C0);
s5k5caga_i2c_write(0x0F12, 0xC000);
s5k5caga_i2c_write(0x0F12, 0xE59F);
s5k5caga_i2c_write(0x0F12, 0xFF1C);
s5k5caga_i2c_write(0x0F12, 0xE12F);
s5k5caga_i2c_write(0x0F12, 0xF5C9);
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x0F12, 0x4778);
s5k5caga_i2c_write(0x0F12, 0x46C0);
s5k5caga_i2c_write(0x0F12, 0xC000);
s5k5caga_i2c_write(0x0F12, 0xE59F);
s5k5caga_i2c_write(0x0F12, 0xFF1C);
s5k5caga_i2c_write(0x0F12, 0xE12F);
s5k5caga_i2c_write(0x0F12, 0xFAA9);
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x0F12, 0x4778);
s5k5caga_i2c_write(0x0F12, 0x46C0);
s5k5caga_i2c_write(0x0F12, 0xC000);
s5k5caga_i2c_write(0x0F12, 0xE59F);
s5k5caga_i2c_write(0x0F12, 0xFF1C);
s5k5caga_i2c_write(0x0F12, 0xE12F);
s5k5caga_i2c_write(0x0F12, 0x3723);
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x0F12, 0x4778);
s5k5caga_i2c_write(0x0F12, 0x46C0);
s5k5caga_i2c_write(0x0F12, 0xC000);
s5k5caga_i2c_write(0x0F12, 0xE59F);
s5k5caga_i2c_write(0x0F12, 0xFF1C);
s5k5caga_i2c_write(0x0F12, 0xE12F);
s5k5caga_i2c_write(0x0F12, 0x5823);
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x0F12, 0x4778);
s5k5caga_i2c_write(0x0F12, 0x46C0);
s5k5caga_i2c_write(0x0F12, 0xC000);
s5k5caga_i2c_write(0x0F12, 0xE59F);
s5k5caga_i2c_write(0x0F12, 0xFF1C);
s5k5caga_i2c_write(0x0F12, 0xE12F);
s5k5caga_i2c_write(0x0F12, 0xD771);
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x0F12, 0x4778);
s5k5caga_i2c_write(0x0F12, 0x46C0);
s5k5caga_i2c_write(0x0F12, 0xC000);
s5k5caga_i2c_write(0x0F12, 0xE59F);
s5k5caga_i2c_write(0x0F12, 0xFF1C);
s5k5caga_i2c_write(0x0F12, 0xE12F);
s5k5caga_i2c_write(0x0F12, 0xD75B);
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x0F12, 0x8117);
s5k5caga_i2c_write(0x0F12, 0x0000);
      
// End T&P part

//========================================================        
// CIs/APs/An setting    - 400LsB  sYsCLK 32MHz           
//========================================================        
// This regis are for FACTORY ONLY. If you change it without prior notification,
// YOU are REsIBLE for the FAILURE that will happen in the future.      
//========================================================        
      

s5k5caga_i2c_write(0x002A, 0x157A);
s5k5caga_i2c_write(0x0F12, 0x0001);
s5k5caga_i2c_write(0x002A, 0x1578);
s5k5caga_i2c_write(0x0F12, 0x0001);
s5k5caga_i2c_write(0x002A, 0x1576);
s5k5caga_i2c_write(0x0F12, 0x0020);
s5k5caga_i2c_write(0x002A, 0x1574);
s5k5caga_i2c_write(0x0F12, 0x0006);
s5k5caga_i2c_write(0x002A, 0x156E);
s5k5caga_i2c_write(0x0F12, 0x0001); // slope calibration tolerance in units of 1/256 
s5k5caga_i2c_write(0x002A, 0x1568);
s5k5caga_i2c_write(0x0F12, 0x00FC);
  
  //ADC control 
s5k5caga_i2c_write(0x002A, 0x155A);
s5k5caga_i2c_write(0x0F12, 0x01CC); //ADC sAT of 450mV for 10bit default in EVT1          
s5k5caga_i2c_write(0x002A, 0x157E);                        
s5k5caga_i2c_write(0x0F12, 0x0C80); // 3200 Max. Reset ramp DCLK counts (default 2048 0x800)     
s5k5caga_i2c_write(0x0F12, 0x0578); // 1400 Max. Reset ramp DCLK counts for x3.5         
s5k5caga_i2c_write(0x002A, 0x157C);                        
s5k5caga_i2c_write(0x0F12, 0x0190); // 400 Reset ramp for x1 in DCLK counts          
s5k5caga_i2c_write(0x002A, 0x1570);                        
s5k5caga_i2c_write(0x0F12, 0x00A0); // 160 LsB                     
s5k5caga_i2c_write(0x0F12, 0x0010); // reset threshold                 
s5k5caga_i2c_write(0x002A, 0x12C4);                        
s5k5caga_i2c_write(0x0F12, 0x006A); // 106 additional timing columns.            
s5k5caga_i2c_write(0x002A, 0x12C8);                        
s5k5caga_i2c_write(0x0F12, 0x08AC); // 2220 ADC columns in normal mode including Hold & Latch    
s5k5caga_i2c_write(0x0F12, 0x0050); // 80 addition of ADC columns in Y-ave mode (default 244 0x74)
  
s5k5caga_i2c_write(0x002A, 0x1696); // based on APs guidelines        
s5k5caga_i2c_write(0x0F12, 0x0000); // based on APs guidelines        
s5k5caga_i2c_write(0x0F12, 0x0000); // default. 1492 used for ADC dark characteristics
s5k5caga_i2c_write(0x0F12, 0x00C6); // default. 1492 used for ADC dark characteristics
s5k5caga_i2c_write(0x0F12, 0x00C6);                                   
                       
s5k5caga_i2c_write(0x002A, 0x1690); // when set double sampling is activated - requires different set of pointers                 
s5k5caga_i2c_write(0x0F12, 0x0001);                   
                       
s5k5caga_i2c_write(0x002A, 0x12B0); // comp and pixel bias control 0xF40E - default for EVT1                        
s5k5caga_i2c_write(0x0F12, 0x0055); // comp and pixel bias control 0xF40E for binning mode                        
s5k5caga_i2c_write(0x0F12, 0x005A);                   
                       
s5k5caga_i2c_write(0x002A, 0x337A); // [7] - is used for rest-only mode (EVT0 value is 0xD and HW 0x6)                    
s5k5caga_i2c_write(0x0F12, 0x0006);
s5k5caga_i2c_write(0x0F12, 0x0068);
s5k5caga_i2c_write(0x002A, 0x169E);
s5k5caga_i2c_write(0x0F12, 0x0007);
s5k5caga_i2c_write(0x002A, 0x0BF6);
s5k5caga_i2c_write(0x0F12, 0x0000);
      
       
s5k5caga_i2c_write(0x002A, 0x327C);
s5k5caga_i2c_write(0x0F12, 0x1000);
s5k5caga_i2c_write(0x0F12, 0x6998);
s5k5caga_i2c_write(0x0F12, 0x0078);
s5k5caga_i2c_write(0x0F12, 0x04FE);
s5k5caga_i2c_write(0x0F12, 0x8800);
       
s5k5caga_i2c_write(0x002A, 0x3274);
s5k5caga_i2c_write(0x0F12, 0x0155); //set IO driving current 2mA for Gs500
s5k5caga_i2c_write(0x0F12, 0x0155); //set IO driving current      
s5k5caga_i2c_write(0x0F12, 0x1555); //set IO driving current      
s5k5caga_i2c_write(0x0F12, 0x05D5);//0555 //set IO driving current      

s5k5caga_i2c_write(0x0028, 0x7000);
s5k5caga_i2c_write(0x002A, 0x0572);
s5k5caga_i2c_write(0x0F12, 0x0007); //#skl_usConfigStbySettings // Enable T&P code after HW stby + skip ZI part on HW wakeup.
      
s5k5caga_i2c_write(0x0028, 0x7000); 
s5k5caga_i2c_write(0x002A, 0x12D2);  
s5k5caga_i2c_write(0x0F12, 0x0003); //senHal_pContSenModesRegsArray[0][0]2 700012D2   
s5k5caga_i2c_write(0x0F12, 0x0003); //senHal_pContSenModesRegsArray[0][1]2 700012D4  
s5k5caga_i2c_write(0x0F12, 0x0003); //senHal_pContSenModesRegsArray[0][2]2 700012D6  
s5k5caga_i2c_write(0x0F12, 0x0003); //senHal_pContSenModesRegsArray[0][3]2 700012D8  
s5k5caga_i2c_write(0x0F12, 0x0884); //senHal_pContSenModesRegsArray[1][0]2 700012DA  
s5k5caga_i2c_write(0x0F12, 0x08CF); //senHal_pContSenModesRegsArray[1][1]2 700012DC  
s5k5caga_i2c_write(0x0F12, 0x0500); //senHal_pContSenModesRegsArray[1][2]2 700012DE  
s5k5caga_i2c_write(0x0F12, 0x054B); //senHal_pContSenModesRegsArray[1][3]2 700012E0  
s5k5caga_i2c_write(0x0F12, 0x0001); //senHal_pContSenModesRegsArray[2][0]2 700012E2  
s5k5caga_i2c_write(0x0F12, 0x0001); //senHal_pContSenModesRegsArray[2][1]2 700012E4  
s5k5caga_i2c_write(0x0F12, 0x0001); //senHal_pContSenModesRegsArray[2][2]2 700012E6  
s5k5caga_i2c_write(0x0F12, 0x0001); //senHal_pContSenModesRegsArray[2][3]2 700012E8  
s5k5caga_i2c_write(0x0F12, 0x0885); //senHal_pContSenModesRegsArray[3][0]2 700012EA  
s5k5caga_i2c_write(0x0F12, 0x0467); //senHal_pContSenModesRegsArray[3][1]2 700012EC  
s5k5caga_i2c_write(0x0F12, 0x0501); //senHal_pContSenModesRegsArray[3][2]2 700012EE  
s5k5caga_i2c_write(0x0F12, 0x02A5); //senHal_pContSenModesRegsArray[3][3]2 700012F0  
s5k5caga_i2c_write(0x0F12, 0x0001); //senHal_pContSenModesRegsArray[4][0]2 700012F2  
s5k5caga_i2c_write(0x0F12, 0x046A); //senHal_pContSenModesRegsArray[4][1]2 700012F4  
s5k5caga_i2c_write(0x0F12, 0x0001); //senHal_pContSenModesRegsArray[4][2]2 700012F6  
s5k5caga_i2c_write(0x0F12, 0x02A8); //senHal_pContSenModesRegsArray[4][3]2 700012F8  
s5k5caga_i2c_write(0x0F12, 0x0885); //senHal_pContSenModesRegsArray[5][0]2 700012FA  
s5k5caga_i2c_write(0x0F12, 0x08D0); //senHal_pContSenModesRegsArray[5][1]2 700012FC  
s5k5caga_i2c_write(0x0F12, 0x0501); //senHal_pContSenModesRegsArray[5][2]2 700012FE  
s5k5caga_i2c_write(0x0F12, 0x054C); //senHal_pContSenModesRegsArray[5][3]2 70001300  
s5k5caga_i2c_write(0x0F12, 0x0006); //senHal_pContSenModesRegsArray[6][0]2 70001302  
s5k5caga_i2c_write(0x0F12, 0x0020); //senHal_pContSenModesRegsArray[6][1]2 70001304  
s5k5caga_i2c_write(0x0F12, 0x0006); //senHal_pContSenModesRegsArray[6][2]2 70001306  
s5k5caga_i2c_write(0x0F12, 0x0020); //senHal_pContSenModesRegsArray[6][3]2 70001308  
s5k5caga_i2c_write(0x0F12, 0x0881); //senHal_pContSenModesRegsArray[7][0]2 7000130A  
s5k5caga_i2c_write(0x0F12, 0x0463); //senHal_pContSenModesRegsArray[7][1]2 7000130C  
s5k5caga_i2c_write(0x0F12, 0x04FD); //senHal_pContSenModesRegsArray[7][2]2 7000130E  
s5k5caga_i2c_write(0x0F12, 0x02A1); //senHal_pContSenModesRegsArray[7][3]2 70001310  
s5k5caga_i2c_write(0x0F12, 0x0006); //senHal_pContSenModesRegsArray[8][0]2 70001312  
s5k5caga_i2c_write(0x0F12, 0x0489); //senHal_pContSenModesRegsArray[8][1]2 70001314  
s5k5caga_i2c_write(0x0F12, 0x0006); //senHal_pContSenModesRegsArray[8][2]2 70001316  
s5k5caga_i2c_write(0x0F12, 0x02C7); //senHal_pContSenModesRegsArray[8][3]2 70001318  
s5k5caga_i2c_write(0x0F12, 0x0881); //senHal_pContSenModesRegsArray[9][0]2 7000131A  
s5k5caga_i2c_write(0x0F12, 0x08CC); //senHal_pContSenModesRegsArray[9][1]2 7000131C  
s5k5caga_i2c_write(0x0F12, 0x04FD); //senHal_pContSenModesRegsArray[9][2]2 7000131E  
s5k5caga_i2c_write(0x0F12, 0x0548); //senHal_pContSenModesRegsArray[9][3]2 70001320  
s5k5caga_i2c_write(0x0F12, 0x03A2); //senHal_pContSenModesRegsArray[10][0] 2 70001322
s5k5caga_i2c_write(0x0F12, 0x01D3); //senHal_pContSenModesRegsArray[10][1] 2 70001324
s5k5caga_i2c_write(0x0F12, 0x01E0); //senHal_pContSenModesRegsArray[10][2] 2 70001326
s5k5caga_i2c_write(0x0F12, 0x00F2); //senHal_pContSenModesRegsArray[10][3] 2 70001328
s5k5caga_i2c_write(0x0F12, 0x03F2); //senHal_pContSenModesRegsArray[11][0] 2 7000132A
s5k5caga_i2c_write(0x0F12, 0x0223); //senHal_pContSenModesRegsArray[11][1] 2 7000132C
s5k5caga_i2c_write(0x0F12, 0x0230); //senHal_pContSenModesRegsArray[11][2] 2 7000132E
s5k5caga_i2c_write(0x0F12, 0x0142); //senHal_pContSenModesRegsArray[11][3] 2 70001330
s5k5caga_i2c_write(0x0F12, 0x03A2); //senHal_pContSenModesRegsArray[12][0] 2 70001332
s5k5caga_i2c_write(0x0F12, 0x063C); //senHal_pContSenModesRegsArray[12][1] 2 70001334
s5k5caga_i2c_write(0x0F12, 0x01E0); //senHal_pContSenModesRegsArray[12][2] 2 70001336
s5k5caga_i2c_write(0x0F12, 0x0399); //senHal_pContSenModesRegsArray[12][3] 2 70001338
s5k5caga_i2c_write(0x0F12, 0x03F2); //senHal_pContSenModesRegsArray[13][0] 2 7000133A
s5k5caga_i2c_write(0x0F12, 0x068C); //senHal_pContSenModesRegsArray[13][1] 2 7000133C
s5k5caga_i2c_write(0x0F12, 0x0230); //senHal_pContSenModesRegsArray[13][2] 2 7000133E
s5k5caga_i2c_write(0x0F12, 0x03E9); //senHal_pContSenModesRegsArray[13][3] 2 70001340
s5k5caga_i2c_write(0x0F12, 0x0002); //senHal_pContSenModesRegsArray[14][0] 2 70001342
s5k5caga_i2c_write(0x0F12, 0x0002); //senHal_pContSenModesRegsArray[14][1] 2 70001344
s5k5caga_i2c_write(0x0F12, 0x0002); //senHal_pContSenModesRegsArray[14][2] 2 70001346
s5k5caga_i2c_write(0x0F12, 0x0002); //senHal_pContSenModesRegsArray[14][3] 2 70001348
s5k5caga_i2c_write(0x0F12, 0x003C); //senHal_pContSenModesRegsArray[15][0] 2 7000134A
s5k5caga_i2c_write(0x0F12, 0x003C); //senHal_pContSenModesRegsArray[15][1] 2 7000134C
s5k5caga_i2c_write(0x0F12, 0x003C); //senHal_pContSenModesRegsArray[15][2] 2 7000134E
s5k5caga_i2c_write(0x0F12, 0x003C); //senHal_pContSenModesRegsArray[15][3] 2 70001350
s5k5caga_i2c_write(0x0F12, 0x01D3); //senHal_pContSenModesRegsArray[16][0] 2 70001352
s5k5caga_i2c_write(0x0F12, 0x01D3); //senHal_pContSenModesRegsArray[16][1] 2 70001354
s5k5caga_i2c_write(0x0F12, 0x00F2); //senHal_pContSenModesRegsArray[16][2] 2 70001356
s5k5caga_i2c_write(0x0F12, 0x00F2); //senHal_pContSenModesRegsArray[16][3] 2 70001358
s5k5caga_i2c_write(0x0F12, 0x020B); //senHal_pContSenModesRegsArray[17][0] 2 7000135A
s5k5caga_i2c_write(0x0F12, 0x024A); //senHal_pContSenModesRegsArray[17][1] 2 7000135C
s5k5caga_i2c_write(0x0F12, 0x012A); //senHal_pContSenModesRegsArray[17][2] 2 7000135E
s5k5caga_i2c_write(0x0F12, 0x0169); //senHal_pContSenModesRegsArray[17][3] 2 70001360
s5k5caga_i2c_write(0x0F12, 0x0002); //senHal_pContSenModesRegsArray[18][0] 2 70001362
s5k5caga_i2c_write(0x0F12, 0x046B); //senHal_pContSenModesRegsArray[18][1] 2 70001364
s5k5caga_i2c_write(0x0F12, 0x0002); //senHal_pContSenModesRegsArray[18][2] 2 70001366
s5k5caga_i2c_write(0x0F12, 0x02A9); //senHal_pContSenModesRegsArray[18][3] 2 70001368
s5k5caga_i2c_write(0x0F12, 0x0419); //senHal_pContSenModesRegsArray[19][0] 2 7000136A
s5k5caga_i2c_write(0x0F12, 0x04A5); //senHal_pContSenModesRegsArray[19][1] 2 7000136C
s5k5caga_i2c_write(0x0F12, 0x0257); //senHal_pContSenModesRegsArray[19][2] 2 7000136E
s5k5caga_i2c_write(0x0F12, 0x02E3); //senHal_pContSenModesRegsArray[19][3] 2 70001370
s5k5caga_i2c_write(0x0F12, 0x0630); //senHal_pContSenModesRegsArray[20][0] 2 70001372
s5k5caga_i2c_write(0x0F12, 0x063C); //senHal_pContSenModesRegsArray[20][1] 2 70001374
s5k5caga_i2c_write(0x0F12, 0x038D); //senHal_pContSenModesRegsArray[20][2] 2 70001376
s5k5caga_i2c_write(0x0F12, 0x0399); //senHal_pContSenModesRegsArray[20][3] 2 70001378
s5k5caga_i2c_write(0x0F12, 0x0668); //senHal_pContSenModesRegsArray[21][0] 2 7000137A
s5k5caga_i2c_write(0x0F12, 0x06B3); //senHal_pContSenModesRegsArray[21][1] 2 7000137C
s5k5caga_i2c_write(0x0F12, 0x03C5); //senHal_pContSenModesRegsArray[21][2] 2 7000137E
s5k5caga_i2c_write(0x0F12, 0x0410); //senHal_pContSenModesRegsArray[21][3] 2 70001380
s5k5caga_i2c_write(0x0F12, 0x0001); //senHal_pContSenModesRegsArray[22][0] 2 70001382
s5k5caga_i2c_write(0x0F12, 0x0001); //senHal_pContSenModesRegsArray[22][1] 2 70001384
s5k5caga_i2c_write(0x0F12, 0x0001); //senHal_pContSenModesRegsArray[22][2] 2 70001386
s5k5caga_i2c_write(0x0F12, 0x0001); //senHal_pContSenModesRegsArray[22][3] 2 70001388
s5k5caga_i2c_write(0x0F12, 0x03A2); //senHal_pContSenModesRegsArray[23][0] 2 7000138A
s5k5caga_i2c_write(0x0F12, 0x01D3); //senHal_pContSenModesRegsArray[23][1] 2 7000138C
s5k5caga_i2c_write(0x0F12, 0x01E0); //senHal_pContSenModesRegsArray[23][2] 2 7000138E
s5k5caga_i2c_write(0x0F12, 0x00F2); //senHal_pContSenModesRegsArray[23][3] 2 70001390
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[24][0] 2 70001392
s5k5caga_i2c_write(0x0F12, 0x0461); //senHal_pContSenModesRegsArray[24][1] 2 70001394
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[24][2] 2 70001396
s5k5caga_i2c_write(0x0F12, 0x029F); //senHal_pContSenModesRegsArray[24][3] 2 70001398
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[25][0] 2 7000139A
s5k5caga_i2c_write(0x0F12, 0x063C); //senHal_pContSenModesRegsArray[25][1] 2 7000139C
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[25][2] 2 7000139E
s5k5caga_i2c_write(0x0F12, 0x0399); //senHal_pContSenModesRegsArray[25][3] 2 700013A0
s5k5caga_i2c_write(0x0F12, 0x003D); //senHal_pContSenModesRegsArray[26][0] 2 700013A2
s5k5caga_i2c_write(0x0F12, 0x003D); //senHal_pContSenModesRegsArray[26][1] 2 700013A4
s5k5caga_i2c_write(0x0F12, 0x003D); //senHal_pContSenModesRegsArray[26][2] 2 700013A6
s5k5caga_i2c_write(0x0F12, 0x003D); //senHal_pContSenModesRegsArray[26][3] 2 700013A8
s5k5caga_i2c_write(0x0F12, 0x01D0); //senHal_pContSenModesRegsArray[27][0] 2 700013AA
s5k5caga_i2c_write(0x0F12, 0x01D0); //senHal_pContSenModesRegsArray[27][1] 2 700013AC
s5k5caga_i2c_write(0x0F12, 0x00EF); //senHal_pContSenModesRegsArray[27][2] 2 700013AE
s5k5caga_i2c_write(0x0F12, 0x00EF); //senHal_pContSenModesRegsArray[27][3] 2 700013B0
s5k5caga_i2c_write(0x0F12, 0x020C); //senHal_pContSenModesRegsArray[28][0] 2 700013B2
s5k5caga_i2c_write(0x0F12, 0x024B); //senHal_pContSenModesRegsArray[28][1] 2 700013B4
s5k5caga_i2c_write(0x0F12, 0x012B); //senHal_pContSenModesRegsArray[28][2] 2 700013B6
s5k5caga_i2c_write(0x0F12, 0x016A); //senHal_pContSenModesRegsArray[28][3] 2 700013B8
s5k5caga_i2c_write(0x0F12, 0x039F); //senHal_pContSenModesRegsArray[29][0] 2 700013BA
s5k5caga_i2c_write(0x0F12, 0x045E); //senHal_pContSenModesRegsArray[29][1] 2 700013BC
s5k5caga_i2c_write(0x0F12, 0x01DD); //senHal_pContSenModesRegsArray[29][2] 2 700013BE
s5k5caga_i2c_write(0x0F12, 0x029C); //senHal_pContSenModesRegsArray[29][3] 2 700013C0
s5k5caga_i2c_write(0x0F12, 0x041A); //senHal_pContSenModesRegsArray[30][0] 2 700013C2
s5k5caga_i2c_write(0x0F12, 0x04A6); //senHal_pContSenModesRegsArray[30][1] 2 700013C4
s5k5caga_i2c_write(0x0F12, 0x0258); //senHal_pContSenModesRegsArray[30][2] 2 700013C6
s5k5caga_i2c_write(0x0F12, 0x02E4); //senHal_pContSenModesRegsArray[30][3] 2 700013C8
s5k5caga_i2c_write(0x0F12, 0x062D); //senHal_pContSenModesRegsArray[31][0] 2 700013CA
s5k5caga_i2c_write(0x0F12, 0x0639); //senHal_pContSenModesRegsArray[31][1] 2 700013CC
s5k5caga_i2c_write(0x0F12, 0x038A); //senHal_pContSenModesRegsArray[31][2] 2 700013CE
s5k5caga_i2c_write(0x0F12, 0x0396); //senHal_pContSenModesRegsArray[31][3] 2 700013D0
s5k5caga_i2c_write(0x0F12, 0x0669); //senHal_pContSenModesRegsArray[32][0] 2 700013D2
s5k5caga_i2c_write(0x0F12, 0x06B4); //senHal_pContSenModesRegsArray[32][1] 2 700013D4
s5k5caga_i2c_write(0x0F12, 0x03C6); //senHal_pContSenModesRegsArray[32][2] 2 700013D6
s5k5caga_i2c_write(0x0F12, 0x0411); //senHal_pContSenModesRegsArray[32][3] 2 700013D8
s5k5caga_i2c_write(0x0F12, 0x087C); //senHal_pContSenModesRegsArray[33][0] 2 700013DA
s5k5caga_i2c_write(0x0F12, 0x08C7); //senHal_pContSenModesRegsArray[33][1] 2 700013DC
s5k5caga_i2c_write(0x0F12, 0x04F8); //senHal_pContSenModesRegsArray[33][2] 2 700013DE
s5k5caga_i2c_write(0x0F12, 0x0543); //senHal_pContSenModesRegsArray[33][3] 2 700013E0
s5k5caga_i2c_write(0x0F12, 0x0040); //senHal_pContSenModesRegsArray[34][0] 2 700013E2
s5k5caga_i2c_write(0x0F12, 0x0040); //senHal_pContSenModesRegsArray[34][1] 2 700013E4
s5k5caga_i2c_write(0x0F12, 0x0040); //senHal_pContSenModesRegsArray[34][2] 2 700013E6
s5k5caga_i2c_write(0x0F12, 0x0040); //senHal_pContSenModesRegsArray[34][3] 2 700013E8
s5k5caga_i2c_write(0x0F12, 0x01D0); //senHal_pContSenModesRegsArray[35][0] 2 700013EA
s5k5caga_i2c_write(0x0F12, 0x01D0); //senHal_pContSenModesRegsArray[35][1] 2 700013EC
s5k5caga_i2c_write(0x0F12, 0x00EF); //senHal_pContSenModesRegsArray[35][2] 2 700013EE
s5k5caga_i2c_write(0x0F12, 0x00EF); //senHal_pContSenModesRegsArray[35][3] 2 700013F0
s5k5caga_i2c_write(0x0F12, 0x020F); //senHal_pContSenModesRegsArray[36][0] 2 700013F2
s5k5caga_i2c_write(0x0F12, 0x024E); //senHal_pContSenModesRegsArray[36][1] 2 700013F4
s5k5caga_i2c_write(0x0F12, 0x012E); //senHal_pContSenModesRegsArray[36][2] 2 700013F6
s5k5caga_i2c_write(0x0F12, 0x016D); //senHal_pContSenModesRegsArray[36][3] 2 700013F8
s5k5caga_i2c_write(0x0F12, 0x039F); //senHal_pContSenModesRegsArray[37][0] 2 700013FA
s5k5caga_i2c_write(0x0F12, 0x045E); //senHal_pContSenModesRegsArray[37][1] 2 700013FC
s5k5caga_i2c_write(0x0F12, 0x01DD); //senHal_pContSenModesRegsArray[37][2] 2 700013FE
s5k5caga_i2c_write(0x0F12, 0x029C); //senHal_pContSenModesRegsArray[37][3] 2 70001400
s5k5caga_i2c_write(0x0F12, 0x041D); //senHal_pContSenModesRegsArray[38][0] 2 70001402
s5k5caga_i2c_write(0x0F12, 0x04A9); //senHal_pContSenModesRegsArray[38][1] 2 70001404
s5k5caga_i2c_write(0x0F12, 0x025B); //senHal_pContSenModesRegsArray[38][2] 2 70001406
s5k5caga_i2c_write(0x0F12, 0x02E7); //senHal_pContSenModesRegsArray[38][3] 2 70001408
s5k5caga_i2c_write(0x0F12, 0x062D); //senHal_pContSenModesRegsArray[39][0] 2 7000140A
s5k5caga_i2c_write(0x0F12, 0x0639); //senHal_pContSenModesRegsArray[39][1] 2 7000140C
s5k5caga_i2c_write(0x0F12, 0x038A); //senHal_pContSenModesRegsArray[39][2] 2 7000140E
s5k5caga_i2c_write(0x0F12, 0x0396); //senHal_pContSenModesRegsArray[39][3] 2 70001410
s5k5caga_i2c_write(0x0F12, 0x066C); //senHal_pContSenModesRegsArray[40][0] 2 70001412
s5k5caga_i2c_write(0x0F12, 0x06B7); //senHal_pContSenModesRegsArray[40][1] 2 70001414
s5k5caga_i2c_write(0x0F12, 0x03C9); //senHal_pContSenModesRegsArray[40][2] 2 70001416
s5k5caga_i2c_write(0x0F12, 0x0414); //senHal_pContSenModesRegsArray[40][3] 2 70001418
s5k5caga_i2c_write(0x0F12, 0x087C); //senHal_pContSenModesRegsArray[41][0] 2 7000141A
s5k5caga_i2c_write(0x0F12, 0x08C7); //senHal_pContSenModesRegsArray[41][1] 2 7000141C
s5k5caga_i2c_write(0x0F12, 0x04F8); //senHal_pContSenModesRegsArray[41][2] 2 7000141E
s5k5caga_i2c_write(0x0F12, 0x0543); //senHal_pContSenModesRegsArray[41][3] 2 70001420
s5k5caga_i2c_write(0x0F12, 0x0040); //senHal_pContSenModesRegsArray[42][0] 2 70001422
s5k5caga_i2c_write(0x0F12, 0x0040); //senHal_pContSenModesRegsArray[42][1] 2 70001424
s5k5caga_i2c_write(0x0F12, 0x0040); //senHal_pContSenModesRegsArray[42][2] 2 70001426
s5k5caga_i2c_write(0x0F12, 0x0040); //senHal_pContSenModesRegsArray[42][3] 2 70001428
s5k5caga_i2c_write(0x0F12, 0x01D0); //senHal_pContSenModesRegsArray[43][0] 2 7000142A
s5k5caga_i2c_write(0x0F12, 0x01D0); //senHal_pContSenModesRegsArray[43][1] 2 7000142C
s5k5caga_i2c_write(0x0F12, 0x00EF); //senHal_pContSenModesRegsArray[43][2] 2 7000142E
s5k5caga_i2c_write(0x0F12, 0x00EF); //senHal_pContSenModesRegsArray[43][3] 2 70001430
s5k5caga_i2c_write(0x0F12, 0x020F); //senHal_pContSenModesRegsArray[44][0] 2 70001432
s5k5caga_i2c_write(0x0F12, 0x024E); //senHal_pContSenModesRegsArray[44][1] 2 70001434
s5k5caga_i2c_write(0x0F12, 0x012E); //senHal_pContSenModesRegsArray[44][2] 2 70001436
s5k5caga_i2c_write(0x0F12, 0x016D); //senHal_pContSenModesRegsArray[44][3] 2 70001438
s5k5caga_i2c_write(0x0F12, 0x039F); //senHal_pContSenModesRegsArray[45][0] 2 7000143A
s5k5caga_i2c_write(0x0F12, 0x045E); //senHal_pContSenModesRegsArray[45][1] 2 7000143C
s5k5caga_i2c_write(0x0F12, 0x01DD); //senHal_pContSenModesRegsArray[45][2] 2 7000143E
s5k5caga_i2c_write(0x0F12, 0x029C); //senHal_pContSenModesRegsArray[45][3] 2 70001440
s5k5caga_i2c_write(0x0F12, 0x041D); //senHal_pContSenModesRegsArray[46][0] 2 70001442
s5k5caga_i2c_write(0x0F12, 0x04A9); //senHal_pContSenModesRegsArray[46][1] 2 70001444
s5k5caga_i2c_write(0x0F12, 0x025B); //senHal_pContSenModesRegsArray[46][2] 2 70001446
s5k5caga_i2c_write(0x0F12, 0x02E7); //senHal_pContSenModesRegsArray[46][3] 2 70001448
s5k5caga_i2c_write(0x0F12, 0x062D); //senHal_pContSenModesRegsArray[47][0] 2 7000144A
s5k5caga_i2c_write(0x0F12, 0x0639); //senHal_pContSenModesRegsArray[47][1] 2 7000144C
s5k5caga_i2c_write(0x0F12, 0x038A); //senHal_pContSenModesRegsArray[47][2] 2 7000144E
s5k5caga_i2c_write(0x0F12, 0x0396); //senHal_pContSenModesRegsArray[47][3] 2 70001450
s5k5caga_i2c_write(0x0F12, 0x066C); //senHal_pContSenModesRegsArray[48][0] 2 70001452
s5k5caga_i2c_write(0x0F12, 0x06B7); //senHal_pContSenModesRegsArray[48][1] 2 70001454
s5k5caga_i2c_write(0x0F12, 0x03C9); //senHal_pContSenModesRegsArray[48][2] 2 70001456
s5k5caga_i2c_write(0x0F12, 0x0414); //senHal_pContSenModesRegsArray[48][3] 2 70001458
s5k5caga_i2c_write(0x0F12, 0x087C); //senHal_pContSenModesRegsArray[49][0] 2 7000145A
s5k5caga_i2c_write(0x0F12, 0x08C7); //senHal_pContSenModesRegsArray[49][1] 2 7000145C
s5k5caga_i2c_write(0x0F12, 0x04F8); //senHal_pContSenModesRegsArray[49][2] 2 7000145E
s5k5caga_i2c_write(0x0F12, 0x0543); //senHal_pContSenModesRegsArray[49][3] 2 70001460
s5k5caga_i2c_write(0x0F12, 0x003D); //senHal_pContSenModesRegsArray[50][0] 2 70001462
s5k5caga_i2c_write(0x0F12, 0x003D); //senHal_pContSenModesRegsArray[50][1] 2 70001464
s5k5caga_i2c_write(0x0F12, 0x003D); //senHal_pContSenModesRegsArray[50][2] 2 70001466
s5k5caga_i2c_write(0x0F12, 0x003D); //senHal_pContSenModesRegsArray[50][3] 2 70001468
s5k5caga_i2c_write(0x0F12, 0x01D2); //senHal_pContSenModesRegsArray[51][0] 2 7000146A
s5k5caga_i2c_write(0x0F12, 0x01D2); //senHal_pContSenModesRegsArray[51][1] 2 7000146C
s5k5caga_i2c_write(0x0F12, 0x00F1); //senHal_pContSenModesRegsArray[51][2] 2 7000146E
s5k5caga_i2c_write(0x0F12, 0x00F1); //senHal_pContSenModesRegsArray[51][3] 2 70001470
s5k5caga_i2c_write(0x0F12, 0x020C); //senHal_pContSenModesRegsArray[52][0] 2 70001472
s5k5caga_i2c_write(0x0F12, 0x024B); //senHal_pContSenModesRegsArray[52][1] 2 70001474
s5k5caga_i2c_write(0x0F12, 0x012B); //senHal_pContSenModesRegsArray[52][2] 2 70001476
s5k5caga_i2c_write(0x0F12, 0x016A); //senHal_pContSenModesRegsArray[52][3] 2 70001478
s5k5caga_i2c_write(0x0F12, 0x03A1); //senHal_pContSenModesRegsArray[53][0] 2 7000147A
s5k5caga_i2c_write(0x0F12, 0x0460); //senHal_pContSenModesRegsArray[53][1] 2 7000147C
s5k5caga_i2c_write(0x0F12, 0x01DF); //senHal_pContSenModesRegsArray[53][2] 2 7000147E
s5k5caga_i2c_write(0x0F12, 0x029E); //senHal_pContSenModesRegsArray[53][3] 2 70001480
s5k5caga_i2c_write(0x0F12, 0x041A); //senHal_pContSenModesRegsArray[54][0] 2 70001482
s5k5caga_i2c_write(0x0F12, 0x04A6); //senHal_pContSenModesRegsArray[54][1] 2 70001484
s5k5caga_i2c_write(0x0F12, 0x0258); //senHal_pContSenModesRegsArray[54][2] 2 70001486
s5k5caga_i2c_write(0x0F12, 0x02E4); //senHal_pContSenModesRegsArray[54][3] 2 70001488
s5k5caga_i2c_write(0x0F12, 0x062F); //senHal_pContSenModesRegsArray[55][0] 2 7000148A
s5k5caga_i2c_write(0x0F12, 0x063B); //senHal_pContSenModesRegsArray[55][1] 2 7000148C
s5k5caga_i2c_write(0x0F12, 0x038C); //senHal_pContSenModesRegsArray[55][2] 2 7000148E
s5k5caga_i2c_write(0x0F12, 0x0398); //senHal_pContSenModesRegsArray[55][3] 2 70001490
s5k5caga_i2c_write(0x0F12, 0x0669); //senHal_pContSenModesRegsArray[56][0] 2 70001492
s5k5caga_i2c_write(0x0F12, 0x06B4); //senHal_pContSenModesRegsArray[56][1] 2 70001494
s5k5caga_i2c_write(0x0F12, 0x03C6); //senHal_pContSenModesRegsArray[56][2] 2 70001496
s5k5caga_i2c_write(0x0F12, 0x0411); //senHal_pContSenModesRegsArray[56][3] 2 70001498
s5k5caga_i2c_write(0x0F12, 0x087E); //senHal_pContSenModesRegsArray[57][0] 2 7000149A
s5k5caga_i2c_write(0x0F12, 0x08C9); //senHal_pContSenModesRegsArray[57][1] 2 7000149C
s5k5caga_i2c_write(0x0F12, 0x04FA); //senHal_pContSenModesRegsArray[57][2] 2 7000149E
s5k5caga_i2c_write(0x0F12, 0x0545); //senHal_pContSenModesRegsArray[57][3] 2 700014A0
s5k5caga_i2c_write(0x0F12, 0x03A2); //senHal_pContSenModesRegsArray[58][0] 2 700014A2
s5k5caga_i2c_write(0x0F12, 0x01D3); //senHal_pContSenModesRegsArray[58][1] 2 700014A4
s5k5caga_i2c_write(0x0F12, 0x01E0); //senHal_pContSenModesRegsArray[58][2] 2 700014A6
s5k5caga_i2c_write(0x0F12, 0x00F2); //senHal_pContSenModesRegsArray[58][3] 2 700014A8
s5k5caga_i2c_write(0x0F12, 0x03AF); //senHal_pContSenModesRegsArray[59][0] 2 700014AA
s5k5caga_i2c_write(0x0F12, 0x01E0); //senHal_pContSenModesRegsArray[59][1] 2 700014AC
s5k5caga_i2c_write(0x0F12, 0x01ED); //senHal_pContSenModesRegsArray[59][2] 2 700014AE
s5k5caga_i2c_write(0x0F12, 0x00FF); //senHal_pContSenModesRegsArray[59][3] 2 700014B0
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[60][0] 2 700014B2
s5k5caga_i2c_write(0x0F12, 0x0461); //senHal_pContSenModesRegsArray[60][1] 2 700014B4
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[60][2] 2 700014B6
s5k5caga_i2c_write(0x0F12, 0x029F); //senHal_pContSenModesRegsArray[60][3] 2 700014B8
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[61][0] 2 700014BA
s5k5caga_i2c_write(0x0F12, 0x046E); //senHal_pContSenModesRegsArray[61][1] 2 700014BC
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[61][2] 2 700014BE
s5k5caga_i2c_write(0x0F12, 0x02AC); //senHal_pContSenModesRegsArray[61][3] 2 700014C0
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[62][0] 2 700014C2
s5k5caga_i2c_write(0x0F12, 0x063C); //senHal_pContSenModesRegsArray[62][1] 2 700014C4
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[62][2] 2 700014C6
s5k5caga_i2c_write(0x0F12, 0x0399); //senHal_pContSenModesRegsArray[62][3] 2 700014C8
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[63][0] 2 700014CA
s5k5caga_i2c_write(0x0F12, 0x0649); //senHal_pContSenModesRegsArray[63][1] 2 700014CC
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[63][2] 2 700014CE
s5k5caga_i2c_write(0x0F12, 0x03A6); //senHal_pContSenModesRegsArray[63][3] 2 700014D0
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[64][0] 2 700014D2
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[64][1] 2 700014D4
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[64][2] 2 700014D6
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[64][3] 2 700014D8
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[65][0] 2 700014DA
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[65][1] 2 700014DC
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[65][2] 2 700014DE
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[65][3] 2 700014E0
s5k5caga_i2c_write(0x0F12, 0x03AA); //senHal_pContSenModesRegsArray[66][0] 2 700014E2
s5k5caga_i2c_write(0x0F12, 0x01DB); //senHal_pContSenModesRegsArray[66][1] 2 700014E4
s5k5caga_i2c_write(0x0F12, 0x01E8); //senHal_pContSenModesRegsArray[66][2] 2 700014E6
s5k5caga_i2c_write(0x0F12, 0x00FA); //senHal_pContSenModesRegsArray[66][3] 2 700014E8
s5k5caga_i2c_write(0x0F12, 0x03B7); //senHal_pContSenModesRegsArray[67][0] 2 700014EA
s5k5caga_i2c_write(0x0F12, 0x01E8); //senHal_pContSenModesRegsArray[67][1] 2 700014EC
s5k5caga_i2c_write(0x0F12, 0x01F5); //senHal_pContSenModesRegsArray[67][2] 2 700014EE
s5k5caga_i2c_write(0x0F12, 0x0107); //senHal_pContSenModesRegsArray[67][3] 2 700014F0
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[68][0] 2 700014F2
s5k5caga_i2c_write(0x0F12, 0x0469); //senHal_pContSenModesRegsArray[68][1] 2 700014F4
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[68][2] 2 700014F6
s5k5caga_i2c_write(0x0F12, 0x02A7); //senHal_pContSenModesRegsArray[68][3] 2 700014F8
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[69][0] 2 700014FA
s5k5caga_i2c_write(0x0F12, 0x0476); //senHal_pContSenModesRegsArray[69][1] 2 700014FC
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[69][2] 2 700014FE
s5k5caga_i2c_write(0x0F12, 0x02B4); //senHal_pContSenModesRegsArray[69][3] 2 70001500
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[70][0] 2 70001502
s5k5caga_i2c_write(0x0F12, 0x0644); //senHal_pContSenModesRegsArray[70][1] 2 70001504
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[70][2] 2 70001506
s5k5caga_i2c_write(0x0F12, 0x03A1); //senHal_pContSenModesRegsArray[70][3] 2 70001508
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[71][0] 2 7000150A
s5k5caga_i2c_write(0x0F12, 0x0651); //senHal_pContSenModesRegsArray[71][1] 2 7000150C
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[71][2] 2 7000150E
s5k5caga_i2c_write(0x0F12, 0x03AE); //senHal_pContSenModesRegsArray[71][3] 2 70001510
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[72][0] 2 70001512
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[72][1] 2 70001514
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[72][2] 2 70001516
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[72][3] 2 70001518
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[73][0] 2 7000151A
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[73][1] 2 7000151C
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[73][2] 2 7000151E
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[73][3] 2 70001520
s5k5caga_i2c_write(0x0F12, 0x0001); //senHal_pContSenModesRegsArray[74][0] 2 70001522
s5k5caga_i2c_write(0x0F12, 0x0001); //senHal_pContSenModesRegsArray[74][1] 2 70001524
s5k5caga_i2c_write(0x0F12, 0x0001); //senHal_pContSenModesRegsArray[74][2] 2 70001526
s5k5caga_i2c_write(0x0F12, 0x0001); //senHal_pContSenModesRegsArray[74][3] 2 70001528
s5k5caga_i2c_write(0x0F12, 0x000F); //senHal_pContSenModesRegsArray[75][0] 2 7000152A
s5k5caga_i2c_write(0x0F12, 0x000F); //senHal_pContSenModesRegsArray[75][1] 2 7000152C
s5k5caga_i2c_write(0x0F12, 0x000F); //senHal_pContSenModesRegsArray[75][2] 2 7000152E
s5k5caga_i2c_write(0x0F12, 0x000F); //senHal_pContSenModesRegsArray[75][3] 2 70001530
s5k5caga_i2c_write(0x0F12, 0x05AD); //senHal_pContSenModesRegsArray[76][0] 2 70001532
s5k5caga_i2c_write(0x0F12, 0x03DE); //senHal_pContSenModesRegsArray[76][1] 2 70001534
s5k5caga_i2c_write(0x0F12, 0x030A); //senHal_pContSenModesRegsArray[76][2] 2 70001536
s5k5caga_i2c_write(0x0F12, 0x021C); //senHal_pContSenModesRegsArray[76][3] 2 70001538
s5k5caga_i2c_write(0x0F12, 0x062F); //senHal_pContSenModesRegsArray[77][0] 2 7000153A
s5k5caga_i2c_write(0x0F12, 0x0460); //senHal_pContSenModesRegsArray[77][1] 2 7000153C
s5k5caga_i2c_write(0x0F12, 0x038C); //senHal_pContSenModesRegsArray[77][2] 2 7000153E
s5k5caga_i2c_write(0x0F12, 0x029E); //senHal_pContSenModesRegsArray[77][3] 2 70001540
s5k5caga_i2c_write(0x0F12, 0x07FC); //senHal_pContSenModesRegsArray[78][0] 2 70001542
s5k5caga_i2c_write(0x0F12, 0x0847); //senHal_pContSenModesRegsArray[78][1] 2 70001544
s5k5caga_i2c_write(0x0F12, 0x0478); //senHal_pContSenModesRegsArray[78][2] 2 70001546
s5k5caga_i2c_write(0x0F12, 0x04C3); //senHal_pContSenModesRegsArray[78][3] 2 70001548
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[79][0] 2 7000154A
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[79][1] 2 7000154C
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[79][2] 2 7000154E
s5k5caga_i2c_write(0x0F12, 0x0000); //senHal_pContSenModesRegsArray[79][3] 2 70001550

s5k5caga_i2c_write(0x002A, 0x12B8); //disable CINTR 0           
s5k5caga_i2c_write(0x0F12, 0x1000);   
//============================================================
// ISP-FE Setting
//============================================================
s5k5caga_i2c_write(0x002A, 0x158A);
s5k5caga_i2c_write(0x0F12, 0xEAF0);
s5k5caga_i2c_write(0x002A, 0x15C6);
s5k5caga_i2c_write(0x0F12, 0x0020);
s5k5caga_i2c_write(0x0F12, 0x0060);
s5k5caga_i2c_write(0x002A, 0x15BC);
s5k5caga_i2c_write(0x0F12, 0x0200); // added by Shy.

 //Analog Offset for MSM
s5k5caga_i2c_write(0x002A, 0x1608); 
s5k5caga_i2c_write(0x0F12, 0x0100); // #gisp_msm_sAnalogOffset[0] 
s5k5caga_i2c_write(0x0F12, 0x0100); // #gisp_msm_sAnalogOffset[1]
s5k5caga_i2c_write(0x0F12, 0x0100); // #gisp_msm_sAnalogOffset[2]
s5k5caga_i2c_write(0x0F12, 0x0100); // #gisp_msm_sAnalogOffset[3]

//============================================================
// ISP-FE Setting end
//============================================================
//================================================================================================
// SET JPEG & SPOOF
//================================================================================================
s5k5caga_i2c_write(0x002A, 0x0454);
s5k5caga_i2c_write(0x0F12, 0x0055);// #REG_TC_BRC_usCaptureQuality // JPEG BRC (BitRateControl) value // 85

//================================================================================================
// SET THUMBNAIL
// # Foramt : RGB565
// # Size: VGA
//================================================================================================
//0F12 0001 // thumbnail enable
//0F12 0140 // Width//320 //640
//0F12 00F0 // Height //240 //480
//0F12 0000 // Thumbnail format : 0RGB565 1 RGB888 2 Full-YUV (0-255)

//================================================================================================
// SET AE
//================================================================================================
// AE target 
s5k5caga_i2c_write(0x002A, 0x0F70);
s5k5caga_i2c_write(0x0F12, 0x003A); // #TVAR_ae_BrAve
// AE mode
s5k5caga_i2c_write(0x002A, 0x0F76);
s5k5caga_i2c_write(0x0F12, 0x0005); //Disable illumination & contrast  // #ae_StatMode
  // AE weight  
s5k5caga_i2c_write(0x002A, 0x0F7E);
s5k5caga_i2c_write(0x0F12, 0x0000);//0101 // #ae_WeightTbl_16_0_
s5k5caga_i2c_write(0x0F12, 0x0000);//0101 // #ae_WeightTbl_16_1_
s5k5caga_i2c_write(0x0F12, 0x0000);//0101 // #ae_WeightTbl_16_2_
s5k5caga_i2c_write(0x0F12, 0x0000);//0101 // #ae_WeightTbl_16_3_
s5k5caga_i2c_write(0x0F12, 0x0101);//0101 // #ae_WeightTbl_16_4_
s5k5caga_i2c_write(0x0F12, 0x0101);//0101 // #ae_WeightTbl_16_5_
s5k5caga_i2c_write(0x0F12, 0x0101);//0101 // #ae_WeightTbl_16_6_
s5k5caga_i2c_write(0x0F12, 0x0101);//0101 // #ae_WeightTbl_16_7_
s5k5caga_i2c_write(0x0F12, 0x0101);//0101 // #ae_WeightTbl_16_8_
s5k5caga_i2c_write(0x0F12, 0x0201);//0303 // #ae_WeightTbl_16_9_
s5k5caga_i2c_write(0x0F12, 0x0102);//0303 // #ae_WeightTbl_16_10
s5k5caga_i2c_write(0x0F12, 0x0101);//0101 // #ae_WeightTbl_16_11
s5k5caga_i2c_write(0x0F12, 0x0101);//0101 // #ae_WeightTbl_16_12
s5k5caga_i2c_write(0x0F12, 0x0202);//0303 // #ae_WeightTbl_16_13
s5k5caga_i2c_write(0x0F12, 0x0202);//0303 // #ae_WeightTbl_16_14
s5k5caga_i2c_write(0x0F12, 0x0101);//0101 // #ae_WeightTbl_16_15
s5k5caga_i2c_write(0x0F12, 0x0101);//0101 // #ae_WeightTbl_16_16
s5k5caga_i2c_write(0x0F12, 0x0202);//0303 // #ae_WeightTbl_16_17
s5k5caga_i2c_write(0x0F12, 0x0202);//0303 // #ae_WeightTbl_16_18
s5k5caga_i2c_write(0x0F12, 0x0101);//0101 // #ae_WeightTbl_16_19
s5k5caga_i2c_write(0x0F12, 0x0201);//0101 // #ae_WeightTbl_16_20
s5k5caga_i2c_write(0x0F12, 0x0202);//0303 // #ae_WeightTbl_16_21
s5k5caga_i2c_write(0x0F12, 0x0202);//0303 // #ae_WeightTbl_16_22
s5k5caga_i2c_write(0x0F12, 0x0102);//0101 // #ae_WeightTbl_16_23
s5k5caga_i2c_write(0x0F12, 0x0201);//0101 // #ae_WeightTbl_16_24
s5k5caga_i2c_write(0x0F12, 0x0202);//0101 // #ae_WeightTbl_16_25
s5k5caga_i2c_write(0x0F12, 0x0202);//0101 // #ae_WeightTbl_16_26
s5k5caga_i2c_write(0x0F12, 0x0102);//0101 // #ae_WeightTbl_16_27
s5k5caga_i2c_write(0x0F12, 0x0101);//0101 // #ae_WeightTbl_16_28
s5k5caga_i2c_write(0x0F12, 0x0101);//0101 // #ae_WeightTbl_16_29
s5k5caga_i2c_write(0x0F12, 0x0101);//0101 // #ae_WeightTbl_16_30
s5k5caga_i2c_write(0x0F12, 0x0101);//0101 // #ae_WeightTbl_16_31

//================================================================================================
// SET FLICKER
//================================================================================================
s5k5caga_i2c_write(0x002A, 0x0C18);
s5k5caga_i2c_write(0x0F12, 0x0001); // 0001: 60Hz start auto / 0000: 50Hz start auto
s5k5caga_i2c_write(0x002A, 0x04D2);
s5k5caga_i2c_write(0x0F12, 0x067F);

//================================================================================================
// SET GAS
//================================================================================================
// GAS alpha
// R, Gr, Gb, B per light source
s5k5caga_i2c_write(0x002A, 0x06CE);
s5k5caga_i2c_write(0x0F12, 0x0130);//00F0  //0100 // #TVAR_ash_GASAlpha[0] // Horizon
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASAlpha[1]
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASAlpha[2]
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASAlpha[3]
s5k5caga_i2c_write(0x0F12, 0x0120);//00E0 // #TVAR_ash_GASAlpha[4] // IncandA
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASAlpha[5]
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASAlpha[6]
s5k5caga_i2c_write(0x0F12, 0x0100); //0120 // #TVAR_ash_GASAlpha[7]
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASAlpha[8] // WW
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASAlpha[9]
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASAlpha[10]
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASAlpha[11]//*<BU5D05950 zhangsheng 20100422 begin*/
s5k5caga_i2c_write(0x0F12, 0x00FA); // #TVAR_ash_GASAlpha[12]// CWF
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASAlpha[13]
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASAlpha[14]
s5k5caga_i2c_write(0x0F12, 0x0120);//00F0 // #TVAR_ash_GASAlpha[15]//*BU5D05950 zhangsheng 20100422 end>*/
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASAlpha[16]// D50
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASAlpha[17]
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASAlpha[18]
s5k5caga_i2c_write(0x0F12, 0x0120);//0100 // #TVAR_ash_GASAlpha[19]
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASAlpha[20]// D65
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASAlpha[21]
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASAlpha[22]
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASAlpha[23]
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASAlpha[24]// D75
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASAlpha[25]
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASAlpha[26]
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASAlpha[27]
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASOutdoorAlpha[0] // Outdoor
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASOutdoorAlpha[1]
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASOutdoorAlpha[2]
s5k5caga_i2c_write(0x0F12, 0x0100); // #TVAR_ash_GASOutdoorAlpha[3]
 // GAS beta
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[0]// Horizon
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[1]
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[2]
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[3]
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[4]// IncandA
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[5]
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[6]
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[7]
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[8]// WW 
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[9]
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[10] 
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[11] 
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[12] // CWF
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[13] 
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[14] 
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[15] 
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[16] // D50
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[17] 
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[18] 
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[19] 
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[20] // D65
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[21] 
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[22] 
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[23] 
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[24] // D75
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[25] 
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[26] 
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASBeta[27] 
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASOutdoorBeta[0] // Outdoor
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASOutdoorBeta[1]
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASOutdoorBeta[2]
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_GASOutdoorBeta[3]
s5k5caga_i2c_write(0x002A, 0x06B4);
s5k5caga_i2c_write(0x0F12, 0x0000); // #wbt_bUseOutdoorASH ON:1 OFF:0

// Parabloic function
s5k5caga_i2c_write(0x002A, 0x075A);
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_bParabolicEstimation
s5k5caga_i2c_write(0x0F12, 0x0400); // #ash_uParabolicCenterX
s5k5caga_i2c_write(0x0F12, 0x0300); // #ash_uParabolicCenterY
s5k5caga_i2c_write(0x0F12, 0x0010); // #ash_uParabolicScalingA
s5k5caga_i2c_write(0x0F12, 0x0011); // #ash_uParabolicScalingB
s5k5caga_i2c_write(0x002A, 0x06C6);
s5k5caga_i2c_write(0x0F12, 0x0100); //ash_CGrasAlphas_0_
s5k5caga_i2c_write(0x0F12, 0x0100); //ash_CGrasAlphas_1_
s5k5caga_i2c_write(0x0F12, 0x0100); //ash_CGrasAlphas_2_
s5k5caga_i2c_write(0x0F12, 0x0100); //ash_CGrasAlphas_3_
s5k5caga_i2c_write(0x002A, 0x0E3C);
s5k5caga_i2c_write(0x0F12, 0x00C0); // #awbb_Alpha_Comp_Mode
s5k5caga_i2c_write(0x002A, 0x074E); 
s5k5caga_i2c_write(0x0F12, 0x0000); // #ash_bLumaMode //use Beta : 0001 not use Beta : 0000

// GAS LUT start address // 7000_347C 
s5k5caga_i2c_write(0x002A, 0x0754);
s5k5caga_i2c_write(0x0F12, 0x347C);
s5k5caga_i2c_write(0x0F12, 0x7000);
             // GAS LUT
s5k5caga_i2c_write(0x002A, 0x347C); //*<BU5D05950 zhangsheng 20100422 begin*/ 
s5k5caga_i2c_write(0x0F12, 0x0164);//01AF // #TVAR_ash_pGAS[0]
s5k5caga_i2c_write(0x0F12, 0x016B);//0179 // #TVAR_ash_pGAS[1]
s5k5caga_i2c_write(0x0F12, 0x013F);//0148 // #TVAR_ash_pGAS[2]
s5k5caga_i2c_write(0x0F12, 0x010B);//0117 // #TVAR_ash_pGAS[3]
s5k5caga_i2c_write(0x0F12, 0x00EF);//00F3 // #TVAR_ash_pGAS[4]
s5k5caga_i2c_write(0x0F12, 0x00DC);//00DB // #TVAR_ash_pGAS[5]
s5k5caga_i2c_write(0x0F12, 0x00D4);//00D2 // #TVAR_ash_pGAS[6]
s5k5caga_i2c_write(0x0F12, 0x00D4);//00D8 // #TVAR_ash_pGAS[7]
s5k5caga_i2c_write(0x0F12, 0x00E1);//00F2 // #TVAR_ash_pGAS[8]
s5k5caga_i2c_write(0x0F12, 0x00FB);//0117 // #TVAR_ash_pGAS[9]
s5k5caga_i2c_write(0x0F12, 0x0127);//0149 // #TVAR_ash_pGAS[10]
s5k5caga_i2c_write(0x0F12, 0x014E);//017B // #TVAR_ash_pGAS[11]
s5k5caga_i2c_write(0x0F12, 0x0146);//01B2 // #TVAR_ash_pGAS[12]
s5k5caga_i2c_write(0x0F12, 0x0157);//0184 // #TVAR_ash_pGAS[13]
s5k5caga_i2c_write(0x0F12, 0x0140);//014F // #TVAR_ash_pGAS[14]
s5k5caga_i2c_write(0x0F12, 0x0103);//0115 // #TVAR_ash_pGAS[15]
s5k5caga_i2c_write(0x0F12, 0x00D5);//00DC // #TVAR_ash_pGAS[16]
s5k5caga_i2c_write(0x0F12, 0x00B5);//00B3 // #TVAR_ash_pGAS[17]
s5k5caga_i2c_write(0x0F12, 0x00A1);//0097 // #TVAR_ash_pGAS[18]
s5k5caga_i2c_write(0x0F12, 0x0097);//008D // #TVAR_ash_pGAS[19]
s5k5caga_i2c_write(0x0F12, 0x009A);//0095 // #TVAR_ash_pGAS[20]
s5k5caga_i2c_write(0x0F12, 0x00AA);//00AE // #TVAR_ash_pGAS[21]
s5k5caga_i2c_write(0x0F12, 0x00C5);//00DA // #TVAR_ash_pGAS[22]
s5k5caga_i2c_write(0x0F12, 0x00F2);//010E // #TVAR_ash_pGAS[23]
s5k5caga_i2c_write(0x0F12, 0x0131);//014B // #TVAR_ash_pGAS[24]
s5k5caga_i2c_write(0x0F12, 0x0142);//0181 // #TVAR_ash_pGAS[25]
s5k5caga_i2c_write(0x0F12, 0x0132);//0161 // #TVAR_ash_pGAS[26]
s5k5caga_i2c_write(0x0F12, 0x0108);//0124 // #TVAR_ash_pGAS[27]
s5k5caga_i2c_write(0x0F12, 0x00CA);//00DF // #TVAR_ash_pGAS[28]
s5k5caga_i2c_write(0x0F12, 0x009B);//00A4 // #TVAR_ash_pGAS[29]
s5k5caga_i2c_write(0x0F12, 0x0079);//0075 // #TVAR_ash_pGAS[30]
s5k5caga_i2c_write(0x0F12, 0x0061);//0058 // #TVAR_ash_pGAS[31]
s5k5caga_i2c_write(0x0F12, 0x0059);//004E // #TVAR_ash_pGAS[32]
s5k5caga_i2c_write(0x0F12, 0x0060);//0056 // #TVAR_ash_pGAS[33]
s5k5caga_i2c_write(0x0F12, 0x0075);//0071 // #TVAR_ash_pGAS[34]
s5k5caga_i2c_write(0x0F12, 0x0094);//009B // #TVAR_ash_pGAS[35]
s5k5caga_i2c_write(0x0F12, 0x00C2);//00D5 // #TVAR_ash_pGAS[36]
s5k5caga_i2c_write(0x0F12, 0x0106);//011C // #TVAR_ash_pGAS[37]
s5k5caga_i2c_write(0x0F12, 0x0137);//015B // #TVAR_ash_pGAS[38]
s5k5caga_i2c_write(0x0F12, 0x0109);//013D // #TVAR_ash_pGAS[39]
s5k5caga_i2c_write(0x0F12, 0x00DA);//00FB // #TVAR_ash_pGAS[40]
s5k5caga_i2c_write(0x0F12, 0x009E);//00B5 // #TVAR_ash_pGAS[41]
s5k5caga_i2c_write(0x0F12, 0x006D);//0079 // #TVAR_ash_pGAS[42]
s5k5caga_i2c_write(0x0F12, 0x0048);//0048 // #TVAR_ash_pGAS[43]
s5k5caga_i2c_write(0x0F12, 0x0030);//002C // #TVAR_ash_pGAS[44]
s5k5caga_i2c_write(0x0F12, 0x0026);//0022 // #TVAR_ash_pGAS[45]
s5k5caga_i2c_write(0x0F12, 0x002D);//002B // #TVAR_ash_pGAS[46]
s5k5caga_i2c_write(0x0F12, 0x0048);//0046 // #TVAR_ash_pGAS[47]
s5k5caga_i2c_write(0x0F12, 0x0072);//006F // #TVAR_ash_pGAS[48]
s5k5caga_i2c_write(0x0F12, 0x00A5);//00AB // #TVAR_ash_pGAS[49]
s5k5caga_i2c_write(0x0F12, 0x00E7);//00F3 // #TVAR_ash_pGAS[50]
s5k5caga_i2c_write(0x0F12, 0x011F);//013A // #TVAR_ash_pGAS[51]
s5k5caga_i2c_write(0x0F12, 0x00F0);//012D // #TVAR_ash_pGAS[52]
s5k5caga_i2c_write(0x0F12, 0x00C0);//00E5 // #TVAR_ash_pGAS[53]
s5k5caga_i2c_write(0x0F12, 0x0082);//009E // #TVAR_ash_pGAS[54]
s5k5caga_i2c_write(0x0F12, 0x004F);//005E // #TVAR_ash_pGAS[55]
s5k5caga_i2c_write(0x0F12, 0x0029);//002E // #TVAR_ash_pGAS[56]
s5k5caga_i2c_write(0x0F12, 0x0012);//0012 // #TVAR_ash_pGAS[57]
s5k5caga_i2c_write(0x0F12, 0x000C);//0008 // #TVAR_ash_pGAS[58]
s5k5caga_i2c_write(0x0F12, 0x0015);//0011 // #TVAR_ash_pGAS[59]
s5k5caga_i2c_write(0x0F12, 0x002D);//002C // #TVAR_ash_pGAS[60]
s5k5caga_i2c_write(0x0F12, 0x005B);//0055 // #TVAR_ash_pGAS[61]
s5k5caga_i2c_write(0x0F12, 0x0091);//0092 // #TVAR_ash_pGAS[62]
s5k5caga_i2c_write(0x0F12, 0x00D5);//00DB // #TVAR_ash_pGAS[63]
s5k5caga_i2c_write(0x0F12, 0x0110);//0128 // #TVAR_ash_pGAS[64]
s5k5caga_i2c_write(0x0F12, 0x00E4);//0124 // #TVAR_ash_pGAS[65]
s5k5caga_i2c_write(0x0F12, 0x00B5);//00DA // #TVAR_ash_pGAS[66]
s5k5caga_i2c_write(0x0F12, 0x0075);//0094 // #TVAR_ash_pGAS[67]
s5k5caga_i2c_write(0x0F12, 0x0042);//0055 // #TVAR_ash_pGAS[68]
s5k5caga_i2c_write(0x0F12, 0x001C);//0026 // #TVAR_ash_pGAS[69]
s5k5caga_i2c_write(0x0F12, 0x0006);//000B // #TVAR_ash_pGAS[70]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 // #TVAR_ash_pGAS[71]
s5k5caga_i2c_write(0x0F12, 0x000A);//0008 // #TVAR_ash_pGAS[72]
s5k5caga_i2c_write(0x0F12, 0x0021);//0022 // #TVAR_ash_pGAS[73]
s5k5caga_i2c_write(0x0F12, 0x0053);//004D // #TVAR_ash_pGAS[74]
s5k5caga_i2c_write(0x0F12, 0x008B);//0087 // #TVAR_ash_pGAS[75]
s5k5caga_i2c_write(0x0F12, 0x00D0);//00D2 // #TVAR_ash_pGAS[76]
s5k5caga_i2c_write(0x0F12, 0x010D);//011F // #TVAR_ash_pGAS[77]
s5k5caga_i2c_write(0x0F12, 0x00E7);//0127 // #TVAR_ash_pGAS[78]
s5k5caga_i2c_write(0x0F12, 0x00B8);//00E0 // #TVAR_ash_pGAS[79]
s5k5caga_i2c_write(0x0F12, 0x0079);//009B // #TVAR_ash_pGAS[80]
s5k5caga_i2c_write(0x0F12, 0x0047);//005D // #TVAR_ash_pGAS[81]
s5k5caga_i2c_write(0x0F12, 0x0021);//002F // #TVAR_ash_pGAS[82]
s5k5caga_i2c_write(0x0F12, 0x000C);//0015 // #TVAR_ash_pGAS[83]
s5k5caga_i2c_write(0x0F12, 0x0004);//0009 // #TVAR_ash_pGAS[84]
s5k5caga_i2c_write(0x0F12, 0x000E);//0012 // #TVAR_ash_pGAS[85]
s5k5caga_i2c_write(0x0F12, 0x002B);//002B // #TVAR_ash_pGAS[86]
s5k5caga_i2c_write(0x0F12, 0x0059);//0056 // #TVAR_ash_pGAS[87]
s5k5caga_i2c_write(0x0F12, 0x0093);//0092 // #TVAR_ash_pGAS[88]
s5k5caga_i2c_write(0x0F12, 0x00DA);//00DB // #TVAR_ash_pGAS[89]
s5k5caga_i2c_write(0x0F12, 0x0114);//0123 // #TVAR_ash_pGAS[90]
s5k5caga_i2c_write(0x0F12, 0x00F9);//013A // #TVAR_ash_pGAS[91]
s5k5caga_i2c_write(0x0F12, 0x00C9);//00F8 // #TVAR_ash_pGAS[92]
s5k5caga_i2c_write(0x0F12, 0x008B);//00B3 // #TVAR_ash_pGAS[93]
s5k5caga_i2c_write(0x0F12, 0x005C);//0078 // #TVAR_ash_pGAS[94]
s5k5caga_i2c_write(0x0F12, 0x0039);//004B // #TVAR_ash_pGAS[95]
s5k5caga_i2c_write(0x0F12, 0x0024);//0030 // #TVAR_ash_pGAS[96]
s5k5caga_i2c_write(0x0F12, 0x001D);//0026 // #TVAR_ash_pGAS[97]
s5k5caga_i2c_write(0x0F12, 0x0028);//002E // #TVAR_ash_pGAS[98]
s5k5caga_i2c_write(0x0F12, 0x0044);//0048 // #TVAR_ash_pGAS[99]
s5k5caga_i2c_write(0x0F12, 0x0072);//0072 // #TVAR_ash_pGAS[100]
s5k5caga_i2c_write(0x0F12, 0x00A9);//00AD // #TVAR_ash_pGAS[101]
s5k5caga_i2c_write(0x0F12, 0x00F0);//00F2 // #TVAR_ash_pGAS[102]
s5k5caga_i2c_write(0x0F12, 0x0126);//0139 // #TVAR_ash_pGAS[103]
s5k5caga_i2c_write(0x0F12, 0x0115);//0153 // #TVAR_ash_pGAS[104]
s5k5caga_i2c_write(0x0F12, 0x00EE);//011A // #TVAR_ash_pGAS[105]
s5k5caga_i2c_write(0x0F12, 0x00AD);//00DB // #TVAR_ash_pGAS[106]
s5k5caga_i2c_write(0x0F12, 0x0081);//00A2 // #TVAR_ash_pGAS[107]
s5k5caga_i2c_write(0x0F12, 0x0061);//0077 // #TVAR_ash_pGAS[108]
s5k5caga_i2c_write(0x0F12, 0x004D);//005D // #TVAR_ash_pGAS[109]
s5k5caga_i2c_write(0x0F12, 0x0049);//0054 // #TVAR_ash_pGAS[110]
s5k5caga_i2c_write(0x0F12, 0x0053);//005D // #TVAR_ash_pGAS[111]
s5k5caga_i2c_write(0x0F12, 0x006F);//0077 // #TVAR_ash_pGAS[112]
s5k5caga_i2c_write(0x0F12, 0x0099);//00A0 // #TVAR_ash_pGAS[113]
s5k5caga_i2c_write(0x0F12, 0x00CF);//00D6 // #TVAR_ash_pGAS[114]
s5k5caga_i2c_write(0x0F12, 0x0118);//011A // #TVAR_ash_pGAS[115]
s5k5caga_i2c_write(0x0F12, 0x0140);//0159 // #TVAR_ash_pGAS[116]
s5k5caga_i2c_write(0x0F12, 0x0136);//0177 // #TVAR_ash_pGAS[117]
s5k5caga_i2c_write(0x0F12, 0x0122);//0141 // #TVAR_ash_pGAS[118]
s5k5caga_i2c_write(0x0F12, 0x00E2);//010F // #TVAR_ash_pGAS[119]
s5k5caga_i2c_write(0x0F12, 0x00B6);//00DE // #TVAR_ash_pGAS[120]
s5k5caga_i2c_write(0x0F12, 0x009A);//00B7 // #TVAR_ash_pGAS[121]
s5k5caga_i2c_write(0x0F12, 0x0089);//00A0 // #TVAR_ash_pGAS[122]
s5k5caga_i2c_write(0x0F12, 0x0086);//0097 // #TVAR_ash_pGAS[123]
s5k5caga_i2c_write(0x0F12, 0x0090);//00A2 // #TVAR_ash_pGAS[124]
s5k5caga_i2c_write(0x0F12, 0x00AA);//00BA // #TVAR_ash_pGAS[125]
s5k5caga_i2c_write(0x0F12, 0x00D1);//00DF // #TVAR_ash_pGAS[126]
s5k5caga_i2c_write(0x0F12, 0x0108);//0110 // #TVAR_ash_pGAS[127]
s5k5caga_i2c_write(0x0F12, 0x0150);//0146 // #TVAR_ash_pGAS[128]
s5k5caga_i2c_write(0x0F12, 0x015D);//017C // #TVAR_ash_pGAS[129]
s5k5caga_i2c_write(0x0F12, 0x0141);//01B1 // #TVAR_ash_pGAS[130]
s5k5caga_i2c_write(0x0F12, 0x0150);//0169 // #TVAR_ash_pGAS[131]
s5k5caga_i2c_write(0x0F12, 0x011A);//013C // #TVAR_ash_pGAS[132]
s5k5caga_i2c_write(0x0F12, 0x00EF);//0112 // #TVAR_ash_pGAS[133]
s5k5caga_i2c_write(0x0F12, 0x00D5);//00F2 // #TVAR_ash_pGAS[134]
s5k5caga_i2c_write(0x0F12, 0x00C9);//00E0 // #TVAR_ash_pGAS[135]
s5k5caga_i2c_write(0x0F12, 0x00C6);//00DC // #TVAR_ash_pGAS[136]
s5k5caga_i2c_write(0x0F12, 0x00D0);//00E5 // #TVAR_ash_pGAS[137]
s5k5caga_i2c_write(0x0F12, 0x00E6);//00FE // #TVAR_ash_pGAS[138]
s5k5caga_i2c_write(0x0F12, 0x010D);//011D // #TVAR_ash_pGAS[139]
s5k5caga_i2c_write(0x0F12, 0x0142);//014B // #TVAR_ash_pGAS[140]
s5k5caga_i2c_write(0x0F12, 0x017A);//017A // #TVAR_ash_pGAS[141]
s5k5caga_i2c_write(0x0F12, 0x016D);//01AE // #TVAR_ash_pGAS[142]
s5k5caga_i2c_write(0x0F12, 0x012E);//017A // #TVAR_ash_pGAS[143]
s5k5caga_i2c_write(0x0F12, 0x012A);//0149 // #TVAR_ash_pGAS[144]
s5k5caga_i2c_write(0x0F12, 0x0100);//0122 // #TVAR_ash_pGAS[145]
s5k5caga_i2c_write(0x0F12, 0x00D3);//00F6 // #TVAR_ash_pGAS[146]
s5k5caga_i2c_write(0x0F12, 0x00B7);//00D9 // #TVAR_ash_pGAS[147]
s5k5caga_i2c_write(0x0F12, 0x00A5);//00C0 // #TVAR_ash_pGAS[148]
s5k5caga_i2c_write(0x0F12, 0x009F);//00B7 // #TVAR_ash_pGAS[149]
s5k5caga_i2c_write(0x0F12, 0x00A0);//00BA // #TVAR_ash_pGAS[150]
s5k5caga_i2c_write(0x0F12, 0x00AB);//00CE // #TVAR_ash_pGAS[151]
s5k5caga_i2c_write(0x0F12, 0x00C2);//00EF // #TVAR_ash_pGAS[152]
s5k5caga_i2c_write(0x0F12, 0x00E6);//011B // #TVAR_ash_pGAS[153]
s5k5caga_i2c_write(0x0F12, 0x0108);//0149 // #TVAR_ash_pGAS[154]
s5k5caga_i2c_write(0x0F12, 0x010B);//0176 // #TVAR_ash_pGAS[155]
s5k5caga_i2c_write(0x0F12, 0x0125);//0150 // #TVAR_ash_pGAS[156]
s5k5caga_i2c_write(0x0F12, 0x0105);//0121 // #TVAR_ash_pGAS[157]
s5k5caga_i2c_write(0x0F12, 0x00D0);//00F2 // #TVAR_ash_pGAS[158]
s5k5caga_i2c_write(0x0F12, 0x00A7);//00C2 // #TVAR_ash_pGAS[159]
s5k5caga_i2c_write(0x0F12, 0x008B);//009E // #TVAR_ash_pGAS[160]
s5k5caga_i2c_write(0x0F12, 0x0078);//0087 // #TVAR_ash_pGAS[161]
s5k5caga_i2c_write(0x0F12, 0x0071);//007D // #TVAR_ash_pGAS[162]
s5k5caga_i2c_write(0x0F12, 0x0074);//0080 // #TVAR_ash_pGAS[163]
s5k5caga_i2c_write(0x0F12, 0x0081);//0095 // #TVAR_ash_pGAS[164]
s5k5caga_i2c_write(0x0F12, 0x0097);//00B9 // #TVAR_ash_pGAS[165]
s5k5caga_i2c_write(0x0F12, 0x00BC);//00E4 // #TVAR_ash_pGAS[166]
s5k5caga_i2c_write(0x0F12, 0x00F2);//0119 // #TVAR_ash_pGAS[167]
s5k5caga_i2c_write(0x0F12, 0x0107);//014C // #TVAR_ash_pGAS[168]
s5k5caga_i2c_write(0x0F12, 0x0108);//0130 // #TVAR_ash_pGAS[169]
s5k5caga_i2c_write(0x0F12, 0x00D9);//00FA // #TVAR_ash_pGAS[170]
s5k5caga_i2c_write(0x0F12, 0x00A3);//00C2 // #TVAR_ash_pGAS[171]
s5k5caga_i2c_write(0x0F12, 0x007D);//0092 // #TVAR_ash_pGAS[172]
s5k5caga_i2c_write(0x0F12, 0x005E);//006B // #TVAR_ash_pGAS[173]
s5k5caga_i2c_write(0x0F12, 0x004A);//0050 // #TVAR_ash_pGAS[174]
s5k5caga_i2c_write(0x0F12, 0x0043);//0046 // #TVAR_ash_pGAS[175]
s5k5caga_i2c_write(0x0F12, 0x0048);//004C // #TVAR_ash_pGAS[176]
s5k5caga_i2c_write(0x0F12, 0x005A);//0060 // #TVAR_ash_pGAS[177]
s5k5caga_i2c_write(0x0F12, 0x0074);//0084 // #TVAR_ash_pGAS[178]
s5k5caga_i2c_write(0x0F12, 0x009A);//00B5 // #TVAR_ash_pGAS[179]
s5k5caga_i2c_write(0x0F12, 0x00D1);//00F1 // #TVAR_ash_pGAS[180]
s5k5caga_i2c_write(0x0F12, 0x00FE);//0129 // #TVAR_ash_pGAS[181]
s5k5caga_i2c_write(0x0F12, 0x00E7);//0110 // #TVAR_ash_pGAS[182]
s5k5caga_i2c_write(0x0F12, 0x00B4);//00D7 // #TVAR_ash_pGAS[183]
s5k5caga_i2c_write(0x0F12, 0x0083);//009D // #TVAR_ash_pGAS[184]
s5k5caga_i2c_write(0x0F12, 0x0058);//006C // #TVAR_ash_pGAS[185]
s5k5caga_i2c_write(0x0F12, 0x0037);//0044 // #TVAR_ash_pGAS[186]
s5k5caga_i2c_write(0x0F12, 0x0022);//0029 // #TVAR_ash_pGAS[187]
s5k5caga_i2c_write(0x0F12, 0x001A);//001F // #TVAR_ash_pGAS[188]
s5k5caga_i2c_write(0x0F12, 0x0022);//0025 // #TVAR_ash_pGAS[189]
s5k5caga_i2c_write(0x0F12, 0x0039);//003B // #TVAR_ash_pGAS[190]
s5k5caga_i2c_write(0x0F12, 0x0059);//005E // #TVAR_ash_pGAS[191]
s5k5caga_i2c_write(0x0F12, 0x0083);//0091 // #TVAR_ash_pGAS[192]
s5k5caga_i2c_write(0x0F12, 0x00BA);//00CE // #TVAR_ash_pGAS[193]
s5k5caga_i2c_write(0x0F12, 0x00ED);//010D // #TVAR_ash_pGAS[194]
s5k5caga_i2c_write(0x0F12, 0x00D1);//0103 // #TVAR_ash_pGAS[195]
s5k5caga_i2c_write(0x0F12, 0x00A1);//00C2 // #TVAR_ash_pGAS[196]
s5k5caga_i2c_write(0x0F12, 0x006C);//0089 // #TVAR_ash_pGAS[197]
s5k5caga_i2c_write(0x0F12, 0x0041);//0054 // #TVAR_ash_pGAS[198]
s5k5caga_i2c_write(0x0F12, 0x0020);//002D // #TVAR_ash_pGAS[199]
s5k5caga_i2c_write(0x0F12, 0x000C);//0012 // #TVAR_ash_pGAS[200]
s5k5caga_i2c_write(0x0F12, 0x0009);//0007 // #TVAR_ash_pGAS[201]
s5k5caga_i2c_write(0x0F12, 0x0012);//000E // #TVAR_ash_pGAS[202]
s5k5caga_i2c_write(0x0F12, 0x0026);//0025 // #TVAR_ash_pGAS[203]
s5k5caga_i2c_write(0x0F12, 0x004A);//004A // #TVAR_ash_pGAS[204]
s5k5caga_i2c_write(0x0F12, 0x0074);//007D // #TVAR_ash_pGAS[205]
s5k5caga_i2c_write(0x0F12, 0x00A9);//00BA // #TVAR_ash_pGAS[206]
s5k5caga_i2c_write(0x0F12, 0x00E0);//00FD // #TVAR_ash_pGAS[207]
s5k5caga_i2c_write(0x0F12, 0x00C7);//00F9 // #TVAR_ash_pGAS[208]
s5k5caga_i2c_write(0x0F12, 0x0097);//00B8 // #TVAR_ash_pGAS[209]
s5k5caga_i2c_write(0x0F12, 0x0060);//007F // #TVAR_ash_pGAS[210]
s5k5caga_i2c_write(0x0F12, 0x0037);//004B // #TVAR_ash_pGAS[211]
s5k5caga_i2c_write(0x0F12, 0x0016);//0025 // #TVAR_ash_pGAS[212]
s5k5caga_i2c_write(0x0F12, 0x0003);//000B // #TVAR_ash_pGAS[213]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 // #TVAR_ash_pGAS[214]
s5k5caga_i2c_write(0x0F12, 0x000B);//0006 // #TVAR_ash_pGAS[215]
s5k5caga_i2c_write(0x0F12, 0x001E);//001E // #TVAR_ash_pGAS[216]
s5k5caga_i2c_write(0x0F12, 0x0045);//0043 // #TVAR_ash_pGAS[217]
s5k5caga_i2c_write(0x0F12, 0x0070);//0076 // #TVAR_ash_pGAS[218]
s5k5caga_i2c_write(0x0F12, 0x00A8);//00B4 // #TVAR_ash_pGAS[219]
s5k5caga_i2c_write(0x0F12, 0x00DC);//00F6 // #TVAR_ash_pGAS[220]
s5k5caga_i2c_write(0x0F12, 0x00C7);//00FA // #TVAR_ash_pGAS[221]
s5k5caga_i2c_write(0x0F12, 0x009A);//00BC // #TVAR_ash_pGAS[222]
s5k5caga_i2c_write(0x0F12, 0x0064);//0083 // #TVAR_ash_pGAS[223]
s5k5caga_i2c_write(0x0F12, 0x003B);//0051 // #TVAR_ash_pGAS[224]
s5k5caga_i2c_write(0x0F12, 0x001B);//002B // #TVAR_ash_pGAS[225]
s5k5caga_i2c_write(0x0F12, 0x0009);//0012 // #TVAR_ash_pGAS[226]
s5k5caga_i2c_write(0x0F12, 0x0004);//0008 // #TVAR_ash_pGAS[227]
s5k5caga_i2c_write(0x0F12, 0x000E);//000E // #TVAR_ash_pGAS[228]
s5k5caga_i2c_write(0x0F12, 0x0028);//0026 // #TVAR_ash_pGAS[229]
s5k5caga_i2c_write(0x0F12, 0x004C);//004D // #TVAR_ash_pGAS[230]
s5k5caga_i2c_write(0x0F12, 0x0078);//007F // #TVAR_ash_pGAS[231]
s5k5caga_i2c_write(0x0F12, 0x00B0);//00BC // #TVAR_ash_pGAS[232]
s5k5caga_i2c_write(0x0F12, 0x00E5);//00FD // #TVAR_ash_pGAS[233]
s5k5caga_i2c_write(0x0F12, 0x00D6);//010A // #TVAR_ash_pGAS[234]
s5k5caga_i2c_write(0x0F12, 0x00A8);//00CD // #TVAR_ash_pGAS[235]
s5k5caga_i2c_write(0x0F12, 0x0073);//0094 // #TVAR_ash_pGAS[236]
s5k5caga_i2c_write(0x0F12, 0x004C);//0065 // #TVAR_ash_pGAS[237]
s5k5caga_i2c_write(0x0F12, 0x002F);//0040 // #TVAR_ash_pGAS[238]
s5k5caga_i2c_write(0x0F12, 0x001C);//0028 // #TVAR_ash_pGAS[239]
s5k5caga_i2c_write(0x0F12, 0x001A);//0020 // #TVAR_ash_pGAS[240]
s5k5caga_i2c_write(0x0F12, 0x0024);//0027 // #TVAR_ash_pGAS[241]
s5k5caga_i2c_write(0x0F12, 0x003D);//003D // #TVAR_ash_pGAS[242]
s5k5caga_i2c_write(0x0F12, 0x0060);//0065 // #TVAR_ash_pGAS[243]
s5k5caga_i2c_write(0x0F12, 0x008B);//0095 // #TVAR_ash_pGAS[244]
s5k5caga_i2c_write(0x0F12, 0x00C4);//00D1 // #TVAR_ash_pGAS[245]
s5k5caga_i2c_write(0x0F12, 0x00F5);//0110 // #TVAR_ash_pGAS[246]
s5k5caga_i2c_write(0x0F12, 0x00EF);//011F // #TVAR_ash_pGAS[247]
s5k5caga_i2c_write(0x0F12, 0x00C6);//00E9 // #TVAR_ash_pGAS[248]
s5k5caga_i2c_write(0x0F12, 0x008F);//00B4 // #TVAR_ash_pGAS[249]
s5k5caga_i2c_write(0x0F12, 0x006B);//0085 // #TVAR_ash_pGAS[250]
s5k5caga_i2c_write(0x0F12, 0x004F);//0062 // #TVAR_ash_pGAS[251]
s5k5caga_i2c_write(0x0F12, 0x0040);//004C // #TVAR_ash_pGAS[252]
s5k5caga_i2c_write(0x0F12, 0x003E);//0044 // #TVAR_ash_pGAS[253]
s5k5caga_i2c_write(0x0F12, 0x0048);//004D // #TVAR_ash_pGAS[254]
s5k5caga_i2c_write(0x0F12, 0x005F);//0065 // #TVAR_ash_pGAS[255]
s5k5caga_i2c_write(0x0F12, 0x0080);//0089 // #TVAR_ash_pGAS[256]
s5k5caga_i2c_write(0x0F12, 0x00A9);//00B7 // #TVAR_ash_pGAS[257]
s5k5caga_i2c_write(0x0F12, 0x00E5);//00F2 // #TVAR_ash_pGAS[258]
s5k5caga_i2c_write(0x0F12, 0x010D);//012E // #TVAR_ash_pGAS[259]
s5k5caga_i2c_write(0x0F12, 0x0109);//013E // #TVAR_ash_pGAS[260]
s5k5caga_i2c_write(0x0F12, 0x00F2);//0108 // #TVAR_ash_pGAS[261]
s5k5caga_i2c_write(0x0F12, 0x00B9);//00DD // #TVAR_ash_pGAS[262]
s5k5caga_i2c_write(0x0F12, 0x0094);//00B4 // #TVAR_ash_pGAS[263]
s5k5caga_i2c_write(0x0F12, 0x007F);//0094 // #TVAR_ash_pGAS[264]
s5k5caga_i2c_write(0x0F12, 0x0071);//0083 // #TVAR_ash_pGAS[265]
s5k5caga_i2c_write(0x0F12, 0x0071);//007B // #TVAR_ash_pGAS[266]
s5k5caga_i2c_write(0x0F12, 0x007B);//0085 // #TVAR_ash_pGAS[267]
s5k5caga_i2c_write(0x0F12, 0x0090);//009C // #TVAR_ash_pGAS[268]
s5k5caga_i2c_write(0x0F12, 0x00AF);//00BD // #TVAR_ash_pGAS[269]
s5k5caga_i2c_write(0x0F12, 0x00D8);//00E7 // #TVAR_ash_pGAS[270]
s5k5caga_i2c_write(0x0F12, 0x0114);//0115 // #TVAR_ash_pGAS[271]
s5k5caga_i2c_write(0x0F12, 0x0125);//0146 // #TVAR_ash_pGAS[272]
s5k5caga_i2c_write(0x0F12, 0x0113);//016F // #TVAR_ash_pGAS[273]
s5k5caga_i2c_write(0x0F12, 0x011A);//0129 // #TVAR_ash_pGAS[274]
s5k5caga_i2c_write(0x0F12, 0x00EA);//0101 // #TVAR_ash_pGAS[275]
s5k5caga_i2c_write(0x0F12, 0x00C3);//00DC // #TVAR_ash_pGAS[276]
s5k5caga_i2c_write(0x0F12, 0x00AF);//00C3 // #TVAR_ash_pGAS[277]
s5k5caga_i2c_write(0x0F12, 0x00A4);//00B2 // #TVAR_ash_pGAS[278]
s5k5caga_i2c_write(0x0F12, 0x00A6);//00B2 // #TVAR_ash_pGAS[279]
s5k5caga_i2c_write(0x0F12, 0x00B1);//00B7 // #TVAR_ash_pGAS[280]
s5k5caga_i2c_write(0x0F12, 0x00C5);//00D0 // #TVAR_ash_pGAS[281]
s5k5caga_i2c_write(0x0F12, 0x00E4);//00EF // #TVAR_ash_pGAS[282]
s5k5caga_i2c_write(0x0F12, 0x010E);//0119 // #TVAR_ash_pGAS[283]
s5k5caga_i2c_write(0x0F12, 0x013C);//0143 // #TVAR_ash_pGAS[284]
s5k5caga_i2c_write(0x0F12, 0x0134);//016E // #TVAR_ash_pGAS[285]
s5k5caga_i2c_write(0x0F12, 0x0112);//0163 // #TVAR_ash_pGAS[286]
s5k5caga_i2c_write(0x0F12, 0x0111);//012D // #TVAR_ash_pGAS[287]
s5k5caga_i2c_write(0x0F12, 0x00E8);//0108 // #TVAR_ash_pGAS[288]
s5k5caga_i2c_write(0x0F12, 0x00BC);//00E1 // #TVAR_ash_pGAS[289]
s5k5caga_i2c_write(0x0F12, 0x00A6);//00C8 // #TVAR_ash_pGAS[290]
s5k5caga_i2c_write(0x0F12, 0x009A);//00B9 // #TVAR_ash_pGAS[291]
s5k5caga_i2c_write(0x0F12, 0x0099);//00B8 // #TVAR_ash_pGAS[292]
s5k5caga_i2c_write(0x0F12, 0x00A1);//00C3 // #TVAR_ash_pGAS[293]
s5k5caga_i2c_write(0x0F12, 0x00B2);//00DD // #TVAR_ash_pGAS[294]
s5k5caga_i2c_write(0x0F12, 0x00CD);//0102 // #TVAR_ash_pGAS[295]
s5k5caga_i2c_write(0x0F12, 0x00F7);//0130 // #TVAR_ash_pGAS[296]
s5k5caga_i2c_write(0x0F12, 0x011B);//015F // #TVAR_ash_pGAS[297]
s5k5caga_i2c_write(0x0F12, 0x0118);//0192 // #TVAR_ash_pGAS[298]
s5k5caga_i2c_write(0x0F12, 0x010C);//013A // #TVAR_ash_pGAS[299]
s5k5caga_i2c_write(0x0F12, 0x00EF);//0106 // #TVAR_ash_pGAS[300]
s5k5caga_i2c_write(0x0F12, 0x00BE);//00D7 // #TVAR_ash_pGAS[301]
s5k5caga_i2c_write(0x0F12, 0x0097);//00AF // #TVAR_ash_pGAS[302]
s5k5caga_i2c_write(0x0F12, 0x007F);//0092 // #TVAR_ash_pGAS[303]
s5k5caga_i2c_write(0x0F12, 0x0070);//007E // #TVAR_ash_pGAS[304]
s5k5caga_i2c_write(0x0F12, 0x006E);//007B // #TVAR_ash_pGAS[305]
s5k5caga_i2c_write(0x0F12, 0x0076);//0084 // #TVAR_ash_pGAS[306]
s5k5caga_i2c_write(0x0F12, 0x008A);//009D // #TVAR_ash_pGAS[307]
s5k5caga_i2c_write(0x0F12, 0x00A3);//00C5 // #TVAR_ash_pGAS[308]
s5k5caga_i2c_write(0x0F12, 0x00CE);//00F4 // #TVAR_ash_pGAS[309]
s5k5caga_i2c_write(0x0F12, 0x0106);//012B // #TVAR_ash_pGAS[310]
s5k5caga_i2c_write(0x0F12, 0x0118);//0161 // #TVAR_ash_pGAS[311]
s5k5caga_i2c_write(0x0F12, 0x00F5);//011C // #TVAR_ash_pGAS[312]
s5k5caga_i2c_write(0x0F12, 0x00C7);//00E3 // #TVAR_ash_pGAS[313]
s5k5caga_i2c_write(0x0F12, 0x0096);//00AC // #TVAR_ash_pGAS[314]
s5k5caga_i2c_write(0x0F12, 0x0072);//0082 // #TVAR_ash_pGAS[315]
s5k5caga_i2c_write(0x0F12, 0x0057);//005F // #TVAR_ash_pGAS[316]
s5k5caga_i2c_write(0x0F12, 0x0045);//0049 // #TVAR_ash_pGAS[317]
s5k5caga_i2c_write(0x0F12, 0x0042);//0044 // #TVAR_ash_pGAS[318]
s5k5caga_i2c_write(0x0F12, 0x004A);//004E // #TVAR_ash_pGAS[319]
s5k5caga_i2c_write(0x0F12, 0x0062);//0068 // #TVAR_ash_pGAS[320]
s5k5caga_i2c_write(0x0F12, 0x007F);//008F // #TVAR_ash_pGAS[321]
s5k5caga_i2c_write(0x0F12, 0x00A9);//00C1 // #TVAR_ash_pGAS[322]
s5k5caga_i2c_write(0x0F12, 0x00E1);//00FE // #TVAR_ash_pGAS[323]
s5k5caga_i2c_write(0x0F12, 0x0110);//013A // #TVAR_ash_pGAS[324]
s5k5caga_i2c_write(0x0F12, 0x00D7);//0101 // #TVAR_ash_pGAS[325]
s5k5caga_i2c_write(0x0F12, 0x00AA);//00C5 // #TVAR_ash_pGAS[326]
s5k5caga_i2c_write(0x0F12, 0x0079);//008E // #TVAR_ash_pGAS[327]
s5k5caga_i2c_write(0x0F12, 0x0052);//0060 // #TVAR_ash_pGAS[328]
s5k5caga_i2c_write(0x0F12, 0x0034);//003C // #TVAR_ash_pGAS[329]
s5k5caga_i2c_write(0x0F12, 0x0020);//0025 // #TVAR_ash_pGAS[330]
s5k5caga_i2c_write(0x0F12, 0x0019);//001D // #TVAR_ash_pGAS[331]
s5k5caga_i2c_write(0x0F12, 0x0024);//0027 // #TVAR_ash_pGAS[332]
s5k5caga_i2c_write(0x0F12, 0x003F);//0040 // #TVAR_ash_pGAS[333]
s5k5caga_i2c_write(0x0F12, 0x0062);//0067 // #TVAR_ash_pGAS[334]
s5k5caga_i2c_write(0x0F12, 0x008F);//009B // #TVAR_ash_pGAS[335]
s5k5caga_i2c_write(0x0F12, 0x00C7);//00D9 // #TVAR_ash_pGAS[336]
s5k5caga_i2c_write(0x0F12, 0x00FA);//011A // #TVAR_ash_pGAS[337]
s5k5caga_i2c_write(0x0F12, 0x00C7);//00F7 // #TVAR_ash_pGAS[338]
s5k5caga_i2c_write(0x0F12, 0x009A);//00B9 // #TVAR_ash_pGAS[339]
s5k5caga_i2c_write(0x0F12, 0x0067);//0081 // #TVAR_ash_pGAS[340]
s5k5caga_i2c_write(0x0F12, 0x003F);//004F // #TVAR_ash_pGAS[341]
s5k5caga_i2c_write(0x0F12, 0x001F);//0029 // #TVAR_ash_pGAS[342]
s5k5caga_i2c_write(0x0F12, 0x000C);//0010 // #TVAR_ash_pGAS[343]
s5k5caga_i2c_write(0x0F12, 0x0009);//0006 // #TVAR_ash_pGAS[344]
s5k5caga_i2c_write(0x0F12, 0x0013);//000F // #TVAR_ash_pGAS[345]
s5k5caga_i2c_write(0x0F12, 0x002A);//0029 // #TVAR_ash_pGAS[346]
s5k5caga_i2c_write(0x0F12, 0x004F);//0050 // #TVAR_ash_pGAS[347]
s5k5caga_i2c_write(0x0F12, 0x007C);//0083 // #TVAR_ash_pGAS[348]
s5k5caga_i2c_write(0x0F12, 0x00B2);//00C2 // #TVAR_ash_pGAS[349]
s5k5caga_i2c_write(0x0F12, 0x00E8);//0104 // #TVAR_ash_pGAS[350]
s5k5caga_i2c_write(0x0F12, 0x00C3);//00F6 // #TVAR_ash_pGAS[351]
s5k5caga_i2c_write(0x0F12, 0x0095);//00B5 // #TVAR_ash_pGAS[352]
s5k5caga_i2c_write(0x0F12, 0x0061);//007E // #TVAR_ash_pGAS[353]
s5k5caga_i2c_write(0x0F12, 0x0039);//004A // #TVAR_ash_pGAS[354]
s5k5caga_i2c_write(0x0F12, 0x0018);//0025 // #TVAR_ash_pGAS[355]
s5k5caga_i2c_write(0x0F12, 0x0004);//000B // #TVAR_ash_pGAS[356]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 // #TVAR_ash_pGAS[357]
s5k5caga_i2c_write(0x0F12, 0x000B);//0006 // #TVAR_ash_pGAS[358]
s5k5caga_i2c_write(0x0F12, 0x0020);//001F // #TVAR_ash_pGAS[359]
s5k5caga_i2c_write(0x0F12, 0x0047);//0045 // #TVAR_ash_pGAS[360]
s5k5caga_i2c_write(0x0F12, 0x0074);//0078 // #TVAR_ash_pGAS[361]
s5k5caga_i2c_write(0x0F12, 0x00A9);//00B6 // #TVAR_ash_pGAS[362]
s5k5caga_i2c_write(0x0F12, 0x00DF);//00FB // #TVAR_ash_pGAS[363]
s5k5caga_i2c_write(0x0F12, 0x00C9);//00FC // #TVAR_ash_pGAS[364]
s5k5caga_i2c_write(0x0F12, 0x009D);//00BE // #TVAR_ash_pGAS[365]
s5k5caga_i2c_write(0x0F12, 0x0069);//0087 // #TVAR_ash_pGAS[366]
s5k5caga_i2c_write(0x0F12, 0x0041);//0055 // #TVAR_ash_pGAS[367]
s5k5caga_i2c_write(0x0F12, 0x001F);//002E // #TVAR_ash_pGAS[368]
s5k5caga_i2c_write(0x0F12, 0x000B);//0014 // #TVAR_ash_pGAS[369]
s5k5caga_i2c_write(0x0F12, 0x0005);//0008 // #TVAR_ash_pGAS[370]
s5k5caga_i2c_write(0x0F12, 0x000E);//000E // #TVAR_ash_pGAS[371]
s5k5caga_i2c_write(0x0F12, 0x0026);//0025 // #TVAR_ash_pGAS[372]
s5k5caga_i2c_write(0x0F12, 0x004B);//004A // #TVAR_ash_pGAS[373]
s5k5caga_i2c_write(0x0F12, 0x0076);//007D // #TVAR_ash_pGAS[374]
s5k5caga_i2c_write(0x0F12, 0x00AE);//00B9 // #TVAR_ash_pGAS[375]
s5k5caga_i2c_write(0x0F12, 0x00E2);//00FB // #TVAR_ash_pGAS[376]
s5k5caga_i2c_write(0x0F12, 0x00DD);//0110 // #TVAR_ash_pGAS[377]
s5k5caga_i2c_write(0x0F12, 0x00B2);//00D7 // #TVAR_ash_pGAS[378]
s5k5caga_i2c_write(0x0F12, 0x007D);//009E // #TVAR_ash_pGAS[379]
s5k5caga_i2c_write(0x0F12, 0x0056);//006E // #TVAR_ash_pGAS[380]
s5k5caga_i2c_write(0x0F12, 0x0035);//0046 // #TVAR_ash_pGAS[381]
s5k5caga_i2c_write(0x0F12, 0x0020);//002C // #TVAR_ash_pGAS[382]
s5k5caga_i2c_write(0x0F12, 0x001A);//0021 // #TVAR_ash_pGAS[383]
s5k5caga_i2c_write(0x0F12, 0x0023);//0026 // #TVAR_ash_pGAS[384]
s5k5caga_i2c_write(0x0F12, 0x0039);//003B // #TVAR_ash_pGAS[385]
s5k5caga_i2c_write(0x0F12, 0x005A);//0060 // #TVAR_ash_pGAS[386]
s5k5caga_i2c_write(0x0F12, 0x0084);//008F // #TVAR_ash_pGAS[387]
s5k5caga_i2c_write(0x0F12, 0x00B9);//00C9 // #TVAR_ash_pGAS[388]
s5k5caga_i2c_write(0x0F12, 0x00ED);//0109 // #TVAR_ash_pGAS[389]
s5k5caga_i2c_write(0x0F12, 0x00FB);//012C // #TVAR_ash_pGAS[390]
s5k5caga_i2c_write(0x0F12, 0x00D3);//00F7 // #TVAR_ash_pGAS[391]
s5k5caga_i2c_write(0x0F12, 0x009C);//00C1 // #TVAR_ash_pGAS[392]
s5k5caga_i2c_write(0x0F12, 0x0078);//0092 // #TVAR_ash_pGAS[393]
s5k5caga_i2c_write(0x0F12, 0x005B);//006C // #TVAR_ash_pGAS[394]
s5k5caga_i2c_write(0x0F12, 0x0046);//0052 // #TVAR_ash_pGAS[395]
s5k5caga_i2c_write(0x0F12, 0x003F);//0046 // #TVAR_ash_pGAS[396]
s5k5caga_i2c_write(0x0F12, 0x0046);//004C // #TVAR_ash_pGAS[397]
s5k5caga_i2c_write(0x0F12, 0x005A);//0061 // #TVAR_ash_pGAS[398]
s5k5caga_i2c_write(0x0F12, 0x0077);//0082 // #TVAR_ash_pGAS[399]
s5k5caga_i2c_write(0x0F12, 0x009E);//00AE // #TVAR_ash_pGAS[400]
s5k5caga_i2c_write(0x0F12, 0x00D6);//00E6 // #TVAR_ash_pGAS[401]
s5k5caga_i2c_write(0x0F12, 0x0103);//0122 // #TVAR_ash_pGAS[402]
s5k5caga_i2c_write(0x0F12, 0x0119);//014A // #TVAR_ash_pGAS[403]
s5k5caga_i2c_write(0x0F12, 0x0102);//0119 // #TVAR_ash_pGAS[404]
s5k5caga_i2c_write(0x0F12, 0x00CA);//00EE // #TVAR_ash_pGAS[405]
s5k5caga_i2c_write(0x0F12, 0x00A4);//00C4 // #TVAR_ash_pGAS[406]
s5k5caga_i2c_write(0x0F12, 0x008B);//009F // #TVAR_ash_pGAS[407]
s5k5caga_i2c_write(0x0F12, 0x0078);//0089 // #TVAR_ash_pGAS[408]
s5k5caga_i2c_write(0x0F12, 0x0072);//007C // #TVAR_ash_pGAS[409]
s5k5caga_i2c_write(0x0F12, 0x0076);//0082 // #TVAR_ash_pGAS[410]
s5k5caga_i2c_write(0x0F12, 0x0088);//0095 // #TVAR_ash_pGAS[411]
s5k5caga_i2c_write(0x0F12, 0x00A2);//00B2 // #TVAR_ash_pGAS[412]
s5k5caga_i2c_write(0x0F12, 0x00C9);//00DA // #TVAR_ash_pGAS[413]
s5k5caga_i2c_write(0x0F12, 0x0100);//0105 // #TVAR_ash_pGAS[414]
s5k5caga_i2c_write(0x0F12, 0x0117);//0134 // #TVAR_ash_pGAS[415]
s5k5caga_i2c_write(0x0F12, 0x0127);//017A // #TVAR_ash_pGAS[416]
s5k5caga_i2c_write(0x0F12, 0x012D);//013A // #TVAR_ash_pGAS[417]
s5k5caga_i2c_write(0x0F12, 0x00FE);//0112 // #TVAR_ash_pGAS[418]
s5k5caga_i2c_write(0x0F12, 0x00D8);//00ED // #TVAR_ash_pGAS[419]
s5k5caga_i2c_write(0x0F12, 0x00BE);//00CF // #TVAR_ash_pGAS[420]
s5k5caga_i2c_write(0x0F12, 0x00B0);//00B9 // #TVAR_ash_pGAS[421]
s5k5caga_i2c_write(0x0F12, 0x00A8);//00B3 // #TVAR_ash_pGAS[422]
s5k5caga_i2c_write(0x0F12, 0x00AF);//00B4 // #TVAR_ash_pGAS[423]
s5k5caga_i2c_write(0x0F12, 0x00BB);//00C6 // #TVAR_ash_pGAS[424]
s5k5caga_i2c_write(0x0F12, 0x00D5);//00E1 // #TVAR_ash_pGAS[425]
s5k5caga_i2c_write(0x0F12, 0x00FC);//0108 // #TVAR_ash_pGAS[426]
s5k5caga_i2c_write(0x0F12, 0x0126);//012F // #TVAR_ash_pGAS[427]
s5k5caga_i2c_write(0x0F12, 0x0125);//0155 // #TVAR_ash_pGAS[428]
s5k5caga_i2c_write(0x0F12, 0x00DF);//013E // #TVAR_ash_pGAS[429]
s5k5caga_i2c_write(0x0F12, 0x00EC);//010F // #TVAR_ash_pGAS[430]
s5k5caga_i2c_write(0x0F12, 0x00C9);//00E8 // #TVAR_ash_pGAS[431]
s5k5caga_i2c_write(0x0F12, 0x00A5);//00C7 // #TVAR_ash_pGAS[432]
s5k5caga_i2c_write(0x0F12, 0x0094);//00B2 // #TVAR_ash_pGAS[433]
s5k5caga_i2c_write(0x0F12, 0x008B);//00A7 // #TVAR_ash_pGAS[434]
s5k5caga_i2c_write(0x0F12, 0x008C);//00A6 // #TVAR_ash_pGAS[435]
s5k5caga_i2c_write(0x0F12, 0x0093);//00AF // #TVAR_ash_pGAS[436]
s5k5caga_i2c_write(0x0F12, 0x00A1);//00C3 // #TVAR_ash_pGAS[437]
s5k5caga_i2c_write(0x0F12, 0x00BA);//00E0 // #TVAR_ash_pGAS[438]
s5k5caga_i2c_write(0x0F12, 0x00DF);//0108 // #TVAR_ash_pGAS[439]
s5k5caga_i2c_write(0x0F12, 0x0101);//0132 // #TVAR_ash_pGAS[440]
s5k5caga_i2c_write(0x0F12, 0x00F6);//0164 // #TVAR_ash_pGAS[441]
s5k5caga_i2c_write(0x0F12, 0x00DA);//0119 // #TVAR_ash_pGAS[442]
s5k5caga_i2c_write(0x0F12, 0x00CE);//00E9 // #TVAR_ash_pGAS[443]
s5k5caga_i2c_write(0x0F12, 0x00A4);//00BD // #TVAR_ash_pGAS[444]
s5k5caga_i2c_write(0x0F12, 0x0083);//0099 // #TVAR_ash_pGAS[445]
s5k5caga_i2c_write(0x0F12, 0x0072);//0080 // #TVAR_ash_pGAS[446]
s5k5caga_i2c_write(0x0F12, 0x0068);//0073 // #TVAR_ash_pGAS[447]
s5k5caga_i2c_write(0x0F12, 0x0067);//006F // #TVAR_ash_pGAS[448]
s5k5caga_i2c_write(0x0F12, 0x006F);//0077 // #TVAR_ash_pGAS[449]
s5k5caga_i2c_write(0x0F12, 0x007E);//0089 // #TVAR_ash_pGAS[450]
s5k5caga_i2c_write(0x0F12, 0x0094);//00AA // #TVAR_ash_pGAS[451]
s5k5caga_i2c_write(0x0F12, 0x00B8);//00D1 // #TVAR_ash_pGAS[452]
s5k5caga_i2c_write(0x0F12, 0x00EB);//00FF // #TVAR_ash_pGAS[453]
s5k5caga_i2c_write(0x0F12, 0x00F0);//0130 // #TVAR_ash_pGAS[454]
s5k5caga_i2c_write(0x0F12, 0x00C4);//00FB // #TVAR_ash_pGAS[455]
s5k5caga_i2c_write(0x0F12, 0x00A7);//00C7 // #TVAR_ash_pGAS[456]
s5k5caga_i2c_write(0x0F12, 0x007D);//0096 // #TVAR_ash_pGAS[457]
s5k5caga_i2c_write(0x0F12, 0x005F);//0072 // #TVAR_ash_pGAS[458]
s5k5caga_i2c_write(0x0F12, 0x004C);//0053 // #TVAR_ash_pGAS[459]
s5k5caga_i2c_write(0x0F12, 0x0040);//0042 // #TVAR_ash_pGAS[460]
s5k5caga_i2c_write(0x0F12, 0x003F);//003E // #TVAR_ash_pGAS[461]
s5k5caga_i2c_write(0x0F12, 0x0048);//0045 // #TVAR_ash_pGAS[462]
s5k5caga_i2c_write(0x0F12, 0x005A);//0058 // #TVAR_ash_pGAS[463]
s5k5caga_i2c_write(0x0F12, 0x0070);//0077 // #TVAR_ash_pGAS[464]
s5k5caga_i2c_write(0x0F12, 0x0092);//00A1 // #TVAR_ash_pGAS[465]
s5k5caga_i2c_write(0x0F12, 0x00C6);//00D3 // #TVAR_ash_pGAS[466]
s5k5caga_i2c_write(0x0F12, 0x00E2);//0106 // #TVAR_ash_pGAS[467]
s5k5caga_i2c_write(0x0F12, 0x00A5);//00E0 // #TVAR_ash_pGAS[468]
s5k5caga_i2c_write(0x0F12, 0x0086);//00AD // #TVAR_ash_pGAS[469]
s5k5caga_i2c_write(0x0F12, 0x0060);//007A // #TVAR_ash_pGAS[470]
s5k5caga_i2c_write(0x0F12, 0x0041);//0054 // #TVAR_ash_pGAS[471]
s5k5caga_i2c_write(0x0F12, 0x002A);//0033 // #TVAR_ash_pGAS[472]
s5k5caga_i2c_write(0x0F12, 0x001E);//0020 // #TVAR_ash_pGAS[473]
s5k5caga_i2c_write(0x0F12, 0x001A);//001A // #TVAR_ash_pGAS[474]
s5k5caga_i2c_write(0x0F12, 0x0024);//0021 // #TVAR_ash_pGAS[475]
s5k5caga_i2c_write(0x0F12, 0x0038);//0034 // #TVAR_ash_pGAS[476]
s5k5caga_i2c_write(0x0F12, 0x0054);//0052 // #TVAR_ash_pGAS[477]
s5k5caga_i2c_write(0x0F12, 0x0078);//007D // #TVAR_ash_pGAS[478]
s5k5caga_i2c_write(0x0F12, 0x00A8);//00B1 // #TVAR_ash_pGAS[479]
s5k5caga_i2c_write(0x0F12, 0x00CB);//00E7 // #TVAR_ash_pGAS[480]
s5k5caga_i2c_write(0x0F12, 0x0094);//00D9 // #TVAR_ash_pGAS[481]
s5k5caga_i2c_write(0x0F12, 0x0078);//00A0 // #TVAR_ash_pGAS[482]
s5k5caga_i2c_write(0x0F12, 0x004F);//006F // #TVAR_ash_pGAS[483]
s5k5caga_i2c_write(0x0F12, 0x002E);//0043 // #TVAR_ash_pGAS[484]
s5k5caga_i2c_write(0x0F12, 0x0016);//0021 // #TVAR_ash_pGAS[485]
s5k5caga_i2c_write(0x0F12, 0x000A);//000C // #TVAR_ash_pGAS[486]
s5k5caga_i2c_write(0x0F12, 0x000A);//0005 // #TVAR_ash_pGAS[487]
s5k5caga_i2c_write(0x0F12, 0x0012);//000B // #TVAR_ash_pGAS[488]
s5k5caga_i2c_write(0x0F12, 0x0024);//001F // #TVAR_ash_pGAS[489]
s5k5caga_i2c_write(0x0F12, 0x0042);//003D // #TVAR_ash_pGAS[490]
s5k5caga_i2c_write(0x0F12, 0x0066);//0067 // #TVAR_ash_pGAS[491]
s5k5caga_i2c_write(0x0F12, 0x0094);//009C // #TVAR_ash_pGAS[492]
s5k5caga_i2c_write(0x0F12, 0x00B9);//00D4 // #TVAR_ash_pGAS[493]
s5k5caga_i2c_write(0x0F12, 0x008F);//00DA // #TVAR_ash_pGAS[494]
s5k5caga_i2c_write(0x0F12, 0x0071);//00A0 // #TVAR_ash_pGAS[495]
s5k5caga_i2c_write(0x0F12, 0x0047);//006D // #TVAR_ash_pGAS[496]
s5k5caga_i2c_write(0x0F12, 0x0026);//0042 // #TVAR_ash_pGAS[497]
s5k5caga_i2c_write(0x0F12, 0x000E);//001F // #TVAR_ash_pGAS[498]
s5k5caga_i2c_write(0x0F12, 0x0002);//0009 // #TVAR_ash_pGAS[499]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 // #TVAR_ash_pGAS[500]
s5k5caga_i2c_write(0x0F12, 0x0009);//0005 // #TVAR_ash_pGAS[501]
s5k5caga_i2c_write(0x0F12, 0x0018);//0017 // #TVAR_ash_pGAS[502]
s5k5caga_i2c_write(0x0F12, 0x0039);//0036 // #TVAR_ash_pGAS[503]
s5k5caga_i2c_write(0x0F12, 0x005C);//005D // #TVAR_ash_pGAS[504]
s5k5caga_i2c_write(0x0F12, 0x008A);//0092 // #TVAR_ash_pGAS[505]
s5k5caga_i2c_write(0x0F12, 0x00B0);//00CE // #TVAR_ash_pGAS[506]
s5k5caga_i2c_write(0x0F12, 0x0091);//00E3 // #TVAR_ash_pGAS[507]
s5k5caga_i2c_write(0x0F12, 0x0075);//00AB // #TVAR_ash_pGAS[508]
s5k5caga_i2c_write(0x0F12, 0x004B);//007A // #TVAR_ash_pGAS[509]
s5k5caga_i2c_write(0x0F12, 0x002C);//004B // #TVAR_ash_pGAS[510]
s5k5caga_i2c_write(0x0F12, 0x0013);//0028 // #TVAR_ash_pGAS[511]
s5k5caga_i2c_write(0x0F12, 0x0006);//0012 // #TVAR_ash_pGAS[512]
s5k5caga_i2c_write(0x0F12, 0x0002);//0009 // #TVAR_ash_pGAS[513]
s5k5caga_i2c_write(0x0F12, 0x000A);//000D // #TVAR_ash_pGAS[514]
s5k5caga_i2c_write(0x0F12, 0x001D);//001E // #TVAR_ash_pGAS[515]
s5k5caga_i2c_write(0x0F12, 0x003A);//003C // #TVAR_ash_pGAS[516]
s5k5caga_i2c_write(0x0F12, 0x005C);//0064 // #TVAR_ash_pGAS[517]
s5k5caga_i2c_write(0x0F12, 0x008A);//0096 // #TVAR_ash_pGAS[518]
s5k5caga_i2c_write(0x0F12, 0x00B1);//00CF // #TVAR_ash_pGAS[519]
s5k5caga_i2c_write(0x0F12, 0x00A5);//00F9 // #TVAR_ash_pGAS[520]
s5k5caga_i2c_write(0x0F12, 0x0087);//00C5 // #TVAR_ash_pGAS[521]
s5k5caga_i2c_write(0x0F12, 0x005D);//0090 // #TVAR_ash_pGAS[522]
s5k5caga_i2c_write(0x0F12, 0x003E);//0065 // #TVAR_ash_pGAS[523]
s5k5caga_i2c_write(0x0F12, 0x0027);//0041 // #TVAR_ash_pGAS[524]
s5k5caga_i2c_write(0x0F12, 0x0019);//002A // #TVAR_ash_pGAS[525]
s5k5caga_i2c_write(0x0F12, 0x0016);//0020 // #TVAR_ash_pGAS[526]
s5k5caga_i2c_write(0x0F12, 0x001D);//0024 // #TVAR_ash_pGAS[527]
s5k5caga_i2c_write(0x0F12, 0x002E);//0034 // #TVAR_ash_pGAS[528]
s5k5caga_i2c_write(0x0F12, 0x0047);//0052 // #TVAR_ash_pGAS[529]
s5k5caga_i2c_write(0x0F12, 0x0068);//0076 // #TVAR_ash_pGAS[530]
s5k5caga_i2c_write(0x0F12, 0x0094);//00A4 // #TVAR_ash_pGAS[531]
s5k5caga_i2c_write(0x0F12, 0x00BC);//00DD // #TVAR_ash_pGAS[532]
s5k5caga_i2c_write(0x0F12, 0x00BE);//0114 // #TVAR_ash_pGAS[533]
s5k5caga_i2c_write(0x0F12, 0x00A6);//00E6 // #TVAR_ash_pGAS[534]
s5k5caga_i2c_write(0x0F12, 0x0079);//00B5 // #TVAR_ash_pGAS[535]
s5k5caga_i2c_write(0x0F12, 0x005C);//0089 // #TVAR_ash_pGAS[536]
s5k5caga_i2c_write(0x0F12, 0x0047);//0066 // #TVAR_ash_pGAS[537]
s5k5caga_i2c_write(0x0F12, 0x003A);//004F // #TVAR_ash_pGAS[538]
s5k5caga_i2c_write(0x0F12, 0x0036);//0045 // #TVAR_ash_pGAS[539]
s5k5caga_i2c_write(0x0F12, 0x003B);//0048 // #TVAR_ash_pGAS[540]
s5k5caga_i2c_write(0x0F12, 0x004B);//0059 // #TVAR_ash_pGAS[541]
s5k5caga_i2c_write(0x0F12, 0x0060);//0073 // #TVAR_ash_pGAS[542]
s5k5caga_i2c_write(0x0F12, 0x0080);//0095 // #TVAR_ash_pGAS[543]
s5k5caga_i2c_write(0x0F12, 0x00AD);//00C2 // #TVAR_ash_pGAS[544]
s5k5caga_i2c_write(0x0F12, 0x00CF);//00F4 // #TVAR_ash_pGAS[545]
s5k5caga_i2c_write(0x0F12, 0x00DC);//0135 // #TVAR_ash_pGAS[546]
s5k5caga_i2c_write(0x0F12, 0x00D2);//0108 // #TVAR_ash_pGAS[547]
s5k5caga_i2c_write(0x0F12, 0x00A3);//00E0 // #TVAR_ash_pGAS[548]
s5k5caga_i2c_write(0x0F12, 0x0084);//00B8 // #TVAR_ash_pGAS[549]
s5k5caga_i2c_write(0x0F12, 0x0073);//0097 // #TVAR_ash_pGAS[550]
s5k5caga_i2c_write(0x0F12, 0x0067);//0083 // #TVAR_ash_pGAS[551]
s5k5caga_i2c_write(0x0F12, 0x0062);//0076 // #TVAR_ash_pGAS[552]
s5k5caga_i2c_write(0x0F12, 0x0066);//0079 // #TVAR_ash_pGAS[553]
s5k5caga_i2c_write(0x0F12, 0x0073);//0089 // #TVAR_ash_pGAS[554]
s5k5caga_i2c_write(0x0F12, 0x0087);//00A1 // #TVAR_ash_pGAS[555]
s5k5caga_i2c_write(0x0F12, 0x00A6);//00C2 // #TVAR_ash_pGAS[556]
s5k5caga_i2c_write(0x0F12, 0x00D7);//00E6 // #TVAR_ash_pGAS[557]
s5k5caga_i2c_write(0x0F12, 0x00E7);//010D // #TVAR_ash_pGAS[558]
s5k5caga_i2c_write(0x0F12, 0x00ED);//0168 // #TVAR_ash_pGAS[559]
s5k5caga_i2c_write(0x0F12, 0x00F8);//012B // #TVAR_ash_pGAS[560]
s5k5caga_i2c_write(0x0F12, 0x00D1);//0103 // #TVAR_ash_pGAS[561]
s5k5caga_i2c_write(0x0F12, 0x00B1);//00DF // #TVAR_ash_pGAS[562]
s5k5caga_i2c_write(0x0F12, 0x009F);//00C4 // #TVAR_ash_pGAS[563]
s5k5caga_i2c_write(0x0F12, 0x0095);//00AF // #TVAR_ash_pGAS[564]
s5k5caga_i2c_write(0x0F12, 0x0091);//00A9 // #TVAR_ash_pGAS[565]
s5k5caga_i2c_write(0x0F12, 0x0093);//00A9 // #TVAR_ash_pGAS[566]
s5k5caga_i2c_write(0x0F12, 0x009E);//00B8 // #TVAR_ash_pGAS[567]
s5k5caga_i2c_write(0x0F12, 0x00B0);//00CE // #TVAR_ash_pGAS[568]
s5k5caga_i2c_write(0x0F12, 0x00D1);//00F0 // #TVAR_ash_pGAS[569]
s5k5caga_i2c_write(0x0F12, 0x00F7);//0116 // #TVAR_ash_pGAS[570]
s5k5caga_i2c_write(0x0F12, 0x00F5);//012E // #TVAR_ash_pGAS[571]
s5k5caga_i2c_write(0x002A, 0x074E); 
s5k5caga_i2c_write(0x0F12, 0x0001); //ash_bLumaMode
s5k5caga_i2c_write(0x002A, 0x0D30);
s5k5caga_i2c_write(0x0F12, 0x02A7); // #awbb_GLocusR
s5k5caga_i2c_write(0x0F12, 0x0343); // #awbb_GLocusB
s5k5caga_i2c_write(0x002A, 0x06B8);
s5k5caga_i2c_write(0x0F12, 0x00E0);  //00D0 // #TVAR_ash_AwbAshCord_0_ Horizon
s5k5caga_i2c_write(0x0F12, 0x00F4);   //0102 // #TVAR_ash_AwbAshCord_1_ Incan A
s5k5caga_i2c_write(0x0F12, 0x0114);  //0121 // #TVAR_ash_AwbAshCord_2_ TL84
s5k5caga_i2c_write(0x0F12, 0x013D);  //0119 // #TVAR_ash_AwbAshCord_3_ CWF
s5k5caga_i2c_write(0x0F12, 0x0171); // #TVAR_ash_AwbAshCord_4_ D50
s5k5caga_i2c_write(0x0F12, 0x0184);  //0198 // #TVAR_ash_AwbAshCord_5_ D65
s5k5caga_i2c_write(0x0F12, 0x01A8); // #TVAR_ash_AwbAshCord_6_ / /*BU5D05950 zhangsheng 20100422 end>*/
//================================================================================================
// SET CCM
//================================================================================================ 
// CCM start address // 7000_33A4
s5k5caga_i2c_write(0x002A, 0x0698);
s5k5caga_i2c_write(0x0F12, 0x33A4);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x002A, 0x33A4);
s5k5caga_i2c_write(0x0F12, 0x0285);//0274//0263//0224//0232 //01CB //#TVAR_wbt_pBaseCcms// Horizon
s5k5caga_i2c_write(0x0F12, 0xFF1A);//FF24//FF37//FF64//FF6E //FF8E //#TVAR_wbt_pBaseCcms
s5k5caga_i2c_write(0x0F12, 0xFFA4);//FFAA//FFA9//FFBB//FFC5 //FFD2 //#TVAR_wbt_pBaseCcms
s5k5caga_i2c_write(0x0F12, 0xFF78);//FF78//FF78//FFA3//FF3C //FF64 //#TVAR_wbt_pBaseCcms
s5k5caga_i2c_write(0x0F12, 0x0277);//0277//0277//0213//0305 //01B2 //#TVAR_wbt_pBaseCcms
s5k5caga_i2c_write(0x0F12, 0xFF2A);//FF2A//FF2A//FF63//FED8 //FF35 //#TVAR_wbt_pBaseCcms
s5k5caga_i2c_write(0x0F12, 0xFFC0);//FFC9//FFD0//0019//FFEC //FFDF //#TVAR_wbt_pBaseCcms
s5k5caga_i2c_write(0x0F12, 0x0009);//0011//0016//004F//FFFD //FFE9 //#TVAR_wbt_pBaseCcms
s5k5caga_i2c_write(0x0F12, 0x0374);//0364//0357//02D7//0354 //01BD //#TVAR_wbt_pBaseCcms
s5k5caga_i2c_write(0x0F12, 0x0192);//017C//016D//0147//019A //011C //#TVAR_wbt_pBaseCcms
s5k5caga_i2c_write(0x0F12, 0x012D);//0145//0155//0140//0190 //011B //#TVAR_wbt_pBaseCcms
s5k5caga_i2c_write(0x0F12, 0xFE60);//FE5E//FE5D//FE97//FDF4 //FF43 //#TVAR_wbt_pBaseCcms
s5k5caga_i2c_write(0x0F12, 0x017B);//017B//017B//01B4//0209 //019D //#TVAR_wbt_pBaseCcms
s5k5caga_i2c_write(0x0F12, 0xFF86);//FF86//FF86//FFB6//FEA8 //FF4C //#TVAR_wbt_pBaseCcms
s5k5caga_i2c_write(0x0F12, 0x02DE);//02DE//02DE//0275//0326 //01CC //#TVAR_wbt_pBaseCcms
s5k5caga_i2c_write(0x0F12, 0xFEB4);//FEBD//FEC9//FF43//FF50 //FF33 //#TVAR_wbt_pBaseCcms
s5k5caga_i2c_write(0x0F12, 0x0288);//0293//02A2//022A//021E //0173 //#TVAR_wbt_pBaseCcms
s5k5caga_i2c_write(0x0F12, 0x00FA);//00E6//00CB//00C6//00C6 //#TVAR_wbt_pBaseCcms//*<BU5D05950 zhangsheng 20100422 begin*/

s5k5caga_i2c_write(0x0F12, 0x0263);//0224//0224//0223 //0206 //01C8 //#TVAR_wbt_pBaseCcms[18]// Inca
s5k5caga_i2c_write(0x0F12, 0xFF37);//FF64//FF64//FF5E //FF84 //FF7F //#TVAR_wbt_pBaseCcms[19]
s5k5caga_i2c_write(0x0F12, 0xFFA9);//FFBB//FFBB//FFC2 //FFC7 //FFE4 //#TVAR_wbt_pBaseCcms[20]
s5k5caga_i2c_write(0x0F12, 0xFF78);//FFA3//FFA3//FF3C //FF42 //FF64 //#TVAR_wbt_pBaseCcms[21]
s5k5caga_i2c_write(0x0F12, 0x0277);//0213//0213//0305 //0319 //01B2 //#TVAR_wbt_pBaseCcms[22]
s5k5caga_i2c_write(0x0F12, 0xFF2A);//FF63//FF63//FED8 //FEEE //FF35 //#TVAR_wbt_pBaseCcms[23]
s5k5caga_i2c_write(0x0F12, 0xFFD0);//000E//0019//FFEC //001F //FFDF //#TVAR_wbt_pBaseCcms[24]
s5k5caga_i2c_write(0x0F12, 0x0016);//0047//004F//FFFD //001E //FFE9 //#TVAR_wbt_pBaseCcms[25]
s5k5caga_i2c_write(0x0F12, 0x0357);//02E9//02D7//0355 //0396 //01BD //#TVAR_wbt_pBaseCcms[26]
s5k5caga_i2c_write(0x0F12, 0x016D);//0150//0147//019A //0184 //011C //#TVAR_wbt_pBaseCcms[27]
s5k5caga_i2c_write(0x0F12, 0x0155);//0148//0140//0190 //018A //011B //#TVAR_wbt_pBaseCcms[28]
s5k5caga_i2c_write(0x0F12, 0xFE5D);//FE86//FE97//FDF4 //FDBA //FF43 //#TVAR_wbt_pBaseCcms[29]
s5k5caga_i2c_write(0x0F12, 0x017B);//01A6//01B4//0211 //0215 //019D //#TVAR_wbt_pBaseCcms[30]//*BU5D05950 zhangsheng 20100422 end>*/
s5k5caga_i2c_write(0x0F12, 0xFF86);//FFBA//FFB6//FEA8 //FEC1 //FF4C //#TVAR_wbt_pBaseCcms[31]
s5k5caga_i2c_write(0x0F12, 0x02DE);//027F//0275//0326 //0356 //01CC //#TVAR_wbt_pBaseCcms[32]
s5k5caga_i2c_write(0x0F12, 0xFEC9);//FF3E//FF43//FF50 //FF89 //FF33 //#TVAR_wbt_pBaseCcms[33]
s5k5caga_i2c_write(0x0F12, 0x02A2);//0230//022A//021E //021A //0173 //#TVAR_wbt_pBaseCcms[34]
s5k5caga_i2c_write(0x0F12, 0x00CB);//00C7//00C6//00C6 //008E //012F //#TVAR_wbt_pBaseCcms[35]

s5k5caga_i2c_write(0x0F12, 0x0227);//0228//0232//024D  //024F //024F //0264//0224//01FC//01F4 //01C8 //#TVAR_wbt_pBaseCcms[36]// WW
s5k5caga_i2c_write(0x0F12, 0xFF70);//FF5A//FF3E//FF36  //FF12 //FF12 //FF1B//FF64//FF5E//FF6B //FF7F //#TVAR_wbt_pBaseCcms[37]
s5k5caga_i2c_write(0x0F12, 0xFFAD);//FFBB//FFC7//FFAF  //FFCA //FFCC //FFAD//FFBB//FFD2//FFD9 //FFE4 //#TVAR_wbt_pBaseCcms[38]
s5k5caga_i2c_write(0x0F12, 0xFEE6);//FEEF//FEF4//FEF3  //FEE9 //FEE9 //FEE9//FFA3//FF18//FF66 //FF64 //#TVAR_wbt_pBaseCcms[39]
s5k5caga_i2c_write(0x0F12, 0x01DB);//01E3//01F4//01FF  //0218 //0218 //0218//0213//01C9//01FA //01B2 //#TVAR_wbt_pBaseCcms[40]
s5k5caga_i2c_write(0x0F12, 0xFFA1);//FF8A//FF6F//FF5F  //FF49 //FF49 //FF49//FF63//FF69//FEF8 //FF35 //#TVAR_wbt_pBaseCcms[41]
s5k5caga_i2c_write(0x0F12, 0xFF94);//FF7F//FF64//FF60  //FF25 //FF25 //FF45//000E//FF93//FFB8 //FFDF //#TVAR_wbt_pBaseCcms[42]
s5k5caga_i2c_write(0x0F12, 0xFFD5);//FFE2//FFEE//FFB7  //FFE8 //FFEC //FFB4//0047//FFD2//FFE3 //FFE9 //#TVAR_wbt_pBaseCcms[43]
s5k5caga_i2c_write(0x0F12, 0x0232);//0233//023C//0274  //0274 //0274 //028C//02E9//0220//01F7 //01BD //#TVAR_wbt_pBaseCcms[44]
s5k5caga_i2c_write(0x0F12, 0x01AF);//01C3//01DE//0180  //0207 //01E3 //0192//0150//0160//0290 //011C //#TVAR_wbt_pBaseCcms[45]
s5k5caga_i2c_write(0x0F12, 0x014F);//013A//0127//00EF  //0119 //010B //00EB//0148//00FE//0189 //011B //#TVAR_wbt_pBaseCcms[46]
s5k5caga_i2c_write(0x0F12, 0xFE95);//FE90//FE82//FF12  //FE5A //FE8E //FEFE//FE86//FF1C//FD6F //FF43 //#TVAR_wbt_pBaseCcms[47]
s5k5caga_i2c_write(0x0F12, 0x01BF);//01B3//01AA//01DD  //01A8 //01D9 //01DF//01A6//019D//01C2 //019D //#TVAR_wbt_pBaseCcms[48]
s5k5caga_i2c_write(0x0F12, 0xFF9B);//FF93//FF84//FF16  //FF63 //FF07 //FEFA//FFBA//FF4C//FF09 //FF4C //#TVAR_wbt_pBaseCcms[49]
s5k5caga_i2c_write(0x0F12, 0x016F);//017D//018E//01C9  //01A5 //01D6 //01DC//027F//01CC//01F7 //01CC //#TVAR_wbt_pBaseCcms[50]
s5k5caga_i2c_write(0x0F12, 0xFEFB);//FEF3//FEE3//FF2B  //FEEC //FF29 //FF18//FF3E//FF13//FEF8 //FF33 //#TVAR_wbt_pBaseCcms[51]
s5k5caga_i2c_write(0x0F12, 0x0168);//0179//018F//01C7  //0229 //01F5 //01DB//0230//01A5//019B //0173 //#TVAR_wbt_pBaseCcms[52]
s5k5caga_i2c_write(0x0F12, 0x0188);//0178//016B//00E9  //00BC //00B8 //00E3//00C7//011E//014E //012F //#TVAR_wbt_pBaseCcms[53]//*<BU5D05950 zhangsheng 20100422 begin*/

s5k5caga_i2c_write(0x0F12, 0x01F3); //024D//0264//01FC//01C8 //#TVAR_wbt_pBaseCcms[54]// CWF
s5k5caga_i2c_write(0x0F12, 0xFF70); //FF36//FF1B//FF5E//FF7F //#TVAR_wbt_pBaseCcms[55]
s5k5caga_i2c_write(0x0F12, 0xFFD4); //FFAF//FFAD//FFD2//FFE4 //#TVAR_wbt_pBaseCcms[56]
s5k5caga_i2c_write(0x0F12, 0xFF2C); //FEF3//FEE9//FF18//FF64 //#TVAR_wbt_pBaseCcms[57]
s5k5caga_i2c_write(0x0F12, 0x01D6); //01FF//0218//01C9//01B2 //#TVAR_wbt_pBaseCcms[58]
s5k5caga_i2c_write(0x0F12, 0xFF54); //FF5F//FF49//FF69//FF35 //#TVAR_wbt_pBaseCcms[59]
s5k5caga_i2c_write(0x0F12, 0xFF82); //FF60//FF45//FF93//FFDF //#TVAR_wbt_pBaseCcms[60]
s5k5caga_i2c_write(0x0F12, 0xFFD0); //FFB7//FFB4//FFD2//FFE9 //#TVAR_wbt_pBaseCcms[61]
s5k5caga_i2c_write(0x0F12, 0x023B); //0274//028C//0220//01BD //#TVAR_wbt_pBaseCcms[62]
s5k5caga_i2c_write(0x0F12, 0x01A7); //0180//0192//0160//011C //#TVAR_wbt_pBaseCcms[63]
s5k5caga_i2c_write(0x0F12, 0x0132); //00EF//00EB//00FE//011B //#TVAR_wbt_pBaseCcms[64]
s5k5caga_i2c_write(0x0F12, 0xFEAE); //FF12//FEFE//FF1C//FF43 //#TVAR_wbt_pBaseCcms[65]
s5k5caga_i2c_write(0x0F12, 0x0181); //01DD//01DF//019D//019D //#TVAR_wbt_pBaseCcms[66]
s5k5caga_i2c_write(0x0F12, 0xFF9E); //FF16//FEFA//FF4C//FF4C //#TVAR_wbt_pBaseCcms[67]
s5k5caga_i2c_write(0x0F12, 0x019E); //01C9//01DC//01CC//01CC //#TVAR_wbt_pBaseCcms[68]
s5k5caga_i2c_write(0x0F12, 0xFF0C); //FF2B//FF18//FF13//FF33 //#TVAR_wbt_pBaseCcms[69]
s5k5caga_i2c_write(0x0F12, 0x01B4); //01C7//01DB//01A5//0173 //#TVAR_wbt_pBaseCcms[70]
s5k5caga_i2c_write(0x0F12, 0x011D); //00E9//00E3//011E//012F //#TVAR_wbt_pBaseCcms[71]//*BU5D05950 zhangsheng 20100422 end>*/

s5k5caga_i2c_write(0x0F12, 0x01C1);//01E1//01E5//01C8 //#TVAR_wbt_pBaseCcms[72]// D50
s5k5caga_i2c_write(0x0F12, 0xFFB2);//FF79//FF76//FF7F //#TVAR_wbt_pBaseCcms[73]
s5k5caga_i2c_write(0x0F12, 0xFFCB);//FFD8//FFD7//FFE4 //#TVAR_wbt_pBaseCcms[74]
s5k5caga_i2c_write(0x0F12, 0xFF41);//FF36//FF43//FF64 //#TVAR_wbt_pBaseCcms[75]
s5k5caga_i2c_write(0x0F12, 0x01A4);//01CA//01CA//01B2 //#TVAR_wbt_pBaseCcms[76]
s5k5caga_i2c_write(0x0F12, 0xFF7B);//FF53//FF46//FF35 //#TVAR_wbt_pBaseCcms[77]
s5k5caga_i2c_write(0x0F12, 0xFFE0);//FFBD//FFBD//FFDF //#TVAR_wbt_pBaseCcms[78]
s5k5caga_i2c_write(0x0F12, 0xFFCE);//FFC9//FFC9//FFE9 //#TVAR_wbt_pBaseCcms[79]
s5k5caga_i2c_write(0x0F12, 0x01E6);//0205//0205//01BD //#TVAR_wbt_pBaseCcms[80]
s5k5caga_i2c_write(0x0F12, 0x0114);//012B//012B//011C //#TVAR_wbt_pBaseCcms[81]
s5k5caga_i2c_write(0x0F12, 0x0124);//0120//0120//011B //#TVAR_wbt_pBaseCcms[82]
s5k5caga_i2c_write(0x0F12, 0xFF56);//FF35//FF35//FF43 //#TVAR_wbt_pBaseCcms[83]
s5k5caga_i2c_write(0x0F12, 0x01AA);//01A8//01A8//019D //#TVAR_wbt_pBaseCcms[84]
s5k5caga_i2c_write(0x0F12, 0xFF68);//FF39//FF39//FF4C //#TVAR_wbt_pBaseCcms[85]
s5k5caga_i2c_write(0x0F12, 0x01B6);//01DA//01DA//01CC //#TVAR_wbt_pBaseCcms[86]
s5k5caga_i2c_write(0x0F12, 0xFF4F);//FF30//FF30//FF33 //#TVAR_wbt_pBaseCcms[87]
s5k5caga_i2c_write(0x0F12, 0x0178);//01B2//01B2//0173 //#TVAR_wbt_pBaseCcms[88]
s5k5caga_i2c_write(0x0F12, 0x0121);//00FA//00FA//012F //#TVAR_wbt_pBaseCcms[89]

s5k5caga_i2c_write(0x0F12, 0x01C1);//01CB//01E1//01E5//01DC //#TVAR_wbt_pBaseCcms[90]// D65
s5k5caga_i2c_write(0x0F12, 0xFFB2);//FFA2//FF79//FF76//FF76 //#TVAR_wbt_pBaseCcms[91]
s5k5caga_i2c_write(0x0F12, 0xFFCB);//FFCB//FFD8//FFD7//FFE0 //#TVAR_wbt_pBaseCcms[92]
s5k5caga_i2c_write(0x0F12, 0xFF41);//FF3F//FF36//FF43//FF5D //#TVAR_wbt_pBaseCcms[93]
s5k5caga_i2c_write(0x0F12, 0x01A4);//01B1//01CA//01CA//01C9 //#TVAR_wbt_pBaseCcms[94]
s5k5caga_i2c_write(0x0F12, 0xFF7B);//FF6A//FF53//FF46//FF2C //#TVAR_wbt_pBaseCcms[95]
s5k5caga_i2c_write(0x0F12, 0xFFE0);//FFD0//FFBD//FFBD//FFCA //#TVAR_wbt_pBaseCcms[96]
s5k5caga_i2c_write(0x0F12, 0xFFCE);//FFCC//FFC9//FFC9//FFD5 //#TVAR_wbt_pBaseCcms[97]
s5k5caga_i2c_write(0x0F12, 0x01E6);//01F1//0205//0205//01EC //#TVAR_wbt_pBaseCcms[98]
s5k5caga_i2c_write(0x0F12, 0x0114);//011E//012B//012B//0126 //#TVAR_wbt_pBaseCcms[99]
s5k5caga_i2c_write(0x0F12, 0x0124);//0121//0120//0120//0125 //#TVAR_wbt_pBaseCcms[100]
s5k5caga_i2c_write(0x0F12, 0xFF56);//FF48//FF35//FF35//FF35 //#TVAR_wbt_pBaseCcms[101]
s5k5caga_i2c_write(0x0F12, 0x01AA);//01A6//01A8//01A8//01A8 //#TVAR_wbt_pBaseCcms[102]
s5k5caga_i2c_write(0x0F12, 0xFF68);//FF58//FF39//FF39//FF39 //#TVAR_wbt_pBaseCcms[103]
s5k5caga_i2c_write(0x0F12, 0x01B6);//01C4//01DA//01DA//01DA //#TVAR_wbt_pBaseCcms[104]
s5k5caga_i2c_write(0x0F12, 0xFF4F);//FF41//FF30//FF30//FF23 //#TVAR_wbt_pBaseCcms[105]
s5k5caga_i2c_write(0x0F12, 0x0178);//0185//01B2//01B2//0180 //#TVAR_wbt_pBaseCcms[106]
s5k5caga_i2c_write(0x0F12, 0x0121);//011C//00FA//00FA//0139 //#TVAR_wbt_pBaseCcms[107]

s5k5caga_i2c_write(0x002A, 0x06A0); // Outdoor CCM address // 7000_3380  
s5k5caga_i2c_write(0x0F12, 0x3380);
s5k5caga_i2c_write(0x0F12, 0x7000);
s5k5caga_i2c_write(0x002A, 0x3380); // Outdoor CCM
s5k5caga_i2c_write(0x0F12, 0x0218); //#TVAR_wbt_pOutdoorCcm[0]
s5k5caga_i2c_write(0x0F12, 0xFF43); //#TVAR_wbt_pOutdoorCcm[1]
s5k5caga_i2c_write(0x0F12, 0xFF92); //#TVAR_wbt_pOutdoorCcm[2]
s5k5caga_i2c_write(0x0F12, 0xFF1D); //#TVAR_wbt_pOutdoorCcm[3]
s5k5caga_i2c_write(0x0F12, 0x021E); //#TVAR_wbt_pOutdoorCcm[4]
s5k5caga_i2c_write(0x0F12, 0xFF0F); //#TVAR_wbt_pOutdoorCcm[5]
s5k5caga_i2c_write(0x0F12, 0xFFBE); //#TVAR_wbt_pOutdoorCcm[6]
s5k5caga_i2c_write(0x0F12, 0x0006); //#TVAR_wbt_pOutdoorCcm[7]
s5k5caga_i2c_write(0x0F12, 0x02AE); //#TVAR_wbt_pOutdoorCcm[8]
s5k5caga_i2c_write(0x0F12, 0x0170); //#TVAR_wbt_pOutdoorCcm[9]
s5k5caga_i2c_write(0x0F12, 0x010B); //#TVAR_wbt_pOutdoorCcm[10] 
s5k5caga_i2c_write(0x0F12, 0xFED4); //#TVAR_wbt_pOutdoorCcm[11] 
s5k5caga_i2c_write(0x0F12, 0x01B9); //#TVAR_wbt_pOutdoorCcm[12] 
s5k5caga_i2c_write(0x0F12, 0xFF59); //#TVAR_wbt_pOutdoorCcm[13] 
s5k5caga_i2c_write(0x0F12, 0x0241); //#TVAR_wbt_pOutdoorCcm[14] 
s5k5caga_i2c_write(0x0F12, 0xFF01); //#TVAR_wbt_pOutdoorCcm[15] 
s5k5caga_i2c_write(0x0F12, 0x01B8); //#TVAR_wbt_pOutdoorCcm[16] 
s5k5caga_i2c_write(0x0F12, 0x0152); //#TVAR_wbt_pOutdoorCcm[17] //White balance
             // param_start awbb_IndoorGrZones_m_BGrid
s5k5caga_i2c_write(0x002A, 0x0C48);
s5k5caga_i2c_write(0x0F12, 0x03BD);//038B //awbb_IndoorGrZones_m_BGrid[0]
s5k5caga_i2c_write(0x0F12, 0x03F2);//03C0 //awbb_IndoorGrZones_m_BGrid[1]
s5k5caga_i2c_write(0x0F12, 0x036F);//033D //awbb_IndoorGrZones_m_BGrid[2]
s5k5caga_i2c_write(0x0F12, 0x03F7);//03C5 //awbb_IndoorGrZones_m_BGrid[3]
s5k5caga_i2c_write(0x0F12, 0x0335);//0303 //awbb_IndoorGrZones_m_BGrid[4]
s5k5caga_i2c_write(0x0F12, 0x03E0);//03AE //awbb_IndoorGrZones_m_BGrid[5]
s5k5caga_i2c_write(0x0F12, 0x0301);//02CF //awbb_IndoorGrZones_m_BGrid[6]
s5k5caga_i2c_write(0x0F12, 0x03B9);//0387 //awbb_IndoorGrZones_m_BGrid[7]
s5k5caga_i2c_write(0x0F12, 0x02D2);//02A0 //awbb_IndoorGrZones_m_BGrid[8]
s5k5caga_i2c_write(0x0F12, 0x0392);//0360 //awbb_IndoorGrZones_m_BGrid[9]
s5k5caga_i2c_write(0x0F12, 0x02AE);//027C //awbb_IndoorGrZones_m_BGrid[10]
s5k5caga_i2c_write(0x0F12, 0x0367);//0335 //awbb_IndoorGrZones_m_BGrid[11]
s5k5caga_i2c_write(0x0F12, 0x028F);//025D //awbb_IndoorGrZones_m_BGrid[12]
s5k5caga_i2c_write(0x0F12, 0x033C);//030A //awbb_IndoorGrZones_m_BGrid[13]
s5k5caga_i2c_write(0x0F12, 0x0275);//0243 //awbb_IndoorGrZones_m_BGrid[14]
s5k5caga_i2c_write(0x0F12, 0x0317);//02E5 //awbb_IndoorGrZones_m_BGrid[15]
s5k5caga_i2c_write(0x0F12, 0x0259);//0227 //awbb_IndoorGrZones_m_BGrid[16]
s5k5caga_i2c_write(0x0F12, 0x02EF);//02BD //awbb_IndoorGrZones_m_BGrid[17]
s5k5caga_i2c_write(0x0F12, 0x0240);//020E //awbb_IndoorGrZones_m_BGrid[18]
s5k5caga_i2c_write(0x0F12, 0x02D0);//029E //awbb_IndoorGrZones_m_BGrid[19]
s5k5caga_i2c_write(0x0F12, 0x0229);//01F7 //awbb_IndoorGrZones_m_BGrid[20]
s5k5caga_i2c_write(0x0F12, 0x02B1);//027F //awbb_IndoorGrZones_m_BGrid[21]
s5k5caga_i2c_write(0x0F12, 0x0215);//01E3 //awbb_IndoorGrZones_m_BGrid[22]
s5k5caga_i2c_write(0x0F12, 0x0294);//0262 //awbb_IndoorGrZones_m_BGrid[23]
s5k5caga_i2c_write(0x0F12, 0x0203);//01D1 //awbb_IndoorGrZones_m_BGrid[24]
s5k5caga_i2c_write(0x0F12, 0x027F);//024D //awbb_IndoorGrZones_m_BGrid[25]
s5k5caga_i2c_write(0x0F12, 0x01EF);//01BD //awbb_IndoorGrZones_m_BGrid[26]
s5k5caga_i2c_write(0x0F12, 0x0264);//0232 //awbb_IndoorGrZones_m_BGrid[27]
s5k5caga_i2c_write(0x0F12, 0x01E4);//01B2 //awbb_IndoorGrZones_m_BGrid[28]
s5k5caga_i2c_write(0x0F12, 0x024C);//021A //awbb_IndoorGrZones_m_BGrid[29]
s5k5caga_i2c_write(0x0F12, 0x01E5);//01B3 //awbb_IndoorGrZones_m_BGrid[30]
s5k5caga_i2c_write(0x0F12, 0x0233);//0201 //awbb_IndoorGrZones_m_BGrid[31]
s5k5caga_i2c_write(0x0F12, 0x01EE);//01BC //awbb_IndoorGrZones_m_BGrid[32]
s5k5caga_i2c_write(0x0F12, 0x020F);//01DD //awbb_IndoorGrZones_m_BGrid[33]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_IndoorGrZones_m_BGrid[34]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_IndoorGrZones_m_BGrid[35]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_IndoorGrZones_m_BGrid[36]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_IndoorGrZones_m_BGrid[37]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_IndoorGrZones_m_BGrid[38]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_IndoorGrZones_m_BGrid[39]
s5k5caga_i2c_write(0x0F12, 0x0005); //awbb_IndoorGrZones_m_GridStep // param_end awbb_IndoorGrZones_m_BGrid
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x002A, 0x0CA0);
s5k5caga_i2c_write(0x0F12, 0x0101);//011A //awbb_IndoorGrZones_m_Boffs
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x002A, 0x0CE0); // param_start awbb_LowBrGrZones_m_BGrid
s5k5caga_i2c_write(0x0F12, 0x0399);//0376 //awbb_LowBrGrZones_m_BGrid[0]
s5k5caga_i2c_write(0x0F12, 0x0417);//03F4 //awbb_LowBrGrZones_m_BGrid[1]
s5k5caga_i2c_write(0x0F12, 0x0327);//0304 //awbb_LowBrGrZones_m_BGrid[2]
s5k5caga_i2c_write(0x0F12, 0x0417);//03F4 //awbb_LowBrGrZones_m_BGrid[3]
s5k5caga_i2c_write(0x0F12, 0x02BD);//029A //awbb_LowBrGrZones_m_BGrid[4]
s5k5caga_i2c_write(0x0F12, 0x0409);//03E6 //awbb_LowBrGrZones_m_BGrid[5]
s5k5caga_i2c_write(0x0F12, 0x0271);//024E //awbb_LowBrGrZones_m_BGrid[6]
s5k5caga_i2c_write(0x0F12, 0x03BD);//039A //awbb_LowBrGrZones_m_BGrid[7]
s5k5caga_i2c_write(0x0F12, 0x0231);//020E //awbb_LowBrGrZones_m_BGrid[8]
s5k5caga_i2c_write(0x0F12, 0x036F);//034C //awbb_LowBrGrZones_m_BGrid[9]
s5k5caga_i2c_write(0x0F12, 0x0203);//01E0 //awbb_LowBrGrZones_m_BGrid[10]
s5k5caga_i2c_write(0x0F12, 0x0322);//02FF //awbb_LowBrGrZones_m_BGrid[11]
s5k5caga_i2c_write(0x0F12, 0x01D0);//01AD //awbb_LowBrGrZones_m_BGrid[12]
s5k5caga_i2c_write(0x0F12, 0x02DB);//02B8 //awbb_LowBrGrZones_m_BGrid[13]
s5k5caga_i2c_write(0x0F12, 0x01AD);//018A //awbb_LowBrGrZones_m_BGrid[14]
s5k5caga_i2c_write(0x0F12, 0x02A7);//0284 //awbb_LowBrGrZones_m_BGrid[15]
s5k5caga_i2c_write(0x0F12, 0x01AA);//0187 //awbb_LowBrGrZones_m_BGrid[16]
s5k5caga_i2c_write(0x0F12, 0x027D);//025A //awbb_LowBrGrZones_m_BGrid[17]
s5k5caga_i2c_write(0x0F12, 0x01B0);//018D //awbb_LowBrGrZones_m_BGrid[18]
s5k5caga_i2c_write(0x0F12, 0x0219);//01F6 //awbb_LowBrGrZones_m_BGrid[19]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_LowBrGrZones_m_BGrid[20]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_LowBrGrZones_m_BGrid[21]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_LowBrGrZones_m_BGrid[22]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_LowBrGrZones_m_BGrid[23]
s5k5caga_i2c_write(0x0F12, 0x0006); //awbb_LowBrGrZones_m_GridStep // param_end awbb_LowBrGrZones_m_BGrid
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x002A, 0x0D18);
s5k5caga_i2c_write(0x0F12, 0x00DF);//00FA //awbb_LowBrGrZones_m_Boffs
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x002A, 0x0CA4); // param_start awbb_OutdoorGrZones_m_BGrid
s5k5caga_i2c_write(0x0F12, 0x0291);//026F //awbb_OutdoorGrZones_m_BGrid[0]
s5k5caga_i2c_write(0x0F12, 0x02C4);//029C //awbb_OutdoorGrZones_m_BGrid[1]
s5k5caga_i2c_write(0x0F12, 0x0244);//0238 //awbb_OutdoorGrZones_m_BGrid[2]
s5k5caga_i2c_write(0x0F12, 0x02B6);//0284 //awbb_OutdoorGrZones_m_BGrid[3]
s5k5caga_i2c_write(0x0F12, 0x0215);//0206 //awbb_OutdoorGrZones_m_BGrid[4]
s5k5caga_i2c_write(0x0F12, 0x028F);//0250 //awbb_OutdoorGrZones_m_BGrid[5]
s5k5caga_i2c_write(0x0F12, 0x01F2);//01D6 //awbb_OutdoorGrZones_m_BGrid[6]
s5k5caga_i2c_write(0x0F12, 0x025F);//0226 //awbb_OutdoorGrZones_m_BGrid[7]
s5k5caga_i2c_write(0x0F12, 0x01E4);//01BC //awbb_OutdoorGrZones_m_BGrid[8]
s5k5caga_i2c_write(0x0F12, 0x021E);//01F6 //awbb_OutdoorGrZones_m_BGrid[9]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_OutdoorGrZones_m_BGrid[10]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_OutdoorGrZones_m_BGrid[11]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_OutdoorGrZones_m_BGrid[12]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_OutdoorGrZones_m_BGrid[13]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_OutdoorGrZones_m_BGrid[14]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_OutdoorGrZones_m_BGrid[15]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_OutdoorGrZones_m_BGrid[16]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_OutdoorGrZones_m_BGrid[17]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_OutdoorGrZones_m_BGrid[18]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_OutdoorGrZones_m_BGrid[19]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_OutdoorGrZones_m_BGrid[20]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_OutdoorGrZones_m_BGrid[21]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_OutdoorGrZones_m_BGrid[22]
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_OutdoorGrZones_m_BGrid[23]
s5k5caga_i2c_write(0x0F12, 0x0006); //awbb_OutdoorGrZones_m_GridStep // param_end awbb_OutdoorGrZones_m_BGrid
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x002A, 0x0CDC);
s5k5caga_i2c_write(0x0F12, 0x01F2);//0212 //awbb_OutdoorGrZones_m_Boffs
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x002A, 0x0D1C);
s5k5caga_i2c_write(0x0F12, 0x034D); //awbb_CrclLowT_R_c
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x002A, 0x0D20);
s5k5caga_i2c_write(0x0F12, 0x016C); //awbb_CrclLowT_B_c
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x002A, 0x0D24);
s5k5caga_i2c_write(0x0F12, 0x49D5); //awbb_CrclLowT_Rad_c
s5k5caga_i2c_write(0x0F12, 0x0000);
s5k5caga_i2c_write(0x002A, 0x0D46);
s5k5caga_i2c_write(0x0F12, 0x0470); //awbb_MvEq_RBthresh
s5k5caga_i2c_write(0x002A, 0x0D5C);
s5k5caga_i2c_write(0x0F12, 0x0534); //awbb_LowTempRB
s5k5caga_i2c_write(0x002A, 0x0D2C);
s5k5caga_i2c_write(0x0F12, 0x0131); //awbb_IntcR 
s5k5caga_i2c_write(0x0F12, 0x012F);  //012C //awbb_IntcB 

s5k5caga_i2c_write(0x002A, 0x0E36);    
s5k5caga_i2c_write(0x0F12, 0x0000);//0028  //R OFFSET 
s5k5caga_i2c_write(0x0F12, 0x0000);//FFD8  //B OFFSET 
s5k5caga_i2c_write(0x0F12, 0x0000);  //G OFFSET 

s5k5caga_i2c_write(0x002A, 0x0DD4);    
s5k5caga_i2c_write(0x0F12, 0x0000);//0000//0000 //awbb_GridCorr_R[0] //           
s5k5caga_i2c_write(0x0F12, 0x0000);//0000//0000 //awbb_GridCorr_R[1] //    
s5k5caga_i2c_write(0x0F12, 0x0000);//0000//0000 //awbb_GridCorr_R[2] //    
s5k5caga_i2c_write(0x0F12, 0x0000);//0000//0000 //awbb_GridCorr_R[3] //    
s5k5caga_i2c_write(0x0F12, 0xFFF1);//0028//FFF0 //awbb_GridCorr_R[4] //    
s5k5caga_i2c_write(0x0F12, 0x001E);//005A//0080 //awbb_GridCorr_R[5] //     
s5k5caga_i2c_write(0x0F12, 0x0000);//0000//0000 //awbb_GridCorr_R[6] //    
s5k5caga_i2c_write(0x0F12, 0x0000);//0000//0000 //awbb_GridCorr_R[7] //    
s5k5caga_i2c_write(0x0F12, 0x0000);//0000//0000 //awbb_GridCorr_R[8] //    
s5k5caga_i2c_write(0x0F12, 0x0000);//0000//0000 //awbb_GridCorr_R[9] //    
s5k5caga_i2c_write(0x0F12, 0xFFF1);//0028//FFF0 //awbb_GridCorr_R[10] //   
s5k5caga_i2c_write(0x0F12, 0x001E);//005A//0080 //awbb_GridCorr_R[11] //    
s5k5caga_i2c_write(0x0F12, 0x0000);//0000//0000 //awbb_GridCorr_R[12] //   
s5k5caga_i2c_write(0x0F12, 0x0000);//0000//0000 //awbb_GridCorr_R[13] //   
s5k5caga_i2c_write(0x0F12, 0x0000);//0000//0000 //awbb_GridCorr_R[14] //   
s5k5caga_i2c_write(0x0F12, 0x0000);//0000//0000 //awbb_GridCorr_R[15] //   
s5k5caga_i2c_write(0x0F12, 0xFFF1);//0028//FFF0 //awbb_GridCorr_R[16] //   
s5k5caga_i2c_write(0x0F12, 0x001E);//005A//0080 //awbb_GridCorr_R[17] //   
 
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_GridCorr_B[0] ////  
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_GridCorr_B[1] //    
s5k5caga_i2c_write(0x0F12, 0x006E);//0032 //awbb_GridCorr_B[2] //    
s5k5caga_i2c_write(0x0F12, 0x0046);//0000 //awbb_GridCorr_B[3] //    
s5k5caga_i2c_write(0x0F12, 0x0000);//0020 //awbb_GridCorr_B[4] //    
s5k5caga_i2c_write(0x0F12, 0xFFC0);//FFC0 //awbb_GridCorr_B[5] // 
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_GridCorr_B[6] //    
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_GridCorr_B[7] //    
s5k5caga_i2c_write(0x0F12, 0x006E);//0032 //awbb_GridCorr_B[8] //    
s5k5caga_i2c_write(0x0F12, 0x0046);//0000 //awbb_GridCorr_B[9] //    
s5k5caga_i2c_write(0x0F12, 0x0000);//0020 //awbb_GridCorr_B[10] //   
s5k5caga_i2c_write(0x0F12, 0xFFC0);//FFC0 //awbb_GridCorr_B[11] //
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_GridCorr_B[12] //   
s5k5caga_i2c_write(0x0F12, 0x0000);//0000 //awbb_GridCorr_B[13] //   
s5k5caga_i2c_write(0x0F12, 0x006E);//0032 //awbb_GridCorr_B[14] //   
s5k5caga_i2c_write(0x0F12, 0x0046);//0000 //awbb_GridCorr_B[15] //   
s5k5caga_i2c_write(0x0F12, 0x0000);//0020 //awbb_GridCorr_B[16] //   
s5k5caga_i2c_write(0x0F12, 0xFFC0);//FFC0 //awbb_GridCorr_B[17] //   
  
s5k5caga_i2c_write(0x0F12, 0x02F2);//02D9 //awbb_GridConst_1[0] //             
s5k5caga_i2c_write(0x0F12, 0x0340);//0357 //awbb_GridConst_1[1] //             
s5k5caga_i2c_write(0x0F12, 0x0398);//03D1 //awbb_GridConst_1[2] //             
  
  
s5k5caga_i2c_write(0x0F12, 0x0DF6);//0DF6//0DF6 //0E4F//0DE9//0DE9//awbb_GridConst_2[0] //         
s5k5caga_i2c_write(0x0F12, 0x0EAA);//0ED8//0EA3//0ED8 //0EDD//0EDD//0EDD//awbb_GridConst_2[1] //         
s5k5caga_i2c_write(0x0F12, 0x0EB5);//0F51//0F1A//0F51 //0F42//0F42//0F42//awbb_GridConst_2[2] //         
s5k5caga_i2c_write(0x0F12, 0x0F33);//0F5C//0F4A//0F5C //0F4E//0F4E//0F54//awbb_GridConst_2[3] //         
s5k5caga_i2c_write(0x0F12, 0x0F9D);//0F8F//0FA6//0F8F //0F99//0F99//0FAE//awbb_GridConst_2[4] //         
s5k5caga_i2c_write(0x0F12, 0x0FF2);//1006//1006 //1006//1006//1011//awbb_GridConst_2[5] //         
  
s5k5caga_i2c_write(0x0F12, 0x00AC); //00BA//awbb_GridCoeff_R_1           
s5k5caga_i2c_write(0x0F12, 0x00BD); //00AF//awbb_GridCoeff_B_1           
s5k5caga_i2c_write(0x0F12, 0x0049); //0049//awbb_GridCoeff_R_2           
s5k5caga_i2c_write(0x0F12, 0x00F5); //00F5//awbb_GridCoeff_B_2           
  
s5k5caga_i2c_write(0x002A, 0x0E4A);           
s5k5caga_i2c_write(0x0F12, 0x0002); //awbb_GridEnable//    
//================================================================================================
// SET GRID OFFSET
//================================================================================================
// Not used
             //002A 0E4A
             //0F12 0000 // #awbb_GridEnable

//================================================================================================
// SET GAMMA
//================================================================================================
   //Our //old //STW
s5k5caga_i2c_write(0x002A, 0x3288);
s5k5caga_i2c_write(0x0F12, 0x0000); //#SARR_usDualGammaLutRGBIndoor_0__0_ 0x70003288
s5k5caga_i2c_write(0x0F12, 0x0004); //#SARR_usDualGammaLutRGBIndoor_0__1_ 0x7000328A
s5k5caga_i2c_write(0x0F12, 0x0010); //#SARR_usDualGammaLutRGBIndoor_0__2_ 0x7000328C
s5k5caga_i2c_write(0x0F12, 0x002A); //#SARR_usDualGammaLutRGBIndoor_0__3_ 0x7000328E
s5k5caga_i2c_write(0x0F12, 0x0062); //#SARR_usDualGammaLutRGBIndoor_0__4_ 0x70003290
s5k5caga_i2c_write(0x0F12, 0x00D5); //#SARR_usDualGammaLutRGBIndoor_0__5_ 0x70003292
s5k5caga_i2c_write(0x0F12, 0x0138); //#SARR_usDualGammaLutRGBIndoor_0__6_ 0x70003294
s5k5caga_i2c_write(0x0F12, 0x0161); //#SARR_usDualGammaLutRGBIndoor_0__7_ 0x70003296
s5k5caga_i2c_write(0x0F12, 0x0186); //#SARR_usDualGammaLutRGBIndoor_0__8_ 0x70003298
s5k5caga_i2c_write(0x0F12, 0x01BC); //#SARR_usDualGammaLutRGBIndoor_0__9_ 0x7000329A
s5k5caga_i2c_write(0x0F12, 0x01E8); //#SARR_usDualGammaLutRGBIndoor_0__10_ 0x7000329C
s5k5caga_i2c_write(0x0F12, 0x020F); //#SARR_usDualGammaLutRGBIndoor_0__11_ 0x7000329E
s5k5caga_i2c_write(0x0F12, 0x0232); //#SARR_usDualGammaLutRGBIndoor_0__12_ 0x700032A0
s5k5caga_i2c_write(0x0F12, 0x0273); //#SARR_usDualGammaLutRGBIndoor_0__13_ 0x700032A2
s5k5caga_i2c_write(0x0F12, 0x02AF); //#SARR_usDualGammaLutRGBIndoor_0__14_ 0x700032A4
s5k5caga_i2c_write(0x0F12, 0x0309); //#SARR_usDualGammaLutRGBIndoor_0__15_ 0x700032A6
s5k5caga_i2c_write(0x0F12, 0x0355); //#SARR_usDualGammaLutRGBIndoor_0__16_ 0x700032A8
s5k5caga_i2c_write(0x0F12, 0x0394); //#SARR_usDualGammaLutRGBIndoor_0__17_ 0x700032AA
s5k5caga_i2c_write(0x0F12, 0x03CE); //#SARR_usDualGammaLutRGBIndoor_0__18_ 0x700032AC
s5k5caga_i2c_write(0x0F12, 0x03FF); //#SARR_usDualGammaLutRGBIndoor_0__19_ 0x700032AE
s5k5caga_i2c_write(0x0F12, 0x0000); //#SARR_usDualGammaLutRGBIndoor_1__0_ 0x700032B0
s5k5caga_i2c_write(0x0F12, 0x0004); //#SARR_usDualGammaLutRGBIndoor_1__1_ 0x700032B2
s5k5caga_i2c_write(0x0F12, 0x0010); //#SARR_usDualGammaLutRGBIndoor_1__2_ 0x700032B4
s5k5caga_i2c_write(0x0F12, 0x002A); //#SARR_usDualGammaLutRGBIndoor_1__3_ 0x700032B6
s5k5caga_i2c_write(0x0F12, 0x0062); //#SARR_usDualGammaLutRGBIndoor_1__4_ 0x700032B8
s5k5caga_i2c_write(0x0F12, 0x00D5); //#SARR_usDualGammaLutRGBIndoor_1__5_ 0x700032BA
s5k5caga_i2c_write(0x0F12, 0x0138); //#SARR_usDualGammaLutRGBIndoor_1__6_ 0x700032BC
s5k5caga_i2c_write(0x0F12, 0x0161); //#SARR_usDualGammaLutRGBIndoor_1__7_ 0x700032BE
s5k5caga_i2c_write(0x0F12, 0x0186); //#SARR_usDualGammaLutRGBIndoor_1__8_ 0x700032C0
s5k5caga_i2c_write(0x0F12, 0x01BC); //#SARR_usDualGammaLutRGBIndoor_1__9_ 0x700032C2
s5k5caga_i2c_write(0x0F12, 0x01E8); //#SARR_usDualGammaLutRGBIndoor_1__10_ 0x700032C4
s5k5caga_i2c_write(0x0F12, 0x020F); //#SARR_usDualGammaLutRGBIndoor_1__11_ 0x700032C6
s5k5caga_i2c_write(0x0F12, 0x0232); //#SARR_usDualGammaLutRGBIndoor_1__12_ 0x700032C8
s5k5caga_i2c_write(0x0F12, 0x0273); //#SARR_usDualGammaLutRGBIndoor_1__13_ 0x700032CA
s5k5caga_i2c_write(0x0F12, 0x02AF); //#SARR_usDualGammaLutRGBIndoor_1__14_ 0x700032CC
s5k5caga_i2c_write(0x0F12, 0x0309); //#SARR_usDualGammaLutRGBIndoor_1__15_ 0x700032CE
s5k5caga_i2c_write(0x0F12, 0x0355); //#SARR_usDualGammaLutRGBIndoor_1__16_ 0x700032D0
s5k5caga_i2c_write(0x0F12, 0x0394); //#SARR_usDualGammaLutRGBIndoor_1__17_ 0x700032D2
s5k5caga_i2c_write(0x0F12, 0x03CE); //#SARR_usDualGammaLutRGBIndoor_1__18_ 0x700032D4
s5k5caga_i2c_write(0x0F12, 0x03FF); //#SARR_usDualGammaLutRGBIndoor_1__19_ 0x700032D6
s5k5caga_i2c_write(0x0F12, 0x0000); //#SARR_usDualGammaLutRGBIndoor_2__0_ 0x700032D8
s5k5caga_i2c_write(0x0F12, 0x0004); //#SARR_usDualGammaLutRGBIndoor_2__1_ 0x700032DA
s5k5caga_i2c_write(0x0F12, 0x0010); //#SARR_usDualGammaLutRGBIndoor_2__2_ 0x700032DC
s5k5caga_i2c_write(0x0F12, 0x002A); //#SARR_usDualGammaLutRGBIndoor_2__3_ 0x700032DE
s5k5caga_i2c_write(0x0F12, 0x0062); //#SARR_usDualGammaLutRGBIndoor_2__4_ 0x700032E0
s5k5caga_i2c_write(0x0F12, 0x00D5); //#SARR_usDualGammaLutRGBIndoor_2__5_ 0x700032E2
s5k5caga_i2c_write(0x0F12, 0x0138); //#SARR_usDualGammaLutRGBIndoor_2__6_ 0x700032E4
s5k5caga_i2c_write(0x0F12, 0x0161); //#SARR_usDualGammaLutRGBIndoor_2__7_ 0x700032E6
s5k5caga_i2c_write(0x0F12, 0x0186); //#SARR_usDualGammaLutRGBIndoor_2__8_ 0x700032E8
s5k5caga_i2c_write(0x0F12, 0x01BC); //#SARR_usDualGammaLutRGBIndoor_2__9_ 0x700032EA
s5k5caga_i2c_write(0x0F12, 0x01E8); //#SARR_usDualGammaLutRGBIndoor_2__10_ 0x700032EC
s5k5caga_i2c_write(0x0F12, 0x020F); //#SARR_usDualGammaLutRGBIndoor_2__11_ 0x700032EE
s5k5caga_i2c_write(0x0F12, 0x0232); //#SARR_usDualGammaLutRGBIndoor_2__12_ 0x700032F0
s5k5caga_i2c_write(0x0F12, 0x0273); //#SARR_usDualGammaLutRGBIndoor_2__13_ 0x700032F2
s5k5caga_i2c_write(0x0F12, 0x02AF); //#SARR_usDualGammaLutRGBIndoor_2__14_ 0x700032F4
s5k5caga_i2c_write(0x0F12, 0x0309); //#SARR_usDualGammaLutRGBIndoor_2__15_ 0x700032F6
s5k5caga_i2c_write(0x0F12, 0x0355); //#SARR_usDualGammaLutRGBIndoor_2__16_ 0x700032F8
s5k5caga_i2c_write(0x0F12, 0x0394); //#SARR_usDualGammaLutRGBIndoor_2__17_ 0x700032FA
s5k5caga_i2c_write(0x0F12, 0x03CE); //#SARR_usDualGammaLutRGBIndoor_2__18_ 0x700032FC
s5k5caga_i2c_write(0x0F12, 0x03FF); //#SARR_usDualGammaLutRGBIndoor_2__19_ 0x700032FE

s5k5caga_i2c_write(0x0F12, 0x0000); //#SARR_usDualGammaLutRGBOutdoor_0__0_ 0x70003300
s5k5caga_i2c_write(0x0F12, 0x0004); //#SARR_usDualGammaLutRGBOutdoor_0__1_ 0x70003302
s5k5caga_i2c_write(0x0F12, 0x0010); //#SARR_usDualGammaLutRGBOutdoor_0__2_ 0x70003304
s5k5caga_i2c_write(0x0F12, 0x002A); //#SARR_usDualGammaLutRGBOutdoor_0__3_ 0x70003306
s5k5caga_i2c_write(0x0F12, 0x0062); //#SARR_usDualGammaLutRGBOutdoor_0__4_ 0x70003308
s5k5caga_i2c_write(0x0F12, 0x00D5); //#SARR_usDualGammaLutRGBOutdoor_0__5_ 0x7000330A
s5k5caga_i2c_write(0x0F12, 0x0138); //#SARR_usDualGammaLutRGBOutdoor_0__6_ 0x7000330C
s5k5caga_i2c_write(0x0F12, 0x0161); //#SARR_usDualGammaLutRGBOutdoor_0__7_ 0x7000330E
s5k5caga_i2c_write(0x0F12, 0x0186); //#SARR_usDualGammaLutRGBOutdoor_0__8_ 0x70003310
s5k5caga_i2c_write(0x0F12, 0x01BC); //#SARR_usDualGammaLutRGBOutdoor_0__9_ 0x70003312
s5k5caga_i2c_write(0x0F12, 0x01E8); //#SARR_usDualGammaLutRGBOutdoor_0__10_0x70003314
s5k5caga_i2c_write(0x0F12, 0x020F); //#SARR_usDualGammaLutRGBOutdoor_0__11_0x70003316
s5k5caga_i2c_write(0x0F12, 0x0232); //#SARR_usDualGammaLutRGBOutdoor_0__12_0x70003318
s5k5caga_i2c_write(0x0F12, 0x0273); //#SARR_usDualGammaLutRGBOutdoor_0__13_0x7000331A
s5k5caga_i2c_write(0x0F12, 0x02AF); //#SARR_usDualGammaLutRGBOutdoor_0__14_0x7000331C
s5k5caga_i2c_write(0x0F12, 0x0309); //#SARR_usDualGammaLutRGBOutdoor_0__15_0x7000331E
s5k5caga_i2c_write(0x0F12, 0x0355); //#SARR_usDualGammaLutRGBOutdoor_0__16_0x70003320
s5k5caga_i2c_write(0x0F12, 0x0394); //#SARR_usDualGammaLutRGBOutdoor_0__17_0x70003322
s5k5caga_i2c_write(0x0F12, 0x03CE); //#SARR_usDualGammaLutRGBOutdoor_0__18_0x70003324
s5k5caga_i2c_write(0x0F12, 0x03FF); //#SARR_usDualGammaLutRGBOutdoor_0__19_0x70003326
s5k5caga_i2c_write(0x0F12, 0x0000); //#SARR_usDualGammaLutRGBOutdoor_1__0_ 0x70003328
s5k5caga_i2c_write(0x0F12, 0x0004); //#SARR_usDualGammaLutRGBOutdoor_1__1_ 0x7000332A
s5k5caga_i2c_write(0x0F12, 0x0010); //#SARR_usDualGammaLutRGBOutdoor_1__2_ 0x7000332C
s5k5caga_i2c_write(0x0F12, 0x002A); //#SARR_usDualGammaLutRGBOutdoor_1__3_ 0x7000332E
s5k5caga_i2c_write(0x0F12, 0x0062); //#SARR_usDualGammaLutRGBOutdoor_1__4_ 0x70003330
s5k5caga_i2c_write(0x0F12, 0x00D5); //#SARR_usDualGammaLutRGBOutdoor_1__5_ 0x70003332
s5k5caga_i2c_write(0x0F12, 0x0138); //#SARR_usDualGammaLutRGBOutdoor_1__6_ 0x70003334
s5k5caga_i2c_write(0x0F12, 0x0161); //#SARR_usDualGammaLutRGBOutdoor_1__7_ 0x70003336
s5k5caga_i2c_write(0x0F12, 0x0186); //#SARR_usDualGammaLutRGBOutdoor_1__8_ 0x70003338
s5k5caga_i2c_write(0x0F12, 0x01BC); //#SARR_usDualGammaLutRGBOutdoor_1__9_ 0x7000333A
s5k5caga_i2c_write(0x0F12, 0x01E8); //#SARR_usDualGammaLutRGBOutdoor_1__10_0x7000333C
s5k5caga_i2c_write(0x0F12, 0x020F); //#SARR_usDualGammaLutRGBOutdoor_1__11_0x7000333E
s5k5caga_i2c_write(0x0F12, 0x0232); //#SARR_usDualGammaLutRGBOutdoor_1__12_0x70003340
s5k5caga_i2c_write(0x0F12, 0x0273); //#SARR_usDualGammaLutRGBOutdoor_1__13_0x70003342
s5k5caga_i2c_write(0x0F12, 0x02AF); //#SARR_usDualGammaLutRGBOutdoor_1__14_0x70003344
s5k5caga_i2c_write(0x0F12, 0x0309); //#SARR_usDualGammaLutRGBOutdoor_1__15_0x70003346
s5k5caga_i2c_write(0x0F12, 0x0355); //#SARR_usDualGammaLutRGBOutdoor_1__16_0x70003348
s5k5caga_i2c_write(0x0F12, 0x0394); //#SARR_usDualGammaLutRGBOutdoor_1__17_0x7000334A
s5k5caga_i2c_write(0x0F12, 0x03CE); //#SARR_usDualGammaLutRGBOutdoor_1__18_0x7000334C
s5k5caga_i2c_write(0x0F12, 0x03FF); //#SARR_usDualGammaLutRGBOutdoor_1__19_0x7000334E
s5k5caga_i2c_write(0x0F12, 0x0000); //#SARR_usDualGammaLutRGBOutdoor_2__0_ 0x70003350
s5k5caga_i2c_write(0x0F12, 0x0004); //#SARR_usDualGammaLutRGBOutdoor_2__1_ 0x70003352
s5k5caga_i2c_write(0x0F12, 0x0010); //#SARR_usDualGammaLutRGBOutdoor_2__2_ 0x70003354
s5k5caga_i2c_write(0x0F12, 0x002A); //#SARR_usDualGammaLutRGBOutdoor_2__3_ 0x70003356
s5k5caga_i2c_write(0x0F12, 0x0062); //#SARR_usDualGammaLutRGBOutdoor_2__4_ 0x70003358
s5k5caga_i2c_write(0x0F12, 0x00D5); //#SARR_usDualGammaLutRGBOutdoor_2__5_ 0x7000335A
s5k5caga_i2c_write(0x0F12, 0x0138); //#SARR_usDualGammaLutRGBOutdoor_2__6_ 0x7000335C
s5k5caga_i2c_write(0x0F12, 0x0161); //#SARR_usDualGammaLutRGBOutdoor_2__7_ 0x7000335E
s5k5caga_i2c_write(0x0F12, 0x0186); //#SARR_usDualGammaLutRGBOutdoor_2__8_ 0x70003360
s5k5caga_i2c_write(0x0F12, 0x01BC); //#SARR_usDualGammaLutRGBOutdoor_2__9_ 0x70003362
s5k5caga_i2c_write(0x0F12, 0x01E8); //#SARR_usDualGammaLutRGBOutdoor_2__10_0x70003364
s5k5caga_i2c_write(0x0F12, 0x020F); //#SARR_usDualGammaLutRGBOutdoor_2__11_0x70003366
s5k5caga_i2c_write(0x0F12, 0x0232); //#SARR_usDualGammaLutRGBOutdoor_2__12_0x70003368
s5k5caga_i2c_write(0x0F12, 0x0273); //#SARR_usDualGammaLutRGBOutdoor_2__13_0x7000336A
s5k5caga_i2c_write(0x0F12, 0x02AF); //#SARR_usDualGammaLutRGBOutdoor_2__14_0x7000336C
s5k5caga_i2c_write(0x0F12, 0x0309); //#SARR_usDualGammaLutRGBOutdoor_2__15_0x7000336E
s5k5caga_i2c_write(0x0F12, 0x0355); //#SARR_usDualGammaLutRGBOutdoor_2__16_0x70003370
s5k5caga_i2c_write(0x0F12, 0x0394); //#SARR_usDualGammaLutRGBOutdoor_2__17_0x70003372
s5k5caga_i2c_write(0x0F12, 0x03CE); //#SARR_usDualGammaLutRGBOutdoor_2__18_0x70003374
s5k5caga_i2c_write(0x0F12, 0x03FF); //#SARR_usDualGammaLutRGBOutdoor_2__19_0x70003376

s5k5caga_i2c_write(0x002A, 0x06A6);
s5k5caga_i2c_write(0x0F12, 0x00D8); // #SARR_AwbCcmCord_0_ H
s5k5caga_i2c_write(0x0F12, 0x00FC); // #SARR_AwbCcmCord_1_ A
s5k5caga_i2c_write(0x0F12, 0x0120); // #SARR_AwbCcmCord_2_ TL84/U30
s5k5caga_i2c_write(0x0F12, 0x014C); // #SARR_AwbCcmCord_3_ CWF
s5k5caga_i2c_write(0x0F12, 0x0184); // #SARR_AwbCcmCord_4_ D50
s5k5caga_i2c_write(0x0F12, 0x01AD); // #SARR_AwbCcmCord_5_ D65

s5k5caga_i2c_write(0x002A, 0x1034);  // Hong  1123           
s5k5caga_i2c_write(0x0F12, 0x00B5); // #SARR_IllumType[0]   
s5k5caga_i2c_write(0x0F12, 0x00CF); // #SARR_IllumType[1]   
s5k5caga_i2c_write(0x0F12, 0x0116); // #SARR_IllumType[2]   
s5k5caga_i2c_write(0x0F12, 0x0140); // #SARR_IllumType[3]   
s5k5caga_i2c_write(0x0F12, 0x0150); // #SARR_IllumType[4]   
s5k5caga_i2c_write(0x0F12, 0x0174); // #SARR_IllumType[5]   
s5k5caga_i2c_write(0x0F12, 0x018E); // #SARR_IllumType[6]   
              
s5k5caga_i2c_write(0x0F12, 0x00B8); // #SARR_IllumTypeF[0]  
s5k5caga_i2c_write(0x0F12, 0x00BA); // #SARR_IllumTypeF[1]  
s5k5caga_i2c_write(0x0F12, 0x00C0); // #SARR_IllumTypeF[2]  
s5k5caga_i2c_write(0x0F12, 0x00F0); // #SARR_IllumTypeF[3]  
s5k5caga_i2c_write(0x0F12, 0x0100); // #SARR_IllumTypeF[4]  
s5k5caga_i2c_write(0x0F12, 0x0100); // #SARR_IllumTypeF[5]  
s5k5caga_i2c_write(0x0F12, 0x0100); // #SARR_IllumTypeF[6]  

   
//================================================================================================
// SET AFIT
//================================================================================================
// Noise index
s5k5caga_i2c_write(0x002A, 0x0764);
s5k5caga_i2c_write(0x0F12, 0x0049);//0041 // #afit_uNoiseIndInDoor[0] // 64
s5k5caga_i2c_write(0x0F12, 0x005F);//0063 // #afit_uNoiseIndInDoor[1] // 165
s5k5caga_i2c_write(0x0F12, 0x00CB);//00BB // #afit_uNoiseIndInDoor[2] // 377
s5k5caga_i2c_write(0x0F12, 0x01E0);//0193 // #afit_uNoiseIndInDoor[3] // 616
s5k5caga_i2c_write(0x0F12, 0x0220);//02BC // #afit_uNoiseIndInDoor[4] // 700
             // AFIT table start address // 7000_07C4
s5k5caga_i2c_write(0x002A, 0x0770);
s5k5caga_i2c_write(0x0F12, 0x07C4);
s5k5caga_i2c_write(0x0F12, 0x7000);
             // AFIT table (Variables)
s5k5caga_i2c_write(0x002A, 0x07C4);
s5k5caga_i2c_write(0x0F12, 0x0034);  //0034//0034//0000 // #TVAR_afit_pBaseVals[0]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[1]
s5k5caga_i2c_write(0x0F12, 0x0014);  //0014//0014//0000 // #TVAR_afit_pBaseVals[2]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[3]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[4]
s5k5caga_i2c_write(0x0F12, 0x00C1);  //00C1//00C1//00C4 // #TVAR_afit_pBaseVals[5]
s5k5caga_i2c_write(0x0F12, 0x03FF);  //03FF//03FF//03FF // #TVAR_afit_pBaseVals[6]
s5k5caga_i2c_write(0x0F12, 0x009C);  //009C//009C//009C // #TVAR_afit_pBaseVals[7]
s5k5caga_i2c_write(0x0F12, 0x0251);  //0251//0251//017C // #TVAR_afit_pBaseVals[8]
s5k5caga_i2c_write(0x0F12, 0x03FF);  //03FF//03FF//03FF // #TVAR_afit_pBaseVals[9]
s5k5caga_i2c_write(0x0F12, 0x000C);  //000C//000C//000C // #TVAR_afit_pBaseVals[10]
s5k5caga_i2c_write(0x0F12, 0x0010);  //0010//0010//0010 // #TVAR_afit_pBaseVals[11]
s5k5caga_i2c_write(0x0F12, 0x012C);  //012C//012C//0104 // #TVAR_afit_pBaseVals[12]
s5k5caga_i2c_write(0x0F12, 0x03E8);  //03E8//03E8//03E8 // #TVAR_afit_pBaseVals[13]
s5k5caga_i2c_write(0x0F12, 0x0046);  //0046//0046//0023 // #TVAR_afit_pBaseVals[14]
s5k5caga_i2c_write(0x0F12, 0x005A);  //005A//005A//012C // #TVAR_afit_pBaseVals[15]
s5k5caga_i2c_write(0x0F12, 0x0070);  //0070//0070//0070 // #TVAR_afit_pBaseVals[16]
s5k5caga_i2c_write(0x0F12, 0x0020);  //0000//0000//0010 // #TVAR_afit_pBaseVals[17]
s5k5caga_i2c_write(0x0F12, 0x0020);  //0000//0000//0010 // #TVAR_afit_pBaseVals[18]
s5k5caga_i2c_write(0x0F12, 0x01AA);  //01AA//01AA//01AA // #TVAR_afit_pBaseVals[19]
s5k5caga_i2c_write(0x0F12, 0x003C);  //003C//003C//0064 // #TVAR_afit_pBaseVals[20]
s5k5caga_i2c_write(0x0F12, 0x003C);  //003C//003C//0064 // #TVAR_afit_pBaseVals[21]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//000A // #TVAR_afit_pBaseVals[22]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//000A // #TVAR_afit_pBaseVals[23]
s5k5caga_i2c_write(0x0F12, 0x003E);  //003E//003E//003C // #TVAR_afit_pBaseVals[24]
s5k5caga_i2c_write(0x0F12, 0x0008);  //0008//0008//0024 // #TVAR_afit_pBaseVals[25]
s5k5caga_i2c_write(0x0F12, 0x003C);  //003C//003C//002A // #TVAR_afit_pBaseVals[26]
s5k5caga_i2c_write(0x0F12, 0x001E);  //001E//001E//0024 // #TVAR_afit_pBaseVals[27]
s5k5caga_i2c_write(0x0F12, 0x003C);  //003C//003C//002A // #TVAR_afit_pBaseVals[28]
s5k5caga_i2c_write(0x0F12, 0x001E);  //001E//001E//0024 // #TVAR_afit_pBaseVals[29]
s5k5caga_i2c_write(0x0F12, 0x0A24);  //0A24//0A24//0A24 // #TVAR_afit_pBaseVals[30]
s5k5caga_i2c_write(0x0F12, 0x1701);  //1701//1701//1701 // #TVAR_afit_pBaseVals[31]
s5k5caga_i2c_write(0x0F12, 0x0229);  //0229//0229//0229 // #TVAR_afit_pBaseVals[32]
s5k5caga_i2c_write(0x0F12, 0x1403);  //1403//1403//1403 // #TVAR_afit_pBaseVals[33]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[34]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[35]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[36]
s5k5caga_i2c_write(0x0F12, 0x00FF);  //00FF//00FF//00FF // #TVAR_afit_pBaseVals[37]
s5k5caga_i2c_write(0x0F12, 0x045A);  //045A//045A//043B // #TVAR_afit_pBaseVals[38]
s5k5caga_i2c_write(0x0F12, 0x1414);  //1414//1414//1414 // #TVAR_afit_pBaseVals[39]
s5k5caga_i2c_write(0x0F12, 0x0301);  //0301//0301//0301 // #TVAR_afit_pBaseVals[40]
s5k5caga_i2c_write(0x0F12, 0xFF07);  //FF07//FF07//FF07 // #TVAR_afit_pBaseVals[41]
s5k5caga_i2c_write(0x0F12, 0x081E);  //081E//081E//051E // #TVAR_afit_pBaseVals[42]
s5k5caga_i2c_write(0x0F12, 0x0A14);  //0A14//0A14//0A1E // #TVAR_afit_pBaseVals[43]
s5k5caga_i2c_write(0x0F12, 0x0F0F);  //0F0F//0F0F//0F0F // #TVAR_afit_pBaseVals[44]
s5k5caga_i2c_write(0x0F12, 0x0A08);  //0A08//0A08//0A07    //0A05 // #TVAR_afit_pBaseVals[45]
s5k5caga_i2c_write(0x0F12, 0x0032);  //0032//0032//0A3C // #TVAR_afit_pBaseVals[46]
s5k5caga_i2c_write(0x0F12, 0x000E);  //000E//000E//0A28 // #TVAR_afit_pBaseVals[47]
s5k5caga_i2c_write(0x0F12, 0x0002);  //0002//0002//0002 // #TVAR_afit_pBaseVals[48]
s5k5caga_i2c_write(0x0F12, 0x00FF);  //00FF//00FF//00FF // #TVAR_afit_pBaseVals[49]
s5k5caga_i2c_write(0x0F12, 0x1102);  //1102//1102//1002 // #TVAR_afit_pBaseVals[50]
s5k5caga_i2c_write(0x0F12, 0x001B);  //001B//001B//001D // #TVAR_afit_pBaseVals[51]
s5k5caga_i2c_write(0x0F12, 0x0900);  //0900//0900//0900 // #TVAR_afit_pBaseVals[52]
s5k5caga_i2c_write(0x0F12, 0x0600);  //0600//0600//0600 // #TVAR_afit_pBaseVals[53]
s5k5caga_i2c_write(0x0F12, 0x0504);  //0504//0504//0504 // #TVAR_afit_pBaseVals[54]
s5k5caga_i2c_write(0x0F12, 0x0306);  //0306//0306//0305 // #TVAR_afit_pBaseVals[55]
s5k5caga_i2c_write(0x0F12, 0x4603);  //4603//4603//3C03 // #TVAR_afit_pBaseVals[56]
s5k5caga_i2c_write(0x0F12, 0x0480);  //0480//0480//006E // #TVAR_afit_pBaseVals[57]
s5k5caga_i2c_write(0x0F12, 0x003C);  //003C//003C//0078 // #TVAR_afit_pBaseVals[58]
s5k5caga_i2c_write(0x0F12, 0x0080);  //0080//0080//0080 // #TVAR_afit_pBaseVals[59]
s5k5caga_i2c_write(0x0F12, 0x0101);  //0101//0101//1414 // #TVAR_afit_pBaseVals[60]
s5k5caga_i2c_write(0x0F12, 0x0707);  //0707//0707//0101 // #TVAR_afit_pBaseVals[61]
s5k5caga_i2c_write(0x0F12, 0x5001);  //5001//4601//5002 // #TVAR_afit_pBaseVals[62]
s5k5caga_i2c_write(0x0F12, 0xC850);  //7850//4944//7850 // #TVAR_afit_pBaseVals[63]
s5k5caga_i2c_write(0x0F12, 0x50C8);  //5078//5044//2878 // #TVAR_afit_pBaseVals[64]
s5k5caga_i2c_write(0x0F12, 0x0500);  //0500//0500//0A00 // #TVAR_afit_pBaseVals[65]
s5k5caga_i2c_write(0x0F12, 0x0003);  //0003//0003//1403 // #TVAR_afit_pBaseVals[66]
s5k5caga_i2c_write(0x0F12, 0x5400);  //5400//5400//1E0C // #TVAR_afit_pBaseVals[67]
s5k5caga_i2c_write(0x0F12, 0x0714);  //0714//0714//070A // #TVAR_afit_pBaseVals[68]
s5k5caga_i2c_write(0x0F12, 0x32FF);  //32FF//32FF//32FF // #TVAR_afit_pBaseVals[69]
s5k5caga_i2c_write(0x0F12, 0x5A04);  //5A04//5A04//5004 // #TVAR_afit_pBaseVals[70]
s5k5caga_i2c_write(0x0F12, 0x201E);  //201E//201E//0F40 // #TVAR_afit_pBaseVals[71]
s5k5caga_i2c_write(0x0F12, 0x4012);  //4012//4012//400F // #TVAR_afit_pBaseVals[72]
s5k5caga_i2c_write(0x0F12, 0x0204);  //0204//0204//0204 // #TVAR_afit_pBaseVals[73]
s5k5caga_i2c_write(0x0F12, 0x1403);  //1403//1403//1E03 // #TVAR_afit_pBaseVals[74]
s5k5caga_i2c_write(0x0F12, 0x0114);  //0114//0114//011E // #TVAR_afit_pBaseVals[75]
s5k5caga_i2c_write(0x0F12, 0x0101);  //0101//0101//0101 // #TVAR_afit_pBaseVals[76]
s5k5caga_i2c_write(0x0F12, 0x4446);  //4446//4446//5050 // #TVAR_afit_pBaseVals[77]
s5k5caga_i2c_write(0x0F12, 0x646E);  //646E//646E//7878 // #TVAR_afit_pBaseVals[78]
s5k5caga_i2c_write(0x0F12, 0x0028);  //0028//0028//0028 // #TVAR_afit_pBaseVals[79]
s5k5caga_i2c_write(0x0F12, 0x030A);  //030A//030A//030A // #TVAR_afit_pBaseVals[80]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0714 // #TVAR_afit_pBaseVals[81]
s5k5caga_i2c_write(0x0F12, 0x141E);  //141E//141E//0A1E // #TVAR_afit_pBaseVals[82]
s5k5caga_i2c_write(0x0F12, 0xFF07);  //FF07//FF07//FF07 // #TVAR_afit_pBaseVals[83]
s5k5caga_i2c_write(0x0F12, 0x0432);  //0432//0432//0432 // #TVAR_afit_pBaseVals[84]
s5k5caga_i2c_write(0x0F12, 0x0014);  //0014//0014//4050 // #TVAR_afit_pBaseVals[85]
s5k5caga_i2c_write(0x0F12, 0x0F0F);  //0F0F//0F0F//0F0F // #TVAR_afit_pBaseVals[86]
s5k5caga_i2c_write(0x0F12, 0x0440);  //0440//0440//0440 // #TVAR_afit_pBaseVals[87]
s5k5caga_i2c_write(0x0F12, 0x0302);  //0302//0302//0302 // #TVAR_afit_pBaseVals[88]
s5k5caga_i2c_write(0x0F12, 0x1414);  //1414//1414//1E1E // #TVAR_afit_pBaseVals[89]
s5k5caga_i2c_write(0x0F12, 0x0101);  //0101//0101//0101 // #TVAR_afit_pBaseVals[90]
s5k5caga_i2c_write(0x0F12, 0x4601);  //4601//4601//5001 // #TVAR_afit_pBaseVals[91]
s5k5caga_i2c_write(0x0F12, 0x6E44);  //6E44//6E44//7850 // #TVAR_afit_pBaseVals[92]
s5k5caga_i2c_write(0x0F12, 0x2864);  //2864//2864//2878 // #TVAR_afit_pBaseVals[93]
s5k5caga_i2c_write(0x0F12, 0x0A00);  //0A00//0A00//0A00 // #TVAR_afit_pBaseVals[94]
s5k5caga_i2c_write(0x0F12, 0x0003);  //0003//0003//1403 // #TVAR_afit_pBaseVals[95]
s5k5caga_i2c_write(0x0F12, 0x1E00);  //1E00//1E00//1E07 // #TVAR_afit_pBaseVals[96]
s5k5caga_i2c_write(0x0F12, 0x0714);  //0714//0714//070A // #TVAR_afit_pBaseVals[97]
s5k5caga_i2c_write(0x0F12, 0x32FF);  //32FF//32FF//32FF // #TVAR_afit_pBaseVals[98]
s5k5caga_i2c_write(0x0F12, 0x1404);  //1404//1404//5004 // #TVAR_afit_pBaseVals[99]
s5k5caga_i2c_write(0x0F12, 0x0F0A);  //0F0A//0F0A//0F40 // #TVAR_afit_pBaseVals[100]
s5k5caga_i2c_write(0x0F12, 0x400F);  //400F//400F//400F // #TVAR_afit_pBaseVals[101]
s5k5caga_i2c_write(0x0F12, 0x0204);  //0204//0204//0204 // #TVAR_afit_pBaseVals[102]
s5k5caga_i2c_write(0x0F12, 0x0003);  //0003//0003//0003 // #TVAR_afit_pBaseVals[103]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[104]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[105]
s5k5caga_i2c_write(0x0F12, 0x0014);  //0014//0014//0000 // #TVAR_afit_pBaseVals[106]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[107]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[108]
s5k5caga_i2c_write(0x0F12, 0x00C1);  //00C1//00C1//00C4 // #TVAR_afit_pBaseVals[109]
s5k5caga_i2c_write(0x0F12, 0x03FF);  //03FF//03FF//03FF // #TVAR_afit_pBaseVals[110]
s5k5caga_i2c_write(0x0F12, 0x009C);  //009C//009C//009C // #TVAR_afit_pBaseVals[111]
s5k5caga_i2c_write(0x0F12, 0x0251);  //0251//0251//017C // #TVAR_afit_pBaseVals[112]
s5k5caga_i2c_write(0x0F12, 0x03FF);  //03FF//03FF//03FF // #TVAR_afit_pBaseVals[113]
s5k5caga_i2c_write(0x0F12, 0x000C);  //000C//000C//000C // #TVAR_afit_pBaseVals[114]
s5k5caga_i2c_write(0x0F12, 0x0010);  //0010//0010//0010 // #TVAR_afit_pBaseVals[115]
s5k5caga_i2c_write(0x0F12, 0x012C);  //012C//012C//0104 // #TVAR_afit_pBaseVals[116]
s5k5caga_i2c_write(0x0F12, 0x03E8);  //03E8//03E8//03E8 // #TVAR_afit_pBaseVals[117]
s5k5caga_i2c_write(0x0F12, 0x0046);  //0046//0046//0023 // #TVAR_afit_pBaseVals[118]
s5k5caga_i2c_write(0x0F12, 0x005A);  //005A//005A//012C // #TVAR_afit_pBaseVals[119]
s5k5caga_i2c_write(0x0F12, 0x0070);  //0070//0070//0070 // #TVAR_afit_pBaseVals[120]
s5k5caga_i2c_write(0x0F12, 0x000A);  //0000//0000//0008 // #TVAR_afit_pBaseVals[121]
s5k5caga_i2c_write(0x0F12, 0x000A);  //0000//0000//0008 // #TVAR_afit_pBaseVals[122]
s5k5caga_i2c_write(0x0F12, 0x01AE);  //01AE//01AE//01AA // #TVAR_afit_pBaseVals[123]
s5k5caga_i2c_write(0x0F12, 0x001E);  //001E//001E//003C // #TVAR_afit_pBaseVals[124]
s5k5caga_i2c_write(0x0F12, 0x001E);  //001E//001E//003C // #TVAR_afit_pBaseVals[125]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0005 // #TVAR_afit_pBaseVals[126]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0005 // #TVAR_afit_pBaseVals[127]
s5k5caga_i2c_write(0x0F12, 0x003E);  //003E//003E//0050 // #TVAR_afit_pBaseVals[128]
s5k5caga_i2c_write(0x0F12, 0x0008);  //0008//0008//0024 // #TVAR_afit_pBaseVals[129]
s5k5caga_i2c_write(0x0F12, 0x003C);  //003C//003C//002A // #TVAR_afit_pBaseVals[130]
s5k5caga_i2c_write(0x0F12, 0x001E);  //001E//001E//0024 // #TVAR_afit_pBaseVals[131]
s5k5caga_i2c_write(0x0F12, 0x003C);  //003C//003C//002A // #TVAR_afit_pBaseVals[132]
s5k5caga_i2c_write(0x0F12, 0x001E);  //001E//001E//0024 // #TVAR_afit_pBaseVals[133]
s5k5caga_i2c_write(0x0F12, 0x0A24);  //0A24//0A24//0A24 // #TVAR_afit_pBaseVals[134]
s5k5caga_i2c_write(0x0F12, 0x1701);  //1701//1701//1701 // #TVAR_afit_pBaseVals[135]
s5k5caga_i2c_write(0x0F12, 0x0229);  //0229//0229//0229 // #TVAR_afit_pBaseVals[136]
s5k5caga_i2c_write(0x0F12, 0x1403);  //1403//1403//1403 // #TVAR_afit_pBaseVals[137]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[138]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[139]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[140]
s5k5caga_i2c_write(0x0F12, 0x00FF);  //00FF//00FF//00FF // #TVAR_afit_pBaseVals[141]
s5k5caga_i2c_write(0x0F12, 0x045A);  //045A//045A//043B // #TVAR_afit_pBaseVals[142]
s5k5caga_i2c_write(0x0F12, 0x1414);  //1414//1414//1414 // #TVAR_afit_pBaseVals[143]
s5k5caga_i2c_write(0x0F12, 0x0301);  //0301//0301//0301 // #TVAR_afit_pBaseVals[144]
s5k5caga_i2c_write(0x0F12, 0xFF07);  //FF07//FF07//FF07 // #TVAR_afit_pBaseVals[145]
s5k5caga_i2c_write(0x0F12, 0x081E);  //081E//081E//051E // #TVAR_afit_pBaseVals[146]
s5k5caga_i2c_write(0x0F12, 0x0A14);  //0A14//0A14//0A1E // #TVAR_afit_pBaseVals[147]
s5k5caga_i2c_write(0x0F12, 0x0F0F);  //0F0F//0F0F//0F0F // #TVAR_afit_pBaseVals[148]
s5k5caga_i2c_write(0x0F12, 0x0A05);  //0A05//0A05//0A07    //0A03 // #TVAR_afit_pBaseVals[149]
s5k5caga_i2c_write(0x0F12, 0x0046);  //0046//0046//0A3C // #TVAR_afit_pBaseVals[150]
s5k5caga_i2c_write(0x0F12, 0x0018);  //0018//0018//0A28 // #TVAR_afit_pBaseVals[151]
s5k5caga_i2c_write(0x0F12, 0x0002);  //0002//0002//0002 // #TVAR_afit_pBaseVals[152]
s5k5caga_i2c_write(0x0F12, 0x00FF);  //00FF//00FF//00FF // #TVAR_afit_pBaseVals[153]
s5k5caga_i2c_write(0x0F12, 0x1102);  //1102//1102//1002 // #TVAR_afit_pBaseVals[154]
s5k5caga_i2c_write(0x0F12, 0x001B);  //001B//001B//001D // #TVAR_afit_pBaseVals[155]
s5k5caga_i2c_write(0x0F12, 0x0900);  //0900//0900//0900 // #TVAR_afit_pBaseVals[156]
s5k5caga_i2c_write(0x0F12, 0x0600);  //0600//0600//0600 // #TVAR_afit_pBaseVals[157]
s5k5caga_i2c_write(0x0F12, 0x0504);  //0504//0504//0504 // #TVAR_afit_pBaseVals[158]
s5k5caga_i2c_write(0x0F12, 0x0306);  //0306//0306//0305 // #TVAR_afit_pBaseVals[159]
s5k5caga_i2c_write(0x0F12, 0x4603);  //4603//4603//4603 // #TVAR_afit_pBaseVals[160]
s5k5caga_i2c_write(0x0F12, 0x0880);  //0880//0880//0080 // #TVAR_afit_pBaseVals[161]
s5k5caga_i2c_write(0x0F12, 0x0046);  //0046//0046//0080 // #TVAR_afit_pBaseVals[162]
s5k5caga_i2c_write(0x0F12, 0x0080);  //0080//0080//0080 // #TVAR_afit_pBaseVals[163]
s5k5caga_i2c_write(0x0F12, 0x0101);  //0101//0101//1919 // #TVAR_afit_pBaseVals[164]
s5k5caga_i2c_write(0x0F12, 0x0707);  //0707//0707//0101 // #TVAR_afit_pBaseVals[165]
s5k5caga_i2c_write(0x0F12, 0x3C01);  //3C01//1E01//3C02 // #TVAR_afit_pBaseVals[166]
s5k5caga_i2c_write(0x0F12, 0xC83C);  //553C//491E//553C // #TVAR_afit_pBaseVals[167]
s5k5caga_i2c_write(0x0F12, 0x50C8);  //5055//5044//2855 // #TVAR_afit_pBaseVals[168]
s5k5caga_i2c_write(0x0F12, 0x0500);  //0500//0500//0A00 // #TVAR_afit_pBaseVals[169]
s5k5caga_i2c_write(0x0F12, 0x0004);  //0004//0004//1403 // #TVAR_afit_pBaseVals[170]
s5k5caga_i2c_write(0x0F12, 0x3C0A);  //3C0A//3C0A//1E0C // #TVAR_afit_pBaseVals[171]
s5k5caga_i2c_write(0x0F12, 0x0714);  //0714//0714//070A // #TVAR_afit_pBaseVals[172]
s5k5caga_i2c_write(0x0F12, 0x3214);  //3214//3214//32FF // #TVAR_afit_pBaseVals[173]
s5k5caga_i2c_write(0x0F12, 0x5A03);  //5A03//5A03//5004 // #TVAR_afit_pBaseVals[174]
s5k5caga_i2c_write(0x0F12, 0x1228);  //1228//1228//0F40 // #TVAR_afit_pBaseVals[175]
s5k5caga_i2c_write(0x0F12, 0x4012);  //4012//4012//400F // #TVAR_afit_pBaseVals[176]
s5k5caga_i2c_write(0x0F12, 0x0604);  //0604//0604//0204 // #TVAR_afit_pBaseVals[177]
s5k5caga_i2c_write(0x0F12, 0x1E06);  //1E06//1E06//1E03 // #TVAR_afit_pBaseVals[178]
s5k5caga_i2c_write(0x0F12, 0x011E);  //011E//011E//011E // #TVAR_afit_pBaseVals[179]
s5k5caga_i2c_write(0x0F12, 0x0101);  //0101//0101//0101 // #TVAR_afit_pBaseVals[180]
s5k5caga_i2c_write(0x0F12, 0x3A3C);  //3A3C//3A3C//3232 // #TVAR_afit_pBaseVals[181]
s5k5caga_i2c_write(0x0F12, 0x585A);  //585A//585A//3C3C // #TVAR_afit_pBaseVals[182]
s5k5caga_i2c_write(0x0F12, 0x0028);  //0028//0028//0028 // #TVAR_afit_pBaseVals[183]
s5k5caga_i2c_write(0x0F12, 0x030A);  //030A//030A//030A // #TVAR_afit_pBaseVals[184]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0714 // #TVAR_afit_pBaseVals[185]
s5k5caga_i2c_write(0x0F12, 0x141E);  //141E//141E//0A1E // #TVAR_afit_pBaseVals[186]
s5k5caga_i2c_write(0x0F12, 0xFF07);  //FF07//FF07//FF07 // #TVAR_afit_pBaseVals[187]
s5k5caga_i2c_write(0x0F12, 0x0432);  //0432//0432//0432 // #TVAR_afit_pBaseVals[188]
s5k5caga_i2c_write(0x0F12, 0x1428);  //1428//1428//4050 // #TVAR_afit_pBaseVals[189]
s5k5caga_i2c_write(0x0F12, 0x0F0F);  //0F0F//0F0F//0F0F // #TVAR_afit_pBaseVals[190]
s5k5caga_i2c_write(0x0F12, 0x0440);  //0440//0440//0440 // #TVAR_afit_pBaseVals[191]
s5k5caga_i2c_write(0x0F12, 0x0302);  //0302//0302//0302 // #TVAR_afit_pBaseVals[192]
s5k5caga_i2c_write(0x0F12, 0x1E1E);  //1E1E//1E1E//1E1E // #TVAR_afit_pBaseVals[193]
s5k5caga_i2c_write(0x0F12, 0x0101);  //0101//0101//0101 // #TVAR_afit_pBaseVals[194]
s5k5caga_i2c_write(0x0F12, 0x3C01);  //3C01//3C01//3201 // #TVAR_afit_pBaseVals[195]
s5k5caga_i2c_write(0x0F12, 0x5A3A);  //5A3A//5A3A//3C32 // #TVAR_afit_pBaseVals[196]
s5k5caga_i2c_write(0x0F12, 0x2858);  //2858//2858//283C // #TVAR_afit_pBaseVals[197]
s5k5caga_i2c_write(0x0F12, 0x0A00);  //0A00//0A00//0A00 // #TVAR_afit_pBaseVals[198]
s5k5caga_i2c_write(0x0F12, 0x0003);  //0003//0003//1403 // #TVAR_afit_pBaseVals[199]
s5k5caga_i2c_write(0x0F12, 0x1E00);  //1E00//1E00//1E07 // #TVAR_afit_pBaseVals[200]
s5k5caga_i2c_write(0x0F12, 0x0714);  //0714//0714//070A // #TVAR_afit_pBaseVals[201]
s5k5caga_i2c_write(0x0F12, 0x32FF);  //32FF//32FF//32FF // #TVAR_afit_pBaseVals[202]
s5k5caga_i2c_write(0x0F12, 0x2804);  //2804//2804//5004 // #TVAR_afit_pBaseVals[203]
s5k5caga_i2c_write(0x0F12, 0x0F1E);  //0F1E//0F1E//0F40 // #TVAR_afit_pBaseVals[204]
s5k5caga_i2c_write(0x0F12, 0x400F);  //400F//400F//400F // #TVAR_afit_pBaseVals[205]
s5k5caga_i2c_write(0x0F12, 0x0204);  //0204//0204//0204 // #TVAR_afit_pBaseVals[206]
s5k5caga_i2c_write(0x0F12, 0x0003);  //0003//0003//0003 // #TVAR_afit_pBaseVals[207]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[208]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[209]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[210]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[211]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[212]
s5k5caga_i2c_write(0x0F12, 0x00C1);  //00C1//00C1//00C4 // #TVAR_afit_pBaseVals[213]
s5k5caga_i2c_write(0x0F12, 0x03FF);  //03FF//03FF//03FF // #TVAR_afit_pBaseVals[214]
s5k5caga_i2c_write(0x0F12, 0x009C);  //009C//009C//009C // #TVAR_afit_pBaseVals[215]
s5k5caga_i2c_write(0x0F12, 0x0251);  //0251//0251//017C // #TVAR_afit_pBaseVals[216]
s5k5caga_i2c_write(0x0F12, 0x03FF);  //03FF//03FF//03FF // #TVAR_afit_pBaseVals[217]
s5k5caga_i2c_write(0x0F12, 0x000C);  //000C//000C//000C // #TVAR_afit_pBaseVals[218]
s5k5caga_i2c_write(0x0F12, 0x0010);  //0010//0010//0010 // #TVAR_afit_pBaseVals[219]
s5k5caga_i2c_write(0x0F12, 0x012C);  //012C//012C//0104 // #TVAR_afit_pBaseVals[220]
s5k5caga_i2c_write(0x0F12, 0x03E8);  //03E8//03E8//03E8 // #TVAR_afit_pBaseVals[221]
s5k5caga_i2c_write(0x0F12, 0x0046);  //0046//0046//0023 // #TVAR_afit_pBaseVals[222]
s5k5caga_i2c_write(0x0F12, 0x005A);  //005A//005A//012C // #TVAR_afit_pBaseVals[223]
s5k5caga_i2c_write(0x0F12, 0x0070);  //0070//0070//0070 // #TVAR_afit_pBaseVals[224]
s5k5caga_i2c_write(0x0F12, 0x000A);  //0000//0000//0004 // #TVAR_afit_pBaseVals[225]
s5k5caga_i2c_write(0x0F12, 0x000A);  //0000//0000//0004 // #TVAR_afit_pBaseVals[226]
s5k5caga_i2c_write(0x0F12, 0x0226);  //0226//0226//01AA // #TVAR_afit_pBaseVals[227]
s5k5caga_i2c_write(0x0F12, 0x001E);  //001E//001E//001E // #TVAR_afit_pBaseVals[228]
s5k5caga_i2c_write(0x0F12, 0x001E);  //001E//001E//001E // #TVAR_afit_pBaseVals[229]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0005 // #TVAR_afit_pBaseVals[230]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0005 // #TVAR_afit_pBaseVals[231]
s5k5caga_i2c_write(0x0F12, 0x004E);  //004E//004E//0064 // #TVAR_afit_pBaseVals[232]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0024 // #TVAR_afit_pBaseVals[233]
s5k5caga_i2c_write(0x0F12, 0x003C);  //003C//003C//002A // #TVAR_afit_pBaseVals[234]
s5k5caga_i2c_write(0x0F12, 0x001E);  //001E//001E//0024 // #TVAR_afit_pBaseVals[235]
s5k5caga_i2c_write(0x0F12, 0x003C);  //003C//003C//002A // #TVAR_afit_pBaseVals[236]
s5k5caga_i2c_write(0x0F12, 0x001E);  //001E//001E//0024 // #TVAR_afit_pBaseVals[237]
s5k5caga_i2c_write(0x0F12, 0x0A24);  //0A24//0A24//0A24 // #TVAR_afit_pBaseVals[238]
s5k5caga_i2c_write(0x0F12, 0x1701);  //1701//1701//1701 // #TVAR_afit_pBaseVals[239]
s5k5caga_i2c_write(0x0F12, 0x0229);  //0229//0229//0229 // #TVAR_afit_pBaseVals[240]
s5k5caga_i2c_write(0x0F12, 0x1403);  //1403//1403//1403 // #TVAR_afit_pBaseVals[241]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[242]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[243]
s5k5caga_i2c_write(0x0F12, 0x0906);  //0906//0906//0101 // #TVAR_afit_pBaseVals[244]
s5k5caga_i2c_write(0x0F12, 0x00FF);  //00FF//00FF//00FF // #TVAR_afit_pBaseVals[245]
s5k5caga_i2c_write(0x0F12, 0x045A);  //045A//045A//043B // #TVAR_afit_pBaseVals[246]
s5k5caga_i2c_write(0x0F12, 0x1414);  //1414//1414//1414 // #TVAR_afit_pBaseVals[247]
s5k5caga_i2c_write(0x0F12, 0x0301);  //0301//0301//0301 // #TVAR_afit_pBaseVals[248]
s5k5caga_i2c_write(0x0F12, 0xFF07);  //FF07//FF07//FF07 // #TVAR_afit_pBaseVals[249]
s5k5caga_i2c_write(0x0F12, 0x081E);  //081E//081E//051E // #TVAR_afit_pBaseVals[250]
s5k5caga_i2c_write(0x0F12, 0x0A14);  //0A14//0A14//0A1E // #TVAR_afit_pBaseVals[251]
s5k5caga_i2c_write(0x0F12, 0x0F0F);  //0F0F//0F0F//0F0F // #TVAR_afit_pBaseVals[252]
s5k5caga_i2c_write(0x0F12, 0x0A07);  //0A07//0A07//0A07    //0A03 // #TVAR_afit_pBaseVals[253]
s5k5caga_i2c_write(0x0F12, 0x009A);  //009A//009A//0A3C // #TVAR_afit_pBaseVals[254]
s5k5caga_i2c_write(0x0F12, 0x0028);  //0028//0028//0528 // #TVAR_afit_pBaseVals[255]
s5k5caga_i2c_write(0x0F12, 0x0002);  //0002//0002//0002 // #TVAR_afit_pBaseVals[256]
s5k5caga_i2c_write(0x0F12, 0x00FF);  //00FF//00FF//00FF // #TVAR_afit_pBaseVals[257]
s5k5caga_i2c_write(0x0F12, 0x1102);  //1102//1102//1002 // #TVAR_afit_pBaseVals[258]
s5k5caga_i2c_write(0x0F12, 0x001B);  //001B//001B//001D // #TVAR_afit_pBaseVals[259]
s5k5caga_i2c_write(0x0F12, 0x0900);  //0900//0900//0900 // #TVAR_afit_pBaseVals[260]
s5k5caga_i2c_write(0x0F12, 0x0600);  //0600//0600//0600 // #TVAR_afit_pBaseVals[261]
s5k5caga_i2c_write(0x0F12, 0x0504);  //0504//0504//0504 // #TVAR_afit_pBaseVals[262]
s5k5caga_i2c_write(0x0F12, 0x0306);  //0306//0306//0305 // #TVAR_afit_pBaseVals[263] //*<BU5D05950 zhangsheng 20100422 begin*/ 
s5k5caga_i2c_write(0x0F12, 0x4602);  //4602//4602//7503    //7903 // #TVAR_afit_pBaseVals[264] //*BU5D05950 zhangsheng 20100422 end>*/ 
s5k5caga_i2c_write(0x0F12, 0x1980);  //1980//1980//0080 // #TVAR_afit_pBaseVals[265]
s5k5caga_i2c_write(0x0F12, 0x0080);  //0080//0080//0080 // #TVAR_afit_pBaseVals[266]
s5k5caga_i2c_write(0x0F12, 0x0080);  //0080//0080//0080 // #TVAR_afit_pBaseVals[267]
s5k5caga_i2c_write(0x0F12, 0x0101);  //0101//0101//2323 // #TVAR_afit_pBaseVals[268]
s5k5caga_i2c_write(0x0F12, 0x0707);  //0707//0707//0101 // #TVAR_afit_pBaseVals[269]
s5k5caga_i2c_write(0x0F12, 0x2A01);  //2A01//1E01//2A02 // #TVAR_afit_pBaseVals[270]
s5k5caga_i2c_write(0x0F12, 0x462A);  //462A//3C1E//462A // #TVAR_afit_pBaseVals[271]
s5k5caga_i2c_write(0x0F12, 0x5046);  //5046//5028//2846 // #TVAR_afit_pBaseVals[272]
s5k5caga_i2c_write(0x0F12, 0x0500);  //0500//0500//0A00 // #TVAR_afit_pBaseVals[273]
s5k5caga_i2c_write(0x0F12, 0x1A04);  //1A04//1A04//1403 // #TVAR_afit_pBaseVals[274]
s5k5caga_i2c_write(0x0F12, 0x280A);  //280A//280A//1E0C // #TVAR_afit_pBaseVals[275]
s5k5caga_i2c_write(0x0F12, 0x080C);  //080C//080C//070A // #TVAR_afit_pBaseVals[276]
s5k5caga_i2c_write(0x0F12, 0x1414);  //1414//1414//32FF // #TVAR_afit_pBaseVals[277]
s5k5caga_i2c_write(0x0F12, 0x7E03);  //7E03//7E03//5A04 // #TVAR_afit_pBaseVals[278]
s5k5caga_i2c_write(0x0F12, 0x124A);  //124A//124A//0F40 // #TVAR_afit_pBaseVals[279]
s5k5caga_i2c_write(0x0F12, 0x4012);  //4012//4012//400F // #TVAR_afit_pBaseVals[280]
s5k5caga_i2c_write(0x0F12, 0x0604);  //0604//0604//0204 // #TVAR_afit_pBaseVals[281]
s5k5caga_i2c_write(0x0F12, 0x2806);  //2806//2806//2303 // #TVAR_afit_pBaseVals[282]
s5k5caga_i2c_write(0x0F12, 0x0128);  //0128//0128//0123 // #TVAR_afit_pBaseVals[283]
s5k5caga_i2c_write(0x0F12, 0x0101);  //0101//0101//0101 // #TVAR_afit_pBaseVals[284]
s5k5caga_i2c_write(0x0F12, 0x2224);  //2224//2224//262A // #TVAR_afit_pBaseVals[285]
s5k5caga_i2c_write(0x0F12, 0x3236);  //3236//3236//2C2C // #TVAR_afit_pBaseVals[286]
s5k5caga_i2c_write(0x0F12, 0x0028);  //0028//0028//0028 // #TVAR_afit_pBaseVals[287]
s5k5caga_i2c_write(0x0F12, 0x030A);  //030A//030A//030A // #TVAR_afit_pBaseVals[288]
s5k5caga_i2c_write(0x0F12, 0x0410);  //0410//0410//0714 // #TVAR_afit_pBaseVals[289]
s5k5caga_i2c_write(0x0F12, 0x141E);  //141E//141E//0A1E // #TVAR_afit_pBaseVals[290]
s5k5caga_i2c_write(0x0F12, 0xFF07);  //FF07//FF07//FF07 // #TVAR_afit_pBaseVals[291]
s5k5caga_i2c_write(0x0F12, 0x0432);  //0432//0432//0432 // #TVAR_afit_pBaseVals[292]
s5k5caga_i2c_write(0x0F12, 0x547D);  //547D//547D//4050 // #TVAR_afit_pBaseVals[293]
s5k5caga_i2c_write(0x0F12, 0x0F0F);  //0F0F//0F0F//0F0F // #TVAR_afit_pBaseVals[294]
s5k5caga_i2c_write(0x0F12, 0x0440);  //0440//0440//0440 // #TVAR_afit_pBaseVals[295]
s5k5caga_i2c_write(0x0F12, 0x0302);  //0302//0302//0302 // #TVAR_afit_pBaseVals[296]
s5k5caga_i2c_write(0x0F12, 0x2828);  //2828//2828//2323 // #TVAR_afit_pBaseVals[297]
s5k5caga_i2c_write(0x0F12, 0x0101);  //0101//0101//0101 // #TVAR_afit_pBaseVals[298]
s5k5caga_i2c_write(0x0F12, 0x2401);  //2401//2401//2A01 // #TVAR_afit_pBaseVals[299]
s5k5caga_i2c_write(0x0F12, 0x3622);  //3622//3622//2C26 // #TVAR_afit_pBaseVals[300]
s5k5caga_i2c_write(0x0F12, 0x2832);  //2832//2832//282C // #TVAR_afit_pBaseVals[301]
s5k5caga_i2c_write(0x0F12, 0x0A00);  //0A00//0A00//0A00 // #TVAR_afit_pBaseVals[302]
s5k5caga_i2c_write(0x0F12, 0x1003);  //1003//1003//1403 // #TVAR_afit_pBaseVals[303]
s5k5caga_i2c_write(0x0F12, 0x1E04);  //1E04//1E04//1E07 // #TVAR_afit_pBaseVals[304]
s5k5caga_i2c_write(0x0F12, 0x0714);  //0714//0714//070A // #TVAR_afit_pBaseVals[305]
s5k5caga_i2c_write(0x0F12, 0x32FF);  //32FF//32FF//32FF // #TVAR_afit_pBaseVals[306]
s5k5caga_i2c_write(0x0F12, 0x7D04);  //7D04//7D04//5004 // #TVAR_afit_pBaseVals[307]
s5k5caga_i2c_write(0x0F12, 0x0F5E);  //0F5E//0F5E//0F40 // #TVAR_afit_pBaseVals[308]
s5k5caga_i2c_write(0x0F12, 0x400F);  //400F//400F//400F // #TVAR_afit_pBaseVals[309]
s5k5caga_i2c_write(0x0F12, 0x0204);  //0204//0204//0204 // #TVAR_afit_pBaseVals[310]
s5k5caga_i2c_write(0x0F12, 0x0003);  //0003//0003//0003 // #TVAR_afit_pBaseVals[311]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[312]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[313]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[314]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[315]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[316]
s5k5caga_i2c_write(0x0F12, 0x00C1);  //00C1//00C1//00C4 // #TVAR_afit_pBaseVals[317]
s5k5caga_i2c_write(0x0F12, 0x03FF);  //03FF//03FF//03FF // #TVAR_afit_pBaseVals[318]
s5k5caga_i2c_write(0x0F12, 0x009C);  //009C//009C//009C // #TVAR_afit_pBaseVals[319]
s5k5caga_i2c_write(0x0F12, 0x0251);  //0251//0251//017C // #TVAR_afit_pBaseVals[320]
s5k5caga_i2c_write(0x0F12, 0x03FF);  //03FF//03FF//03FF // #TVAR_afit_pBaseVals[321]
s5k5caga_i2c_write(0x0F12, 0x000C);  //000C//000C//000C // #TVAR_afit_pBaseVals[322]
s5k5caga_i2c_write(0x0F12, 0x0010);  //0010//0010//0010 // #TVAR_afit_pBaseVals[323]
s5k5caga_i2c_write(0x0F12, 0x00C8);  //00C8//00C8//0000 // #TVAR_afit_pBaseVals[324]
s5k5caga_i2c_write(0x0F12, 0x03E8);  //03E8//03E8//0000 // #TVAR_afit_pBaseVals[325]
s5k5caga_i2c_write(0x0F12, 0x0046);  //0046//0046//0023 // #TVAR_afit_pBaseVals[326]
s5k5caga_i2c_write(0x0F12, 0x0050);  //0050//0050//012C // #TVAR_afit_pBaseVals[327]
s5k5caga_i2c_write(0x0F12, 0x0070);  //0070//0070//0070 // #TVAR_afit_pBaseVals[328]
s5k5caga_i2c_write(0x0F12, 0x000A);  //0000//0000//0000 // #TVAR_afit_pBaseVals[329]
s5k5caga_i2c_write(0x0F12, 0x000A);  //0000//0000//0000 // #TVAR_afit_pBaseVals[330]
s5k5caga_i2c_write(0x0F12, 0x0226);  //0226//0226//01AA // #TVAR_afit_pBaseVals[331]
s5k5caga_i2c_write(0x0F12, 0x0014);  //0014//0014//001E // #TVAR_afit_pBaseVals[332]
s5k5caga_i2c_write(0x0F12, 0x0014);  //0014//0014//001E // #TVAR_afit_pBaseVals[333]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//000A // #TVAR_afit_pBaseVals[334]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//000A // #TVAR_afit_pBaseVals[335]
s5k5caga_i2c_write(0x0F12, 0x004E);  //004E//004E//00E6 // #TVAR_afit_pBaseVals[336]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0032 // #TVAR_afit_pBaseVals[337]
s5k5caga_i2c_write(0x0F12, 0x002D);  //002D//002D//0032 // #TVAR_afit_pBaseVals[338]
s5k5caga_i2c_write(0x0F12, 0x0019);  //0019//0019//0028 // #TVAR_afit_pBaseVals[339]
s5k5caga_i2c_write(0x0F12, 0x002D);  //002D//002D//0032 // #TVAR_afit_pBaseVals[340]
s5k5caga_i2c_write(0x0F12, 0x0019);  //0019//0019//0028 // #TVAR_afit_pBaseVals[341]
s5k5caga_i2c_write(0x0F12, 0x0A24);  //0A24//0A24//0A24 // #TVAR_afit_pBaseVals[342]
s5k5caga_i2c_write(0x0F12, 0x1701);  //1701//1701//1701 // #TVAR_afit_pBaseVals[343]
s5k5caga_i2c_write(0x0F12, 0x0229);  //0229//0229//0229 // #TVAR_afit_pBaseVals[344]
s5k5caga_i2c_write(0x0F12, 0x1403);  //1403//1403//1403 // #TVAR_afit_pBaseVals[345]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[346]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[347]
s5k5caga_i2c_write(0x0F12, 0x0906);  //0906//0906//0504 // #TVAR_afit_pBaseVals[348]
s5k5caga_i2c_write(0x0F12, 0x00FF);  //00FF//00FF//00FF // #TVAR_afit_pBaseVals[349]
s5k5caga_i2c_write(0x0F12, 0x045A);  //045A//045A//043B // #TVAR_afit_pBaseVals[350]
s5k5caga_i2c_write(0x0F12, 0x1414);  //1414//1414//1414 // #TVAR_afit_pBaseVals[351]
s5k5caga_i2c_write(0x0F12, 0x0301);  //0301//0301//0301 // #TVAR_afit_pBaseVals[352]
s5k5caga_i2c_write(0x0F12, 0xFF07);  //FF07//FF07//FF07 // #TVAR_afit_pBaseVals[353]
s5k5caga_i2c_write(0x0F12, 0x081E);  //081E//081E//051E // #TVAR_afit_pBaseVals[354]
s5k5caga_i2c_write(0x0F12, 0x0A14);  //0A14//0A14//0A1E // #TVAR_afit_pBaseVals[355]
s5k5caga_i2c_write(0x0F12, 0x0F0F);  //0F0F//0F0F//0F0F // #TVAR_afit_pBaseVals[356]
s5k5caga_i2c_write(0x0F12, 0x0A07);  //0A07//0A07//0A07    //0A00 // #TVAR_afit_pBaseVals[357]
s5k5caga_i2c_write(0x0F12, 0x009A);  //009A//009A//0A3C // #TVAR_afit_pBaseVals[358]
s5k5caga_i2c_write(0x0F12, 0x0028);  //0028//0028//0532 // #TVAR_afit_pBaseVals[359]
s5k5caga_i2c_write(0x0F12, 0x0001);  //0001//0001//0002 // #TVAR_afit_pBaseVals[360]
s5k5caga_i2c_write(0x0F12, 0x00FF);  //00FF//00FF//00FF // #TVAR_afit_pBaseVals[361]
s5k5caga_i2c_write(0x0F12, 0x1002);  //1002//1002//1002 // #TVAR_afit_pBaseVals[362]
s5k5caga_i2c_write(0x0F12, 0x001E);  //001E//001E//001D // #TVAR_afit_pBaseVals[363]
s5k5caga_i2c_write(0x0F12, 0x0900);  //0900//0900//0900 // #TVAR_afit_pBaseVals[364]
s5k5caga_i2c_write(0x0F12, 0x0600);  //0600//0600//0600 // #TVAR_afit_pBaseVals[365]
s5k5caga_i2c_write(0x0F12, 0x0504);  //0504//0504//0504 // #TVAR_afit_pBaseVals[366]
s5k5caga_i2c_write(0x0F12, 0x0307);  //0307//0307//0305 // #TVAR_afit_pBaseVals[367]//*<BU5D05950 zhangsheng 20100422 begin*/
s5k5caga_i2c_write(0x0F12, 0x6402);  //5002//5002//7502    //8902 // #TVAR_afit_pBaseVals[368]//*BU5D05950 zhangsheng 20100422 end>*/
s5k5caga_i2c_write(0x0F12, 0x1980);  //1980//1980//0080 // #TVAR_afit_pBaseVals[369]
s5k5caga_i2c_write(0x0F12, 0x0080);  //0080//0080//0080 // #TVAR_afit_pBaseVals[370]
s5k5caga_i2c_write(0x0F12, 0x0080);  //0080//0080//0080 // #TVAR_afit_pBaseVals[371]
s5k5caga_i2c_write(0x0F12, 0x0101);  //0101//0101//2328 // #TVAR_afit_pBaseVals[372]
s5k5caga_i2c_write(0x0F12, 0x0707);  //0707//0707//0101 // #TVAR_afit_pBaseVals[373]
s5k5caga_i2c_write(0x0F12, 0x2A01);  //2A01//1E01//2A02 // #TVAR_afit_pBaseVals[374]
s5k5caga_i2c_write(0x0F12, 0x262A);  //262A//2A1E//2628 // #TVAR_afit_pBaseVals[375]
s5k5caga_i2c_write(0x0F12, 0x5026);  //5026//5020//2826 // #TVAR_afit_pBaseVals[376]
s5k5caga_i2c_write(0x0F12, 0x0500);  //0500//0500//0A00 // #TVAR_afit_pBaseVals[377]
s5k5caga_i2c_write(0x0F12, 0x1A04);  //1A04//1A04//1903 // #TVAR_afit_pBaseVals[378]
s5k5caga_i2c_write(0x0F12, 0x280A);  //280A//280A//1E0F // #TVAR_afit_pBaseVals[379]
s5k5caga_i2c_write(0x0F12, 0x080C);  //080C//080C//070A // #TVAR_afit_pBaseVals[380]
s5k5caga_i2c_write(0x0F12, 0x1414);  //1414//1414//32FF // #TVAR_afit_pBaseVals[381]
s5k5caga_i2c_write(0x0F12, 0x7E03);  //7E03//7E03//7804 // #TVAR_afit_pBaseVals[382]
s5k5caga_i2c_write(0x0F12, 0x124A);  //124A//124A//0F40 // #TVAR_afit_pBaseVals[383]
s5k5caga_i2c_write(0x0F12, 0x4012);  //4012//4012//400F // #TVAR_afit_pBaseVals[384]
s5k5caga_i2c_write(0x0F12, 0x0604);  //0604//0604//0204 // #TVAR_afit_pBaseVals[385]
s5k5caga_i2c_write(0x0F12, 0x3C06);  //3C06//3C06//2803 // #TVAR_afit_pBaseVals[386]
s5k5caga_i2c_write(0x0F12, 0x013C);  //013C//013C//0123 // #TVAR_afit_pBaseVals[387]
s5k5caga_i2c_write(0x0F12, 0x0101);  //0101//0101//0101 // #TVAR_afit_pBaseVals[388]
s5k5caga_i2c_write(0x0F12, 0x1C1E);  //1C1E//1C1E//2024 // #TVAR_afit_pBaseVals[389]
s5k5caga_i2c_write(0x0F12, 0x1E22);  //1E22//1E22//1C1C // #TVAR_afit_pBaseVals[390]
s5k5caga_i2c_write(0x0F12, 0x0028);  //0028//0028//0028 // #TVAR_afit_pBaseVals[391]
s5k5caga_i2c_write(0x0F12, 0x030A);  //030A//030A//030A // #TVAR_afit_pBaseVals[392]
s5k5caga_i2c_write(0x0F12, 0x0214);  //0214//0214//0A0A // #TVAR_afit_pBaseVals[393]
s5k5caga_i2c_write(0x0F12, 0x0E14);  //0E14//0E14//0A2D // #TVAR_afit_pBaseVals[394]
s5k5caga_i2c_write(0x0F12, 0xFF06);  //FF06//FF06//FF07 // #TVAR_afit_pBaseVals[395]
s5k5caga_i2c_write(0x0F12, 0x0432);  //0432//0432//0432 // #TVAR_afit_pBaseVals[396]
s5k5caga_i2c_write(0x0F12, 0x547D);  //547D//547D//4050 // #TVAR_afit_pBaseVals[397]
s5k5caga_i2c_write(0x0F12, 0x150C);  //150C//150C//0F0F // #TVAR_afit_pBaseVals[398]
s5k5caga_i2c_write(0x0F12, 0x0440);  //0440//0440//0440 // #TVAR_afit_pBaseVals[399]
s5k5caga_i2c_write(0x0F12, 0x0302);  //0302//0302//0302 // #TVAR_afit_pBaseVals[400]
s5k5caga_i2c_write(0x0F12, 0x3C3C);  //3C3C//3C3C//2328 // #TVAR_afit_pBaseVals[401]
s5k5caga_i2c_write(0x0F12, 0x0101);  //0101//0101//0101 // #TVAR_afit_pBaseVals[402]
s5k5caga_i2c_write(0x0F12, 0x1E01);  //1E01//1E01//3C01 // #TVAR_afit_pBaseVals[403]
s5k5caga_i2c_write(0x0F12, 0x221C);  //221C//221C//1C3C // #TVAR_afit_pBaseVals[404]
s5k5caga_i2c_write(0x0F12, 0x281E);  //281E//281E//281C // #TVAR_afit_pBaseVals[405]
s5k5caga_i2c_write(0x0F12, 0x0A00);  //0A00//0A00//0A00 // #TVAR_afit_pBaseVals[406]
s5k5caga_i2c_write(0x0F12, 0x1403);  //1403//1403//0A03 // #TVAR_afit_pBaseVals[407]
s5k5caga_i2c_write(0x0F12, 0x1402);  //1402//1402//2D0A // #TVAR_afit_pBaseVals[408]
s5k5caga_i2c_write(0x0F12, 0x060E);  //060E//060E//070A // #TVAR_afit_pBaseVals[409]
s5k5caga_i2c_write(0x0F12, 0x32FF);  //32FF//32FF//32FF // #TVAR_afit_pBaseVals[410]
s5k5caga_i2c_write(0x0F12, 0x7D04);  //7D04//7D04//5004 // #TVAR_afit_pBaseVals[411]
s5k5caga_i2c_write(0x0F12, 0x0C5E);  //0C5E//0C5E//0F40 // #TVAR_afit_pBaseVals[412]
s5k5caga_i2c_write(0x0F12, 0x4015);  //4015//4015//400F // #TVAR_afit_pBaseVals[413]
s5k5caga_i2c_write(0x0F12, 0x0204);  //0204//0204//0204 // #TVAR_afit_pBaseVals[414]
s5k5caga_i2c_write(0x0F12, 0x0003);  //0003//0003//0003 // #TVAR_afit_pBaseVals[415]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[416]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[417]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//002B // #TVAR_afit_pBaseVals[418] //high luma sta
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[419]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[420]
s5k5caga_i2c_write(0x0F12, 0x00C1);  //00C1//00C1//00C4 // #TVAR_afit_pBaseVals[421]
s5k5caga_i2c_write(0x0F12, 0x03FF);  //03FF//03FF//03FF // #TVAR_afit_pBaseVals[422]
s5k5caga_i2c_write(0x0F12, 0x009C);  //009C//009C//009C // #TVAR_afit_pBaseVals[423]
s5k5caga_i2c_write(0x0F12, 0x0251);  //0251//0251//017C // #TVAR_afit_pBaseVals[424]
s5k5caga_i2c_write(0x0F12, 0x03FF);  //03FF//03FF//03FF // #TVAR_afit_pBaseVals[425]
s5k5caga_i2c_write(0x0F12, 0x000C);  //000C//000C//000C // #TVAR_afit_pBaseVals[426]
s5k5caga_i2c_write(0x0F12, 0x0010);  //0010//0010//0010 // #TVAR_afit_pBaseVals[427]
s5k5caga_i2c_write(0x0F12, 0x0032);  //0032//0032//0000 // #TVAR_afit_pBaseVals[428]
s5k5caga_i2c_write(0x0F12, 0x028A);  //028A//028A//0000 // #TVAR_afit_pBaseVals[429]
s5k5caga_i2c_write(0x0F12, 0x0032);  //0032//0032//003C // #TVAR_afit_pBaseVals[430]
s5k5caga_i2c_write(0x0F12, 0x01F4);  //01F4//01F4//006F // #TVAR_afit_pBaseVals[431]
s5k5caga_i2c_write(0x0F12, 0x0070);  //0070//0070//0070 // #TVAR_afit_pBaseVals[432]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[433]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0000 // #TVAR_afit_pBaseVals[434]
s5k5caga_i2c_write(0x0F12, 0x01AA);  //01AA//01AA//01AA // #TVAR_afit_pBaseVals[435]
s5k5caga_i2c_write(0x0F12, 0x003C);  //003C//003C//0014 // #TVAR_afit_pBaseVals[436]
s5k5caga_i2c_write(0x0F12, 0x0050);  //0050//0050//0014 // #TVAR_afit_pBaseVals[437]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//000A // #TVAR_afit_pBaseVals[438]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//000A // #TVAR_afit_pBaseVals[439]
s5k5caga_i2c_write(0x0F12, 0x0044);  //0044//0044//0122 // #TVAR_afit_pBaseVals[440]
s5k5caga_i2c_write(0x0F12, 0x0014);  //0014//0014//003C // #TVAR_afit_pBaseVals[441]
s5k5caga_i2c_write(0x0F12, 0x0046);  //0046//0046//0032 // #TVAR_afit_pBaseVals[442]
s5k5caga_i2c_write(0x0F12, 0x0019);  //0019//0019//0023 // #TVAR_afit_pBaseVals[443]
s5k5caga_i2c_write(0x0F12, 0x0046);  //0046//0046//0023 // #TVAR_afit_pBaseVals[444]
s5k5caga_i2c_write(0x0F12, 0x0019);  //0019//0019//0032 // #TVAR_afit_pBaseVals[445]
s5k5caga_i2c_write(0x0F12, 0x0A24);  //0A24//0A24//0A24 // #TVAR_afit_pBaseVals[446]
s5k5caga_i2c_write(0x0F12, 0x1701);  //1701//1701//1701 // #TVAR_afit_pBaseVals[447]
s5k5caga_i2c_write(0x0F12, 0x0229);  //0229//0229//0229 // #TVAR_afit_pBaseVals[448]
s5k5caga_i2c_write(0x0F12, 0x0503);  //0503//0503//1403 // #TVAR_afit_pBaseVals[449]
s5k5caga_i2c_write(0x0F12, 0x080F);  //080F//080F//0000 // #TVAR_afit_pBaseVals[450]
s5k5caga_i2c_write(0x0F12, 0x0808);  //0808//0808//0000 // #TVAR_afit_pBaseVals[451]
s5k5caga_i2c_write(0x0F12, 0x0000);  //0000//0000//0505 // #TVAR_afit_pBaseVals[452]
s5k5caga_i2c_write(0x0F12, 0x00FF);  //00FF//00FF//00FF // #TVAR_afit_pBaseVals[453]
s5k5caga_i2c_write(0x0F12, 0x012D);  //012D//012D//043B // #TVAR_afit_pBaseVals[454]
s5k5caga_i2c_write(0x0F12, 0x1414);  //1414//1414//1414 // #TVAR_afit_pBaseVals[455]
s5k5caga_i2c_write(0x0F12, 0x0301);  //0301//0301//0301 // #TVAR_afit_pBaseVals[456]
s5k5caga_i2c_write(0x0F12, 0xFF07);  //FF07//FF07//FF07 // #TVAR_afit_pBaseVals[457]
s5k5caga_i2c_write(0x0F12, 0x061E);  //061E//061E//051E // #TVAR_afit_pBaseVals[458]
s5k5caga_i2c_write(0x0F12, 0x0A1E);  //0A1E//0A1E//0A1E // #TVAR_afit_pBaseVals[459]
s5k5caga_i2c_write(0x0F12, 0x0606);  //0606//0606//0000 // #TVAR_afit_pBaseVals[460]
s5k5caga_i2c_write(0x0F12, 0x0A07);  //0A07//0A07//0A07   //0A00 // #TVAR_afit_pBaseVals[461]
s5k5caga_i2c_write(0x0F12, 0x379A);  //379A//379A//0A3C // #TVAR_afit_pBaseVals[462]
s5k5caga_i2c_write(0x0F12, 0x1028);  //1028//1028//0532 // #TVAR_afit_pBaseVals[463]
s5k5caga_i2c_write(0x0F12, 0x0001);  //0001//0001//0002 // #TVAR_afit_pBaseVals[464]
s5k5caga_i2c_write(0x0F12, 0x00FF);  //00FF//00FF//0096 // #TVAR_afit_pBaseVals[465]
s5k5caga_i2c_write(0x0F12, 0x1002);  //1002//1002//1002 // #TVAR_afit_pBaseVals[466]
s5k5caga_i2c_write(0x0F12, 0x001E);  //001E//001E//001E // #TVAR_afit_pBaseVals[467]
s5k5caga_i2c_write(0x0F12, 0x0900);  //0900//0900//0900 // #TVAR_afit_pBaseVals[468]
s5k5caga_i2c_write(0x0F12, 0x0600);  //0600//0600//0600 // #TVAR_afit_pBaseVals[469]
s5k5caga_i2c_write(0x0F12, 0x0504);  //0504//0504//0504 // #TVAR_afit_pBaseVals[470]
s5k5caga_i2c_write(0x0F12, 0x0307);  //0307//0307//0305 // #TVAR_afit_pBaseVals[471] //*<BU5D05950 zhangsheng 20100422 begin*/
s5k5caga_i2c_write(0x0F12, 0x6401);  //5001//5001//7502    //8002 // #TVAR_afit_pBaseVals[472] //*BU5D05950 zhangsheng 20100422 end>*/ 
s5k5caga_i2c_write(0x0F12, 0x1980);  //1980//1980//0080 // #TVAR_afit_pBaseVals[473]
s5k5caga_i2c_write(0x0F12, 0x0080);  //0080//0080//0080 // #TVAR_afit_pBaseVals[474]
s5k5caga_i2c_write(0x0F12, 0x0080);  //0080//0080//0080 // #TVAR_afit_pBaseVals[475]
s5k5caga_i2c_write(0x0F12, 0x5050);  //5050//5050//5050 // #TVAR_afit_pBaseVals[476]
s5k5caga_i2c_write(0x0F12, 0x0101);  //0101//0101//0101 // #TVAR_afit_pBaseVals[477]
s5k5caga_i2c_write(0x0F12, 0x1C01);  //1C01//3201//1C02 // #TVAR_afit_pBaseVals[478]
s5k5caga_i2c_write(0x0F12, 0x191C);  //191C//1832//191C // #TVAR_afit_pBaseVals[479]
s5k5caga_i2c_write(0x0F12, 0x210C);  //2119//210C//2819 // #TVAR_afit_pBaseVals[480]
s5k5caga_i2c_write(0x0F12, 0x0A00);  //0A00//0A00//0A00 // #TVAR_afit_pBaseVals[481]
s5k5caga_i2c_write(0x0F12, 0x1E04);  //1E04//1E04//1E03 // #TVAR_afit_pBaseVals[482]
s5k5caga_i2c_write(0x0F12, 0x0A08);  //0A08//0A08//1E0F // #TVAR_afit_pBaseVals[483]
s5k5caga_i2c_write(0x0F12, 0x070C);  //070C//070C//0508 // #TVAR_afit_pBaseVals[484]
s5k5caga_i2c_write(0x0F12, 0x3264);  //3264//3264//32FF // #TVAR_afit_pBaseVals[485]
s5k5caga_i2c_write(0x0F12, 0x7E02);  //7E02//7E02//8204 // #TVAR_afit_pBaseVals[486]
s5k5caga_i2c_write(0x0F12, 0x104A);  //104A//104A//1448 // #TVAR_afit_pBaseVals[487]
s5k5caga_i2c_write(0x0F12, 0x4012);  //4012//4012//4015 // #TVAR_afit_pBaseVals[488]
s5k5caga_i2c_write(0x0F12, 0x0604);  //0604//0604//0204 // #TVAR_afit_pBaseVals[489]
s5k5caga_i2c_write(0x0F12, 0x4606);  //4606//4606//5003 // #TVAR_afit_pBaseVals[490]
s5k5caga_i2c_write(0x0F12, 0x0146);  //0146//0146//0150 // #TVAR_afit_pBaseVals[491]
s5k5caga_i2c_write(0x0F12, 0x0101);  //0101//0101//0101 // #TVAR_afit_pBaseVals[492]
s5k5caga_i2c_write(0x0F12, 0x1C18);  //1C18//1C18//1E1E // #TVAR_afit_pBaseVals[493]
s5k5caga_i2c_write(0x0F12, 0x1819);  //1819//1819//1212 // #TVAR_afit_pBaseVals[494]
s5k5caga_i2c_write(0x0F12, 0x0028);  //0028//0028//0028 // #TVAR_afit_pBaseVals[495]
s5k5caga_i2c_write(0x0F12, 0x030A);  //030A//030A//030A // #TVAR_afit_pBaseVals[496]
s5k5caga_i2c_write(0x0F12, 0x0514);  //0514//0514//0A10 // #TVAR_afit_pBaseVals[497]
s5k5caga_i2c_write(0x0F12, 0x0C14);  //0C14//0C14//0819 // #TVAR_afit_pBaseVals[498]
s5k5caga_i2c_write(0x0F12, 0xFF05);  //FF05//FF05//FF05 // #TVAR_afit_pBaseVals[499]
s5k5caga_i2c_write(0x0F12, 0x0432);  //0432//0432//0432 // #TVAR_afit_pBaseVals[500]
s5k5caga_i2c_write(0x0F12, 0x547D);  //547D//547D//4052 // #TVAR_afit_pBaseVals[501]
s5k5caga_i2c_write(0x0F12, 0x1514);  //1514//1514//1514 // #TVAR_afit_pBaseVals[502]
s5k5caga_i2c_write(0x0F12, 0x0440);  //0440//0440//0440 // #TVAR_afit_pBaseVals[503]
s5k5caga_i2c_write(0x0F12, 0x0302);  //0302//0302//0302 // #TVAR_afit_pBaseVals[504]
s5k5caga_i2c_write(0x0F12, 0x4646);  //4646//4646//5050 // #TVAR_afit_pBaseVals[505]
s5k5caga_i2c_write(0x0F12, 0x0101);  //0101//0101//0101 // #TVAR_afit_pBaseVals[506]
s5k5caga_i2c_write(0x0F12, 0x1801);  //1801//1801//1E01 // #TVAR_afit_pBaseVals[507]
s5k5caga_i2c_write(0x0F12, 0x191C);  //191C//191C//121E // #TVAR_afit_pBaseVals[508]
s5k5caga_i2c_write(0x0F12, 0x2818);  //2818//2818//2812 // #TVAR_afit_pBaseVals[509]
s5k5caga_i2c_write(0x0F12, 0x0A00);  //0A00//0A00//0A00 // #TVAR_afit_pBaseVals[510]
s5k5caga_i2c_write(0x0F12, 0x1403);  //1403//1403//1003 // #TVAR_afit_pBaseVals[511]
s5k5caga_i2c_write(0x0F12, 0x1405);  //1405//1405//190A // #TVAR_afit_pBaseVals[512]
s5k5caga_i2c_write(0x0F12, 0x050C);  //050C//050C//0508 // #TVAR_afit_pBaseVals[513]
s5k5caga_i2c_write(0x0F12, 0x32FF);  //32FF//32FF//32FF // #TVAR_afit_pBaseVals[514]
s5k5caga_i2c_write(0x0F12, 0x7D04);  //7D04//7D04//5204 // #TVAR_afit_pBaseVals[515]
s5k5caga_i2c_write(0x0F12, 0x145E);  //145E//145E//1440 // #TVAR_afit_pBaseVals[516]
s5k5caga_i2c_write(0x0F12, 0x4015);  //4015//4015//4015 // #TVAR_afit_pBaseVals[517]
s5k5caga_i2c_write(0x0F12, 0x0204);  //0204//0204//0204 // #TVAR_afit_pBaseVals[518]
s5k5caga_i2c_write(0x0F12, 0x0003);  //0003//0003//0003 // #TVAR_afit_pBaseVals[519]
  // AFIT table (Constants)
s5k5caga_i2c_write(0x0F12, 0x7F7A); // #afit_pConstBaseVals[0]
s5k5caga_i2c_write(0x0F12, 0x7F9D); // #afit_pConstBaseVals[1]
s5k5caga_i2c_write(0x0F12, 0xBEFC); // #afit_pConstBaseVals[2]
s5k5caga_i2c_write(0x0F12, 0xF7BC); // #afit_pConstBaseVals[3]
s5k5caga_i2c_write(0x0F12, 0x7E06); // #afit_pConstBaseVals[4]
s5k5caga_i2c_write(0x0F12, 0x0053); // #afit_pConstBaseVals[5]
  // Update Changed Registers
s5k5caga_i2c_write(0x002A, 0x0664);
s5k5caga_i2c_write(0x0F12, 0x013E); //seti_uContrastCenter

s5k5caga_i2c_write(0x002A, 0x04D6);
s5k5caga_i2c_write(0x0F12, 0x0001); // #REG_TC_DBG_ReInitCmd
s5k5caga_i2c_write(0x0028, 0xD000);
s5k5caga_i2c_write(0x002A, 0x1102);
s5k5caga_i2c_write(0x0F12, 0x00C0); // Use T&P index 22 and 23
s5k5caga_i2c_write(0x002A, 0x113C);
s5k5caga_i2c_write(0x0F12, 0x267C); // Trap 22 address 0x71aa
s5k5caga_i2c_write(0x0F12, 0x2680); // Trap 23 address 0x71b4
s5k5caga_i2c_write(0x002A, 0x1142); 
s5k5caga_i2c_write(0x0F12, 0x00C0); // Trap Up Set (trap Addr are > 0x10000) 
s5k5caga_i2c_write(0x002A, 0x117C); 
s5k5caga_i2c_write(0x0F12, 0x2CE8); // Patch 22 address (TrapAndPatchOpCodes array index 22) 
s5k5caga_i2c_write(0x0F12, 0x2CeC); // Patch 23 address (TrapAndPatchOpCodes array index 23) 
// Fill RAM with alternative op-codes
s5k5caga_i2c_write(0x0028, 0x7000); // start add MSW
s5k5caga_i2c_write(0x002A, 0x2CE8); // start add LSW
s5k5caga_i2c_write(0x0F12, 0x0007); // Modify LSB to control AWBB_YThreshLow
s5k5caga_i2c_write(0x0F12, 0x00e2); // 
s5k5caga_i2c_write(0x0F12, 0x0005); // Modify LSB to control AWBB_YThreshLowBrLow
s5k5caga_i2c_write(0x0F12, 0x00e2); // 
             // Update T&P tuning parameters
s5k5caga_i2c_write(0x002A, 0x337A);
s5k5caga_i2c_write(0x0F12, 0x0006); // #Tune_TP_atop_dbus_reg // 6 is the default HW value
//============================================================
// Frame rate setting 
//============================================================
// How to set
// 1. Exposure value
// dec2hex((1 / (frame rate you want(ms))) * 100d * 4d)
// 2. Analog Digital gain
// dec2hex((Analog gain you want) * 256d)
//============================================================
      // Set preview exposure time
s5k5caga_i2c_write(0x002A, 0x0530);
s5k5caga_i2c_write(0x002A, 0x0530);//lt_uMaxExp1//   
s5k5caga_i2c_write(0x0F12, 0x3415);        
s5k5caga_i2c_write(0x002A, 0x0534);//lt_uMaxExp2//   
s5k5caga_i2c_write(0x0F12, 0x682A);        
s5k5caga_i2c_write(0x002A, 0x167C);//lt_uMaxExp3//   
s5k5caga_i2c_write(0x0F12, 0x8235);        
s5k5caga_i2c_write(0x002A, 0x1680);//lt_uMaxExp4//   
s5k5caga_i2c_write(0x0F12, 0xc350);        
s5k5caga_i2c_write(0x0F12, 0x0000);        
            
s5k5caga_i2c_write(0x002A, 0x0538);//It_uCapMaxExp1 // 
s5k5caga_i2c_write(0x0F12, 0x3415);        
s5k5caga_i2c_write(0x002A, 0x053C);//It_uCapMaxExp2 // 
s5k5caga_i2c_write(0x0F12, 0x682A);        
s5k5caga_i2c_write(0x002A, 0x1684);//It_uCapMaxExp3 // 
s5k5caga_i2c_write(0x0F12, 0x8235);        
s5k5caga_i2c_write(0x002A, 0x1688);//It_uCapMaxExp4 // 
s5k5caga_i2c_write(0x0F12, 0xc350);        
s5k5caga_i2c_write(0x0F12, 0x0000); 

     // Set gain
s5k5caga_i2c_write(0x002A, 0x0540);                     
s5k5caga_i2c_write(0x0F12, 0x0150);//01B3  //0170//0150//lt_uMaxAnGain1_700lux//                
s5k5caga_i2c_write(0x0F12, 0x0190);//01B3 //0200//0400//lt_uMaxAnGain2_400lux//          
s5k5caga_i2c_write(0x002A, 0x168C);                     
s5k5caga_i2c_write(0x0F12, 0x0250);//02A0 //0300//MaxAnGain3_200lux//             
s5k5caga_i2c_write(0x0F12, 0x0600);//0710 //MaxAnGain4 //
            
s5k5caga_i2c_write(0x002A, 0x0544);        
s5k5caga_i2c_write(0x0F12, 0x0100);//It_uMaxDigGain // 
s5k5caga_i2c_write(0x0F12, 0x8000); //Max Gain 8 // 
s5k5caga_i2c_write(0x002A, 0x1694);
s5k5caga_i2c_write(0x0F12, 0x0001); // #evt1_senHal_bExpandForbid
s5k5caga_i2c_write(0x002A, 0x051A);
s5k5caga_i2c_write(0x0F12, 0x0111); // #lt_uLimitHigh 
s5k5caga_i2c_write(0x0F12, 0x00F0); // #lt_uLimitLow

s5k5caga_i2c_write(0x002A, 0x3286);
s5k5caga_i2c_write(0x0F12, 0x0001);  //Pre/Post gamma on(\u76d4\u6c57) 

s5k5caga_i2c_write(0x002A, 0x020E);                                       
s5k5caga_i2c_write(0x0F12, 0x000F); //Contr 
//================================================================================================
// How to set
// 1. MCLK
// 2. System CLK
// 3. PCLK
//================================================================================================
//clk Settings
s5k5caga_i2c_write(0x002A, 0x01CC);     
s5k5caga_i2c_write(0x0F12, 0x5DC0);    //REG_TC_IPRM_InClockLSBs//input clock=24MHz          
s5k5caga_i2c_write(0x0F12, 0x0000);    //REG_TC_IPRM_InClockMSBs  
s5k5caga_i2c_write(0x002A, 0x01EE);   
s5k5caga_i2c_write(0x0F12, 0x0003);    //REG_TC_IPRM_UseNPviClocks         
 
s5k5caga_i2c_write(0x002A, 0x01F6);   
s5k5caga_i2c_write(0x0F12, 0x30d4);    //REG_TC_IPRM_OpClk4KHz_0      2   700001F6         
s5k5caga_i2c_write(0x0F12, 0x32a8);    //REG_TC_IPRM_MinOutRate4KHz_0
s5k5caga_i2c_write(0x0F12, 0x32e8);    //REG_TC_IPRM_MaxOutRate4KHz_0          
         
s5k5caga_i2c_write(0x0F12, 0x30d4);    //REG_TC_IPRM_OpClk4KHz_1     
s5k5caga_i2c_write(0x0F12, 0x589E); //5d80    //REG_TC_IPRM_MinOutRate4KHz_1 2   700001FE 
s5k5caga_i2c_write(0x0F12, 0x591E); //5e00    //REG_TC_IPRM_MaxOutRate4KHz_1 2   70000200 
           
s5k5caga_i2c_write(0x0F12, 0x2904);    //REG_TC_IPRM_OpClk4KHz_2      2   70000202 
s5k5caga_i2c_write(0x0F12, 0x16f0);    //REG_TC_IPRM_MinOutRate4KHz_2 2   70000204 
s5k5caga_i2c_write(0x0F12, 0x17f0);    //REG_TC_IPRM_MaxOutRate4KHz_2 2   70000206 
           
s5k5caga_i2c_write(0x002A, 0x0208);         
s5k5caga_i2c_write(0x0F12, 0x0001);      //REG_TC_IPRM_InitParamsUpdated  

   //Auto Flicker 60Hz Start
s5k5caga_i2c_write(0x0028, 0x7000);
s5k5caga_i2c_write(0x002A, 0x0C18);//#AFC_Default60Hz
s5k5caga_i2c_write(0x0F12, 0x0000);            //0001// #AFC_Default60Hz  1: Auto Flicker 60Hz start 0: Auto Flicker 50Hz start
s5k5caga_i2c_write(0x002A, 0x04D2);// #REG_TC_DBG_AutoAlgEnBits
s5k5caga_i2c_write(0x0F12, 0x067F);

s5k5caga_i2c_write(0x002A, 0x020E);       
s5k5caga_i2c_write(0x0F12, 0x0015);            //Contr

s5k5caga_i2c_write(0x002A, 0x0452);
s5k5caga_i2c_write(0x0F12, 0x0055);   //REG_TC_BRC_usPrevQuality //Best Quality : 85d; Good Quality : 50d;Poor Quality :20d  
s5k5caga_i2c_write(0x0F12, 0x0055);   //REG_TC_BRC_usCaptureQuality //Best Quality : 85d; Good Quality : 50d;Poor Quality :20d


//================================================================================================
// SET PREVIEW CONFIGURATION_0
// # Foramt: YUV422
// # Size:   640*480
// # FPS:   10-30fps(using normal_mode preview)
//================================================================================================
s5k5caga_i2c_write(0x002A, 0x026C);
s5k5caga_i2c_write(0x0F12, 0x0280);   //REG_0TC_PCFG_usWidth        
s5k5caga_i2c_write(0x0F12, 0x01E0);   //REG_0TC_PCFG_usHeight        2   7000026E    //             
s5k5caga_i2c_write(0x0F12, 0x0005);   //REG_0TC_PCFG_Format          2   70000270    //             
s5k5caga_i2c_write(0x0F12, 0x591E); //32e8   //REG_0TC_PCFG_usMaxOut4KHzRate             
s5k5caga_i2c_write(0x0F12, 0x589E); //32a8   //REG_0TC_PCFG_usMinOut4KHzRate             
s5k5caga_i2c_write(0x0F12, 0x0100);   //REG_0TC_PCFG_OutClkPerPix88  2   70000276    //             
s5k5caga_i2c_write(0x0F12, 0x0800);   //REG_0TC_PCFGew_uMaxBpp88       2   70000278    //             
s5k5caga_i2c_write(0x0F12, 0x0052);   //REG_0TC_PCFG_PVIMask         2   7000027A    //92  (1) PCLK inversion  (4)1b_C first (5) UV First           
s5k5caga_i2c_write(0x0F12, 0x0010);   //REG_0TC_PCFG_OIFMask         2   7000027C    //             
s5k5caga_i2c_write(0x0F12, 0x01E0);   //REG_0TC_PCFG_usJpegPacketSize              2   7000027E    //             
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_PCFG_usJpegTotalPackets            2   70000280    //             
s5k5caga_i2c_write(0x0F12, 0x0001);   //REG_0TC_PCFG_uClockInd       2   70000282    //             
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_PCFG_usFrTimeType    2   70000284    //             
s5k5caga_i2c_write(0x0F12, 0x0001);   //REG_0TC_PCFG_FrRateQualityType             2   70000286    //             
s5k5caga_i2c_write(0x0F12, 0x03e8);   //REG_0TC_PCFG_usMaxFrTimeMsecMult10         2   70000288    //             
s5k5caga_i2c_write(0x0F12, 0x014D);   //REG_0TC_PCFG_usMinFrTimeMsecMult10         2   7000028A    //             
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_PCFG_bSmearOutput    2   7000028C    //             
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_PCFG_sSaturation     2   7000028E    //             
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_PCFG_sSharpBlur      2   70000290    //             
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_PCFG_sColorTemp      2   70000292    //             
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_PCFG_uDeviceGammaIndex             2   70000294    //             
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_PCFG_uPrevMirror     2   70000296    //             
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_PCFG_uCaptureMirror  2   70000298    //             
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_PCFG_uRotation       2   7000029A    //          


//================================================================================================
// APPLY PREVIEW CONFIGURATION & RUN PREVIEW
//================================================================================================
s5k5caga_i2c_write(0x002A, 0x023C); 
s5k5caga_i2c_write(0x0F12, 0x0000);  // #REG_TC_GP_ActivePrevConfig // Select preview configuration_0
s5k5caga_i2c_write(0x002A, 0x0240); 
s5k5caga_i2c_write(0x0F12, 0x0001);  // #REG_TC_GP_PrevOpenAfterChange
s5k5caga_i2c_write(0x002A, 0x0230); 
s5k5caga_i2c_write(0x0F12, 0x0001);  // #REG_TC_GP_NewConfigSync // Update preview configuration
s5k5caga_i2c_write(0x002A, 0x023E); 
s5k5caga_i2c_write(0x0F12, 0x0001);  // #REG_TC_GP_PrevConfigChanged
s5k5caga_i2c_write(0x002A, 0x0220); 
s5k5caga_i2c_write(0x0F12, 0x0001);  // #REG_TC_GP_EnablePreview // Start preview
s5k5caga_i2c_write(0x0F12, 0x0001);  // #REG_TC_GP_EnablePreviewChanged
           
//================================================================================================      
// SET Capture CONFIGURATION_0    
// # Foramt : JPEG
// # Size: 3M             
// # FPS : 5fps     
//================================================================================================  
s5k5caga_i2c_write(0x002A, 0x035C);   //Normal capture //     
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_CCFG_uCaptureMode    2   7000035C
s5k5caga_i2c_write(0x0F12, 0x0800);   //REG_0TC_CCFG_usWidth         2   7000035E          //       
s5k5caga_i2c_write(0x0F12, 0x0600);   //REG_0TC_CCFG_usHeight        2   70000360          //       
s5k5caga_i2c_write(0x0F12, 0x0005);   //REG_0TC_CCFG_Format          2   70000362          //       
s5k5caga_i2c_write(0x0F12, 0x591E);  //32e8   //REG_0TC_CCFG_usMaxOut4KHzRate             
s5k5caga_i2c_write(0x0F12, 0x589E);   //32a8   //REG_0TC_CCFG_usMinOut4KHzRate             
s5k5caga_i2c_write(0x0F12, 0x0100);   //REG_0TC_CCFG_OutClkPerPix88  2   70000368          //       
s5k5caga_i2c_write(0x0F12, 0x0800);   //REG_0TC_CCFG_uMaxBpp88       2   7000036A          //       
s5k5caga_i2c_write(0x0F12, 0x0052);   //REG_0TC_CCFG_PVIMask         2   7000036C          //       
s5k5caga_i2c_write(0x0F12, 0x0010);   //REG_0TC_CCFG_OIFMask         2   7000036E          //       
s5k5caga_i2c_write(0x0F12, 0x01E0);   //REG_0TC_CCFG_usJpegPacketSize              2   70000370          //       
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_CCFG_usJpegTotalPackets            2   70000372          //       
s5k5caga_i2c_write(0x0F12, 0x0001);   //REG_0TC_CCFG_uClockInd       2   70000374          //       
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_CCFG_usFrTimeType    2   70000376          //       
s5k5caga_i2c_write(0x0F12, 0x0002);   //REG_0TC_CCFG_FrRateQualityType             2   70000378          //       
s5k5caga_i2c_write(0x0F12, 0x07D0);   //REG_0TC_CCFG_usMaxFrTimeMsecMult10         2   7000037A          //       
s5k5caga_i2c_write(0x0F12, 0x07D0);   //REG_0TC_CCFG_usMinFrTimeMsecMult10         2   7000037C          //       
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_CCFG_bSmearOutput    2   7000037E          //       
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_CCFG_sSaturation     2   70000380          //       
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_CCFG_sSharpBlur      2   70000382          //       
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_CCFG_sColorTemp      2   70000384          //       
s5k5caga_i2c_write(0x0F12, 0x0000);   //REG_0TC_CCFG_uDeviceGammaIndex             2   70000386          //            
      


#if 0
//================================================================================================
// Run capture
//================================================================================================
s5k5caga_i2c_write(0x0028, 0x7000); 
s5k5caga_i2c_write(0x002A, 0x0244); 
s5k5caga_i2c_write(0x0F12, 0x0000);  // #REG_TC_GP_ActiveCapConfig // Select capture configuration_0
s5k5caga_i2c_write(0x002A, 0x0230); 
s5k5caga_i2c_write(0x0F12, 0x0001);  // #REG_TC_GP_NewConfigSync // Update preview configuration
s5k5caga_i2c_write(0x002A, 0x0246); 
s5k5caga_i2c_write(0x0F12, 0x0001);  // #REG_TC_GP_CapConfigChanged
s5k5caga_i2c_write(0x002A, 0x0224); 
s5k5caga_i2c_write(0x0F12, 0x0001);  // #REG_TC_GP_EnableCapture // Start Capture
s5k5caga_i2c_write(0x0F12, 0x0001);  // #REG_TC_GP_EnableCaptureChanged
//================================================================================================
// APPLY PREVIEW CONFIGURATION & RUN PREVIEW
//================================================================================================
s5k5caga_i2c_write(0x002A, 0x023C); 
s5k5caga_i2c_write(0x0F12, 0x0000);  //#REG_TC_GP_ActivePrevConfig
s5k5caga_i2c_write(0x002A, 0x0240); 
s5k5caga_i2c_write(0x0F12, 0x0001);  //#REG_TC_GP_PrevOpenAfterChange
s5k5caga_i2c_write(0x002A, 0x0230); 
s5k5caga_i2c_write(0x0F12, 0x0001);  //#REG_TC_GP_NewConfigSync
s5k5caga_i2c_write(0x002A, 0x023E); 
s5k5caga_i2c_write(0x0F12, 0x0001);  //#REG_TC_GP_PrevConfigChanged
#endif
s5k5caga_i2c_write(0x0028, 0xD000); 
s5k5caga_i2c_write(0x002A, 0x1000); 
s5k5caga_i2c_write(0x0F12, 0x0001);

s5k5caga_i2c_write(0x0028, 0x7000);

CAMERADBG( " ======V01 : Poppy_5CA_Ini_V01_110913 is OK====== \n" );
}

 
 
void preview_mode_change_toCapture_config0(void)
{

s5k5caga_i2c_write(0x0028,   0x7000);

s5k5caga_i2c_write(0x002a,   0x0244); //#REG_TC_GP_ActiveCapConfig
s5k5caga_i2c_write(0x0f12,   0x0000); //num 
s5k5caga_i2c_write(0x0f12,   0x0001); //#REG_TC_GP_CapConfigChanged 
s5k5caga_i2c_write(0x002a,   0x0230);
s5k5caga_i2c_write(0x0f12,   0x0001); //#REG_TC_GP_NewConfigSync
s5k5caga_i2c_write(0x002a,   0x0224);
s5k5caga_i2c_write(0x0f12,   0x0001); //#REG_TC_GP_EnableCapture 
s5k5caga_i2c_write(0x0f12,   0x0001); //#REG_TC_GP_EnableCaptureChanged

CAMERADBG( " ======V01 : preview_mode_change_toCapture_config0 is OK====== \n" );
}


void capture_mode_change_to_Preview_config0(void)
{

s5k5caga_i2c_write(0x0028,   0x7000);

s5k5caga_i2c_write(0x002A,   0x023C); //#REG_TC_GP_ActivePrevConfig                                       
s5k5caga_i2c_write(0x0F12,   0x0000);//,num
s5k5caga_i2c_write(0x002A,   0x0240); //#REG_TC_GP_PrevOpenAfterChange   
s5k5caga_i2c_write(0x0F12,   0x0001);     
s5k5caga_i2c_write(0x002A,   0x0230); //#REG_TC_GP_NewConfigSync                                       
s5k5caga_i2c_write(0x0F12,   0x0001);        
s5k5caga_i2c_write(0x002A,   0x023E); //#REG_TC_GP_PrevConfigChanged                                        
s5k5caga_i2c_write(0x0F12,   0x0001); 

CAMERADBG( " ======V01 : capture_mode_change_to_Preview_config0 is OK====== \n" );

}
 
#endif


/*
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

Effect_0919

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
#if 0
static void EFFECT_AQUA(void)
{
//<CAMTUNING_EFFECT_AQUA>
s5k5caga_i2c_write(0xFCFC, 0xD000);
s5k5caga_i2c_write(0x0028, 0x7000);
s5k5caga_i2c_write(0x002A, 0x021E);
s5k5caga_i2c_write(0x0F12, 0x0005);

CAMERADBG( " ======EFFECT_AQUA is OK====== \n" );
}
#endif


static  void EFFECT_Black_and_White(void)
{
//<CAMTUNING_EFFECT_MONO>
s5k5caga_i2c_write(0xFCFC, 0xD000);
s5k5caga_i2c_write(0x0028, 0x7000);
s5k5caga_i2c_write(0x002A, 0x021E);
s5k5caga_i2c_write(0x0F12, 0x0001);

CAMERADBG( " ======EFFECT_Black_and_White is OK====== \n" );
}

static void EFFECT_Emboss_mono(void)
{
//<CAMTUNING_EFFECT_SKETCH>
s5k5caga_i2c_write(0xFCFC, 0xD000);
s5k5caga_i2c_write(0x0028, 0x7000);

s5k5caga_i2c_write(0x002A, 0x3286);
s5k5caga_i2c_write(0x0F12, 0x0000); //Pre/Post gamma on(\u76d4\u6c57)

s5k5caga_i2c_write(0x002A, 0x021E);
s5k5caga_i2c_write(0x0F12, 0x0008); //Sketch mode

CAMERADBG( " ======EFFECT_Emboss_mono is OK====== \n" );
}

static void EFFECT_Negative(void)
{
//<CAMTUNING_EFFECT_NEGATIVE>
s5k5caga_i2c_write(0xFCFC, 0xD000);
s5k5caga_i2c_write(0x0028, 0x7000);
s5k5caga_i2c_write(0x002A, 0x021E);
s5k5caga_i2c_write(0x0F12, 0x0003);

CAMERADBG( " ======EFFECT_Negative is OK====== \n" );
}


static void EFFECT_Normal(void)
{
//<CAMTUNING_EFFECT_OFF>
s5k5caga_i2c_write(0xFCFC, 0xD000);
s5k5caga_i2c_write(0x0028, 0x7000);

s5k5caga_i2c_write(0x002A, 0x3286);
s5k5caga_i2c_write(0x0F12, 0x0001); //Pre/Post gamma on(\u76d4\u6c57)

s5k5caga_i2c_write(0x002A, 0x021E);
s5k5caga_i2c_write(0x0F12, 0x0000); //Normal mode

CAMERADBG( " ======EFFECT_Normal is OK====== \n" );
}


static void EFFECT_Sepia(void)
{
//<CAMTUNING_EFFECT_SEPIA>
s5k5caga_i2c_write(0xFCFC, 0xD000);
s5k5caga_i2c_write(0x0028, 0x7000);
s5k5caga_i2c_write(0x002A, 0x021E);
s5k5caga_i2c_write(0x0F12, 0x0004);

CAMERADBG( " ======EFFECT_Sepia is OK====== \n" );
}



static void EFFECT_Sketch(void)
{
//<CAMTUNING_EFFECT_SKETCH>
s5k5caga_i2c_write(0xFCFC, 0xD000);
s5k5caga_i2c_write(0x0028, 0x7000);

s5k5caga_i2c_write(0x002A, 0x3286);
s5k5caga_i2c_write(0x0F12, 0x0000); //Pre/Post gamma on(\u76d4\u6c57)

s5k5caga_i2c_write(0x002A, 0x021E);
s5k5caga_i2c_write(0x0F12, 0x0006); //Sketch mode

CAMERADBG( " ======EFFECT_Sketch is OK====== \n" );
}

/*
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

AWB APPLICATION_0920

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/

static void CAMTUNING_WHITE_BALANCE_AUTO(void)
{
s5k5caga_i2c_write(0xfcfc, 0xd000); 
s5k5caga_i2c_write(0x0028, 0x7000); 
s5k5caga_i2c_write(0x002a, 0x246E); 	 
s5k5caga_i2c_write(0x0f12, 0x0001);
CAMERADBG( " ======CAMTUNING_WHITE_BALANCE_AUTO is OK====== \n" );
}

static void CAMTUNING_WHITE_BALANCE_DAYLIGHT(void)
{
s5k5caga_i2c_write(0xfcfc, 0xd000); 
s5k5caga_i2c_write(0x0028, 0x7000); 
s5k5caga_i2c_write(0x002a, 0x246E); 	 
s5k5caga_i2c_write(0x0f12, 0x0000);
s5k5caga_i2c_write(0x002a, 0x04A0); 	 
s5k5caga_i2c_write(0x0f12, 0x05E0);
s5k5caga_i2c_write(0x0f12, 0x0001);
s5k5caga_i2c_write(0x0f12, 0x0400);
s5k5caga_i2c_write(0x0f12, 0x0001);
s5k5caga_i2c_write(0x0f12, 0x0530);
s5k5caga_i2c_write(0x0f12, 0x0001);
CAMERADBG( " ======CAMTUNING_WHITE_BALANCE_DAYLIGHT is OK====== \n" );
}

static void CAMTUNING_WHITE_BALANCE_CLOUDY(void)
{
s5k5caga_i2c_write(0xfcfc, 0xd000); 
s5k5caga_i2c_write(0x0028, 0x7000); 
s5k5caga_i2c_write(0x002a, 0x246E); 	 
s5k5caga_i2c_write(0x0f12, 0x0000);
s5k5caga_i2c_write(0x002a, 0x04A0); 	 
s5k5caga_i2c_write(0x0f12, 0x0740); //0710 
s5k5caga_i2c_write(0x0f12, 0x0001); //0001 
s5k5caga_i2c_write(0x0f12, 0x0400); //0400 
s5k5caga_i2c_write(0x0f12, 0x0001); //0001 
s5k5caga_i2c_write(0x0f12, 0x0460); //0485 
s5k5caga_i2c_write(0x0f12, 0x0001); //0001 
CAMERADBG( " ======CAMTUNING_WHITE_BALANCE_CLOUDY is OK====== \n" );
}

static void CAMTUNING_WHITE_BALANCE_FLUORESCENT(void)
{
s5k5caga_i2c_write(0xfcfc, 0xd000); 
s5k5caga_i2c_write(0x0028, 0x7000); 
s5k5caga_i2c_write(0x002a, 0x246E); 	 
s5k5caga_i2c_write(0x0f12, 0x0000);
s5k5caga_i2c_write(0x002a, 0x04A0); 	 
s5k5caga_i2c_write(0x0f12, 0x0575); 
s5k5caga_i2c_write(0x0f12, 0x0001);
s5k5caga_i2c_write(0x0f12, 0x0400); 
s5k5caga_i2c_write(0x0f12, 0x0001);
s5k5caga_i2c_write(0x0f12, 0x0800); 
s5k5caga_i2c_write(0x0f12, 0x0001);  
CAMERADBG( " ======CAMTUNING_WHITE_BALANCE_FLUORESCENT is OK====== \n" );
}

static void CAMTUNING_WHITE_BALANCE_INCANDESCENT(void)
{
s5k5caga_i2c_write(0xfcfc, 0xd000); 
s5k5caga_i2c_write(0x0028, 0x7000); 
s5k5caga_i2c_write(0x002a, 0x246E); 	 
s5k5caga_i2c_write(0x0f12, 0x0000);
s5k5caga_i2c_write(0x002a, 0x04A0); 	 
s5k5caga_i2c_write(0x0f12, 0x0400);  //03D0
s5k5caga_i2c_write(0x0f12, 0x0001);  //0001
s5k5caga_i2c_write(0x0f12, 0x0400);  //0400
s5k5caga_i2c_write(0x0f12, 0x0001);  //0001
s5k5caga_i2c_write(0x0f12, 0x0940);  //0920
s5k5caga_i2c_write(0x0f12, 0x0001);  //0001
CAMERADBG( " ======CAMTUNING_WHITE_BALANCE_INCANDESCENT is OK====== \n" );
}


/*
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

EV APPLICATION_0920

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/

static void EV_pos2(void)
{
s5k5caga_i2c_write(0x0028, 0x7000);
s5k5caga_i2c_write(0x002A, 0x020C);
s5k5caga_i2c_write(0x0F12, 0x003F);
CAMERADBG( " ======EV +2 is OK====== \n" );
}
static void EV_pos1(void)
{
s5k5caga_i2c_write(0x0028, 0x7000);
s5k5caga_i2c_write(0x002A, 0x020C);
s5k5caga_i2c_write(0x0F12, 0x001F);
CAMERADBG( " ======EV +1 is OK====== \n" );
}
static void EV_pos0(void)//default
{
s5k5caga_i2c_write(0x0028, 0x7000);
s5k5caga_i2c_write(0x002A, 0x020C);
s5k5caga_i2c_write(0x0F12, 0x0000);
CAMERADBG( " ======EV +0 is OK====== \n" );
}
static void EV_neg1(void)
{
s5k5caga_i2c_write(0x0028, 0x7000);
s5k5caga_i2c_write(0x002A, 0x020C);
s5k5caga_i2c_write(0x0F12, 0xFFE0);
CAMERADBG( " ======EV -1 is OK====== \n" );
}
static void EV_neg2(void)
{
s5k5caga_i2c_write(0x0028, 0x7000);
s5k5caga_i2c_write(0x002A, 0x020C);
s5k5caga_i2c_write(0x0F12, 0xFFC0);
CAMERADBG( " ======EV -2 is OK====== \n" );
}

#if 0
/*
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

ZOOM_0922

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
static void zoom_1_00(void)
{
//Zoom Step 1                                                
s5k5caga_i2c_write(0xFCFC, 0xD000);                                              
s5k5caga_i2c_write(0x0028, 0x7000);                                              
s5k5caga_i2c_write(0x002A, 0x0474);                                              
s5k5caga_i2c_write(0x0F12, 0x0100);	//#REG_TC_PZOOM_uZoomTarget88   //x1.00              
s5k5caga_i2c_write(0x002A, 0x0466);                                              
s5k5caga_i2c_write(0x0F12, 0x0002);	//#REG_TC_PZOOM_ZoomPanTiltReques
CAMERADBG( " ======%s is OK====== \n",__FUNCTION__ );
}

static void zoom_1_34(void)
{
//Zoom Step 2                                                                                              
s5k5caga_i2c_write(0xFCFC, 0xD000);                                              
s5k5caga_i2c_write(0x0028, 0x7000);                                              
s5k5caga_i2c_write(0x002A, 0x0474);                                              
s5k5caga_i2c_write(0x0F12, 0x0157);	//#REG_TC_PZOOM_uZoomTarget88   //x1.34             
s5k5caga_i2c_write(0x002A, 0x0466);                                              
s5k5caga_i2c_write(0x0F12, 0x0002);	//#REG_TC_PZOOM_ZoomPanTiltReques
CAMERADBG( " ======%s is OK====== \n",__FUNCTION__ );
}
static void zoom_1_79(void)
{
//Zoom Step 3                                                
s5k5caga_i2c_write(0xFCFC, 0xD000);                                              
s5k5caga_i2c_write(0x0028, 0x7000);                                              
s5k5caga_i2c_write(0x002A, 0x0474);                                              
s5k5caga_i2c_write(0x0F12, 0x01CB);	//#REG_TC_PZOOM_uZoomTarget88   //x1.79             
s5k5caga_i2c_write(0x002A, 0x0466);                                              
s5k5caga_i2c_write(0x0F12, 0x0002);	//#REG_TC_PZOOM_ZoomPanTiltReques
CAMERADBG( " ======%s is OK====== \n",__FUNCTION__ );
}
static void zoom_2_40(void)
{
//Zoom Step 4                                                
s5k5caga_i2c_write(0xFCFC, 0xD000);                                              
s5k5caga_i2c_write(0x0028, 0x7000);                                              
s5k5caga_i2c_write(0x002A, 0x0474);                                              
s5k5caga_i2c_write(0x0F12, 0x0266);	//#REG_TC_PZOOM_uZoomTarget88   //x2.4             
s5k5caga_i2c_write(0x002A, 0x0466);                                              
s5k5caga_i2c_write(0x0F12, 0x0002);	//#REG_TC_PZOOM_ZoomPanTiltReques
CAMERADBG( " ======%s is OK====== \n",__FUNCTION__ );
}
#endif



void Preview_config( unsigned int num )
{
s5k5caga_i2c_write(0xFCFC, 0xD000); //Reset            //
s5k5caga_i2c_write(0x0028, 0x7000); 
  
s5k5caga_i2c_write(0x002A, 0x023C);  //#REG_TC_GP_ActivePrevConfig                                       
s5k5caga_i2c_write(0x0F12, num);  // num
s5k5caga_i2c_write(0x002A, 0x0240);  //#REG_TC_GP_PrevOpenAfterChange   
s5k5caga_i2c_write(0x0F12, 0x0001);      
s5k5caga_i2c_write(0x002A, 0x0230);  //#REG_TC_GP_NewConfigSync                                       
s5k5caga_i2c_write(0x0F12, 0x0001);         
s5k5caga_i2c_write(0x002A, 0x023E);  //#REG_TC_GP_PrevConfigChanged                                        
s5k5caga_i2c_write(0x0F12, 0x0001); 
CAMERADBG( "******************************************************************%s is OK, num=%d ******************************************************************\n",__FUNCTION__,num );
}

void Capture_config( unsigned long  size )
{
s5k5caga_i2c_write(0xFCFC,  0xD000); //Reset            //
s5k5caga_i2c_write(0x0028,   0x7000);
s5k5caga_i2c_write(0x002a,   0x0244); //#REG_TC_GP_ActiveCapConfig

if (size == (2048*1536))
{
CAMERADBG( " capture size : 3M  \n" );
s5k5caga_i2c_write(0x0f12,   0); //num 
}
else if (size == (1600*1200))
{
CAMERADBG( " capture size : 2M  \n" );
s5k5caga_i2c_write(0x0f12,   1); //num 
}
else if (size == (1280*1024))
{
CAMERADBG( " capture size : 1.3M  \n" );
s5k5caga_i2c_write(0x0f12,   2); //num 
}
else if (size == (640*480))
{
CAMERADBG( " capture size : VGA  \n" );
s5k5caga_i2c_write(0x0f12,   3); //num 
}
else
{
printk( " capture size : ERROR camera size, change to 3M  \n" );
s5k5caga_i2c_write(0x0f12,   0); //num 
}

s5k5caga_i2c_write(0x0f12,   0x0001); //#REG_TC_GP_CapConfigChanged 
s5k5caga_i2c_write(0x002a,   0x0230);
s5k5caga_i2c_write(0x0f12,   0x0001); //#REG_TC_GP_NewConfigSync
s5k5caga_i2c_write(0x002a,   0x0224);
s5k5caga_i2c_write(0x0f12,   0x0001); //#REG_TC_GP_EnableCapture 
s5k5caga_i2c_write(0x0f12,   0x0001); //#REG_TC_GP_EnableCaptureChanged

}


/*************************static void zz_poppy_init(void)*************************/
//#include "ZZ_N03.h"
//#include "ZZ_N05.h"
//#include "ZZ_Poppy_5CA_Ini_V03_111027sarah.h"
//#include "ZZ_Poppy_5CA_Ini_V03_110922.h"
#include "ZZ_Poppy_5CA_Ini_V04_111209.h"



