int key=8;//设置控制按键的数字IO 脚
void setup()
{
  pinMode(key,OUTPUT);//设置数字IO引脚为输出模式
}
void loop()
{
  int i;//定义变量
  while(1)
  {
    i=analogRead(0);//读取模拟0号端口电压值
    if(i>1000)//如果电压值大于 1000
       digitalWrite(key,HIGH);//设置第七引脚为高电平，点亮 led 灯
    else
       digitalWrite(key,LOW);//设置第七引脚为低电平，熄灭 led 灯
  }
}
