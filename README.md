# Project4-Gesture-Control-Car
Gesture Control Car Using Radio-Frequency 
# Mô tả 
Thực hiện được những yêu cầu sau:  
- Xe chạy đúng theo cử chỉ tay
- Xe chạy ổn định.
- Điều khiển dùng cảm biến gia tốc (gia tốc kế).
- Điều khiển được xe qua sóng RF.
- Điều khiển được bằng cử chỉ tay
- Xử lý được package data của giao tiếp RF.
# Linh kiện sử dụng
 - Arduino nano x2
 - Cảm biến gia tốc (gia tốc kế) ADXL335
 - Module Radio-Frequency NRF24L01 thu - phát tần số 2.4Hz x2
 - Module điều khiển động cơ DC L298.
 - Động cơ dc 12v x2
# Nguyên lý hoạt động   
Robocar dựa trên dữ liệu nhận được từ cảm biến gia tốc gửi thông qua sóng rf để có thể di chuyển.
Cảm biến gia tốc ADXL335 đo độ lệch của của các giá trị của các tọa độ (x; y) theo không gian 2 chiều.
Rồi gửi giá trị đó qua bộ nhận dữ liệu trên robocar thông qua sóng radio để xử lý. Và điều khiển xe chạy theo tín hiệu nhận được đó.

  
# Demo

Click vào link để xem demo - >> https://youtube.com/shorts/6zXnvOFXxEE?feature=share  

[![Watch the video](https://user-images.githubusercontent.com/67089995/176825423-26dd300c-bf89-4919-9495-8b2bf431be17.png)](https://youtube.com/shorts/6zXnvOFXxEE?feature=share)
