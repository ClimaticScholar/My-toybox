import pygame
from sys import exit
pygame.init() #initializes_pygame 
screen=pygame.display.set_mode((800,600)) #sets_display_surface
pygame.display.set_caption("A blank screen")
clock=pygame.time.Clock() #required_for_frames 
surface=pygame.Surface((100,200))
surface.fill("Red")
while True:
    for event in pygame.event.get():
        if event.type==pygame.QUIT:
            pygame.quit()
            exit()
    screen.blit(surface,(200,100)) #block_image_transfer
    pygame.display.update() #updates_the_screen 
    clock.tick(60) #framerate_set_to_60
