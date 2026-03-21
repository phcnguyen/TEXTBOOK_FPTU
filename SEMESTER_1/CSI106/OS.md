# Operating System

## Từ mục 3.4 đến hết tài liệu

Tài liệu này là **script thuyết trình hoàn chỉnh**, dựa trên nội dung PDF  
(từ **mục 3.4** cho đến **kết thúc chương**).  
Script được viết để **đọc trực tiếp khi thuyết trình**, giúp người nghe dễ hiểu.

---

## Slide 1 — Tổng Quan & Mục Tiêu

### Script

Hôm nay, mình sẽ trình bày **phần cuối của chương Operating System**, bắt đầu từ **mục 3.4** và kéo dài **đến hết tài liệu**.

Trong phần này, nội dung tập trung vào **hai thành phần rất quan trọng của hệ điều hành**, bao gồm:

- **Device Manager** – thành phần quản lý các thiết bị vào ra
- **File Manager** – thành phần quản lý tập tin và dữ liệu lưu trữ

Sau đó, tài liệu cung cấp một phần **khảo sát tổng quan** về ba hệ điều hành tiêu biểu, đó là:

- UNIX
- Linux
- Windows

Mục tiêu của bài thuyết trình này là giúp mọi người hiểu:
- Hệ điều hành quản lý phần cứng và dữ liệu như thế nào
- Và vì sao mỗi hệ điều hành lại phù hợp với những mục đích sử dụng khác nhau

---

## Slide 2 — Device Manager (Mục 3.4)

### Script

Phần đầu tiên là **Device Manager**, được trình bày trong **mục 3.4 của tài liệu**.

Device Manager là thành phần của hệ điều hành chịu trách nhiệm **quản lý tất cả các thiết bị vào ra**, hay còn gọi là **I/O devices**.

Ví dụ về các thiết bị I/O bao gồm:
- Bàn phím
- Chuột
- Màn hình
- Ổ cứng
- Máy in

Các chương trình người dùng **không được phép truy cập trực tiếp vào phần cứng**.  
Thay vào đó, mọi yêu cầu đều phải thông qua **Device Manager**.

Một vấn đề lớn trong quản lý thiết bị là:
- Có rất nhiều tiến trình đang chạy
- Nhưng số lượng thiết bị thì có hạn

Ví dụ:
- Nhiều chương trình cùng lúc muốn in tài liệu
- Hoặc nhiều tiến trình cùng đọc dữ liệu từ ổ đĩa

Để giải quyết vấn đề này, Device Manager:
- Tạo **hàng đợi (queue)** cho các yêu cầu thiết bị
- Và quyết định **thứ tự xử lý** các yêu cầu đó

Thứ tự xử lý có thể dựa trên:
- FIFO – tiến trình đến trước được xử lý trước
- Hoặc mức độ ưu tiên – tiến trình quan trọng được phục vụ trước

Ngoài ra, Device Manager **không làm việc trực tiếp với phần cứng**,  
mà thông qua một lớp trung gian gọi là **device driver**.

Device driver giúp hệ điều hành giao tiếp đúng cách với phần cứng cụ thể.

Tóm lại, Device Manager giúp:
- Truy cập thiết bị một cách an toàn
- Tránh xung đột giữa các tiến trình
- Và đảm bảo hiệu suất cho hệ thống

---

## Slide 3 — File Manager (Mục 3.5)

### Script

Tiếp theo là **File Manager**, được trình bày trong **mục 3.5 của tài liệu**.

File Manager chịu trách nhiệm **quản lý toàn bộ các tập tin trong hệ thống**.

Các nhiệm vụ chính của File Manager bao gồm:
- Tạo tập tin
- Xoá tập tin
- Đọc và ghi dữ liệu vào tập tin
- Quản lý tên file và cấu trúc thư mục

Một nhiệm vụ rất quan trọng khác của File Manager là **kiểm soát quyền truy cập**.

Ví dụ:
- Ai được phép đọc file?
- Ai được phép ghi file?
- Ai không được phép truy cập?

Việc kiểm soát này giúp:
- Bảo mật dữ liệu
- Tránh lỗi do nhiều tiến trình cùng ghi vào một file

Ngoài ra, File Manager còn quản lý:
- Thông tin mô tả của file như kích thước, ngày tạo, ngày chỉnh sửa
- Việc sao lưu và phục hồi dữ liệu khi có sự cố

Điều quan trọng cần lưu ý là:
👉 **File Manager không trực tiếp làm việc với phần cứng lưu trữ**.

Khi cần đọc hoặc ghi dữ liệu:
- File Manager gửi yêu cầu xuống **Device Manager**
- Device Manager mới thực hiện thao tác trên thiết bị như ổ cứng

Như vậy:
- File Manager quản lý dữ liệu ở mức logic
- Device Manager quản lý thiết bị ở mức vật lý
- Hai thành phần này luôn **phối hợp chặt chẽ với nhau**

---

## Slide 4 — Khảo Sát Các Hệ Điều Hành

### Script

Sau khi trình bày các thành phần chính của hệ điều hành, tài liệu kết thúc bằng phần **khảo sát các hệ điều hành tiêu biểu**.

Đầu tiên là **UNIX**.

UNIX được phát triển vào năm 1969 tại Bell Labs.
Đây là một trong những hệ điều hành có ảnh hưởng lớn nhất trong lịch sử.

UNIX được thiết kế để:
- Hỗ trợ nhiều người dùng
- Chạy nhiều tiến trình cùng lúc
- Có tính di động cao trên nhiều loại phần cứng

Tiếp theo là **Linux**.

Linux được phát triển từ năm 1991 bởi Linus Torvalds.
Linux là hệ điều hành **mã nguồn mở**, được xây dựng dựa trên các ý tưởng của UNIX.

Linux hiện nay rất phổ biến trong:
- Máy chủ
- Hệ thống nhúng
- Và cả máy tính cá nhân thông qua các bản phân phối như Ubuntu hoặc Debian

Cuối cùng là **Windows**.

Windows được phát triển bởi Microsoft.
Hệ điều hành này nổi bật với:
- Giao diện đồ họa thân thiện
- Khả năng hỗ trợ phần mềm rất rộng
- Và được sử dụng phổ biến trên máy tính cá nhân

---

## Slide 5 — Tổng Kết (End)

### Script

Để kết luận phần nội dung từ mục 3.4 đến hết chương:

- **Device Manager** chịu trách nhiệm quản lý các thiết bị phần cứng và I/O
- **File Manager** chịu trách nhiệm quản lý tập tin và dữ liệu

Hai thành phần này là **cốt lõi** giúp hệ điều hành:

- Hoạt động ổn định
- An toàn
- Và hiệu quả

Về các hệ điều hành:

- UNIX và Linux thường được sử dụng trong môi trường máy chủ và kỹ thuật
- Windows phổ biến trong môi trường máy tính cá nhân và người dùng phổ thông

Mặc dù khác nhau về mục đích sử dụng,  
tất cả các hệ điều hành đều dựa trên các thành phần cơ bản của hệ điều hành như:

- Quản lý thiết bị
- Quản lý tập tin
- Quản lý tiến trình và bộ nhớ

Phần trình bày của mình đến đây là hết.  
Cảm ơn mọi người đã lắng nghe.
