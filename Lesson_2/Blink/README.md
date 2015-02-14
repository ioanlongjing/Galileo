此範例為Intel Galileo 提供Examples 之一
====================

````
// 這邊我們要控制LED 的腳位是13, 先給個名字, 指定一下 
int led = 13;

// 先initialize 腳位, 變數什麼的
// 在setup 這個function 裡的設定, 在reset 或斷電後
// 所有設定都會消失
void setup(void)
{
    pinMode(led, OUTPUT);     	
}

// 設定應該怎樣跑
void loop(void)
{
    digitalWrite(led, HIGH);   // 設定LED 燈亮
    delay(100);                // 持續 100 毫秒
    digitalWrite(led, LOW);    // 設定LED 燈滅
    delay(100);                // 持續 100 毫秒
}

````