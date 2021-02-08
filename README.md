# __Forager 모작__
---
## 게임소개
---

[![Forager 모작 - 경일 게임아카데미 게임 프로그래밍 22기 3개월차 WinAPI 팀작품 시연](https://img.youtube.com/vi/LDImSS_e2y4/0.jpg)](https://youtu.be/LDImSS_e2y4)

- 본 게임은 Forager의 데모버전을 Windows API를 사용해 모작한 게임입니다.
- Forager는 Stardew Valley나 Terraria, 젤다의 전설 시리즈와 같은 탐험, 농사, 제작 게임들에게 영향을 받은 2D 오픈월드 게임
- 아르헨티나의 게임 개발팀 HopFrog에서 제작한 인디 게임.
기본적으로는 농사와 채광을 중심으로 한 시뮬레이션 성향이 강하나, 맵 곳곳에 끊임없이 적과 자 원, 던전이 생성되므로 게임 플레이의 템포가 매우 빠르다.
- 실제 게임은 : https://store.steampowered.com/app/751780/Forager/ 에서 받을 수 있다.
- 기술 문서 : https://drive.google.com/file/d/1Z-bycoNvQOJfUjWkvxpiNAqRTWF5zdx0/view?usp=sharing
- 게임 플레이영상 :  https://www.youtube.com/watch?v=9pkxdFFf6VM&list=PLmsQqtQKyKzc1xjM9xiGC7gZ6d20irkrH&index=4
## 컨텐츠
---

- 플레이어 : 이동, 대쉬, 채굴, 전투, 
- 인벤토리 : 장비, 아이템, 토지구입, 건설
- 맵 : 월드맵
- 몬스터 : 일반 몬스터, 보스 몬스터, 소환 몬스터



## __실행 방법__

1. exe 파일을 더블 클릭 하여, 게임 실행. 
<br>

___

## __조작법__

### 1. 이동키       

- __'W'키 = 위__  
- __'S'키 = 아래__    
- __'A'키 = 왼쪽__    
- __'D'키 = 오른쪽__  


### 2. 대쉬  

- __'SPACE'키__


### 3. 상호작용 
- __'E'키__

### 4. 공격
- __'마우스 왼쪽 버튼'__

### 5. 메뉴창 열기
- __'I'키__

### 6. 메뉴 상태창 변경
- __'Q , E'키__

### 7. 실시간 프레임 출력
- __'F3'키__

### 8. 게임 강제종료
- __'ESC'키__

___
## __시작 화면__

 - 3개의 게임 월드 슬롯 중 원하는 월드 슬롯을 좌클릭해서 게임 진행 가능 
 
 - **월드 슬롯 위에서 우클릭 시 기존 세이브 파일 삭제!**


    <img src = "https://user-images.githubusercontent.com/55977034/96232803-09b05800-0fd3-11eb-9077-579ac129c9d1.png" width = 400 Height = 200>
     <br> <br>

 - 옵션 버튼을 통해 사운드 조절 가능
  - 게임 종료 버튼으로 종료 가능.


    <img src = "https://user-images.githubusercontent.com/55977034/96232688-02894a00-0fd3-11eb-8849-aab61ed86889.png" width = 400 Height = 200>


 ___
 ## __게임 화면__
- 곡괭이를 든 캐릭터를 조종해서 주변의 자원을 채집.

    <img src = "https://user-images.githubusercontent.com/55977034/96232794-0917c180-0fd3-11eb-8322-345eae7dffd1.png" width = 400 Height =200>
    <br><br>

- 아이템들은 메뉴의 인벤토리 섹션에 저장이 됨.      
    ##### (밑에 사진은 미리보기 용도로 아이템들을 미리 많이 넣어주었다.)

     <img src = "https://user-images.githubusercontent.com/55977034/96232599-fc936900-0fd2-11eb-9a09-4b4f0e3b13f7.png" width = 400 Height =200>
     <br><br>

- 자원을 채집해서 나온 원자재들로 건물을 건설할 수 있음.
- 건물은 메뉴 건설섹션의 건물유형탭에서 설치할 수 있음.

    <img src = "https://user-images.githubusercontent.com/55977034/96232781-07e69480-0fd3-11eb-9cc1-28bd04184072.png" width = 400 Height =200>
     <br><br>

- 다리는 바다를 건널 수 있으며, 생산 건물등을 통해서 자원을 다른 자원이나 완제품으로 가공할 수 있음.
- 획득한 무기는 메뉴의 장비탭 퀵슬롯에 장착이 됨.   
- 퀵슬롯에 등록된 무기는 각각에 대응되는 숫자키를 눌러 플레이어의 장착 무기를 변경할 수 있음.

    <img src = "https://user-images.githubusercontent.com/55977034/96232770-06b56780-0fd3-11eb-9e61-7aad5b07c23b.png" width = 400 Height =200>
     <br><br>
- 칼, 곡괭이, 활 3개의 무기가 있으며, 활은 화살을 발사하여 원거리 공격이 가능함.
- 누르고 있을 수록 활의 공격력이 강해짐.

    <img src = "https://user-images.githubusercontent.com/55977034/96232744-05843a80-0fd3-11eb-8833-203006b71fd3.png" width = 400 Height =200>
     <br><br>


- 메뉴의 토지구입 섹션에서 주변의 섬을 구입해서 땅을 확장할 수 있음.
- 토지가 넓어지면 몬스터가 스폰되기 시작함.
- 섬 구매시 스컬을 소환하는 유령 보스가 일정 확률로 스폰됨.
- 모든 채집활동이나 대시는 스태미나를 소모하며, 몬스터에게 피격되는 경우에도 스태미나가 소모됨.

    <img src = "https://user-images.githubusercontent.com/55977034/96232718-04530d80-0fd3-11eb-9307-046352fa2de1.png" width = 400 Height =200>
     <br><br>

- 스태미나 전부 소진되면 체력을 한칸 깎고, 다시 스태미나가 회복됨.
- 채집활동이나 몬스터 처치 등을 통해 레밸업을 할 경우, 모두 회복.
- 임의로 구현된 퀘스트를 통해 초반부터 활 획득 가능.

    <img src = "https://user-images.githubusercontent.com/55977034/96232708-03ba7700-0fd3-11eb-96ff-5306903e6a88.png" width = 300 Height =200>
     <br><br>

- 메뉴의 옵션탭에서 사운드 조절 가능 및 저장 후 메뉴로 이동 가능.
- 모든 진행 상황은 옵션에서 저장 후 나가거나 게임 오버시 저장됨.






