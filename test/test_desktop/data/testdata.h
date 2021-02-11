#include <stdint.h>

char axdr1Str[] = "{\"header\":{\"frameformat\":3,\"segmentation\":0,\"datalength\":579,\"client\":65,\"server\":2179,\"control\":19,\"hcs\":\"0XEB85\",\"fcs\":\"0X0BD9\",\"llc\":\"0XE6E700\"},\"apdu\":{\"tag\":15,\"liiap\":\"0X40000000\",\"datetime\":\"00\"},\"payload0XEB85\":[[[\"0000010000FF\",\"07E40B08000C1828FF8000FF\"],[\"0100010700FF\",1303,[0,\"W\"]],[\"0100020700FF\",0,[0,\"W\"]],[\"0100030700FF\",146,[0,\"var\"]],[\"0100040700FF\",0,[0,\"var\"]],[\"01001F0700FF\",25,[-1,\"A\"]],[\"0100330700FF\",25,[-1,\"A\"]],[\"0100470700FF\",15,[-1,\"A\"]],[\"0100200700FF\",2320,[-1,\"V\"]],[\"0100340700FF\",2344,[-1,\"V\"]],[\"0100480700FF\",2345,[-1,\"V\"]],[\"0100150700FF\",561,[0,\"W\"]],[\"0100160700FF\",0,[0,\"W\"]],[\"0100170700FF\",195,[0,\"var\"]],[\"0100180700FF\",0,[0,\"var\"]],[\"0100290700FF\",536,[0,\"W\"]],[\"01002A0700FF\",0,[0,\"W\"]],[\"01002B0700FF\",266,[0,\"var\"]],[\"01002C0700FF\",0,[0,\"var\"]],[\"01003D0700FF\",209,[0,\"W\"]],[\"01003E0700FF\",0,[0,\"W\"]],[\"01003F0700FF\",0,[0,\"var\"]],[\"0100400700FF\",310,[0,\"var\"]],[\"0100010800FF\",210944,[0,\"Wh\"]],[\"0100020800FF\",0,[0,\"Wh\"]],[\"0100030800FF\",12,[0,\"varh\"]],[\"0100040800FF\",66401,[0,\"varh\"]]]]}";

uint8_t axdr1Data[] = {
  0x7e, 0xa2, 0x43, 0x41, 0x08, 0x83, 0x13, 0x85, 0xeb, 0xe6, 0xe7, 0x00,
  0x0f, 0x40, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1b, 0x02, 0x02, 0x09, 0x06,
  0x00, 0x00, 0x01, 0x00, 0x00, 0xff, 0x09, 0x0c, 0x07, 0xe4, 0x0b, 0x08,
  0x00, 0x0c, 0x18, 0x28, 0xff, 0x80, 0x00, 0xff, 0x02, 0x03, 0x09, 0x06,
  0x01, 0x00, 0x01, 0x07, 0x00, 0xff, 0x06, 0x00, 0x00, 0x05, 0x17, 0x02,
  0x02, 0x0f, 0x00, 0x16, 0x1b, 0x02, 0x03, 0x09, 0x06, 0x01, 0x00, 0x02,
  0x07, 0x00, 0xff, 0x06, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x0f, 0x00,
  0x16, 0x1b, 0x02, 0x03, 0x09, 0x06, 0x01, 0x00, 0x03, 0x07, 0x00, 0xff,
  0x06, 0x00, 0x00, 0x00, 0x92, 0x02, 0x02, 0x0f, 0x00, 0x16, 0x1d, 0x02,
  0x03, 0x09, 0x06, 0x01, 0x00, 0x04, 0x07, 0x00, 0xff, 0x06, 0x00, 0x00,
  0x00, 0x00, 0x02, 0x02, 0x0f, 0x00, 0x16, 0x1d, 0x02, 0x03, 0x09, 0x06,
  0x01, 0x00, 0x1f, 0x07, 0x00, 0xff, 0x10, 0x00, 0x19, 0x02, 0x02, 0x0f,
  0xff, 0x16, 0x21, 0x02, 0x03, 0x09, 0x06, 0x01, 0x00, 0x33, 0x07, 0x00,
  0xff, 0x10, 0x00, 0x19, 0x02, 0x02, 0x0f, 0xff, 0x16, 0x21, 0x02, 0x03,
  0x09, 0x06, 0x01, 0x00, 0x47, 0x07, 0x00, 0xff, 0x10, 0x00, 0x0f, 0x02,
  0x02, 0x0f, 0xff, 0x16, 0x21, 0x02, 0x03, 0x09, 0x06, 0x01, 0x00, 0x20,
  0x07, 0x00, 0xff, 0x12, 0x09, 0x10, 0x02, 0x02, 0x0f, 0xff, 0x16, 0x23,
  0x02, 0x03, 0x09, 0x06, 0x01, 0x00, 0x34, 0x07, 0x00, 0xff, 0x12, 0x09,
  0x28, 0x02, 0x02, 0x0f, 0xff, 0x16, 0x23, 0x02, 0x03, 0x09, 0x06, 0x01,
  0x00, 0x48, 0x07, 0x00, 0xff, 0x12, 0x09, 0x29, 0x02, 0x02, 0x0f, 0xff,
  0x16, 0x23, 0x02, 0x03, 0x09, 0x06, 0x01, 0x00, 0x15, 0x07, 0x00, 0xff,
  0x06, 0x00, 0x00, 0x02, 0x31, 0x02, 0x02, 0x0f, 0x00, 0x16, 0x1b, 0x02,
  0x03, 0x09, 0x06, 0x01, 0x00, 0x16, 0x07, 0x00, 0xff, 0x06, 0x00, 0x00,
  0x00, 0x00, 0x02, 0x02, 0x0f, 0x00, 0x16, 0x1b, 0x02, 0x03, 0x09, 0x06,
  0x01, 0x00, 0x17, 0x07, 0x00, 0xff, 0x06, 0x00, 0x00, 0x00, 0xc3, 0x02,
  0x02, 0x0f, 0x00, 0x16, 0x1d, 0x02, 0x03, 0x09, 0x06, 0x01, 0x00, 0x18,
  0x07, 0x00, 0xff, 0x06, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x0f, 0x00,
  0x16, 0x1d, 0x02, 0x03, 0x09, 0x06, 0x01, 0x00, 0x29, 0x07, 0x00, 0xff,
  0x06, 0x00, 0x00, 0x02, 0x18, 0x02, 0x02, 0x0f, 0x00, 0x16, 0x1b, 0x02,
  0x03, 0x09, 0x06, 0x01, 0x00, 0x2a, 0x07, 0x00, 0xff, 0x06, 0x00, 0x00,
  0x00, 0x00, 0x02, 0x02, 0x0f, 0x00, 0x16, 0x1b, 0x02, 0x03, 0x09, 0x06,
  0x01, 0x00, 0x2b, 0x07, 0x00, 0xff, 0x06, 0x00, 0x00, 0x01, 0x0a, 0x02,
  0x02, 0x0f, 0x00, 0x16, 0x1d, 0x02, 0x03, 0x09, 0x06, 0x01, 0x00, 0x2c,
  0x07, 0x00, 0xff, 0x06, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x0f, 0x00,
  0x16, 0x1d, 0x02, 0x03, 0x09, 0x06, 0x01, 0x00, 0x3d, 0x07, 0x00, 0xff,
  0x06, 0x00, 0x00, 0x00, 0xd1, 0x02, 0x02, 0x0f, 0x00, 0x16, 0x1b, 0x02,
  0x03, 0x09, 0x06, 0x01, 0x00, 0x3e, 0x07, 0x00, 0xff, 0x06, 0x00, 0x00,
  0x00, 0x00, 0x02, 0x02, 0x0f, 0x00, 0x16, 0x1b, 0x02, 0x03, 0x09, 0x06,
  0x01, 0x00, 0x3f, 0x07, 0x00, 0xff, 0x06, 0x00, 0x00, 0x00, 0x00, 0x02,
  0x02, 0x0f, 0x00, 0x16, 0x1d, 0x02, 0x03, 0x09, 0x06, 0x01, 0x00, 0x40,
  0x07, 0x00, 0xff, 0x06, 0x00, 0x00, 0x01, 0x36, 0x02, 0x02, 0x0f, 0x00,
  0x16, 0x1d, 0x02, 0x03, 0x09, 0x06, 0x01, 0x00, 0x01, 0x08, 0x00, 0xff,
  0x06, 0x00, 0x03, 0x38, 0x00, 0x02, 0x02, 0x0f, 0x00, 0x16, 0x1e, 0x02,
  0x03, 0x09, 0x06, 0x01, 0x00, 0x02, 0x08, 0x00, 0xff, 0x06, 0x00, 0x00,
  0x00, 0x00, 0x02, 0x02, 0x0f, 0x00, 0x16, 0x1e, 0x02, 0x03, 0x09, 0x06,
  0x01, 0x00, 0x03, 0x08, 0x00, 0xff, 0x06, 0x00, 0x00, 0x00, 0x0c, 0x02,
  0x02, 0x0f, 0x00, 0x16, 0x20, 0x02, 0x03, 0x09, 0x06, 0x01, 0x00, 0x04,
  0x08, 0x00, 0xff, 0x06, 0x00, 0x01, 0x03, 0x61, 0x02, 0x02, 0x0f, 0x00,
  0x16, 0x20, 0xd9, 0x0b, 0x7e
};

char ascii1Str[] = "{\"header\":\"KFM5KAIFA-METER\",\"payload\":[[\"KFM5KAIFA-METER\"],[\"1-3:0.2.8\",40],[\"0-0:1.0.0\",\"150117185916W\"],[\"0-0:96.1.1\",0],[\"1-0:1.8.1\",671.578,\"kWh\"],[\"1-0:1.8.2\",842.472,\"kWh\"],[\"1-0:2.8.1\",0,\"kWh\"],[\"1-0:2.8.2\",0,\"kWh\"],[\"0-0:96.14.0\",1],[\"1-0:1.7.0\",0.333,\"kW\"],[\"1-0:2.7.0\",0,\"kW\"],[\"0-0:17.0.0\",999.9,\"kW\"],[\"0-0:96.3.10\",1],[\"0-0:96.7.21\",8],[\"0-0:96.7.9\",7],[\"1-0:99.97.0\",1,\"0-0:96.7.19\",\"000101000001W\",2.147483647e9,\"s\"],[\"1-0:32.32.0\",0],[\"1-0:32.36.0\",0],[\"0-0:96.13.1\"],[\"0-0:96.13.0\"],[\"1-0:31.7.0\",1,\"A\"],[\"1-0:21.7.0\",0.332,\"kW\"],[\"1-0:22.7.0\",0,\"kW\"],[\"0-1:24.1.0\",3],[\"0-1:96.1.0\",0],[\"0-1:24.2.1\",\"150117180000W\",473.789,\"m3\"],[\"0-1:24.4.0\",1]]}";

uint8_t ascii1Data[] =
  "/KFM5KAIFA-METER\r\n"
  "\r\n"
  "1-3:0.2.8(40)\r\n"
  "0-0:1.0.0(150117185916W)\r\n"
  "0-0:96.1.1(0000000000000000000000000000000000)\r\n"
  "1-0:1.8.1(000671.578*kWh)\r\n"
  "1-0:1.8.2(000842.472*kWh)\r\n"
  "1-0:2.8.1(000000.000*kWh)\r\n"
  "1-0:2.8.2(000000.000*kWh)\r\n"
  "0-0:96.14.0(0001)\r\n"
  "1-0:1.7.0(00.333*kW)\r\n"
  "1-0:2.7.0(00.000*kW)\r\n"
  "0-0:17.0.0(999.9*kW)\r\n"
  "0-0:96.3.10(1)\r\n"
  "0-0:96.7.21(00008)\r\n"
  "0-0:96.7.9(00007)\r\n"
  "1-0:99.97.0(1)(0-0:96.7.19)(000101000001W)(2147483647*s)\r\n"
  "1-0:32.32.0(00000)\r\n"
  "1-0:32.36.0(00000)\r\n"
  "0-0:96.13.1()\r\n"
  "0-0:96.13.0()\r\n"
  "1-0:31.7.0(001*A)\r\n"
  "1-0:21.7.0(00.332*kW)\r\n"
  "1-0:22.7.0(00.000*kW)\r\n"
  "0-1:24.1.0(003)\r\n"
  "0-1:96.1.0(0000000000000000000000000000000000)\r\n"
  "0-1:24.2.1(150117180000W)(00473.789*m3)\r\n"
  "0-1:24.4.0(1)\r\n"
  "!6F4A";

  char ascii2Str[] = "{\"header\":\"ELL4\\\\253833635_A\",\"payload\":[[\"ELL5\\\\253833635_A\"],[\"0-0:1.0.0\",\"201020085222W\"],[\"1-0:1.8.0\",1605.055,\"kWh\"],[\"1-0:2.8.0\",0.131,\"kWh\"],[\"1-0:3.8.0\",3.642,\"kvarh\"],[\"1-0:4.8.0\",185.707,\"kvarh\"],[\"1-0:1.7.0\",6,\"kW\"],[\"1-0:2.7.0\",0,\"kW\"],[\"1-0:3.7.0\",0.2,\"kvar\"],[\"1-0:4.7.0\",0.47,\"kvar\"],[\"1-0:21.7.0\",3.172,\"kW\"],[\"1-0:41.7.0\",0.441,\"kW\"],[\"1-0:61.7.0\",2.386,\"kW\"],[\"1-0:22.7.0\",0,\"kW\"],[\"1-0:42.7.0\",0,\"kW\"],[\"1-0:62.7.0\",0,\"kW\"],[\"1-0:23.7.0\",0,\"kvar\"],[\"1-0:43.7.0\",0.2,\"kvar\"],[\"1-0:63.7.0\",0,\"kvar\"],[\"1-0:24.7.0\",0.222,\"kvar\"],[\"1-0:44.7.0\",0,\"kvar\"],[\"1-0:64.7.0\",0.247,\"kvar\"],[\"1-0:32.7.0\",234.4,\"V\"],[\"1-0:52.7.0\",233.3,\"V\"],[\"1-0:72.7.0\",235.1,\"V\"],[\"1-0:31.7.0\",13.6,\"A\"],[\"1-0:51.7.0\",2,\"A\"],[\"1-0:71.7.0\",10.2,\"A\"]]}";

  uint8_t ascii2Data[] = 
    "/ELL5\\253833635_A\r\n"
    "\r\n"
    "0-0:1.0.0(201020085222W)\r\n"
    "1-0:1.8.0(00001605.055*kWh)\r\n"
    "1-0:2.8.0(00000000.131*kWh)\r\n"
    "1-0:3.8.0(00000003.642*kvarh)\r\n"
    "1-0:4.8.0(00000185.707*kvarh)\r\n"
    "1-0:1.7.0(0006.000*kW)\r\n"
    "1-0:2.7.0(0000.000*kW)\r\n"
    "1-0:3.7.0(0000.200*kvar)\r\n"
    "1-0:4.7.0(0000.470*kvar)\r\n"
    "1-0:21.7.0(0003.172*kW)\r\n"
    "1-0:41.7.0(0000.441*kW)\r\n"
    "1-0:61.7.0(0002.386*kW)\r\n"
    "1-0:22.7.0(0000.000*kW)\r\n"
    "1-0:42.7.0(0000.000*kW)\r\n"
    "1-0:62.7.0(0000.000*kW)\r\n"
    "1-0:23.7.0(0000.000*kvar)\r\n"
    "1-0:43.7.0(0000.200*kvar)\r\n"
    "1-0:63.7.0(0000.000*kvar)\r\n"
    "1-0:24.7.0(0000.222*kvar)\r\n"
    "1-0:44.7.0(0000.000*kvar)\r\n"
    "1-0:64.7.0(0000.247*kvar)\r\n"
    "1-0:32.7.0(234.4*V)\r\n"
    "1-0:52.7.0(233.3*V)\r\n"
    "1-0:72.7.0(235.1*V)\r\n"
    "1-0:31.7.0(013.6*A)\r\n"
    "1-0:51.7.0(002.0*A)\r\n"
    "1-0:71.7.0(010.2*A)\r\n"
    "!80FF\r\n";
