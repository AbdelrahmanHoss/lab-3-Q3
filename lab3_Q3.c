#include <stdio.h>
#include <string.h>

typedef struct{
    int day, month, year;
} date;

typedef struct {
    char name[26];
    int kit_number;
    char club;
    date birth_date;
    char position[20];
    
} player_t;

typedef struct {
    char name[21];
    player_t players[10];
    int active_size;
    
} team_t;

void display_menu(){
    printf("1. enroll club\n");
    printf("2. add player\n");
    printf("3. search and update player\n");
    printf("enter choice: ");
}

void enroll_club(team_t teams[], int num_teams, const int MAX_TEAMS){
    if (num_teams>= MAX_TEAMS){
        printf("cannot add more teams\n");
        return;
    }
    printf("enter team name: ");
    scanf("%20s", team[num_teams].name);
    teams[num_teams].active_size = 0;
    return num_teams+1;
    
}

void add_player(team_t teams[], int num_teams){
    printf("select team inddex: ");
    int team_index;
    scanf("%d", &team_index);
    if (team_index >= num_teams || team_index<0){
        printf("invalid team index\n");
        return;
        
        
        
        
        
        
        
        