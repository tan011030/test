import pygame
import sys
import random

# 初始化Pygame
pygame.init()

# 设置游戏窗口大小
WIDTH, HEIGHT = 1000, 800
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Alien Invaders")

# 绘制背景
# 绘制背景
background_image = pygame.image.load('C:/vs code file/picture_in_code/beijingtu.png')
# 颜色定义
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)
GREEN = (0, 255, 0)
RED = (255, 0, 0)



# 玩家飞船定义
player_image = pygame.image.load('C:/vs code file/picture_in_code/feichuan.png')  # 你需要准备一个飞船的图像文件
player_rect = player_image.get_rect()
player_rect.centerx = WIDTH // 2
player_rect.bottom = HEIGHT - 10
player_speed = 5

# 子弹定义
bullet_image = pygame.Surface((10, 20))
bullet_image.fill(WHITE)
bullet_rect = bullet_image.get_rect()
bullet_speed = 8
bullets = []

# 外星人定义
alien_image = pygame.image.load('C:/vs code file/picture_in_code/waixingren.png')  # 你需要准备一个外星人的图像文件
alien_list = []
num_aliens = 5
for _ in range(num_aliens):
    alien_rect = alien_image.get_rect()
    alien_rect.x = random.randint(0, WIDTH - alien_rect.width)
    alien_rect.y = random.randint(50, 200)
    alien_speed = random.uniform(1, 3)
    alien_list.append((alien_rect, alien_speed))

# 计分
score = 0
font = pygame.font.Font(None, 36)

# 游戏循环
clock = pygame.time.Clock()

while True:
    # 绘制背景
    screen.blit(background_image, (0, 0)) 
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()
    screen.fill(BLACK)

    # 玩家控制
    keys = pygame.key.get_pressed()
    if keys[pygame.K_LEFT]:
        player_rect.x -= player_speed
    if keys[pygame.K_RIGHT]:
        player_rect.x += player_speed
    if keys[pygame.K_UP]:
        player_rect.y -= player_speed
    if keys[pygame.K_DOWN]:
        player_rect.y += player_speed

    # 子弹发射
    if keys[pygame.K_SPACE]:
        bullet_rect = bullet_image.get_rect()
        bullet_rect.centerx = player_rect.centerx
        bullet_rect.bottom = player_rect.top
        bullets.append(bullet_rect)

    # 移动子弹
    for bullet in bullets:
        bullet.y -= bullet_speed
        if bullet.y <= 0:
            bullets.remove(bullet)

    # 移动外星人
    for alien_rect, alien_speed in alien_list:
        alien_rect.x += alien_speed
        if alien_rect.right >= WIDTH or alien_rect.left <= 0:
            alien_speed *= -1

    # 碰撞检测
    for alien_rect, _ in alien_list:
        for bullet in bullets:
            if bullet.colliderect(alien_rect):
                alien_list.remove((alien_rect, _))
                bullets.remove(bullet)
                score += 10

   
    
    # 绘制玩家飞船
    screen.blit(player_image, player_rect)

    # 绘制外星人
    for alien_rect, _ in alien_list:
        screen.blit(alien_image, alien_rect)

    # 绘制子弹
    for bullet in bullets:
        screen.blit(bullet_image, bullet)

    # 绘制得分
    score_text = font.render(f"Score: {score}", True, WHITE)
    screen.blit(score_text, (10, 10))

    # 更新显示
    pygame.display.flip()
    
    # 控制游戏帧率
    clock.tick(60)
